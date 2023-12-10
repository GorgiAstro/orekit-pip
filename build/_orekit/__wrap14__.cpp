#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarD.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldCopolarD::class$ = NULL;
          jmethodID *FieldCopolarD::mids$ = NULL;
          bool FieldCopolarD::live$ = false;

          jclass FieldCopolarD::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldCopolarD");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cd_eba8e72a22c984ac] = env->getMethodID(cls, "cd", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_nd_eba8e72a22c984ac] = env->getMethodID(cls, "nd", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_sd_eba8e72a22c984ac] = env->getMethodID(cls, "sd", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarD::cd() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_cd_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarD::nd() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_nd_eba8e72a22c984ac]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarD::sd() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_sd_eba8e72a22c984ac]));
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
    namespace special {
      namespace elliptic {
        namespace jacobi {
          static PyObject *t_FieldCopolarD_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarD_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarD_of_(t_FieldCopolarD *self, PyObject *args);
          static PyObject *t_FieldCopolarD_cd(t_FieldCopolarD *self);
          static PyObject *t_FieldCopolarD_nd(t_FieldCopolarD *self);
          static PyObject *t_FieldCopolarD_sd(t_FieldCopolarD *self);
          static PyObject *t_FieldCopolarD_get__parameters_(t_FieldCopolarD *self, void *data);
          static PyGetSetDef t_FieldCopolarD__fields_[] = {
            DECLARE_GET_FIELD(t_FieldCopolarD, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldCopolarD__methods_[] = {
            DECLARE_METHOD(t_FieldCopolarD, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarD, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarD, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldCopolarD, cd, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarD, nd, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarD, sd, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldCopolarD)[] = {
            { Py_tp_methods, t_FieldCopolarD__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldCopolarD__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldCopolarD)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldCopolarD, t_FieldCopolarD, FieldCopolarD);
          PyObject *t_FieldCopolarD::wrap_Object(const FieldCopolarD& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarD::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarD *self = (t_FieldCopolarD *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldCopolarD::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarD::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarD *self = (t_FieldCopolarD *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldCopolarD::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldCopolarD), &PY_TYPE_DEF(FieldCopolarD), module, "FieldCopolarD", 0);
          }

          void t_FieldCopolarD::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarD), "class_", make_descriptor(FieldCopolarD::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarD), "wrapfn_", make_descriptor(t_FieldCopolarD::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarD), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldCopolarD_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldCopolarD::initializeClass, 1)))
              return NULL;
            return t_FieldCopolarD::wrap_Object(FieldCopolarD(((t_FieldCopolarD *) arg)->object.this$));
          }
          static PyObject *t_FieldCopolarD_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldCopolarD::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldCopolarD_of_(t_FieldCopolarD *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldCopolarD_cd(t_FieldCopolarD *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.cd());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarD_nd(t_FieldCopolarD *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.nd());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarD_sd(t_FieldCopolarD *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.sd());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldCopolarD_get__parameters_(t_FieldCopolarD *self, void *data)
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
#include "org/orekit/utils/PythonTimeStampedGenerator.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonTimeStampedGenerator::class$ = NULL;
      jmethodID *PythonTimeStampedGenerator::mids$ = NULL;
      bool PythonTimeStampedGenerator::live$ = false;

      jclass PythonTimeStampedGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonTimeStampedGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_generate_8060cef9318d72e3] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeStampedGenerator::PythonTimeStampedGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonTimeStampedGenerator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonTimeStampedGenerator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonTimeStampedGenerator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
      static PyObject *t_PythonTimeStampedGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStampedGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStampedGenerator_of_(t_PythonTimeStampedGenerator *self, PyObject *args);
      static int t_PythonTimeStampedGenerator_init_(t_PythonTimeStampedGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeStampedGenerator_finalize(t_PythonTimeStampedGenerator *self);
      static PyObject *t_PythonTimeStampedGenerator_pythonExtension(t_PythonTimeStampedGenerator *self, PyObject *args);
      static jobject JNICALL t_PythonTimeStampedGenerator_generate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonTimeStampedGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeStampedGenerator_get__self(t_PythonTimeStampedGenerator *self, void *data);
      static PyObject *t_PythonTimeStampedGenerator_get__parameters_(t_PythonTimeStampedGenerator *self, void *data);
      static PyGetSetDef t_PythonTimeStampedGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeStampedGenerator, self),
        DECLARE_GET_FIELD(t_PythonTimeStampedGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeStampedGenerator__methods_[] = {
        DECLARE_METHOD(t_PythonTimeStampedGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStampedGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStampedGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonTimeStampedGenerator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeStampedGenerator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeStampedGenerator)[] = {
        { Py_tp_methods, t_PythonTimeStampedGenerator__methods_ },
        { Py_tp_init, (void *) t_PythonTimeStampedGenerator_init_ },
        { Py_tp_getset, t_PythonTimeStampedGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeStampedGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeStampedGenerator, t_PythonTimeStampedGenerator, PythonTimeStampedGenerator);
      PyObject *t_PythonTimeStampedGenerator::wrap_Object(const PythonTimeStampedGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeStampedGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeStampedGenerator *self = (t_PythonTimeStampedGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonTimeStampedGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonTimeStampedGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonTimeStampedGenerator *self = (t_PythonTimeStampedGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonTimeStampedGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeStampedGenerator), &PY_TYPE_DEF(PythonTimeStampedGenerator), module, "PythonTimeStampedGenerator", 1);
      }

      void t_PythonTimeStampedGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedGenerator), "class_", make_descriptor(PythonTimeStampedGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedGenerator), "wrapfn_", make_descriptor(t_PythonTimeStampedGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStampedGenerator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeStampedGenerator::initializeClass);
        JNINativeMethod methods[] = {
          { "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;", (void *) t_PythonTimeStampedGenerator_generate0 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeStampedGenerator_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonTimeStampedGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeStampedGenerator::initializeClass, 1)))
          return NULL;
        return t_PythonTimeStampedGenerator::wrap_Object(PythonTimeStampedGenerator(((t_PythonTimeStampedGenerator *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeStampedGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeStampedGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonTimeStampedGenerator_of_(t_PythonTimeStampedGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonTimeStampedGenerator_init_(t_PythonTimeStampedGenerator *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeStampedGenerator object((jobject) NULL);

        INT_CALL(object = PythonTimeStampedGenerator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeStampedGenerator_finalize(t_PythonTimeStampedGenerator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeStampedGenerator_pythonExtension(t_PythonTimeStampedGenerator *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeStampedGenerator_generate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedGenerator::mids$[PythonTimeStampedGenerator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "generate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
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

      static void JNICALL t_PythonTimeStampedGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStampedGenerator::mids$[PythonTimeStampedGenerator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeStampedGenerator::mids$[PythonTimeStampedGenerator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeStampedGenerator_get__self(t_PythonTimeStampedGenerator *self, void *data)
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
      static PyObject *t_PythonTimeStampedGenerator_get__parameters_(t_PythonTimeStampedGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/MerweUnscentedTransform.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *MerweUnscentedTransform::class$ = NULL;
      jmethodID *MerweUnscentedTransform::mids$ = NULL;
      bool MerweUnscentedTransform::live$ = false;
      jdouble MerweUnscentedTransform::DEFAULT_ALPHA = (jdouble) 0;
      jdouble MerweUnscentedTransform::DEFAULT_BETA = (jdouble) 0;
      jdouble MerweUnscentedTransform::DEFAULT_KAPPA = (jdouble) 0;

      jclass MerweUnscentedTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/MerweUnscentedTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_2e15f46ce2042002] = env->getMethodID(cls, "<init>", "(IDDD)V");
          mids$[mid_getWc_aab4fbf77867daa8] = env->getMethodID(cls, "getWc", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getWm_aab4fbf77867daa8] = env->getMethodID(cls, "getWm", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getMultiplicationFactor_dff5885c2c873297] = env->getMethodID(cls, "getMultiplicationFactor", "()D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_ALPHA = env->getStaticDoubleField(cls, "DEFAULT_ALPHA");
          DEFAULT_BETA = env->getStaticDoubleField(cls, "DEFAULT_BETA");
          DEFAULT_KAPPA = env->getStaticDoubleField(cls, "DEFAULT_KAPPA");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MerweUnscentedTransform::MerweUnscentedTransform(jint a0) : ::org::hipparchus::util::AbstractUnscentedTransform(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      MerweUnscentedTransform::MerweUnscentedTransform(jint a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::util::AbstractUnscentedTransform(env->newObject(initializeClass, &mids$, mid_init$_2e15f46ce2042002, a0, a1, a2, a3)) {}

      ::org::hipparchus::linear::RealVector MerweUnscentedTransform::getWc() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWc_aab4fbf77867daa8]));
      }

      ::org::hipparchus::linear::RealVector MerweUnscentedTransform::getWm() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWm_aab4fbf77867daa8]));
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
      static PyObject *t_MerweUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MerweUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MerweUnscentedTransform_init_(t_MerweUnscentedTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_MerweUnscentedTransform_getWc(t_MerweUnscentedTransform *self, PyObject *args);
      static PyObject *t_MerweUnscentedTransform_getWm(t_MerweUnscentedTransform *self, PyObject *args);
      static PyObject *t_MerweUnscentedTransform_get__wc(t_MerweUnscentedTransform *self, void *data);
      static PyObject *t_MerweUnscentedTransform_get__wm(t_MerweUnscentedTransform *self, void *data);
      static PyGetSetDef t_MerweUnscentedTransform__fields_[] = {
        DECLARE_GET_FIELD(t_MerweUnscentedTransform, wc),
        DECLARE_GET_FIELD(t_MerweUnscentedTransform, wm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MerweUnscentedTransform__methods_[] = {
        DECLARE_METHOD(t_MerweUnscentedTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MerweUnscentedTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MerweUnscentedTransform, getWc, METH_VARARGS),
        DECLARE_METHOD(t_MerweUnscentedTransform, getWm, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MerweUnscentedTransform)[] = {
        { Py_tp_methods, t_MerweUnscentedTransform__methods_ },
        { Py_tp_init, (void *) t_MerweUnscentedTransform_init_ },
        { Py_tp_getset, t_MerweUnscentedTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MerweUnscentedTransform)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::AbstractUnscentedTransform),
        NULL
      };

      DEFINE_TYPE(MerweUnscentedTransform, t_MerweUnscentedTransform, MerweUnscentedTransform);

      void t_MerweUnscentedTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(MerweUnscentedTransform), &PY_TYPE_DEF(MerweUnscentedTransform), module, "MerweUnscentedTransform", 0);
      }

      void t_MerweUnscentedTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "class_", make_descriptor(MerweUnscentedTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "wrapfn_", make_descriptor(t_MerweUnscentedTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "boxfn_", make_descriptor(boxObject));
        env->getClass(MerweUnscentedTransform::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "DEFAULT_ALPHA", make_descriptor(MerweUnscentedTransform::DEFAULT_ALPHA));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "DEFAULT_BETA", make_descriptor(MerweUnscentedTransform::DEFAULT_BETA));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MerweUnscentedTransform), "DEFAULT_KAPPA", make_descriptor(MerweUnscentedTransform::DEFAULT_KAPPA));
      }

      static PyObject *t_MerweUnscentedTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MerweUnscentedTransform::initializeClass, 1)))
          return NULL;
        return t_MerweUnscentedTransform::wrap_Object(MerweUnscentedTransform(((t_MerweUnscentedTransform *) arg)->object.this$));
      }
      static PyObject *t_MerweUnscentedTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MerweUnscentedTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MerweUnscentedTransform_init_(t_MerweUnscentedTransform *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            MerweUnscentedTransform object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = MerweUnscentedTransform(a0));
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
            MerweUnscentedTransform object((jobject) NULL);

            if (!parseArgs(args, "IDDD", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = MerweUnscentedTransform(a0, a1, a2, a3));
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

      static PyObject *t_MerweUnscentedTransform_getWc(t_MerweUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getWc());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(MerweUnscentedTransform), (PyObject *) self, "getWc", args, 2);
      }

      static PyObject *t_MerweUnscentedTransform_getWm(t_MerweUnscentedTransform *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getWm());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        return callSuper(PY_TYPE(MerweUnscentedTransform), (PyObject *) self, "getWm", args, 2);
      }

      static PyObject *t_MerweUnscentedTransform_get__wc(t_MerweUnscentedTransform *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWc());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_MerweUnscentedTransform_get__wm(t_MerweUnscentedTransform *self, void *data)
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
#include "org/orekit/estimation/measurements/PV.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
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
            mids$[mid_init$_3fbd368e7c18cce5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_6dab31058b9c9d74] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_d7f5ef4e1182a36e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[D[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_b89e2f55c4516033] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;[[D[[DDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_init$_6e5235441958b384] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getCorrelationCoefficientsMatrix_0358d8ea02f2cdb1] = env->getMethodID(cls, "getCorrelationCoefficientsMatrix", "()[[D");
            mids$[mid_getCovarianceMatrix_0358d8ea02f2cdb1] = env->getMethodID(cls, "getCovarianceMatrix", "()[[D");
            mids$[mid_getPosition_d52645e0d4c07563] = env->getMethodID(cls, "getPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getVelocity_d52645e0d4c07563] = env->getMethodID(cls, "getVelocity", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_27ef5cc84ad0852b] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_3fbd368e7c18cce5, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$)) {}

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< JArray< jdouble > > & a3, jdouble a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_6dab31058b9c9d74, a0.this$, a1.this$, a2.this$, a3.this$, a4, a5.this$)) {}

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_d7f5ef4e1182a36e, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6.this$)) {}

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_b89e2f55c4516033, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6.this$)) {}

        PV::PV(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_6e5235441958b384, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        JArray< JArray< jdouble > > PV::getCorrelationCoefficientsMatrix() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCorrelationCoefficientsMatrix_0358d8ea02f2cdb1]));
        }

        JArray< JArray< jdouble > > PV::getCovarianceMatrix() const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrix_0358d8ea02f2cdb1]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PV::getPosition() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPosition_d52645e0d4c07563]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D PV::getVelocity() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocity_d52645e0d4c07563]));
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
#include "org/orekit/files/ccsds/ndm/cdm/StateVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *StateVector::class$ = NULL;
            jmethodID *StateVector::mids$ = NULL;
            bool StateVector::live$ = false;

            jclass StateVector::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/StateVector");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_getPositionVector_d52645e0d4c07563] = env->getMethodID(cls, "getPositionVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getVelocityVector_d52645e0d4c07563] = env->getMethodID(cls, "getVelocityVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_setX_17db3a65980d3441] = env->getMethodID(cls, "setX", "(D)V");
                mids$[mid_setXdot_17db3a65980d3441] = env->getMethodID(cls, "setXdot", "(D)V");
                mids$[mid_setY_17db3a65980d3441] = env->getMethodID(cls, "setY", "(D)V");
                mids$[mid_setYdot_17db3a65980d3441] = env->getMethodID(cls, "setYdot", "(D)V");
                mids$[mid_setZ_17db3a65980d3441] = env->getMethodID(cls, "setZ", "(D)V");
                mids$[mid_setZdot_17db3a65980d3441] = env->getMethodID(cls, "setZdot", "(D)V");
                mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            StateVector::StateVector() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            ::org::hipparchus::geometry::euclidean::threed::Vector3D StateVector::getPositionVector() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPositionVector_d52645e0d4c07563]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D StateVector::getVelocityVector() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocityVector_d52645e0d4c07563]));
            }

            void StateVector::setX(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setX_17db3a65980d3441], a0);
            }

            void StateVector::setXdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setXdot_17db3a65980d3441], a0);
            }

            void StateVector::setY(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setY_17db3a65980d3441], a0);
            }

            void StateVector::setYdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setYdot_17db3a65980d3441], a0);
            }

            void StateVector::setZ(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZ_17db3a65980d3441], a0);
            }

            void StateVector::setZdot(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setZdot_17db3a65980d3441], a0);
            }

            void StateVector::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
            static PyObject *t_StateVector_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVector_instance_(PyTypeObject *type, PyObject *arg);
            static int t_StateVector_init_(t_StateVector *self, PyObject *args, PyObject *kwds);
            static PyObject *t_StateVector_getPositionVector(t_StateVector *self);
            static PyObject *t_StateVector_getVelocityVector(t_StateVector *self);
            static PyObject *t_StateVector_setX(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setXdot(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setY(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setYdot(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setZ(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_setZdot(t_StateVector *self, PyObject *arg);
            static PyObject *t_StateVector_validate(t_StateVector *self, PyObject *args);
            static PyObject *t_StateVector_get__positionVector(t_StateVector *self, void *data);
            static PyObject *t_StateVector_get__velocityVector(t_StateVector *self, void *data);
            static int t_StateVector_set__x(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__xdot(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__y(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__ydot(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__z(t_StateVector *self, PyObject *arg, void *data);
            static int t_StateVector_set__zdot(t_StateVector *self, PyObject *arg, void *data);
            static PyGetSetDef t_StateVector__fields_[] = {
              DECLARE_GET_FIELD(t_StateVector, positionVector),
              DECLARE_GET_FIELD(t_StateVector, velocityVector),
              DECLARE_SET_FIELD(t_StateVector, x),
              DECLARE_SET_FIELD(t_StateVector, xdot),
              DECLARE_SET_FIELD(t_StateVector, y),
              DECLARE_SET_FIELD(t_StateVector, ydot),
              DECLARE_SET_FIELD(t_StateVector, z),
              DECLARE_SET_FIELD(t_StateVector, zdot),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_StateVector__methods_[] = {
              DECLARE_METHOD(t_StateVector, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVector, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVector, getPositionVector, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, getVelocityVector, METH_NOARGS),
              DECLARE_METHOD(t_StateVector, setX, METH_O),
              DECLARE_METHOD(t_StateVector, setXdot, METH_O),
              DECLARE_METHOD(t_StateVector, setY, METH_O),
              DECLARE_METHOD(t_StateVector, setYdot, METH_O),
              DECLARE_METHOD(t_StateVector, setZ, METH_O),
              DECLARE_METHOD(t_StateVector, setZdot, METH_O),
              DECLARE_METHOD(t_StateVector, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVector)[] = {
              { Py_tp_methods, t_StateVector__methods_ },
              { Py_tp_init, (void *) t_StateVector_init_ },
              { Py_tp_getset, t_StateVector__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVector)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(StateVector, t_StateVector, StateVector);

            void t_StateVector::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVector), &PY_TYPE_DEF(StateVector), module, "StateVector", 0);
            }

            void t_StateVector::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "class_", make_descriptor(StateVector::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "wrapfn_", make_descriptor(t_StateVector::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVector), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_StateVector_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVector::initializeClass, 1)))
                return NULL;
              return t_StateVector::wrap_Object(StateVector(((t_StateVector *) arg)->object.this$));
            }
            static PyObject *t_StateVector_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVector::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_StateVector_init_(t_StateVector *self, PyObject *args, PyObject *kwds)
            {
              StateVector object((jobject) NULL);

              INT_CALL(object = StateVector());
              self->object = object;

              return 0;
            }

            static PyObject *t_StateVector_getPositionVector(t_StateVector *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getPositionVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_StateVector_getVelocityVector(t_StateVector *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVelocityVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_StateVector_setX(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setX(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setX", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setXdot(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setXdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setXdot", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setY(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setY(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setY", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setYdot(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setYdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setYdot", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setZ(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZ(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZ", arg);
              return NULL;
            }

            static PyObject *t_StateVector_setZdot(t_StateVector *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setZdot(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setZdot", arg);
              return NULL;
            }

            static PyObject *t_StateVector_validate(t_StateVector *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(StateVector), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_StateVector_get__positionVector(t_StateVector *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getPositionVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static PyObject *t_StateVector_get__velocityVector(t_StateVector *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVelocityVector());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static int t_StateVector_set__x(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setX(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "x", arg);
              return -1;
            }

            static int t_StateVector_set__xdot(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setXdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "xdot", arg);
              return -1;
            }

            static int t_StateVector_set__y(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setY(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "y", arg);
              return -1;
            }

            static int t_StateVector_set__ydot(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setYdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "ydot", arg);
              return -1;
            }

            static int t_StateVector_set__z(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZ(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "z", arg);
              return -1;
            }

            static int t_StateVector_set__zdot(t_StateVector *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setZdot(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "zdot", arg);
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
#include "org/orekit/propagation/events/handlers/RecordAndContinue.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "org/orekit/propagation/events/handlers/RecordAndContinue$Event.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *RecordAndContinue::class$ = NULL;
          jmethodID *RecordAndContinue::mids$ = NULL;
          bool RecordAndContinue::live$ = false;

          jclass RecordAndContinue::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/RecordAndContinue");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_de3e021e7266b71e] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_eventOccurred_abc543fa9701720f] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_getEvents_2afa36052df4765d] = env->getMethodID(cls, "getEvents", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RecordAndContinue::RecordAndContinue() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          RecordAndContinue::RecordAndContinue(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de3e021e7266b71e, a0.this$)) {}

          void RecordAndContinue::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
          }

          ::org::hipparchus::ode::events::Action RecordAndContinue::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_abc543fa9701720f], a0.this$, a1.this$, a2));
          }

          ::java::util::List RecordAndContinue::getEvents() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEvents_2afa36052df4765d]));
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
      namespace events {
        namespace handlers {
          static PyObject *t_RecordAndContinue_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordAndContinue_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RecordAndContinue_init_(t_RecordAndContinue *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RecordAndContinue_clear(t_RecordAndContinue *self);
          static PyObject *t_RecordAndContinue_eventOccurred(t_RecordAndContinue *self, PyObject *args);
          static PyObject *t_RecordAndContinue_getEvents(t_RecordAndContinue *self);
          static PyObject *t_RecordAndContinue_get__events(t_RecordAndContinue *self, void *data);
          static PyGetSetDef t_RecordAndContinue__fields_[] = {
            DECLARE_GET_FIELD(t_RecordAndContinue, events),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RecordAndContinue__methods_[] = {
            DECLARE_METHOD(t_RecordAndContinue, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordAndContinue, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordAndContinue, clear, METH_NOARGS),
            DECLARE_METHOD(t_RecordAndContinue, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_RecordAndContinue, getEvents, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RecordAndContinue)[] = {
            { Py_tp_methods, t_RecordAndContinue__methods_ },
            { Py_tp_init, (void *) t_RecordAndContinue_init_ },
            { Py_tp_getset, t_RecordAndContinue__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RecordAndContinue)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RecordAndContinue, t_RecordAndContinue, RecordAndContinue);

          void t_RecordAndContinue::install(PyObject *module)
          {
            installType(&PY_TYPE(RecordAndContinue), &PY_TYPE_DEF(RecordAndContinue), module, "RecordAndContinue", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue), "Event", make_descriptor(&PY_TYPE_DEF(RecordAndContinue$Event)));
          }

          void t_RecordAndContinue::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue), "class_", make_descriptor(RecordAndContinue::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue), "wrapfn_", make_descriptor(t_RecordAndContinue::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RecordAndContinue_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RecordAndContinue::initializeClass, 1)))
              return NULL;
            return t_RecordAndContinue::wrap_Object(RecordAndContinue(((t_RecordAndContinue *) arg)->object.this$));
          }
          static PyObject *t_RecordAndContinue_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RecordAndContinue::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RecordAndContinue_init_(t_RecordAndContinue *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                RecordAndContinue object((jobject) NULL);

                INT_CALL(object = RecordAndContinue());
                self->object = object;
                break;
              }
             case 1:
              {
                ::java::util::List a0((jobject) NULL);
                PyTypeObject **p0;
                RecordAndContinue object((jobject) NULL);

                if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = RecordAndContinue(a0));
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

          static PyObject *t_RecordAndContinue_clear(t_RecordAndContinue *self)
          {
            OBJ_CALL(self->object.clear());
            Py_RETURN_NONE;
          }

          static PyObject *t_RecordAndContinue_eventOccurred(t_RecordAndContinue *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::orekit::propagation::events::EventDetector a1((jobject) NULL);
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::events::EventDetector::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }

          static PyObject *t_RecordAndContinue_getEvents(t_RecordAndContinue *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getEvents());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::events::handlers::PY_TYPE(RecordAndContinue$Event));
          }

          static PyObject *t_RecordAndContinue_get__events(t_RecordAndContinue *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getEvents());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/linear/RealMatrixPreservingVisitor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *Array2DRowRealMatrix::class$ = NULL;
      jmethodID *Array2DRowRealMatrix::mids$ = NULL;
      bool Array2DRowRealMatrix::live$ = false;

      jclass Array2DRowRealMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/Array2DRowRealMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_fa9d415d19f69361] = env->getMethodID(cls, "<init>", "([D)V");
          mids$[mid_init$_a0befc7f3dc19e41] = env->getMethodID(cls, "<init>", "([[D)V");
          mids$[mid_init$_eade0e830cb99555] = env->getMethodID(cls, "<init>", "([[DZ)V");
          mids$[mid_init$_6f37635c3285dbdf] = env->getMethodID(cls, "<init>", "(II)V");
          mids$[mid_add_98f76adeb9727d30] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_addToEntry_1506189166690b5e] = env->getMethodID(cls, "addToEntry", "(IID)V");
          mids$[mid_copy_688b496048ff947b] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_createMatrix_4410ec92987b66e9] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getColumnDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getData_0358d8ea02f2cdb1] = env->getMethodID(cls, "getData", "()[[D");
          mids$[mid_getDataRef_0358d8ea02f2cdb1] = env->getMethodID(cls, "getDataRef", "()[[D");
          mids$[mid_getEntry_dbbe5f05149dbf73] = env->getMethodID(cls, "getEntry", "(II)D");
          mids$[mid_getRow_abe82da4f5c7c981] = env->getMethodID(cls, "getRow", "(I)[D");
          mids$[mid_getRowDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getSubMatrix_d08295af63465f00] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_kroneckerProduct_e9b72403ad502221] = env->getMethodID(cls, "kroneckerProduct", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiply_98f76adeb9727d30] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_multiplyEntry_1506189166690b5e] = env->getMethodID(cls, "multiplyEntry", "(IID)V");
          mids$[mid_multiplyTransposed_1c7eb3046609aeac] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_multiplyTransposed_e9b72403ad502221] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_operate_ac3d742ccc742f22] = env->getMethodID(cls, "operate", "([D)[D");
          mids$[mid_preMultiply_ac3d742ccc742f22] = env->getMethodID(cls, "preMultiply", "([D)[D");
          mids$[mid_setEntry_1506189166690b5e] = env->getMethodID(cls, "setEntry", "(IID)V");
          mids$[mid_setRow_7169a8c8a60b8b2c] = env->getMethodID(cls, "setRow", "(I[D)V");
          mids$[mid_setSubMatrix_f92f0755fea39af9] = env->getMethodID(cls, "setSubMatrix", "([[DII)V");
          mids$[mid_stack_688b496048ff947b] = env->getMethodID(cls, "stack", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_subtract_98f76adeb9727d30] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
          mids$[mid_transposeMultiply_1c7eb3046609aeac] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_transposeMultiply_e9b72403ad502221] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_unstackSquare_688b496048ff947b] = env->getMethodID(cls, "unstackSquare", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_walkInColumnOrder_3e071bd337c0da4c] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInColumnOrder_b19c1ac2d3fe7eca] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInColumnOrder_62bd065f6938d976] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInColumnOrder_ab29bef5e0849364] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_3e071bd337c0da4c] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;)D");
          mids$[mid_walkInRowOrder_b19c1ac2d3fe7eca] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;)D");
          mids$[mid_walkInRowOrder_62bd065f6938d976] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixChangingVisitor;IIII)D");
          mids$[mid_walkInRowOrder_ab29bef5e0849364] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/RealMatrixPreservingVisitor;IIII)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Array2DRowRealMatrix::Array2DRowRealMatrix() : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      Array2DRowRealMatrix::Array2DRowRealMatrix(const JArray< jdouble > & a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_fa9d415d19f69361, a0.this$)) {}

      Array2DRowRealMatrix::Array2DRowRealMatrix(const JArray< JArray< jdouble > > & a0) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_a0befc7f3dc19e41, a0.this$)) {}

      Array2DRowRealMatrix::Array2DRowRealMatrix(const JArray< JArray< jdouble > > & a0, jboolean a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_eade0e830cb99555, a0.this$, a1)) {}

      Array2DRowRealMatrix::Array2DRowRealMatrix(jint a0, jint a1) : ::org::hipparchus::linear::AbstractRealMatrix(env->newObject(initializeClass, &mids$, mid_init$_6f37635c3285dbdf, a0, a1)) {}

      Array2DRowRealMatrix Array2DRowRealMatrix::add(const Array2DRowRealMatrix & a0) const
      {
        return Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_add_98f76adeb9727d30], a0.this$));
      }

      void Array2DRowRealMatrix::addToEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_1506189166690b5e], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::copy() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_copy_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_4410ec92987b66e9], a0, a1));
      }

      jint Array2DRowRealMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_570ce0828f81a2c1]);
      }

      JArray< JArray< jdouble > > Array2DRowRealMatrix::getData() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getData_0358d8ea02f2cdb1]));
      }

      JArray< JArray< jdouble > > Array2DRowRealMatrix::getDataRef() const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_getDataRef_0358d8ea02f2cdb1]));
      }

      jdouble Array2DRowRealMatrix::getEntry(jint a0, jint a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEntry_dbbe5f05149dbf73], a0, a1);
      }

      JArray< jdouble > Array2DRowRealMatrix::getRow(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getRow_abe82da4f5c7c981], a0));
      }

      jint Array2DRowRealMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_570ce0828f81a2c1]);
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_d08295af63465f00], a0, a1, a2, a3));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::kroneckerProduct(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_kroneckerProduct_e9b72403ad502221], a0.this$));
      }

      Array2DRowRealMatrix Array2DRowRealMatrix::multiply(const Array2DRowRealMatrix & a0) const
      {
        return Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_multiply_98f76adeb9727d30], a0.this$));
      }

      void Array2DRowRealMatrix::multiplyEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_1506189166690b5e], a0, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::multiplyTransposed(const Array2DRowRealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_1c7eb3046609aeac], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::multiplyTransposed(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_e9b72403ad502221], a0.this$));
      }

      JArray< jdouble > Array2DRowRealMatrix::operate(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_operate_ac3d742ccc742f22], a0.this$));
      }

      JArray< jdouble > Array2DRowRealMatrix::preMultiply(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_preMultiply_ac3d742ccc742f22], a0.this$));
      }

      void Array2DRowRealMatrix::setEntry(jint a0, jint a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_1506189166690b5e], a0, a1, a2);
      }

      void Array2DRowRealMatrix::setRow(jint a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_7169a8c8a60b8b2c], a0, a1.this$);
      }

      void Array2DRowRealMatrix::setSubMatrix(const JArray< JArray< jdouble > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_f92f0755fea39af9], a0.this$, a1, a2);
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::stack() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_stack_688b496048ff947b]));
      }

      Array2DRowRealMatrix Array2DRowRealMatrix::subtract(const Array2DRowRealMatrix & a0) const
      {
        return Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_subtract_98f76adeb9727d30], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::transposeMultiply(const Array2DRowRealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_1c7eb3046609aeac], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::transposeMultiply(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_e9b72403ad502221], a0.this$));
      }

      ::org::hipparchus::linear::RealMatrix Array2DRowRealMatrix::unstackSquare() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_unstackSquare_688b496048ff947b]));
      }

      jdouble Array2DRowRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_3e071bd337c0da4c], a0.this$);
      }

      jdouble Array2DRowRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_b19c1ac2d3fe7eca], a0.this$);
      }

      jdouble Array2DRowRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_62bd065f6938d976], a0.this$, a1, a2, a3, a4);
      }

      jdouble Array2DRowRealMatrix::walkInColumnOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInColumnOrder_ab29bef5e0849364], a0.this$, a1, a2, a3, a4);
      }

      jdouble Array2DRowRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_3e071bd337c0da4c], a0.this$);
      }

      jdouble Array2DRowRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_b19c1ac2d3fe7eca], a0.this$);
      }

      jdouble Array2DRowRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_62bd065f6938d976], a0.this$, a1, a2, a3, a4);
      }

      jdouble Array2DRowRealMatrix::walkInRowOrder(const ::org::hipparchus::linear::RealMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return env->callDoubleMethod(this$, mids$[mid_walkInRowOrder_ab29bef5e0849364], a0.this$, a1, a2, a3, a4);
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
      static PyObject *t_Array2DRowRealMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Array2DRowRealMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Array2DRowRealMatrix_init_(t_Array2DRowRealMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Array2DRowRealMatrix_add(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_addToEntry(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_copy(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_createMatrix(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getColumnDimension(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getData(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getDataRef(t_Array2DRowRealMatrix *self);
      static PyObject *t_Array2DRowRealMatrix_getEntry(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getRow(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getRowDimension(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_getSubMatrix(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_kroneckerProduct(t_Array2DRowRealMatrix *self, PyObject *arg);
      static PyObject *t_Array2DRowRealMatrix_multiply(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_multiplyEntry(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_multiplyTransposed(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_operate(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_preMultiply(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_setEntry(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_setRow(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_setSubMatrix(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_stack(t_Array2DRowRealMatrix *self);
      static PyObject *t_Array2DRowRealMatrix_subtract(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_transposeMultiply(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_unstackSquare(t_Array2DRowRealMatrix *self);
      static PyObject *t_Array2DRowRealMatrix_walkInColumnOrder(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_walkInRowOrder(t_Array2DRowRealMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowRealMatrix_get__columnDimension(t_Array2DRowRealMatrix *self, void *data);
      static PyObject *t_Array2DRowRealMatrix_get__data(t_Array2DRowRealMatrix *self, void *data);
      static PyObject *t_Array2DRowRealMatrix_get__dataRef(t_Array2DRowRealMatrix *self, void *data);
      static PyObject *t_Array2DRowRealMatrix_get__rowDimension(t_Array2DRowRealMatrix *self, void *data);
      static PyGetSetDef t_Array2DRowRealMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_Array2DRowRealMatrix, columnDimension),
        DECLARE_GET_FIELD(t_Array2DRowRealMatrix, data),
        DECLARE_GET_FIELD(t_Array2DRowRealMatrix, dataRef),
        DECLARE_GET_FIELD(t_Array2DRowRealMatrix, rowDimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Array2DRowRealMatrix__methods_[] = {
        DECLARE_METHOD(t_Array2DRowRealMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getRow, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, kroneckerProduct, METH_O),
        DECLARE_METHOD(t_Array2DRowRealMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, stack, METH_NOARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, transposeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, unstackSquare, METH_NOARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowRealMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Array2DRowRealMatrix)[] = {
        { Py_tp_methods, t_Array2DRowRealMatrix__methods_ },
        { Py_tp_init, (void *) t_Array2DRowRealMatrix_init_ },
        { Py_tp_getset, t_Array2DRowRealMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Array2DRowRealMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractRealMatrix),
        NULL
      };

      DEFINE_TYPE(Array2DRowRealMatrix, t_Array2DRowRealMatrix, Array2DRowRealMatrix);

      void t_Array2DRowRealMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(Array2DRowRealMatrix), &PY_TYPE_DEF(Array2DRowRealMatrix), module, "Array2DRowRealMatrix", 0);
      }

      void t_Array2DRowRealMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowRealMatrix), "class_", make_descriptor(Array2DRowRealMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowRealMatrix), "wrapfn_", make_descriptor(t_Array2DRowRealMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowRealMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Array2DRowRealMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Array2DRowRealMatrix::initializeClass, 1)))
          return NULL;
        return t_Array2DRowRealMatrix::wrap_Object(Array2DRowRealMatrix(((t_Array2DRowRealMatrix *) arg)->object.this$));
      }
      static PyObject *t_Array2DRowRealMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Array2DRowRealMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Array2DRowRealMatrix_init_(t_Array2DRowRealMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Array2DRowRealMatrix object((jobject) NULL);

            INT_CALL(object = Array2DRowRealMatrix());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            Array2DRowRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              INT_CALL(object = Array2DRowRealMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            Array2DRowRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[D", &a0))
            {
              INT_CALL(object = Array2DRowRealMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< JArray< jdouble > > a0((jobject) NULL);
            jboolean a1;
            Array2DRowRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[DZ", &a0, &a1))
            {
              INT_CALL(object = Array2DRowRealMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            jint a1;
            Array2DRowRealMatrix object((jobject) NULL);

            if (!parseArgs(args, "II", &a0, &a1))
            {
              INT_CALL(object = Array2DRowRealMatrix(a0, a1));
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

      static PyObject *t_Array2DRowRealMatrix_add(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        Array2DRowRealMatrix a0((jobject) NULL);
        Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_Array2DRowRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_addToEntry(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.addToEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_copy(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_createMatrix(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getColumnDimension(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getData(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getDataRef(t_Array2DRowRealMatrix *self)
      {
        JArray< JArray< jdouble > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowRealMatrix_getEntry(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getRow(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getRow", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getRowDimension(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_getSubMatrix(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArgs(args, "IIII", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.getSubMatrix(a0, a1, a2, a3));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "getSubMatrix", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_kroneckerProduct(t_Array2DRowRealMatrix *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.kroneckerProduct(a0));
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "kroneckerProduct", arg);
        return NULL;
      }

      static PyObject *t_Array2DRowRealMatrix_multiply(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        Array2DRowRealMatrix a0((jobject) NULL);
        Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return t_Array2DRowRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_multiplyEntry(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.multiplyEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_multiplyTransposed(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Array2DRowRealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_operate(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_preMultiply(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        JArray< jdouble > a0((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "[D", &a0))
        {
          OBJ_CALL(result = self->object.preMultiply(a0));
          return result.wrap();
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_setEntry(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setEntry(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_setRow(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "I[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "setRow", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_setSubMatrix(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        jint a1;
        jint a2;

        if (!parseArgs(args, "[[DII", &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.setSubMatrix(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "setSubMatrix", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_stack(t_Array2DRowRealMatrix *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.stack());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_Array2DRowRealMatrix_subtract(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        Array2DRowRealMatrix a0((jobject) NULL);
        Array2DRowRealMatrix result((jobject) NULL);

        if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_Array2DRowRealMatrix::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_transposeMultiply(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Array2DRowRealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", Array2DRowRealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_unstackSquare(t_Array2DRowRealMatrix *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.unstackSquare());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_Array2DRowRealMatrix_walkInColumnOrder(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInColumnOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "walkInColumnOrder", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_walkInRowOrder(t_Array2DRowRealMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          break;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrixChangingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixChangingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::linear::RealMatrixPreservingVisitor a0((jobject) NULL);
            jint a1;
            jint a2;
            jint a3;
            jint a4;
            jdouble result;

            if (!parseArgs(args, "kIIII", ::org::hipparchus::linear::RealMatrixPreservingVisitor::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = self->object.walkInRowOrder(a0, a1, a2, a3, a4));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowRealMatrix), (PyObject *) self, "walkInRowOrder", args, 2);
      }

      static PyObject *t_Array2DRowRealMatrix_get__columnDimension(t_Array2DRowRealMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Array2DRowRealMatrix_get__data(t_Array2DRowRealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowRealMatrix_get__dataRef(t_Array2DRowRealMatrix *self, void *data)
      {
        JArray< JArray< jdouble > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowRealMatrix_get__rowDimension(t_Array2DRowRealMatrix *self, void *data)
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
#include "org/orekit/files/ccsds/section/Header.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
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
              mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_getClassification_11b109bd155ca898] = env->getMethodID(cls, "getClassification", "()Ljava/lang/String;");
              mids$[mid_getCreationDate_85703d13e302437e] = env->getMethodID(cls, "getCreationDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getFormatVersion_dff5885c2c873297] = env->getMethodID(cls, "getFormatVersion", "()D");
              mids$[mid_getMessageId_11b109bd155ca898] = env->getMethodID(cls, "getMessageId", "()Ljava/lang/String;");
              mids$[mid_getOriginator_11b109bd155ca898] = env->getMethodID(cls, "getOriginator", "()Ljava/lang/String;");
              mids$[mid_setClassification_d0bc48d5b00dc40c] = env->getMethodID(cls, "setClassification", "(Ljava/lang/String;)V");
              mids$[mid_setCreationDate_600a2a61652bc473] = env->getMethodID(cls, "setCreationDate", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setFormatVersion_17db3a65980d3441] = env->getMethodID(cls, "setFormatVersion", "(D)V");
              mids$[mid_setMessageId_d0bc48d5b00dc40c] = env->getMethodID(cls, "setMessageId", "(Ljava/lang/String;)V");
              mids$[mid_setOriginator_d0bc48d5b00dc40c] = env->getMethodID(cls, "setOriginator", "(Ljava/lang/String;)V");
              mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Header::Header(jdouble a0, jdouble a1) : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

          ::java::lang::String Header::getClassification() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getClassification_11b109bd155ca898]));
          }

          ::org::orekit::time::AbsoluteDate Header::getCreationDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCreationDate_85703d13e302437e]));
          }

          jdouble Header::getFormatVersion() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFormatVersion_dff5885c2c873297]);
          }

          ::java::lang::String Header::getMessageId() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessageId_11b109bd155ca898]));
          }

          ::java::lang::String Header::getOriginator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOriginator_11b109bd155ca898]));
          }

          void Header::setClassification(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setClassification_d0bc48d5b00dc40c], a0.this$);
          }

          void Header::setCreationDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDate_600a2a61652bc473], a0.this$);
          }

          void Header::setFormatVersion(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFormatVersion_17db3a65980d3441], a0);
          }

          void Header::setMessageId(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setMessageId_d0bc48d5b00dc40c], a0.this$);
          }

          void Header::setOriginator(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setOriginator_d0bc48d5b00dc40c], a0.this$);
          }

          void Header::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaInterSatellitesPhaseModifier::class$ = NULL;
          jmethodID *OnBoardAntennaInterSatellitesPhaseModifier::mids$ = NULL;
          bool OnBoardAntennaInterSatellitesPhaseModifier::live$ = false;

          jclass OnBoardAntennaInterSatellitesPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8f7d2a24ef2ff591] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaInterSatellitesPhaseModifier::OnBoardAntennaInterSatellitesPhaseModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f7d2a24ef2ff591, a0.this$, a1.this$)) {}

          ::java::util::List OnBoardAntennaInterSatellitesPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void OnBoardAntennaInterSatellitesPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9], a0.this$);
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
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaInterSatellitesPhaseModifier_init_(t_OnBoardAntennaInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_getParametersDrivers(t_OnBoardAntennaInterSatellitesPhaseModifier *self);
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_OnBoardAntennaInterSatellitesPhaseModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_get__parametersDrivers(t_OnBoardAntennaInterSatellitesPhaseModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaInterSatellitesPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaInterSatellitesPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaInterSatellitesPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaInterSatellitesPhaseModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaInterSatellitesPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaInterSatellitesPhaseModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaInterSatellitesPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaInterSatellitesPhaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaInterSatellitesPhaseModifier, t_OnBoardAntennaInterSatellitesPhaseModifier, OnBoardAntennaInterSatellitesPhaseModifier);

          void t_OnBoardAntennaInterSatellitesPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaInterSatellitesPhaseModifier), &PY_TYPE_DEF(OnBoardAntennaInterSatellitesPhaseModifier), module, "OnBoardAntennaInterSatellitesPhaseModifier", 0);
          }

          void t_OnBoardAntennaInterSatellitesPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesPhaseModifier), "class_", make_descriptor(OnBoardAntennaInterSatellitesPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesPhaseModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaInterSatellitesPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaInterSatellitesPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaInterSatellitesPhaseModifier::wrap_Object(OnBoardAntennaInterSatellitesPhaseModifier(((t_OnBoardAntennaInterSatellitesPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaInterSatellitesPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaInterSatellitesPhaseModifier_init_(t_OnBoardAntennaInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            OnBoardAntennaInterSatellitesPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OnBoardAntennaInterSatellitesPhaseModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_getParametersDrivers(t_OnBoardAntennaInterSatellitesPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_OnBoardAntennaInterSatellitesPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_get__parametersDrivers(t_OnBoardAntennaInterSatellitesPhaseModifier *self, void *data)
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
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *WeightedEvaluation::class$ = NULL;
        jmethodID *WeightedEvaluation::mids$ = NULL;
        bool WeightedEvaluation::live$ = false;

        jclass WeightedEvaluation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/WeightedEvaluation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_evaluate_b561c6892e9976f8] = env->getMethodID(cls, "evaluate", "([D[D)D");
            mids$[mid_evaluate_2634be61548fc62b] = env->getMethodID(cls, "evaluate", "([D[DII)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble WeightedEvaluation::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_b561c6892e9976f8], a0.this$, a1.this$);
        }

        jdouble WeightedEvaluation::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_2634be61548fc62b], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_WeightedEvaluation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WeightedEvaluation_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WeightedEvaluation_evaluate(t_WeightedEvaluation *self, PyObject *args);

        static PyMethodDef t_WeightedEvaluation__methods_[] = {
          DECLARE_METHOD(t_WeightedEvaluation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WeightedEvaluation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WeightedEvaluation, evaluate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(WeightedEvaluation)[] = {
          { Py_tp_methods, t_WeightedEvaluation__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(WeightedEvaluation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(WeightedEvaluation, t_WeightedEvaluation, WeightedEvaluation);

        void t_WeightedEvaluation::install(PyObject *module)
        {
          installType(&PY_TYPE(WeightedEvaluation), &PY_TYPE_DEF(WeightedEvaluation), module, "WeightedEvaluation", 0);
        }

        void t_WeightedEvaluation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedEvaluation), "class_", make_descriptor(WeightedEvaluation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedEvaluation), "wrapfn_", make_descriptor(t_WeightedEvaluation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WeightedEvaluation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_WeightedEvaluation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, WeightedEvaluation::initializeClass, 1)))
            return NULL;
          return t_WeightedEvaluation::wrap_Object(WeightedEvaluation(((t_WeightedEvaluation *) arg)->object.this$));
        }
        static PyObject *t_WeightedEvaluation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, WeightedEvaluation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_WeightedEvaluation_evaluate(t_WeightedEvaluation *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.evaluate(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 4:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jint a2;
              jint a3;
              jdouble result;

              if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "evaluate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AbstractRelativisticJ2ClockModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AbstractRelativisticJ2ClockModifier::class$ = NULL;
          jmethodID *AbstractRelativisticJ2ClockModifier::mids$ = NULL;
          bool AbstractRelativisticJ2ClockModifier::live$ = false;

          jclass AbstractRelativisticJ2ClockModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AbstractRelativisticJ2ClockModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_relativisticJ2Correction_b358632edcce3ae8] = env->getMethodID(cls, "relativisticJ2Correction", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractRelativisticJ2ClockModifier::AbstractRelativisticJ2ClockModifier(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}
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
          static PyObject *t_AbstractRelativisticJ2ClockModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractRelativisticJ2ClockModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractRelativisticJ2ClockModifier_init_(t_AbstractRelativisticJ2ClockModifier *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_AbstractRelativisticJ2ClockModifier__methods_[] = {
            DECLARE_METHOD(t_AbstractRelativisticJ2ClockModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractRelativisticJ2ClockModifier, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractRelativisticJ2ClockModifier)[] = {
            { Py_tp_methods, t_AbstractRelativisticJ2ClockModifier__methods_ },
            { Py_tp_init, (void *) t_AbstractRelativisticJ2ClockModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractRelativisticJ2ClockModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractRelativisticJ2ClockModifier, t_AbstractRelativisticJ2ClockModifier, AbstractRelativisticJ2ClockModifier);

          void t_AbstractRelativisticJ2ClockModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractRelativisticJ2ClockModifier), &PY_TYPE_DEF(AbstractRelativisticJ2ClockModifier), module, "AbstractRelativisticJ2ClockModifier", 0);
          }

          void t_AbstractRelativisticJ2ClockModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticJ2ClockModifier), "class_", make_descriptor(AbstractRelativisticJ2ClockModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticJ2ClockModifier), "wrapfn_", make_descriptor(t_AbstractRelativisticJ2ClockModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticJ2ClockModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractRelativisticJ2ClockModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractRelativisticJ2ClockModifier::initializeClass, 1)))
              return NULL;
            return t_AbstractRelativisticJ2ClockModifier::wrap_Object(AbstractRelativisticJ2ClockModifier(((t_AbstractRelativisticJ2ClockModifier *) arg)->object.this$));
          }
          static PyObject *t_AbstractRelativisticJ2ClockModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractRelativisticJ2ClockModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractRelativisticJ2ClockModifier_init_(t_AbstractRelativisticJ2ClockModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            AbstractRelativisticJ2ClockModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = AbstractRelativisticJ2ClockModifier(a0, a1, a2));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData.h"
#include "org/orekit/gnss/metric/messages/common/OrbitCorrection.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmCombinedCorrectionData::class$ = NULL;
              jmethodID *RtcmCombinedCorrectionData::mids$ = NULL;
              bool RtcmCombinedCorrectionData::live$ = false;

              jclass RtcmCombinedCorrectionData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmCombinedCorrectionData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getClockCorrection_ac204103acb34678] = env->getMethodID(cls, "getClockCorrection", "()Lorg/orekit/gnss/metric/messages/common/ClockCorrection;");
                  mids$[mid_getGnssIod_570ce0828f81a2c1] = env->getMethodID(cls, "getGnssIod", "()I");
                  mids$[mid_getOrbitCorrection_ed0d27aa2377afa2] = env->getMethodID(cls, "getOrbitCorrection", "()Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;");
                  mids$[mid_setClockCorrection_b67ff9100e1cd031] = env->getMethodID(cls, "setClockCorrection", "(Lorg/orekit/gnss/metric/messages/common/ClockCorrection;)V");
                  mids$[mid_setGnssIod_99803b0791f320ff] = env->getMethodID(cls, "setGnssIod", "(I)V");
                  mids$[mid_setOrbitCorrection_4d608774f859b10b] = env->getMethodID(cls, "setOrbitCorrection", "(Lorg/orekit/gnss/metric/messages/common/OrbitCorrection;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmCombinedCorrectionData::RtcmCombinedCorrectionData() : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              ::org::orekit::gnss::metric::messages::common::ClockCorrection RtcmCombinedCorrectionData::getClockCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::ClockCorrection(env->callObjectMethod(this$, mids$[mid_getClockCorrection_ac204103acb34678]));
              }

              jint RtcmCombinedCorrectionData::getGnssIod() const
              {
                return env->callIntMethod(this$, mids$[mid_getGnssIod_570ce0828f81a2c1]);
              }

              ::org::orekit::gnss::metric::messages::common::OrbitCorrection RtcmCombinedCorrectionData::getOrbitCorrection() const
              {
                return ::org::orekit::gnss::metric::messages::common::OrbitCorrection(env->callObjectMethod(this$, mids$[mid_getOrbitCorrection_ed0d27aa2377afa2]));
              }

              void RtcmCombinedCorrectionData::setClockCorrection(const ::org::orekit::gnss::metric::messages::common::ClockCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setClockCorrection_b67ff9100e1cd031], a0.this$);
              }

              void RtcmCombinedCorrectionData::setGnssIod(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setGnssIod_99803b0791f320ff], a0);
              }

              void RtcmCombinedCorrectionData::setOrbitCorrection(const ::org::orekit::gnss::metric::messages::common::OrbitCorrection & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setOrbitCorrection_4d608774f859b10b], a0.this$);
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
              static PyObject *t_RtcmCombinedCorrectionData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCombinedCorrectionData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmCombinedCorrectionData_init_(t_RtcmCombinedCorrectionData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmCombinedCorrectionData_getClockCorrection(t_RtcmCombinedCorrectionData *self);
              static PyObject *t_RtcmCombinedCorrectionData_getGnssIod(t_RtcmCombinedCorrectionData *self);
              static PyObject *t_RtcmCombinedCorrectionData_getOrbitCorrection(t_RtcmCombinedCorrectionData *self);
              static PyObject *t_RtcmCombinedCorrectionData_setClockCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmCombinedCorrectionData_setGnssIod(t_RtcmCombinedCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmCombinedCorrectionData_setOrbitCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmCombinedCorrectionData_get__clockCorrection(t_RtcmCombinedCorrectionData *self, void *data);
              static int t_RtcmCombinedCorrectionData_set__clockCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCombinedCorrectionData_get__gnssIod(t_RtcmCombinedCorrectionData *self, void *data);
              static int t_RtcmCombinedCorrectionData_set__gnssIod(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data);
              static PyObject *t_RtcmCombinedCorrectionData_get__orbitCorrection(t_RtcmCombinedCorrectionData *self, void *data);
              static int t_RtcmCombinedCorrectionData_set__orbitCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmCombinedCorrectionData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmCombinedCorrectionData, clockCorrection),
                DECLARE_GETSET_FIELD(t_RtcmCombinedCorrectionData, gnssIod),
                DECLARE_GETSET_FIELD(t_RtcmCombinedCorrectionData, orbitCorrection),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmCombinedCorrectionData__methods_[] = {
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, getClockCorrection, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, getGnssIod, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, getOrbitCorrection, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, setClockCorrection, METH_O),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, setGnssIod, METH_O),
                DECLARE_METHOD(t_RtcmCombinedCorrectionData, setOrbitCorrection, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmCombinedCorrectionData)[] = {
                { Py_tp_methods, t_RtcmCombinedCorrectionData__methods_ },
                { Py_tp_init, (void *) t_RtcmCombinedCorrectionData_init_ },
                { Py_tp_getset, t_RtcmCombinedCorrectionData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmCombinedCorrectionData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionData),
                NULL
              };

              DEFINE_TYPE(RtcmCombinedCorrectionData, t_RtcmCombinedCorrectionData, RtcmCombinedCorrectionData);

              void t_RtcmCombinedCorrectionData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmCombinedCorrectionData), &PY_TYPE_DEF(RtcmCombinedCorrectionData), module, "RtcmCombinedCorrectionData", 0);
              }

              void t_RtcmCombinedCorrectionData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCombinedCorrectionData), "class_", make_descriptor(RtcmCombinedCorrectionData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCombinedCorrectionData), "wrapfn_", make_descriptor(t_RtcmCombinedCorrectionData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCombinedCorrectionData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmCombinedCorrectionData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmCombinedCorrectionData::initializeClass, 1)))
                  return NULL;
                return t_RtcmCombinedCorrectionData::wrap_Object(RtcmCombinedCorrectionData(((t_RtcmCombinedCorrectionData *) arg)->object.this$));
              }
              static PyObject *t_RtcmCombinedCorrectionData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmCombinedCorrectionData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmCombinedCorrectionData_init_(t_RtcmCombinedCorrectionData *self, PyObject *args, PyObject *kwds)
              {
                RtcmCombinedCorrectionData object((jobject) NULL);

                INT_CALL(object = RtcmCombinedCorrectionData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmCombinedCorrectionData_getClockCorrection(t_RtcmCombinedCorrectionData *self)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(result);
              }

              static PyObject *t_RtcmCombinedCorrectionData_getGnssIod(t_RtcmCombinedCorrectionData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getGnssIod());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCombinedCorrectionData_getOrbitCorrection(t_RtcmCombinedCorrectionData *self)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection result((jobject) NULL);
                OBJ_CALL(result = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(result);
              }

              static PyObject *t_RtcmCombinedCorrectionData_setClockCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setClockCorrection(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setClockCorrection", arg);
                return NULL;
              }

              static PyObject *t_RtcmCombinedCorrectionData_setGnssIod(t_RtcmCombinedCorrectionData *self, PyObject *arg)
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

              static PyObject *t_RtcmCombinedCorrectionData_setOrbitCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg)
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

              static PyObject *t_RtcmCombinedCorrectionData_get__clockCorrection(t_RtcmCombinedCorrectionData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getClockCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_ClockCorrection::wrap_Object(value);
              }
              static int t_RtcmCombinedCorrectionData_set__clockCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::gnss::metric::messages::common::ClockCorrection value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::gnss::metric::messages::common::ClockCorrection::initializeClass, &value))
                  {
                    INT_CALL(self->object.setClockCorrection(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "clockCorrection", arg);
                return -1;
              }

              static PyObject *t_RtcmCombinedCorrectionData_get__gnssIod(t_RtcmCombinedCorrectionData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getGnssIod());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCombinedCorrectionData_set__gnssIod(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data)
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

              static PyObject *t_RtcmCombinedCorrectionData_get__orbitCorrection(t_RtcmCombinedCorrectionData *self, void *data)
              {
                ::org::orekit::gnss::metric::messages::common::OrbitCorrection value((jobject) NULL);
                OBJ_CALL(value = self->object.getOrbitCorrection());
                return ::org::orekit::gnss::metric::messages::common::t_OrbitCorrection::wrap_Object(value);
              }
              static int t_RtcmCombinedCorrectionData_set__orbitCorrection(t_RtcmCombinedCorrectionData *self, PyObject *arg, void *data)
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
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *FieldLine::class$ = NULL;
          jmethodID *FieldLine::mids$ = NULL;
          bool FieldLine::live$ = false;

          jclass FieldLine::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/FieldLine");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_23eb1e83466508cd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;D)V");
              mids$[mid_closestPoint_465816f33f087bba] = env->getMethodID(cls, "closestPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_contains_19ce44a30ac2c75e] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Z");
              mids$[mid_contains_ab4ed00ccf0defd6] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Z");
              mids$[mid_distance_4d5c9a83dec064bc] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_11b158fbf85bdc54] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_2f5dcdf943d50d31] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAbscissa_11b158fbf85bdc54] = env->getMethodID(cls, "getAbscissa", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAbscissa_2f5dcdf943d50d31] = env->getMethodID(cls, "getAbscissa", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDirection_716f50c86ffc8da7] = env->getMethodID(cls, "getDirection", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getOrigin_716f50c86ffc8da7] = env->getMethodID(cls, "getOrigin", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getTolerance_dff5885c2c873297] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_intersection_465816f33f087bba] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_isSimilarTo_e14dd382f7b52011] = env->getMethodID(cls, "isSimilarTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Z");
              mids$[mid_pointAt_3e101a58a2527fdf] = env->getMethodID(cls, "pointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_pointAt_e0e563985265c470] = env->getMethodID(cls, "pointAt", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_reset_67d015490dd313e3] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_revert_8bd95f1b4afb6092] = env->getMethodID(cls, "revert", "()Lorg/hipparchus/geometry/euclidean/threed/FieldLine;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldLine::FieldLine(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_23eb1e83466508cd, a0.this$, a1.this$, a2)) {}

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::closestPoint(const FieldLine & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_closestPoint_465816f33f087bba], a0.this$));
          }

          jboolean FieldLine::contains(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_19ce44a30ac2c75e], a0.this$);
          }

          jboolean FieldLine::contains(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_ab4ed00ccf0defd6], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::distance(const FieldLine & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_4d5c9a83dec064bc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::distance(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_11b158fbf85bdc54], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_2f5dcdf943d50d31], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::getAbscissa(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAbscissa_11b158fbf85bdc54], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::getAbscissa(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAbscissa_2f5dcdf943d50d31], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::getDirection() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getDirection_716f50c86ffc8da7]));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::getOrigin() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getOrigin_716f50c86ffc8da7]));
          }

          jdouble FieldLine::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_dff5885c2c873297]);
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::intersection(const FieldLine & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_intersection_465816f33f087bba], a0.this$));
          }

          jboolean FieldLine::isSimilarTo(const FieldLine & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimilarTo_e14dd382f7b52011], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::pointAt(jdouble a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_pointAt_3e101a58a2527fdf], a0));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::pointAt(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_pointAt_e0e563985265c470], a0.this$));
          }

          void FieldLine::reset(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_67d015490dd313e3], a0.this$, a1.this$);
          }

          FieldLine FieldLine::revert() const
          {
            return FieldLine(env->callObjectMethod(this$, mids$[mid_revert_8bd95f1b4afb6092]));
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
        namespace threed {
          static PyObject *t_FieldLine_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLine_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLine_of_(t_FieldLine *self, PyObject *args);
          static int t_FieldLine_init_(t_FieldLine *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldLine_closestPoint(t_FieldLine *self, PyObject *arg);
          static PyObject *t_FieldLine_contains(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_distance(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_getAbscissa(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_getDirection(t_FieldLine *self);
          static PyObject *t_FieldLine_getOrigin(t_FieldLine *self);
          static PyObject *t_FieldLine_getTolerance(t_FieldLine *self);
          static PyObject *t_FieldLine_intersection(t_FieldLine *self, PyObject *arg);
          static PyObject *t_FieldLine_isSimilarTo(t_FieldLine *self, PyObject *arg);
          static PyObject *t_FieldLine_pointAt(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_reset(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_revert(t_FieldLine *self);
          static PyObject *t_FieldLine_get__direction(t_FieldLine *self, void *data);
          static PyObject *t_FieldLine_get__origin(t_FieldLine *self, void *data);
          static PyObject *t_FieldLine_get__tolerance(t_FieldLine *self, void *data);
          static PyObject *t_FieldLine_get__parameters_(t_FieldLine *self, void *data);
          static PyGetSetDef t_FieldLine__fields_[] = {
            DECLARE_GET_FIELD(t_FieldLine, direction),
            DECLARE_GET_FIELD(t_FieldLine, origin),
            DECLARE_GET_FIELD(t_FieldLine, tolerance),
            DECLARE_GET_FIELD(t_FieldLine, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldLine__methods_[] = {
            DECLARE_METHOD(t_FieldLine, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLine, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLine, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, closestPoint, METH_O),
            DECLARE_METHOD(t_FieldLine, contains, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, distance, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, getAbscissa, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, getDirection, METH_NOARGS),
            DECLARE_METHOD(t_FieldLine, getOrigin, METH_NOARGS),
            DECLARE_METHOD(t_FieldLine, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_FieldLine, intersection, METH_O),
            DECLARE_METHOD(t_FieldLine, isSimilarTo, METH_O),
            DECLARE_METHOD(t_FieldLine, pointAt, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, reset, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, revert, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldLine)[] = {
            { Py_tp_methods, t_FieldLine__methods_ },
            { Py_tp_init, (void *) t_FieldLine_init_ },
            { Py_tp_getset, t_FieldLine__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldLine)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldLine, t_FieldLine, FieldLine);
          PyObject *t_FieldLine::wrap_Object(const FieldLine& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLine::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLine *self = (t_FieldLine *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldLine::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLine::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLine *self = (t_FieldLine *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldLine::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldLine), &PY_TYPE_DEF(FieldLine), module, "FieldLine", 0);
          }

          void t_FieldLine::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLine), "class_", make_descriptor(FieldLine::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLine), "wrapfn_", make_descriptor(t_FieldLine::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLine), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldLine_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldLine::initializeClass, 1)))
              return NULL;
            return t_FieldLine::wrap_Object(FieldLine(((t_FieldLine *) arg)->object.this$));
          }
          static PyObject *t_FieldLine_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldLine::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldLine_of_(t_FieldLine *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldLine_init_(t_FieldLine *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldLine object((jobject) NULL);

            if (!parseArgs(args, "KKD", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
            {
              INT_CALL(object = FieldLine(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldLine_closestPoint(t_FieldLine *self, PyObject *arg)
          {
            FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", FieldLine::initializeClass, &a0, &p0, t_FieldLine::parameters_))
            {
              OBJ_CALL(result = self->object.closestPoint(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "closestPoint", arg);
            return NULL;
          }

          static PyObject *t_FieldLine_contains(t_FieldLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                jboolean result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.contains(a0));
                  Py_RETURN_BOOL(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.contains(a0));
                  Py_RETURN_BOOL(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "contains", args);
            return NULL;
          }

          static PyObject *t_FieldLine_distance(t_FieldLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldLine a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldLine::initializeClass, &a0, &p0, t_FieldLine::parameters_))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance", args);
            return NULL;
          }

          static PyObject *t_FieldLine_getAbscissa(t_FieldLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.getAbscissa(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getAbscissa(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getAbscissa", args);
            return NULL;
          }

          static PyObject *t_FieldLine_getDirection(t_FieldLine *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldLine_getOrigin(t_FieldLine *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldLine_getTolerance(t_FieldLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_FieldLine_intersection(t_FieldLine *self, PyObject *arg)
          {
            FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", FieldLine::initializeClass, &a0, &p0, t_FieldLine::parameters_))
            {
              OBJ_CALL(result = self->object.intersection(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", arg);
            return NULL;
          }

          static PyObject *t_FieldLine_isSimilarTo(t_FieldLine *self, PyObject *arg)
          {
            FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", FieldLine::initializeClass, &a0, &p0, t_FieldLine::parameters_))
            {
              OBJ_CALL(result = self->object.isSimilarTo(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isSimilarTo", arg);
            return NULL;
          }

          static PyObject *t_FieldLine_pointAt(t_FieldLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.pointAt(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pointAt(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pointAt", args);
            return NULL;
          }

          static PyObject *t_FieldLine_reset(t_FieldLine *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(self->object.reset(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "reset", args);
            return NULL;
          }

          static PyObject *t_FieldLine_revert(t_FieldLine *self)
          {
            FieldLine result((jobject) NULL);
            OBJ_CALL(result = self->object.revert());
            return t_FieldLine::wrap_Object(result, self->parameters[0]);
          }
          static PyObject *t_FieldLine_get__parameters_(t_FieldLine *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldLine_get__direction(t_FieldLine *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
          }

          static PyObject *t_FieldLine_get__origin(t_FieldLine *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
          }

          static PyObject *t_FieldLine_get__tolerance(t_FieldLine *self, void *data)
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
#include "org/hipparchus/linear/CholeskyDecomposition.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *CholeskyDecomposition::class$ = NULL;
      jmethodID *CholeskyDecomposition::mids$ = NULL;
      bool CholeskyDecomposition::live$ = false;
      jdouble CholeskyDecomposition::DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD = (jdouble) 0;
      jdouble CholeskyDecomposition::DEFAULT_RELATIVE_SYMMETRY_THRESHOLD = (jdouble) 0;

      jclass CholeskyDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/CholeskyDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_c67473bd6cfaa69b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_85cc023ddc8c0edf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DD)V");
          mids$[mid_getDeterminant_dff5885c2c873297] = env->getMethodID(cls, "getDeterminant", "()D");
          mids$[mid_getL_688b496048ff947b] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getLT_688b496048ff947b] = env->getMethodID(cls, "getLT", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getSolver_6b396ee5bc11943f] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD");
          DEFAULT_RELATIVE_SYMMETRY_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_RELATIVE_SYMMETRY_THRESHOLD");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CholeskyDecomposition::CholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c67473bd6cfaa69b, a0.this$)) {}

      CholeskyDecomposition::CholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_85cc023ddc8c0edf, a0.this$, a1, a2)) {}

      jdouble CholeskyDecomposition::getDeterminant() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDeterminant_dff5885c2c873297]);
      }

      ::org::hipparchus::linear::RealMatrix CholeskyDecomposition::getL() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getL_688b496048ff947b]));
      }

      ::org::hipparchus::linear::RealMatrix CholeskyDecomposition::getLT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getLT_688b496048ff947b]));
      }

      ::org::hipparchus::linear::DecompositionSolver CholeskyDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_6b396ee5bc11943f]));
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
      static PyObject *t_CholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CholeskyDecomposition_init_(t_CholeskyDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CholeskyDecomposition_getDeterminant(t_CholeskyDecomposition *self);
      static PyObject *t_CholeskyDecomposition_getL(t_CholeskyDecomposition *self);
      static PyObject *t_CholeskyDecomposition_getLT(t_CholeskyDecomposition *self);
      static PyObject *t_CholeskyDecomposition_getSolver(t_CholeskyDecomposition *self);
      static PyObject *t_CholeskyDecomposition_get__determinant(t_CholeskyDecomposition *self, void *data);
      static PyObject *t_CholeskyDecomposition_get__l(t_CholeskyDecomposition *self, void *data);
      static PyObject *t_CholeskyDecomposition_get__lT(t_CholeskyDecomposition *self, void *data);
      static PyObject *t_CholeskyDecomposition_get__solver(t_CholeskyDecomposition *self, void *data);
      static PyGetSetDef t_CholeskyDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_CholeskyDecomposition, determinant),
        DECLARE_GET_FIELD(t_CholeskyDecomposition, l),
        DECLARE_GET_FIELD(t_CholeskyDecomposition, lT),
        DECLARE_GET_FIELD(t_CholeskyDecomposition, solver),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CholeskyDecomposition__methods_[] = {
        DECLARE_METHOD(t_CholeskyDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CholeskyDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CholeskyDecomposition, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_CholeskyDecomposition, getL, METH_NOARGS),
        DECLARE_METHOD(t_CholeskyDecomposition, getLT, METH_NOARGS),
        DECLARE_METHOD(t_CholeskyDecomposition, getSolver, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CholeskyDecomposition)[] = {
        { Py_tp_methods, t_CholeskyDecomposition__methods_ },
        { Py_tp_init, (void *) t_CholeskyDecomposition_init_ },
        { Py_tp_getset, t_CholeskyDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CholeskyDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CholeskyDecomposition, t_CholeskyDecomposition, CholeskyDecomposition);

      void t_CholeskyDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(CholeskyDecomposition), &PY_TYPE_DEF(CholeskyDecomposition), module, "CholeskyDecomposition", 0);
      }

      void t_CholeskyDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposition), "class_", make_descriptor(CholeskyDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposition), "wrapfn_", make_descriptor(t_CholeskyDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposition), "boxfn_", make_descriptor(boxObject));
        env->getClass(CholeskyDecomposition::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposition), "DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD", make_descriptor(CholeskyDecomposition::DEFAULT_ABSOLUTE_POSITIVITY_THRESHOLD));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CholeskyDecomposition), "DEFAULT_RELATIVE_SYMMETRY_THRESHOLD", make_descriptor(CholeskyDecomposition::DEFAULT_RELATIVE_SYMMETRY_THRESHOLD));
      }

      static PyObject *t_CholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CholeskyDecomposition::initializeClass, 1)))
          return NULL;
        return t_CholeskyDecomposition::wrap_Object(CholeskyDecomposition(((t_CholeskyDecomposition *) arg)->object.this$));
      }
      static PyObject *t_CholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CholeskyDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CholeskyDecomposition_init_(t_CholeskyDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            CholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = CholeskyDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            CholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kDD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CholeskyDecomposition(a0, a1, a2));
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

      static PyObject *t_CholeskyDecomposition_getDeterminant(t_CholeskyDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDeterminant());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CholeskyDecomposition_getL(t_CholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_CholeskyDecomposition_getLT(t_CholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getLT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_CholeskyDecomposition_getSolver(t_CholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_CholeskyDecomposition_get__determinant(t_CholeskyDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDeterminant());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CholeskyDecomposition_get__l(t_CholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_CholeskyDecomposition_get__lT(t_CholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getLT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_CholeskyDecomposition_get__solver(t_CholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/PythonSmoothFieldOfView.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PythonSmoothFieldOfView::class$ = NULL;
        jmethodID *PythonSmoothFieldOfView::mids$ = NULL;
        bool PythonSmoothFieldOfView::live$ = false;

        jclass PythonSmoothFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PythonSmoothFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_5da06482a46416aa] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_directionAt_9137bba253a33d9c] = env->getMethodID(cls, "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_offsetFromBoundary_92bc6ba59ebf6937] = env->getMethodID(cls, "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D");
            mids$[mid_projectToBoundary_d0fe714ef34714f7] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonSmoothFieldOfView::PythonSmoothFieldOfView(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::org::orekit::geometry::fov::SmoothFieldOfView(env->newObject(initializeClass, &mids$, mid_init$_5da06482a46416aa, a0.this$, a1.this$, a2)) {}

        void PythonSmoothFieldOfView::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonSmoothFieldOfView::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonSmoothFieldOfView::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        static PyObject *t_PythonSmoothFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonSmoothFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonSmoothFieldOfView_init_(t_PythonSmoothFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonSmoothFieldOfView_finalize(t_PythonSmoothFieldOfView *self);
        static PyObject *t_PythonSmoothFieldOfView_pythonExtension(t_PythonSmoothFieldOfView *self, PyObject *args);
        static jobject JNICALL t_PythonSmoothFieldOfView_directionAt0(JNIEnv *jenv, jobject jobj, jdouble a0);
        static jdouble JNICALL t_PythonSmoothFieldOfView_offsetFromBoundary1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
        static jobject JNICALL t_PythonSmoothFieldOfView_projectToBoundary2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonSmoothFieldOfView_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonSmoothFieldOfView_get__self(t_PythonSmoothFieldOfView *self, void *data);
        static PyGetSetDef t_PythonSmoothFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_PythonSmoothFieldOfView, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonSmoothFieldOfView__methods_[] = {
          DECLARE_METHOD(t_PythonSmoothFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSmoothFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSmoothFieldOfView, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonSmoothFieldOfView, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonSmoothFieldOfView)[] = {
          { Py_tp_methods, t_PythonSmoothFieldOfView__methods_ },
          { Py_tp_init, (void *) t_PythonSmoothFieldOfView_init_ },
          { Py_tp_getset, t_PythonSmoothFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonSmoothFieldOfView)[] = {
          &PY_TYPE_DEF(::org::orekit::geometry::fov::SmoothFieldOfView),
          NULL
        };

        DEFINE_TYPE(PythonSmoothFieldOfView, t_PythonSmoothFieldOfView, PythonSmoothFieldOfView);

        void t_PythonSmoothFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonSmoothFieldOfView), &PY_TYPE_DEF(PythonSmoothFieldOfView), module, "PythonSmoothFieldOfView", 1);
        }

        void t_PythonSmoothFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSmoothFieldOfView), "class_", make_descriptor(PythonSmoothFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSmoothFieldOfView), "wrapfn_", make_descriptor(t_PythonSmoothFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSmoothFieldOfView), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonSmoothFieldOfView::initializeClass);
          JNINativeMethod methods[] = {
            { "directionAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonSmoothFieldOfView_directionAt0 },
            { "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D", (void *) t_PythonSmoothFieldOfView_offsetFromBoundary1 },
            { "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonSmoothFieldOfView_projectToBoundary2 },
            { "pythonDecRef", "()V", (void *) t_PythonSmoothFieldOfView_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonSmoothFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonSmoothFieldOfView::initializeClass, 1)))
            return NULL;
          return t_PythonSmoothFieldOfView::wrap_Object(PythonSmoothFieldOfView(((t_PythonSmoothFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_PythonSmoothFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonSmoothFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonSmoothFieldOfView_init_(t_PythonSmoothFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jdouble a2;
          PythonSmoothFieldOfView object((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PythonSmoothFieldOfView(a0, a1, a2));
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

        static PyObject *t_PythonSmoothFieldOfView_finalize(t_PythonSmoothFieldOfView *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonSmoothFieldOfView_pythonExtension(t_PythonSmoothFieldOfView *self, PyObject *args)
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

        static jobject JNICALL t_PythonSmoothFieldOfView_directionAt0(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "directionAt", "d", (double) a0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("directionAt", result);
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

        static jdouble JNICALL t_PythonSmoothFieldOfView_offsetFromBoundary1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *o2 = ::org::orekit::propagation::events::t_VisibilityTrigger::wrap_Object(::org::orekit::propagation::events::VisibilityTrigger(a2));
          PyObject *result = PyObject_CallMethod(obj, "offsetFromBoundary", "OdO", o0, (double) a1, o2);
          Py_DECREF(o0);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("offsetFromBoundary", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonSmoothFieldOfView_projectToBoundary2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "projectToBoundary", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("projectToBoundary", result);
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

        static void JNICALL t_PythonSmoothFieldOfView_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonSmoothFieldOfView::mids$[PythonSmoothFieldOfView::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonSmoothFieldOfView_get__self(t_PythonSmoothFieldOfView *self, void *data)
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
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "org/hipparchus/linear/FieldMatrixChangingVisitor.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *Array2DRowFieldMatrix::class$ = NULL;
      jmethodID *Array2DRowFieldMatrix::mids$ = NULL;
      bool Array2DRowFieldMatrix::live$ = false;

      jclass Array2DRowFieldMatrix::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/Array2DRowFieldMatrix");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ae869f331beac5a3] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_b797e11157f10d97] = env->getMethodID(cls, "<init>", "([[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_484998d88974267b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;)V");
          mids$[mid_init$_989e9dce085ad65f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_13a1ea60b219a5a1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_init$_364b299f81fea78c] = env->getMethodID(cls, "<init>", "([[Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_init$_2e2152b7758a6adf] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;[[Lorg/hipparchus/FieldElement;Z)V");
          mids$[mid_init$_7dbd657fb2d34563] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
          mids$[mid_add_e3fbb99b5c5aabb2] = env->getMethodID(cls, "add", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
          mids$[mid_addToEntry_d302e4fbc652587d] = env->getMethodID(cls, "addToEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_copy_c992983685c753c5] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_createMatrix_5d35d650870a3dcb] = env->getMethodID(cls, "createMatrix", "(II)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getColumnDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getData_75f68840bec35355] = env->getMethodID(cls, "getData", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getDataRef_75f68840bec35355] = env->getMethodID(cls, "getDataRef", "()[[Lorg/hipparchus/FieldElement;");
          mids$[mid_getEntry_ef29faa67be274b8] = env->getMethodID(cls, "getEntry", "(II)Lorg/hipparchus/FieldElement;");
          mids$[mid_getRow_b21ddf58698298c0] = env->getMethodID(cls, "getRow", "(I)[Lorg/hipparchus/FieldElement;");
          mids$[mid_getRowDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_getSubMatrix_1033b0d2443c0299] = env->getMethodID(cls, "getSubMatrix", "(IIII)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiply_e3fbb99b5c5aabb2] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
          mids$[mid_multiplyEntry_d302e4fbc652587d] = env->getMethodID(cls, "multiplyEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_multiplyTransposed_f7f9a6567fa8b298] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_multiplyTransposed_1409f31dc074a11f] = env->getMethodID(cls, "multiplyTransposed", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_operate_91d3c6b4d1752243] = env->getMethodID(cls, "operate", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_preMultiply_91d3c6b4d1752243] = env->getMethodID(cls, "preMultiply", "([Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");
          mids$[mid_setEntry_d302e4fbc652587d] = env->getMethodID(cls, "setEntry", "(IILorg/hipparchus/FieldElement;)V");
          mids$[mid_setRow_baf264dbcc1722ae] = env->getMethodID(cls, "setRow", "(I[Lorg/hipparchus/FieldElement;)V");
          mids$[mid_setSubMatrix_e8cdaf624d2bb79a] = env->getMethodID(cls, "setSubMatrix", "([[Lorg/hipparchus/FieldElement;II)V");
          mids$[mid_subtract_e3fbb99b5c5aabb2] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
          mids$[mid_transposeMultiply_f7f9a6567fa8b298] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_transposeMultiply_1409f31dc074a11f] = env->getMethodID(cls, "transposeMultiply", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_walkInColumnOrder_624c889f4088e148] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_26ed18f15f4bb370] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_c4e69fc23be9a0d2] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInColumnOrder_7aa3cb5fccfebf0e] = env->getMethodID(cls, "walkInColumnOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_624c889f4088e148] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_26ed18f15f4bb370] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_c4e69fc23be9a0d2] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixChangingVisitor;IIII)Lorg/hipparchus/FieldElement;");
          mids$[mid_walkInRowOrder_7aa3cb5fccfebf0e] = env->getMethodID(cls, "walkInRowOrder", "(Lorg/hipparchus/linear/FieldMatrixPreservingVisitor;IIII)Lorg/hipparchus/FieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const JArray< ::org::hipparchus::FieldElement > & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_ae869f331beac5a3, a0.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_b797e11157f10d97, a0.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_484998d88974267b, a0.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0, const JArray< ::org::hipparchus::FieldElement > & a1) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_989e9dce085ad65f, a0.this$, a1.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0, const JArray< JArray< ::org::hipparchus::FieldElement > > & a1) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_13a1ea60b219a5a1, a0.this$, a1.this$)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jboolean a1) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_364b299f81fea78c, a0.this$, a1)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0, const JArray< JArray< ::org::hipparchus::FieldElement > > & a1, jboolean a2) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_2e2152b7758a6adf, a0.this$, a1.this$, a2)) {}

      Array2DRowFieldMatrix::Array2DRowFieldMatrix(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::org::hipparchus::linear::AbstractFieldMatrix(env->newObject(initializeClass, &mids$, mid_init$_7dbd657fb2d34563, a0.this$, a1, a2)) {}

      Array2DRowFieldMatrix Array2DRowFieldMatrix::add(const Array2DRowFieldMatrix & a0) const
      {
        return Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_add_e3fbb99b5c5aabb2], a0.this$));
      }

      void Array2DRowFieldMatrix::addToEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addToEntry_d302e4fbc652587d], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::copy() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_copy_c992983685c753c5]));
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::createMatrix(jint a0, jint a1) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_createMatrix_5d35d650870a3dcb], a0, a1));
      }

      jint Array2DRowFieldMatrix::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_570ce0828f81a2c1]);
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > Array2DRowFieldMatrix::getData() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getData_75f68840bec35355]));
      }

      JArray< JArray< ::org::hipparchus::FieldElement > > Array2DRowFieldMatrix::getDataRef() const
      {
        return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_getDataRef_75f68840bec35355]));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::getEntry(jint a0, jint a1) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getEntry_ef29faa67be274b8], a0, a1));
      }

      JArray< ::org::hipparchus::FieldElement > Array2DRowFieldMatrix::getRow(jint a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_getRow_b21ddf58698298c0], a0));
      }

      jint Array2DRowFieldMatrix::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_570ce0828f81a2c1]);
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::getSubMatrix(jint a0, jint a1, jint a2, jint a3) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getSubMatrix_1033b0d2443c0299], a0, a1, a2, a3));
      }

      Array2DRowFieldMatrix Array2DRowFieldMatrix::multiply(const Array2DRowFieldMatrix & a0) const
      {
        return Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_multiply_e3fbb99b5c5aabb2], a0.this$));
      }

      void Array2DRowFieldMatrix::multiplyEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_multiplyEntry_d302e4fbc652587d], a0, a1, a2.this$);
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::multiplyTransposed(const Array2DRowFieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_f7f9a6567fa8b298], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::multiplyTransposed(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_multiplyTransposed_1409f31dc074a11f], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > Array2DRowFieldMatrix::operate(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_operate_91d3c6b4d1752243], a0.this$));
      }

      JArray< ::org::hipparchus::FieldElement > Array2DRowFieldMatrix::preMultiply(const JArray< ::org::hipparchus::FieldElement > & a0) const
      {
        return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_preMultiply_91d3c6b4d1752243], a0.this$));
      }

      void Array2DRowFieldMatrix::setEntry(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setEntry_d302e4fbc652587d], a0, a1, a2.this$);
      }

      void Array2DRowFieldMatrix::setRow(jint a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setRow_baf264dbcc1722ae], a0, a1.this$);
      }

      void Array2DRowFieldMatrix::setSubMatrix(const JArray< JArray< ::org::hipparchus::FieldElement > > & a0, jint a1, jint a2) const
      {
        env->callVoidMethod(this$, mids$[mid_setSubMatrix_e8cdaf624d2bb79a], a0.this$, a1, a2);
      }

      Array2DRowFieldMatrix Array2DRowFieldMatrix::subtract(const Array2DRowFieldMatrix & a0) const
      {
        return Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_subtract_e3fbb99b5c5aabb2], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::transposeMultiply(const Array2DRowFieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_f7f9a6567fa8b298], a0.this$));
      }

      ::org::hipparchus::linear::FieldMatrix Array2DRowFieldMatrix::transposeMultiply(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_transposeMultiply_1409f31dc074a11f], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_624c889f4088e148], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_26ed18f15f4bb370], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_c4e69fc23be9a0d2], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInColumnOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInColumnOrder_7aa3cb5fccfebf0e], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_624c889f4088e148], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_26ed18f15f4bb370], a0.this$));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixChangingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_c4e69fc23be9a0d2], a0.this$, a1, a2, a3, a4));
      }

      ::org::hipparchus::FieldElement Array2DRowFieldMatrix::walkInRowOrder(const ::org::hipparchus::linear::FieldMatrixPreservingVisitor & a0, jint a1, jint a2, jint a3, jint a4) const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_walkInRowOrder_7aa3cb5fccfebf0e], a0.this$, a1, a2, a3, a4));
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
      static PyObject *t_Array2DRowFieldMatrix_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Array2DRowFieldMatrix_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Array2DRowFieldMatrix_of_(t_Array2DRowFieldMatrix *self, PyObject *args);
      static int t_Array2DRowFieldMatrix_init_(t_Array2DRowFieldMatrix *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Array2DRowFieldMatrix_add(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_addToEntry(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_copy(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_createMatrix(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getColumnDimension(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getData(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getDataRef(t_Array2DRowFieldMatrix *self);
      static PyObject *t_Array2DRowFieldMatrix_getEntry(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getRow(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getRowDimension(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_getSubMatrix(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_multiply(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_multiplyEntry(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_multiplyTransposed(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_operate(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_preMultiply(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_setEntry(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_setRow(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_setSubMatrix(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_subtract(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_transposeMultiply(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_walkInColumnOrder(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_walkInRowOrder(t_Array2DRowFieldMatrix *self, PyObject *args);
      static PyObject *t_Array2DRowFieldMatrix_get__columnDimension(t_Array2DRowFieldMatrix *self, void *data);
      static PyObject *t_Array2DRowFieldMatrix_get__data(t_Array2DRowFieldMatrix *self, void *data);
      static PyObject *t_Array2DRowFieldMatrix_get__dataRef(t_Array2DRowFieldMatrix *self, void *data);
      static PyObject *t_Array2DRowFieldMatrix_get__rowDimension(t_Array2DRowFieldMatrix *self, void *data);
      static PyObject *t_Array2DRowFieldMatrix_get__parameters_(t_Array2DRowFieldMatrix *self, void *data);
      static PyGetSetDef t_Array2DRowFieldMatrix__fields_[] = {
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, columnDimension),
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, data),
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, dataRef),
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, rowDimension),
        DECLARE_GET_FIELD(t_Array2DRowFieldMatrix, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Array2DRowFieldMatrix__methods_[] = {
        DECLARE_METHOD(t_Array2DRowFieldMatrix, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, of_, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, add, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, addToEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, copy, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, createMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getColumnDimension, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getData, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getDataRef, METH_NOARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getRow, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getRowDimension, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, getSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, multiplyEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, multiplyTransposed, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, operate, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, preMultiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, setEntry, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, setRow, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, setSubMatrix, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, transposeMultiply, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, walkInColumnOrder, METH_VARARGS),
        DECLARE_METHOD(t_Array2DRowFieldMatrix, walkInRowOrder, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Array2DRowFieldMatrix)[] = {
        { Py_tp_methods, t_Array2DRowFieldMatrix__methods_ },
        { Py_tp_init, (void *) t_Array2DRowFieldMatrix_init_ },
        { Py_tp_getset, t_Array2DRowFieldMatrix__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Array2DRowFieldMatrix)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::AbstractFieldMatrix),
        NULL
      };

      DEFINE_TYPE(Array2DRowFieldMatrix, t_Array2DRowFieldMatrix, Array2DRowFieldMatrix);
      PyObject *t_Array2DRowFieldMatrix::wrap_Object(const Array2DRowFieldMatrix& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Array2DRowFieldMatrix::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Array2DRowFieldMatrix *self = (t_Array2DRowFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Array2DRowFieldMatrix::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Array2DRowFieldMatrix::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Array2DRowFieldMatrix *self = (t_Array2DRowFieldMatrix *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Array2DRowFieldMatrix::install(PyObject *module)
      {
        installType(&PY_TYPE(Array2DRowFieldMatrix), &PY_TYPE_DEF(Array2DRowFieldMatrix), module, "Array2DRowFieldMatrix", 0);
      }

      void t_Array2DRowFieldMatrix::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowFieldMatrix), "class_", make_descriptor(Array2DRowFieldMatrix::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowFieldMatrix), "wrapfn_", make_descriptor(t_Array2DRowFieldMatrix::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Array2DRowFieldMatrix), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Array2DRowFieldMatrix_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Array2DRowFieldMatrix::initializeClass, 1)))
          return NULL;
        return t_Array2DRowFieldMatrix::wrap_Object(Array2DRowFieldMatrix(((t_Array2DRowFieldMatrix *) arg)->object.this$));
      }
      static PyObject *t_Array2DRowFieldMatrix_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Array2DRowFieldMatrix::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Array2DRowFieldMatrix_of_(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_Array2DRowFieldMatrix_init_(t_Array2DRowFieldMatrix *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
            PyTypeObject **p0;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
            PyTypeObject **p0;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< JArray< ::org::hipparchus::FieldElement > > a1((jobject) NULL);
            PyTypeObject **p1;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K[[K", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            JArray< JArray< ::org::hipparchus::FieldElement > > a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "[[KZ", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< JArray< ::org::hipparchus::FieldElement > > a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "K[[KZ", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            jint a2;
            Array2DRowFieldMatrix object((jobject) NULL);

            if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
            {
              INT_CALL(object = Array2DRowFieldMatrix(a0, a1, a2));
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

      static PyObject *t_Array2DRowFieldMatrix_add(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        Array2DRowFieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        Array2DRowFieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.add(a0));
          return t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "add", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_addToEntry(t_Array2DRowFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "addToEntry", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_copy(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.copy());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "copy", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_createMatrix(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.createMatrix(a0, a1));
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "createMatrix", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getColumnDimension(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getColumnDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getColumnDimension", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getData(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getData());
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getData", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getDataRef(t_Array2DRowFieldMatrix *self)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataRef());
        return JArray<jobject>(result.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowFieldMatrix_getEntry(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement result((jobject) NULL);

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.getEntry(a0, a1));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getEntry", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getRow(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "I", &a0))
        {
          OBJ_CALL(result = self->object.getRow(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getRow", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getRowDimension(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getRowDimension());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getRowDimension", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_getSubMatrix(t_Array2DRowFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "getSubMatrix", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_multiply(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        Array2DRowFieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        Array2DRowFieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.multiply(a0));
          return t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "multiply", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_multiplyEntry(t_Array2DRowFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "multiplyEntry", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_multiplyTransposed(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Array2DRowFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.multiplyTransposed(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "multiplyTransposed", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_operate(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "operate", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_preMultiply(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

        if (!parseArgs(args, "[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.preMultiply(a0));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "preMultiply", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_setEntry(t_Array2DRowFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "setEntry", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_setRow(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "I[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.setRow(a0, a1));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "setRow", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_setSubMatrix(t_Array2DRowFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "setSubMatrix", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_subtract(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        Array2DRowFieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        Array2DRowFieldMatrix result((jobject) NULL);

        if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.subtract(a0));
          return t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "subtract", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_transposeMultiply(t_Array2DRowFieldMatrix *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Array2DRowFieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", Array2DRowFieldMatrix::initializeClass, &a0, &p0, t_Array2DRowFieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.transposeMultiply(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "transposeMultiply", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_walkInColumnOrder(t_Array2DRowFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "walkInColumnOrder", args, 2);
      }

      static PyObject *t_Array2DRowFieldMatrix_walkInRowOrder(t_Array2DRowFieldMatrix *self, PyObject *args)
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

        return callSuper(PY_TYPE(Array2DRowFieldMatrix), (PyObject *) self, "walkInRowOrder", args, 2);
      }
      static PyObject *t_Array2DRowFieldMatrix_get__parameters_(t_Array2DRowFieldMatrix *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_Array2DRowFieldMatrix_get__columnDimension(t_Array2DRowFieldMatrix *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Array2DRowFieldMatrix_get__data(t_Array2DRowFieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowFieldMatrix_get__dataRef(t_Array2DRowFieldMatrix *self, void *data)
      {
        JArray< JArray< ::org::hipparchus::FieldElement > > value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataRef());
        return JArray<jobject>(value.this$).wrap(NULL);
      }

      static PyObject *t_Array2DRowFieldMatrix_get__rowDimension(t_Array2DRowFieldMatrix *self, void *data)
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
#include "org/hipparchus/analysis/polynomials/FieldPolynomialFunction.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace polynomials {

        ::java::lang::Class *FieldPolynomialFunction::class$ = NULL;
        jmethodID *FieldPolynomialFunction::mids$ = NULL;
        bool FieldPolynomialFunction::live$ = false;

        jclass FieldPolynomialFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/polynomials/FieldPolynomialFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_72479ee08453ef97] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_add_4aedbc69798b856a] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_antiDerivative_720ebd8423470629] = env->getMethodID(cls, "antiDerivative", "()Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_degree_570ce0828f81a2c1] = env->getMethodID(cls, "degree", "()I");
            mids$[mid_getCoefficients_226a0b2040b1d2e1] = env->getMethodID(cls, "getCoefficients", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getField_5b28be2d3632a5dc] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_integrate_50936f84b69df8dc] = env->getMethodID(cls, "integrate", "(DD)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_integrate_6746cc1cd9210d54] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_multiply_4aedbc69798b856a] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_negate_720ebd8423470629] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_polynomialDerivative_720ebd8423470629] = env->getMethodID(cls, "polynomialDerivative", "()Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_subtract_4aedbc69798b856a] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_value_616c74807d7607b4] = env->getMethodID(cls, "value", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_a4b1871f4d29e58b] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_evaluate_beb0e1dee0021bcf] = env->getStaticMethodID(cls, "evaluate", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_differentiate_401cf8a1b53fb909] = env->getStaticMethodID(cls, "differentiate", "([Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldPolynomialFunction::FieldPolynomialFunction(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_72479ee08453ef97, a0.this$)) {}

        FieldPolynomialFunction FieldPolynomialFunction::add(const FieldPolynomialFunction & a0) const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_add_4aedbc69798b856a], a0.this$));
        }

        FieldPolynomialFunction FieldPolynomialFunction::antiDerivative() const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_antiDerivative_720ebd8423470629]));
        }

        jint FieldPolynomialFunction::degree() const
        {
          return env->callIntMethod(this$, mids$[mid_degree_570ce0828f81a2c1]);
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldPolynomialFunction::getCoefficients() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getCoefficients_226a0b2040b1d2e1]));
        }

        ::org::hipparchus::Field FieldPolynomialFunction::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_5b28be2d3632a5dc]));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialFunction::integrate(jdouble a0, jdouble a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_50936f84b69df8dc], a0, a1));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialFunction::integrate(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_6746cc1cd9210d54], a0.this$, a1.this$));
        }

        FieldPolynomialFunction FieldPolynomialFunction::multiply(const FieldPolynomialFunction & a0) const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_multiply_4aedbc69798b856a], a0.this$));
        }

        FieldPolynomialFunction FieldPolynomialFunction::negate() const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_negate_720ebd8423470629]));
        }

        FieldPolynomialFunction FieldPolynomialFunction::polynomialDerivative() const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_polynomialDerivative_720ebd8423470629]));
        }

        FieldPolynomialFunction FieldPolynomialFunction::subtract(const FieldPolynomialFunction & a0) const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_subtract_4aedbc69798b856a], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialFunction::value(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_616c74807d7607b4], a0));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_a4b1871f4d29e58b], a0.this$));
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
      namespace polynomials {
        static PyObject *t_FieldPolynomialFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldPolynomialFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldPolynomialFunction_of_(t_FieldPolynomialFunction *self, PyObject *args);
        static int t_FieldPolynomialFunction_init_(t_FieldPolynomialFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldPolynomialFunction_add(t_FieldPolynomialFunction *self, PyObject *arg);
        static PyObject *t_FieldPolynomialFunction_antiDerivative(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_degree(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_getCoefficients(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_getField(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_integrate(t_FieldPolynomialFunction *self, PyObject *args);
        static PyObject *t_FieldPolynomialFunction_multiply(t_FieldPolynomialFunction *self, PyObject *arg);
        static PyObject *t_FieldPolynomialFunction_negate(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_polynomialDerivative(t_FieldPolynomialFunction *self);
        static PyObject *t_FieldPolynomialFunction_subtract(t_FieldPolynomialFunction *self, PyObject *arg);
        static PyObject *t_FieldPolynomialFunction_value(t_FieldPolynomialFunction *self, PyObject *args);
        static PyObject *t_FieldPolynomialFunction_get__coefficients(t_FieldPolynomialFunction *self, void *data);
        static PyObject *t_FieldPolynomialFunction_get__field(t_FieldPolynomialFunction *self, void *data);
        static PyObject *t_FieldPolynomialFunction_get__parameters_(t_FieldPolynomialFunction *self, void *data);
        static PyGetSetDef t_FieldPolynomialFunction__fields_[] = {
          DECLARE_GET_FIELD(t_FieldPolynomialFunction, coefficients),
          DECLARE_GET_FIELD(t_FieldPolynomialFunction, field),
          DECLARE_GET_FIELD(t_FieldPolynomialFunction, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldPolynomialFunction__methods_[] = {
          DECLARE_METHOD(t_FieldPolynomialFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldPolynomialFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldPolynomialFunction, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, add, METH_O),
          DECLARE_METHOD(t_FieldPolynomialFunction, antiDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, degree, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, getField, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, integrate, METH_VARARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, multiply, METH_O),
          DECLARE_METHOD(t_FieldPolynomialFunction, negate, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, polynomialDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldPolynomialFunction, subtract, METH_O),
          DECLARE_METHOD(t_FieldPolynomialFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldPolynomialFunction)[] = {
          { Py_tp_methods, t_FieldPolynomialFunction__methods_ },
          { Py_tp_init, (void *) t_FieldPolynomialFunction_init_ },
          { Py_tp_getset, t_FieldPolynomialFunction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldPolynomialFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldPolynomialFunction, t_FieldPolynomialFunction, FieldPolynomialFunction);
        PyObject *t_FieldPolynomialFunction::wrap_Object(const FieldPolynomialFunction& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldPolynomialFunction::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldPolynomialFunction *self = (t_FieldPolynomialFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldPolynomialFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldPolynomialFunction::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldPolynomialFunction *self = (t_FieldPolynomialFunction *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldPolynomialFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldPolynomialFunction), &PY_TYPE_DEF(FieldPolynomialFunction), module, "FieldPolynomialFunction", 0);
        }

        void t_FieldPolynomialFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialFunction), "class_", make_descriptor(FieldPolynomialFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialFunction), "wrapfn_", make_descriptor(t_FieldPolynomialFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldPolynomialFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldPolynomialFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldPolynomialFunction::initializeClass, 1)))
            return NULL;
          return t_FieldPolynomialFunction::wrap_Object(FieldPolynomialFunction(((t_FieldPolynomialFunction *) arg)->object.this$));
        }
        static PyObject *t_FieldPolynomialFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldPolynomialFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldPolynomialFunction_of_(t_FieldPolynomialFunction *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldPolynomialFunction_init_(t_FieldPolynomialFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          FieldPolynomialFunction object((jobject) NULL);

          if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = FieldPolynomialFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldPolynomialFunction_add(t_FieldPolynomialFunction *self, PyObject *arg)
        {
          FieldPolynomialFunction a0((jobject) NULL);
          PyTypeObject **p0;
          FieldPolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "K", FieldPolynomialFunction::initializeClass, &a0, &p0, t_FieldPolynomialFunction::parameters_))
          {
            OBJ_CALL(result = self->object.add(a0));
            return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "add", arg);
          return NULL;
        }

        static PyObject *t_FieldPolynomialFunction_antiDerivative(t_FieldPolynomialFunction *self)
        {
          FieldPolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.antiDerivative());
          return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialFunction_degree(t_FieldPolynomialFunction *self)
        {
          jint result;
          OBJ_CALL(result = self->object.degree());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldPolynomialFunction_getCoefficients(t_FieldPolynomialFunction *self)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldPolynomialFunction_getField(t_FieldPolynomialFunction *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialFunction_integrate(t_FieldPolynomialFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                OBJ_CALL(result = self->object.integrate(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.integrate(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_FieldPolynomialFunction_multiply(t_FieldPolynomialFunction *self, PyObject *arg)
        {
          FieldPolynomialFunction a0((jobject) NULL);
          PyTypeObject **p0;
          FieldPolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "K", FieldPolynomialFunction::initializeClass, &a0, &p0, t_FieldPolynomialFunction::parameters_))
          {
            OBJ_CALL(result = self->object.multiply(a0));
            return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", arg);
          return NULL;
        }

        static PyObject *t_FieldPolynomialFunction_negate(t_FieldPolynomialFunction *self)
        {
          FieldPolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialFunction_polynomialDerivative(t_FieldPolynomialFunction *self)
        {
          FieldPolynomialFunction result((jobject) NULL);
          OBJ_CALL(result = self->object.polynomialDerivative());
          return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldPolynomialFunction_subtract(t_FieldPolynomialFunction *self, PyObject *arg)
        {
          FieldPolynomialFunction a0((jobject) NULL);
          PyTypeObject **p0;
          FieldPolynomialFunction result((jobject) NULL);

          if (!parseArg(arg, "K", FieldPolynomialFunction::initializeClass, &a0, &p0, t_FieldPolynomialFunction::parameters_))
          {
            OBJ_CALL(result = self->object.subtract(a0));
            return t_FieldPolynomialFunction::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", arg);
          return NULL;
        }

        static PyObject *t_FieldPolynomialFunction_value(t_FieldPolynomialFunction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
        static PyObject *t_FieldPolynomialFunction_get__parameters_(t_FieldPolynomialFunction *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldPolynomialFunction_get__coefficients(t_FieldPolynomialFunction *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_FieldPolynomialFunction_get__field(t_FieldPolynomialFunction *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/orekit/frames/FieldStaticTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/StaticTransform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *FieldStaticTransform::class$ = NULL;
      jmethodID *FieldStaticTransform::mids$ = NULL;
      bool FieldStaticTransform::live$ = false;

      jclass FieldStaticTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/FieldStaticTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compose_e718ef15d9487dde] = env->getStaticMethodID(cls, "compose", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/FieldStaticTransform;Lorg/orekit/frames/FieldStaticTransform;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_compositeRotation_63d03d752aea77b3] = env->getStaticMethodID(cls, "compositeRotation", "(Lorg/orekit/frames/FieldStaticTransform;Lorg/orekit/frames/FieldStaticTransform;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_compositeTranslation_e78a51049c739df6] = env->getStaticMethodID(cls, "compositeTranslation", "(Lorg/orekit/frames/FieldStaticTransform;Lorg/orekit/frames/FieldStaticTransform;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_getIdentity_47701bd9c773f171] = env->getStaticMethodID(cls, "getIdentity", "(Lorg/hipparchus/Field;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getInverse_b4e9bd069b43219a] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_getRotation_1d339a2ee3a3323a] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getTranslation_716f50c86ffc8da7] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_of_ccf560e3672a239e] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_of_c4eae0c7e1e1b864] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_of_06614a63a9481c60] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/StaticTransform;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_of_1817b764fbb99071] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;)Lorg/orekit/frames/FieldStaticTransform;");
          mids$[mid_transformLine_98e8513ff63d3587] = env->getMethodID(cls, "transformLine", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Lorg/hipparchus/geometry/euclidean/threed/FieldLine;");
          mids$[mid_transformLine_1542cd68fd018a55] = env->getMethodID(cls, "transformLine", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/FieldLine;");
          mids$[mid_transformPosition_a173408e2b1f78b2] = env->getMethodID(cls, "transformPosition", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformPosition_7a9aa2e8b906f1a5] = env->getMethodID(cls, "transformPosition", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformVector_a173408e2b1f78b2] = env->getMethodID(cls, "transformVector", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_transformVector_7a9aa2e8b906f1a5] = env->getMethodID(cls, "transformVector", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldStaticTransform FieldStaticTransform::compose(const ::org::orekit::time::FieldAbsoluteDate & a0, const FieldStaticTransform & a1, const FieldStaticTransform & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_compose_e718ef15d9487dde], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldStaticTransform::compositeRotation(const FieldStaticTransform & a0, const FieldStaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callStaticObjectMethod(cls, mids$[mid_compositeRotation_63d03d752aea77b3], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::compositeTranslation(const FieldStaticTransform & a0, const FieldStaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callStaticObjectMethod(cls, mids$[mid_compositeTranslation_e78a51049c739df6], a0.this$, a1.this$));
      }

      FieldStaticTransform FieldStaticTransform::getIdentity(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_getIdentity_47701bd9c773f171], a0.this$));
      }

      FieldStaticTransform FieldStaticTransform::getInverse() const
      {
        return FieldStaticTransform(env->callObjectMethod(this$, mids$[mid_getInverse_b4e9bd069b43219a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FieldStaticTransform::getRotation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getRotation_1d339a2ee3a3323a]));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::getTranslation() const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getTranslation_716f50c86ffc8da7]));
      }

      FieldStaticTransform FieldStaticTransform::of(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_ccf560e3672a239e], a0.this$, a1.this$));
      }

      FieldStaticTransform FieldStaticTransform::of(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_c4eae0c7e1e1b864], a0.this$, a1.this$));
      }

      FieldStaticTransform FieldStaticTransform::of(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::StaticTransform & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_06614a63a9481c60], a0.this$, a1.this$));
      }

      FieldStaticTransform FieldStaticTransform::of(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldStaticTransform(env->callStaticObjectMethod(cls, mids$[mid_of_1817b764fbb99071], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldLine FieldStaticTransform::transformLine(const ::org::hipparchus::geometry::euclidean::threed::FieldLine & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldLine(env->callObjectMethod(this$, mids$[mid_transformLine_98e8513ff63d3587], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldLine FieldStaticTransform::transformLine(const ::org::hipparchus::geometry::euclidean::threed::Line & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldLine(env->callObjectMethod(this$, mids$[mid_transformLine_1542cd68fd018a55], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::transformPosition(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformPosition_a173408e2b1f78b2], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::transformPosition(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformPosition_7a9aa2e8b906f1a5], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::transformVector(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformVector_a173408e2b1f78b2], a0.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldStaticTransform::transformVector(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_transformVector_7a9aa2e8b906f1a5], a0.this$));
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
      static PyObject *t_FieldStaticTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldStaticTransform_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldStaticTransform_of_(t_FieldStaticTransform *self, PyObject *args);
      static PyObject *t_FieldStaticTransform_compose(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldStaticTransform_compositeRotation(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldStaticTransform_compositeTranslation(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldStaticTransform_getIdentity(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldStaticTransform_getInverse(t_FieldStaticTransform *self);
      static PyObject *t_FieldStaticTransform_getRotation(t_FieldStaticTransform *self);
      static PyObject *t_FieldStaticTransform_getTranslation(t_FieldStaticTransform *self);
      static PyObject *t_FieldStaticTransform_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldStaticTransform_transformLine(t_FieldStaticTransform *self, PyObject *args);
      static PyObject *t_FieldStaticTransform_transformPosition(t_FieldStaticTransform *self, PyObject *args);
      static PyObject *t_FieldStaticTransform_transformVector(t_FieldStaticTransform *self, PyObject *args);
      static PyObject *t_FieldStaticTransform_get__inverse(t_FieldStaticTransform *self, void *data);
      static PyObject *t_FieldStaticTransform_get__rotation(t_FieldStaticTransform *self, void *data);
      static PyObject *t_FieldStaticTransform_get__translation(t_FieldStaticTransform *self, void *data);
      static PyObject *t_FieldStaticTransform_get__parameters_(t_FieldStaticTransform *self, void *data);
      static PyGetSetDef t_FieldStaticTransform__fields_[] = {
        DECLARE_GET_FIELD(t_FieldStaticTransform, inverse),
        DECLARE_GET_FIELD(t_FieldStaticTransform, rotation),
        DECLARE_GET_FIELD(t_FieldStaticTransform, translation),
        DECLARE_GET_FIELD(t_FieldStaticTransform, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldStaticTransform__methods_[] = {
        DECLARE_METHOD(t_FieldStaticTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldStaticTransform, compose, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, compositeRotation, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, compositeTranslation, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, getIdentity, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_FieldStaticTransform, getRotation, METH_NOARGS),
        DECLARE_METHOD(t_FieldStaticTransform, getTranslation, METH_NOARGS),
        DECLARE_METHOD(t_FieldStaticTransform, of, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldStaticTransform, transformLine, METH_VARARGS),
        DECLARE_METHOD(t_FieldStaticTransform, transformPosition, METH_VARARGS),
        DECLARE_METHOD(t_FieldStaticTransform, transformVector, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldStaticTransform)[] = {
        { Py_tp_methods, t_FieldStaticTransform__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldStaticTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldStaticTransform)[] = {
        &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
        NULL
      };

      DEFINE_TYPE(FieldStaticTransform, t_FieldStaticTransform, FieldStaticTransform);
      PyObject *t_FieldStaticTransform::wrap_Object(const FieldStaticTransform& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldStaticTransform::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldStaticTransform *self = (t_FieldStaticTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldStaticTransform::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldStaticTransform::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldStaticTransform *self = (t_FieldStaticTransform *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldStaticTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldStaticTransform), &PY_TYPE_DEF(FieldStaticTransform), module, "FieldStaticTransform", 0);
      }

      void t_FieldStaticTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStaticTransform), "class_", make_descriptor(FieldStaticTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStaticTransform), "wrapfn_", make_descriptor(t_FieldStaticTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStaticTransform), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldStaticTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldStaticTransform::initializeClass, 1)))
          return NULL;
        return t_FieldStaticTransform::wrap_Object(FieldStaticTransform(((t_FieldStaticTransform *) arg)->object.this$));
      }
      static PyObject *t_FieldStaticTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldStaticTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldStaticTransform_of_(t_FieldStaticTransform *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldStaticTransform_compose(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        FieldStaticTransform a1((jobject) NULL);
        PyTypeObject **p1;
        FieldStaticTransform a2((jobject) NULL);
        PyTypeObject **p2;
        FieldStaticTransform result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, FieldStaticTransform::initializeClass, FieldStaticTransform::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, t_FieldStaticTransform::parameters_, &a2, &p2, t_FieldStaticTransform::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::compose(a0, a1, a2));
          return t_FieldStaticTransform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compose", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_compositeRotation(PyTypeObject *type, PyObject *args)
      {
        FieldStaticTransform a0((jobject) NULL);
        PyTypeObject **p0;
        FieldStaticTransform a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldStaticTransform::initializeClass, FieldStaticTransform::initializeClass, &a0, &p0, t_FieldStaticTransform::parameters_, &a1, &p1, t_FieldStaticTransform::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::compositeRotation(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compositeRotation", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_compositeTranslation(PyTypeObject *type, PyObject *args)
      {
        FieldStaticTransform a0((jobject) NULL);
        PyTypeObject **p0;
        FieldStaticTransform a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldStaticTransform::initializeClass, FieldStaticTransform::initializeClass, &a0, &p0, t_FieldStaticTransform::parameters_, &a1, &p1, t_FieldStaticTransform::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::compositeTranslation(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "compositeTranslation", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_getIdentity(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldStaticTransform result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::getIdentity(a0));
          return t_FieldStaticTransform::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getIdentity", arg);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_getInverse(t_FieldStaticTransform *self)
      {
        FieldStaticTransform result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return t_FieldStaticTransform::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldStaticTransform_getRotation(t_FieldStaticTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);
        OBJ_CALL(result = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldStaticTransform_getTranslation(t_FieldStaticTransform *self)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
        OBJ_CALL(result = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldStaticTransform_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a1((jobject) NULL);
            PyTypeObject **p1;
            FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::of(a0, a1));
              return t_FieldStaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::of(a0, a1));
              return t_FieldStaticTransform::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::StaticTransform a1((jobject) NULL);
            FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::StaticTransform::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::of(a0, a1));
              return t_FieldStaticTransform::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation a2((jobject) NULL);
            PyTypeObject **p2;
            FieldStaticTransform result((jobject) NULL);

            if (!parseArgs(args, "KKK", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2, &p2, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::FieldStaticTransform::of(a0, a1, a2));
              return t_FieldStaticTransform::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_transformLine(t_FieldStaticTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldLine result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldLine::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::parameters_))
            {
              OBJ_CALL(result = self->object.transformLine(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldLine result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformLine(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldLine::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformLine", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_transformPosition(t_FieldStaticTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.transformPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformPosition(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformPosition", args);
        return NULL;
      }

      static PyObject *t_FieldStaticTransform_transformVector(t_FieldStaticTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(result = self->object.transformVector(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.transformVector(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "transformVector", args);
        return NULL;
      }
      static PyObject *t_FieldStaticTransform_get__parameters_(t_FieldStaticTransform *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldStaticTransform_get__inverse(t_FieldStaticTransform *self, void *data)
      {
        FieldStaticTransform value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return t_FieldStaticTransform::wrap_Object(value);
      }

      static PyObject *t_FieldStaticTransform_get__rotation(t_FieldStaticTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
        OBJ_CALL(value = self->object.getRotation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(value);
      }

      static PyObject *t_FieldStaticTransform_get__translation(t_FieldStaticTransform *self, void *data)
      {
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
        OBJ_CALL(value = self->object.getTranslation());
        return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/BasicConstantThrustPropulsionModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *BasicConstantThrustPropulsionModel::class$ = NULL;
          jmethodID *BasicConstantThrustPropulsionModel::mids$ = NULL;
          bool BasicConstantThrustPropulsionModel::live$ = false;
          ::java::lang::String *BasicConstantThrustPropulsionModel::FLOW_RATE = NULL;
          jdouble BasicConstantThrustPropulsionModel::FLOW_RATE_SCALE = (jdouble) 0;
          ::java::lang::String *BasicConstantThrustPropulsionModel::THRUST = NULL;
          jdouble BasicConstantThrustPropulsionModel::THRUST_SCALE = (jdouble) 0;

          jclass BasicConstantThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/BasicConstantThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_06e1ed88b8b36bf6] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Ljava/lang/String;)V");
              mids$[mid_init$_bd301e65f74781e6] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
              mids$[mid_getFlowRate_dff5885c2c873297] = env->getMethodID(cls, "getFlowRate", "()D");
              mids$[mid_getFlowRate_9dc1ec0bcc0a9a29] = env->getMethodID(cls, "getFlowRate", "([D)D");
              mids$[mid_getFlowRate_f2dc4f0d2f87d390] = env->getMethodID(cls, "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_bf1d7732f1acb697] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_d52645e0d4c07563] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_36619a55dd67cb97] = env->getMethodID(cls, "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_3cf6594f36d3d60d] = env->getMethodID(cls, "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_24461752d0eea1e3] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              FLOW_RATE = new ::java::lang::String(env->getStaticObjectField(cls, "FLOW_RATE", "Ljava/lang/String;"));
              FLOW_RATE_SCALE = env->getStaticDoubleField(cls, "FLOW_RATE_SCALE");
              THRUST = new ::java::lang::String(env->getStaticObjectField(cls, "THRUST", "Ljava/lang/String;"));
              THRUST_SCALE = env->getStaticDoubleField(cls, "THRUST_SCALE");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BasicConstantThrustPropulsionModel::BasicConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::java::lang::String & a3) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(env->newObject(initializeClass, &mids$, mid_init$_06e1ed88b8b36bf6, a0, a1, a2.this$, a3.this$)) {}

          BasicConstantThrustPropulsionModel::BasicConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a3, const ::java::lang::String & a4) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(env->newObject(initializeClass, &mids$, mid_init$_bd301e65f74781e6, a0, a1, a2.this$, a3.this$, a4.this$)) {}

          jdouble BasicConstantThrustPropulsionModel::getFlowRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_dff5885c2c873297]);
          }

          jdouble BasicConstantThrustPropulsionModel::getFlowRate(const JArray< jdouble > & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_9dc1ec0bcc0a9a29], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement BasicConstantThrustPropulsionModel::getFlowRate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_f2dc4f0d2f87d390], a0.this$));
          }

          jdouble BasicConstantThrustPropulsionModel::getFlowRate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_bf1d7732f1acb697], a0.this$);
          }

          ::java::util::List BasicConstantThrustPropulsionModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D BasicConstantThrustPropulsionModel::getThrustVector() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_d52645e0d4c07563]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D BasicConstantThrustPropulsionModel::getThrustVector(const JArray< jdouble > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_36619a55dd67cb97], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D BasicConstantThrustPropulsionModel::getThrustVector(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_3cf6594f36d3d60d], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D BasicConstantThrustPropulsionModel::getThrustVector(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_24461752d0eea1e3], a0.this$));
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
        namespace propulsion {
          static PyObject *t_BasicConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BasicConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BasicConstantThrustPropulsionModel_init_(t_BasicConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BasicConstantThrustPropulsionModel_getFlowRate(t_BasicConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_BasicConstantThrustPropulsionModel_getParametersDrivers(t_BasicConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_BasicConstantThrustPropulsionModel_getThrustVector(t_BasicConstantThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_BasicConstantThrustPropulsionModel_get__flowRate(t_BasicConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_BasicConstantThrustPropulsionModel_get__parametersDrivers(t_BasicConstantThrustPropulsionModel *self, void *data);
          static PyObject *t_BasicConstantThrustPropulsionModel_get__thrustVector(t_BasicConstantThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_BasicConstantThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_BasicConstantThrustPropulsionModel, flowRate),
            DECLARE_GET_FIELD(t_BasicConstantThrustPropulsionModel, parametersDrivers),
            DECLARE_GET_FIELD(t_BasicConstantThrustPropulsionModel, thrustVector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BasicConstantThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, getParametersDrivers, METH_VARARGS),
            DECLARE_METHOD(t_BasicConstantThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BasicConstantThrustPropulsionModel)[] = {
            { Py_tp_methods, t_BasicConstantThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_BasicConstantThrustPropulsionModel_init_ },
            { Py_tp_getset, t_BasicConstantThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BasicConstantThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel),
            NULL
          };

          DEFINE_TYPE(BasicConstantThrustPropulsionModel, t_BasicConstantThrustPropulsionModel, BasicConstantThrustPropulsionModel);

          void t_BasicConstantThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(BasicConstantThrustPropulsionModel), &PY_TYPE_DEF(BasicConstantThrustPropulsionModel), module, "BasicConstantThrustPropulsionModel", 0);
          }

          void t_BasicConstantThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "class_", make_descriptor(BasicConstantThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "wrapfn_", make_descriptor(t_BasicConstantThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
            env->getClass(BasicConstantThrustPropulsionModel::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "FLOW_RATE", make_descriptor(j2p(*BasicConstantThrustPropulsionModel::FLOW_RATE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "FLOW_RATE_SCALE", make_descriptor(BasicConstantThrustPropulsionModel::FLOW_RATE_SCALE));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "THRUST", make_descriptor(j2p(*BasicConstantThrustPropulsionModel::THRUST)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BasicConstantThrustPropulsionModel), "THRUST_SCALE", make_descriptor(BasicConstantThrustPropulsionModel::THRUST_SCALE));
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BasicConstantThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_BasicConstantThrustPropulsionModel::wrap_Object(BasicConstantThrustPropulsionModel(((t_BasicConstantThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_BasicConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BasicConstantThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BasicConstantThrustPropulsionModel_init_(t_BasicConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::java::lang::String a3((jobject) NULL);
                BasicConstantThrustPropulsionModel object((jobject) NULL);

                if (!parseArgs(args, "DDks", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = BasicConstantThrustPropulsionModel(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                jdouble a0;
                jdouble a1;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                ::org::orekit::forces::maneuvers::Control3DVectorCostType a3((jobject) NULL);
                PyTypeObject **p3;
                ::java::lang::String a4((jobject) NULL);
                BasicConstantThrustPropulsionModel object((jobject) NULL);

                if (!parseArgs(args, "DDkKs", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a4))
                {
                  INT_CALL(object = BasicConstantThrustPropulsionModel(a0, a1, a2, a3, a4));
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

          static PyObject *t_BasicConstantThrustPropulsionModel_getFlowRate(t_BasicConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getFlowRate());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(BasicConstantThrustPropulsionModel), (PyObject *) self, "getFlowRate", args, 2);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_getParametersDrivers(t_BasicConstantThrustPropulsionModel *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            return callSuper(PY_TYPE(BasicConstantThrustPropulsionModel), (PyObject *) self, "getParametersDrivers", args, 2);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_getThrustVector(t_BasicConstantThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getThrustVector());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
              break;
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(BasicConstantThrustPropulsionModel), (PyObject *) self, "getThrustVector", args, 2);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_get__flowRate(t_BasicConstantThrustPropulsionModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFlowRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_get__parametersDrivers(t_BasicConstantThrustPropulsionModel *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_BasicConstantThrustPropulsionModel_get__thrustVector(t_BasicConstantThrustPropulsionModel *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getThrustVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *XmlTokenBuilder::class$ = NULL;
            jmethodID *XmlTokenBuilder::mids$ = NULL;
            bool XmlTokenBuilder::live$ = false;

            jclass XmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_buildTokens_e5e9154f880f1aad] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::java::util::List XmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_e5e9154f880f1aad], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
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
            static PyObject *t_XmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_XmlTokenBuilder_buildTokens(t_XmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_XmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_XmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_XmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(XmlTokenBuilder)[] = {
              { Py_tp_methods, t_XmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(XmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(XmlTokenBuilder, t_XmlTokenBuilder, XmlTokenBuilder);

            void t_XmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(XmlTokenBuilder), &PY_TYPE_DEF(XmlTokenBuilder), module, "XmlTokenBuilder", 0);
            }

            void t_XmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlTokenBuilder), "class_", make_descriptor(XmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlTokenBuilder), "wrapfn_", make_descriptor(t_XmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(XmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_XmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, XmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_XmlTokenBuilder::wrap_Object(XmlTokenBuilder(((t_XmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_XmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, XmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_XmlTokenBuilder_buildTokens(t_XmlTokenBuilder *self, PyObject *args)
            {
              jboolean a0;
              jboolean a1;
              ::java::lang::String a2((jobject) NULL);
              ::java::lang::String a3((jobject) NULL);
              ::java::util::Map a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::java::lang::String a6((jobject) NULL);
              ::java::util::List result((jobject) NULL);

              if (!parseArgs(args, "ZZssKIs", ::java::util::Map::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Map::parameters_, &a5, &a6))
              {
                OBJ_CALL(result = self->object.buildTokens(a0, a1, a2, a3, a4, a5, a6));
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(ParseToken));
              }

              PyErr_SetArgsError((PyObject *) self, "buildTokens", args);
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
#include "org/hipparchus/analysis/differentiation/UnivariateVectorFunctionDifferentiator.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/UnivariateVectorFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *UnivariateVectorFunctionDifferentiator::class$ = NULL;
        jmethodID *UnivariateVectorFunctionDifferentiator::mids$ = NULL;
        bool UnivariateVectorFunctionDifferentiator::live$ = false;

        jclass UnivariateVectorFunctionDifferentiator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/UnivariateVectorFunctionDifferentiator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_differentiate_e7252c9501d50f30] = env->getMethodID(cls, "differentiate", "(Lorg/hipparchus/analysis/UnivariateVectorFunction;)Lorg/hipparchus/analysis/differentiation/UnivariateDifferentiableVectorFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction UnivariateVectorFunctionDifferentiator::differentiate(const ::org::hipparchus::analysis::UnivariateVectorFunction & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction(env->callObjectMethod(this$, mids$[mid_differentiate_e7252c9501d50f30], a0.this$));
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
        static PyObject *t_UnivariateVectorFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateVectorFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateVectorFunctionDifferentiator_differentiate(t_UnivariateVectorFunctionDifferentiator *self, PyObject *arg);

        static PyMethodDef t_UnivariateVectorFunctionDifferentiator__methods_[] = {
          DECLARE_METHOD(t_UnivariateVectorFunctionDifferentiator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateVectorFunctionDifferentiator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateVectorFunctionDifferentiator, differentiate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateVectorFunctionDifferentiator)[] = {
          { Py_tp_methods, t_UnivariateVectorFunctionDifferentiator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateVectorFunctionDifferentiator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateVectorFunctionDifferentiator, t_UnivariateVectorFunctionDifferentiator, UnivariateVectorFunctionDifferentiator);

        void t_UnivariateVectorFunctionDifferentiator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateVectorFunctionDifferentiator), &PY_TYPE_DEF(UnivariateVectorFunctionDifferentiator), module, "UnivariateVectorFunctionDifferentiator", 0);
        }

        void t_UnivariateVectorFunctionDifferentiator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunctionDifferentiator), "class_", make_descriptor(UnivariateVectorFunctionDifferentiator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunctionDifferentiator), "wrapfn_", make_descriptor(t_UnivariateVectorFunctionDifferentiator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateVectorFunctionDifferentiator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateVectorFunctionDifferentiator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateVectorFunctionDifferentiator::initializeClass, 1)))
            return NULL;
          return t_UnivariateVectorFunctionDifferentiator::wrap_Object(UnivariateVectorFunctionDifferentiator(((t_UnivariateVectorFunctionDifferentiator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateVectorFunctionDifferentiator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateVectorFunctionDifferentiator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateVectorFunctionDifferentiator_differentiate(t_UnivariateVectorFunctionDifferentiator *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::UnivariateVectorFunction a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::UnivariateDifferentiableVectorFunction result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::analysis::UnivariateVectorFunction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.differentiate(a0));
            return ::org::hipparchus::analysis::differentiation::t_UnivariateDifferentiableVectorFunction::wrap_Object(result);
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
#include "org/orekit/forces/maneuvers/trigger/PythonAbstractManeuverTriggers.h"
#include "java/util/List.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonAbstractManeuverTriggers::class$ = NULL;
          jmethodID *PythonAbstractManeuverTriggers::mids$ = NULL;
          bool PythonAbstractManeuverTriggers::live$ = false;

          jclass PythonAbstractManeuverTriggers::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonAbstractManeuverTriggers");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getEventDetectors_20f6d2b462aaef4b] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_361313cd1a9c693a] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_isFiringOnInitialState_6501154ab0a356a8] = env->getMethodID(cls, "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractManeuverTriggers::PythonAbstractManeuverTriggers() : ::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonAbstractManeuverTriggers::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonAbstractManeuverTriggers::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonAbstractManeuverTriggers::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
        namespace trigger {
          static PyObject *t_PythonAbstractManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractManeuverTriggers_init_(t_PythonAbstractManeuverTriggers *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractManeuverTriggers_finalize(t_PythonAbstractManeuverTriggers *self);
          static PyObject *t_PythonAbstractManeuverTriggers_pythonExtension(t_PythonAbstractManeuverTriggers *self, PyObject *args);
          static jobject JNICALL t_PythonAbstractManeuverTriggers_getEventDetectors0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAbstractManeuverTriggers_getFieldEventDetectors1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractManeuverTriggers_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
          static jboolean JNICALL t_PythonAbstractManeuverTriggers_isFiringOnInitialState3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
          static void JNICALL t_PythonAbstractManeuverTriggers_pythonDecRef4(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractManeuverTriggers_get__self(t_PythonAbstractManeuverTriggers *self, void *data);
          static PyGetSetDef t_PythonAbstractManeuverTriggers__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractManeuverTriggers, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractManeuverTriggers__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractManeuverTriggers, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractManeuverTriggers, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractManeuverTriggers, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractManeuverTriggers, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractManeuverTriggers)[] = {
            { Py_tp_methods, t_PythonAbstractManeuverTriggers__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractManeuverTriggers_init_ },
            { Py_tp_getset, t_PythonAbstractManeuverTriggers__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractManeuverTriggers)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::AbstractManeuverTriggers),
            NULL
          };

          DEFINE_TYPE(PythonAbstractManeuverTriggers, t_PythonAbstractManeuverTriggers, PythonAbstractManeuverTriggers);

          void t_PythonAbstractManeuverTriggers::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractManeuverTriggers), &PY_TYPE_DEF(PythonAbstractManeuverTriggers), module, "PythonAbstractManeuverTriggers", 1);
          }

          void t_PythonAbstractManeuverTriggers::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractManeuverTriggers), "class_", make_descriptor(PythonAbstractManeuverTriggers::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractManeuverTriggers), "wrapfn_", make_descriptor(t_PythonAbstractManeuverTriggers::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractManeuverTriggers), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractManeuverTriggers::initializeClass);
            JNINativeMethod methods[] = {
              { "getEventDetectors", "()Ljava/util/stream/Stream;", (void *) t_PythonAbstractManeuverTriggers_getEventDetectors0 },
              { "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;", (void *) t_PythonAbstractManeuverTriggers_getFieldEventDetectors1 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAbstractManeuverTriggers_getParametersDrivers2 },
              { "isFiringOnInitialState", "(Lorg/orekit/propagation/SpacecraftState;Z)Z", (void *) t_PythonAbstractManeuverTriggers_isFiringOnInitialState3 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractManeuverTriggers_pythonDecRef4 },
            };
            env->registerNatives(cls, methods, 5);
          }

          static PyObject *t_PythonAbstractManeuverTriggers_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractManeuverTriggers::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractManeuverTriggers::wrap_Object(PythonAbstractManeuverTriggers(((t_PythonAbstractManeuverTriggers *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractManeuverTriggers_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractManeuverTriggers::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractManeuverTriggers_init_(t_PythonAbstractManeuverTriggers *self, PyObject *args, PyObject *kwds)
          {
            PythonAbstractManeuverTriggers object((jobject) NULL);

            INT_CALL(object = PythonAbstractManeuverTriggers());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractManeuverTriggers_finalize(t_PythonAbstractManeuverTriggers *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractManeuverTriggers_pythonExtension(t_PythonAbstractManeuverTriggers *self, PyObject *args)
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

          static jobject JNICALL t_PythonAbstractManeuverTriggers_getEventDetectors0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::stream::Stream value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getEventDetectors", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
            {
              throwTypeError("getEventDetectors", result);
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

          static jobject JNICALL t_PythonAbstractManeuverTriggers_getFieldEventDetectors1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::stream::Stream value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *result = PyObject_CallMethod(obj, "getFieldEventDetectors", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
            {
              throwTypeError("getFieldEventDetectors", result);
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

          static jobject JNICALL t_PythonAbstractManeuverTriggers_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_492808a339bfa35f]);
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

          static jboolean JNICALL t_PythonAbstractManeuverTriggers_isFiringOnInitialState3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
            PyObject *o1 = (a1 ? Py_True : Py_False);
            PyObject *result = PyObject_CallMethod(obj, "isFiringOnInitialState", "OO", o0, o1);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("isFiringOnInitialState", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static void JNICALL t_PythonAbstractManeuverTriggers_pythonDecRef4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractManeuverTriggers::mids$[PythonAbstractManeuverTriggers::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractManeuverTriggers_get__self(t_PythonAbstractManeuverTriggers *self, void *data)
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
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getSpacecraftClockAndDriftApplied_570ce0828f81a2c1] = env->getMethodID(cls, "getSpacecraftClockAndDriftApplied", "()I");
            mids$[mid_getStationClockAndDriftApplied_570ce0828f81a2c1] = env->getMethodID(cls, "getStationClockAndDriftApplied", "()I");
            mids$[mid_getStationOscDrift_dff5885c2c873297] = env->getMethodID(cls, "getStationOscDrift", "()D");
            mids$[mid_getStationUTCOffset_dff5885c2c873297] = env->getMethodID(cls, "getStationUTCOffset", "()D");
            mids$[mid_getTranspClkRefTime_dff5885c2c873297] = env->getMethodID(cls, "getTranspClkRefTime", "()D");
            mids$[mid_getTranspOscDrift_dff5885c2c873297] = env->getMethodID(cls, "getTranspOscDrift", "()D");
            mids$[mid_getTranspUTCOffset_dff5885c2c873297] = env->getMethodID(cls, "getTranspUTCOffset", "()D");
            mids$[mid_getTransponderId_11b109bd155ca898] = env->getMethodID(cls, "getTransponderId", "()Ljava/lang/String;");
            mids$[mid_isSpacecraftTimeSimplified_b108b35ef48e27bd] = env->getMethodID(cls, "isSpacecraftTimeSimplified", "()Z");
            mids$[mid_setIsSpacecraftTimeSimplified_bd04c9335fb9e4cf] = env->getMethodID(cls, "setIsSpacecraftTimeSimplified", "(Z)V");
            mids$[mid_setSpacecraftClockAndDriftApplied_99803b0791f320ff] = env->getMethodID(cls, "setSpacecraftClockAndDriftApplied", "(I)V");
            mids$[mid_setStationClockAndDriftApplied_99803b0791f320ff] = env->getMethodID(cls, "setStationClockAndDriftApplied", "(I)V");
            mids$[mid_setStationOscDrift_17db3a65980d3441] = env->getMethodID(cls, "setStationOscDrift", "(D)V");
            mids$[mid_setStationUTCOffset_17db3a65980d3441] = env->getMethodID(cls, "setStationUTCOffset", "(D)V");
            mids$[mid_setTranspClkRefTime_17db3a65980d3441] = env->getMethodID(cls, "setTranspClkRefTime", "(D)V");
            mids$[mid_setTranspOscDrift_17db3a65980d3441] = env->getMethodID(cls, "setTranspOscDrift", "(D)V");
            mids$[mid_setTranspUTCOffset_17db3a65980d3441] = env->getMethodID(cls, "setTranspUTCOffset", "(D)V");
            mids$[mid_setTransponderId_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTransponderId", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_11b109bd155ca898] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$TransponderConfiguration::CRDConfiguration$TransponderConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jint CRDConfiguration$TransponderConfiguration::getSpacecraftClockAndDriftApplied() const
        {
          return env->callIntMethod(this$, mids$[mid_getSpacecraftClockAndDriftApplied_570ce0828f81a2c1]);
        }

        jint CRDConfiguration$TransponderConfiguration::getStationClockAndDriftApplied() const
        {
          return env->callIntMethod(this$, mids$[mid_getStationClockAndDriftApplied_570ce0828f81a2c1]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getStationOscDrift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStationOscDrift_dff5885c2c873297]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getStationUTCOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStationUTCOffset_dff5885c2c873297]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getTranspClkRefTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspClkRefTime_dff5885c2c873297]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getTranspOscDrift() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspOscDrift_dff5885c2c873297]);
        }

        jdouble CRDConfiguration$TransponderConfiguration::getTranspUTCOffset() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTranspUTCOffset_dff5885c2c873297]);
        }

        ::java::lang::String CRDConfiguration$TransponderConfiguration::getTransponderId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTransponderId_11b109bd155ca898]));
        }

        jboolean CRDConfiguration$TransponderConfiguration::isSpacecraftTimeSimplified() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSpacecraftTimeSimplified_b108b35ef48e27bd]);
        }

        void CRDConfiguration$TransponderConfiguration::setIsSpacecraftTimeSimplified(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsSpacecraftTimeSimplified_bd04c9335fb9e4cf], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setSpacecraftClockAndDriftApplied(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSpacecraftClockAndDriftApplied_99803b0791f320ff], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setStationClockAndDriftApplied(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationClockAndDriftApplied_99803b0791f320ff], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setStationOscDrift(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationOscDrift_17db3a65980d3441], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setStationUTCOffset(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationUTCOffset_17db3a65980d3441], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setTranspClkRefTime(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspClkRefTime_17db3a65980d3441], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setTranspOscDrift(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspOscDrift_17db3a65980d3441], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setTranspUTCOffset(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTranspUTCOffset_17db3a65980d3441], a0);
        }

        void CRDConfiguration$TransponderConfiguration::setTransponderId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTransponderId_d0bc48d5b00dc40c], a0.this$);
        }

        ::java::lang::String CRDConfiguration$TransponderConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$TransponderConfiguration::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *CelestialBodyFrame::class$ = NULL;
          jmethodID *CelestialBodyFrame::mids$ = NULL;
          bool CelestialBodyFrame::live$ = false;
          CelestialBodyFrame *CelestialBodyFrame::EME2000 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::GCRF = NULL;
          CelestialBodyFrame *CelestialBodyFrame::GRC = NULL;
          CelestialBodyFrame *CelestialBodyFrame::GTOD = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ICRF = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1988 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1989 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1990 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1991 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1992 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1993 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1994 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1996 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF1997 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2000 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2005 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2008 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2014 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::ITRF2020 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::J2000 = NULL;
          CelestialBodyFrame *CelestialBodyFrame::MCI = NULL;
          CelestialBodyFrame *CelestialBodyFrame::TDR = NULL;
          CelestialBodyFrame *CelestialBodyFrame::TEME = NULL;
          CelestialBodyFrame *CelestialBodyFrame::TOD = NULL;

          jclass CelestialBodyFrame::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/CelestialBodyFrame");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getFrame_7a733e4d17b5b971] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/utils/IERSConventions;ZLorg/orekit/data/DataContext;)Lorg/orekit/frames/Frame;");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_guessFrame_4120982664ebec0c] = env->getStaticMethodID(cls, "guessFrame", "(Lorg/orekit/frames/Frame;)Ljava/lang/String;");
              mids$[mid_map_5c952752e80776eb] = env->getStaticMethodID(cls, "map", "(Lorg/orekit/frames/Frame;)Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");
              mids$[mid_parse_8035e6593a519d3d] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");
              mids$[mid_valueOf_8035e6593a519d3d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");
              mids$[mid_values_e69fc9b8b16d9412] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              EME2000 = new CelestialBodyFrame(env->getStaticObjectField(cls, "EME2000", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              GCRF = new CelestialBodyFrame(env->getStaticObjectField(cls, "GCRF", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              GRC = new CelestialBodyFrame(env->getStaticObjectField(cls, "GRC", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              GTOD = new CelestialBodyFrame(env->getStaticObjectField(cls, "GTOD", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ICRF = new CelestialBodyFrame(env->getStaticObjectField(cls, "ICRF", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1988 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1988", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1989 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1989", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1990 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1990", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1991 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1991", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1992 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1992", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1993 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1993", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1994 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1994", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1996 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1996", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF1997 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF1997", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2000 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2000", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2005 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2005", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2008 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2008", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2014 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2014", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              ITRF2020 = new CelestialBodyFrame(env->getStaticObjectField(cls, "ITRF2020", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              J2000 = new CelestialBodyFrame(env->getStaticObjectField(cls, "J2000", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              MCI = new CelestialBodyFrame(env->getStaticObjectField(cls, "MCI", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              TDR = new CelestialBodyFrame(env->getStaticObjectField(cls, "TDR", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              TEME = new CelestialBodyFrame(env->getStaticObjectField(cls, "TEME", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              TOD = new CelestialBodyFrame(env->getStaticObjectField(cls, "TOD", "Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame CelestialBodyFrame::getFrame(const ::org::orekit::utils::IERSConventions & a0, jboolean a1, const ::org::orekit::data::DataContext & a2) const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_7a733e4d17b5b971], a0.this$, a1, a2.this$));
          }

          ::java::lang::String CelestialBodyFrame::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
          }

          ::java::lang::String CelestialBodyFrame::guessFrame(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_guessFrame_4120982664ebec0c], a0.this$));
          }

          CelestialBodyFrame CelestialBodyFrame::map(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CelestialBodyFrame(env->callStaticObjectMethod(cls, mids$[mid_map_5c952752e80776eb], a0.this$));
          }

          CelestialBodyFrame CelestialBodyFrame::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CelestialBodyFrame(env->callStaticObjectMethod(cls, mids$[mid_parse_8035e6593a519d3d], a0.this$));
          }

          CelestialBodyFrame CelestialBodyFrame::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return CelestialBodyFrame(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8035e6593a519d3d], a0.this$));
          }

          JArray< CelestialBodyFrame > CelestialBodyFrame::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< CelestialBodyFrame >(env->callStaticObjectMethod(cls, mids$[mid_values_e69fc9b8b16d9412]));
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
          static PyObject *t_CelestialBodyFrame_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_of_(t_CelestialBodyFrame *self, PyObject *args);
          static PyObject *t_CelestialBodyFrame_getFrame(t_CelestialBodyFrame *self, PyObject *args);
          static PyObject *t_CelestialBodyFrame_getName(t_CelestialBodyFrame *self);
          static PyObject *t_CelestialBodyFrame_guessFrame(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_map(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CelestialBodyFrame_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_CelestialBodyFrame_values(PyTypeObject *type);
          static PyObject *t_CelestialBodyFrame_get__name(t_CelestialBodyFrame *self, void *data);
          static PyObject *t_CelestialBodyFrame_get__parameters_(t_CelestialBodyFrame *self, void *data);
          static PyGetSetDef t_CelestialBodyFrame__fields_[] = {
            DECLARE_GET_FIELD(t_CelestialBodyFrame, name),
            DECLARE_GET_FIELD(t_CelestialBodyFrame, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CelestialBodyFrame__methods_[] = {
            DECLARE_METHOD(t_CelestialBodyFrame, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, of_, METH_VARARGS),
            DECLARE_METHOD(t_CelestialBodyFrame, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_CelestialBodyFrame, getName, METH_NOARGS),
            DECLARE_METHOD(t_CelestialBodyFrame, guessFrame, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, map, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, parse, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CelestialBodyFrame, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CelestialBodyFrame)[] = {
            { Py_tp_methods, t_CelestialBodyFrame__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CelestialBodyFrame__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CelestialBodyFrame)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(CelestialBodyFrame, t_CelestialBodyFrame, CelestialBodyFrame);
          PyObject *t_CelestialBodyFrame::wrap_Object(const CelestialBodyFrame& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CelestialBodyFrame::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CelestialBodyFrame *self = (t_CelestialBodyFrame *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_CelestialBodyFrame::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_CelestialBodyFrame::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_CelestialBodyFrame *self = (t_CelestialBodyFrame *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_CelestialBodyFrame::install(PyObject *module)
          {
            installType(&PY_TYPE(CelestialBodyFrame), &PY_TYPE_DEF(CelestialBodyFrame), module, "CelestialBodyFrame", 0);
          }

          void t_CelestialBodyFrame::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "class_", make_descriptor(CelestialBodyFrame::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "wrapfn_", make_descriptor(t_CelestialBodyFrame::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "boxfn_", make_descriptor(boxObject));
            env->getClass(CelestialBodyFrame::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "EME2000", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::EME2000)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "GCRF", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::GCRF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "GRC", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::GRC)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "GTOD", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::GTOD)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ICRF", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ICRF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1988", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1988)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1989", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1989)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1990", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1990)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1991", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1991)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1992", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1992)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1993", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1993)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1994", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1994)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1996", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1996)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF1997", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF1997)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2000", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2000)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2005", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2005)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2008", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2008)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2014", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2014)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "ITRF2020", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::ITRF2020)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "J2000", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::J2000)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "MCI", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::MCI)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "TDR", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::TDR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "TEME", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::TEME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyFrame), "TOD", make_descriptor(t_CelestialBodyFrame::wrap_Object(*CelestialBodyFrame::TOD)));
          }

          static PyObject *t_CelestialBodyFrame_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CelestialBodyFrame::initializeClass, 1)))
              return NULL;
            return t_CelestialBodyFrame::wrap_Object(CelestialBodyFrame(((t_CelestialBodyFrame *) arg)->object.this$));
          }
          static PyObject *t_CelestialBodyFrame_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CelestialBodyFrame::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CelestialBodyFrame_of_(t_CelestialBodyFrame *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_CelestialBodyFrame_getFrame(t_CelestialBodyFrame *self, PyObject *args)
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::data::DataContext a2((jobject) NULL);
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, "KZk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getFrame(a0, a1, a2));
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getFrame", args);
            return NULL;
          }

          static PyObject *t_CelestialBodyFrame_getName(t_CelestialBodyFrame *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_CelestialBodyFrame_guessFrame(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::guessFrame(a0));
              return j2p(result);
            }

            PyErr_SetArgsError(type, "guessFrame", arg);
            return NULL;
          }

          static PyObject *t_CelestialBodyFrame_map(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            CelestialBodyFrame result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::map(a0));
              return t_CelestialBodyFrame::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "map", arg);
            return NULL;
          }

          static PyObject *t_CelestialBodyFrame_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            CelestialBodyFrame result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::parse(a0));
              return t_CelestialBodyFrame::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_CelestialBodyFrame_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            CelestialBodyFrame result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::valueOf(a0));
              return t_CelestialBodyFrame::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_CelestialBodyFrame_values(PyTypeObject *type)
          {
            JArray< CelestialBodyFrame > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::values());
            return JArray<jobject>(result.this$).wrap(t_CelestialBodyFrame::wrap_jobject);
          }
          static PyObject *t_CelestialBodyFrame_get__parameters_(t_CelestialBodyFrame *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_CelestialBodyFrame_get__name(t_CelestialBodyFrame *self, void *data)
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
#include "org/hipparchus/geometry/VectorFormat.h"
#include "org/hipparchus/geometry/Vector.h"
#include "java/util/Locale.h"
#include "java/text/NumberFormat.h"
#include "java/lang/StringBuffer.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/text/ParsePosition.h"
#include "java/text/FieldPosition.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *VectorFormat::class$ = NULL;
      jmethodID *VectorFormat::mids$ = NULL;
      bool VectorFormat::live$ = false;
      ::java::lang::String *VectorFormat::DEFAULT_PREFIX = NULL;
      ::java::lang::String *VectorFormat::DEFAULT_SEPARATOR = NULL;
      ::java::lang::String *VectorFormat::DEFAULT_SUFFIX = NULL;

      jclass VectorFormat::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/VectorFormat");

          mids$ = new jmethodID[max_mid];
          mids$[mid_format_70cc35afc62a15a9] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;)Ljava/lang/String;");
          mids$[mid_format_84b38396c796d436] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
          mids$[mid_getAvailableLocales_c5ed07ebd55821bb] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
          mids$[mid_getFormat_24f83dea4a8657b1] = env->getMethodID(cls, "getFormat", "()Ljava/text/NumberFormat;");
          mids$[mid_getPrefix_11b109bd155ca898] = env->getMethodID(cls, "getPrefix", "()Ljava/lang/String;");
          mids$[mid_getSeparator_11b109bd155ca898] = env->getMethodID(cls, "getSeparator", "()Ljava/lang/String;");
          mids$[mid_getSuffix_11b109bd155ca898] = env->getMethodID(cls, "getSuffix", "()Ljava/lang/String;");
          mids$[mid_parse_f2392149be71531b] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_parse_57fa38b35ce1396f] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/geometry/Vector;");
          mids$[mid_parseCoordinates_52c2f130524441eb] = env->getMethodID(cls, "parseCoordinates", "(ILjava/lang/String;Ljava/text/ParsePosition;)[D");
          mids$[mid_format_e7b84a9e0bbb4322] = env->getMethodID(cls, "format", "(Ljava/lang/StringBuffer;Ljava/text/FieldPosition;[D)Ljava/lang/StringBuffer;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_PREFIX", "Ljava/lang/String;"));
          DEFAULT_SEPARATOR = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SEPARATOR", "Ljava/lang/String;"));
          DEFAULT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUFFIX", "Ljava/lang/String;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String VectorFormat::format(const ::org::hipparchus::geometry::Vector & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_format_70cc35afc62a15a9], a0.this$));
      }

      ::java::lang::StringBuffer VectorFormat::format(const ::org::hipparchus::geometry::Vector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
      {
        return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_84b38396c796d436], a0.this$, a1.this$, a2.this$));
      }

      JArray< ::java::util::Locale > VectorFormat::getAvailableLocales()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_c5ed07ebd55821bb]));
      }

      ::java::text::NumberFormat VectorFormat::getFormat() const
      {
        return ::java::text::NumberFormat(env->callObjectMethod(this$, mids$[mid_getFormat_24f83dea4a8657b1]));
      }

      ::java::lang::String VectorFormat::getPrefix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrefix_11b109bd155ca898]));
      }

      ::java::lang::String VectorFormat::getSeparator() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSeparator_11b109bd155ca898]));
      }

      ::java::lang::String VectorFormat::getSuffix() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSuffix_11b109bd155ca898]));
      }

      ::org::hipparchus::geometry::Vector VectorFormat::parse(const ::java::lang::String & a0) const
      {
        return ::org::hipparchus::geometry::Vector(env->callObjectMethod(this$, mids$[mid_parse_f2392149be71531b], a0.this$));
      }

      ::org::hipparchus::geometry::Vector VectorFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
      {
        return ::org::hipparchus::geometry::Vector(env->callObjectMethod(this$, mids$[mid_parse_57fa38b35ce1396f], a0.this$, a1.this$));
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
      static PyObject *t_VectorFormat_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VectorFormat_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VectorFormat_of_(t_VectorFormat *self, PyObject *args);
      static PyObject *t_VectorFormat_format(t_VectorFormat *self, PyObject *args);
      static PyObject *t_VectorFormat_getAvailableLocales(PyTypeObject *type);
      static PyObject *t_VectorFormat_getFormat(t_VectorFormat *self);
      static PyObject *t_VectorFormat_getPrefix(t_VectorFormat *self);
      static PyObject *t_VectorFormat_getSeparator(t_VectorFormat *self);
      static PyObject *t_VectorFormat_getSuffix(t_VectorFormat *self);
      static PyObject *t_VectorFormat_parse(t_VectorFormat *self, PyObject *args);
      static PyObject *t_VectorFormat_get__availableLocales(t_VectorFormat *self, void *data);
      static PyObject *t_VectorFormat_get__prefix(t_VectorFormat *self, void *data);
      static PyObject *t_VectorFormat_get__separator(t_VectorFormat *self, void *data);
      static PyObject *t_VectorFormat_get__suffix(t_VectorFormat *self, void *data);
      static PyObject *t_VectorFormat_get__parameters_(t_VectorFormat *self, void *data);
      static PyGetSetDef t_VectorFormat__fields_[] = {
        DECLARE_GET_FIELD(t_VectorFormat, availableLocales),
        DECLARE_GET_FIELD(t_VectorFormat, prefix),
        DECLARE_GET_FIELD(t_VectorFormat, separator),
        DECLARE_GET_FIELD(t_VectorFormat, suffix),
        DECLARE_GET_FIELD(t_VectorFormat, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_VectorFormat__methods_[] = {
        DECLARE_METHOD(t_VectorFormat, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VectorFormat, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VectorFormat, of_, METH_VARARGS),
        DECLARE_METHOD(t_VectorFormat, format, METH_VARARGS),
        DECLARE_METHOD(t_VectorFormat, getAvailableLocales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_VectorFormat, getFormat, METH_NOARGS),
        DECLARE_METHOD(t_VectorFormat, getPrefix, METH_NOARGS),
        DECLARE_METHOD(t_VectorFormat, getSeparator, METH_NOARGS),
        DECLARE_METHOD(t_VectorFormat, getSuffix, METH_NOARGS),
        DECLARE_METHOD(t_VectorFormat, parse, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(VectorFormat)[] = {
        { Py_tp_methods, t_VectorFormat__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_VectorFormat__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(VectorFormat)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(VectorFormat, t_VectorFormat, VectorFormat);
      PyObject *t_VectorFormat::wrap_Object(const VectorFormat& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_VectorFormat::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_VectorFormat *self = (t_VectorFormat *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_VectorFormat::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_VectorFormat::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_VectorFormat *self = (t_VectorFormat *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_VectorFormat::install(PyObject *module)
      {
        installType(&PY_TYPE(VectorFormat), &PY_TYPE_DEF(VectorFormat), module, "VectorFormat", 0);
      }

      void t_VectorFormat::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "class_", make_descriptor(VectorFormat::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "wrapfn_", make_descriptor(t_VectorFormat::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "boxfn_", make_descriptor(boxObject));
        env->getClass(VectorFormat::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "DEFAULT_PREFIX", make_descriptor(j2p(*VectorFormat::DEFAULT_PREFIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "DEFAULT_SEPARATOR", make_descriptor(j2p(*VectorFormat::DEFAULT_SEPARATOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VectorFormat), "DEFAULT_SUFFIX", make_descriptor(j2p(*VectorFormat::DEFAULT_SUFFIX)));
      }

      static PyObject *t_VectorFormat_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, VectorFormat::initializeClass, 1)))
          return NULL;
        return t_VectorFormat::wrap_Object(VectorFormat(((t_VectorFormat *) arg)->object.this$));
      }
      static PyObject *t_VectorFormat_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, VectorFormat::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_VectorFormat_of_(t_VectorFormat *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_VectorFormat_format(t_VectorFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.format(a0));
              return j2p(result);
            }
          }
          break;
         case 3:
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::lang::StringBuffer a1((jobject) NULL);
            ::java::text::FieldPosition a2((jobject) NULL);
            ::java::lang::StringBuffer result((jobject) NULL);

            if (!parseArgs(args, "Kkk", ::org::hipparchus::geometry::Vector::initializeClass, ::java::lang::StringBuffer::initializeClass, ::java::text::FieldPosition::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_, &a1, &a2))
            {
              OBJ_CALL(result = self->object.format(a0, a1, a2));
              return ::java::lang::t_StringBuffer::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "format", args);
        return NULL;
      }

      static PyObject *t_VectorFormat_getAvailableLocales(PyTypeObject *type)
      {
        JArray< ::java::util::Locale > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::geometry::VectorFormat::getAvailableLocales());
        return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_VectorFormat_getFormat(t_VectorFormat *self)
      {
        ::java::text::NumberFormat result((jobject) NULL);
        OBJ_CALL(result = self->object.getFormat());
        return ::java::text::t_NumberFormat::wrap_Object(result);
      }

      static PyObject *t_VectorFormat_getPrefix(t_VectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getPrefix());
        return j2p(result);
      }

      static PyObject *t_VectorFormat_getSeparator(t_VectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSeparator());
        return j2p(result);
      }

      static PyObject *t_VectorFormat_getSuffix(t_VectorFormat *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSuffix());
        return j2p(result);
      }

      static PyObject *t_VectorFormat_parse(t_VectorFormat *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::hipparchus::geometry::Vector result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::hipparchus::geometry::t_Vector::wrap_Object(result, self->parameters[0], self->parameters[1]);
            }
          }
          break;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::text::ParsePosition a1((jobject) NULL);
            ::org::hipparchus::geometry::Vector result((jobject) NULL);

            if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::hipparchus::geometry::t_Vector::wrap_Object(result, self->parameters[0], self->parameters[1]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "parse", args);
        return NULL;
      }
      static PyObject *t_VectorFormat_get__parameters_(t_VectorFormat *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_VectorFormat_get__availableLocales(t_VectorFormat *self, void *data)
      {
        JArray< ::java::util::Locale > value((jobject) NULL);
        OBJ_CALL(value = self->object.getAvailableLocales());
        return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
      }

      static PyObject *t_VectorFormat_get__prefix(t_VectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getPrefix());
        return j2p(value);
      }

      static PyObject *t_VectorFormat_get__separator(t_VectorFormat *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSeparator());
        return j2p(value);
      }

      static PyObject *t_VectorFormat_get__suffix(t_VectorFormat *self, void *data)
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
#include "org/orekit/rugged/utils/Selector.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace utils {

        ::java::lang::Class *Selector::class$ = NULL;
        jmethodID *Selector::mids$ = NULL;
        bool Selector::live$ = false;

        jclass Selector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/utils/Selector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_select_86ffecc08a63eff0] = env->getMethodID(cls, "select", "(DD)D");
            mids$[mid_selectFirst_ff85a0d8ff097ee5] = env->getMethodID(cls, "selectFirst", "(DD)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Selector::Selector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Selector::select(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_select_86ffecc08a63eff0], a0, a1);
        }

        jboolean Selector::selectFirst(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_selectFirst_ff85a0d8ff097ee5], a0, a1);
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
        static PyObject *t_Selector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Selector_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Selector_init_(t_Selector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Selector_select(t_Selector *self, PyObject *args);
        static PyObject *t_Selector_selectFirst(t_Selector *self, PyObject *args);

        static PyMethodDef t_Selector__methods_[] = {
          DECLARE_METHOD(t_Selector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Selector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Selector, select, METH_VARARGS),
          DECLARE_METHOD(t_Selector, selectFirst, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Selector)[] = {
          { Py_tp_methods, t_Selector__methods_ },
          { Py_tp_init, (void *) t_Selector_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Selector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Selector, t_Selector, Selector);

        void t_Selector::install(PyObject *module)
        {
          installType(&PY_TYPE(Selector), &PY_TYPE_DEF(Selector), module, "Selector", 0);
        }

        void t_Selector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Selector), "class_", make_descriptor(Selector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Selector), "wrapfn_", make_descriptor(t_Selector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Selector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Selector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Selector::initializeClass, 1)))
            return NULL;
          return t_Selector::wrap_Object(Selector(((t_Selector *) arg)->object.this$));
        }
        static PyObject *t_Selector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Selector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Selector_init_(t_Selector *self, PyObject *args, PyObject *kwds)
        {
          Selector object((jobject) NULL);

          INT_CALL(object = Selector());
          self->object = object;

          return 0;
        }

        static PyObject *t_Selector_select(t_Selector *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.select(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "select", args);
          return NULL;
        }

        static PyObject *t_Selector_selectFirst(t_Selector *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.selectFirst(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "selectFirst", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/HighamHall54FieldIntegratorBuilder.h"
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

        ::java::lang::Class *HighamHall54FieldIntegratorBuilder::class$ = NULL;
        jmethodID *HighamHall54FieldIntegratorBuilder::mids$ = NULL;
        bool HighamHall54FieldIntegratorBuilder::live$ = false;

        jclass HighamHall54FieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/HighamHall54FieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_048f7039a7622a2b] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HighamHall54FieldIntegratorBuilder::HighamHall54FieldIntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator HighamHall54FieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_048f7039a7622a2b], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_HighamHall54FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HighamHall54FieldIntegratorBuilder_of_(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args);
        static int t_HighamHall54FieldIntegratorBuilder_init_(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HighamHall54FieldIntegratorBuilder_buildIntegrator(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_HighamHall54FieldIntegratorBuilder_get__parameters_(t_HighamHall54FieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_HighamHall54FieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_HighamHall54FieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HighamHall54FieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_HighamHall54FieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54FieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HighamHall54FieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_HighamHall54FieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HighamHall54FieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_HighamHall54FieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_HighamHall54FieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_HighamHall54FieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HighamHall54FieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(HighamHall54FieldIntegratorBuilder, t_HighamHall54FieldIntegratorBuilder, HighamHall54FieldIntegratorBuilder);
        PyObject *t_HighamHall54FieldIntegratorBuilder::wrap_Object(const HighamHall54FieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HighamHall54FieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HighamHall54FieldIntegratorBuilder *self = (t_HighamHall54FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_HighamHall54FieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_HighamHall54FieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_HighamHall54FieldIntegratorBuilder *self = (t_HighamHall54FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_HighamHall54FieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(HighamHall54FieldIntegratorBuilder), &PY_TYPE_DEF(HighamHall54FieldIntegratorBuilder), module, "HighamHall54FieldIntegratorBuilder", 0);
        }

        void t_HighamHall54FieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegratorBuilder), "class_", make_descriptor(HighamHall54FieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegratorBuilder), "wrapfn_", make_descriptor(t_HighamHall54FieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HighamHall54FieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HighamHall54FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HighamHall54FieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_HighamHall54FieldIntegratorBuilder::wrap_Object(HighamHall54FieldIntegratorBuilder(((t_HighamHall54FieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_HighamHall54FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HighamHall54FieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_HighamHall54FieldIntegratorBuilder_of_(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_HighamHall54FieldIntegratorBuilder_init_(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          HighamHall54FieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = HighamHall54FieldIntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HighamHall54FieldIntegratorBuilder_buildIntegrator(t_HighamHall54FieldIntegratorBuilder *self, PyObject *args)
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

          return callSuper(PY_TYPE(HighamHall54FieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_HighamHall54FieldIntegratorBuilder_get__parameters_(t_HighamHall54FieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/SimpsonIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *SimpsonIntegrator::class$ = NULL;
        jmethodID *SimpsonIntegrator::mids$ = NULL;
        bool SimpsonIntegrator::live$ = false;
        jint SimpsonIntegrator::SIMPSON_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass SimpsonIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/SimpsonIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_6f37635c3285dbdf] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_init$_1b5e9254fb70ca20] = env->getMethodID(cls, "<init>", "(DDII)V");
            mids$[mid_doIntegrate_dff5885c2c873297] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            SIMPSON_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "SIMPSON_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimpsonIntegrator::SimpsonIntegrator() : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        SimpsonIntegrator::SimpsonIntegrator(jint a0, jint a1) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_6f37635c3285dbdf, a0, a1)) {}

        SimpsonIntegrator::SimpsonIntegrator(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_1b5e9254fb70ca20, a0, a1, a2, a3)) {}
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
        static PyObject *t_SimpsonIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpsonIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SimpsonIntegrator_init_(t_SimpsonIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_SimpsonIntegrator__methods_[] = {
          DECLARE_METHOD(t_SimpsonIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpsonIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpsonIntegrator)[] = {
          { Py_tp_methods, t_SimpsonIntegrator__methods_ },
          { Py_tp_init, (void *) t_SimpsonIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpsonIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(SimpsonIntegrator, t_SimpsonIntegrator, SimpsonIntegrator);

        void t_SimpsonIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpsonIntegrator), &PY_TYPE_DEF(SimpsonIntegrator), module, "SimpsonIntegrator", 0);
        }

        void t_SimpsonIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpsonIntegrator), "class_", make_descriptor(SimpsonIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpsonIntegrator), "wrapfn_", make_descriptor(t_SimpsonIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpsonIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(SimpsonIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpsonIntegrator), "SIMPSON_MAX_ITERATIONS_COUNT", make_descriptor(SimpsonIntegrator::SIMPSON_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_SimpsonIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpsonIntegrator::initializeClass, 1)))
            return NULL;
          return t_SimpsonIntegrator::wrap_Object(SimpsonIntegrator(((t_SimpsonIntegrator *) arg)->object.this$));
        }
        static PyObject *t_SimpsonIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpsonIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SimpsonIntegrator_init_(t_SimpsonIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              SimpsonIntegrator object((jobject) NULL);

              INT_CALL(object = SimpsonIntegrator());
              self->object = object;
              break;
            }
           case 2:
            {
              jint a0;
              jint a1;
              SimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = SimpsonIntegrator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              jint a3;
              SimpsonIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = SimpsonIntegrator(a0, a1, a2, a3));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeVectorFunction.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeVectorFunction::class$ = NULL;
      jmethodID *TimeVectorFunction::mids$ = NULL;
      bool TimeVectorFunction::live$ = false;

      jclass TimeVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_2b9aa40de0a696a4] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_value_1d12c7a27955163b] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > TimeVectorFunction::value(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_2b9aa40de0a696a4], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > TimeVectorFunction::value(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_1d12c7a27955163b], a0.this$));
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
      static PyObject *t_TimeVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeVectorFunction_value(t_TimeVectorFunction *self, PyObject *args);

      static PyMethodDef t_TimeVectorFunction__methods_[] = {
        DECLARE_METHOD(t_TimeVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeVectorFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeVectorFunction)[] = {
        { Py_tp_methods, t_TimeVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeVectorFunction, t_TimeVectorFunction, TimeVectorFunction);

      void t_TimeVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeVectorFunction), &PY_TYPE_DEF(TimeVectorFunction), module, "TimeVectorFunction", 0);
      }

      void t_TimeVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeVectorFunction), "class_", make_descriptor(TimeVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeVectorFunction), "wrapfn_", make_descriptor(t_TimeVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeVectorFunction::initializeClass, 1)))
          return NULL;
        return t_TimeVectorFunction::wrap_Object(TimeVectorFunction(((t_TimeVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_TimeVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeVectorFunction_value(t_TimeVectorFunction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
            {
              OBJ_CALL(result = self->object.value(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
