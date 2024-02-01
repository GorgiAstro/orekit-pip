#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FieldTransformGenerator.h"
#include "java/util/List.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FieldTransformGenerator::class$ = NULL;
      jmethodID *FieldTransformGenerator::mids$ = NULL;
      bool FieldTransformGenerator::live$ = false;

      jclass FieldTransformGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FieldTransformGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_020632ea4950888f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;ILorg/orekit/frames/TransformProvider;D)V");
          mids$[mid_generate_0499dac7e83b853d] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTransformGenerator::FieldTransformGenerator(const ::org::hipparchus::Field & a0, jint a1, const ::org::orekit::frames::TransformProvider & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_020632ea4950888f, a0.this$, a1, a2.this$, a3)) {}

      ::java::util::List FieldTransformGenerator::generate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_generate_0499dac7e83b853d], a0.this$, a1.this$));
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
      static PyObject *t_FieldTransformGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransformGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTransformGenerator_of_(t_FieldTransformGenerator *self, PyObject *args);
      static int t_FieldTransformGenerator_init_(t_FieldTransformGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTransformGenerator_generate(t_FieldTransformGenerator *self, PyObject *args);
      static PyObject *t_FieldTransformGenerator_get__parameters_(t_FieldTransformGenerator *self, void *data);
      static PyGetSetDef t_FieldTransformGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTransformGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTransformGenerator__methods_[] = {
        DECLARE_METHOD(t_FieldTransformGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransformGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTransformGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTransformGenerator, generate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTransformGenerator)[] = {
        { Py_tp_methods, t_FieldTransformGenerator__methods_ },
        { Py_tp_init, (void *) t_FieldTransformGenerator_init_ },
        { Py_tp_getset, t_FieldTransformGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTransformGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTransformGenerator, t_FieldTransformGenerator, FieldTransformGenerator);
      PyObject *t_FieldTransformGenerator::wrap_Object(const FieldTransformGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTransformGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTransformGenerator *self = (t_FieldTransformGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTransformGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTransformGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTransformGenerator *self = (t_FieldTransformGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTransformGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTransformGenerator), &PY_TYPE_DEF(FieldTransformGenerator), module, "FieldTransformGenerator", 0);
      }

      void t_FieldTransformGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransformGenerator), "class_", make_descriptor(FieldTransformGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransformGenerator), "wrapfn_", make_descriptor(t_FieldTransformGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTransformGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTransformGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTransformGenerator::initializeClass, 1)))
          return NULL;
        return t_FieldTransformGenerator::wrap_Object(FieldTransformGenerator(((t_FieldTransformGenerator *) arg)->object.this$));
      }
      static PyObject *t_FieldTransformGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTransformGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTransformGenerator_of_(t_FieldTransformGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTransformGenerator_init_(t_FieldTransformGenerator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;
        ::org::orekit::frames::TransformProvider a2((jobject) NULL);
        jdouble a3;
        FieldTransformGenerator object((jobject) NULL);

        if (!parseArgs(args, "KIkD", ::org::hipparchus::Field::initializeClass, ::org::orekit::frames::TransformProvider::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
        {
          INT_CALL(object = FieldTransformGenerator(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldTransformGenerator_generate(t_FieldTransformGenerator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.generate(a0, a1));
          return ::java::util::t_List::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "generate", args);
        return NULL;
      }
      static PyObject *t_FieldTransformGenerator_get__parameters_(t_FieldTransformGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonAbstractTimeScales.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/QZSSScale.h"
#include "java/lang/Class.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/TCGScale.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/GalileoScale.h"
#include "org/orekit/frames/EOPHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonAbstractTimeScales::class$ = NULL;
      jmethodID *PythonAbstractTimeScales::mids$ = NULL;
      bool PythonAbstractTimeScales::live$ = false;

      jclass PythonAbstractTimeScales::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonAbstractTimeScales");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getBDT_9d93fd70217d9218] = env->getMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getEopHistory_5f3b1864e8a02d51] = env->getMethodID(cls, "getEopHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getGLONASS_98a4c7e041a431de] = env->getMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
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
          mids$[mid_getUTC_bdbc31f45ed399a7] = env->getMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractTimeScales::PythonAbstractTimeScales() : ::org::orekit::time::AbstractTimeScales(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonAbstractTimeScales::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      ::org::orekit::time::UT1Scale PythonAbstractTimeScales::getUT1(const ::org::orekit::frames::EOPHistory & a0) const
      {
        return ::org::orekit::time::UT1Scale(env->callObjectMethod(this$, mids$[mid_getUT1_0287466dc96c535a], a0.this$));
      }

      jlong PythonAbstractTimeScales::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonAbstractTimeScales::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonAbstractTimeScales_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractTimeScales_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractTimeScales_init_(t_PythonAbstractTimeScales *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractTimeScales_finalize(t_PythonAbstractTimeScales *self);
      static PyObject *t_PythonAbstractTimeScales_getUT1(t_PythonAbstractTimeScales *self, PyObject *args);
      static PyObject *t_PythonAbstractTimeScales_pythonExtension(t_PythonAbstractTimeScales *self, PyObject *args);
      static jobject JNICALL t_PythonAbstractTimeScales_getBDT0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getEopHistory1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonAbstractTimeScales_getGLONASS2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getGPS3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getGST4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getIRNSS5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getQZSS6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTAI7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTCB8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTCG9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTDB10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getTT11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractTimeScales_getUTC12(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonAbstractTimeScales_pythonDecRef13(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractTimeScales_get__self(t_PythonAbstractTimeScales *self, void *data);
      static PyGetSetDef t_PythonAbstractTimeScales__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractTimeScales, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractTimeScales__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractTimeScales, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractTimeScales, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractTimeScales, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractTimeScales, getUT1, METH_VARARGS),
        DECLARE_METHOD(t_PythonAbstractTimeScales, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractTimeScales)[] = {
        { Py_tp_methods, t_PythonAbstractTimeScales__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractTimeScales_init_ },
        { Py_tp_getset, t_PythonAbstractTimeScales__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractTimeScales)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeScales),
        NULL
      };

      DEFINE_TYPE(PythonAbstractTimeScales, t_PythonAbstractTimeScales, PythonAbstractTimeScales);

      void t_PythonAbstractTimeScales::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractTimeScales), &PY_TYPE_DEF(PythonAbstractTimeScales), module, "PythonAbstractTimeScales", 1);
      }

      void t_PythonAbstractTimeScales::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractTimeScales), "class_", make_descriptor(PythonAbstractTimeScales::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractTimeScales), "wrapfn_", make_descriptor(t_PythonAbstractTimeScales::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractTimeScales), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractTimeScales::initializeClass);
        JNINativeMethod methods[] = {
          { "getBDT", "()Lorg/orekit/time/BDTScale;", (void *) t_PythonAbstractTimeScales_getBDT0 },
          { "getEopHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;", (void *) t_PythonAbstractTimeScales_getEopHistory1 },
          { "getGLONASS", "()Lorg/orekit/time/GLONASSScale;", (void *) t_PythonAbstractTimeScales_getGLONASS2 },
          { "getGPS", "()Lorg/orekit/time/GPSScale;", (void *) t_PythonAbstractTimeScales_getGPS3 },
          { "getGST", "()Lorg/orekit/time/GalileoScale;", (void *) t_PythonAbstractTimeScales_getGST4 },
          { "getIRNSS", "()Lorg/orekit/time/IRNSSScale;", (void *) t_PythonAbstractTimeScales_getIRNSS5 },
          { "getQZSS", "()Lorg/orekit/time/QZSSScale;", (void *) t_PythonAbstractTimeScales_getQZSS6 },
          { "getTAI", "()Lorg/orekit/time/TAIScale;", (void *) t_PythonAbstractTimeScales_getTAI7 },
          { "getTCB", "()Lorg/orekit/time/TCBScale;", (void *) t_PythonAbstractTimeScales_getTCB8 },
          { "getTCG", "()Lorg/orekit/time/TCGScale;", (void *) t_PythonAbstractTimeScales_getTCG9 },
          { "getTDB", "()Lorg/orekit/time/TDBScale;", (void *) t_PythonAbstractTimeScales_getTDB10 },
          { "getTT", "()Lorg/orekit/time/TTScale;", (void *) t_PythonAbstractTimeScales_getTT11 },
          { "getUTC", "()Lorg/orekit/time/UTCScale;", (void *) t_PythonAbstractTimeScales_getUTC12 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractTimeScales_pythonDecRef13 },
        };
        env->registerNatives(cls, methods, 14);
      }

      static PyObject *t_PythonAbstractTimeScales_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractTimeScales::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractTimeScales::wrap_Object(PythonAbstractTimeScales(((t_PythonAbstractTimeScales *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractTimeScales_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractTimeScales::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractTimeScales_init_(t_PythonAbstractTimeScales *self, PyObject *args, PyObject *kwds)
      {
        PythonAbstractTimeScales object((jobject) NULL);

        INT_CALL(object = PythonAbstractTimeScales());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAbstractTimeScales_finalize(t_PythonAbstractTimeScales *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractTimeScales_getUT1(t_PythonAbstractTimeScales *self, PyObject *args)
      {
        ::org::orekit::frames::EOPHistory a0((jobject) NULL);
        ::org::orekit::time::UT1Scale result((jobject) NULL);

        if (!parseArgs(args, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getUT1(a0));
          return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
        }

        return callSuper(PY_TYPE(PythonAbstractTimeScales), (PyObject *) self, "getUT1", args, 2);
      }

      static PyObject *t_PythonAbstractTimeScales_pythonExtension(t_PythonAbstractTimeScales *self, PyObject *args)
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

      static jobject JNICALL t_PythonAbstractTimeScales_getBDT0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::BDTScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getBDT", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::BDTScale::initializeClass, &value))
        {
          throwTypeError("getBDT", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getEopHistory1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getEopHistory", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPHistory::initializeClass, &value))
        {
          throwTypeError("getEopHistory", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getGLONASS2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGLONASS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GLONASSScale::initializeClass, &value))
        {
          throwTypeError("getGLONASS", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getGPS3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GPSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGPS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GPSScale::initializeClass, &value))
        {
          throwTypeError("getGPS", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getGST4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGST", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::GalileoScale::initializeClass, &value))
        {
          throwTypeError("getGST", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getIRNSS5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getIRNSS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::IRNSSScale::initializeClass, &value))
        {
          throwTypeError("getIRNSS", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getQZSS6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getQZSS", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::QZSSScale::initializeClass, &value))
        {
          throwTypeError("getQZSS", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getTAI7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TAIScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTAI", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TAIScale::initializeClass, &value))
        {
          throwTypeError("getTAI", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getTCB8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TCBScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTCB", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TCBScale::initializeClass, &value))
        {
          throwTypeError("getTCB", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getTCG9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TCGScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTCG", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TCGScale::initializeClass, &value))
        {
          throwTypeError("getTCG", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getTDB10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TDBScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTDB", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TDBScale::initializeClass, &value))
        {
          throwTypeError("getTDB", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getTT11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::TTScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTT", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::TTScale::initializeClass, &value))
        {
          throwTypeError("getTT", result);
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

      static jobject JNICALL t_PythonAbstractTimeScales_getUTC12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::UTCScale value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getUTC", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::UTCScale::initializeClass, &value))
        {
          throwTypeError("getUTC", result);
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

      static void JNICALL t_PythonAbstractTimeScales_pythonDecRef13(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractTimeScales::mids$[PythonAbstractTimeScales::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractTimeScales_get__self(t_PythonAbstractTimeScales *self, void *data)
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
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/frames/FieldTransform.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/utils/FieldAbsolutePVCoordinates.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "org/orekit/utils/FieldArrayDictionary.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/errors/OrekitIllegalStateException.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldSpacecraftState::class$ = NULL;
      jmethodID *FieldSpacecraftState::mids$ = NULL;
      bool FieldSpacecraftState::live$ = false;

      jclass FieldSpacecraftState::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldSpacecraftState");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_1a045ec744e96d4f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;)V");
          mids$[mid_init$_3e61171636c74f2c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_71aed5266c4a9efa] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;)V");
          mids$[mid_init$_cb7a5911d1f496a6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_8a058bf9b40fd2fe] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_0766a0f0e0614e42] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;)V");
          mids$[mid_init$_f1d8b1a7fbc93a08] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_09b3917f9d3fcbc5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_init$_a445aea77f92643d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_71779f1881a05cb7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_7e8edfdcf4f68947] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_b4cbbd8bb76d683f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_fdb0399f43606ae1] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_f1155a3d8ec0adf6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_6fd5a049114568f0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_829d8965b2e45861] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_6fc1795cd0903e51] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_a0e9deee516238c0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldAbsolutePVCoordinates;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_init$_7b2894296824b39a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/FieldAttitude;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary;Lorg/orekit/utils/FieldArrayDictionary;)V");
          mids$[mid_addAdditionalState_bf6fff8920704877] = env->getMethodID(cls, "addAdditionalState", "(Ljava/lang/String;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_addAdditionalStateDerivative_bf6fff8920704877] = env->getMethodID(cls, "addAdditionalStateDerivative", "(Ljava/lang/String;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_ensureCompatibleAdditionalStates_8062511934471166] = env->getMethodID(cls, "ensureCompatibleAdditionalStates", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
          mids$[mid_getA_08d37e3f77b7239d] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAbsPVA_a3998fbb00eb6984] = env->getMethodID(cls, "getAbsPVA", "()Lorg/orekit/utils/FieldAbsolutePVCoordinates;");
          mids$[mid_getAdditionalState_9b6ce7af1b312c95] = env->getMethodID(cls, "getAdditionalState", "(Ljava/lang/String;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAdditionalStateDerivative_9b6ce7af1b312c95] = env->getMethodID(cls, "getAdditionalStateDerivative", "(Ljava/lang/String;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAdditionalStatesDerivatives_110e6e63d71fe768] = env->getMethodID(cls, "getAdditionalStatesDerivatives", "()Lorg/orekit/utils/FieldArrayDictionary;");
          mids$[mid_getAdditionalStatesValues_110e6e63d71fe768] = env->getMethodID(cls, "getAdditionalStatesValues", "()Lorg/orekit/utils/FieldArrayDictionary;");
          mids$[mid_getAttitude_7e6a14fa68aa3e5f] = env->getMethodID(cls, "getAttitude", "()Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getDate_1fea28374011eef5] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getE_08d37e3f77b7239d] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_08d37e3f77b7239d] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getHx_08d37e3f77b7239d] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_08d37e3f77b7239d] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_08d37e3f77b7239d] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getKeplerianMeanMotion_08d37e3f77b7239d] = env->getMethodID(cls, "getKeplerianMeanMotion", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getKeplerianPeriod_08d37e3f77b7239d] = env->getMethodID(cls, "getKeplerianPeriod", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_08d37e3f77b7239d] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_08d37e3f77b7239d] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_08d37e3f77b7239d] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMass_08d37e3f77b7239d] = env->getMethodID(cls, "getMass", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMu_08d37e3f77b7239d] = env->getMethodID(cls, "getMu", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOrbit_5b5bea4bdba413a2] = env->getMethodID(cls, "getOrbit", "()Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_getPVCoordinates_be698fa91827b9b2] = env->getMethodID(cls, "getPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPVCoordinates_cb22ebaaad002a3b] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_d1b42a6748e907f9] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getPosition_04c84225ba0acc81] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_hasAdditionalState_df4c65b2aede5c41] = env->getMethodID(cls, "hasAdditionalState", "(Ljava/lang/String;)Z");
          mids$[mid_hasAdditionalStateDerivative_df4c65b2aede5c41] = env->getMethodID(cls, "hasAdditionalStateDerivative", "(Ljava/lang/String;)Z");
          mids$[mid_isOrbitDefined_eee3de00fe971136] = env->getMethodID(cls, "isOrbitDefined", "()Z");
          mids$[mid_shiftedBy_3a76ce7715466d38] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_shiftedBy_c950412b2168bf4c] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/FieldSpacecraftState;");
          mids$[mid_toSpacecraftState_8fbfa58855031235] = env->getMethodID(cls, "toSpacecraftState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_toStaticTransform_bfbe5d9ed8a9e205] = env->getMethodID(cls, "toStaticTransform", "()Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toTransform_c58e1d0e1f3afd7d] = env->getMethodID(cls, "toTransform", "()Lorg/orekit/frames/FieldTransform;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1a045ec744e96d4f, a0.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e61171636c74f2c, a0.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_71aed5266c4a9efa, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::utils::FieldArrayDictionary & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cb7a5911d1f496a6, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8a058bf9b40fd2fe, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0766a0f0e0614e42, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::utils::FieldArrayDictionary & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f1d8b1a7fbc93a08, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::hipparchus::Field & a0, const ::org::orekit::propagation::SpacecraftState & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_09b3917f9d3fcbc5, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a445aea77f92643d, a0.this$, a1.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::orekit::utils::FieldArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_71779f1881a05cb7, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7e8edfdcf4f68947, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b4cbbd8bb76d683f, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::orekit::utils::FieldArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fdb0399f43606ae1, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f1155a3d8ec0adf6, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::utils::FieldArrayDictionary & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6fd5a049114568f0, a0.this$, a1.this$, a2.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::FieldArrayDictionary & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_829d8965b2e45861, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::FieldArrayDictionary & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6fc1795cd0903e51, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::utils::FieldAbsolutePVCoordinates & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::FieldArrayDictionary & a3, const ::org::orekit::utils::FieldArrayDictionary & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a0e9deee516238c0, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldSpacecraftState::FieldSpacecraftState(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::utils::FieldArrayDictionary & a3, const ::org::orekit::utils::FieldArrayDictionary & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7b2894296824b39a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldSpacecraftState FieldSpacecraftState::addAdditionalState(const ::java::lang::String & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_addAdditionalState_bf6fff8920704877], a0.this$, a1.this$));
      }

      FieldSpacecraftState FieldSpacecraftState::addAdditionalStateDerivative(const ::java::lang::String & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_addAdditionalStateDerivative_bf6fff8920704877], a0.this$, a1.this$));
      }

      void FieldSpacecraftState::ensureCompatibleAdditionalStates(const FieldSpacecraftState & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_ensureCompatibleAdditionalStates_8062511934471166], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_08d37e3f77b7239d]));
      }

      ::org::orekit::utils::FieldAbsolutePVCoordinates FieldSpacecraftState::getAbsPVA() const
      {
        return ::org::orekit::utils::FieldAbsolutePVCoordinates(env->callObjectMethod(this$, mids$[mid_getAbsPVA_a3998fbb00eb6984]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldSpacecraftState::getAdditionalState(const ::java::lang::String & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_9b6ce7af1b312c95], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldSpacecraftState::getAdditionalStateDerivative(const ::java::lang::String & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getAdditionalStateDerivative_9b6ce7af1b312c95], a0.this$));
      }

      ::org::orekit::utils::FieldArrayDictionary FieldSpacecraftState::getAdditionalStatesDerivatives() const
      {
        return ::org::orekit::utils::FieldArrayDictionary(env->callObjectMethod(this$, mids$[mid_getAdditionalStatesDerivatives_110e6e63d71fe768]));
      }

      ::org::orekit::utils::FieldArrayDictionary FieldSpacecraftState::getAdditionalStatesValues() const
      {
        return ::org::orekit::utils::FieldArrayDictionary(env->callObjectMethod(this$, mids$[mid_getAdditionalStatesValues_110e6e63d71fe768]));
      }

      ::org::orekit::attitudes::FieldAttitude FieldSpacecraftState::getAttitude() const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_7e6a14fa68aa3e5f]));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldSpacecraftState::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_1fea28374011eef5]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_08d37e3f77b7239d]));
      }

      ::org::orekit::frames::Frame FieldSpacecraftState::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getKeplerianMeanMotion() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianMeanMotion_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getKeplerianPeriod() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getKeplerianPeriod_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getMass() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMass_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldSpacecraftState::getMu() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_08d37e3f77b7239d]));
      }

      ::org::orekit::orbits::FieldOrbit FieldSpacecraftState::getOrbit() const
      {
        return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_getOrbit_5b5bea4bdba413a2]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldSpacecraftState::getPVCoordinates() const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_be698fa91827b9b2]));
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates FieldSpacecraftState::getPVCoordinates(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_cb22ebaaad002a3b], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldSpacecraftState::getPosition() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_d1b42a6748e907f9]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldSpacecraftState::getPosition(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_04c84225ba0acc81], a0.this$));
      }

      jboolean FieldSpacecraftState::hasAdditionalState(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasAdditionalState_df4c65b2aede5c41], a0.this$);
      }

      jboolean FieldSpacecraftState::hasAdditionalStateDerivative(const ::java::lang::String & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasAdditionalStateDerivative_df4c65b2aede5c41], a0.this$);
      }

      jboolean FieldSpacecraftState::isOrbitDefined() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isOrbitDefined_eee3de00fe971136]);
      }

      FieldSpacecraftState FieldSpacecraftState::shiftedBy(jdouble a0) const
      {
        return FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_shiftedBy_3a76ce7715466d38], a0));
      }

      FieldSpacecraftState FieldSpacecraftState::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_shiftedBy_c950412b2168bf4c], a0.this$));
      }

      ::org::orekit::propagation::SpacecraftState FieldSpacecraftState::toSpacecraftState() const
      {
        return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_toSpacecraftState_8fbfa58855031235]));
      }

      ::org::orekit::frames::FieldStaticTransform FieldSpacecraftState::toStaticTransform() const
      {
        return ::org::orekit::frames::FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_toStaticTransform_bfbe5d9ed8a9e205]));
      }

      ::java::lang::String FieldSpacecraftState::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      ::org::orekit::frames::FieldTransform FieldSpacecraftState::toTransform() const
      {
        return ::org::orekit::frames::FieldTransform(env->callObjectMethod(this$, mids$[mid_toTransform_c58e1d0e1f3afd7d]));
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
      static PyObject *t_FieldSpacecraftState_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_of_(t_FieldSpacecraftState *self, PyObject *args);
      static int t_FieldSpacecraftState_init_(t_FieldSpacecraftState *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldSpacecraftState_addAdditionalState(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_addAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_ensureCompatibleAdditionalStates(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_getA(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getAbsPVA(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getAdditionalState(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_getAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_getAdditionalStatesDerivatives(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getAdditionalStatesValues(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getAttitude(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getDate(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getE(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getEquinoctialEx(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getEquinoctialEy(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getFrame(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getHx(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getHy(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getI(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getKeplerianMeanMotion(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getKeplerianPeriod(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getLE(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getLM(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getLv(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getMass(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getMu(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getOrbit(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_getPVCoordinates(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_getPosition(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_hasAdditionalState(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_hasAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *arg);
      static PyObject *t_FieldSpacecraftState_isOrbitDefined(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_shiftedBy(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_toSpacecraftState(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_toStaticTransform(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_toString(t_FieldSpacecraftState *self, PyObject *args);
      static PyObject *t_FieldSpacecraftState_toTransform(t_FieldSpacecraftState *self);
      static PyObject *t_FieldSpacecraftState_get__a(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__absPVA(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__additionalStatesDerivatives(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__additionalStatesValues(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__attitude(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__date(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__e(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__equinoctialEx(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__equinoctialEy(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__frame(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__hx(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__hy(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__i(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__keplerianMeanMotion(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__keplerianPeriod(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__lE(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__lM(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__lv(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__mass(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__mu(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__orbit(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__orbitDefined(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__pVCoordinates(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__position(t_FieldSpacecraftState *self, void *data);
      static PyObject *t_FieldSpacecraftState_get__parameters_(t_FieldSpacecraftState *self, void *data);
      static PyGetSetDef t_FieldSpacecraftState__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSpacecraftState, a),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, absPVA),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, additionalStatesDerivatives),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, additionalStatesValues),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, attitude),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, date),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, e),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, equinoctialEx),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, equinoctialEy),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, frame),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, hx),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, hy),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, i),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, keplerianMeanMotion),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, keplerianPeriod),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, lE),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, lM),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, lv),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, mass),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, mu),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, orbit),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, orbitDefined),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, pVCoordinates),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, position),
        DECLARE_GET_FIELD(t_FieldSpacecraftState, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSpacecraftState__methods_[] = {
        DECLARE_METHOD(t_FieldSpacecraftState, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSpacecraftState, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSpacecraftState, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, addAdditionalState, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, addAdditionalStateDerivative, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, ensureCompatibleAdditionalStates, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, getA, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getAbsPVA, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getAdditionalState, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, getAdditionalStateDerivative, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, getAdditionalStatesDerivatives, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getAdditionalStatesValues, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getAttitude, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getE, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getEquinoctialEx, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getEquinoctialEy, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getHx, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getHy, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getI, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getKeplerianMeanMotion, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getKeplerianPeriod, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getLE, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getLM, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getLv, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getMass, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getMu, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getOrbit, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, hasAdditionalState, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, hasAdditionalStateDerivative, METH_O),
        DECLARE_METHOD(t_FieldSpacecraftState, isOrbitDefined, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, toSpacecraftState, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, toStaticTransform, METH_NOARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldSpacecraftState, toTransform, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSpacecraftState)[] = {
        { Py_tp_methods, t_FieldSpacecraftState__methods_ },
        { Py_tp_init, (void *) t_FieldSpacecraftState_init_ },
        { Py_tp_getset, t_FieldSpacecraftState__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSpacecraftState)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldSpacecraftState, t_FieldSpacecraftState, FieldSpacecraftState);
      PyObject *t_FieldSpacecraftState::wrap_Object(const FieldSpacecraftState& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSpacecraftState::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSpacecraftState *self = (t_FieldSpacecraftState *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSpacecraftState::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSpacecraftState::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSpacecraftState *self = (t_FieldSpacecraftState *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSpacecraftState::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSpacecraftState), &PY_TYPE_DEF(FieldSpacecraftState), module, "FieldSpacecraftState", 0);
      }

      void t_FieldSpacecraftState::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftState), "class_", make_descriptor(FieldSpacecraftState::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftState), "wrapfn_", make_descriptor(t_FieldSpacecraftState::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSpacecraftState), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSpacecraftState_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSpacecraftState::initializeClass, 1)))
          return NULL;
        return t_FieldSpacecraftState::wrap_Object(FieldSpacecraftState(((t_FieldSpacecraftState *) arg)->object.this$));
      }
      static PyObject *t_FieldSpacecraftState_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSpacecraftState::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSpacecraftState_of_(t_FieldSpacecraftState *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldSpacecraftState_init_(t_FieldSpacecraftState *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldArrayDictionary a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::utils::FieldArrayDictionary a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldArrayDictionary a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldArrayDictionary a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldArrayDictionary a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldArrayDictionary a2((jobject) NULL);
            PyTypeObject **p2;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldArrayDictionary a3((jobject) NULL);
            PyTypeObject **p3;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldArrayDictionary a3((jobject) NULL);
            PyTypeObject **p3;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::utils::FieldAbsolutePVCoordinates a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldArrayDictionary a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldArrayDictionary a4((jobject) NULL);
            PyTypeObject **p4;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKKKK", ::org::orekit::utils::FieldAbsolutePVCoordinates::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldAbsolutePVCoordinates::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldArrayDictionary::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::utils::FieldArrayDictionary a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::utils::FieldArrayDictionary a4((jobject) NULL);
            PyTypeObject **p4;
            FieldSpacecraftState object((jobject) NULL);

            if (!parseArgs(args, "KKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, ::org::orekit::utils::FieldArrayDictionary::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::utils::t_FieldArrayDictionary::parameters_, &a4, &p4, ::org::orekit::utils::t_FieldArrayDictionary::parameters_))
            {
              INT_CALL(object = FieldSpacecraftState(a0, a1, a2, a3, a4));
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

      static PyObject *t_FieldSpacecraftState_addAdditionalState(t_FieldSpacecraftState *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "s[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.addAdditionalState(a0, a1));
          return t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalState", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_addAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSpacecraftState result((jobject) NULL);

        if (!parseArgs(args, "s[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.addAdditionalStateDerivative(a0, a1));
          return t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addAdditionalStateDerivative", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_ensureCompatibleAdditionalStates(t_FieldSpacecraftState *self, PyObject *arg)
      {
        FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", FieldSpacecraftState::initializeClass, &a0, &p0, t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(self->object.ensureCompatibleAdditionalStates(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "ensureCompatibleAdditionalStates", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_getA(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getA());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getAbsPVA(t_FieldSpacecraftState *self)
      {
        ::org::orekit::utils::FieldAbsolutePVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getAbsPVA());
        return ::org::orekit::utils::t_FieldAbsolutePVCoordinates::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getAdditionalState(t_FieldSpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalState(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_getAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.getAdditionalStateDerivative(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "getAdditionalStateDerivative", arg);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_getAdditionalStatesDerivatives(t_FieldSpacecraftState *self)
      {
        ::org::orekit::utils::FieldArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStatesDerivatives());
        return ::org::orekit::utils::t_FieldArrayDictionary::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getAdditionalStatesValues(t_FieldSpacecraftState *self)
      {
        ::org::orekit::utils::FieldArrayDictionary result((jobject) NULL);
        OBJ_CALL(result = self->object.getAdditionalStatesValues());
        return ::org::orekit::utils::t_FieldArrayDictionary::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getAttitude(t_FieldSpacecraftState *self)
      {
        ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);
        OBJ_CALL(result = self->object.getAttitude());
        return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getDate(t_FieldSpacecraftState *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getE(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getEquinoctialEx(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getEquinoctialEy(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getEquinoctialEy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getFrame(t_FieldSpacecraftState *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getHx(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHx());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getHy(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getHy());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getI(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getI());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getKeplerianMeanMotion(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getKeplerianMeanMotion());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getKeplerianPeriod(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getKeplerianPeriod());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getLE(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLE());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getLM(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLM());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getLv(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLv());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getMass(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMass());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getMu(t_FieldSpacecraftState *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getMu());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_getOrbit(t_FieldSpacecraftState *self)
      {
        ::org::orekit::orbits::FieldOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbit());
        return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_getPVCoordinates(t_FieldSpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);
            OBJ_CALL(result = self->object.getPVCoordinates());
            return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPVCoordinates", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_getPosition(t_FieldSpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getPosition());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }
          break;
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getPosition", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_hasAdditionalState(t_FieldSpacecraftState *self, PyObject *arg)
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

      static PyObject *t_FieldSpacecraftState_hasAdditionalStateDerivative(t_FieldSpacecraftState *self, PyObject *arg)
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

      static PyObject *t_FieldSpacecraftState_isOrbitDefined(t_FieldSpacecraftState *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isOrbitDefined());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldSpacecraftState_shiftedBy(t_FieldSpacecraftState *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.shiftedBy(a0));
              return t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldSpacecraftState_toSpacecraftState(t_FieldSpacecraftState *self)
      {
        ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
        OBJ_CALL(result = self->object.toSpacecraftState());
        return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
      }

      static PyObject *t_FieldSpacecraftState_toStaticTransform(t_FieldSpacecraftState *self)
      {
        ::org::orekit::frames::FieldStaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toStaticTransform());
        return ::org::orekit::frames::t_FieldStaticTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldSpacecraftState_toString(t_FieldSpacecraftState *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldSpacecraftState), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldSpacecraftState_toTransform(t_FieldSpacecraftState *self)
      {
        ::org::orekit::frames::FieldTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.toTransform());
        return ::org::orekit::frames::t_FieldTransform::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldSpacecraftState_get__parameters_(t_FieldSpacecraftState *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldSpacecraftState_get__a(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getA());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__absPVA(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::utils::FieldAbsolutePVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getAbsPVA());
        return ::org::orekit::utils::t_FieldAbsolutePVCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__additionalStatesDerivatives(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::utils::FieldArrayDictionary value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStatesDerivatives());
        return ::org::orekit::utils::t_FieldArrayDictionary::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__additionalStatesValues(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::utils::FieldArrayDictionary value((jobject) NULL);
        OBJ_CALL(value = self->object.getAdditionalStatesValues());
        return ::org::orekit::utils::t_FieldArrayDictionary::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__attitude(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::attitudes::FieldAttitude value((jobject) NULL);
        OBJ_CALL(value = self->object.getAttitude());
        return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__date(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__e(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__equinoctialEx(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__equinoctialEy(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__frame(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__hx(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHx());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__hy(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getHy());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__i(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getI());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__keplerianMeanMotion(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getKeplerianMeanMotion());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__keplerianPeriod(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getKeplerianPeriod());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__lE(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLE());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__lM(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLM());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__lv(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLv());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__mass(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMass());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__mu(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getMu());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__orbit(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::orbits::FieldOrbit value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbit());
        return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__orbitDefined(t_FieldSpacecraftState *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isOrbitDefined());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldSpacecraftState_get__pVCoordinates(t_FieldSpacecraftState *self, void *data)
      {
        ::org::orekit::utils::TimeStampedFieldPVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getPVCoordinates());
        return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(value);
      }

      static PyObject *t_FieldSpacecraftState_get__position(t_FieldSpacecraftState *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getPosition());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Perturbations.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *PerturbationsKey::class$ = NULL;
              jmethodID *PerturbationsKey::mids$ = NULL;
              bool PerturbationsKey::live$ = false;
              PerturbationsKey *PerturbationsKey::ALBEDO_GRID_SIZE = NULL;
              PerturbationsKey *PerturbationsKey::ALBEDO_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::ATMOSPHERIC_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::CENTRAL_BODY_ROTATION = NULL;
              PerturbationsKey *PerturbationsKey::COMMENT = NULL;
              PerturbationsKey *PerturbationsKey::EQUATORIAL_RADIUS = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_F10P7 = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_F10P7_MEAN = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_GEOMAG_AP = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_GEOMAG_DST = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_GEOMAG_KP = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_M10P7 = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_M10P7_MEAN = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_S10P7 = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_S10P7_MEAN = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_Y10P7 = NULL;
              PerturbationsKey *PerturbationsKey::FIXED_Y10P7_MEAN = NULL;
              PerturbationsKey *PerturbationsKey::GM = NULL;
              PerturbationsKey *PerturbationsKey::GRAVITY_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::N_BODY_PERTURBATIONS = NULL;
              PerturbationsKey *PerturbationsKey::OBLATE_FLATTENING = NULL;
              PerturbationsKey *PerturbationsKey::OCEAN_TIDES_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::REDUCTION_THEORY = NULL;
              PerturbationsKey *PerturbationsKey::SHADOW_BODIES = NULL;
              PerturbationsKey *PerturbationsKey::SHADOW_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::SOLID_TIDES_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::SRP_MODEL = NULL;
              PerturbationsKey *PerturbationsKey::SW_DATA_EPOCH = NULL;
              PerturbationsKey *PerturbationsKey::SW_DATA_SOURCE = NULL;
              PerturbationsKey *PerturbationsKey::SW_INTERP_METHOD = NULL;

              jclass PerturbationsKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_c1d49e251bdbf4cd] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/Perturbations;)Z");
                  mids$[mid_valueOf_1cd89fcc06ad788d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;");
                  mids$[mid_values_e473c269710650b8] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  ALBEDO_GRID_SIZE = new PerturbationsKey(env->getStaticObjectField(cls, "ALBEDO_GRID_SIZE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  ALBEDO_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "ALBEDO_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  ATMOSPHERIC_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "ATMOSPHERIC_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  CENTRAL_BODY_ROTATION = new PerturbationsKey(env->getStaticObjectField(cls, "CENTRAL_BODY_ROTATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  COMMENT = new PerturbationsKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  EQUATORIAL_RADIUS = new PerturbationsKey(env->getStaticObjectField(cls, "EQUATORIAL_RADIUS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_F10P7 = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_F10P7", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_F10P7_MEAN = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_F10P7_MEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_GEOMAG_AP = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_GEOMAG_AP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_GEOMAG_DST = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_GEOMAG_DST", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_GEOMAG_KP = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_GEOMAG_KP", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_M10P7 = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_M10P7", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_M10P7_MEAN = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_M10P7_MEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_S10P7 = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_S10P7", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_S10P7_MEAN = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_S10P7_MEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_Y10P7 = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_Y10P7", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  FIXED_Y10P7_MEAN = new PerturbationsKey(env->getStaticObjectField(cls, "FIXED_Y10P7_MEAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  GM = new PerturbationsKey(env->getStaticObjectField(cls, "GM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  GRAVITY_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "GRAVITY_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  N_BODY_PERTURBATIONS = new PerturbationsKey(env->getStaticObjectField(cls, "N_BODY_PERTURBATIONS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  OBLATE_FLATTENING = new PerturbationsKey(env->getStaticObjectField(cls, "OBLATE_FLATTENING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  OCEAN_TIDES_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "OCEAN_TIDES_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  REDUCTION_THEORY = new PerturbationsKey(env->getStaticObjectField(cls, "REDUCTION_THEORY", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SHADOW_BODIES = new PerturbationsKey(env->getStaticObjectField(cls, "SHADOW_BODIES", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SHADOW_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "SHADOW_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SOLID_TIDES_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "SOLID_TIDES_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SRP_MODEL = new PerturbationsKey(env->getStaticObjectField(cls, "SRP_MODEL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SW_DATA_EPOCH = new PerturbationsKey(env->getStaticObjectField(cls, "SW_DATA_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SW_DATA_SOURCE = new PerturbationsKey(env->getStaticObjectField(cls, "SW_DATA_SOURCE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  SW_INTERP_METHOD = new PerturbationsKey(env->getStaticObjectField(cls, "SW_INTERP_METHOD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/PerturbationsKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean PerturbationsKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_c1d49e251bdbf4cd], a0.this$, a1.this$, a2.this$);
              }

              PerturbationsKey PerturbationsKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return PerturbationsKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1cd89fcc06ad788d], a0.this$));
              }

              JArray< PerturbationsKey > PerturbationsKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< PerturbationsKey >(env->callStaticObjectMethod(cls, mids$[mid_values_e473c269710650b8]));
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
              static PyObject *t_PerturbationsKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PerturbationsKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PerturbationsKey_of_(t_PerturbationsKey *self, PyObject *args);
              static PyObject *t_PerturbationsKey_process(t_PerturbationsKey *self, PyObject *args);
              static PyObject *t_PerturbationsKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_PerturbationsKey_values(PyTypeObject *type);
              static PyObject *t_PerturbationsKey_get__parameters_(t_PerturbationsKey *self, void *data);
              static PyGetSetDef t_PerturbationsKey__fields_[] = {
                DECLARE_GET_FIELD(t_PerturbationsKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PerturbationsKey__methods_[] = {
                DECLARE_METHOD(t_PerturbationsKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PerturbationsKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PerturbationsKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_PerturbationsKey, process, METH_VARARGS),
                DECLARE_METHOD(t_PerturbationsKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_PerturbationsKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PerturbationsKey)[] = {
                { Py_tp_methods, t_PerturbationsKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_PerturbationsKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PerturbationsKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(PerturbationsKey, t_PerturbationsKey, PerturbationsKey);
              PyObject *t_PerturbationsKey::wrap_Object(const PerturbationsKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_PerturbationsKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_PerturbationsKey *self = (t_PerturbationsKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_PerturbationsKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_PerturbationsKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_PerturbationsKey *self = (t_PerturbationsKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_PerturbationsKey::install(PyObject *module)
              {
                installType(&PY_TYPE(PerturbationsKey), &PY_TYPE_DEF(PerturbationsKey), module, "PerturbationsKey", 0);
              }

              void t_PerturbationsKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "class_", make_descriptor(PerturbationsKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "wrapfn_", make_descriptor(t_PerturbationsKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(PerturbationsKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "ALBEDO_GRID_SIZE", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::ALBEDO_GRID_SIZE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "ALBEDO_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::ALBEDO_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "ATMOSPHERIC_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::ATMOSPHERIC_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "CENTRAL_BODY_ROTATION", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::CENTRAL_BODY_ROTATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "COMMENT", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "EQUATORIAL_RADIUS", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::EQUATORIAL_RADIUS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_F10P7", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_F10P7)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_F10P7_MEAN", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_F10P7_MEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_GEOMAG_AP", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_GEOMAG_AP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_GEOMAG_DST", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_GEOMAG_DST)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_GEOMAG_KP", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_GEOMAG_KP)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_M10P7", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_M10P7)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_M10P7_MEAN", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_M10P7_MEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_S10P7", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_S10P7)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_S10P7_MEAN", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_S10P7_MEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_Y10P7", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_Y10P7)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "FIXED_Y10P7_MEAN", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::FIXED_Y10P7_MEAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "GM", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::GM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "GRAVITY_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::GRAVITY_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "N_BODY_PERTURBATIONS", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::N_BODY_PERTURBATIONS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "OBLATE_FLATTENING", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::OBLATE_FLATTENING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "OCEAN_TIDES_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::OCEAN_TIDES_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "REDUCTION_THEORY", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::REDUCTION_THEORY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SHADOW_BODIES", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SHADOW_BODIES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SHADOW_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SHADOW_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SOLID_TIDES_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SOLID_TIDES_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SRP_MODEL", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SRP_MODEL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SW_DATA_EPOCH", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SW_DATA_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SW_DATA_SOURCE", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SW_DATA_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PerturbationsKey), "SW_INTERP_METHOD", make_descriptor(t_PerturbationsKey::wrap_Object(*PerturbationsKey::SW_INTERP_METHOD)));
              }

              static PyObject *t_PerturbationsKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PerturbationsKey::initializeClass, 1)))
                  return NULL;
                return t_PerturbationsKey::wrap_Object(PerturbationsKey(((t_PerturbationsKey *) arg)->object.this$));
              }
              static PyObject *t_PerturbationsKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PerturbationsKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_PerturbationsKey_of_(t_PerturbationsKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_PerturbationsKey_process(t_PerturbationsKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::Perturbations::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_PerturbationsKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                PerturbationsKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::PerturbationsKey::valueOf(a0));
                  return t_PerturbationsKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_PerturbationsKey_values(PyTypeObject *type)
              {
                JArray< PerturbationsKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::PerturbationsKey::values());
                return JArray<jobject>(result.this$).wrap(t_PerturbationsKey::wrap_jobject);
              }
              static PyObject *t_PerturbationsKey_get__parameters_(t_PerturbationsKey *self, void *data)
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
#include "org/hipparchus/distribution/continuous/FDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *FDistribution::class$ = NULL;
        jmethodID *FDistribution::mids$ = NULL;
        bool FDistribution::live$ = false;

        jclass FDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/FDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_bd28dc6055dc5bbd] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getDenominatorDegreesOfFreedom_9981f74b2d109da6] = env->getMethodID(cls, "getDenominatorDegreesOfFreedom", "()D");
            mids$[mid_getNumeratorDegreesOfFreedom_9981f74b2d109da6] = env->getMethodID(cls, "getNumeratorDegreesOfFreedom", "()D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_bf28ed64d6e8576b] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FDistribution::FDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        FDistribution::FDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_bd28dc6055dc5bbd, a0, a1, a2)) {}

        jdouble FDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble FDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jdouble FDistribution::getDenominatorDegreesOfFreedom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDenominatorDegreesOfFreedom_9981f74b2d109da6]);
        }

        jdouble FDistribution::getNumeratorDegreesOfFreedom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumeratorDegreesOfFreedom_9981f74b2d109da6]);
        }

        jdouble FDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble FDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble FDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble FDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        jboolean FDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        jdouble FDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_bf28ed64d6e8576b], a0);
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
        static PyObject *t_FDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_FDistribution_init_(t_FDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FDistribution_cumulativeProbability(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_density(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_getDenominatorDegreesOfFreedom(t_FDistribution *self);
        static PyObject *t_FDistribution_getNumeratorDegreesOfFreedom(t_FDistribution *self);
        static PyObject *t_FDistribution_getNumericalMean(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_getNumericalVariance(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_getSupportLowerBound(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_getSupportUpperBound(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_isSupportConnected(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_logDensity(t_FDistribution *self, PyObject *args);
        static PyObject *t_FDistribution_get__denominatorDegreesOfFreedom(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__numeratorDegreesOfFreedom(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__numericalMean(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__numericalVariance(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__supportConnected(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__supportLowerBound(t_FDistribution *self, void *data);
        static PyObject *t_FDistribution_get__supportUpperBound(t_FDistribution *self, void *data);
        static PyGetSetDef t_FDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_FDistribution, denominatorDegreesOfFreedom),
          DECLARE_GET_FIELD(t_FDistribution, numeratorDegreesOfFreedom),
          DECLARE_GET_FIELD(t_FDistribution, numericalMean),
          DECLARE_GET_FIELD(t_FDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_FDistribution, supportConnected),
          DECLARE_GET_FIELD(t_FDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_FDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FDistribution__methods_[] = {
          DECLARE_METHOD(t_FDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, getDenominatorDegreesOfFreedom, METH_NOARGS),
          DECLARE_METHOD(t_FDistribution, getNumeratorDegreesOfFreedom, METH_NOARGS),
          DECLARE_METHOD(t_FDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_FDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FDistribution)[] = {
          { Py_tp_methods, t_FDistribution__methods_ },
          { Py_tp_init, (void *) t_FDistribution_init_ },
          { Py_tp_getset, t_FDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(FDistribution, t_FDistribution, FDistribution);

        void t_FDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(FDistribution), &PY_TYPE_DEF(FDistribution), module, "FDistribution", 0);
        }

        void t_FDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDistribution), "class_", make_descriptor(FDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDistribution), "wrapfn_", make_descriptor(t_FDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FDistribution::initializeClass, 1)))
            return NULL;
          return t_FDistribution::wrap_Object(FDistribution(((t_FDistribution *) arg)->object.this$));
        }
        static PyObject *t_FDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_FDistribution_init_(t_FDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              FDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = FDistribution(a0, a1));
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
              FDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = FDistribution(a0, a1, a2));
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

        static PyObject *t_FDistribution_cumulativeProbability(t_FDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_FDistribution_density(t_FDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_FDistribution_getDenominatorDegreesOfFreedom(t_FDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDenominatorDegreesOfFreedom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FDistribution_getNumeratorDegreesOfFreedom(t_FDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getNumeratorDegreesOfFreedom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FDistribution_getNumericalMean(t_FDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_FDistribution_getNumericalVariance(t_FDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_FDistribution_getSupportLowerBound(t_FDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_FDistribution_getSupportUpperBound(t_FDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_FDistribution_isSupportConnected(t_FDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_FDistribution_logDensity(t_FDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_FDistribution_get__denominatorDegreesOfFreedom(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDenominatorDegreesOfFreedom());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FDistribution_get__numeratorDegreesOfFreedom(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumeratorDegreesOfFreedom());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FDistribution_get__numericalMean(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FDistribution_get__numericalVariance(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FDistribution_get__supportConnected(t_FDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FDistribution_get__supportLowerBound(t_FDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FDistribution_get__supportUpperBound(t_FDistribution *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/MeasurementCombinationFactory.h"
#include "org/orekit/estimation/measurements/gnss/IonosphereFreeCombination.h"
#include "org/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/estimation/measurements/gnss/GRAPHICCombination.h"
#include "org/orekit/estimation/measurements/gnss/GeometryFreeCombination.h"
#include "org/orekit/estimation/measurements/gnss/NarrowLaneCombination.h"
#include "org/orekit/estimation/measurements/gnss/WideLaneCombination.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/MelbourneWubbenaCombination.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *MeasurementCombinationFactory::class$ = NULL;
          jmethodID *MeasurementCombinationFactory::mids$ = NULL;
          bool MeasurementCombinationFactory::live$ = false;

          jclass MeasurementCombinationFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/MeasurementCombinationFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getGRAPHICCombination_b92663e8da5c43ad] = env->getStaticMethodID(cls, "getGRAPHICCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/GRAPHICCombination;");
              mids$[mid_getGeometryFreeCombination_dba7fd906e3c5e63] = env->getStaticMethodID(cls, "getGeometryFreeCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/GeometryFreeCombination;");
              mids$[mid_getIonosphereFreeCombination_dafeb9ffc6910ed5] = env->getStaticMethodID(cls, "getIonosphereFreeCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/IonosphereFreeCombination;");
              mids$[mid_getMelbourneWubbenaCombination_34c7738020dbdd5b] = env->getStaticMethodID(cls, "getMelbourneWubbenaCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/MelbourneWubbenaCombination;");
              mids$[mid_getNarrowLaneCombination_42b52900ed481da2] = env->getStaticMethodID(cls, "getNarrowLaneCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/NarrowLaneCombination;");
              mids$[mid_getPhaseMinusCodeCombination_208509c493513fe6] = env->getStaticMethodID(cls, "getPhaseMinusCodeCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/PhaseMinusCodeCombination;");
              mids$[mid_getWideLaneCombination_caecb67386603e44] = env->getStaticMethodID(cls, "getWideLaneCombination", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/gnss/WideLaneCombination;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::GRAPHICCombination MeasurementCombinationFactory::getGRAPHICCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::GRAPHICCombination(env->callStaticObjectMethod(cls, mids$[mid_getGRAPHICCombination_b92663e8da5c43ad], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::GeometryFreeCombination MeasurementCombinationFactory::getGeometryFreeCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::GeometryFreeCombination(env->callStaticObjectMethod(cls, mids$[mid_getGeometryFreeCombination_dba7fd906e3c5e63], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::IonosphereFreeCombination MeasurementCombinationFactory::getIonosphereFreeCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::IonosphereFreeCombination(env->callStaticObjectMethod(cls, mids$[mid_getIonosphereFreeCombination_dafeb9ffc6910ed5], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::MelbourneWubbenaCombination MeasurementCombinationFactory::getMelbourneWubbenaCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::MelbourneWubbenaCombination(env->callStaticObjectMethod(cls, mids$[mid_getMelbourneWubbenaCombination_34c7738020dbdd5b], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::NarrowLaneCombination MeasurementCombinationFactory::getNarrowLaneCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::NarrowLaneCombination(env->callStaticObjectMethod(cls, mids$[mid_getNarrowLaneCombination_42b52900ed481da2], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::PhaseMinusCodeCombination MeasurementCombinationFactory::getPhaseMinusCodeCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::PhaseMinusCodeCombination(env->callStaticObjectMethod(cls, mids$[mid_getPhaseMinusCodeCombination_208509c493513fe6], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::WideLaneCombination MeasurementCombinationFactory::getWideLaneCombination(const ::org::orekit::gnss::SatelliteSystem & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::estimation::measurements::gnss::WideLaneCombination(env->callStaticObjectMethod(cls, mids$[mid_getWideLaneCombination_caecb67386603e44], a0.this$));
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
          static PyObject *t_MeasurementCombinationFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getGRAPHICCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getGeometryFreeCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getIonosphereFreeCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getMelbourneWubbenaCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getNarrowLaneCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getPhaseMinusCodeCombination(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MeasurementCombinationFactory_getWideLaneCombination(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_MeasurementCombinationFactory__methods_[] = {
            DECLARE_METHOD(t_MeasurementCombinationFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getGRAPHICCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getGeometryFreeCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getIonosphereFreeCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getMelbourneWubbenaCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getNarrowLaneCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getPhaseMinusCodeCombination, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MeasurementCombinationFactory, getWideLaneCombination, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MeasurementCombinationFactory)[] = {
            { Py_tp_methods, t_MeasurementCombinationFactory__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MeasurementCombinationFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MeasurementCombinationFactory, t_MeasurementCombinationFactory, MeasurementCombinationFactory);

          void t_MeasurementCombinationFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(MeasurementCombinationFactory), &PY_TYPE_DEF(MeasurementCombinationFactory), module, "MeasurementCombinationFactory", 0);
          }

          void t_MeasurementCombinationFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombinationFactory), "class_", make_descriptor(MeasurementCombinationFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombinationFactory), "wrapfn_", make_descriptor(t_MeasurementCombinationFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementCombinationFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MeasurementCombinationFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MeasurementCombinationFactory::initializeClass, 1)))
              return NULL;
            return t_MeasurementCombinationFactory::wrap_Object(MeasurementCombinationFactory(((t_MeasurementCombinationFactory *) arg)->object.this$));
          }
          static PyObject *t_MeasurementCombinationFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MeasurementCombinationFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MeasurementCombinationFactory_getGRAPHICCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::GRAPHICCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getGRAPHICCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_GRAPHICCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getGRAPHICCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getGeometryFreeCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::GeometryFreeCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getGeometryFreeCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_GeometryFreeCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getGeometryFreeCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getIonosphereFreeCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::IonosphereFreeCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getIonosphereFreeCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_IonosphereFreeCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getIonosphereFreeCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getMelbourneWubbenaCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::MelbourneWubbenaCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getMelbourneWubbenaCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_MelbourneWubbenaCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getMelbourneWubbenaCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getNarrowLaneCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::NarrowLaneCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getNarrowLaneCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_NarrowLaneCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getNarrowLaneCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getPhaseMinusCodeCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::PhaseMinusCodeCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getPhaseMinusCodeCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_PhaseMinusCodeCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getPhaseMinusCodeCombination", arg);
            return NULL;
          }

          static PyObject *t_MeasurementCombinationFactory_getWideLaneCombination(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::estimation::measurements::gnss::WideLaneCombination result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::estimation::measurements::gnss::MeasurementCombinationFactory::getWideLaneCombination(a0));
              return ::org::orekit::estimation::measurements::gnss::t_WideLaneCombination::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getWideLaneCombination", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/RinexNavigationParser.h"
#include "java/io/IOException.h"
#include "org/orekit/data/DataSource.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/files/rinex/navigation/RinexNavigation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *RinexNavigationParser::class$ = NULL;
          jmethodID *RinexNavigationParser::mids$ = NULL;
          bool RinexNavigationParser::live$ = false;

          jclass RinexNavigationParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/RinexNavigationParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_b6b8aa17d4a34a34] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;)V");
              mids$[mid_parse_282d22ab9b032f2f] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/rinex/navigation/RinexNavigation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexNavigationParser::RinexNavigationParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          RinexNavigationParser::RinexNavigationParser(const ::org::orekit::time::TimeScales & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b6b8aa17d4a34a34, a0.this$)) {}

          ::org::orekit::files::rinex::navigation::RinexNavigation RinexNavigationParser::parse(const ::org::orekit::data::DataSource & a0) const
          {
            return ::org::orekit::files::rinex::navigation::RinexNavigation(env->callObjectMethod(this$, mids$[mid_parse_282d22ab9b032f2f], a0.this$));
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
          static PyObject *t_RinexNavigationParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexNavigationParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexNavigationParser_init_(t_RinexNavigationParser *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexNavigationParser_parse(t_RinexNavigationParser *self, PyObject *arg);

          static PyMethodDef t_RinexNavigationParser__methods_[] = {
            DECLARE_METHOD(t_RinexNavigationParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigationParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigationParser, parse, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexNavigationParser)[] = {
            { Py_tp_methods, t_RinexNavigationParser__methods_ },
            { Py_tp_init, (void *) t_RinexNavigationParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexNavigationParser)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexNavigationParser, t_RinexNavigationParser, RinexNavigationParser);

          void t_RinexNavigationParser::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexNavigationParser), &PY_TYPE_DEF(RinexNavigationParser), module, "RinexNavigationParser", 0);
          }

          void t_RinexNavigationParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationParser), "class_", make_descriptor(RinexNavigationParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationParser), "wrapfn_", make_descriptor(t_RinexNavigationParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexNavigationParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexNavigationParser::initializeClass, 1)))
              return NULL;
            return t_RinexNavigationParser::wrap_Object(RinexNavigationParser(((t_RinexNavigationParser *) arg)->object.this$));
          }
          static PyObject *t_RinexNavigationParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexNavigationParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexNavigationParser_init_(t_RinexNavigationParser *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                RinexNavigationParser object((jobject) NULL);

                INT_CALL(object = RinexNavigationParser());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::orekit::time::TimeScales a0((jobject) NULL);
                RinexNavigationParser object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                {
                  INT_CALL(object = RinexNavigationParser(a0));
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

          static PyObject *t_RinexNavigationParser_parse(t_RinexNavigationParser *self, PyObject *arg)
          {
            ::org::orekit::data::DataSource a0((jobject) NULL);
            ::org::orekit::files::rinex::navigation::RinexNavigation result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::orekit::files::rinex::navigation::t_RinexNavigation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/PythonForceModel.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/forces/ForceModel.h"
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

      ::java::lang::Class *PythonForceModel::class$ = NULL;
      jmethodID *PythonForceModel::mids$ = NULL;
      bool PythonForceModel::live$ = false;

      jclass PythonForceModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/forces/PythonForceModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_acceleration_9816b8f76e94356a] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_acceleration_5e147f44c28a35c9] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_addContribution_05bb906f491bab6b] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V");
          mids$[mid_addContribution_2fcaaed225365615] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V");
          mids$[mid_dependsOnPositionOnly_eee3de00fe971136] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getParameterDriver_a75a8a462ead0b8a] = env->getMethodID(cls, "getParameterDriver", "(Ljava/lang/String;)Lorg/orekit/utils/ParameterDriver;");
          mids$[mid_getParameters_be783177b060994b] = env->getMethodID(cls, "getParameters", "()[D");
          mids$[mid_getParameters_84f929c42eeec397] = env->getMethodID(cls, "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
          mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_isSupported_df4c65b2aede5c41] = env->getMethodID(cls, "isSupported", "(Ljava/lang/String;)Z");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonForceModel::PythonForceModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonForceModel::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonForceModel::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonForceModel::pythonExtension(jlong a0) const
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
    namespace forces {
      static PyObject *t_PythonForceModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonForceModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonForceModel_init_(t_PythonForceModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonForceModel_finalize(t_PythonForceModel *self);
      static PyObject *t_PythonForceModel_pythonExtension(t_PythonForceModel *self, PyObject *args);
      static jobject JNICALL t_PythonForceModel_acceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonForceModel_acceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonForceModel_addContribution2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonForceModel_addContribution3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonForceModel_dependsOnPositionOnly4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonForceModel_getParameterDriver5(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonForceModel_getParameters6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonForceModel_getParameters7(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonForceModel_getParametersDrivers8(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonForceModel_init9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonForceModel_isSupported10(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonForceModel_pythonDecRef11(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonForceModel_get__self(t_PythonForceModel *self, void *data);
      static PyGetSetDef t_PythonForceModel__fields_[] = {
        DECLARE_GET_FIELD(t_PythonForceModel, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonForceModel__methods_[] = {
        DECLARE_METHOD(t_PythonForceModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonForceModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonForceModel, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonForceModel, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonForceModel)[] = {
        { Py_tp_methods, t_PythonForceModel__methods_ },
        { Py_tp_init, (void *) t_PythonForceModel_init_ },
        { Py_tp_getset, t_PythonForceModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonForceModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonForceModel, t_PythonForceModel, PythonForceModel);

      void t_PythonForceModel::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonForceModel), &PY_TYPE_DEF(PythonForceModel), module, "PythonForceModel", 1);
      }

      void t_PythonForceModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModel), "class_", make_descriptor(PythonForceModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModel), "wrapfn_", make_descriptor(t_PythonForceModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonForceModel), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonForceModel::initializeClass);
        JNINativeMethod methods[] = {
          { "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonForceModel_acceleration0 },
          { "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonForceModel_acceleration1 },
          { "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V", (void *) t_PythonForceModel_addContribution2 },
          { "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V", (void *) t_PythonForceModel_addContribution3 },
          { "dependsOnPositionOnly", "()Z", (void *) t_PythonForceModel_dependsOnPositionOnly4 },
          { "getParameterDriver", "(Ljava/lang/String;)Lorg/orekit/utils/ParameterDriver;", (void *) t_PythonForceModel_getParameterDriver5 },
          { "getParameters", "()[D", (void *) t_PythonForceModel_getParameters6 },
          { "getParameters", "(Lorg/hipparchus/Field;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonForceModel_getParameters7 },
          { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonForceModel_getParametersDrivers8 },
          { "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V", (void *) t_PythonForceModel_init9 },
          { "isSupported", "(Ljava/lang/String;)Z", (void *) t_PythonForceModel_isSupported10 },
          { "pythonDecRef", "()V", (void *) t_PythonForceModel_pythonDecRef11 },
        };
        env->registerNatives(cls, methods, 12);
      }

      static PyObject *t_PythonForceModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonForceModel::initializeClass, 1)))
          return NULL;
        return t_PythonForceModel::wrap_Object(PythonForceModel(((t_PythonForceModel *) arg)->object.this$));
      }
      static PyObject *t_PythonForceModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonForceModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonForceModel_init_(t_PythonForceModel *self, PyObject *args, PyObject *kwds)
      {
        PythonForceModel object((jobject) NULL);

        INT_CALL(object = PythonForceModel());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonForceModel_finalize(t_PythonForceModel *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonForceModel_pythonExtension(t_PythonForceModel *self, PyObject *args)
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

      static jobject JNICALL t_PythonForceModel_acceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *o1 = JArray<jdouble>(a1).wrap();
        PyObject *result = PyObject_CallMethod(obj, "acceleration", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("acceleration", result);
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

      static jobject JNICALL t_PythonForceModel_acceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        PyObject *result = PyObject_CallMethod(obj, "acceleration", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
        {
          throwTypeError("acceleration", result);
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

      static void JNICALL t_PythonForceModel_addContribution2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *o1 = ::org::orekit::propagation::numerical::t_FieldTimeDerivativesEquations::wrap_Object(::org::orekit::propagation::numerical::FieldTimeDerivativesEquations(a1));
        PyObject *result = PyObject_CallMethod(obj, "addContribution", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonForceModel_addContribution3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *o1 = ::org::orekit::propagation::numerical::t_TimeDerivativesEquations::wrap_Object(::org::orekit::propagation::numerical::TimeDerivativesEquations(a1));
        PyObject *result = PyObject_CallMethod(obj, "addContribution", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jboolean JNICALL t_PythonForceModel_dependsOnPositionOnly4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *result = PyObject_CallMethod(obj, "dependsOnPositionOnly", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("dependsOnPositionOnly", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static jobject JNICALL t_PythonForceModel_getParameterDriver5(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::ParameterDriver value((jobject) NULL);
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "getParameterDriver", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriver::initializeClass, &value))
        {
          throwTypeError("getParameterDriver", result);
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

      static jobject JNICALL t_PythonForceModel_getParameters6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonForceModel_getParameters7(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonForceModel_getParametersDrivers8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static void JNICALL t_PythonForceModel_init9(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jboolean JNICALL t_PythonForceModel_isSupported10(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "isSupported", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("isSupported", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static void JNICALL t_PythonForceModel_pythonDecRef11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonForceModel::mids$[PythonForceModel::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonForceModel_get__self(t_PythonForceModel *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Double.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *CMAESOptimizer::class$ = NULL;
            jmethodID *CMAESOptimizer::mids$ = NULL;
            bool CMAESOptimizer::live$ = false;

            jclass CMAESOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_419ba16a032a8d2f] = env->getMethodID(cls, "<init>", "(IDZIILorg/hipparchus/random/RandomGenerator;ZLorg/hipparchus/optim/ConvergenceChecker;)V");
                mids$[mid_getStatisticsDHistory_d751c1a57012b438] = env->getMethodID(cls, "getStatisticsDHistory", "()Ljava/util/List;");
                mids$[mid_getStatisticsFitnessHistory_d751c1a57012b438] = env->getMethodID(cls, "getStatisticsFitnessHistory", "()Ljava/util/List;");
                mids$[mid_getStatisticsMeanHistory_d751c1a57012b438] = env->getMethodID(cls, "getStatisticsMeanHistory", "()Ljava/util/List;");
                mids$[mid_getStatisticsSigmaHistory_d751c1a57012b438] = env->getMethodID(cls, "getStatisticsSigmaHistory", "()Ljava/util/List;");
                mids$[mid_optimize_1912ae5ec9cd8a6c] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Lorg/hipparchus/optim/PointValuePair;");
                mids$[mid_parseOptimizationData_df324e640da2eeec] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
                mids$[mid_doOptimize_a812a1ba2cf9f7b4] = env->getMethodID(cls, "doOptimize", "()Lorg/hipparchus/optim/PointValuePair;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CMAESOptimizer::CMAESOptimizer(jint a0, jdouble a1, jboolean a2, jint a3, jint a4, const ::org::hipparchus::random::RandomGenerator & a5, jboolean a6, const ::org::hipparchus::optim::ConvergenceChecker & a7) : ::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_419ba16a032a8d2f, a0, a1, a2, a3, a4, a5.this$, a6, a7.this$)) {}

            ::java::util::List CMAESOptimizer::getStatisticsDHistory() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStatisticsDHistory_d751c1a57012b438]));
            }

            ::java::util::List CMAESOptimizer::getStatisticsFitnessHistory() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStatisticsFitnessHistory_d751c1a57012b438]));
            }

            ::java::util::List CMAESOptimizer::getStatisticsMeanHistory() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStatisticsMeanHistory_d751c1a57012b438]));
            }

            ::java::util::List CMAESOptimizer::getStatisticsSigmaHistory() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getStatisticsSigmaHistory_d751c1a57012b438]));
            }

            ::org::hipparchus::optim::PointValuePair CMAESOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
            {
              return ::org::hipparchus::optim::PointValuePair(env->callObjectMethod(this$, mids$[mid_optimize_1912ae5ec9cd8a6c], a0.this$));
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
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$PopulationSize.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$Sigma.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {
            static PyObject *t_CMAESOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer_of_(t_CMAESOptimizer *self, PyObject *args);
            static int t_CMAESOptimizer_init_(t_CMAESOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CMAESOptimizer_getStatisticsDHistory(t_CMAESOptimizer *self);
            static PyObject *t_CMAESOptimizer_getStatisticsFitnessHistory(t_CMAESOptimizer *self);
            static PyObject *t_CMAESOptimizer_getStatisticsMeanHistory(t_CMAESOptimizer *self);
            static PyObject *t_CMAESOptimizer_getStatisticsSigmaHistory(t_CMAESOptimizer *self);
            static PyObject *t_CMAESOptimizer_optimize(t_CMAESOptimizer *self, PyObject *args);
            static PyObject *t_CMAESOptimizer_get__statisticsDHistory(t_CMAESOptimizer *self, void *data);
            static PyObject *t_CMAESOptimizer_get__statisticsFitnessHistory(t_CMAESOptimizer *self, void *data);
            static PyObject *t_CMAESOptimizer_get__statisticsMeanHistory(t_CMAESOptimizer *self, void *data);
            static PyObject *t_CMAESOptimizer_get__statisticsSigmaHistory(t_CMAESOptimizer *self, void *data);
            static PyObject *t_CMAESOptimizer_get__parameters_(t_CMAESOptimizer *self, void *data);
            static PyGetSetDef t_CMAESOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_CMAESOptimizer, statisticsDHistory),
              DECLARE_GET_FIELD(t_CMAESOptimizer, statisticsFitnessHistory),
              DECLARE_GET_FIELD(t_CMAESOptimizer, statisticsMeanHistory),
              DECLARE_GET_FIELD(t_CMAESOptimizer, statisticsSigmaHistory),
              DECLARE_GET_FIELD(t_CMAESOptimizer, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CMAESOptimizer__methods_[] = {
              DECLARE_METHOD(t_CMAESOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer, of_, METH_VARARGS),
              DECLARE_METHOD(t_CMAESOptimizer, getStatisticsDHistory, METH_NOARGS),
              DECLARE_METHOD(t_CMAESOptimizer, getStatisticsFitnessHistory, METH_NOARGS),
              DECLARE_METHOD(t_CMAESOptimizer, getStatisticsMeanHistory, METH_NOARGS),
              DECLARE_METHOD(t_CMAESOptimizer, getStatisticsSigmaHistory, METH_NOARGS),
              DECLARE_METHOD(t_CMAESOptimizer, optimize, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CMAESOptimizer)[] = {
              { Py_tp_methods, t_CMAESOptimizer__methods_ },
              { Py_tp_init, (void *) t_CMAESOptimizer_init_ },
              { Py_tp_getset, t_CMAESOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CMAESOptimizer)[] = {
              &PY_TYPE_DEF(::org::hipparchus::optim::nonlinear::scalar::MultivariateOptimizer),
              NULL
            };

            DEFINE_TYPE(CMAESOptimizer, t_CMAESOptimizer, CMAESOptimizer);
            PyObject *t_CMAESOptimizer::wrap_Object(const CMAESOptimizer& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer *self = (t_CMAESOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CMAESOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer *self = (t_CMAESOptimizer *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CMAESOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(CMAESOptimizer), &PY_TYPE_DEF(CMAESOptimizer), module, "CMAESOptimizer", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer), "PopulationSize", make_descriptor(&PY_TYPE_DEF(CMAESOptimizer$PopulationSize)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer), "Sigma", make_descriptor(&PY_TYPE_DEF(CMAESOptimizer$Sigma)));
            }

            void t_CMAESOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer), "class_", make_descriptor(CMAESOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer), "wrapfn_", make_descriptor(t_CMAESOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CMAESOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CMAESOptimizer::initializeClass, 1)))
                return NULL;
              return t_CMAESOptimizer::wrap_Object(CMAESOptimizer(((t_CMAESOptimizer *) arg)->object.this$));
            }
            static PyObject *t_CMAESOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CMAESOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CMAESOptimizer_of_(t_CMAESOptimizer *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CMAESOptimizer_init_(t_CMAESOptimizer *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jdouble a1;
              jboolean a2;
              jint a3;
              jint a4;
              ::org::hipparchus::random::RandomGenerator a5((jobject) NULL);
              jboolean a6;
              ::org::hipparchus::optim::ConvergenceChecker a7((jobject) NULL);
              PyTypeObject **p7;
              CMAESOptimizer object((jobject) NULL);

              if (!parseArgs(args, "IDZIIkZK", ::org::hipparchus::random::RandomGenerator::initializeClass, ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &p7, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                INT_CALL(object = CMAESOptimizer(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CMAESOptimizer_getStatisticsDHistory(t_CMAESOptimizer *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getStatisticsDHistory());
              return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealMatrix));
            }

            static PyObject *t_CMAESOptimizer_getStatisticsFitnessHistory(t_CMAESOptimizer *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getStatisticsFitnessHistory());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Double));
            }

            static PyObject *t_CMAESOptimizer_getStatisticsMeanHistory(t_CMAESOptimizer *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getStatisticsMeanHistory());
              return ::java::util::t_List::wrap_Object(result, ::org::hipparchus::linear::PY_TYPE(RealMatrix));
            }

            static PyObject *t_CMAESOptimizer_getStatisticsSigmaHistory(t_CMAESOptimizer *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getStatisticsSigmaHistory());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Double));
            }

            static PyObject *t_CMAESOptimizer_optimize(t_CMAESOptimizer *self, PyObject *args)
            {
              JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
              ::org::hipparchus::optim::PointValuePair result((jobject) NULL);

              if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::t_PointValuePair::wrap_Object(result);
              }

              return callSuper(PY_TYPE(CMAESOptimizer), (PyObject *) self, "optimize", args, 2);
            }
            static PyObject *t_CMAESOptimizer_get__parameters_(t_CMAESOptimizer *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CMAESOptimizer_get__statisticsDHistory(t_CMAESOptimizer *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getStatisticsDHistory());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_CMAESOptimizer_get__statisticsFitnessHistory(t_CMAESOptimizer *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getStatisticsFitnessHistory());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_CMAESOptimizer_get__statisticsMeanHistory(t_CMAESOptimizer *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getStatisticsMeanHistory());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_CMAESOptimizer_get__statisticsSigmaHistory(t_CMAESOptimizer *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getStatisticsSigmaHistory());
              return ::java::util::t_List::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::class$ = NULL;
          jmethodID *NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::mids$ = NULL;
          bool NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::live$ = false;

          jclass NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getNormalizedCnm_6d920aab27f0a3d2] = env->getMethodID(cls, "getNormalizedCnm", "(II)D");
              mids$[mid_getNormalizedSnm_6d920aab27f0a3d2] = env->getMethodID(cls, "getNormalizedSnm", "(II)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::getNormalizedCnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormalizedCnm_6d920aab27f0a3d2], a0, a1);
          }

          jdouble NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::getNormalizedSnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormalizedSnm_6d920aab27f0a3d2], a0, a1);
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
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_getNormalizedCnm(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *self, PyObject *args);
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_getNormalizedSnm(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *self, PyObject *args);

          static PyMethodDef t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics__methods_[] = {
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, getNormalizedCnm, METH_VARARGS),
            DECLARE_METHOD(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, getNormalizedSnm, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics)[] = {
            { Py_tp_methods, t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics)[] = {
            &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
            NULL
          };

          DEFINE_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics, NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics);

          void t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::install(PyObject *module)
          {
            installType(&PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), &PY_TYPE_DEF(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), module, "NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics", 0);
          }

          void t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), "class_", make_descriptor(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), "wrapfn_", make_descriptor(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass, 1)))
              return NULL;
            return t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::wrap_Object(NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics(((t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *) arg)->object.this$));
          }
          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_getNormalizedCnm(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNormalizedCnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNormalizedCnm", args);
            return NULL;
          }

          static PyObject *t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics_getNormalizedSnm(t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getNormalizedSnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getNormalizedSnm", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/EllipsoidTessellator.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/tessellation/Tile.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *EllipsoidTessellator::class$ = NULL;
          jmethodID *EllipsoidTessellator::mids$ = NULL;
          bool EllipsoidTessellator::live$ = false;

          jclass EllipsoidTessellator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/EllipsoidTessellator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_de32548b1c0b8c51] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/models/earth/tessellation/TileAiming;I)V");
              mids$[mid_buildSimpleZone_8d71e4724117bcd6] = env->getStaticMethodID(cls, "buildSimpleZone", "(D[Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
              mids$[mid_buildSimpleZone_586b06c31e5fe186] = env->getStaticMethodID(cls, "buildSimpleZone", "(D[[D)Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;");
              mids$[mid_sample_5c08085dc08f44c2] = env->getMethodID(cls, "sample", "(Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;DD)Ljava/util/List;");
              mids$[mid_tessellate_247336b24d4de700] = env->getMethodID(cls, "tessellate", "(Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;DDDDZZ)Ljava/util/List;");
              mids$[mid_toGeodetic_2006aa17613f33d7] = env->getMethodID(cls, "toGeodetic", "(Lorg/hipparchus/geometry/spherical/twod/S2Point;)Lorg/orekit/bodies/GeodeticPoint;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          EllipsoidTessellator::EllipsoidTessellator(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::models::earth::tessellation::TileAiming & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de32548b1c0b8c51, a0.this$, a1.this$, a2)) {}

          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet EllipsoidTessellator::buildSimpleZone(jdouble a0, const JArray< ::org::orekit::bodies::GeodeticPoint > & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callStaticObjectMethod(cls, mids$[mid_buildSimpleZone_8d71e4724117bcd6], a0, a1.this$));
          }

          ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet EllipsoidTessellator::buildSimpleZone(jdouble a0, const JArray< JArray< jdouble > > & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet(env->callStaticObjectMethod(cls, mids$[mid_buildSimpleZone_586b06c31e5fe186], a0, a1.this$));
          }

          ::java::util::List EllipsoidTessellator::sample(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a0, jdouble a1, jdouble a2) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_sample_5c08085dc08f44c2], a0.this$, a1, a2));
          }

          ::java::util::List EllipsoidTessellator::tessellate(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jboolean a5, jboolean a6) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_tessellate_247336b24d4de700], a0.this$, a1, a2, a3, a4, a5, a6));
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
          static PyObject *t_EllipsoidTessellator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_EllipsoidTessellator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_EllipsoidTessellator_init_(t_EllipsoidTessellator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_EllipsoidTessellator_buildSimpleZone(PyTypeObject *type, PyObject *args);
          static PyObject *t_EllipsoidTessellator_sample(t_EllipsoidTessellator *self, PyObject *args);
          static PyObject *t_EllipsoidTessellator_tessellate(t_EllipsoidTessellator *self, PyObject *args);

          static PyMethodDef t_EllipsoidTessellator__methods_[] = {
            DECLARE_METHOD(t_EllipsoidTessellator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EllipsoidTessellator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_EllipsoidTessellator, buildSimpleZone, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_EllipsoidTessellator, sample, METH_VARARGS),
            DECLARE_METHOD(t_EllipsoidTessellator, tessellate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(EllipsoidTessellator)[] = {
            { Py_tp_methods, t_EllipsoidTessellator__methods_ },
            { Py_tp_init, (void *) t_EllipsoidTessellator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(EllipsoidTessellator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(EllipsoidTessellator, t_EllipsoidTessellator, EllipsoidTessellator);

          void t_EllipsoidTessellator::install(PyObject *module)
          {
            installType(&PY_TYPE(EllipsoidTessellator), &PY_TYPE_DEF(EllipsoidTessellator), module, "EllipsoidTessellator", 0);
          }

          void t_EllipsoidTessellator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidTessellator), "class_", make_descriptor(EllipsoidTessellator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidTessellator), "wrapfn_", make_descriptor(t_EllipsoidTessellator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidTessellator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_EllipsoidTessellator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, EllipsoidTessellator::initializeClass, 1)))
              return NULL;
            return t_EllipsoidTessellator::wrap_Object(EllipsoidTessellator(((t_EllipsoidTessellator *) arg)->object.this$));
          }
          static PyObject *t_EllipsoidTessellator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, EllipsoidTessellator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_EllipsoidTessellator_init_(t_EllipsoidTessellator *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
            ::org::orekit::models::earth::tessellation::TileAiming a1((jobject) NULL);
            jint a2;
            EllipsoidTessellator object((jobject) NULL);

            if (!parseArgs(args, "kkI", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::models::earth::tessellation::TileAiming::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = EllipsoidTessellator(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_EllipsoidTessellator_buildSimpleZone(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                jdouble a0;
                JArray< ::org::orekit::bodies::GeodeticPoint > a1((jobject) NULL);
                ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);

                if (!parseArgs(args, "D[k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::tessellation::EllipsoidTessellator::buildSimpleZone(a0, a1));
                  return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                JArray< JArray< jdouble > > a1((jobject) NULL);
                ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet result((jobject) NULL);

                if (!parseArgs(args, "D[[D", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::tessellation::EllipsoidTessellator::buildSimpleZone(a0, a1));
                  return ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "buildSimpleZone", args);
            return NULL;
          }

          static PyObject *t_EllipsoidTessellator_sample(t_EllipsoidTessellator *self, PyObject *args)
          {
            ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jdouble a2;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "KDD", ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.sample(a0, a1, a2));
              return ::java::util::t_List::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sample", args);
            return NULL;
          }

          static PyObject *t_EllipsoidTessellator_tessellate(t_EllipsoidTessellator *self, PyObject *args)
          {
            ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jboolean a5;
            jboolean a6;
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, "KDDDDZZ", ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              OBJ_CALL(result = self->object.tessellate(a0, a1, a2, a3, a4, a5, a6));
              return ::java::util::t_List::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "tessellate", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/FileInputStream.h"
#include "java/io/IOException.h"
#include "java/io/FileNotFoundException.h"
#include "java/io/File.h"
#include "java/io/FileDescriptor.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *FileInputStream::class$ = NULL;
    jmethodID *FileInputStream::mids$ = NULL;
    bool FileInputStream::live$ = false;

    jclass FileInputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/FileInputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_44d81342f3d8a712] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");
        mids$[mid_init$_2abbf5ab4dcb8447] = env->getMethodID(cls, "<init>", "(Ljava/io/FileDescriptor;)V");
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_available_d6ab429752e7c267] = env->getMethodID(cls, "available", "()I");
        mids$[mid_close_ff7cb6c242604316] = env->getMethodID(cls, "close", "()V");
        mids$[mid_getFD_18958df2242529e5] = env->getMethodID(cls, "getFD", "()Ljava/io/FileDescriptor;");
        mids$[mid_read_d6ab429752e7c267] = env->getMethodID(cls, "read", "()I");
        mids$[mid_read_89e14f411787412a] = env->getMethodID(cls, "read", "([B)I");
        mids$[mid_read_1351cbafe5a435a7] = env->getMethodID(cls, "read", "([BII)I");
        mids$[mid_skip_1eaf6eb0a3f3163f] = env->getMethodID(cls, "skip", "(J)J");
        mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    FileInputStream::FileInputStream(const ::java::io::File & a0) : ::java::io::InputStream(env->newObject(initializeClass, &mids$, mid_init$_44d81342f3d8a712, a0.this$)) {}

    FileInputStream::FileInputStream(const ::java::io::FileDescriptor & a0) : ::java::io::InputStream(env->newObject(initializeClass, &mids$, mid_init$_2abbf5ab4dcb8447, a0.this$)) {}

    FileInputStream::FileInputStream(const ::java::lang::String & a0) : ::java::io::InputStream(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    jint FileInputStream::available() const
    {
      return env->callIntMethod(this$, mids$[mid_available_d6ab429752e7c267]);
    }

    void FileInputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_ff7cb6c242604316]);
    }

    ::java::io::FileDescriptor FileInputStream::getFD() const
    {
      return ::java::io::FileDescriptor(env->callObjectMethod(this$, mids$[mid_getFD_18958df2242529e5]));
    }

    jint FileInputStream::read() const
    {
      return env->callIntMethod(this$, mids$[mid_read_d6ab429752e7c267]);
    }

    jint FileInputStream::read(const JArray< jbyte > & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_read_89e14f411787412a], a0.this$);
    }

    jint FileInputStream::read(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      return env->callIntMethod(this$, mids$[mid_read_1351cbafe5a435a7], a0.this$, a1, a2);
    }

    jlong FileInputStream::skip(jlong a0) const
    {
      return env->callLongMethod(this$, mids$[mid_skip_1eaf6eb0a3f3163f], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_FileInputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_FileInputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_FileInputStream_init_(t_FileInputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_FileInputStream_available(t_FileInputStream *self, PyObject *args);
    static PyObject *t_FileInputStream_close(t_FileInputStream *self, PyObject *args);
    static PyObject *t_FileInputStream_getFD(t_FileInputStream *self);
    static PyObject *t_FileInputStream_read(t_FileInputStream *self, PyObject *args);
    static PyObject *t_FileInputStream_skip(t_FileInputStream *self, PyObject *args);
    static PyObject *t_FileInputStream_get__fD(t_FileInputStream *self, void *data);
    static PyGetSetDef t_FileInputStream__fields_[] = {
      DECLARE_GET_FIELD(t_FileInputStream, fD),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_FileInputStream__methods_[] = {
      DECLARE_METHOD(t_FileInputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileInputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_FileInputStream, available, METH_VARARGS),
      DECLARE_METHOD(t_FileInputStream, close, METH_VARARGS),
      DECLARE_METHOD(t_FileInputStream, getFD, METH_NOARGS),
      DECLARE_METHOD(t_FileInputStream, read, METH_VARARGS),
      DECLARE_METHOD(t_FileInputStream, skip, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(FileInputStream)[] = {
      { Py_tp_methods, t_FileInputStream__methods_ },
      { Py_tp_init, (void *) t_FileInputStream_init_ },
      { Py_tp_getset, t_FileInputStream__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(FileInputStream)[] = {
      &PY_TYPE_DEF(::java::io::InputStream),
      NULL
    };

    DEFINE_TYPE(FileInputStream, t_FileInputStream, FileInputStream);

    void t_FileInputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(FileInputStream), &PY_TYPE_DEF(FileInputStream), module, "FileInputStream", 0);
    }

    void t_FileInputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileInputStream), "class_", make_descriptor(FileInputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileInputStream), "wrapfn_", make_descriptor(t_FileInputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(FileInputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_FileInputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, FileInputStream::initializeClass, 1)))
        return NULL;
      return t_FileInputStream::wrap_Object(FileInputStream(((t_FileInputStream *) arg)->object.this$));
    }
    static PyObject *t_FileInputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, FileInputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_FileInputStream_init_(t_FileInputStream *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::io::File a0((jobject) NULL);
          FileInputStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
          {
            INT_CALL(object = FileInputStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::io::FileDescriptor a0((jobject) NULL);
          FileInputStream object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::io::FileDescriptor::initializeClass, &a0))
          {
            INT_CALL(object = FileInputStream(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          FileInputStream object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = FileInputStream(a0));
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

    static PyObject *t_FileInputStream_available(t_FileInputStream *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.available());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(FileInputStream), (PyObject *) self, "available", args, 2);
    }

    static PyObject *t_FileInputStream_close(t_FileInputStream *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.close());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(FileInputStream), (PyObject *) self, "close", args, 2);
    }

    static PyObject *t_FileInputStream_getFD(t_FileInputStream *self)
    {
      ::java::io::FileDescriptor result((jobject) NULL);
      OBJ_CALL(result = self->object.getFD());
      return ::java::io::t_FileDescriptor::wrap_Object(result);
    }

    static PyObject *t_FileInputStream_read(t_FileInputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          jint result;
          OBJ_CALL(result = self->object.read());
          return PyLong_FromLong((long) result);
        }
        break;
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint result;

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(result = self->object.read(a0));
            return PyLong_FromLong((long) result);
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;
          jint result;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.read(a0, a1, a2));
            return PyLong_FromLong((long) result);
          }
        }
      }

      return callSuper(PY_TYPE(FileInputStream), (PyObject *) self, "read", args, 2);
    }

    static PyObject *t_FileInputStream_skip(t_FileInputStream *self, PyObject *args)
    {
      jlong a0;
      jlong result;

      if (!parseArgs(args, "J", &a0))
      {
        OBJ_CALL(result = self->object.skip(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(FileInputStream), (PyObject *) self, "skip", args, 2);
    }

    static PyObject *t_FileInputStream_get__fD(t_FileInputStream *self, void *data)
    {
      ::java::io::FileDescriptor value((jobject) NULL);
      OBJ_CALL(value = self->object.getFD());
      return ::java::io::t_FileDescriptor::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Laas2015.h"
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

              ::java::lang::Class *Laas2015::class$ = NULL;
              jmethodID *Laas2015::mids$ = NULL;
              bool Laas2015::live$ = false;
              jdouble Laas2015::DEFAULT_SCALING_THRESHOLD = (jdouble) 0;

              jclass Laas2015::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Laas2015");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_init$_0fd8efd9eecb8663] = env->getMethodID(cls, "<init>", "(DI)V");
                  mids$[mid_compute_7eae8d8112e983e4] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_8edb355cf7d54cf6] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getType_592990a91429410c] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_SCALING_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_SCALING_THRESHOLD");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Laas2015::Laas2015() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              Laas2015::Laas2015(jdouble a0, jint a1) : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_0fd8efd9eecb8663, a0, a1)) {}

              ::org::orekit::ssa::metrics::ProbabilityOfCollision Laas2015::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_7eae8d8112e983e4], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision Laas2015::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_8edb355cf7d54cf6], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Laas2015::getType() const
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
              static PyObject *t_Laas2015_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Laas2015_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Laas2015_init_(t_Laas2015 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Laas2015_compute(t_Laas2015 *self, PyObject *args);
              static PyObject *t_Laas2015_getType(t_Laas2015 *self, PyObject *args);
              static PyObject *t_Laas2015_get__type(t_Laas2015 *self, void *data);
              static PyGetSetDef t_Laas2015__fields_[] = {
                DECLARE_GET_FIELD(t_Laas2015, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Laas2015__methods_[] = {
                DECLARE_METHOD(t_Laas2015, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Laas2015, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Laas2015, compute, METH_VARARGS),
                DECLARE_METHOD(t_Laas2015, getType, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Laas2015)[] = {
                { Py_tp_methods, t_Laas2015__methods_ },
                { Py_tp_init, (void *) t_Laas2015_init_ },
                { Py_tp_getset, t_Laas2015__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Laas2015)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(Laas2015, t_Laas2015, Laas2015);

              void t_Laas2015::install(PyObject *module)
              {
                installType(&PY_TYPE(Laas2015), &PY_TYPE_DEF(Laas2015), module, "Laas2015", 0);
              }

              void t_Laas2015::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Laas2015), "class_", make_descriptor(Laas2015::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Laas2015), "wrapfn_", make_descriptor(t_Laas2015::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Laas2015), "boxfn_", make_descriptor(boxObject));
                env->getClass(Laas2015::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Laas2015), "DEFAULT_SCALING_THRESHOLD", make_descriptor(Laas2015::DEFAULT_SCALING_THRESHOLD));
              }

              static PyObject *t_Laas2015_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Laas2015::initializeClass, 1)))
                  return NULL;
                return t_Laas2015::wrap_Object(Laas2015(((t_Laas2015 *) arg)->object.this$));
              }
              static PyObject *t_Laas2015_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Laas2015::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Laas2015_init_(t_Laas2015 *self, PyObject *args, PyObject *kwds)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 0:
                  {
                    Laas2015 object((jobject) NULL);

                    INT_CALL(object = Laas2015());
                    self->object = object;
                    break;
                  }
                 case 2:
                  {
                    jdouble a0;
                    jint a1;
                    Laas2015 object((jobject) NULL);

                    if (!parseArgs(args, "DI", &a0, &a1))
                    {
                      INT_CALL(object = Laas2015(a0, a1));
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

              static PyObject *t_Laas2015_compute(t_Laas2015 *self, PyObject *args)
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

                return callSuper(PY_TYPE(Laas2015), (PyObject *) self, "compute", args, 2);
              }

              static PyObject *t_Laas2015_getType(t_Laas2015 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Laas2015), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Laas2015_get__type(t_Laas2015 *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/ShapiroInterSatelliteRangeModifier.h"
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

          ::java::lang::Class *ShapiroInterSatelliteRangeModifier::class$ = NULL;
          jmethodID *ShapiroInterSatelliteRangeModifier::mids$ = NULL;
          bool ShapiroInterSatelliteRangeModifier::live$ = false;

          jclass ShapiroInterSatelliteRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroInterSatelliteRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroInterSatelliteRangeModifier::ShapiroInterSatelliteRangeModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          ::java::util::List ShapiroInterSatelliteRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void ShapiroInterSatelliteRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_ShapiroInterSatelliteRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroInterSatelliteRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroInterSatelliteRangeModifier_init_(t_ShapiroInterSatelliteRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroInterSatelliteRangeModifier_getParametersDrivers(t_ShapiroInterSatelliteRangeModifier *self);
          static PyObject *t_ShapiroInterSatelliteRangeModifier_modifyWithoutDerivatives(t_ShapiroInterSatelliteRangeModifier *self, PyObject *arg);
          static PyObject *t_ShapiroInterSatelliteRangeModifier_get__parametersDrivers(t_ShapiroInterSatelliteRangeModifier *self, void *data);
          static PyGetSetDef t_ShapiroInterSatelliteRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroInterSatelliteRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroInterSatelliteRangeModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroInterSatelliteRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroInterSatelliteRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroInterSatelliteRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroInterSatelliteRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroInterSatelliteRangeModifier)[] = {
            { Py_tp_methods, t_ShapiroInterSatelliteRangeModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroInterSatelliteRangeModifier_init_ },
            { Py_tp_getset, t_ShapiroInterSatelliteRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroInterSatelliteRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroInterSatelliteRangeModifier, t_ShapiroInterSatelliteRangeModifier, ShapiroInterSatelliteRangeModifier);

          void t_ShapiroInterSatelliteRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroInterSatelliteRangeModifier), &PY_TYPE_DEF(ShapiroInterSatelliteRangeModifier), module, "ShapiroInterSatelliteRangeModifier", 0);
          }

          void t_ShapiroInterSatelliteRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatelliteRangeModifier), "class_", make_descriptor(ShapiroInterSatelliteRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatelliteRangeModifier), "wrapfn_", make_descriptor(t_ShapiroInterSatelliteRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatelliteRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroInterSatelliteRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroInterSatelliteRangeModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroInterSatelliteRangeModifier::wrap_Object(ShapiroInterSatelliteRangeModifier(((t_ShapiroInterSatelliteRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroInterSatelliteRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroInterSatelliteRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroInterSatelliteRangeModifier_init_(t_ShapiroInterSatelliteRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroInterSatelliteRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroInterSatelliteRangeModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroInterSatelliteRangeModifier_getParametersDrivers(t_ShapiroInterSatelliteRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroInterSatelliteRangeModifier_modifyWithoutDerivatives(t_ShapiroInterSatelliteRangeModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroInterSatelliteRangeModifier_get__parametersDrivers(t_ShapiroInterSatelliteRangeModifier *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudePhysicalProperties::class$ = NULL;
              jmethodID *AttitudePhysicalProperties::mids$ = NULL;
              bool AttitudePhysicalProperties::live$ = false;

              jclass AttitudePhysicalProperties::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudePhysicalProperties");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_8497861b879c83f7] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_getCenterOfPressure_032312bdeb3f2f93] = env->getMethodID(cls, "getCenterOfPressure", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getCenterOfPressureReferenceFrame_0fc1562b68204151] = env->getMethodID(cls, "getCenterOfPressureReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getDragCoefficient_9981f74b2d109da6] = env->getMethodID(cls, "getDragCoefficient", "()D");
                  mids$[mid_getDryMass_9981f74b2d109da6] = env->getMethodID(cls, "getDryMass", "()D");
                  mids$[mid_getInertiaMatrix_b2eebabce70526d8] = env->getMethodID(cls, "getInertiaMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
                  mids$[mid_getInertiaReferenceFrame_0fc1562b68204151] = env->getMethodID(cls, "getInertiaReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getWetMass_9981f74b2d109da6] = env->getMethodID(cls, "getWetMass", "()D");
                  mids$[mid_setCenterOfPressure_30f8886dfb88a63c] = env->getMethodID(cls, "setCenterOfPressure", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
                  mids$[mid_setCenterOfPressureReferenceFrame_2c8b859a72c0094e] = env->getMethodID(cls, "setCenterOfPressureReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setDragCoefficient_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDragCoefficient", "(D)V");
                  mids$[mid_setDryMass_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDryMass", "(D)V");
                  mids$[mid_setInertiaMatrixEntry_e98d7b3e971b6087] = env->getMethodID(cls, "setInertiaMatrixEntry", "(IID)V");
                  mids$[mid_setInertiaReferenceFrame_2c8b859a72c0094e] = env->getMethodID(cls, "setInertiaReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setWetMass_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setWetMass", "(D)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudePhysicalProperties::AttitudePhysicalProperties(const ::org::orekit::time::AbsoluteDate & a0) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_8497861b879c83f7, a0.this$)) {}

              ::org::hipparchus::geometry::euclidean::threed::Vector3D AttitudePhysicalProperties::getCenterOfPressure() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getCenterOfPressure_032312bdeb3f2f93]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AttitudePhysicalProperties::getCenterOfPressureReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getCenterOfPressureReferenceFrame_0fc1562b68204151]));
              }

              jdouble AttitudePhysicalProperties::getDragCoefficient() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDragCoefficient_9981f74b2d109da6]);
              }

              jdouble AttitudePhysicalProperties::getDryMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDryMass_9981f74b2d109da6]);
              }

              ::org::hipparchus::linear::RealMatrix AttitudePhysicalProperties::getInertiaMatrix() const
              {
                return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInertiaMatrix_b2eebabce70526d8]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AttitudePhysicalProperties::getInertiaReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getInertiaReferenceFrame_0fc1562b68204151]));
              }

              jdouble AttitudePhysicalProperties::getWetMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getWetMass_9981f74b2d109da6]);
              }

              void AttitudePhysicalProperties::setCenterOfPressure(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCenterOfPressure_30f8886dfb88a63c], a0.this$);
              }

              void AttitudePhysicalProperties::setCenterOfPressureReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCenterOfPressureReferenceFrame_2c8b859a72c0094e], a0.this$);
              }

              void AttitudePhysicalProperties::setDragCoefficient(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDragCoefficient_1ad26e8c8c0cd65b], a0);
              }

              void AttitudePhysicalProperties::setDryMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDryMass_1ad26e8c8c0cd65b], a0);
              }

              void AttitudePhysicalProperties::setInertiaMatrixEntry(jint a0, jint a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_setInertiaMatrixEntry_e98d7b3e971b6087], a0, a1, a2);
              }

              void AttitudePhysicalProperties::setInertiaReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInertiaReferenceFrame_2c8b859a72c0094e], a0.this$);
              }

              void AttitudePhysicalProperties::setWetMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setWetMass_1ad26e8c8c0cd65b], a0);
              }

              void AttitudePhysicalProperties::validate(jdouble a0) const
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
            namespace acm {
              static PyObject *t_AttitudePhysicalProperties_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudePhysicalProperties_init_(t_AttitudePhysicalProperties *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudePhysicalProperties_getCenterOfPressure(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getCenterOfPressureReferenceFrame(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getDragCoefficient(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getDryMass(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getInertiaMatrix(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getInertiaReferenceFrame(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_getWetMass(t_AttitudePhysicalProperties *self);
              static PyObject *t_AttitudePhysicalProperties_setCenterOfPressure(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setCenterOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setDragCoefficient(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setDryMass(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setInertiaMatrixEntry(t_AttitudePhysicalProperties *self, PyObject *args);
              static PyObject *t_AttitudePhysicalProperties_setInertiaReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_setWetMass(t_AttitudePhysicalProperties *self, PyObject *arg);
              static PyObject *t_AttitudePhysicalProperties_validate(t_AttitudePhysicalProperties *self, PyObject *args);
              static PyObject *t_AttitudePhysicalProperties_get__centerOfPressure(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__centerOfPressure(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__centerOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__centerOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__dragCoefficient(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__dragCoefficient(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__dryMass(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__dryMass(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__inertiaMatrix(t_AttitudePhysicalProperties *self, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__inertiaReferenceFrame(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__inertiaReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyObject *t_AttitudePhysicalProperties_get__wetMass(t_AttitudePhysicalProperties *self, void *data);
              static int t_AttitudePhysicalProperties_set__wetMass(t_AttitudePhysicalProperties *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudePhysicalProperties__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, centerOfPressure),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, centerOfPressureReferenceFrame),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, dragCoefficient),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, dryMass),
                DECLARE_GET_FIELD(t_AttitudePhysicalProperties, inertiaMatrix),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, inertiaReferenceFrame),
                DECLARE_GETSET_FIELD(t_AttitudePhysicalProperties, wetMass),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudePhysicalProperties__methods_[] = {
                DECLARE_METHOD(t_AttitudePhysicalProperties, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getCenterOfPressure, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getCenterOfPressureReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getDragCoefficient, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getDryMass, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getInertiaMatrix, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getInertiaReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, getWetMass, METH_NOARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setCenterOfPressure, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setCenterOfPressureReferenceFrame, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setDragCoefficient, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setDryMass, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setInertiaMatrixEntry, METH_VARARGS),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setInertiaReferenceFrame, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, setWetMass, METH_O),
                DECLARE_METHOD(t_AttitudePhysicalProperties, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudePhysicalProperties)[] = {
                { Py_tp_methods, t_AttitudePhysicalProperties__methods_ },
                { Py_tp_init, (void *) t_AttitudePhysicalProperties_init_ },
                { Py_tp_getset, t_AttitudePhysicalProperties__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudePhysicalProperties)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudePhysicalProperties, t_AttitudePhysicalProperties, AttitudePhysicalProperties);

              void t_AttitudePhysicalProperties::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudePhysicalProperties), &PY_TYPE_DEF(AttitudePhysicalProperties), module, "AttitudePhysicalProperties", 0);
              }

              void t_AttitudePhysicalProperties::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalProperties), "class_", make_descriptor(AttitudePhysicalProperties::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalProperties), "wrapfn_", make_descriptor(t_AttitudePhysicalProperties::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudePhysicalProperties), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudePhysicalProperties_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudePhysicalProperties::initializeClass, 1)))
                  return NULL;
                return t_AttitudePhysicalProperties::wrap_Object(AttitudePhysicalProperties(((t_AttitudePhysicalProperties *) arg)->object.this$));
              }
              static PyObject *t_AttitudePhysicalProperties_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudePhysicalProperties::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudePhysicalProperties_init_(t_AttitudePhysicalProperties *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                AttitudePhysicalProperties object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  INT_CALL(object = AttitudePhysicalProperties(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudePhysicalProperties_getCenterOfPressure(t_AttitudePhysicalProperties *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getCenterOfPressure());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_AttitudePhysicalProperties_getCenterOfPressureReferenceFrame(t_AttitudePhysicalProperties *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getCenterOfPressureReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AttitudePhysicalProperties_getDragCoefficient(t_AttitudePhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDragCoefficient());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudePhysicalProperties_getDryMass(t_AttitudePhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDryMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudePhysicalProperties_getInertiaMatrix(t_AttitudePhysicalProperties *self)
              {
                ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              static PyObject *t_AttitudePhysicalProperties_getInertiaReferenceFrame(t_AttitudePhysicalProperties *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getInertiaReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AttitudePhysicalProperties_getWetMass(t_AttitudePhysicalProperties *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getWetMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudePhysicalProperties_setCenterOfPressure(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCenterOfPressure(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCenterOfPressure", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setCenterOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setCenterOfPressureReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCenterOfPressureReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setDragCoefficient(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDragCoefficient(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDragCoefficient", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setDryMass(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDryMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDryMass", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setInertiaMatrixEntry(t_AttitudePhysicalProperties *self, PyObject *args)
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

              static PyObject *t_AttitudePhysicalProperties_setInertiaReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setInertiaReferenceFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setInertiaReferenceFrame", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_setWetMass(t_AttitudePhysicalProperties *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setWetMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setWetMass", arg);
                return NULL;
              }

              static PyObject *t_AttitudePhysicalProperties_validate(t_AttitudePhysicalProperties *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudePhysicalProperties), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudePhysicalProperties_get__centerOfPressure(t_AttitudePhysicalProperties *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getCenterOfPressure());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }
              static int t_AttitudePhysicalProperties_set__centerOfPressure(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCenterOfPressure(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "centerOfPressure", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__centerOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getCenterOfPressureReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AttitudePhysicalProperties_set__centerOfPressureReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCenterOfPressureReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "centerOfPressureReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__dragCoefficient(t_AttitudePhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDragCoefficient());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudePhysicalProperties_set__dragCoefficient(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDragCoefficient(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dragCoefficient", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__dryMass(t_AttitudePhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDryMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudePhysicalProperties_set__dryMass(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDryMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "dryMass", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__inertiaMatrix(t_AttitudePhysicalProperties *self, void *data)
              {
                ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaMatrix());
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
              }

              static PyObject *t_AttitudePhysicalProperties_get__inertiaReferenceFrame(t_AttitudePhysicalProperties *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getInertiaReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_AttitudePhysicalProperties_set__inertiaReferenceFrame(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setInertiaReferenceFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "inertiaReferenceFrame", arg);
                return -1;
              }

              static PyObject *t_AttitudePhysicalProperties_get__wetMass(t_AttitudePhysicalProperties *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getWetMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudePhysicalProperties_set__wetMass(t_AttitudePhysicalProperties *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setWetMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "wetMass", arg);
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
#include "org/orekit/utils/ParameterDriver.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/lang/Integer.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterObserver.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ParameterDriver::class$ = NULL;
      jmethodID *ParameterDriver::mids$ = NULL;
      bool ParameterDriver::live$ = false;

      jclass ParameterDriver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ParameterDriver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_628c7a380d836cba] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DDDD)V");
          mids$[mid_init$_ae8d41aac6be4b62] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/utils/TimeSpanMap;Lorg/orekit/utils/TimeSpanMap;DDDD)V");
          mids$[mid_addObserver_527bf64f7d280e07] = env->getMethodID(cls, "addObserver", "(Lorg/orekit/utils/ParameterObserver;)V");
          mids$[mid_addSpanAtDate_8497861b879c83f7] = env->getMethodID(cls, "addSpanAtDate", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_addSpans_05fe71f75ead48fc] = env->getMethodID(cls, "addSpans", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_getMaxValue_9981f74b2d109da6] = env->getMethodID(cls, "getMaxValue", "()D");
          mids$[mid_getMinValue_9981f74b2d109da6] = env->getMethodID(cls, "getMinValue", "()D");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getNameSpan_6989a51b7b3249aa] = env->getMethodID(cls, "getNameSpan", "(Lorg/orekit/time/AbsoluteDate;)Ljava/lang/String;");
          mids$[mid_getNamesSpanMap_d11c7ec0e313e33d] = env->getMethodID(cls, "getNamesSpanMap", "()Lorg/orekit/utils/TimeSpanMap;");
          mids$[mid_getNbOfValues_d6ab429752e7c267] = env->getMethodID(cls, "getNbOfValues", "()I");
          mids$[mid_getNormalizedValue_9981f74b2d109da6] = env->getMethodID(cls, "getNormalizedValue", "()D");
          mids$[mid_getNormalizedValue_209f08246d708042] = env->getMethodID(cls, "getNormalizedValue", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getObservers_d751c1a57012b438] = env->getMethodID(cls, "getObservers", "()Ljava/util/List;");
          mids$[mid_getReferenceDate_80e11148db499dda] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getReferenceValue_9981f74b2d109da6] = env->getMethodID(cls, "getReferenceValue", "()D");
          mids$[mid_getScale_9981f74b2d109da6] = env->getMethodID(cls, "getScale", "()D");
          mids$[mid_getTransitionDates_1020504549d5f668] = env->getMethodID(cls, "getTransitionDates", "()[Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getValue_9981f74b2d109da6] = env->getMethodID(cls, "getValue", "()D");
          mids$[mid_getValue_209f08246d708042] = env->getMethodID(cls, "getValue", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getValue_52600281d0133d08] = env->getMethodID(cls, "getValue", "(ILjava/util/Map;)Lorg/hipparchus/analysis/differentiation/Gradient;");
          mids$[mid_getValue_aef63685d22d4c3c] = env->getMethodID(cls, "getValue", "(ILjava/util/Map;Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/analysis/differentiation/Gradient;");
          mids$[mid_getValueContinuousEstimation_209f08246d708042] = env->getMethodID(cls, "getValueContinuousEstimation", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getValueSpanMap_d11c7ec0e313e33d] = env->getMethodID(cls, "getValueSpanMap", "()Lorg/orekit/utils/TimeSpanMap;");
          mids$[mid_getValueStepEstimation_209f08246d708042] = env->getMethodID(cls, "getValueStepEstimation", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_getValues_be783177b060994b] = env->getMethodID(cls, "getValues", "()[D");
          mids$[mid_isContinuousEstimation_eee3de00fe971136] = env->getMethodID(cls, "isContinuousEstimation", "()Z");
          mids$[mid_isSelected_eee3de00fe971136] = env->getMethodID(cls, "isSelected", "()Z");
          mids$[mid_removeObserver_527bf64f7d280e07] = env->getMethodID(cls, "removeObserver", "(Lorg/orekit/utils/ParameterObserver;)V");
          mids$[mid_replaceObserver_e8442ae8bbe7cb5e] = env->getMethodID(cls, "replaceObserver", "(Lorg/orekit/utils/ParameterObserver;Lorg/orekit/utils/ParameterObserver;)V");
          mids$[mid_setContinuousEstimation_b35db77cae58639e] = env->getMethodID(cls, "setContinuousEstimation", "(Z)V");
          mids$[mid_setMaxValue_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMaxValue", "(D)V");
          mids$[mid_setMinValue_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setMinValue", "(D)V");
          mids$[mid_setName_105e1eadb709d9ac] = env->getMethodID(cls, "setName", "(Ljava/lang/String;)V");
          mids$[mid_setNormalizedValue_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setNormalizedValue", "(D)V");
          mids$[mid_setNormalizedValue_281401e03841f11f] = env->getMethodID(cls, "setNormalizedValue", "(DLorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_setReferenceDate_8497861b879c83f7] = env->getMethodID(cls, "setReferenceDate", "(Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_setReferenceValue_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setReferenceValue", "(D)V");
          mids$[mid_setScale_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setScale", "(D)V");
          mids$[mid_setSelected_b35db77cae58639e] = env->getMethodID(cls, "setSelected", "(Z)V");
          mids$[mid_setValue_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setValue", "(D)V");
          mids$[mid_setValue_281401e03841f11f] = env->getMethodID(cls, "setValue", "(DLorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_setValueSpanMap_680e005705d5f0aa] = env->getMethodID(cls, "setValueSpanMap", "(Lorg/orekit/utils/ParameterDriver;)V");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ParameterDriver::ParameterDriver(const ::java::lang::String & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_628c7a380d836cba, a0.this$, a1, a2, a3, a4)) {}

      ParameterDriver::ParameterDriver(const ::java::lang::String & a0, const ::org::orekit::utils::TimeSpanMap & a1, const ::org::orekit::utils::TimeSpanMap & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ae8d41aac6be4b62, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

      void ParameterDriver::addObserver(const ::org::orekit::utils::ParameterObserver & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addObserver_527bf64f7d280e07], a0.this$);
      }

      void ParameterDriver::addSpanAtDate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addSpanAtDate_8497861b879c83f7], a0.this$);
      }

      void ParameterDriver::addSpans(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addSpans_05fe71f75ead48fc], a0.this$, a1.this$, a2);
      }

      jdouble ParameterDriver::getMaxValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMaxValue_9981f74b2d109da6]);
      }

      jdouble ParameterDriver::getMinValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinValue_9981f74b2d109da6]);
      }

      ::java::lang::String ParameterDriver::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      ::java::lang::String ParameterDriver::getNameSpan(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNameSpan_6989a51b7b3249aa], a0.this$));
      }

      ::org::orekit::utils::TimeSpanMap ParameterDriver::getNamesSpanMap() const
      {
        return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getNamesSpanMap_d11c7ec0e313e33d]));
      }

      jint ParameterDriver::getNbOfValues() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbOfValues_d6ab429752e7c267]);
      }

      jdouble ParameterDriver::getNormalizedValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormalizedValue_9981f74b2d109da6]);
      }

      jdouble ParameterDriver::getNormalizedValue(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormalizedValue_209f08246d708042], a0.this$);
      }

      ::java::util::List ParameterDriver::getObservers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getObservers_d751c1a57012b438]));
      }

      ::org::orekit::time::AbsoluteDate ParameterDriver::getReferenceDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_80e11148db499dda]));
      }

      jdouble ParameterDriver::getReferenceValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReferenceValue_9981f74b2d109da6]);
      }

      jdouble ParameterDriver::getScale() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getScale_9981f74b2d109da6]);
      }

      JArray< ::org::orekit::time::AbsoluteDate > ParameterDriver::getTransitionDates() const
      {
        return JArray< ::org::orekit::time::AbsoluteDate >(env->callObjectMethod(this$, mids$[mid_getTransitionDates_1020504549d5f668]));
      }

      jdouble ParameterDriver::getValue() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValue_9981f74b2d109da6]);
      }

      jdouble ParameterDriver::getValue(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValue_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::analysis::differentiation::Gradient ParameterDriver::getValue(jint a0, const ::java::util::Map & a1) const
      {
        return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getValue_52600281d0133d08], a0, a1.this$));
      }

      ::org::hipparchus::analysis::differentiation::Gradient ParameterDriver::getValue(jint a0, const ::java::util::Map & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_getValue_aef63685d22d4c3c], a0, a1.this$, a2.this$));
      }

      jdouble ParameterDriver::getValueContinuousEstimation(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValueContinuousEstimation_209f08246d708042], a0.this$);
      }

      ::org::orekit::utils::TimeSpanMap ParameterDriver::getValueSpanMap() const
      {
        return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getValueSpanMap_d11c7ec0e313e33d]));
      }

      jdouble ParameterDriver::getValueStepEstimation(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getValueStepEstimation_209f08246d708042], a0.this$);
      }

      JArray< jdouble > ParameterDriver::getValues() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValues_be783177b060994b]));
      }

      jboolean ParameterDriver::isContinuousEstimation() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isContinuousEstimation_eee3de00fe971136]);
      }

      jboolean ParameterDriver::isSelected() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isSelected_eee3de00fe971136]);
      }

      void ParameterDriver::removeObserver(const ::org::orekit::utils::ParameterObserver & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_removeObserver_527bf64f7d280e07], a0.this$);
      }

      void ParameterDriver::replaceObserver(const ::org::orekit::utils::ParameterObserver & a0, const ::org::orekit::utils::ParameterObserver & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_replaceObserver_e8442ae8bbe7cb5e], a0.this$, a1.this$);
      }

      void ParameterDriver::setContinuousEstimation(jboolean a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setContinuousEstimation_b35db77cae58639e], a0);
      }

      void ParameterDriver::setMaxValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMaxValue_1ad26e8c8c0cd65b], a0);
      }

      void ParameterDriver::setMinValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setMinValue_1ad26e8c8c0cd65b], a0);
      }

      void ParameterDriver::setName(const ::java::lang::String & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setName_105e1eadb709d9ac], a0.this$);
      }

      void ParameterDriver::setNormalizedValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setNormalizedValue_1ad26e8c8c0cd65b], a0);
      }

      void ParameterDriver::setNormalizedValue(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setNormalizedValue_281401e03841f11f], a0, a1.this$);
      }

      void ParameterDriver::setReferenceDate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setReferenceDate_8497861b879c83f7], a0.this$);
      }

      void ParameterDriver::setReferenceValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setReferenceValue_1ad26e8c8c0cd65b], a0);
      }

      void ParameterDriver::setScale(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setScale_1ad26e8c8c0cd65b], a0);
      }

      void ParameterDriver::setSelected(jboolean a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setSelected_b35db77cae58639e], a0);
      }

      void ParameterDriver::setValue(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setValue_1ad26e8c8c0cd65b], a0);
      }

      void ParameterDriver::setValue(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setValue_281401e03841f11f], a0, a1.this$);
      }

      void ParameterDriver::setValueSpanMap(const ParameterDriver & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setValueSpanMap_680e005705d5f0aa], a0.this$);
      }

      ::java::lang::String ParameterDriver::toString() const
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
    namespace utils {
      static PyObject *t_ParameterDriver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ParameterDriver_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ParameterDriver_init_(t_ParameterDriver *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ParameterDriver_addObserver(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_addSpanAtDate(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_addSpans(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_getMaxValue(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getMinValue(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getName(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getNameSpan(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_getNamesSpanMap(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getNbOfValues(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getNormalizedValue(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_getObservers(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getReferenceDate(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getReferenceValue(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getScale(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getTransitionDates(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getValue(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_getValueContinuousEstimation(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_getValueSpanMap(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_getValueStepEstimation(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_getValues(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_isContinuousEstimation(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_isSelected(t_ParameterDriver *self);
      static PyObject *t_ParameterDriver_removeObserver(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_replaceObserver(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_setContinuousEstimation(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setMaxValue(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setMinValue(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setName(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setNormalizedValue(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_setReferenceDate(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setReferenceValue(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setScale(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setSelected(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_setValue(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_setValueSpanMap(t_ParameterDriver *self, PyObject *arg);
      static PyObject *t_ParameterDriver_toString(t_ParameterDriver *self, PyObject *args);
      static PyObject *t_ParameterDriver_get__continuousEstimation(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__continuousEstimation(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__maxValue(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__maxValue(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__minValue(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__minValue(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__name(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__name(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__namesSpanMap(t_ParameterDriver *self, void *data);
      static PyObject *t_ParameterDriver_get__nbOfValues(t_ParameterDriver *self, void *data);
      static PyObject *t_ParameterDriver_get__normalizedValue(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__normalizedValue(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__observers(t_ParameterDriver *self, void *data);
      static PyObject *t_ParameterDriver_get__referenceDate(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__referenceDate(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__referenceValue(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__referenceValue(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__scale(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__scale(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__selected(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__selected(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__transitionDates(t_ParameterDriver *self, void *data);
      static PyObject *t_ParameterDriver_get__value(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__value(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__valueSpanMap(t_ParameterDriver *self, void *data);
      static int t_ParameterDriver_set__valueSpanMap(t_ParameterDriver *self, PyObject *arg, void *data);
      static PyObject *t_ParameterDriver_get__values(t_ParameterDriver *self, void *data);
      static PyGetSetDef t_ParameterDriver__fields_[] = {
        DECLARE_GETSET_FIELD(t_ParameterDriver, continuousEstimation),
        DECLARE_GETSET_FIELD(t_ParameterDriver, maxValue),
        DECLARE_GETSET_FIELD(t_ParameterDriver, minValue),
        DECLARE_GETSET_FIELD(t_ParameterDriver, name),
        DECLARE_GET_FIELD(t_ParameterDriver, namesSpanMap),
        DECLARE_GET_FIELD(t_ParameterDriver, nbOfValues),
        DECLARE_GETSET_FIELD(t_ParameterDriver, normalizedValue),
        DECLARE_GET_FIELD(t_ParameterDriver, observers),
        DECLARE_GETSET_FIELD(t_ParameterDriver, referenceDate),
        DECLARE_GETSET_FIELD(t_ParameterDriver, referenceValue),
        DECLARE_GETSET_FIELD(t_ParameterDriver, scale),
        DECLARE_GETSET_FIELD(t_ParameterDriver, selected),
        DECLARE_GET_FIELD(t_ParameterDriver, transitionDates),
        DECLARE_GETSET_FIELD(t_ParameterDriver, value),
        DECLARE_GETSET_FIELD(t_ParameterDriver, valueSpanMap),
        DECLARE_GET_FIELD(t_ParameterDriver, values),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ParameterDriver__methods_[] = {
        DECLARE_METHOD(t_ParameterDriver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ParameterDriver, addObserver, METH_O),
        DECLARE_METHOD(t_ParameterDriver, addSpanAtDate, METH_O),
        DECLARE_METHOD(t_ParameterDriver, addSpans, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, getMaxValue, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getMinValue, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getName, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getNameSpan, METH_O),
        DECLARE_METHOD(t_ParameterDriver, getNamesSpanMap, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getNbOfValues, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getNormalizedValue, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, getObservers, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getReferenceDate, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getReferenceValue, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getScale, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getTransitionDates, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getValue, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, getValueContinuousEstimation, METH_O),
        DECLARE_METHOD(t_ParameterDriver, getValueSpanMap, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, getValueStepEstimation, METH_O),
        DECLARE_METHOD(t_ParameterDriver, getValues, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, isContinuousEstimation, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, isSelected, METH_NOARGS),
        DECLARE_METHOD(t_ParameterDriver, removeObserver, METH_O),
        DECLARE_METHOD(t_ParameterDriver, replaceObserver, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, setContinuousEstimation, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setMaxValue, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setMinValue, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setName, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setNormalizedValue, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, setReferenceDate, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setReferenceValue, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setScale, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setSelected, METH_O),
        DECLARE_METHOD(t_ParameterDriver, setValue, METH_VARARGS),
        DECLARE_METHOD(t_ParameterDriver, setValueSpanMap, METH_O),
        DECLARE_METHOD(t_ParameterDriver, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ParameterDriver)[] = {
        { Py_tp_methods, t_ParameterDriver__methods_ },
        { Py_tp_init, (void *) t_ParameterDriver_init_ },
        { Py_tp_getset, t_ParameterDriver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ParameterDriver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ParameterDriver, t_ParameterDriver, ParameterDriver);

      void t_ParameterDriver::install(PyObject *module)
      {
        installType(&PY_TYPE(ParameterDriver), &PY_TYPE_DEF(ParameterDriver), module, "ParameterDriver", 0);
      }

      void t_ParameterDriver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriver), "class_", make_descriptor(ParameterDriver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriver), "wrapfn_", make_descriptor(t_ParameterDriver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ParameterDriver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ParameterDriver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ParameterDriver::initializeClass, 1)))
          return NULL;
        return t_ParameterDriver::wrap_Object(ParameterDriver(((t_ParameterDriver *) arg)->object.this$));
      }
      static PyObject *t_ParameterDriver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ParameterDriver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ParameterDriver_init_(t_ParameterDriver *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            ::java::lang::String a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            ParameterDriver object((jobject) NULL);

            if (!parseArgs(args, "sDDDD", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = ParameterDriver(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::utils::TimeSpanMap a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::TimeSpanMap a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            ParameterDriver object((jobject) NULL);

            if (!parseArgs(args, "sKKDDDD", ::org::orekit::utils::TimeSpanMap::initializeClass, ::org::orekit::utils::TimeSpanMap::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a2, &p2, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = ParameterDriver(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_ParameterDriver_addObserver(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::utils::ParameterObserver a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::utils::ParameterObserver::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addObserver(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addObserver", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_addSpanAtDate(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(self->object.addSpanAtDate(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addSpanAtDate", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_addSpans(t_ParameterDriver *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jdouble a2;

        if (!parseArgs(args, "kkD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addSpans(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addSpans", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getMaxValue(t_ParameterDriver *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMaxValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterDriver_getMinValue(t_ParameterDriver *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterDriver_getName(t_ParameterDriver *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_ParameterDriver_getNameSpan(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getNameSpan(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getNameSpan", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getNamesSpanMap(t_ParameterDriver *self)
      {
        ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
        OBJ_CALL(result = self->object.getNamesSpanMap());
        return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::java::lang::PY_TYPE(String));
      }

      static PyObject *t_ParameterDriver_getNbOfValues(t_ParameterDriver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbOfValues());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ParameterDriver_getNormalizedValue(t_ParameterDriver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormalizedValue());
            return PyFloat_FromDouble((double) result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getNormalizedValue(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getNormalizedValue", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getObservers(t_ParameterDriver *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getObservers());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterObserver));
      }

      static PyObject *t_ParameterDriver_getReferenceDate(t_ParameterDriver *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_ParameterDriver_getReferenceValue(t_ParameterDriver *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReferenceValue());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterDriver_getScale(t_ParameterDriver *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getScale());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_ParameterDriver_getTransitionDates(t_ParameterDriver *self)
      {
        JArray< ::org::orekit::time::AbsoluteDate > result((jobject) NULL);
        OBJ_CALL(result = self->object.getTransitionDates());
        return JArray<jobject>(result.this$).wrap(::org::orekit::time::t_AbsoluteDate::wrap_jobject);
      }

      static PyObject *t_ParameterDriver_getValue(t_ParameterDriver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jdouble result;
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getValue(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 2:
          {
            jint a0;
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);

            if (!parseArgs(args, "IK", ::java::util::Map::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.getValue(a0, a1));
              return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            jint a0;
            ::java::util::Map a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);

            if (!parseArgs(args, "IKk", ::java::util::Map::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &p1, ::java::util::t_Map::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getValue(a0, a1, a2));
              return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getValue", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getValueContinuousEstimation(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getValueContinuousEstimation(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getValueContinuousEstimation", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getValueSpanMap(t_ParameterDriver *self)
      {
        ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
        OBJ_CALL(result = self->object.getValueSpanMap());
        return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result, ::java::lang::PY_TYPE(Double));
      }

      static PyObject *t_ParameterDriver_getValueStepEstimation(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getValueStepEstimation(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getValueStepEstimation", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_getValues(t_ParameterDriver *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValues());
        return result.wrap();
      }

      static PyObject *t_ParameterDriver_isContinuousEstimation(t_ParameterDriver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isContinuousEstimation());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ParameterDriver_isSelected(t_ParameterDriver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isSelected());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_ParameterDriver_removeObserver(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::utils::ParameterObserver a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::utils::ParameterObserver::initializeClass, &a0))
        {
          OBJ_CALL(self->object.removeObserver(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "removeObserver", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_replaceObserver(t_ParameterDriver *self, PyObject *args)
      {
        ::org::orekit::utils::ParameterObserver a0((jobject) NULL);
        ::org::orekit::utils::ParameterObserver a1((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterObserver::initializeClass, ::org::orekit::utils::ParameterObserver::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.replaceObserver(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "replaceObserver", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setContinuousEstimation(t_ParameterDriver *self, PyObject *arg)
      {
        jboolean a0;

        if (!parseArg(arg, "Z", &a0))
        {
          OBJ_CALL(self->object.setContinuousEstimation(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setContinuousEstimation", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setMaxValue(t_ParameterDriver *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMaxValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMaxValue", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setMinValue(t_ParameterDriver *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setMinValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setMinValue", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setName(t_ParameterDriver *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(self->object.setName(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setName", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setNormalizedValue(t_ParameterDriver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setNormalizedValue(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setNormalizedValue(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setNormalizedValue", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setReferenceDate(t_ParameterDriver *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setReferenceDate(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setReferenceDate", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setReferenceValue(t_ParameterDriver *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setReferenceValue(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setReferenceValue", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setScale(t_ParameterDriver *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.setScale(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setScale", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setSelected(t_ParameterDriver *self, PyObject *arg)
      {
        jboolean a0;

        if (!parseArg(arg, "Z", &a0))
        {
          OBJ_CALL(self->object.setSelected(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setSelected", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setValue(t_ParameterDriver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.setValue(a0));
              Py_RETURN_NONE;
            }
          }
          break;
         case 2:
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.setValue(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "setValue", args);
        return NULL;
      }

      static PyObject *t_ParameterDriver_setValueSpanMap(t_ParameterDriver *self, PyObject *arg)
      {
        ParameterDriver a0((jobject) NULL);

        if (!parseArg(arg, "k", ParameterDriver::initializeClass, &a0))
        {
          OBJ_CALL(self->object.setValueSpanMap(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setValueSpanMap", arg);
        return NULL;
      }

      static PyObject *t_ParameterDriver_toString(t_ParameterDriver *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(ParameterDriver), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_ParameterDriver_get__continuousEstimation(t_ParameterDriver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isContinuousEstimation());
        Py_RETURN_BOOL(value);
      }
      static int t_ParameterDriver_set__continuousEstimation(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jboolean value;
          if (!parseArg(arg, "Z", &value))
          {
            INT_CALL(self->object.setContinuousEstimation(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "continuousEstimation", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__maxValue(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMaxValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__maxValue(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMaxValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "maxValue", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__minValue(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__minValue(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setMinValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "minValue", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__name(t_ParameterDriver *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }
      static int t_ParameterDriver_set__name(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          ::java::lang::String value((jobject) NULL);
          if (!parseArg(arg, "s", &value))
          {
            INT_CALL(self->object.setName(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "name", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__namesSpanMap(t_ParameterDriver *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
        OBJ_CALL(value = self->object.getNamesSpanMap());
        return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
      }

      static PyObject *t_ParameterDriver_get__nbOfValues(t_ParameterDriver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbOfValues());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_ParameterDriver_get__normalizedValue(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormalizedValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__normalizedValue(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setNormalizedValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "normalizedValue", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__observers(t_ParameterDriver *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getObservers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_ParameterDriver_get__referenceDate(t_ParameterDriver *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
      static int t_ParameterDriver_set__referenceDate(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            INT_CALL(self->object.setReferenceDate(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "referenceDate", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__referenceValue(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReferenceValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__referenceValue(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setReferenceValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "referenceValue", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__scale(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getScale());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__scale(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setScale(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "scale", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__selected(t_ParameterDriver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isSelected());
        Py_RETURN_BOOL(value);
      }
      static int t_ParameterDriver_set__selected(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jboolean value;
          if (!parseArg(arg, "Z", &value))
          {
            INT_CALL(self->object.setSelected(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "selected", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__transitionDates(t_ParameterDriver *self, void *data)
      {
        JArray< ::org::orekit::time::AbsoluteDate > value((jobject) NULL);
        OBJ_CALL(value = self->object.getTransitionDates());
        return JArray<jobject>(value.this$).wrap(::org::orekit::time::t_AbsoluteDate::wrap_jobject);
      }

      static PyObject *t_ParameterDriver_get__value(t_ParameterDriver *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getValue());
        return PyFloat_FromDouble((double) value);
      }
      static int t_ParameterDriver_set__value(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          jdouble value;
          if (!parseArg(arg, "D", &value))
          {
            INT_CALL(self->object.setValue(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__valueSpanMap(t_ParameterDriver *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
        OBJ_CALL(value = self->object.getValueSpanMap());
        return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
      }
      static int t_ParameterDriver_set__valueSpanMap(t_ParameterDriver *self, PyObject *arg, void *data)
      {
        {
          ParameterDriver value((jobject) NULL);
          if (!parseArg(arg, "k", ParameterDriver::initializeClass, &value))
          {
            INT_CALL(self->object.setValueSpanMap(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "valueSpanMap", arg);
        return -1;
      }

      static PyObject *t_ParameterDriver_get__values(t_ParameterDriver *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValues());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/BurstSelector.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DatesSelector.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *BurstSelector::class$ = NULL;
      jmethodID *BurstSelector::mids$ = NULL;
      bool BurstSelector::live$ = false;

      jclass BurstSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/BurstSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_72b6ca23e6675be7] = env->getMethodID(cls, "<init>", "(IDDLorg/orekit/time/TimeScale;)V");
          mids$[mid_selectDates_0499dac7e83b853d] = env->getMethodID(cls, "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BurstSelector::BurstSelector(jint a0, jdouble a1, jdouble a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_72b6ca23e6675be7, a0, a1, a2, a3.this$)) {}

      ::java::util::List BurstSelector::selectDates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_selectDates_0499dac7e83b853d], a0.this$, a1.this$));
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
      static PyObject *t_BurstSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BurstSelector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BurstSelector_init_(t_BurstSelector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BurstSelector_selectDates(t_BurstSelector *self, PyObject *args);

      static PyMethodDef t_BurstSelector__methods_[] = {
        DECLARE_METHOD(t_BurstSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BurstSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BurstSelector, selectDates, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BurstSelector)[] = {
        { Py_tp_methods, t_BurstSelector__methods_ },
        { Py_tp_init, (void *) t_BurstSelector_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BurstSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BurstSelector, t_BurstSelector, BurstSelector);

      void t_BurstSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(BurstSelector), &PY_TYPE_DEF(BurstSelector), module, "BurstSelector", 0);
      }

      void t_BurstSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BurstSelector), "class_", make_descriptor(BurstSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BurstSelector), "wrapfn_", make_descriptor(t_BurstSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BurstSelector), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BurstSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BurstSelector::initializeClass, 1)))
          return NULL;
        return t_BurstSelector::wrap_Object(BurstSelector(((t_BurstSelector *) arg)->object.this$));
      }
      static PyObject *t_BurstSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BurstSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BurstSelector_init_(t_BurstSelector *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        jdouble a2;
        ::org::orekit::time::TimeScale a3((jobject) NULL);
        BurstSelector object((jobject) NULL);

        if (!parseArgs(args, "IDDk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
        {
          INT_CALL(object = BurstSelector(a0, a1, a2, a3));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BurstSelector_selectDates(t_BurstSelector *self, PyObject *args)
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
#include "org/orekit/propagation/conversion/AdamsMoultonFieldIntegratorBuilder.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AdamsMoultonFieldIntegratorBuilder::class$ = NULL;
        jmethodID *AdamsMoultonFieldIntegratorBuilder::mids$ = NULL;
        bool AdamsMoultonFieldIntegratorBuilder::live$ = false;

        jclass AdamsMoultonFieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AdamsMoultonFieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2baad0ec229f7c27] = env->getMethodID(cls, "<init>", "(IDDD)V");
            mids$[mid_buildIntegrator_78d8a25057f42815] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsMoultonFieldIntegratorBuilder::AdamsMoultonFieldIntegratorBuilder(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_2baad0ec229f7c27, a0, a1, a2, a3)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator AdamsMoultonFieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_78d8a25057f42815], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_of_(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args);
        static int t_AdamsMoultonFieldIntegratorBuilder_init_(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_buildIntegrator(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_get__parameters_(t_AdamsMoultonFieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_AdamsMoultonFieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsMoultonFieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsMoultonFieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_AdamsMoultonFieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdamsMoultonFieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsMoultonFieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_AdamsMoultonFieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_AdamsMoultonFieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_AdamsMoultonFieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsMoultonFieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractLimitedVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(AdamsMoultonFieldIntegratorBuilder, t_AdamsMoultonFieldIntegratorBuilder, AdamsMoultonFieldIntegratorBuilder);
        PyObject *t_AdamsMoultonFieldIntegratorBuilder::wrap_Object(const AdamsMoultonFieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsMoultonFieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsMoultonFieldIntegratorBuilder *self = (t_AdamsMoultonFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsMoultonFieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsMoultonFieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsMoultonFieldIntegratorBuilder *self = (t_AdamsMoultonFieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsMoultonFieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsMoultonFieldIntegratorBuilder), &PY_TYPE_DEF(AdamsMoultonFieldIntegratorBuilder), module, "AdamsMoultonFieldIntegratorBuilder", 0);
        }

        void t_AdamsMoultonFieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegratorBuilder), "class_", make_descriptor(AdamsMoultonFieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegratorBuilder), "wrapfn_", make_descriptor(t_AdamsMoultonFieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsMoultonFieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsMoultonFieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_AdamsMoultonFieldIntegratorBuilder::wrap_Object(AdamsMoultonFieldIntegratorBuilder(((t_AdamsMoultonFieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsMoultonFieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_of_(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsMoultonFieldIntegratorBuilder_init_(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          AdamsMoultonFieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = AdamsMoultonFieldIntegratorBuilder(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_buildIntegrator(t_AdamsMoultonFieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(AdamsMoultonFieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_AdamsMoultonFieldIntegratorBuilder_get__parameters_(t_AdamsMoultonFieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/OccultationEngine$FieldOccultationAngles.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *OccultationEngine$FieldOccultationAngles::class$ = NULL;
      jmethodID *OccultationEngine$FieldOccultationAngles::mids$ = NULL;
      bool OccultationEngine$FieldOccultationAngles::live$ = false;

      jclass OccultationEngine$FieldOccultationAngles::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/OccultationEngine$FieldOccultationAngles");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLimbRadius_08d37e3f77b7239d] = env->getMethodID(cls, "getLimbRadius", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getOccultedApparentRadius_08d37e3f77b7239d] = env->getMethodID(cls, "getOccultedApparentRadius", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getSeparation_08d37e3f77b7239d] = env->getMethodID(cls, "getSeparation", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::CalculusFieldElement OccultationEngine$FieldOccultationAngles::getLimbRadius() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLimbRadius_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement OccultationEngine$FieldOccultationAngles::getOccultedApparentRadius() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getOccultedApparentRadius_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement OccultationEngine$FieldOccultationAngles::getSeparation() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSeparation_08d37e3f77b7239d]));
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
      static PyObject *t_OccultationEngine$FieldOccultationAngles_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_of_(t_OccultationEngine$FieldOccultationAngles *self, PyObject *args);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_getLimbRadius(t_OccultationEngine$FieldOccultationAngles *self);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_getOccultedApparentRadius(t_OccultationEngine$FieldOccultationAngles *self);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_getSeparation(t_OccultationEngine$FieldOccultationAngles *self);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__limbRadius(t_OccultationEngine$FieldOccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__occultedApparentRadius(t_OccultationEngine$FieldOccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__separation(t_OccultationEngine$FieldOccultationAngles *self, void *data);
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__parameters_(t_OccultationEngine$FieldOccultationAngles *self, void *data);
      static PyGetSetDef t_OccultationEngine$FieldOccultationAngles__fields_[] = {
        DECLARE_GET_FIELD(t_OccultationEngine$FieldOccultationAngles, limbRadius),
        DECLARE_GET_FIELD(t_OccultationEngine$FieldOccultationAngles, occultedApparentRadius),
        DECLARE_GET_FIELD(t_OccultationEngine$FieldOccultationAngles, separation),
        DECLARE_GET_FIELD(t_OccultationEngine$FieldOccultationAngles, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OccultationEngine$FieldOccultationAngles__methods_[] = {
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, of_, METH_VARARGS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, getLimbRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, getOccultedApparentRadius, METH_NOARGS),
        DECLARE_METHOD(t_OccultationEngine$FieldOccultationAngles, getSeparation, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OccultationEngine$FieldOccultationAngles)[] = {
        { Py_tp_methods, t_OccultationEngine$FieldOccultationAngles__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_OccultationEngine$FieldOccultationAngles__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OccultationEngine$FieldOccultationAngles)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OccultationEngine$FieldOccultationAngles, t_OccultationEngine$FieldOccultationAngles, OccultationEngine$FieldOccultationAngles);
      PyObject *t_OccultationEngine$FieldOccultationAngles::wrap_Object(const OccultationEngine$FieldOccultationAngles& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OccultationEngine$FieldOccultationAngles::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OccultationEngine$FieldOccultationAngles *self = (t_OccultationEngine$FieldOccultationAngles *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_OccultationEngine$FieldOccultationAngles::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_OccultationEngine$FieldOccultationAngles::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_OccultationEngine$FieldOccultationAngles *self = (t_OccultationEngine$FieldOccultationAngles *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_OccultationEngine$FieldOccultationAngles::install(PyObject *module)
      {
        installType(&PY_TYPE(OccultationEngine$FieldOccultationAngles), &PY_TYPE_DEF(OccultationEngine$FieldOccultationAngles), module, "OccultationEngine$FieldOccultationAngles", 0);
      }

      void t_OccultationEngine$FieldOccultationAngles::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$FieldOccultationAngles), "class_", make_descriptor(OccultationEngine$FieldOccultationAngles::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$FieldOccultationAngles), "wrapfn_", make_descriptor(t_OccultationEngine$FieldOccultationAngles::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OccultationEngine$FieldOccultationAngles), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OccultationEngine$FieldOccultationAngles::initializeClass, 1)))
          return NULL;
        return t_OccultationEngine$FieldOccultationAngles::wrap_Object(OccultationEngine$FieldOccultationAngles(((t_OccultationEngine$FieldOccultationAngles *) arg)->object.this$));
      }
      static PyObject *t_OccultationEngine$FieldOccultationAngles_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OccultationEngine$FieldOccultationAngles::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_of_(t_OccultationEngine$FieldOccultationAngles *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_getLimbRadius(t_OccultationEngine$FieldOccultationAngles *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getLimbRadius());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_getOccultedApparentRadius(t_OccultationEngine$FieldOccultationAngles *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getOccultedApparentRadius());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_getSeparation(t_OccultationEngine$FieldOccultationAngles *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getSeparation());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__parameters_(t_OccultationEngine$FieldOccultationAngles *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__limbRadius(t_OccultationEngine$FieldOccultationAngles *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getLimbRadius());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__occultedApparentRadius(t_OccultationEngine$FieldOccultationAngles *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getOccultedApparentRadius());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_OccultationEngine$FieldOccultationAngles_get__separation(t_OccultationEngine$FieldOccultationAngles *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getSeparation());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/ssr/SsrMessage.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/SsrHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {

            ::java::lang::Class *SsrMessage::class$ = NULL;
            jmethodID *SsrMessage::mids$ = NULL;
            bool SsrMessage::live$ = false;

            jclass SsrMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/SsrMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_53cb67f82def5b02] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/ssr/SsrHeader;Ljava/util/List;)V");
                mids$[mid_getData_d751c1a57012b438] = env->getMethodID(cls, "getData", "()Ljava/util/List;");
                mids$[mid_getHeader_3921d059e7b157ab] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/gnss/metric/messages/ssr/SsrHeader;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SsrMessage::SsrMessage(jint a0, const ::org::orekit::gnss::metric::messages::ssr::SsrHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::ParsedMessage(env->newObject(initializeClass, &mids$, mid_init$_53cb67f82def5b02, a0, a1.this$, a2.this$)) {}

            ::java::util::List SsrMessage::getData() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getData_d751c1a57012b438]));
            }

            ::org::orekit::gnss::metric::messages::ssr::SsrHeader SsrMessage::getHeader() const
            {
              return ::org::orekit::gnss::metric::messages::ssr::SsrHeader(env->callObjectMethod(this$, mids$[mid_getHeader_3921d059e7b157ab]));
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
            static PyObject *t_SsrMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrMessage_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SsrMessage_of_(t_SsrMessage *self, PyObject *args);
            static int t_SsrMessage_init_(t_SsrMessage *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SsrMessage_getData(t_SsrMessage *self);
            static PyObject *t_SsrMessage_getHeader(t_SsrMessage *self);
            static PyObject *t_SsrMessage_get__data(t_SsrMessage *self, void *data);
            static PyObject *t_SsrMessage_get__header(t_SsrMessage *self, void *data);
            static PyObject *t_SsrMessage_get__parameters_(t_SsrMessage *self, void *data);
            static PyGetSetDef t_SsrMessage__fields_[] = {
              DECLARE_GET_FIELD(t_SsrMessage, data),
              DECLARE_GET_FIELD(t_SsrMessage, header),
              DECLARE_GET_FIELD(t_SsrMessage, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SsrMessage__methods_[] = {
              DECLARE_METHOD(t_SsrMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SsrMessage, of_, METH_VARARGS),
              DECLARE_METHOD(t_SsrMessage, getData, METH_NOARGS),
              DECLARE_METHOD(t_SsrMessage, getHeader, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SsrMessage)[] = {
              { Py_tp_methods, t_SsrMessage__methods_ },
              { Py_tp_init, (void *) t_SsrMessage_init_ },
              { Py_tp_getset, t_SsrMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SsrMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ParsedMessage),
              NULL
            };

            DEFINE_TYPE(SsrMessage, t_SsrMessage, SsrMessage);
            PyObject *t_SsrMessage::wrap_Object(const SsrMessage& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_SsrMessage::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SsrMessage *self = (t_SsrMessage *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_SsrMessage::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_SsrMessage::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SsrMessage *self = (t_SsrMessage *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_SsrMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(SsrMessage), &PY_TYPE_DEF(SsrMessage), module, "SsrMessage", 0);
            }

            void t_SsrMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrMessage), "class_", make_descriptor(SsrMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrMessage), "wrapfn_", make_descriptor(t_SsrMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SsrMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SsrMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SsrMessage::initializeClass, 1)))
                return NULL;
              return t_SsrMessage::wrap_Object(SsrMessage(((t_SsrMessage *) arg)->object.this$));
            }
            static PyObject *t_SsrMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SsrMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SsrMessage_of_(t_SsrMessage *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_SsrMessage_init_(t_SsrMessage *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              ::org::orekit::gnss::metric::messages::ssr::SsrHeader a1((jobject) NULL);
              ::java::util::List a2((jobject) NULL);
              PyTypeObject **p2;
              SsrMessage object((jobject) NULL);

              if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::ssr::SsrHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = SsrMessage(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_SsrMessage_getData(t_SsrMessage *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getData());
              return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
            }

            static PyObject *t_SsrMessage_getHeader(t_SsrMessage *self)
            {
              ::org::orekit::gnss::metric::messages::ssr::SsrHeader result((jobject) NULL);
              OBJ_CALL(result = self->object.getHeader());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::gnss::metric::messages::ssr::t_SsrHeader::wrap_Object(result);
            }
            static PyObject *t_SsrMessage_get__parameters_(t_SsrMessage *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_SsrMessage_get__data(t_SsrMessage *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getData());
              return ::java::util::t_List::wrap_Object(value);
            }

            static PyObject *t_SsrMessage_get__header(t_SsrMessage *self, void *data)
            {
              ::org::orekit::gnss::metric::messages::ssr::SsrHeader value((jobject) NULL);
              OBJ_CALL(value = self->object.getHeader());
              return ::org::orekit::gnss::metric::messages::ssr::t_SsrHeader::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonAbstractPropagator.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonAbstractPropagator::class$ = NULL;
      jmethodID *PythonAbstractPropagator::mids$ = NULL;
      bool PythonAbstractPropagator::live$ = false;

      jclass PythonAbstractPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonAbstractPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addEventDetector_d5d8be0538a03d97] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
          mids$[mid_clearEventsDetectors_ff7cb6c242604316] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEphemerisGenerator_9f3d902ece22e1af] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
          mids$[mid_getEventsDetectors_3bfef5c77ceb081a] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_propagate_aaae977c62060398] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonAbstractPropagator::PythonAbstractPropagator() : ::org::orekit::propagation::AbstractPropagator(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonAbstractPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonAbstractPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonAbstractPropagator::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonAbstractPropagator_init_(t_PythonAbstractPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonAbstractPropagator_finalize(t_PythonAbstractPropagator *self);
      static PyObject *t_PythonAbstractPropagator_pythonExtension(t_PythonAbstractPropagator *self, PyObject *args);
      static void JNICALL t_PythonAbstractPropagator_addEventDetector0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonAbstractPropagator_clearEventsDetectors1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractPropagator_getEphemerisGenerator2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractPropagator_getEventsDetectors3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonAbstractPropagator_propagate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonAbstractPropagator_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonAbstractPropagator_get__self(t_PythonAbstractPropagator *self, void *data);
      static PyGetSetDef t_PythonAbstractPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonAbstractPropagator, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonAbstractPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonAbstractPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonAbstractPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonAbstractPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonAbstractPropagator)[] = {
        { Py_tp_methods, t_PythonAbstractPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonAbstractPropagator_init_ },
        { Py_tp_getset, t_PythonAbstractPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonAbstractPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::AbstractPropagator),
        NULL
      };

      DEFINE_TYPE(PythonAbstractPropagator, t_PythonAbstractPropagator, PythonAbstractPropagator);

      void t_PythonAbstractPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonAbstractPropagator), &PY_TYPE_DEF(PythonAbstractPropagator), module, "PythonAbstractPropagator", 1);
      }

      void t_PythonAbstractPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagator), "class_", make_descriptor(PythonAbstractPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagator), "wrapfn_", make_descriptor(t_PythonAbstractPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonAbstractPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V", (void *) t_PythonAbstractPropagator_addEventDetector0 },
          { "clearEventsDetectors", "()V", (void *) t_PythonAbstractPropagator_clearEventsDetectors1 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;", (void *) t_PythonAbstractPropagator_getEphemerisGenerator2 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonAbstractPropagator_getEventsDetectors3 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonAbstractPropagator_propagate4 },
          { "pythonDecRef", "()V", (void *) t_PythonAbstractPropagator_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonAbstractPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonAbstractPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonAbstractPropagator::wrap_Object(PythonAbstractPropagator(((t_PythonAbstractPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonAbstractPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonAbstractPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonAbstractPropagator_init_(t_PythonAbstractPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonAbstractPropagator object((jobject) NULL);

        INT_CALL(object = PythonAbstractPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonAbstractPropagator_finalize(t_PythonAbstractPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonAbstractPropagator_pythonExtension(t_PythonAbstractPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonAbstractPropagator_addEventDetector0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static void JNICALL t_PythonAbstractPropagator_clearEventsDetectors1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonAbstractPropagator_getEphemerisGenerator2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonAbstractPropagator_getEventsDetectors3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static jobject JNICALL t_PythonAbstractPropagator_propagate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static void JNICALL t_PythonAbstractPropagator_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonAbstractPropagator::mids$[PythonAbstractPropagator::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonAbstractPropagator_get__self(t_PythonAbstractPropagator *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/PythonMeasurementCombination.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonMeasurementCombination::class$ = NULL;
          jmethodID *PythonMeasurementCombination::mids$ = NULL;
          bool PythonMeasurementCombination::live$ = false;

          jclass PythonMeasurementCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonMeasurementCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_combine_34f94a0e1855db7e] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonMeasurementCombination::PythonMeasurementCombination() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonMeasurementCombination::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonMeasurementCombination::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonMeasurementCombination::pythonExtension(jlong a0) const
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
        namespace gnss {
          static PyObject *t_PythonMeasurementCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonMeasurementCombination_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonMeasurementCombination_init_(t_PythonMeasurementCombination *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonMeasurementCombination_finalize(t_PythonMeasurementCombination *self);
          static PyObject *t_PythonMeasurementCombination_pythonExtension(t_PythonMeasurementCombination *self, PyObject *args);
          static jobject JNICALL t_PythonMeasurementCombination_combine0(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonMeasurementCombination_getName1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonMeasurementCombination_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonMeasurementCombination_get__self(t_PythonMeasurementCombination *self, void *data);
          static PyGetSetDef t_PythonMeasurementCombination__fields_[] = {
            DECLARE_GET_FIELD(t_PythonMeasurementCombination, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonMeasurementCombination__methods_[] = {
            DECLARE_METHOD(t_PythonMeasurementCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonMeasurementCombination, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonMeasurementCombination, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonMeasurementCombination)[] = {
            { Py_tp_methods, t_PythonMeasurementCombination__methods_ },
            { Py_tp_init, (void *) t_PythonMeasurementCombination_init_ },
            { Py_tp_getset, t_PythonMeasurementCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonMeasurementCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonMeasurementCombination, t_PythonMeasurementCombination, PythonMeasurementCombination);

          void t_PythonMeasurementCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonMeasurementCombination), &PY_TYPE_DEF(PythonMeasurementCombination), module, "PythonMeasurementCombination", 1);
          }

          void t_PythonMeasurementCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementCombination), "class_", make_descriptor(PythonMeasurementCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementCombination), "wrapfn_", make_descriptor(t_PythonMeasurementCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMeasurementCombination), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonMeasurementCombination::initializeClass);
            JNINativeMethod methods[] = {
              { "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;", (void *) t_PythonMeasurementCombination_combine0 },
              { "getName", "()Ljava/lang/String;", (void *) t_PythonMeasurementCombination_getName1 },
              { "pythonDecRef", "()V", (void *) t_PythonMeasurementCombination_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonMeasurementCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonMeasurementCombination::initializeClass, 1)))
              return NULL;
            return t_PythonMeasurementCombination::wrap_Object(PythonMeasurementCombination(((t_PythonMeasurementCombination *) arg)->object.this$));
          }
          static PyObject *t_PythonMeasurementCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonMeasurementCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonMeasurementCombination_init_(t_PythonMeasurementCombination *self, PyObject *args, PyObject *kwds)
          {
            PythonMeasurementCombination object((jobject) NULL);

            INT_CALL(object = PythonMeasurementCombination());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonMeasurementCombination_finalize(t_PythonMeasurementCombination *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonMeasurementCombination_pythonExtension(t_PythonMeasurementCombination *self, PyObject *args)
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

          static jobject JNICALL t_PythonMeasurementCombination_combine0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementCombination::mids$[PythonMeasurementCombination::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet value((jobject) NULL);
            PyObject *o0 = ::org::orekit::files::rinex::observation::t_ObservationDataSet::wrap_Object(::org::orekit::files::rinex::observation::ObservationDataSet(a0));
            PyObject *result = PyObject_CallMethod(obj, "combine", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet::initializeClass, &value))
            {
              throwTypeError("combine", result);
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

          static jobject JNICALL t_PythonMeasurementCombination_getName1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementCombination::mids$[PythonMeasurementCombination::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::lang::String value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getName", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "s", &value))
            {
              throwTypeError("getName", result);
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

          static void JNICALL t_PythonMeasurementCombination_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonMeasurementCombination::mids$[PythonMeasurementCombination::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonMeasurementCombination::mids$[PythonMeasurementCombination::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonMeasurementCombination_get__self(t_PythonMeasurementCombination *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/Ordering.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *Ordering::class$ = NULL;
              jmethodID *Ordering::mids$ = NULL;
              bool Ordering::live$ = false;
              Ordering *Ordering::FULL = NULL;
              Ordering *Ordering::LTM = NULL;
              Ordering *Ordering::LTMWCC = NULL;
              Ordering *Ordering::UTM = NULL;
              Ordering *Ordering::UTMWCC = NULL;

              jclass Ordering::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/Ordering");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_2fda254425175c5f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;");
                  mids$[mid_values_99cd72bb2e0264ab] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FULL = new Ordering(env->getStaticObjectField(cls, "FULL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  LTM = new Ordering(env->getStaticObjectField(cls, "LTM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  LTMWCC = new Ordering(env->getStaticObjectField(cls, "LTMWCC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  UTM = new Ordering(env->getStaticObjectField(cls, "UTM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  UTMWCC = new Ordering(env->getStaticObjectField(cls, "UTMWCC", "Lorg/orekit/files/ccsds/ndm/odm/ocm/Ordering;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Ordering Ordering::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return Ordering(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2fda254425175c5f], a0.this$));
              }

              JArray< Ordering > Ordering::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< Ordering >(env->callStaticObjectMethod(cls, mids$[mid_values_99cd72bb2e0264ab]));
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
              static PyObject *t_Ordering_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Ordering_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Ordering_of_(t_Ordering *self, PyObject *args);
              static PyObject *t_Ordering_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_Ordering_values(PyTypeObject *type);
              static PyObject *t_Ordering_get__parameters_(t_Ordering *self, void *data);
              static PyGetSetDef t_Ordering__fields_[] = {
                DECLARE_GET_FIELD(t_Ordering, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Ordering__methods_[] = {
                DECLARE_METHOD(t_Ordering, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Ordering, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Ordering, of_, METH_VARARGS),
                DECLARE_METHOD(t_Ordering, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_Ordering, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Ordering)[] = {
                { Py_tp_methods, t_Ordering__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_Ordering__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Ordering)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(Ordering, t_Ordering, Ordering);
              PyObject *t_Ordering::wrap_Object(const Ordering& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Ordering::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Ordering *self = (t_Ordering *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_Ordering::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_Ordering::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Ordering *self = (t_Ordering *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_Ordering::install(PyObject *module)
              {
                installType(&PY_TYPE(Ordering), &PY_TYPE_DEF(Ordering), module, "Ordering", 0);
              }

              void t_Ordering::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "class_", make_descriptor(Ordering::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "wrapfn_", make_descriptor(t_Ordering::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "boxfn_", make_descriptor(boxObject));
                env->getClass(Ordering::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "FULL", make_descriptor(t_Ordering::wrap_Object(*Ordering::FULL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "LTM", make_descriptor(t_Ordering::wrap_Object(*Ordering::LTM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "LTMWCC", make_descriptor(t_Ordering::wrap_Object(*Ordering::LTMWCC)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "UTM", make_descriptor(t_Ordering::wrap_Object(*Ordering::UTM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Ordering), "UTMWCC", make_descriptor(t_Ordering::wrap_Object(*Ordering::UTMWCC)));
              }

              static PyObject *t_Ordering_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Ordering::initializeClass, 1)))
                  return NULL;
                return t_Ordering::wrap_Object(Ordering(((t_Ordering *) arg)->object.this$));
              }
              static PyObject *t_Ordering_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Ordering::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Ordering_of_(t_Ordering *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_Ordering_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                Ordering result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::valueOf(a0));
                  return t_Ordering::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_Ordering_values(PyTypeObject *type)
              {
                JArray< Ordering > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::Ordering::values());
                return JArray<jobject>(result.this$).wrap(t_Ordering::wrap_jobject);
              }
              static PyObject *t_Ordering_get__parameters_(t_Ordering *self, void *data)
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
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *TimeDerivativesEquations::class$ = NULL;
        jmethodID *TimeDerivativesEquations::mids$ = NULL;
        bool TimeDerivativesEquations::live$ = false;

        jclass TimeDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/TimeDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addKeplerContribution_1ad26e8c8c0cd65b] = env->getMethodID(cls, "addKeplerContribution", "(D)V");
            mids$[mid_addMassDerivative_1ad26e8c8c0cd65b] = env->getMethodID(cls, "addMassDerivative", "(D)V");
            mids$[mid_addNonKeplerianAcceleration_30f8886dfb88a63c] = env->getMethodID(cls, "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void TimeDerivativesEquations::addKeplerContribution(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addKeplerContribution_1ad26e8c8c0cd65b], a0);
        }

        void TimeDerivativesEquations::addMassDerivative(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addMassDerivative_1ad26e8c8c0cd65b], a0);
        }

        void TimeDerivativesEquations::addNonKeplerianAcceleration(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addNonKeplerianAcceleration_30f8886dfb88a63c], a0.this$);
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
        static PyObject *t_TimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TimeDerivativesEquations_addKeplerContribution(t_TimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_TimeDerivativesEquations_addMassDerivative(t_TimeDerivativesEquations *self, PyObject *arg);
        static PyObject *t_TimeDerivativesEquations_addNonKeplerianAcceleration(t_TimeDerivativesEquations *self, PyObject *arg);

        static PyMethodDef t_TimeDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_TimeDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TimeDerivativesEquations, addKeplerContribution, METH_O),
          DECLARE_METHOD(t_TimeDerivativesEquations, addMassDerivative, METH_O),
          DECLARE_METHOD(t_TimeDerivativesEquations, addNonKeplerianAcceleration, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TimeDerivativesEquations)[] = {
          { Py_tp_methods, t_TimeDerivativesEquations__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TimeDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TimeDerivativesEquations, t_TimeDerivativesEquations, TimeDerivativesEquations);

        void t_TimeDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(TimeDerivativesEquations), &PY_TYPE_DEF(TimeDerivativesEquations), module, "TimeDerivativesEquations", 0);
        }

        void t_TimeDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDerivativesEquations), "class_", make_descriptor(TimeDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDerivativesEquations), "wrapfn_", make_descriptor(t_TimeDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TimeDerivativesEquations), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TimeDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_TimeDerivativesEquations::wrap_Object(TimeDerivativesEquations(((t_TimeDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_TimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TimeDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TimeDerivativesEquations_addKeplerContribution(t_TimeDerivativesEquations *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.addKeplerContribution(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addKeplerContribution", arg);
          return NULL;
        }

        static PyObject *t_TimeDerivativesEquations_addMassDerivative(t_TimeDerivativesEquations *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.addMassDerivative(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addMassDerivative", arg);
          return NULL;
        }

        static PyObject *t_TimeDerivativesEquations_addNonKeplerianAcceleration(t_TimeDerivativesEquations *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addNonKeplerianAcceleration(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addNonKeplerianAcceleration", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *SingleFrequencyHatchFilter::class$ = NULL;
          jmethodID *SingleFrequencyHatchFilter::mids$ = NULL;
          bool SingleFrequencyHatchFilter::live$ = false;

          jclass SingleFrequencyHatchFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/SingleFrequencyHatchFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_cf97026bfce8648a] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/gnss/MeasurementType;DDID)V");
              mids$[mid_filterData_f536f2fddda3c85b] = env->getMethodID(cls, "filterData", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/files/rinex/observation/ObservationData;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SingleFrequencyHatchFilter::SingleFrequencyHatchFilter(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::gnss::MeasurementType & a2, jdouble a3, jdouble a4, jint a5, jdouble a6) : ::org::orekit::estimation::measurements::filtering::HatchFilter(env->newObject(initializeClass, &mids$, mid_init$_cf97026bfce8648a, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

          ::org::orekit::files::rinex::observation::ObservationData SingleFrequencyHatchFilter::filterData(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1) const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_filterData_f536f2fddda3c85b], a0.this$, a1.this$));
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
          static PyObject *t_SingleFrequencyHatchFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SingleFrequencyHatchFilter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SingleFrequencyHatchFilter_init_(t_SingleFrequencyHatchFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SingleFrequencyHatchFilter_filterData(t_SingleFrequencyHatchFilter *self, PyObject *args);

          static PyMethodDef t_SingleFrequencyHatchFilter__methods_[] = {
            DECLARE_METHOD(t_SingleFrequencyHatchFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleFrequencyHatchFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SingleFrequencyHatchFilter, filterData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SingleFrequencyHatchFilter)[] = {
            { Py_tp_methods, t_SingleFrequencyHatchFilter__methods_ },
            { Py_tp_init, (void *) t_SingleFrequencyHatchFilter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SingleFrequencyHatchFilter)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::filtering::HatchFilter),
            NULL
          };

          DEFINE_TYPE(SingleFrequencyHatchFilter, t_SingleFrequencyHatchFilter, SingleFrequencyHatchFilter);

          void t_SingleFrequencyHatchFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(SingleFrequencyHatchFilter), &PY_TYPE_DEF(SingleFrequencyHatchFilter), module, "SingleFrequencyHatchFilter", 0);
          }

          void t_SingleFrequencyHatchFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencyHatchFilter), "class_", make_descriptor(SingleFrequencyHatchFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencyHatchFilter), "wrapfn_", make_descriptor(t_SingleFrequencyHatchFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SingleFrequencyHatchFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SingleFrequencyHatchFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SingleFrequencyHatchFilter::initializeClass, 1)))
              return NULL;
            return t_SingleFrequencyHatchFilter::wrap_Object(SingleFrequencyHatchFilter(((t_SingleFrequencyHatchFilter *) arg)->object.this$));
          }
          static PyObject *t_SingleFrequencyHatchFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SingleFrequencyHatchFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SingleFrequencyHatchFilter_init_(t_SingleFrequencyHatchFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::gnss::MeasurementType a2((jobject) NULL);
            PyTypeObject **p2;
            jdouble a3;
            jdouble a4;
            jint a5;
            jdouble a6;
            SingleFrequencyHatchFilter object((jobject) NULL);

            if (!parseArgs(args, "kkKDDID", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::gnss::MeasurementType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::gnss::t_MeasurementType::parameters_, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = SingleFrequencyHatchFilter(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SingleFrequencyHatchFilter_filterData(t_SingleFrequencyHatchFilter *self, PyObject *args)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.filterData(a0, a1));
              return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "filterData", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame3.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame3::class$ = NULL;
          jmethodID *SubFrame3::mids$ = NULL;
          bool SubFrame3::live$ = false;

          jclass SubFrame3::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame3");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCic_9981f74b2d109da6] = env->getMethodID(cls, "getCic", "()D");
              mids$[mid_getCis_9981f74b2d109da6] = env->getMethodID(cls, "getCis", "()D");
              mids$[mid_getCrc_9981f74b2d109da6] = env->getMethodID(cls, "getCrc", "()D");
              mids$[mid_getI0_9981f74b2d109da6] = env->getMethodID(cls, "getI0", "()D");
              mids$[mid_getIDot_9981f74b2d109da6] = env->getMethodID(cls, "getIDot", "()D");
              mids$[mid_getIODE_d6ab429752e7c267] = env->getMethodID(cls, "getIODE", "()I");
              mids$[mid_getLowercaseOmega_9981f74b2d109da6] = env->getMethodID(cls, "getLowercaseOmega", "()D");
              mids$[mid_getOmegaDot_9981f74b2d109da6] = env->getMethodID(cls, "getOmegaDot", "()D");
              mids$[mid_getUppercaseOmega0_9981f74b2d109da6] = env->getMethodID(cls, "getUppercaseOmega0", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SubFrame3::getCic() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCic_9981f74b2d109da6]);
          }

          jdouble SubFrame3::getCis() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCis_9981f74b2d109da6]);
          }

          jdouble SubFrame3::getCrc() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCrc_9981f74b2d109da6]);
          }

          jdouble SubFrame3::getI0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getI0_9981f74b2d109da6]);
          }

          jdouble SubFrame3::getIDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getIDot_9981f74b2d109da6]);
          }

          jint SubFrame3::getIODE() const
          {
            return env->callIntMethod(this$, mids$[mid_getIODE_d6ab429752e7c267]);
          }

          jdouble SubFrame3::getLowercaseOmega() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLowercaseOmega_9981f74b2d109da6]);
          }

          jdouble SubFrame3::getOmegaDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_9981f74b2d109da6]);
          }

          jdouble SubFrame3::getUppercaseOmega0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getUppercaseOmega0_9981f74b2d109da6]);
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
          static PyObject *t_SubFrame3_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame3_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame3_getCic(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getCis(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getCrc(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getI0(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getIDot(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getIODE(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getLowercaseOmega(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getOmegaDot(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_getUppercaseOmega0(t_SubFrame3 *self);
          static PyObject *t_SubFrame3_get__cic(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__cis(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__crc(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__i0(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__iDot(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__iODE(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__lowercaseOmega(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__omegaDot(t_SubFrame3 *self, void *data);
          static PyObject *t_SubFrame3_get__uppercaseOmega0(t_SubFrame3 *self, void *data);
          static PyGetSetDef t_SubFrame3__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame3, cic),
            DECLARE_GET_FIELD(t_SubFrame3, cis),
            DECLARE_GET_FIELD(t_SubFrame3, crc),
            DECLARE_GET_FIELD(t_SubFrame3, i0),
            DECLARE_GET_FIELD(t_SubFrame3, iDot),
            DECLARE_GET_FIELD(t_SubFrame3, iODE),
            DECLARE_GET_FIELD(t_SubFrame3, lowercaseOmega),
            DECLARE_GET_FIELD(t_SubFrame3, omegaDot),
            DECLARE_GET_FIELD(t_SubFrame3, uppercaseOmega0),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame3__methods_[] = {
            DECLARE_METHOD(t_SubFrame3, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame3, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame3, getCic, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getCis, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getCrc, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getI0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getIDot, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getIODE, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getLowercaseOmega, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getOmegaDot, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame3, getUppercaseOmega0, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame3)[] = {
            { Py_tp_methods, t_SubFrame3__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame3__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame3)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame),
            NULL
          };

          DEFINE_TYPE(SubFrame3, t_SubFrame3, SubFrame3);

          void t_SubFrame3::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame3), &PY_TYPE_DEF(SubFrame3), module, "SubFrame3", 0);
          }

          void t_SubFrame3::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame3), "class_", make_descriptor(SubFrame3::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame3), "wrapfn_", make_descriptor(t_SubFrame3::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame3), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame3_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame3::initializeClass, 1)))
              return NULL;
            return t_SubFrame3::wrap_Object(SubFrame3(((t_SubFrame3 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame3_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame3::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame3_getCic(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCic());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getCis(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCis());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getCrc(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCrc());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getI0(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getI0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getIDot(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getIDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getIODE(t_SubFrame3 *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getIODE());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame3_getLowercaseOmega(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLowercaseOmega());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getOmegaDot(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOmegaDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_getUppercaseOmega0(t_SubFrame3 *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getUppercaseOmega0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrame3_get__cic(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCic());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__cis(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCis());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__crc(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCrc());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__i0(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getI0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__iDot(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getIDot());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__iODE(t_SubFrame3 *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getIODE());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame3_get__lowercaseOmega(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLowercaseOmega());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__omegaDot(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOmegaDot());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrame3_get__uppercaseOmega0(t_SubFrame3 *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getUppercaseOmega0());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *FieldOfView::class$ = NULL;
        jmethodID *FieldOfView::mids$ = NULL;
        bool FieldOfView::live$ = false;

        jclass FieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/FieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getFootprint_0ed2f5155c3855f6] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_getMargin_9981f74b2d109da6] = env->getMethodID(cls, "getMargin", "()D");
            mids$[mid_offsetFromBoundary_7ed10fb0bfbbf1c4] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_53c542efd8574582] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::util::List FieldOfView::getFootprint(const ::org::orekit::frames::Transform & a0, const ::org::orekit::bodies::OneAxisEllipsoid & a1, jdouble a2) const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getFootprint_0ed2f5155c3855f6], a0.this$, a1.this$, a2));
        }

        jdouble FieldOfView::getMargin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMargin_9981f74b2d109da6]);
        }

        jdouble FieldOfView::offsetFromBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1, const ::org::orekit::propagation::events::VisibilityTrigger & a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_offsetFromBoundary_7ed10fb0bfbbf1c4], a0.this$, a1, a2.this$);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D FieldOfView::projectToBoundary(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_projectToBoundary_53c542efd8574582], a0.this$));
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
        static PyObject *t_FieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOfView_getFootprint(t_FieldOfView *self, PyObject *args);
        static PyObject *t_FieldOfView_getMargin(t_FieldOfView *self);
        static PyObject *t_FieldOfView_offsetFromBoundary(t_FieldOfView *self, PyObject *args);
        static PyObject *t_FieldOfView_projectToBoundary(t_FieldOfView *self, PyObject *arg);
        static PyObject *t_FieldOfView_get__margin(t_FieldOfView *self, void *data);
        static PyGetSetDef t_FieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOfView, margin),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOfView__methods_[] = {
          DECLARE_METHOD(t_FieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOfView, getFootprint, METH_VARARGS),
          DECLARE_METHOD(t_FieldOfView, getMargin, METH_NOARGS),
          DECLARE_METHOD(t_FieldOfView, offsetFromBoundary, METH_VARARGS),
          DECLARE_METHOD(t_FieldOfView, projectToBoundary, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOfView)[] = {
          { Py_tp_methods, t_FieldOfView__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOfView)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldOfView, t_FieldOfView, FieldOfView);

        void t_FieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOfView), &PY_TYPE_DEF(FieldOfView), module, "FieldOfView", 0);
        }

        void t_FieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfView), "class_", make_descriptor(FieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfView), "wrapfn_", make_descriptor(t_FieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOfView), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOfView::initializeClass, 1)))
            return NULL;
          return t_FieldOfView::wrap_Object(FieldOfView(((t_FieldOfView *) arg)->object.this$));
        }
        static PyObject *t_FieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOfView_getFootprint(t_FieldOfView *self, PyObject *args)
        {
          ::org::orekit::frames::Transform a0((jobject) NULL);
          ::org::orekit::bodies::OneAxisEllipsoid a1((jobject) NULL);
          jdouble a2;
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::orekit::frames::Transform::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getFootprint(a0, a1, a2));
            return ::java::util::t_List::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFootprint", args);
          return NULL;
        }

        static PyObject *t_FieldOfView_getMargin(t_FieldOfView *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMargin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldOfView_offsetFromBoundary(t_FieldOfView *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "offsetFromBoundary", args);
          return NULL;
        }

        static PyObject *t_FieldOfView_projectToBoundary(t_FieldOfView *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "projectToBoundary", arg);
          return NULL;
        }

        static PyObject *t_FieldOfView_get__margin(t_FieldOfView *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMargin());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/EventShifter.h"
#include "org/orekit/propagation/events/EventShifter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *EventShifter::class$ = NULL;
        jmethodID *EventShifter::mids$ = NULL;
        bool EventShifter::live$ = false;

        jclass EventShifter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/EventShifter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8236e5b4e01e61b6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;ZDD)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDecreasingTimeShift_9981f74b2d109da6] = env->getMethodID(cls, "getDecreasingTimeShift", "()D");
            mids$[mid_getDetector_ebd847a60689999d] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_getIncreasingTimeShift_9981f74b2d109da6] = env->getMethodID(cls, "getIncreasingTimeShift", "()D");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_create_50cb815e3f442e0e] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/EventShifter;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EventShifter::EventShifter(const ::org::orekit::propagation::events::EventDetector & a0, jboolean a1, jdouble a2, jdouble a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_8236e5b4e01e61b6, a0.this$, a1, a2, a3)) {}

        jdouble EventShifter::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        jdouble EventShifter::getDecreasingTimeShift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDecreasingTimeShift_9981f74b2d109da6]);
        }

        ::org::orekit::propagation::events::EventDetector EventShifter::getDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_ebd847a60689999d]));
        }

        jdouble EventShifter::getIncreasingTimeShift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getIncreasingTimeShift_9981f74b2d109da6]);
        }

        void EventShifter::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
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
    namespace propagation {
      namespace events {
        static PyObject *t_EventShifter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventShifter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EventShifter_of_(t_EventShifter *self, PyObject *args);
        static int t_EventShifter_init_(t_EventShifter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EventShifter_g(t_EventShifter *self, PyObject *args);
        static PyObject *t_EventShifter_getDecreasingTimeShift(t_EventShifter *self);
        static PyObject *t_EventShifter_getDetector(t_EventShifter *self);
        static PyObject *t_EventShifter_getIncreasingTimeShift(t_EventShifter *self);
        static PyObject *t_EventShifter_init(t_EventShifter *self, PyObject *args);
        static PyObject *t_EventShifter_get__decreasingTimeShift(t_EventShifter *self, void *data);
        static PyObject *t_EventShifter_get__detector(t_EventShifter *self, void *data);
        static PyObject *t_EventShifter_get__increasingTimeShift(t_EventShifter *self, void *data);
        static PyObject *t_EventShifter_get__parameters_(t_EventShifter *self, void *data);
        static PyGetSetDef t_EventShifter__fields_[] = {
          DECLARE_GET_FIELD(t_EventShifter, decreasingTimeShift),
          DECLARE_GET_FIELD(t_EventShifter, detector),
          DECLARE_GET_FIELD(t_EventShifter, increasingTimeShift),
          DECLARE_GET_FIELD(t_EventShifter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EventShifter__methods_[] = {
          DECLARE_METHOD(t_EventShifter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventShifter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EventShifter, of_, METH_VARARGS),
          DECLARE_METHOD(t_EventShifter, g, METH_VARARGS),
          DECLARE_METHOD(t_EventShifter, getDecreasingTimeShift, METH_NOARGS),
          DECLARE_METHOD(t_EventShifter, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_EventShifter, getIncreasingTimeShift, METH_NOARGS),
          DECLARE_METHOD(t_EventShifter, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EventShifter)[] = {
          { Py_tp_methods, t_EventShifter__methods_ },
          { Py_tp_init, (void *) t_EventShifter_init_ },
          { Py_tp_getset, t_EventShifter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EventShifter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(EventShifter, t_EventShifter, EventShifter);
        PyObject *t_EventShifter::wrap_Object(const EventShifter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventShifter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventShifter *self = (t_EventShifter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EventShifter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EventShifter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EventShifter *self = (t_EventShifter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EventShifter::install(PyObject *module)
        {
          installType(&PY_TYPE(EventShifter), &PY_TYPE_DEF(EventShifter), module, "EventShifter", 0);
        }

        void t_EventShifter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventShifter), "class_", make_descriptor(EventShifter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventShifter), "wrapfn_", make_descriptor(t_EventShifter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EventShifter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EventShifter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EventShifter::initializeClass, 1)))
            return NULL;
          return t_EventShifter::wrap_Object(EventShifter(((t_EventShifter *) arg)->object.this$));
        }
        static PyObject *t_EventShifter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EventShifter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EventShifter_of_(t_EventShifter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_EventShifter_init_(t_EventShifter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          jboolean a1;
          jdouble a2;
          jdouble a3;
          EventShifter object((jobject) NULL);

          if (!parseArgs(args, "kZDD", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = EventShifter(a0, a1, a2, a3));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(EventShifter);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EventShifter_g(t_EventShifter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EventShifter), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_EventShifter_getDecreasingTimeShift(t_EventShifter *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDecreasingTimeShift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventShifter_getDetector(t_EventShifter *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_EventShifter_getIncreasingTimeShift(t_EventShifter *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getIncreasingTimeShift());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_EventShifter_init(t_EventShifter *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(EventShifter), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_EventShifter_get__parameters_(t_EventShifter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EventShifter_get__decreasingTimeShift(t_EventShifter *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDecreasingTimeShift());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EventShifter_get__detector(t_EventShifter *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }

        static PyObject *t_EventShifter_get__increasingTimeShift(t_EventShifter *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getIncreasingTimeShift());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/DecimalFormatSymbols.h"
#include "java/util/Locale.h"
#include "java/util/Currency.h"
#include "java/io/Serializable.h"
#include "java/text/DecimalFormatSymbols.h"
#include "java/lang/Class.h"
#include "java/lang/Cloneable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *DecimalFormatSymbols::class$ = NULL;
    jmethodID *DecimalFormatSymbols::mids$ = NULL;
    bool DecimalFormatSymbols::live$ = false;

    jclass DecimalFormatSymbols::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/DecimalFormatSymbols");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_febf24135e738502] = env->getMethodID(cls, "<init>", "(Ljava/util/Locale;)V");
        mids$[mid_clone_704a5bee58538972] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getAvailableLocales_faf2576acf90261b] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
        mids$[mid_getCurrency_e857dd6f37c7fee3] = env->getMethodID(cls, "getCurrency", "()Ljava/util/Currency;");
        mids$[mid_getCurrencySymbol_d2c8eb4129821f0e] = env->getMethodID(cls, "getCurrencySymbol", "()Ljava/lang/String;");
        mids$[mid_getDecimalSeparator_153df32fe8b51cb6] = env->getMethodID(cls, "getDecimalSeparator", "()C");
        mids$[mid_getDigit_153df32fe8b51cb6] = env->getMethodID(cls, "getDigit", "()C");
        mids$[mid_getExponentSeparator_d2c8eb4129821f0e] = env->getMethodID(cls, "getExponentSeparator", "()Ljava/lang/String;");
        mids$[mid_getGroupingSeparator_153df32fe8b51cb6] = env->getMethodID(cls, "getGroupingSeparator", "()C");
        mids$[mid_getInfinity_d2c8eb4129821f0e] = env->getMethodID(cls, "getInfinity", "()Ljava/lang/String;");
        mids$[mid_getInstance_ca13629df12de0a9] = env->getStaticMethodID(cls, "getInstance", "()Ljava/text/DecimalFormatSymbols;");
        mids$[mid_getInstance_76ef2414fb96c3fa] = env->getStaticMethodID(cls, "getInstance", "(Ljava/util/Locale;)Ljava/text/DecimalFormatSymbols;");
        mids$[mid_getInternationalCurrencySymbol_d2c8eb4129821f0e] = env->getMethodID(cls, "getInternationalCurrencySymbol", "()Ljava/lang/String;");
        mids$[mid_getMinusSign_153df32fe8b51cb6] = env->getMethodID(cls, "getMinusSign", "()C");
        mids$[mid_getMonetaryDecimalSeparator_153df32fe8b51cb6] = env->getMethodID(cls, "getMonetaryDecimalSeparator", "()C");
        mids$[mid_getNaN_d2c8eb4129821f0e] = env->getMethodID(cls, "getNaN", "()Ljava/lang/String;");
        mids$[mid_getPatternSeparator_153df32fe8b51cb6] = env->getMethodID(cls, "getPatternSeparator", "()C");
        mids$[mid_getPerMill_153df32fe8b51cb6] = env->getMethodID(cls, "getPerMill", "()C");
        mids$[mid_getPercent_153df32fe8b51cb6] = env->getMethodID(cls, "getPercent", "()C");
        mids$[mid_getZeroDigit_153df32fe8b51cb6] = env->getMethodID(cls, "getZeroDigit", "()C");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_setCurrency_db8d865c2c65c553] = env->getMethodID(cls, "setCurrency", "(Ljava/util/Currency;)V");
        mids$[mid_setCurrencySymbol_105e1eadb709d9ac] = env->getMethodID(cls, "setCurrencySymbol", "(Ljava/lang/String;)V");
        mids$[mid_setDecimalSeparator_e8d07df586815a42] = env->getMethodID(cls, "setDecimalSeparator", "(C)V");
        mids$[mid_setDigit_e8d07df586815a42] = env->getMethodID(cls, "setDigit", "(C)V");
        mids$[mid_setExponentSeparator_105e1eadb709d9ac] = env->getMethodID(cls, "setExponentSeparator", "(Ljava/lang/String;)V");
        mids$[mid_setGroupingSeparator_e8d07df586815a42] = env->getMethodID(cls, "setGroupingSeparator", "(C)V");
        mids$[mid_setInfinity_105e1eadb709d9ac] = env->getMethodID(cls, "setInfinity", "(Ljava/lang/String;)V");
        mids$[mid_setInternationalCurrencySymbol_105e1eadb709d9ac] = env->getMethodID(cls, "setInternationalCurrencySymbol", "(Ljava/lang/String;)V");
        mids$[mid_setMinusSign_e8d07df586815a42] = env->getMethodID(cls, "setMinusSign", "(C)V");
        mids$[mid_setMonetaryDecimalSeparator_e8d07df586815a42] = env->getMethodID(cls, "setMonetaryDecimalSeparator", "(C)V");
        mids$[mid_setNaN_105e1eadb709d9ac] = env->getMethodID(cls, "setNaN", "(Ljava/lang/String;)V");
        mids$[mid_setPatternSeparator_e8d07df586815a42] = env->getMethodID(cls, "setPatternSeparator", "(C)V");
        mids$[mid_setPerMill_e8d07df586815a42] = env->getMethodID(cls, "setPerMill", "(C)V");
        mids$[mid_setPercent_e8d07df586815a42] = env->getMethodID(cls, "setPercent", "(C)V");
        mids$[mid_setZeroDigit_e8d07df586815a42] = env->getMethodID(cls, "setZeroDigit", "(C)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    DecimalFormatSymbols::DecimalFormatSymbols() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

    DecimalFormatSymbols::DecimalFormatSymbols(const ::java::util::Locale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_febf24135e738502, a0.this$)) {}

    ::java::lang::Object DecimalFormatSymbols::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_704a5bee58538972]));
    }

    jboolean DecimalFormatSymbols::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    JArray< ::java::util::Locale > DecimalFormatSymbols::getAvailableLocales()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_faf2576acf90261b]));
    }

    ::java::util::Currency DecimalFormatSymbols::getCurrency() const
    {
      return ::java::util::Currency(env->callObjectMethod(this$, mids$[mid_getCurrency_e857dd6f37c7fee3]));
    }

    ::java::lang::String DecimalFormatSymbols::getCurrencySymbol() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCurrencySymbol_d2c8eb4129821f0e]));
    }

    jchar DecimalFormatSymbols::getDecimalSeparator() const
    {
      return env->callCharMethod(this$, mids$[mid_getDecimalSeparator_153df32fe8b51cb6]);
    }

    jchar DecimalFormatSymbols::getDigit() const
    {
      return env->callCharMethod(this$, mids$[mid_getDigit_153df32fe8b51cb6]);
    }

    ::java::lang::String DecimalFormatSymbols::getExponentSeparator() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getExponentSeparator_d2c8eb4129821f0e]));
    }

    jchar DecimalFormatSymbols::getGroupingSeparator() const
    {
      return env->callCharMethod(this$, mids$[mid_getGroupingSeparator_153df32fe8b51cb6]);
    }

    ::java::lang::String DecimalFormatSymbols::getInfinity() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInfinity_d2c8eb4129821f0e]));
    }

    DecimalFormatSymbols DecimalFormatSymbols::getInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return DecimalFormatSymbols(env->callStaticObjectMethod(cls, mids$[mid_getInstance_ca13629df12de0a9]));
    }

    DecimalFormatSymbols DecimalFormatSymbols::getInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return DecimalFormatSymbols(env->callStaticObjectMethod(cls, mids$[mid_getInstance_76ef2414fb96c3fa], a0.this$));
    }

    ::java::lang::String DecimalFormatSymbols::getInternationalCurrencySymbol() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInternationalCurrencySymbol_d2c8eb4129821f0e]));
    }

    jchar DecimalFormatSymbols::getMinusSign() const
    {
      return env->callCharMethod(this$, mids$[mid_getMinusSign_153df32fe8b51cb6]);
    }

    jchar DecimalFormatSymbols::getMonetaryDecimalSeparator() const
    {
      return env->callCharMethod(this$, mids$[mid_getMonetaryDecimalSeparator_153df32fe8b51cb6]);
    }

    ::java::lang::String DecimalFormatSymbols::getNaN() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNaN_d2c8eb4129821f0e]));
    }

    jchar DecimalFormatSymbols::getPatternSeparator() const
    {
      return env->callCharMethod(this$, mids$[mid_getPatternSeparator_153df32fe8b51cb6]);
    }

    jchar DecimalFormatSymbols::getPerMill() const
    {
      return env->callCharMethod(this$, mids$[mid_getPerMill_153df32fe8b51cb6]);
    }

    jchar DecimalFormatSymbols::getPercent() const
    {
      return env->callCharMethod(this$, mids$[mid_getPercent_153df32fe8b51cb6]);
    }

    jchar DecimalFormatSymbols::getZeroDigit() const
    {
      return env->callCharMethod(this$, mids$[mid_getZeroDigit_153df32fe8b51cb6]);
    }

    jint DecimalFormatSymbols::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    void DecimalFormatSymbols::setCurrency(const ::java::util::Currency & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setCurrency_db8d865c2c65c553], a0.this$);
    }

    void DecimalFormatSymbols::setCurrencySymbol(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setCurrencySymbol_105e1eadb709d9ac], a0.this$);
    }

    void DecimalFormatSymbols::setDecimalSeparator(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDecimalSeparator_e8d07df586815a42], a0);
    }

    void DecimalFormatSymbols::setDigit(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDigit_e8d07df586815a42], a0);
    }

    void DecimalFormatSymbols::setExponentSeparator(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setExponentSeparator_105e1eadb709d9ac], a0.this$);
    }

    void DecimalFormatSymbols::setGroupingSeparator(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setGroupingSeparator_e8d07df586815a42], a0);
    }

    void DecimalFormatSymbols::setInfinity(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setInfinity_105e1eadb709d9ac], a0.this$);
    }

    void DecimalFormatSymbols::setInternationalCurrencySymbol(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setInternationalCurrencySymbol_105e1eadb709d9ac], a0.this$);
    }

    void DecimalFormatSymbols::setMinusSign(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinusSign_e8d07df586815a42], a0);
    }

    void DecimalFormatSymbols::setMonetaryDecimalSeparator(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMonetaryDecimalSeparator_e8d07df586815a42], a0);
    }

    void DecimalFormatSymbols::setNaN(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setNaN_105e1eadb709d9ac], a0.this$);
    }

    void DecimalFormatSymbols::setPatternSeparator(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPatternSeparator_e8d07df586815a42], a0);
    }

    void DecimalFormatSymbols::setPerMill(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPerMill_e8d07df586815a42], a0);
    }

    void DecimalFormatSymbols::setPercent(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPercent_e8d07df586815a42], a0);
    }

    void DecimalFormatSymbols::setZeroDigit(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setZeroDigit_e8d07df586815a42], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_DecimalFormatSymbols_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_instance_(PyTypeObject *type, PyObject *arg);
    static int t_DecimalFormatSymbols_init_(t_DecimalFormatSymbols *self, PyObject *args, PyObject *kwds);
    static PyObject *t_DecimalFormatSymbols_clone(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_equals(t_DecimalFormatSymbols *self, PyObject *args);
    static PyObject *t_DecimalFormatSymbols_getAvailableLocales(PyTypeObject *type);
    static PyObject *t_DecimalFormatSymbols_getCurrency(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getCurrencySymbol(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getDecimalSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getDigit(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getExponentSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getGroupingSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getInfinity(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_DecimalFormatSymbols_getInternationalCurrencySymbol(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getMinusSign(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getMonetaryDecimalSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getNaN(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getPatternSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getPerMill(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getPercent(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getZeroDigit(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_hashCode(t_DecimalFormatSymbols *self, PyObject *args);
    static PyObject *t_DecimalFormatSymbols_setCurrency(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setDigit(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setExponentSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setGroupingSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setInfinity(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setInternationalCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setMinusSign(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setMonetaryDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setNaN(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setPatternSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setPerMill(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setPercent(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setZeroDigit(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_get__availableLocales(t_DecimalFormatSymbols *self, void *data);
    static PyObject *t_DecimalFormatSymbols_get__currency(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__currency(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__currencySymbol(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__currencySymbol(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__decimalSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__decimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__digit(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__digit(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__exponentSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__exponentSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__groupingSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__groupingSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__infinity(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__infinity(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__instance(t_DecimalFormatSymbols *self, void *data);
    static PyObject *t_DecimalFormatSymbols_get__internationalCurrencySymbol(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__internationalCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__minusSign(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__minusSign(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__monetaryDecimalSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__monetaryDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__naN(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__naN(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__patternSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__patternSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__perMill(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__perMill(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__percent(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__percent(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__zeroDigit(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__zeroDigit(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyGetSetDef t_DecimalFormatSymbols__fields_[] = {
      DECLARE_GET_FIELD(t_DecimalFormatSymbols, availableLocales),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, currency),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, currencySymbol),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, decimalSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, digit),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, exponentSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, groupingSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, infinity),
      DECLARE_GET_FIELD(t_DecimalFormatSymbols, instance),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, internationalCurrencySymbol),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, minusSign),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, monetaryDecimalSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, naN),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, patternSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, perMill),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, percent),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, zeroDigit),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_DecimalFormatSymbols__methods_[] = {
      DECLARE_METHOD(t_DecimalFormatSymbols, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormatSymbols, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormatSymbols, clone, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, equals, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getAvailableLocales, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getCurrency, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getCurrencySymbol, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getDecimalSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getDigit, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getExponentSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getGroupingSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getInfinity, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getInternationalCurrencySymbol, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getMinusSign, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getMonetaryDecimalSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getNaN, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getPatternSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getPerMill, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getPercent, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getZeroDigit, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, setCurrency, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setCurrencySymbol, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setDecimalSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setDigit, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setExponentSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setGroupingSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setInfinity, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setInternationalCurrencySymbol, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setMinusSign, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setMonetaryDecimalSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setNaN, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setPatternSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setPerMill, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setPercent, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setZeroDigit, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(DecimalFormatSymbols)[] = {
      { Py_tp_methods, t_DecimalFormatSymbols__methods_ },
      { Py_tp_init, (void *) t_DecimalFormatSymbols_init_ },
      { Py_tp_getset, t_DecimalFormatSymbols__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(DecimalFormatSymbols)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(DecimalFormatSymbols, t_DecimalFormatSymbols, DecimalFormatSymbols);

    void t_DecimalFormatSymbols::install(PyObject *module)
    {
      installType(&PY_TYPE(DecimalFormatSymbols), &PY_TYPE_DEF(DecimalFormatSymbols), module, "DecimalFormatSymbols", 0);
    }

    void t_DecimalFormatSymbols::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormatSymbols), "class_", make_descriptor(DecimalFormatSymbols::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormatSymbols), "wrapfn_", make_descriptor(t_DecimalFormatSymbols::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormatSymbols), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_DecimalFormatSymbols_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, DecimalFormatSymbols::initializeClass, 1)))
        return NULL;
      return t_DecimalFormatSymbols::wrap_Object(DecimalFormatSymbols(((t_DecimalFormatSymbols *) arg)->object.this$));
    }
    static PyObject *t_DecimalFormatSymbols_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, DecimalFormatSymbols::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_DecimalFormatSymbols_init_(t_DecimalFormatSymbols *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          DecimalFormatSymbols object((jobject) NULL);

          INT_CALL(object = DecimalFormatSymbols());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          DecimalFormatSymbols object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            INT_CALL(object = DecimalFormatSymbols(a0));
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

    static PyObject *t_DecimalFormatSymbols_clone(t_DecimalFormatSymbols *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_DecimalFormatSymbols_equals(t_DecimalFormatSymbols *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(DecimalFormatSymbols), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_DecimalFormatSymbols_getAvailableLocales(PyTypeObject *type)
    {
      JArray< ::java::util::Locale > result((jobject) NULL);
      OBJ_CALL(result = ::java::text::DecimalFormatSymbols::getAvailableLocales());
      return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
    }

    static PyObject *t_DecimalFormatSymbols_getCurrency(t_DecimalFormatSymbols *self)
    {
      ::java::util::Currency result((jobject) NULL);
      OBJ_CALL(result = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(result);
    }

    static PyObject *t_DecimalFormatSymbols_getCurrencySymbol(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCurrencySymbol());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getDecimalSeparator(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getDecimalSeparator());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getDigit(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getDigit());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getExponentSeparator(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getExponentSeparator());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getGroupingSeparator(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getGroupingSeparator());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getInfinity(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getInfinity());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          DecimalFormatSymbols result((jobject) NULL);
          OBJ_CALL(result = ::java::text::DecimalFormatSymbols::getInstance());
          return t_DecimalFormatSymbols::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          DecimalFormatSymbols result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::DecimalFormatSymbols::getInstance(a0));
            return t_DecimalFormatSymbols::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getInstance", args);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_getInternationalCurrencySymbol(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getInternationalCurrencySymbol());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getMinusSign(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getMinusSign());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getMonetaryDecimalSeparator(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getMonetaryDecimalSeparator());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getNaN(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getNaN());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getPatternSeparator(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getPatternSeparator());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getPerMill(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getPerMill());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getPercent(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getPercent());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getZeroDigit(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getZeroDigit());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_hashCode(t_DecimalFormatSymbols *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormatSymbols), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_DecimalFormatSymbols_setCurrency(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::util::Currency a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setCurrency(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setCurrency", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setCurrencySymbol(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setCurrencySymbol", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setDecimalSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDecimalSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setDigit(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setDigit(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDigit", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setExponentSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setExponentSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setExponentSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setGroupingSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setGroupingSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setGroupingSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setInfinity(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setInfinity(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setInfinity", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setInternationalCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setInternationalCurrencySymbol(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setInternationalCurrencySymbol", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setMinusSign(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setMinusSign(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMinusSign", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setMonetaryDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setMonetaryDecimalSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMonetaryDecimalSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setNaN(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setNaN(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setNaN", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setPatternSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setPatternSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPatternSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setPerMill(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setPerMill(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPerMill", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setPercent(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setPercent(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPercent", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setZeroDigit(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setZeroDigit(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setZeroDigit", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_get__availableLocales(t_DecimalFormatSymbols *self, void *data)
    {
      JArray< ::java::util::Locale > value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableLocales());
      return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
    }

    static PyObject *t_DecimalFormatSymbols_get__currency(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::util::Currency value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(value);
    }
    static int t_DecimalFormatSymbols_set__currency(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::util::Currency value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &value))
        {
          INT_CALL(self->object.setCurrency(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "currency", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__currencySymbol(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrencySymbol());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__currencySymbol(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setCurrencySymbol(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "currencySymbol", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__decimalSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getDecimalSeparator());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__decimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setDecimalSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "decimalSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__digit(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getDigit());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__digit(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setDigit(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "digit", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__exponentSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getExponentSeparator());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__exponentSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setExponentSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "exponentSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__groupingSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getGroupingSeparator());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__groupingSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setGroupingSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "groupingSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__infinity(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getInfinity());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__infinity(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setInfinity(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "infinity", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__instance(t_DecimalFormatSymbols *self, void *data)
    {
      DecimalFormatSymbols value((jobject) NULL);
      OBJ_CALL(value = self->object.getInstance());
      return t_DecimalFormatSymbols::wrap_Object(value);
    }

    static PyObject *t_DecimalFormatSymbols_get__internationalCurrencySymbol(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getInternationalCurrencySymbol());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__internationalCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setInternationalCurrencySymbol(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "internationalCurrencySymbol", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__minusSign(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getMinusSign());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__minusSign(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setMinusSign(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minusSign", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__monetaryDecimalSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getMonetaryDecimalSeparator());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__monetaryDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setMonetaryDecimalSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "monetaryDecimalSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__naN(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getNaN());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__naN(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setNaN(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "naN", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__patternSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getPatternSeparator());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__patternSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setPatternSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "patternSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__perMill(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getPerMill());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__perMill(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setPerMill(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "perMill", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__percent(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getPercent());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__percent(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setPercent(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "percent", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__zeroDigit(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getZeroDigit());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__zeroDigit(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setZeroDigit(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "zeroDigit", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "java/lang/String.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *SequentialGaussNewtonOptimizer::class$ = NULL;
            jmethodID *SequentialGaussNewtonOptimizer::mids$ = NULL;
            bool SequentialGaussNewtonOptimizer::live$ = false;

            jclass SequentialGaussNewtonOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_3dc548c77dbf1d27] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;ZLorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)V");
                mids$[mid_getDecomposer_8a28a9a8bab78fab] = env->getMethodID(cls, "getDecomposer", "()Lorg/hipparchus/linear/MatrixDecomposer;");
                mids$[mid_getOldEvaluation_d2ffbe10a781a877] = env->getMethodID(cls, "getOldEvaluation", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;");
                mids$[mid_isFormNormalEquations_eee3de00fe971136] = env->getMethodID(cls, "isFormNormalEquations", "()Z");
                mids$[mid_optimize_45e9e6e9254f21c4] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
                mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                mids$[mid_withAPrioriData_4f6223dc01493abc] = env->getMethodID(cls, "withAPrioriData", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");
                mids$[mid_withAPrioriData_faa1e8fa8156a0a8] = env->getMethodID(cls, "withAPrioriData", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;DD)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");
                mids$[mid_withDecomposer_21cdda84de6ad882] = env->getMethodID(cls, "withDecomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");
                mids$[mid_withEvaluation_0eb95f55369a5426] = env->getMethodID(cls, "withEvaluation", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");
                mids$[mid_withFormNormalEquations_de51b162d72cd681] = env->getMethodID(cls, "withFormNormalEquations", "(Z)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SequentialGaussNewtonOptimizer::SequentialGaussNewtonOptimizer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

            SequentialGaussNewtonOptimizer::SequentialGaussNewtonOptimizer(const ::org::hipparchus::linear::MatrixDecomposer & a0, jboolean a1, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3dc548c77dbf1d27, a0.this$, a1, a2.this$)) {}

            ::org::hipparchus::linear::MatrixDecomposer SequentialGaussNewtonOptimizer::getDecomposer() const
            {
              return ::org::hipparchus::linear::MatrixDecomposer(env->callObjectMethod(this$, mids$[mid_getDecomposer_8a28a9a8bab78fab]));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation SequentialGaussNewtonOptimizer::getOldEvaluation() const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(env->callObjectMethod(this$, mids$[mid_getOldEvaluation_d2ffbe10a781a877]));
            }

            jboolean SequentialGaussNewtonOptimizer::isFormNormalEquations() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isFormNormalEquations_eee3de00fe971136]);
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum SequentialGaussNewtonOptimizer::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_45e9e6e9254f21c4], a0.this$));
            }

            ::java::lang::String SequentialGaussNewtonOptimizer::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withAPrioriData(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::linear::RealMatrix & a1) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withAPrioriData_4f6223dc01493abc], a0.this$, a1.this$));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withAPrioriData(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::linear::RealMatrix & a1, jdouble a2, jdouble a3) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withAPrioriData_faa1e8fa8156a0a8], a0.this$, a1.this$, a2, a3));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withDecomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withDecomposer_21cdda84de6ad882], a0.this$));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withEvaluation(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a0) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withEvaluation_0eb95f55369a5426], a0.this$));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withFormNormalEquations(jboolean a0) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withFormNormalEquations_de51b162d72cd681], a0));
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
        namespace vector {
          namespace leastsquares {
            static PyObject *t_SequentialGaussNewtonOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SequentialGaussNewtonOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_SequentialGaussNewtonOptimizer_init_(t_SequentialGaussNewtonOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_SequentialGaussNewtonOptimizer_getDecomposer(t_SequentialGaussNewtonOptimizer *self);
            static PyObject *t_SequentialGaussNewtonOptimizer_getOldEvaluation(t_SequentialGaussNewtonOptimizer *self);
            static PyObject *t_SequentialGaussNewtonOptimizer_isFormNormalEquations(t_SequentialGaussNewtonOptimizer *self);
            static PyObject *t_SequentialGaussNewtonOptimizer_optimize(t_SequentialGaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_SequentialGaussNewtonOptimizer_toString(t_SequentialGaussNewtonOptimizer *self, PyObject *args);
            static PyObject *t_SequentialGaussNewtonOptimizer_withAPrioriData(t_SequentialGaussNewtonOptimizer *self, PyObject *args);
            static PyObject *t_SequentialGaussNewtonOptimizer_withDecomposer(t_SequentialGaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_SequentialGaussNewtonOptimizer_withEvaluation(t_SequentialGaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_SequentialGaussNewtonOptimizer_withFormNormalEquations(t_SequentialGaussNewtonOptimizer *self, PyObject *arg);
            static PyObject *t_SequentialGaussNewtonOptimizer_get__decomposer(t_SequentialGaussNewtonOptimizer *self, void *data);
            static PyObject *t_SequentialGaussNewtonOptimizer_get__formNormalEquations(t_SequentialGaussNewtonOptimizer *self, void *data);
            static PyObject *t_SequentialGaussNewtonOptimizer_get__oldEvaluation(t_SequentialGaussNewtonOptimizer *self, void *data);
            static PyGetSetDef t_SequentialGaussNewtonOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_SequentialGaussNewtonOptimizer, decomposer),
              DECLARE_GET_FIELD(t_SequentialGaussNewtonOptimizer, formNormalEquations),
              DECLARE_GET_FIELD(t_SequentialGaussNewtonOptimizer, oldEvaluation),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SequentialGaussNewtonOptimizer__methods_[] = {
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, getDecomposer, METH_NOARGS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, getOldEvaluation, METH_NOARGS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, isFormNormalEquations, METH_NOARGS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, optimize, METH_O),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, toString, METH_VARARGS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, withAPrioriData, METH_VARARGS),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, withDecomposer, METH_O),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, withEvaluation, METH_O),
              DECLARE_METHOD(t_SequentialGaussNewtonOptimizer, withFormNormalEquations, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SequentialGaussNewtonOptimizer)[] = {
              { Py_tp_methods, t_SequentialGaussNewtonOptimizer__methods_ },
              { Py_tp_init, (void *) t_SequentialGaussNewtonOptimizer_init_ },
              { Py_tp_getset, t_SequentialGaussNewtonOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SequentialGaussNewtonOptimizer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(SequentialGaussNewtonOptimizer, t_SequentialGaussNewtonOptimizer, SequentialGaussNewtonOptimizer);

            void t_SequentialGaussNewtonOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(SequentialGaussNewtonOptimizer), &PY_TYPE_DEF(SequentialGaussNewtonOptimizer), module, "SequentialGaussNewtonOptimizer", 0);
            }

            void t_SequentialGaussNewtonOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialGaussNewtonOptimizer), "class_", make_descriptor(SequentialGaussNewtonOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialGaussNewtonOptimizer), "wrapfn_", make_descriptor(t_SequentialGaussNewtonOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SequentialGaussNewtonOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SequentialGaussNewtonOptimizer::initializeClass, 1)))
                return NULL;
              return t_SequentialGaussNewtonOptimizer::wrap_Object(SequentialGaussNewtonOptimizer(((t_SequentialGaussNewtonOptimizer *) arg)->object.this$));
            }
            static PyObject *t_SequentialGaussNewtonOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SequentialGaussNewtonOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_SequentialGaussNewtonOptimizer_init_(t_SequentialGaussNewtonOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  SequentialGaussNewtonOptimizer object((jobject) NULL);

                  INT_CALL(object = SequentialGaussNewtonOptimizer());
                  self->object = object;
                  break;
                }
               case 3:
                {
                  ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
                  jboolean a1;
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a2((jobject) NULL);
                  SequentialGaussNewtonOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "kZk", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0, &a1, &a2))
                  {
                    INT_CALL(object = SequentialGaussNewtonOptimizer(a0, a1, a2));
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

            static PyObject *t_SequentialGaussNewtonOptimizer_getDecomposer(t_SequentialGaussNewtonOptimizer *self)
            {
              ::org::hipparchus::linear::MatrixDecomposer result((jobject) NULL);
              OBJ_CALL(result = self->object.getDecomposer());
              return ::org::hipparchus::linear::t_MatrixDecomposer::wrap_Object(result);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_getOldEvaluation(t_SequentialGaussNewtonOptimizer *self)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation result((jobject) NULL);
              OBJ_CALL(result = self->object.getOldEvaluation());
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(result);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_isFormNormalEquations(t_SequentialGaussNewtonOptimizer *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isFormNormalEquations());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_optimize(t_SequentialGaussNewtonOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem a0((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.optimize(a0));
                return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "optimize", arg);
              return NULL;
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_toString(t_SequentialGaussNewtonOptimizer *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(SequentialGaussNewtonOptimizer), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_withAPrioriData(t_SequentialGaussNewtonOptimizer *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::hipparchus::linear::RealVector a0((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
                  SequentialGaussNewtonOptimizer result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.withAPrioriData(a0, a1));
                    return t_SequentialGaussNewtonOptimizer::wrap_Object(result);
                  }
                }
                break;
               case 4:
                {
                  ::org::hipparchus::linear::RealVector a0((jobject) NULL);
                  ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
                  jdouble a2;
                  jdouble a3;
                  SequentialGaussNewtonOptimizer result((jobject) NULL);

                  if (!parseArgs(args, "kkDD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
                  {
                    OBJ_CALL(result = self->object.withAPrioriData(a0, a1, a2, a3));
                    return t_SequentialGaussNewtonOptimizer::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "withAPrioriData", args);
              return NULL;
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_withDecomposer(t_SequentialGaussNewtonOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
              SequentialGaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withDecomposer(a0));
                return t_SequentialGaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withDecomposer", arg);
              return NULL;
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_withEvaluation(t_SequentialGaussNewtonOptimizer *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a0((jobject) NULL);
              SequentialGaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withEvaluation(a0));
                return t_SequentialGaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withEvaluation", arg);
              return NULL;
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_withFormNormalEquations(t_SequentialGaussNewtonOptimizer *self, PyObject *arg)
            {
              jboolean a0;
              SequentialGaussNewtonOptimizer result((jobject) NULL);

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(result = self->object.withFormNormalEquations(a0));
                return t_SequentialGaussNewtonOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withFormNormalEquations", arg);
              return NULL;
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_get__decomposer(t_SequentialGaussNewtonOptimizer *self, void *data)
            {
              ::org::hipparchus::linear::MatrixDecomposer value((jobject) NULL);
              OBJ_CALL(value = self->object.getDecomposer());
              return ::org::hipparchus::linear::t_MatrixDecomposer::wrap_Object(value);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_get__formNormalEquations(t_SequentialGaussNewtonOptimizer *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isFormNormalEquations());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_SequentialGaussNewtonOptimizer_get__oldEvaluation(t_SequentialGaussNewtonOptimizer *self, void *data)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation value((jobject) NULL);
              OBJ_CALL(value = self->object.getOldEvaluation());
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem$Evaluation::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/AbstractConvergenceChecker.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *AbstractConvergenceChecker::class$ = NULL;
      jmethodID *AbstractConvergenceChecker::mids$ = NULL;
      bool AbstractConvergenceChecker::live$ = false;

      jclass AbstractConvergenceChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/AbstractConvergenceChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_converged_cb974f0dd5d76f8e] = env->getMethodID(cls, "converged", "(ILjava/lang/Object;Ljava/lang/Object;)Z");
          mids$[mid_getAbsoluteThreshold_9981f74b2d109da6] = env->getMethodID(cls, "getAbsoluteThreshold", "()D");
          mids$[mid_getRelativeThreshold_9981f74b2d109da6] = env->getMethodID(cls, "getRelativeThreshold", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractConvergenceChecker::AbstractConvergenceChecker(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

      jboolean AbstractConvergenceChecker::converged(jint a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_cb974f0dd5d76f8e], a0, a1.this$, a2.this$);
      }

      jdouble AbstractConvergenceChecker::getAbsoluteThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAbsoluteThreshold_9981f74b2d109da6]);
      }

      jdouble AbstractConvergenceChecker::getRelativeThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRelativeThreshold_9981f74b2d109da6]);
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
      static PyObject *t_AbstractConvergenceChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractConvergenceChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractConvergenceChecker_of_(t_AbstractConvergenceChecker *self, PyObject *args);
      static int t_AbstractConvergenceChecker_init_(t_AbstractConvergenceChecker *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractConvergenceChecker_converged(t_AbstractConvergenceChecker *self, PyObject *args);
      static PyObject *t_AbstractConvergenceChecker_getAbsoluteThreshold(t_AbstractConvergenceChecker *self);
      static PyObject *t_AbstractConvergenceChecker_getRelativeThreshold(t_AbstractConvergenceChecker *self);
      static PyObject *t_AbstractConvergenceChecker_get__absoluteThreshold(t_AbstractConvergenceChecker *self, void *data);
      static PyObject *t_AbstractConvergenceChecker_get__relativeThreshold(t_AbstractConvergenceChecker *self, void *data);
      static PyObject *t_AbstractConvergenceChecker_get__parameters_(t_AbstractConvergenceChecker *self, void *data);
      static PyGetSetDef t_AbstractConvergenceChecker__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractConvergenceChecker, absoluteThreshold),
        DECLARE_GET_FIELD(t_AbstractConvergenceChecker, relativeThreshold),
        DECLARE_GET_FIELD(t_AbstractConvergenceChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractConvergenceChecker__methods_[] = {
        DECLARE_METHOD(t_AbstractConvergenceChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractConvergenceChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractConvergenceChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractConvergenceChecker, converged, METH_VARARGS),
        DECLARE_METHOD(t_AbstractConvergenceChecker, getAbsoluteThreshold, METH_NOARGS),
        DECLARE_METHOD(t_AbstractConvergenceChecker, getRelativeThreshold, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractConvergenceChecker)[] = {
        { Py_tp_methods, t_AbstractConvergenceChecker__methods_ },
        { Py_tp_init, (void *) t_AbstractConvergenceChecker_init_ },
        { Py_tp_getset, t_AbstractConvergenceChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractConvergenceChecker)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractConvergenceChecker, t_AbstractConvergenceChecker, AbstractConvergenceChecker);
      PyObject *t_AbstractConvergenceChecker::wrap_Object(const AbstractConvergenceChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractConvergenceChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractConvergenceChecker *self = (t_AbstractConvergenceChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractConvergenceChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractConvergenceChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractConvergenceChecker *self = (t_AbstractConvergenceChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractConvergenceChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractConvergenceChecker), &PY_TYPE_DEF(AbstractConvergenceChecker), module, "AbstractConvergenceChecker", 0);
      }

      void t_AbstractConvergenceChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvergenceChecker), "class_", make_descriptor(AbstractConvergenceChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvergenceChecker), "wrapfn_", make_descriptor(t_AbstractConvergenceChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvergenceChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractConvergenceChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractConvergenceChecker::initializeClass, 1)))
          return NULL;
        return t_AbstractConvergenceChecker::wrap_Object(AbstractConvergenceChecker(((t_AbstractConvergenceChecker *) arg)->object.this$));
      }
      static PyObject *t_AbstractConvergenceChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractConvergenceChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractConvergenceChecker_of_(t_AbstractConvergenceChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractConvergenceChecker_init_(t_AbstractConvergenceChecker *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        jdouble a1;
        AbstractConvergenceChecker object((jobject) NULL);

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          INT_CALL(object = AbstractConvergenceChecker(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractConvergenceChecker_converged(t_AbstractConvergenceChecker *self, PyObject *args)
      {
        jint a0;
        ::java::lang::Object a1((jobject) NULL);
        ::java::lang::Object a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "IOO", self->parameters[0], self->parameters[0], &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "converged", args);
        return NULL;
      }

      static PyObject *t_AbstractConvergenceChecker_getAbsoluteThreshold(t_AbstractConvergenceChecker *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAbsoluteThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractConvergenceChecker_getRelativeThreshold(t_AbstractConvergenceChecker *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRelativeThreshold());
        return PyFloat_FromDouble((double) result);
      }
      static PyObject *t_AbstractConvergenceChecker_get__parameters_(t_AbstractConvergenceChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractConvergenceChecker_get__absoluteThreshold(t_AbstractConvergenceChecker *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAbsoluteThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractConvergenceChecker_get__relativeThreshold(t_AbstractConvergenceChecker *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRelativeThreshold());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/FieldComplexUnivariateIntegrator.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *FieldComplexUnivariateIntegrator::class$ = NULL;
      jmethodID *FieldComplexUnivariateIntegrator::mids$ = NULL;
      bool FieldComplexUnivariateIntegrator::live$ = false;

      jclass FieldComplexUnivariateIntegrator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/FieldComplexUnivariateIntegrator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fd15d0f6119eac9] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;)V");
          mids$[mid_integrate_35c2bcb22914ec3d] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/complex/FieldComplex;[Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_integrate_0ec16bac50c3b50a] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldComplexUnivariateIntegrator::FieldComplexUnivariateIntegrator(const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fd15d0f6119eac9, a0.this$)) {}

      ::org::hipparchus::complex::FieldComplex FieldComplexUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::complex::FieldComplex & a2, const JArray< ::org::hipparchus::complex::FieldComplex > & a3) const
      {
        return ::org::hipparchus::complex::FieldComplex(env->callObjectMethod(this$, mids$[mid_integrate_35c2bcb22914ec3d], a0, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::complex::FieldComplex FieldComplexUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::complex::FieldComplex & a2, const ::org::hipparchus::complex::FieldComplex & a3) const
      {
        return ::org::hipparchus::complex::FieldComplex(env->callObjectMethod(this$, mids$[mid_integrate_0ec16bac50c3b50a], a0, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_FieldComplexUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplexUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplexUnivariateIntegrator_of_(t_FieldComplexUnivariateIntegrator *self, PyObject *args);
      static int t_FieldComplexUnivariateIntegrator_init_(t_FieldComplexUnivariateIntegrator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldComplexUnivariateIntegrator_integrate(t_FieldComplexUnivariateIntegrator *self, PyObject *args);
      static PyObject *t_FieldComplexUnivariateIntegrator_get__parameters_(t_FieldComplexUnivariateIntegrator *self, void *data);
      static PyGetSetDef t_FieldComplexUnivariateIntegrator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldComplexUnivariateIntegrator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldComplexUnivariateIntegrator__methods_[] = {
        DECLARE_METHOD(t_FieldComplexUnivariateIntegrator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplexUnivariateIntegrator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplexUnivariateIntegrator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplexUnivariateIntegrator, integrate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldComplexUnivariateIntegrator)[] = {
        { Py_tp_methods, t_FieldComplexUnivariateIntegrator__methods_ },
        { Py_tp_init, (void *) t_FieldComplexUnivariateIntegrator_init_ },
        { Py_tp_getset, t_FieldComplexUnivariateIntegrator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldComplexUnivariateIntegrator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldComplexUnivariateIntegrator, t_FieldComplexUnivariateIntegrator, FieldComplexUnivariateIntegrator);
      PyObject *t_FieldComplexUnivariateIntegrator::wrap_Object(const FieldComplexUnivariateIntegrator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplexUnivariateIntegrator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplexUnivariateIntegrator *self = (t_FieldComplexUnivariateIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldComplexUnivariateIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplexUnivariateIntegrator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplexUnivariateIntegrator *self = (t_FieldComplexUnivariateIntegrator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldComplexUnivariateIntegrator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldComplexUnivariateIntegrator), &PY_TYPE_DEF(FieldComplexUnivariateIntegrator), module, "FieldComplexUnivariateIntegrator", 0);
      }

      void t_FieldComplexUnivariateIntegrator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexUnivariateIntegrator), "class_", make_descriptor(FieldComplexUnivariateIntegrator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexUnivariateIntegrator), "wrapfn_", make_descriptor(t_FieldComplexUnivariateIntegrator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplexUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldComplexUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldComplexUnivariateIntegrator::initializeClass, 1)))
          return NULL;
        return t_FieldComplexUnivariateIntegrator::wrap_Object(FieldComplexUnivariateIntegrator(((t_FieldComplexUnivariateIntegrator *) arg)->object.this$));
      }
      static PyObject *t_FieldComplexUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldComplexUnivariateIntegrator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldComplexUnivariateIntegrator_of_(t_FieldComplexUnivariateIntegrator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldComplexUnivariateIntegrator_init_(t_FieldComplexUnivariateIntegrator *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplexUnivariateIntegrator object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::analysis::integration::t_FieldUnivariateIntegrator::parameters_))
        {
          INT_CALL(object = FieldComplexUnivariateIntegrator(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldComplexUnivariateIntegrator_integrate(t_FieldComplexUnivariateIntegrator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 4:
          {
            jint a0;
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
            PyTypeObject **p2;
            JArray< ::org::hipparchus::complex::FieldComplex > a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "IKK[K", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
              return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jint a0;
            ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::hipparchus::complex::FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "IKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
              return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "integrate", args);
        return NULL;
      }
      static PyObject *t_FieldComplexUnivariateIntegrator_get__parameters_(t_FieldComplexUnivariateIntegrator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
