#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/FieldComplexUnivariateIntegrator.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "org/hipparchus/complex/FieldComplex.h"
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
          mids$[mid_init$_3b9d5c720aaf2f51] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/integration/FieldUnivariateIntegrator;)V");
          mids$[mid_integrate_be9a0d23dc9061ee] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/complex/FieldComplex;[Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_integrate_e956a4a4203ef305] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldComplexUnivariateIntegrator::FieldComplexUnivariateIntegrator(const ::org::hipparchus::analysis::integration::FieldUnivariateIntegrator & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3b9d5c720aaf2f51, a0.this$)) {}

      ::org::hipparchus::complex::FieldComplex FieldComplexUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::complex::FieldComplex & a2, const JArray< ::org::hipparchus::complex::FieldComplex > & a3) const
      {
        return ::org::hipparchus::complex::FieldComplex(env->callObjectMethod(this$, mids$[mid_integrate_be9a0d23dc9061ee], a0, a1.this$, a2.this$, a3.this$));
      }

      ::org::hipparchus::complex::FieldComplex FieldComplexUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::complex::FieldComplex & a2, const ::org::hipparchus::complex::FieldComplex & a3) const
      {
        return ::org::hipparchus::complex::FieldComplex(env->callObjectMethod(this$, mids$[mid_integrate_e956a4a4203ef305], a0, a1.this$, a2.this$, a3.this$));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/frames/EOPBasedTransformProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPBasedTransformProvider::class$ = NULL;
      jmethodID *EOPBasedTransformProvider::mids$ = NULL;
      bool EOPBasedTransformProvider::live$ = false;

      jclass EOPBasedTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPBasedTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEOPHistory_9a64cc378cf7ab6b] = env->getMethodID(cls, "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getNonInterpolatingProvider_6eea5bc11bda953b] = env->getMethodID(cls, "getNonInterpolatingProvider", "()Lorg/orekit/frames/EOPBasedTransformProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::EOPHistory EOPBasedTransformProvider::getEOPHistory() const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_9a64cc378cf7ab6b]));
      }

      EOPBasedTransformProvider EOPBasedTransformProvider::getNonInterpolatingProvider() const
      {
        return EOPBasedTransformProvider(env->callObjectMethod(this$, mids$[mid_getNonInterpolatingProvider_6eea5bc11bda953b]));
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
      static PyObject *t_EOPBasedTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPBasedTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPBasedTransformProvider_getEOPHistory(t_EOPBasedTransformProvider *self);
      static PyObject *t_EOPBasedTransformProvider_getNonInterpolatingProvider(t_EOPBasedTransformProvider *self);
      static PyObject *t_EOPBasedTransformProvider_get__eOPHistory(t_EOPBasedTransformProvider *self, void *data);
      static PyObject *t_EOPBasedTransformProvider_get__nonInterpolatingProvider(t_EOPBasedTransformProvider *self, void *data);
      static PyGetSetDef t_EOPBasedTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_EOPBasedTransformProvider, eOPHistory),
        DECLARE_GET_FIELD(t_EOPBasedTransformProvider, nonInterpolatingProvider),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EOPBasedTransformProvider__methods_[] = {
        DECLARE_METHOD(t_EOPBasedTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPBasedTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPBasedTransformProvider, getEOPHistory, METH_NOARGS),
        DECLARE_METHOD(t_EOPBasedTransformProvider, getNonInterpolatingProvider, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPBasedTransformProvider)[] = {
        { Py_tp_methods, t_EOPBasedTransformProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_EOPBasedTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPBasedTransformProvider)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::TransformProvider),
        NULL
      };

      DEFINE_TYPE(EOPBasedTransformProvider, t_EOPBasedTransformProvider, EOPBasedTransformProvider);

      void t_EOPBasedTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPBasedTransformProvider), &PY_TYPE_DEF(EOPBasedTransformProvider), module, "EOPBasedTransformProvider", 0);
      }

      void t_EOPBasedTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPBasedTransformProvider), "class_", make_descriptor(EOPBasedTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPBasedTransformProvider), "wrapfn_", make_descriptor(t_EOPBasedTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPBasedTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EOPBasedTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPBasedTransformProvider::initializeClass, 1)))
          return NULL;
        return t_EOPBasedTransformProvider::wrap_Object(EOPBasedTransformProvider(((t_EOPBasedTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_EOPBasedTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPBasedTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_EOPBasedTransformProvider_getEOPHistory(t_EOPBasedTransformProvider *self)
      {
        ::org::orekit::frames::EOPHistory result((jobject) NULL);
        OBJ_CALL(result = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
      }

      static PyObject *t_EOPBasedTransformProvider_getNonInterpolatingProvider(t_EOPBasedTransformProvider *self)
      {
        EOPBasedTransformProvider result((jobject) NULL);
        OBJ_CALL(result = self->object.getNonInterpolatingProvider());
        return t_EOPBasedTransformProvider::wrap_Object(result);
      }

      static PyObject *t_EOPBasedTransformProvider_get__eOPHistory(t_EOPBasedTransformProvider *self, void *data)
      {
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(value);
      }

      static PyObject *t_EOPBasedTransformProvider_get__nonInterpolatingProvider(t_EOPBasedTransformProvider *self, void *data)
      {
        EOPBasedTransformProvider value((jobject) NULL);
        OBJ_CALL(value = self->object.getNonInterpolatingProvider());
        return t_EOPBasedTransformProvider::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonDatesSelector.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/DatesSelector.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonDatesSelector::class$ = NULL;
      jmethodID *PythonDatesSelector::mids$ = NULL;
      bool PythonDatesSelector::live$ = false;

      jclass PythonDatesSelector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonDatesSelector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_selectDates_c5683b8e06424542] = env->getMethodID(cls, "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDatesSelector::PythonDatesSelector() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonDatesSelector::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonDatesSelector::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonDatesSelector::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonDatesSelector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDatesSelector_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDatesSelector_init_(t_PythonDatesSelector *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDatesSelector_finalize(t_PythonDatesSelector *self);
      static PyObject *t_PythonDatesSelector_pythonExtension(t_PythonDatesSelector *self, PyObject *args);
      static void JNICALL t_PythonDatesSelector_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonDatesSelector_selectDates1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static PyObject *t_PythonDatesSelector_get__self(t_PythonDatesSelector *self, void *data);
      static PyGetSetDef t_PythonDatesSelector__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDatesSelector, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDatesSelector__methods_[] = {
        DECLARE_METHOD(t_PythonDatesSelector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDatesSelector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDatesSelector, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDatesSelector, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDatesSelector)[] = {
        { Py_tp_methods, t_PythonDatesSelector__methods_ },
        { Py_tp_init, (void *) t_PythonDatesSelector_init_ },
        { Py_tp_getset, t_PythonDatesSelector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDatesSelector)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDatesSelector, t_PythonDatesSelector, PythonDatesSelector);

      void t_PythonDatesSelector::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDatesSelector), &PY_TYPE_DEF(PythonDatesSelector), module, "PythonDatesSelector", 1);
      }

      void t_PythonDatesSelector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDatesSelector), "class_", make_descriptor(PythonDatesSelector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDatesSelector), "wrapfn_", make_descriptor(t_PythonDatesSelector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDatesSelector), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDatesSelector::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonDatesSelector_pythonDecRef0 },
          { "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;", (void *) t_PythonDatesSelector_selectDates1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonDatesSelector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDatesSelector::initializeClass, 1)))
          return NULL;
        return t_PythonDatesSelector::wrap_Object(PythonDatesSelector(((t_PythonDatesSelector *) arg)->object.this$));
      }
      static PyObject *t_PythonDatesSelector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDatesSelector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDatesSelector_init_(t_PythonDatesSelector *self, PyObject *args, PyObject *kwds)
      {
        PythonDatesSelector object((jobject) NULL);

        INT_CALL(object = PythonDatesSelector());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDatesSelector_finalize(t_PythonDatesSelector *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDatesSelector_pythonExtension(t_PythonDatesSelector *self, PyObject *args)
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

      static void JNICALL t_PythonDatesSelector_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDatesSelector::mids$[PythonDatesSelector::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDatesSelector::mids$[PythonDatesSelector::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonDatesSelector_selectDates1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDatesSelector::mids$[PythonDatesSelector::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "selectDates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("selectDates", result);
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

      static PyObject *t_PythonDatesSelector_get__self(t_PythonDatesSelector *self, void *data)
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
#include "org/hipparchus/special/elliptic/jacobi/FieldTheta.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldTheta::class$ = NULL;
          jmethodID *FieldTheta::mids$ = NULL;
          bool FieldTheta::live$ = false;

          jclass FieldTheta::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldTheta");

              mids$ = new jmethodID[max_mid];
              mids$[mid_theta1_613c8f46c659f636] = env->getMethodID(cls, "theta1", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_theta2_613c8f46c659f636] = env->getMethodID(cls, "theta2", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_theta3_613c8f46c659f636] = env->getMethodID(cls, "theta3", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_theta4_613c8f46c659f636] = env->getMethodID(cls, "theta4", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldTheta::theta1() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_theta1_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTheta::theta2() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_theta2_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTheta::theta3() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_theta3_613c8f46c659f636]));
          }

          ::org::hipparchus::CalculusFieldElement FieldTheta::theta4() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_theta4_613c8f46c659f636]));
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
          static PyObject *t_FieldTheta_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTheta_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTheta_of_(t_FieldTheta *self, PyObject *args);
          static PyObject *t_FieldTheta_theta1(t_FieldTheta *self);
          static PyObject *t_FieldTheta_theta2(t_FieldTheta *self);
          static PyObject *t_FieldTheta_theta3(t_FieldTheta *self);
          static PyObject *t_FieldTheta_theta4(t_FieldTheta *self);
          static PyObject *t_FieldTheta_get__parameters_(t_FieldTheta *self, void *data);
          static PyGetSetDef t_FieldTheta__fields_[] = {
            DECLARE_GET_FIELD(t_FieldTheta, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldTheta__methods_[] = {
            DECLARE_METHOD(t_FieldTheta, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTheta, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTheta, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldTheta, theta1, METH_NOARGS),
            DECLARE_METHOD(t_FieldTheta, theta2, METH_NOARGS),
            DECLARE_METHOD(t_FieldTheta, theta3, METH_NOARGS),
            DECLARE_METHOD(t_FieldTheta, theta4, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldTheta)[] = {
            { Py_tp_methods, t_FieldTheta__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldTheta__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldTheta)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldTheta, t_FieldTheta, FieldTheta);
          PyObject *t_FieldTheta::wrap_Object(const FieldTheta& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTheta::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTheta *self = (t_FieldTheta *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldTheta::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTheta::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTheta *self = (t_FieldTheta *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldTheta::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldTheta), &PY_TYPE_DEF(FieldTheta), module, "FieldTheta", 0);
          }

          void t_FieldTheta::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTheta), "class_", make_descriptor(FieldTheta::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTheta), "wrapfn_", make_descriptor(t_FieldTheta::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTheta), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldTheta_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldTheta::initializeClass, 1)))
              return NULL;
            return t_FieldTheta::wrap_Object(FieldTheta(((t_FieldTheta *) arg)->object.this$));
          }
          static PyObject *t_FieldTheta_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldTheta::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldTheta_of_(t_FieldTheta *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldTheta_theta1(t_FieldTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.theta1());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTheta_theta2(t_FieldTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.theta2());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTheta_theta3(t_FieldTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.theta3());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldTheta_theta4(t_FieldTheta *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.theta4());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldTheta_get__parameters_(t_FieldTheta *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/definitions/CelestialBodyFrame.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/SpacecraftBodyFrame.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/definitions/OrbitRelativeFrame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *FrameFacade::class$ = NULL;
          jmethodID *FrameFacade::mids$ = NULL;
          bool FrameFacade::live$ = false;

          jclass FrameFacade::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/FrameFacade");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6272cf6621b4982f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;Ljava/lang/String;)V");
              mids$[mid_asCelestialBodyFrame_31bca1b16d563f2b] = env->getMethodID(cls, "asCelestialBodyFrame", "()Lorg/orekit/files/ccsds/definitions/CelestialBodyFrame;");
              mids$[mid_asFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "asFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_asOrbitRelativeFrame_8f84f1568afeba4e] = env->getMethodID(cls, "asOrbitRelativeFrame", "()Lorg/orekit/files/ccsds/definitions/OrbitRelativeFrame;");
              mids$[mid_asSpacecraftBodyFrame_f86371e743965d5e] = env->getMethodID(cls, "asSpacecraftBodyFrame", "()Lorg/orekit/files/ccsds/definitions/SpacecraftBodyFrame;");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getTransform_ae53bb0c5f8772f0] = env->getStaticMethodID(cls, "getTransform", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;Lorg/orekit/files/ccsds/definitions/FrameFacade;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinatesProvider;)Lorg/orekit/frames/Transform;");
              mids$[mid_map_447d75fca7063cf4] = env->getStaticMethodID(cls, "map", "(Lorg/orekit/frames/Frame;)Lorg/orekit/files/ccsds/definitions/FrameFacade;");
              mids$[mid_parse_06aac91ca02a85e1] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;Lorg/orekit/utils/IERSConventions;ZLorg/orekit/data/DataContext;ZZZ)Lorg/orekit/files/ccsds/definitions/FrameFacade;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FrameFacade::FrameFacade(const ::org::orekit::frames::Frame & a0, const ::org::orekit::files::ccsds::definitions::CelestialBodyFrame & a1, const ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame & a2, const ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame & a3, const ::java::lang::String & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6272cf6621b4982f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

          ::org::orekit::files::ccsds::definitions::CelestialBodyFrame FrameFacade::asCelestialBodyFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::CelestialBodyFrame(env->callObjectMethod(this$, mids$[mid_asCelestialBodyFrame_31bca1b16d563f2b]));
          }

          ::org::orekit::frames::Frame FrameFacade::asFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_asFrame_6c9bc0a928c56d4e]));
          }

          ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame FrameFacade::asOrbitRelativeFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame(env->callObjectMethod(this$, mids$[mid_asOrbitRelativeFrame_8f84f1568afeba4e]));
          }

          ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame FrameFacade::asSpacecraftBodyFrame() const
          {
            return ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame(env->callObjectMethod(this$, mids$[mid_asSpacecraftBodyFrame_f86371e743965d5e]));
          }

          ::java::lang::String FrameFacade::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
          }

          ::org::orekit::frames::Transform FrameFacade::getTransform(const FrameFacade & a0, const FrameFacade & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::utils::PVCoordinatesProvider & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::orekit::frames::Transform(env->callStaticObjectMethod(cls, mids$[mid_getTransform_ae53bb0c5f8772f0], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
          }

          FrameFacade FrameFacade::map(const ::org::orekit::frames::Frame & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return FrameFacade(env->callStaticObjectMethod(cls, mids$[mid_map_447d75fca7063cf4], a0.this$));
          }

          FrameFacade FrameFacade::parse(const ::java::lang::String & a0, const ::org::orekit::utils::IERSConventions & a1, jboolean a2, const ::org::orekit::data::DataContext & a3, jboolean a4, jboolean a5, jboolean a6)
          {
            jclass cls = env->getClass(initializeClass);
            return FrameFacade(env->callStaticObjectMethod(cls, mids$[mid_parse_06aac91ca02a85e1], a0.this$, a1.this$, a2, a3.this$, a4, a5, a6));
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
          static PyObject *t_FrameFacade_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FrameFacade_instance_(PyTypeObject *type, PyObject *arg);
          static int t_FrameFacade_init_(t_FrameFacade *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FrameFacade_asCelestialBodyFrame(t_FrameFacade *self);
          static PyObject *t_FrameFacade_asFrame(t_FrameFacade *self);
          static PyObject *t_FrameFacade_asOrbitRelativeFrame(t_FrameFacade *self);
          static PyObject *t_FrameFacade_asSpacecraftBodyFrame(t_FrameFacade *self);
          static PyObject *t_FrameFacade_getName(t_FrameFacade *self);
          static PyObject *t_FrameFacade_getTransform(PyTypeObject *type, PyObject *args);
          static PyObject *t_FrameFacade_map(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FrameFacade_parse(PyTypeObject *type, PyObject *args);
          static PyObject *t_FrameFacade_get__name(t_FrameFacade *self, void *data);
          static PyGetSetDef t_FrameFacade__fields_[] = {
            DECLARE_GET_FIELD(t_FrameFacade, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FrameFacade__methods_[] = {
            DECLARE_METHOD(t_FrameFacade, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FrameFacade, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FrameFacade, asCelestialBodyFrame, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, asFrame, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, asOrbitRelativeFrame, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, asSpacecraftBodyFrame, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, getName, METH_NOARGS),
            DECLARE_METHOD(t_FrameFacade, getTransform, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_FrameFacade, map, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FrameFacade, parse, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FrameFacade)[] = {
            { Py_tp_methods, t_FrameFacade__methods_ },
            { Py_tp_init, (void *) t_FrameFacade_init_ },
            { Py_tp_getset, t_FrameFacade__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FrameFacade)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FrameFacade, t_FrameFacade, FrameFacade);

          void t_FrameFacade::install(PyObject *module)
          {
            installType(&PY_TYPE(FrameFacade), &PY_TYPE_DEF(FrameFacade), module, "FrameFacade", 0);
          }

          void t_FrameFacade::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FrameFacade), "class_", make_descriptor(FrameFacade::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FrameFacade), "wrapfn_", make_descriptor(t_FrameFacade::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FrameFacade), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FrameFacade_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FrameFacade::initializeClass, 1)))
              return NULL;
            return t_FrameFacade::wrap_Object(FrameFacade(((t_FrameFacade *) arg)->object.this$));
          }
          static PyObject *t_FrameFacade_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FrameFacade::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_FrameFacade_init_(t_FrameFacade *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame a3((jobject) NULL);
            ::java::lang::String a4((jobject) NULL);
            FrameFacade object((jobject) NULL);

            if (!parseArgs(args, "kKKks", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::files::ccsds::definitions::CelestialBodyFrame::initializeClass, ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame::initializeClass, ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::parameters_, &a2, &p2, ::org::orekit::files::ccsds::definitions::t_OrbitRelativeFrame::parameters_, &a3, &a4))
            {
              INT_CALL(object = FrameFacade(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FrameFacade_asCelestialBodyFrame(t_FrameFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::CelestialBodyFrame result((jobject) NULL);
            OBJ_CALL(result = self->object.asCelestialBodyFrame());
            return ::org::orekit::files::ccsds::definitions::t_CelestialBodyFrame::wrap_Object(result);
          }

          static PyObject *t_FrameFacade_asFrame(t_FrameFacade *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.asFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_FrameFacade_asOrbitRelativeFrame(t_FrameFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::OrbitRelativeFrame result((jobject) NULL);
            OBJ_CALL(result = self->object.asOrbitRelativeFrame());
            return ::org::orekit::files::ccsds::definitions::t_OrbitRelativeFrame::wrap_Object(result);
          }

          static PyObject *t_FrameFacade_asSpacecraftBodyFrame(t_FrameFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::SpacecraftBodyFrame result((jobject) NULL);
            OBJ_CALL(result = self->object.asSpacecraftBodyFrame());
            return ::org::orekit::files::ccsds::definitions::t_SpacecraftBodyFrame::wrap_Object(result);
          }

          static PyObject *t_FrameFacade_getName(t_FrameFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_FrameFacade_getTransform(PyTypeObject *type, PyObject *args)
          {
            FrameFacade a0((jobject) NULL);
            FrameFacade a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
            ::org::orekit::utils::PVCoordinatesProvider a4((jobject) NULL);
            ::org::orekit::frames::Transform result((jobject) NULL);

            if (!parseArgs(args, "kkkkk", FrameFacade::initializeClass, FrameFacade::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::FrameFacade::getTransform(a0, a1, a2, a3, a4));
              return ::org::orekit::frames::t_Transform::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "getTransform", args);
            return NULL;
          }

          static PyObject *t_FrameFacade_map(PyTypeObject *type, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FrameFacade result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::FrameFacade::map(a0));
              return t_FrameFacade::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "map", arg);
            return NULL;
          }

          static PyObject *t_FrameFacade_parse(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::utils::IERSConventions a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::orekit::data::DataContext a3((jobject) NULL);
            jboolean a4;
            jboolean a5;
            jboolean a6;
            FrameFacade result((jobject) NULL);

            if (!parseArgs(args, "sKZkZZZ", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_IERSConventions::parameters_, &a2, &a3, &a4, &a5, &a6))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::FrameFacade::parse(a0, a1, a2, a3, a4, a5, a6));
              return t_FrameFacade::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", args);
            return NULL;
          }

          static PyObject *t_FrameFacade_get__name(t_FrameFacade *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/TurnAroundRangeIonosphericDelayModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *TurnAroundRangeIonosphericDelayModifier::class$ = NULL;
          jmethodID *TurnAroundRangeIonosphericDelayModifier::mids$ = NULL;
          bool TurnAroundRangeIonosphericDelayModifier::live$ = false;

          jclass TurnAroundRangeIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/TurnAroundRangeIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_69c6b2cabec159dd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_0054a497255e8220] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TurnAroundRangeIonosphericDelayModifier::TurnAroundRangeIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_69c6b2cabec159dd, a0.this$, a1)) {}

          ::java::util::List TurnAroundRangeIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void TurnAroundRangeIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0054a497255e8220], a0.this$);
          }

          void TurnAroundRangeIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TurnAroundRangeIonosphericDelayModifier_init_(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_getParametersDrivers(t_TurnAroundRangeIonosphericDelayModifier *self);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_modify(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_modifyWithoutDerivatives(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_get__parametersDrivers(t_TurnAroundRangeIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_TurnAroundRangeIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_TurnAroundRangeIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TurnAroundRangeIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_TurnAroundRangeIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TurnAroundRangeIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_TurnAroundRangeIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_TurnAroundRangeIonosphericDelayModifier_init_ },
            { Py_tp_getset, t_TurnAroundRangeIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TurnAroundRangeIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TurnAroundRangeIonosphericDelayModifier, t_TurnAroundRangeIonosphericDelayModifier, TurnAroundRangeIonosphericDelayModifier);

          void t_TurnAroundRangeIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(TurnAroundRangeIonosphericDelayModifier), &PY_TYPE_DEF(TurnAroundRangeIonosphericDelayModifier), module, "TurnAroundRangeIonosphericDelayModifier", 0);
          }

          void t_TurnAroundRangeIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeIonosphericDelayModifier), "class_", make_descriptor(TurnAroundRangeIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeIonosphericDelayModifier), "wrapfn_", make_descriptor(t_TurnAroundRangeIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRangeIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TurnAroundRangeIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_TurnAroundRangeIonosphericDelayModifier::wrap_Object(TurnAroundRangeIonosphericDelayModifier(((t_TurnAroundRangeIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TurnAroundRangeIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TurnAroundRangeIonosphericDelayModifier_init_(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            TurnAroundRangeIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TurnAroundRangeIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_getParametersDrivers(t_TurnAroundRangeIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_modify(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_modifyWithoutDerivatives(t_TurnAroundRangeIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_TurnAroundRangeIonosphericDelayModifier_get__parametersDrivers(t_TurnAroundRangeIonosphericDelayModifier *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/PythonNdmConstituent.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *PythonNdmConstituent::class$ = NULL;
          jmethodID *PythonNdmConstituent::mids$ = NULL;
          bool PythonNdmConstituent::live$ = false;

          jclass PythonNdmConstituent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/PythonNdmConstituent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3744512ad200554d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/Header;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
              mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getConventions_690653480c12ac72] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
              mids$[mid_getDataContext_b259b25d6495e5b3] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
              mids$[mid_getHeader_6fe6597816e9e593] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/section/Header;");
              mids$[mid_getSegments_0d9551367f7ecdef] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
              mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_validate_0640e6acf969ed28] = env->getMethodID(cls, "validate", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonNdmConstituent::PythonNdmConstituent(const ::org::orekit::files::ccsds::section::Header & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_3744512ad200554d, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          void PythonNdmConstituent::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
          }

          ::org::orekit::utils::IERSConventions PythonNdmConstituent::getConventions() const
          {
            return ::org::orekit::utils::IERSConventions(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_getConventions_690653480c12ac72]));
          }

          ::org::orekit::data::DataContext PythonNdmConstituent::getDataContext() const
          {
            return ::org::orekit::data::DataContext(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_getDataContext_b259b25d6495e5b3]));
          }

          ::org::orekit::files::ccsds::section::Header PythonNdmConstituent::getHeader() const
          {
            return ::org::orekit::files::ccsds::section::Header(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_getHeader_6fe6597816e9e593]));
          }

          ::java::util::List PythonNdmConstituent::getSegments() const
          {
            return ::java::util::List(env->callNonvirtualObjectMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_getSegments_0d9551367f7ecdef]));
          }

          jlong PythonNdmConstituent::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
          }

          void PythonNdmConstituent::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
          }

          void PythonNdmConstituent::validate() const
          {
            env->callNonvirtualVoidMethod(this$, (jclass) ::org::orekit::files::ccsds::ndm::NdmConstituent::class$->this$, ::org::orekit::files::ccsds::ndm::NdmConstituent::mids$[::org::orekit::files::ccsds::ndm::NdmConstituent::mid_validate_0640e6acf969ed28]);
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
          static PyObject *t_PythonNdmConstituent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonNdmConstituent_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonNdmConstituent_of_(t_PythonNdmConstituent *self, PyObject *args);
          static int t_PythonNdmConstituent_init_(t_PythonNdmConstituent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonNdmConstituent_finalize(t_PythonNdmConstituent *self);
          static PyObject *t_PythonNdmConstituent_getConventions(t_PythonNdmConstituent *self, PyObject *args);
          static PyObject *t_PythonNdmConstituent_getDataContext(t_PythonNdmConstituent *self, PyObject *args);
          static PyObject *t_PythonNdmConstituent_getHeader(t_PythonNdmConstituent *self, PyObject *args);
          static PyObject *t_PythonNdmConstituent_getSegments(t_PythonNdmConstituent *self, PyObject *args);
          static PyObject *t_PythonNdmConstituent_pythonExtension(t_PythonNdmConstituent *self, PyObject *args);
          static PyObject *t_PythonNdmConstituent_validate(t_PythonNdmConstituent *self, PyObject *args);
          static jobject JNICALL t_PythonNdmConstituent_getConventions0(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNdmConstituent_getDataContext1(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNdmConstituent_getHeader2(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNdmConstituent_getSegments3(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonNdmConstituent_pythonDecRef4(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonNdmConstituent_validate5(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonNdmConstituent_get__self(t_PythonNdmConstituent *self, void *data);
          static PyObject *t_PythonNdmConstituent_get__parameters_(t_PythonNdmConstituent *self, void *data);
          static PyGetSetDef t_PythonNdmConstituent__fields_[] = {
            DECLARE_GET_FIELD(t_PythonNdmConstituent, self),
            DECLARE_GET_FIELD(t_PythonNdmConstituent, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonNdmConstituent__methods_[] = {
            DECLARE_METHOD(t_PythonNdmConstituent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNdmConstituent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNdmConstituent, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, getConventions, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, getDataContext, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, getHeader, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, getSegments, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, pythonExtension, METH_VARARGS),
            DECLARE_METHOD(t_PythonNdmConstituent, validate, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonNdmConstituent)[] = {
            { Py_tp_methods, t_PythonNdmConstituent__methods_ },
            { Py_tp_init, (void *) t_PythonNdmConstituent_init_ },
            { Py_tp_getset, t_PythonNdmConstituent__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonNdmConstituent)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
            NULL
          };

          DEFINE_TYPE(PythonNdmConstituent, t_PythonNdmConstituent, PythonNdmConstituent);
          PyObject *t_PythonNdmConstituent::wrap_Object(const PythonNdmConstituent& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonNdmConstituent::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonNdmConstituent *self = (t_PythonNdmConstituent *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_PythonNdmConstituent::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_PythonNdmConstituent::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonNdmConstituent *self = (t_PythonNdmConstituent *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_PythonNdmConstituent::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonNdmConstituent), &PY_TYPE_DEF(PythonNdmConstituent), module, "PythonNdmConstituent", 1);
          }

          void t_PythonNdmConstituent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNdmConstituent), "class_", make_descriptor(PythonNdmConstituent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNdmConstituent), "wrapfn_", make_descriptor(t_PythonNdmConstituent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNdmConstituent), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonNdmConstituent::initializeClass);
            JNINativeMethod methods[] = {
              { "getConventions", "()Lorg/orekit/utils/IERSConventions;", (void *) t_PythonNdmConstituent_getConventions0 },
              { "getDataContext", "()Lorg/orekit/data/DataContext;", (void *) t_PythonNdmConstituent_getDataContext1 },
              { "getHeader", "()Lorg/orekit/files/ccsds/section/Header;", (void *) t_PythonNdmConstituent_getHeader2 },
              { "getSegments", "()Ljava/util/List;", (void *) t_PythonNdmConstituent_getSegments3 },
              { "pythonDecRef", "()V", (void *) t_PythonNdmConstituent_pythonDecRef4 },
              { "validate", "()V", (void *) t_PythonNdmConstituent_validate5 },
            };
            env->registerNatives(cls, methods, 6);
          }

          static PyObject *t_PythonNdmConstituent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonNdmConstituent::initializeClass, 1)))
              return NULL;
            return t_PythonNdmConstituent::wrap_Object(PythonNdmConstituent(((t_PythonNdmConstituent *) arg)->object.this$));
          }
          static PyObject *t_PythonNdmConstituent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonNdmConstituent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonNdmConstituent_of_(t_PythonNdmConstituent *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonNdmConstituent_init_(t_PythonNdmConstituent *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::ccsds::section::Header a0((jobject) NULL);
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::IERSConventions a2((jobject) NULL);
            PyTypeObject **p2;
            ::org::orekit::data::DataContext a3((jobject) NULL);
            PythonNdmConstituent object((jobject) NULL);

            if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::section::Header::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
            {
              INT_CALL(object = PythonNdmConstituent(a0, a1, a2, a3));
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

          static PyObject *t_PythonNdmConstituent_finalize(t_PythonNdmConstituent *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonNdmConstituent_getConventions(t_PythonNdmConstituent *self, PyObject *args)
          {
            ::org::orekit::utils::IERSConventions result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getConventions());
              return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PythonNdmConstituent), (PyObject *) self, "getConventions", args, 2);
          }

          static PyObject *t_PythonNdmConstituent_getDataContext(t_PythonNdmConstituent *self, PyObject *args)
          {
            ::org::orekit::data::DataContext result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getDataContext());
              return ::org::orekit::data::t_DataContext::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PythonNdmConstituent), (PyObject *) self, "getDataContext", args, 2);
          }

          static PyObject *t_PythonNdmConstituent_getHeader(t_PythonNdmConstituent *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::section::Header result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getHeader());
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::ccsds::section::t_Header::wrap_Object(result);
            }

            return callSuper(PY_TYPE(PythonNdmConstituent), (PyObject *) self, "getHeader", args, 2);
          }

          static PyObject *t_PythonNdmConstituent_getSegments(t_PythonNdmConstituent *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSegments());
              return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
            }

            return callSuper(PY_TYPE(PythonNdmConstituent), (PyObject *) self, "getSegments", args, 2);
          }

          static PyObject *t_PythonNdmConstituent_pythonExtension(t_PythonNdmConstituent *self, PyObject *args)
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

          static PyObject *t_PythonNdmConstituent_validate(t_PythonNdmConstituent *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.validate());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(PythonNdmConstituent), (PyObject *) self, "validate", args, 2);
          }

          static jobject JNICALL t_PythonNdmConstituent_getConventions0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::utils::IERSConventions value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getConventions", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::utils::IERSConventions::initializeClass, &value))
            {
              throwTypeError("getConventions", result);
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

          static jobject JNICALL t_PythonNdmConstituent_getDataContext1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::data::DataContext value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getDataContext", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::data::DataContext::initializeClass, &value))
            {
              throwTypeError("getDataContext", result);
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

          static jobject JNICALL t_PythonNdmConstituent_getHeader2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getHeader", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::files::ccsds::section::Header::initializeClass, &value))
            {
              throwTypeError("getHeader", result);
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

          static jobject JNICALL t_PythonNdmConstituent_getSegments3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::java::util::List value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getSegments", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
            {
              throwTypeError("getSegments", result);
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

          static void JNICALL t_PythonNdmConstituent_pythonDecRef4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static void JNICALL t_PythonNdmConstituent_validate5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNdmConstituent::mids$[PythonNdmConstituent::mid_pythonExtension_9e26256fb0d384a2]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *result = PyObject_CallMethod(obj, "validate", "");
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static PyObject *t_PythonNdmConstituent_get__self(t_PythonNdmConstituent *self, void *data)
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
          static PyObject *t_PythonNdmConstituent_get__parameters_(t_PythonNdmConstituent *self, void *data)
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
#include "org/hipparchus/optim/BaseMultiStartMultivariateOptimizer.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
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
          mids$[mid_init$_7ce13107fac339ad] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/optim/BaseMultivariateOptimizer;ILorg/hipparchus/random/RandomVectorGenerator;)V");
          mids$[mid_getEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getOptima_6555a5198c71b73a] = env->getMethodID(cls, "getOptima", "()[Ljava/lang/Object;");
          mids$[mid_optimize_531d71f92ce59bee] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Ljava/lang/Object;");
          mids$[mid_doOptimize_e661fe3ba2fafb22] = env->getMethodID(cls, "doOptimize", "()Ljava/lang/Object;");
          mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
          mids$[mid_store_009757f2c0fd9090] = env->getMethodID(cls, "store", "(Ljava/lang/Object;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BaseMultiStartMultivariateOptimizer::BaseMultiStartMultivariateOptimizer(const ::org::hipparchus::optim::BaseMultivariateOptimizer & a0, jint a1, const ::org::hipparchus::random::RandomVectorGenerator & a2) : ::org::hipparchus::optim::BaseMultivariateOptimizer(env->newObject(initializeClass, &mids$, mid_init$_7ce13107fac339ad, a0.this$, a1, a2.this$)) {}

      jint BaseMultiStartMultivariateOptimizer::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_412668abc8d889e9]);
      }

      JArray< ::java::lang::Object > BaseMultiStartMultivariateOptimizer::getOptima() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getOptima_6555a5198c71b73a]));
      }

      ::java::lang::Object BaseMultiStartMultivariateOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_optimize_531d71f92ce59bee], a0.this$));
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
#include "org/hipparchus/random/UnitSphereRandomVectorGenerator.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *UnitSphereRandomVectorGenerator::class$ = NULL;
      jmethodID *UnitSphereRandomVectorGenerator::mids$ = NULL;
      bool UnitSphereRandomVectorGenerator::live$ = false;

      jclass UnitSphereRandomVectorGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/UnitSphereRandomVectorGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a3da1a935cb37f7b] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_c6a557dcc2f97b72] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/random/RandomGenerator;)V");
          mids$[mid_nextVector_a53a7513ecedada2] = env->getMethodID(cls, "nextVector", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UnitSphereRandomVectorGenerator::UnitSphereRandomVectorGenerator(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3da1a935cb37f7b, a0)) {}

      UnitSphereRandomVectorGenerator::UnitSphereRandomVectorGenerator(jint a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c6a557dcc2f97b72, a0, a1.this$)) {}

      JArray< jdouble > UnitSphereRandomVectorGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_a53a7513ecedada2]));
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
      static PyObject *t_UnitSphereRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnitSphereRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UnitSphereRandomVectorGenerator_init_(t_UnitSphereRandomVectorGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UnitSphereRandomVectorGenerator_nextVector(t_UnitSphereRandomVectorGenerator *self);

      static PyMethodDef t_UnitSphereRandomVectorGenerator__methods_[] = {
        DECLARE_METHOD(t_UnitSphereRandomVectorGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnitSphereRandomVectorGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnitSphereRandomVectorGenerator, nextVector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnitSphereRandomVectorGenerator)[] = {
        { Py_tp_methods, t_UnitSphereRandomVectorGenerator__methods_ },
        { Py_tp_init, (void *) t_UnitSphereRandomVectorGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnitSphereRandomVectorGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnitSphereRandomVectorGenerator, t_UnitSphereRandomVectorGenerator, UnitSphereRandomVectorGenerator);

      void t_UnitSphereRandomVectorGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(UnitSphereRandomVectorGenerator), &PY_TYPE_DEF(UnitSphereRandomVectorGenerator), module, "UnitSphereRandomVectorGenerator", 0);
      }

      void t_UnitSphereRandomVectorGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnitSphereRandomVectorGenerator), "class_", make_descriptor(UnitSphereRandomVectorGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnitSphereRandomVectorGenerator), "wrapfn_", make_descriptor(t_UnitSphereRandomVectorGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnitSphereRandomVectorGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnitSphereRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnitSphereRandomVectorGenerator::initializeClass, 1)))
          return NULL;
        return t_UnitSphereRandomVectorGenerator::wrap_Object(UnitSphereRandomVectorGenerator(((t_UnitSphereRandomVectorGenerator *) arg)->object.this$));
      }
      static PyObject *t_UnitSphereRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnitSphereRandomVectorGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UnitSphereRandomVectorGenerator_init_(t_UnitSphereRandomVectorGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            UnitSphereRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = UnitSphereRandomVectorGenerator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
            UnitSphereRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
            {
              INT_CALL(object = UnitSphereRandomVectorGenerator(a0, a1));
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

      static PyObject *t_UnitSphereRandomVectorGenerator_nextVector(t_UnitSphereRandomVectorGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/StorelessMultivariateStatistic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *StorelessMultivariateStatistic::class$ = NULL;
        jmethodID *StorelessMultivariateStatistic::mids$ = NULL;
        bool StorelessMultivariateStatistic::live$ = false;

        jclass StorelessMultivariateStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/StorelessMultivariateStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_clear_0640e6acf969ed28] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getN_9e26256fb0d384a2] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getResult_a53a7513ecedada2] = env->getMethodID(cls, "getResult", "()[D");
            mids$[mid_increment_cc18240f4a737f14] = env->getMethodID(cls, "increment", "([D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void StorelessMultivariateStatistic::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0640e6acf969ed28]);
        }

        jint StorelessMultivariateStatistic::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
        }

        jlong StorelessMultivariateStatistic::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_9e26256fb0d384a2]);
        }

        JArray< jdouble > StorelessMultivariateStatistic::getResult() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getResult_a53a7513ecedada2]));
        }

        void StorelessMultivariateStatistic::increment(const JArray< jdouble > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_increment_cc18240f4a737f14], a0.this$);
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
        static PyObject *t_StorelessMultivariateStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessMultivariateStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StorelessMultivariateStatistic_clear(t_StorelessMultivariateStatistic *self);
        static PyObject *t_StorelessMultivariateStatistic_getDimension(t_StorelessMultivariateStatistic *self);
        static PyObject *t_StorelessMultivariateStatistic_getN(t_StorelessMultivariateStatistic *self);
        static PyObject *t_StorelessMultivariateStatistic_getResult(t_StorelessMultivariateStatistic *self);
        static PyObject *t_StorelessMultivariateStatistic_increment(t_StorelessMultivariateStatistic *self, PyObject *arg);
        static PyObject *t_StorelessMultivariateStatistic_get__dimension(t_StorelessMultivariateStatistic *self, void *data);
        static PyObject *t_StorelessMultivariateStatistic_get__n(t_StorelessMultivariateStatistic *self, void *data);
        static PyObject *t_StorelessMultivariateStatistic_get__result(t_StorelessMultivariateStatistic *self, void *data);
        static PyGetSetDef t_StorelessMultivariateStatistic__fields_[] = {
          DECLARE_GET_FIELD(t_StorelessMultivariateStatistic, dimension),
          DECLARE_GET_FIELD(t_StorelessMultivariateStatistic, n),
          DECLARE_GET_FIELD(t_StorelessMultivariateStatistic, result),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StorelessMultivariateStatistic__methods_[] = {
          DECLARE_METHOD(t_StorelessMultivariateStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, clear, METH_NOARGS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, getN, METH_NOARGS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, getResult, METH_NOARGS),
          DECLARE_METHOD(t_StorelessMultivariateStatistic, increment, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StorelessMultivariateStatistic)[] = {
          { Py_tp_methods, t_StorelessMultivariateStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StorelessMultivariateStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StorelessMultivariateStatistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StorelessMultivariateStatistic, t_StorelessMultivariateStatistic, StorelessMultivariateStatistic);

        void t_StorelessMultivariateStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(StorelessMultivariateStatistic), &PY_TYPE_DEF(StorelessMultivariateStatistic), module, "StorelessMultivariateStatistic", 0);
        }

        void t_StorelessMultivariateStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessMultivariateStatistic), "class_", make_descriptor(StorelessMultivariateStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessMultivariateStatistic), "wrapfn_", make_descriptor(t_StorelessMultivariateStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StorelessMultivariateStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StorelessMultivariateStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StorelessMultivariateStatistic::initializeClass, 1)))
            return NULL;
          return t_StorelessMultivariateStatistic::wrap_Object(StorelessMultivariateStatistic(((t_StorelessMultivariateStatistic *) arg)->object.this$));
        }
        static PyObject *t_StorelessMultivariateStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StorelessMultivariateStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StorelessMultivariateStatistic_clear(t_StorelessMultivariateStatistic *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_StorelessMultivariateStatistic_getDimension(t_StorelessMultivariateStatistic *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_StorelessMultivariateStatistic_getN(t_StorelessMultivariateStatistic *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_StorelessMultivariateStatistic_getResult(t_StorelessMultivariateStatistic *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getResult());
          return result.wrap();
        }

        static PyObject *t_StorelessMultivariateStatistic_increment(t_StorelessMultivariateStatistic *self, PyObject *arg)
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

        static PyObject *t_StorelessMultivariateStatistic_get__dimension(t_StorelessMultivariateStatistic *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_StorelessMultivariateStatistic_get__n(t_StorelessMultivariateStatistic *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_StorelessMultivariateStatistic_get__result(t_StorelessMultivariateStatistic *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getResult());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fitting/SimpleCurveFitter.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/fitting/SimpleCurveFitter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fitting {

      ::java::lang::Class *SimpleCurveFitter::class$ = NULL;
      jmethodID *SimpleCurveFitter::mids$ = NULL;
      bool SimpleCurveFitter::live$ = false;

      jclass SimpleCurveFitter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fitting/SimpleCurveFitter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_create_8ec06fcc46382de0] = env->getStaticMethodID(cls, "create", "(Lorg/hipparchus/analysis/ParametricUnivariateFunction;[D)Lorg/hipparchus/fitting/SimpleCurveFitter;");
          mids$[mid_withMaxIterations_5c95e64bba1aeebd] = env->getMethodID(cls, "withMaxIterations", "(I)Lorg/hipparchus/fitting/SimpleCurveFitter;");
          mids$[mid_withStartPoint_f4e13846c23280ea] = env->getMethodID(cls, "withStartPoint", "([D)Lorg/hipparchus/fitting/SimpleCurveFitter;");
          mids$[mid_getProblem_cf073573d4101d89] = env->getMethodID(cls, "getProblem", "(Ljava/util/Collection;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleCurveFitter SimpleCurveFitter::create(const ::org::hipparchus::analysis::ParametricUnivariateFunction & a0, const JArray< jdouble > & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return SimpleCurveFitter(env->callStaticObjectMethod(cls, mids$[mid_create_8ec06fcc46382de0], a0.this$, a1.this$));
      }

      SimpleCurveFitter SimpleCurveFitter::withMaxIterations(jint a0) const
      {
        return SimpleCurveFitter(env->callObjectMethod(this$, mids$[mid_withMaxIterations_5c95e64bba1aeebd], a0));
      }

      SimpleCurveFitter SimpleCurveFitter::withStartPoint(const JArray< jdouble > & a0) const
      {
        return SimpleCurveFitter(env->callObjectMethod(this$, mids$[mid_withStartPoint_f4e13846c23280ea], a0.this$));
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
      static PyObject *t_SimpleCurveFitter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleCurveFitter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleCurveFitter_create(PyTypeObject *type, PyObject *args);
      static PyObject *t_SimpleCurveFitter_withMaxIterations(t_SimpleCurveFitter *self, PyObject *arg);
      static PyObject *t_SimpleCurveFitter_withStartPoint(t_SimpleCurveFitter *self, PyObject *arg);

      static PyMethodDef t_SimpleCurveFitter__methods_[] = {
        DECLARE_METHOD(t_SimpleCurveFitter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleCurveFitter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleCurveFitter, create, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SimpleCurveFitter, withMaxIterations, METH_O),
        DECLARE_METHOD(t_SimpleCurveFitter, withStartPoint, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleCurveFitter)[] = {
        { Py_tp_methods, t_SimpleCurveFitter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleCurveFitter)[] = {
        &PY_TYPE_DEF(::org::hipparchus::fitting::AbstractCurveFitter),
        NULL
      };

      DEFINE_TYPE(SimpleCurveFitter, t_SimpleCurveFitter, SimpleCurveFitter);

      void t_SimpleCurveFitter::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleCurveFitter), &PY_TYPE_DEF(SimpleCurveFitter), module, "SimpleCurveFitter", 0);
      }

      void t_SimpleCurveFitter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleCurveFitter), "class_", make_descriptor(SimpleCurveFitter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleCurveFitter), "wrapfn_", make_descriptor(t_SimpleCurveFitter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleCurveFitter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleCurveFitter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleCurveFitter::initializeClass, 1)))
          return NULL;
        return t_SimpleCurveFitter::wrap_Object(SimpleCurveFitter(((t_SimpleCurveFitter *) arg)->object.this$));
      }
      static PyObject *t_SimpleCurveFitter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleCurveFitter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleCurveFitter_create(PyTypeObject *type, PyObject *args)
      {
        ::org::hipparchus::analysis::ParametricUnivariateFunction a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);
        SimpleCurveFitter result((jobject) NULL);

        if (!parseArgs(args, "k[D", ::org::hipparchus::analysis::ParametricUnivariateFunction::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::fitting::SimpleCurveFitter::create(a0, a1));
          return t_SimpleCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", args);
        return NULL;
      }

      static PyObject *t_SimpleCurveFitter_withMaxIterations(t_SimpleCurveFitter *self, PyObject *arg)
      {
        jint a0;
        SimpleCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaxIterations(a0));
          return t_SimpleCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaxIterations", arg);
        return NULL;
      }

      static PyObject *t_SimpleCurveFitter_withStartPoint(t_SimpleCurveFitter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        SimpleCurveFitter result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.withStartPoint(a0));
          return t_SimpleCurveFitter::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withStartPoint", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *Control3DVectorCostType::class$ = NULL;
        jmethodID *Control3DVectorCostType::mids$ = NULL;
        bool Control3DVectorCostType::live$ = false;
        Control3DVectorCostType *Control3DVectorCostType::INF_NORM = NULL;
        Control3DVectorCostType *Control3DVectorCostType::NONE = NULL;
        Control3DVectorCostType *Control3DVectorCostType::ONE_NORM = NULL;
        Control3DVectorCostType *Control3DVectorCostType::TWO_NORM = NULL;

        jclass Control3DVectorCostType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/Control3DVectorCostType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_evaluate_b2798c156647508e] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_evaluate_8ddca7bd73e586da] = env->getMethodID(cls, "evaluate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
            mids$[mid_valueOf_416610b402bb077c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
            mids$[mid_values_c44b5897b1d29c77] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            INF_NORM = new Control3DVectorCostType(env->getStaticObjectField(cls, "INF_NORM", "Lorg/orekit/forces/maneuvers/Control3DVectorCostType;"));
            NONE = new Control3DVectorCostType(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/forces/maneuvers/Control3DVectorCostType;"));
            ONE_NORM = new Control3DVectorCostType(env->getStaticObjectField(cls, "ONE_NORM", "Lorg/orekit/forces/maneuvers/Control3DVectorCostType;"));
            TWO_NORM = new Control3DVectorCostType(env->getStaticObjectField(cls, "TWO_NORM", "Lorg/orekit/forces/maneuvers/Control3DVectorCostType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement Control3DVectorCostType::evaluate(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_evaluate_b2798c156647508e], a0.this$));
        }

        jdouble Control3DVectorCostType::evaluate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_evaluate_8ddca7bd73e586da], a0.this$);
        }

        Control3DVectorCostType Control3DVectorCostType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Control3DVectorCostType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_416610b402bb077c], a0.this$));
        }

        JArray< Control3DVectorCostType > Control3DVectorCostType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Control3DVectorCostType >(env->callStaticObjectMethod(cls, mids$[mid_values_c44b5897b1d29c77]));
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
        static PyObject *t_Control3DVectorCostType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Control3DVectorCostType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Control3DVectorCostType_of_(t_Control3DVectorCostType *self, PyObject *args);
        static PyObject *t_Control3DVectorCostType_evaluate(t_Control3DVectorCostType *self, PyObject *args);
        static PyObject *t_Control3DVectorCostType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Control3DVectorCostType_values(PyTypeObject *type);
        static PyObject *t_Control3DVectorCostType_get__parameters_(t_Control3DVectorCostType *self, void *data);
        static PyGetSetDef t_Control3DVectorCostType__fields_[] = {
          DECLARE_GET_FIELD(t_Control3DVectorCostType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Control3DVectorCostType__methods_[] = {
          DECLARE_METHOD(t_Control3DVectorCostType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Control3DVectorCostType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Control3DVectorCostType, of_, METH_VARARGS),
          DECLARE_METHOD(t_Control3DVectorCostType, evaluate, METH_VARARGS),
          DECLARE_METHOD(t_Control3DVectorCostType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Control3DVectorCostType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Control3DVectorCostType)[] = {
          { Py_tp_methods, t_Control3DVectorCostType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Control3DVectorCostType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Control3DVectorCostType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Control3DVectorCostType, t_Control3DVectorCostType, Control3DVectorCostType);
        PyObject *t_Control3DVectorCostType::wrap_Object(const Control3DVectorCostType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Control3DVectorCostType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Control3DVectorCostType *self = (t_Control3DVectorCostType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Control3DVectorCostType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Control3DVectorCostType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Control3DVectorCostType *self = (t_Control3DVectorCostType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Control3DVectorCostType::install(PyObject *module)
        {
          installType(&PY_TYPE(Control3DVectorCostType), &PY_TYPE_DEF(Control3DVectorCostType), module, "Control3DVectorCostType", 0);
        }

        void t_Control3DVectorCostType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "class_", make_descriptor(Control3DVectorCostType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "wrapfn_", make_descriptor(t_Control3DVectorCostType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "boxfn_", make_descriptor(boxObject));
          env->getClass(Control3DVectorCostType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "INF_NORM", make_descriptor(t_Control3DVectorCostType::wrap_Object(*Control3DVectorCostType::INF_NORM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "NONE", make_descriptor(t_Control3DVectorCostType::wrap_Object(*Control3DVectorCostType::NONE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "ONE_NORM", make_descriptor(t_Control3DVectorCostType::wrap_Object(*Control3DVectorCostType::ONE_NORM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Control3DVectorCostType), "TWO_NORM", make_descriptor(t_Control3DVectorCostType::wrap_Object(*Control3DVectorCostType::TWO_NORM)));
        }

        static PyObject *t_Control3DVectorCostType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Control3DVectorCostType::initializeClass, 1)))
            return NULL;
          return t_Control3DVectorCostType::wrap_Object(Control3DVectorCostType(((t_Control3DVectorCostType *) arg)->object.this$));
        }
        static PyObject *t_Control3DVectorCostType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Control3DVectorCostType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Control3DVectorCostType_of_(t_Control3DVectorCostType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Control3DVectorCostType_evaluate(t_Control3DVectorCostType *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.evaluate(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "evaluate", args);
          return NULL;
        }

        static PyObject *t_Control3DVectorCostType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Control3DVectorCostType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::forces::maneuvers::Control3DVectorCostType::valueOf(a0));
            return t_Control3DVectorCostType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Control3DVectorCostType_values(PyTypeObject *type)
        {
          JArray< Control3DVectorCostType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::forces::maneuvers::Control3DVectorCostType::values());
          return JArray<jobject>(result.this$).wrap(t_Control3DVectorCostType::wrap_jobject);
        }
        static PyObject *t_Control3DVectorCostType_get__parameters_(t_Control3DVectorCostType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/carlson/CarlsonEllipticIntegral.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace carlson {

          ::java::lang::Class *CarlsonEllipticIntegral::class$ = NULL;
          jmethodID *CarlsonEllipticIntegral::mids$ = NULL;
          bool CarlsonEllipticIntegral::live$ = false;

          jclass CarlsonEllipticIntegral::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/carlson/CarlsonEllipticIntegral");

              mids$ = new jmethodID[max_mid];
              mids$[mid_rC_600605bb97069728] = env->getStaticMethodID(cls, "rC", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rC_c07eaa4a298b48d0] = env->getStaticMethodID(cls, "rC", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rC_2268d18be49a6087] = env->getStaticMethodID(cls, "rC", "(DD)D");
              mids$[mid_rC_d5f58731bcb8a011] = env->getStaticMethodID(cls, "rC", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rD_6156fa5f0dbd9ed3] = env->getStaticMethodID(cls, "rD", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rD_97a60df2e559f4a4] = env->getStaticMethodID(cls, "rD", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rD_8d02ba458f22e508] = env->getStaticMethodID(cls, "rD", "(DDD)D");
              mids$[mid_rD_d181e731358aa045] = env->getStaticMethodID(cls, "rD", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rF_6156fa5f0dbd9ed3] = env->getStaticMethodID(cls, "rF", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rF_97a60df2e559f4a4] = env->getStaticMethodID(cls, "rF", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rF_8d02ba458f22e508] = env->getStaticMethodID(cls, "rF", "(DDD)D");
              mids$[mid_rF_d181e731358aa045] = env->getStaticMethodID(cls, "rF", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rG_6156fa5f0dbd9ed3] = env->getStaticMethodID(cls, "rG", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rG_97a60df2e559f4a4] = env->getStaticMethodID(cls, "rG", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rG_8d02ba458f22e508] = env->getStaticMethodID(cls, "rG", "(DDD)D");
              mids$[mid_rG_d181e731358aa045] = env->getStaticMethodID(cls, "rG", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rJ_7d14c7027947a4b0] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rJ_bb0e7d413a12990c] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rJ_79d60f5d1a9d8623] = env->getStaticMethodID(cls, "rJ", "(DDDD)D");
              mids$[mid_rJ_b36bbc15a8c16f64] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rJ_966a0b2762c4840a] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rJ_fdfcd218305d4c4f] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rJ_765cc6b7207cf0fc] = env->getStaticMethodID(cls, "rJ", "(DDDDD)D");
              mids$[mid_rJ_10a75391cb060c92] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rC(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rC_600605bb97069728], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rC(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rC_c07eaa4a298b48d0], a0.this$, a1.this$));
          }

          jdouble CarlsonEllipticIntegral::rC(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rC_2268d18be49a6087], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rC(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rC_d5f58731bcb8a011], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rD(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rD_6156fa5f0dbd9ed3], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rD(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rD_97a60df2e559f4a4], a0.this$, a1.this$, a2.this$));
          }

          jdouble CarlsonEllipticIntegral::rD(jdouble a0, jdouble a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rD_8d02ba458f22e508], a0, a1, a2);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rD(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rD_d181e731358aa045], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rF(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rF_6156fa5f0dbd9ed3], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rF(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rF_97a60df2e559f4a4], a0.this$, a1.this$, a2.this$));
          }

          jdouble CarlsonEllipticIntegral::rF(jdouble a0, jdouble a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rF_8d02ba458f22e508], a0, a1, a2);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rF(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rF_d181e731358aa045], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rG(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rG_6156fa5f0dbd9ed3], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rG(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rG_97a60df2e559f4a4], a0.this$, a1.this$, a2.this$));
          }

          jdouble CarlsonEllipticIntegral::rG(jdouble a0, jdouble a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rG_8d02ba458f22e508], a0, a1, a2);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rG(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rG_d181e731358aa045], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rJ(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2, const ::org::hipparchus::complex::Complex & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rJ_7d14c7027947a4b0], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rJ(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2, const ::org::hipparchus::complex::FieldComplex & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rJ_bb0e7d413a12990c], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble CarlsonEllipticIntegral::rJ(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rJ_79d60f5d1a9d8623], a0, a1, a2, a3);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rJ(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rJ_b36bbc15a8c16f64], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rJ(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2, const ::org::hipparchus::complex::Complex & a3, const ::org::hipparchus::complex::Complex & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rJ_966a0b2762c4840a], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rJ(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2, const ::org::hipparchus::complex::FieldComplex & a3, const ::org::hipparchus::complex::FieldComplex & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rJ_fdfcd218305d4c4f], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
          }

          jdouble CarlsonEllipticIntegral::rJ(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rJ_765cc6b7207cf0fc], a0, a1, a2, a3, a4);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rJ(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rJ_10a75391cb060c92], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
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
        namespace carlson {
          static PyObject *t_CarlsonEllipticIntegral_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarlsonEllipticIntegral_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarlsonEllipticIntegral_rC(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarlsonEllipticIntegral_rD(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarlsonEllipticIntegral_rF(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarlsonEllipticIntegral_rG(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarlsonEllipticIntegral_rJ(PyTypeObject *type, PyObject *args);

          static PyMethodDef t_CarlsonEllipticIntegral__methods_[] = {
            DECLARE_METHOD(t_CarlsonEllipticIntegral, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rC, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rD, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rF, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rG, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rJ, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CarlsonEllipticIntegral)[] = {
            { Py_tp_methods, t_CarlsonEllipticIntegral__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CarlsonEllipticIntegral)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CarlsonEllipticIntegral, t_CarlsonEllipticIntegral, CarlsonEllipticIntegral);

          void t_CarlsonEllipticIntegral::install(PyObject *module)
          {
            installType(&PY_TYPE(CarlsonEllipticIntegral), &PY_TYPE_DEF(CarlsonEllipticIntegral), module, "CarlsonEllipticIntegral", 0);
          }

          void t_CarlsonEllipticIntegral::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarlsonEllipticIntegral), "class_", make_descriptor(CarlsonEllipticIntegral::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarlsonEllipticIntegral), "wrapfn_", make_descriptor(t_CarlsonEllipticIntegral::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarlsonEllipticIntegral), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CarlsonEllipticIntegral_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CarlsonEllipticIntegral::initializeClass, 1)))
              return NULL;
            return t_CarlsonEllipticIntegral::wrap_Object(CarlsonEllipticIntegral(((t_CarlsonEllipticIntegral *) arg)->object.this$));
          }
          static PyObject *t_CarlsonEllipticIntegral_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CarlsonEllipticIntegral::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CarlsonEllipticIntegral_rC(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rC(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rC(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rC(a0, a1));
                  return PyFloat_FromDouble((double) result);
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
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rC(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rC", args);
            return NULL;
          }

          static PyObject *t_CarlsonEllipticIntegral_rD(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rD(a0, a1, a2));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rD(a0, a1, a2));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rD(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rD(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rD", args);
            return NULL;
          }

          static PyObject *t_CarlsonEllipticIntegral_rF(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rF(a0, a1, a2));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rF(a0, a1, a2));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rF(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rF(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rF", args);
            return NULL;
          }

          static PyObject *t_CarlsonEllipticIntegral_rG(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rG(a0, a1, a2));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rG(a0, a1, a2));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rG(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rG(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rG", args);
            return NULL;
          }

          static PyObject *t_CarlsonEllipticIntegral_rJ(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex a3((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble result;

                if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
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
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex a3((jobject) NULL);
                ::org::hipparchus::complex::Complex a4((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3, a4));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::complex::FieldComplex a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a4, &p4, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3, a4));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                jdouble result;

                if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3, a4));
                  return PyFloat_FromDouble((double) result);
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
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3, a4));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rJ", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/PythonTimeDerivativesEquations.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *PythonTimeDerivativesEquations::class$ = NULL;
        jmethodID *PythonTimeDerivativesEquations::mids$ = NULL;
        bool PythonTimeDerivativesEquations::live$ = false;

        jclass PythonTimeDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/PythonTimeDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addKeplerContribution_10f281d777284cea] = env->getMethodID(cls, "addKeplerContribution", "(D)V");
            mids$[mid_addMassDerivative_10f281d777284cea] = env->getMethodID(cls, "addMassDerivative", "(D)V");
            mids$[mid_addNonKeplerianAcceleration_2810d2bec90e7b1c] = env->getMethodID(cls, "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonTimeDerivativesEquations::PythonTimeDerivativesEquations() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonTimeDerivativesEquations::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonTimeDerivativesEquations::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonTimeDerivativesEquations::pythonExtension(jlong a0) const
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
      namespace numerical {
        static PyObject *t_PythonTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonTimeDerivativesEquations_init_(t_PythonTimeDerivativesEquations *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonTimeDerivativesEquations_finalize(t_PythonTimeDerivativesEquations *self);
        static PyObject *t_PythonTimeDerivativesEquations_pythonExtension(t_PythonTimeDerivativesEquations *self, PyObject *args);
        static void JNICALL t_PythonTimeDerivativesEquations_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jdouble a0);
        static void JNICALL t_PythonTimeDerivativesEquations_addMassDerivative1(JNIEnv *jenv, jobject jobj, jdouble a0);
        static void JNICALL t_PythonTimeDerivativesEquations_addNonKeplerianAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonTimeDerivativesEquations_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonTimeDerivativesEquations_get__self(t_PythonTimeDerivativesEquations *self, void *data);
        static PyGetSetDef t_PythonTimeDerivativesEquations__fields_[] = {
          DECLARE_GET_FIELD(t_PythonTimeDerivativesEquations, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonTimeDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_PythonTimeDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonTimeDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonTimeDerivativesEquations, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonTimeDerivativesEquations, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonTimeDerivativesEquations)[] = {
          { Py_tp_methods, t_PythonTimeDerivativesEquations__methods_ },
          { Py_tp_init, (void *) t_PythonTimeDerivativesEquations_init_ },
          { Py_tp_getset, t_PythonTimeDerivativesEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonTimeDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonTimeDerivativesEquations, t_PythonTimeDerivativesEquations, PythonTimeDerivativesEquations);

        void t_PythonTimeDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonTimeDerivativesEquations), &PY_TYPE_DEF(PythonTimeDerivativesEquations), module, "PythonTimeDerivativesEquations", 1);
        }

        void t_PythonTimeDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeDerivativesEquations), "class_", make_descriptor(PythonTimeDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeDerivativesEquations), "wrapfn_", make_descriptor(t_PythonTimeDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeDerivativesEquations), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonTimeDerivativesEquations::initializeClass);
          JNINativeMethod methods[] = {
            { "addKeplerContribution", "(D)V", (void *) t_PythonTimeDerivativesEquations_addKeplerContribution0 },
            { "addMassDerivative", "(D)V", (void *) t_PythonTimeDerivativesEquations_addMassDerivative1 },
            { "addNonKeplerianAcceleration", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V", (void *) t_PythonTimeDerivativesEquations_addNonKeplerianAcceleration2 },
            { "pythonDecRef", "()V", (void *) t_PythonTimeDerivativesEquations_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonTimeDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonTimeDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_PythonTimeDerivativesEquations::wrap_Object(PythonTimeDerivativesEquations(((t_PythonTimeDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_PythonTimeDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonTimeDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonTimeDerivativesEquations_init_(t_PythonTimeDerivativesEquations *self, PyObject *args, PyObject *kwds)
        {
          PythonTimeDerivativesEquations object((jobject) NULL);

          INT_CALL(object = PythonTimeDerivativesEquations());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonTimeDerivativesEquations_finalize(t_PythonTimeDerivativesEquations *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonTimeDerivativesEquations_pythonExtension(t_PythonTimeDerivativesEquations *self, PyObject *args)
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

        static void JNICALL t_PythonTimeDerivativesEquations_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "addKeplerContribution", "d", (double) a0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonTimeDerivativesEquations_addMassDerivative1(JNIEnv *jenv, jobject jobj, jdouble a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "addMassDerivative", "d", (double) a0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonTimeDerivativesEquations_addNonKeplerianAcceleration2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a0));
          PyObject *result = PyObject_CallMethod(obj, "addNonKeplerianAcceleration", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonTimeDerivativesEquations_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonTimeDerivativesEquations::mids$[PythonTimeDerivativesEquations::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonTimeDerivativesEquations_get__self(t_PythonTimeDerivativesEquations *self, void *data)
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
#include "org/orekit/gnss/metric/messages/common/AccuracyProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *AccuracyProvider::class$ = NULL;
            jmethodID *AccuracyProvider::mids$ = NULL;
            bool AccuracyProvider::live$ = false;

            jclass AccuracyProvider::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/AccuracyProvider");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getAccuracy", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble AccuracyProvider::getAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAccuracy_557b8123390d8d0c]);
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
            static PyObject *t_AccuracyProvider_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AccuracyProvider_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AccuracyProvider_getAccuracy(t_AccuracyProvider *self);
            static PyObject *t_AccuracyProvider_get__accuracy(t_AccuracyProvider *self, void *data);
            static PyGetSetDef t_AccuracyProvider__fields_[] = {
              DECLARE_GET_FIELD(t_AccuracyProvider, accuracy),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AccuracyProvider__methods_[] = {
              DECLARE_METHOD(t_AccuracyProvider, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AccuracyProvider, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AccuracyProvider, getAccuracy, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AccuracyProvider)[] = {
              { Py_tp_methods, t_AccuracyProvider__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AccuracyProvider__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AccuracyProvider)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AccuracyProvider, t_AccuracyProvider, AccuracyProvider);

            void t_AccuracyProvider::install(PyObject *module)
            {
              installType(&PY_TYPE(AccuracyProvider), &PY_TYPE_DEF(AccuracyProvider), module, "AccuracyProvider", 0);
            }

            void t_AccuracyProvider::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AccuracyProvider), "class_", make_descriptor(AccuracyProvider::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AccuracyProvider), "wrapfn_", make_descriptor(t_AccuracyProvider::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AccuracyProvider), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AccuracyProvider_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AccuracyProvider::initializeClass, 1)))
                return NULL;
              return t_AccuracyProvider::wrap_Object(AccuracyProvider(((t_AccuracyProvider *) arg)->object.this$));
            }
            static PyObject *t_AccuracyProvider_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AccuracyProvider::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AccuracyProvider_getAccuracy(t_AccuracyProvider *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AccuracyProvider_get__accuracy(t_AccuracyProvider *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAccuracy());
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
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficientsBLQFactory.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/displacement/OceanLoadingCoefficients.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *OceanLoadingCoefficientsBLQFactory::class$ = NULL;
          jmethodID *OceanLoadingCoefficientsBLQFactory::mids$ = NULL;
          bool OceanLoadingCoefficientsBLQFactory::live$ = false;
          ::java::lang::String *OceanLoadingCoefficientsBLQFactory::DEFAULT_BLQ_SUPPORTED_NAMES = NULL;

          jclass OceanLoadingCoefficientsBLQFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/OceanLoadingCoefficientsBLQFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f5ffdf29129ef90a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_28c7bdc075bb74e8] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_getCoefficients_6d7582e003e3fca2] = env->getMethodID(cls, "getCoefficients", "(Ljava/lang/String;)Lorg/orekit/models/earth/displacement/OceanLoadingCoefficients;");
              mids$[mid_getSites_0d9551367f7ecdef] = env->getMethodID(cls, "getSites", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_BLQ_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_BLQ_SUPPORTED_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OceanLoadingCoefficientsBLQFactory::OceanLoadingCoefficientsBLQFactory(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_f5ffdf29129ef90a, a0.this$)) {}

          OceanLoadingCoefficientsBLQFactory::OceanLoadingCoefficientsBLQFactory(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_28c7bdc075bb74e8, a0.this$, a1.this$)) {}

          ::org::orekit::models::earth::displacement::OceanLoadingCoefficients OceanLoadingCoefficientsBLQFactory::getCoefficients(const ::java::lang::String & a0) const
          {
            return ::org::orekit::models::earth::displacement::OceanLoadingCoefficients(env->callObjectMethod(this$, mids$[mid_getCoefficients_6d7582e003e3fca2], a0.this$));
          }

          ::java::util::List OceanLoadingCoefficientsBLQFactory::getSites() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSites_0d9551367f7ecdef]));
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
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OceanLoadingCoefficientsBLQFactory_init_(t_OceanLoadingCoefficientsBLQFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_getCoefficients(t_OceanLoadingCoefficientsBLQFactory *self, PyObject *arg);
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_getSites(t_OceanLoadingCoefficientsBLQFactory *self);
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_get__sites(t_OceanLoadingCoefficientsBLQFactory *self, void *data);
          static PyGetSetDef t_OceanLoadingCoefficientsBLQFactory__fields_[] = {
            DECLARE_GET_FIELD(t_OceanLoadingCoefficientsBLQFactory, sites),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanLoadingCoefficientsBLQFactory__methods_[] = {
            DECLARE_METHOD(t_OceanLoadingCoefficientsBLQFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadingCoefficientsBLQFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadingCoefficientsBLQFactory, getCoefficients, METH_O),
            DECLARE_METHOD(t_OceanLoadingCoefficientsBLQFactory, getSites, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanLoadingCoefficientsBLQFactory)[] = {
            { Py_tp_methods, t_OceanLoadingCoefficientsBLQFactory__methods_ },
            { Py_tp_init, (void *) t_OceanLoadingCoefficientsBLQFactory_init_ },
            { Py_tp_getset, t_OceanLoadingCoefficientsBLQFactory__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanLoadingCoefficientsBLQFactory)[] = {
            &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
            NULL
          };

          DEFINE_TYPE(OceanLoadingCoefficientsBLQFactory, t_OceanLoadingCoefficientsBLQFactory, OceanLoadingCoefficientsBLQFactory);

          void t_OceanLoadingCoefficientsBLQFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanLoadingCoefficientsBLQFactory), &PY_TYPE_DEF(OceanLoadingCoefficientsBLQFactory), module, "OceanLoadingCoefficientsBLQFactory", 0);
          }

          void t_OceanLoadingCoefficientsBLQFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficientsBLQFactory), "class_", make_descriptor(OceanLoadingCoefficientsBLQFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficientsBLQFactory), "wrapfn_", make_descriptor(t_OceanLoadingCoefficientsBLQFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficientsBLQFactory), "boxfn_", make_descriptor(boxObject));
            env->getClass(OceanLoadingCoefficientsBLQFactory::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadingCoefficientsBLQFactory), "DEFAULT_BLQ_SUPPORTED_NAMES", make_descriptor(j2p(*OceanLoadingCoefficientsBLQFactory::DEFAULT_BLQ_SUPPORTED_NAMES)));
          }

          static PyObject *t_OceanLoadingCoefficientsBLQFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanLoadingCoefficientsBLQFactory::initializeClass, 1)))
              return NULL;
            return t_OceanLoadingCoefficientsBLQFactory::wrap_Object(OceanLoadingCoefficientsBLQFactory(((t_OceanLoadingCoefficientsBLQFactory *) arg)->object.this$));
          }
          static PyObject *t_OceanLoadingCoefficientsBLQFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanLoadingCoefficientsBLQFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OceanLoadingCoefficientsBLQFactory_init_(t_OceanLoadingCoefficientsBLQFactory *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                OceanLoadingCoefficientsBLQFactory object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = OceanLoadingCoefficientsBLQFactory(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                OceanLoadingCoefficientsBLQFactory object((jobject) NULL);

                if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = OceanLoadingCoefficientsBLQFactory(a0, a1));
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

          static PyObject *t_OceanLoadingCoefficientsBLQFactory_getCoefficients(t_OceanLoadingCoefficientsBLQFactory *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::models::earth::displacement::OceanLoadingCoefficients result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.getCoefficients(a0));
              return ::org::orekit::models::earth::displacement::t_OceanLoadingCoefficients::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getCoefficients", arg);
            return NULL;
          }

          static PyObject *t_OceanLoadingCoefficientsBLQFactory_getSites(t_OceanLoadingCoefficientsBLQFactory *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSites());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_OceanLoadingCoefficientsBLQFactory_get__sites(t_OceanLoadingCoefficientsBLQFactory *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSites());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3DFormat.h"
#include "java/text/ParsePosition.h"
#include "java/util/Locale.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "java/lang/StringBuffer.h"
#include "java/text/FieldPosition.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3DFormat.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Vector3DFormat::class$ = NULL;
          jmethodID *Vector3DFormat::mids$ = NULL;
          bool Vector3DFormat::live$ = false;

          jclass Vector3DFormat::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Vector3DFormat");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_d53859bd7ba1b247] = env->getMethodID(cls, "<init>", "(Ljava/text/NumberFormat;)V");
              mids$[mid_init$_f5c244a0f15376be] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_5f051ed7add2b099] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/text/NumberFormat;)V");
              mids$[mid_format_6f1f6993f3124ea0] = env->getMethodID(cls, "format", "(Lorg/hipparchus/geometry/Vector;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;");
              mids$[mid_getVector3DFormat_b08c70b31ed5b7b7] = env->getStaticMethodID(cls, "getVector3DFormat", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3DFormat;");
              mids$[mid_getVector3DFormat_140477902cc69130] = env->getStaticMethodID(cls, "getVector3DFormat", "(Ljava/util/Locale;)Lorg/hipparchus/geometry/euclidean/threed/Vector3DFormat;");
              mids$[mid_parse_db83f02e25e2f85a] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_parse_a5a0093b79428b75] = env->getMethodID(cls, "parse", "(Ljava/lang/String;Ljava/text/ParsePosition;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector3DFormat::Vector3DFormat() : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          Vector3DFormat::Vector3DFormat(const ::java::text::NumberFormat & a0) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_d53859bd7ba1b247, a0.this$)) {}

          Vector3DFormat::Vector3DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_f5c244a0f15376be, a0.this$, a1.this$, a2.this$)) {}

          Vector3DFormat::Vector3DFormat(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::text::NumberFormat & a3) : ::org::hipparchus::geometry::VectorFormat(env->newObject(initializeClass, &mids$, mid_init$_5f051ed7add2b099, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          ::java::lang::StringBuffer Vector3DFormat::format(const ::org::hipparchus::geometry::Vector & a0, const ::java::lang::StringBuffer & a1, const ::java::text::FieldPosition & a2) const
          {
            return ::java::lang::StringBuffer(env->callObjectMethod(this$, mids$[mid_format_6f1f6993f3124ea0], a0.this$, a1.this$, a2.this$));
          }

          Vector3DFormat Vector3DFormat::getVector3DFormat()
          {
            jclass cls = env->getClass(initializeClass);
            return Vector3DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector3DFormat_b08c70b31ed5b7b7]));
          }

          Vector3DFormat Vector3DFormat::getVector3DFormat(const ::java::util::Locale & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Vector3DFormat(env->callStaticObjectMethod(cls, mids$[mid_getVector3DFormat_140477902cc69130], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Vector3DFormat::parse(const ::java::lang::String & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_parse_db83f02e25e2f85a], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Vector3DFormat::parse(const ::java::lang::String & a0, const ::java::text::ParsePosition & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_parse_a5a0093b79428b75], a0.this$, a1.this$));
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
          static PyObject *t_Vector3DFormat_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector3DFormat_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector3DFormat_of_(t_Vector3DFormat *self, PyObject *args);
          static int t_Vector3DFormat_init_(t_Vector3DFormat *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector3DFormat_format(t_Vector3DFormat *self, PyObject *args);
          static PyObject *t_Vector3DFormat_getVector3DFormat(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector3DFormat_parse(t_Vector3DFormat *self, PyObject *args);
          static PyObject *t_Vector3DFormat_get__vector3DFormat(t_Vector3DFormat *self, void *data);
          static PyObject *t_Vector3DFormat_get__parameters_(t_Vector3DFormat *self, void *data);
          static PyGetSetDef t_Vector3DFormat__fields_[] = {
            DECLARE_GET_FIELD(t_Vector3DFormat, vector3DFormat),
            DECLARE_GET_FIELD(t_Vector3DFormat, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector3DFormat__methods_[] = {
            DECLARE_METHOD(t_Vector3DFormat, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector3DFormat, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector3DFormat, of_, METH_VARARGS),
            DECLARE_METHOD(t_Vector3DFormat, format, METH_VARARGS),
            DECLARE_METHOD(t_Vector3DFormat, getVector3DFormat, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector3DFormat, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector3DFormat)[] = {
            { Py_tp_methods, t_Vector3DFormat__methods_ },
            { Py_tp_init, (void *) t_Vector3DFormat_init_ },
            { Py_tp_getset, t_Vector3DFormat__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector3DFormat)[] = {
            &PY_TYPE_DEF(::org::hipparchus::geometry::VectorFormat),
            NULL
          };

          DEFINE_TYPE(Vector3DFormat, t_Vector3DFormat, Vector3DFormat);
          PyObject *t_Vector3DFormat::wrap_Object(const Vector3DFormat& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector3DFormat::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector3DFormat *self = (t_Vector3DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_Vector3DFormat::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_Vector3DFormat::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Vector3DFormat *self = (t_Vector3DFormat *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_Vector3DFormat::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector3DFormat), &PY_TYPE_DEF(Vector3DFormat), module, "Vector3DFormat", 0);
          }

          void t_Vector3DFormat::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3DFormat), "class_", make_descriptor(Vector3DFormat::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3DFormat), "wrapfn_", make_descriptor(t_Vector3DFormat::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector3DFormat), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Vector3DFormat_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector3DFormat::initializeClass, 1)))
              return NULL;
            return t_Vector3DFormat::wrap_Object(Vector3DFormat(((t_Vector3DFormat *) arg)->object.this$));
          }
          static PyObject *t_Vector3DFormat_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector3DFormat::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Vector3DFormat_of_(t_Vector3DFormat *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_Vector3DFormat_init_(t_Vector3DFormat *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector3DFormat object((jobject) NULL);

                INT_CALL(object = Vector3DFormat());
                self->object = object;
                self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                self->parameters[1] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D);
                break;
              }
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                Vector3DFormat object((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  INT_CALL(object = Vector3DFormat(a0));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D);
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                Vector3DFormat object((jobject) NULL);

                if (!parseArgs(args, "sss", &a0, &a1, &a2))
                {
                  INT_CALL(object = Vector3DFormat(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D);
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
                Vector3DFormat object((jobject) NULL);

                if (!parseArgs(args, "sssk", ::java::text::NumberFormat::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector3DFormat(a0, a1, a2, a3));
                  self->object = object;
                  self->parameters[0] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D);
                  self->parameters[1] = ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D);
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

          static PyObject *t_Vector3DFormat_format(t_Vector3DFormat *self, PyObject *args)
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

            return callSuper(PY_TYPE(Vector3DFormat), (PyObject *) self, "format", args, 2);
          }

          static PyObject *t_Vector3DFormat_getVector3DFormat(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                Vector3DFormat result((jobject) NULL);
                OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3DFormat::getVector3DFormat());
                return t_Vector3DFormat::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::util::Locale a0((jobject) NULL);
                Vector3DFormat result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Vector3DFormat::getVector3DFormat(a0));
                  return t_Vector3DFormat::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "getVector3DFormat", args);
            return NULL;
          }

          static PyObject *t_Vector3DFormat_parse(t_Vector3DFormat *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::text::ParsePosition a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "sk", ::java::text::ParsePosition::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.parse(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector3DFormat), (PyObject *) self, "parse", args, 2);
          }
          static PyObject *t_Vector3DFormat_get__parameters_(t_Vector3DFormat *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_Vector3DFormat_get__vector3DFormat(t_Vector3DFormat *self, void *data)
          {
            Vector3DFormat value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector3DFormat());
            return t_Vector3DFormat::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer.h"
#include "org/orekit/files/ccsds/definitions/BodyFacade.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$CenterListConsumer::class$ = NULL;
            jmethodID *ParseToken$CenterListConsumer::mids$ = NULL;
            bool ParseToken$CenterListConsumer::live$ = false;

            jclass ParseToken$CenterListConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$CenterListConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_4ccaedadb068bdeb] = env->getMethodID(cls, "accept", "(Ljava/util/List;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$CenterListConsumer::accept(const ::java::util::List & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_4ccaedadb068bdeb], a0.this$);
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
            static PyObject *t_ParseToken$CenterListConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CenterListConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$CenterListConsumer_accept(t_ParseToken$CenterListConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$CenterListConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$CenterListConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CenterListConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$CenterListConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$CenterListConsumer)[] = {
              { Py_tp_methods, t_ParseToken$CenterListConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$CenterListConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$CenterListConsumer, t_ParseToken$CenterListConsumer, ParseToken$CenterListConsumer);

            void t_ParseToken$CenterListConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$CenterListConsumer), &PY_TYPE_DEF(ParseToken$CenterListConsumer), module, "ParseToken$CenterListConsumer", 0);
            }

            void t_ParseToken$CenterListConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterListConsumer), "class_", make_descriptor(ParseToken$CenterListConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterListConsumer), "wrapfn_", make_descriptor(t_ParseToken$CenterListConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$CenterListConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$CenterListConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$CenterListConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$CenterListConsumer::wrap_Object(ParseToken$CenterListConsumer(((t_ParseToken$CenterListConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$CenterListConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$CenterListConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$CenterListConsumer_accept(t_ParseToken$CenterListConsumer *self, PyObject *arg)
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
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
#include "org/orekit/time/AbstractTimeInterpolator.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *AbstractTimeInterpolator::class$ = NULL;
      jmethodID *AbstractTimeInterpolator::mids$ = NULL;
      bool AbstractTimeInterpolator::live$ = false;
      jdouble AbstractTimeInterpolator::DEFAULT_EXTRAPOLATION_THRESHOLD_SEC = (jdouble) 0;
      jint AbstractTimeInterpolator::DEFAULT_INTERPOLATION_POINTS = (jint) 0;

      jclass AbstractTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/AbstractTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_89aad365fb0ed8da] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_checkInterpolatorCompatibilityWithSampleSize_e37a8011f5ddf655] = env->getStaticMethodID(cls, "checkInterpolatorCompatibilityWithSampleSize", "(Lorg/orekit/time/TimeInterpolator;I)V");
          mids$[mid_getExtrapolationThreshold_557b8123390d8d0c] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_412668abc8d889e9] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_0d9551367f7ecdef] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_da5f44ff87474809] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/TimeStamped;");
          mids$[mid_interpolate_d5b4fcbe51b9e2da] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/TimeStamped;");
          mids$[mid_interpolate_db599ec6bbae5863] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/time/TimeStamped;");
          mids$[mid_addOptionalSubInterpolatorIfDefined_84e95070d7e3b525] = env->getMethodID(cls, "addOptionalSubInterpolatorIfDefined", "(Lorg/orekit/time/TimeInterpolator;Ljava/util/List;)V");
          mids$[mid_getTimeParameter_3bd5b6ae6cb80300] = env->getMethodID(cls, "getTimeParameter", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)D");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EXTRAPOLATION_THRESHOLD_SEC = env->getStaticDoubleField(cls, "DEFAULT_EXTRAPOLATION_THRESHOLD_SEC");
          DEFAULT_INTERPOLATION_POINTS = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_POINTS");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractTimeInterpolator::AbstractTimeInterpolator(jint a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_89aad365fb0ed8da, a0, a1)) {}

      void AbstractTimeInterpolator::checkInterpolatorCompatibilityWithSampleSize(const ::org::orekit::time::TimeInterpolator & a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_checkInterpolatorCompatibilityWithSampleSize_e37a8011f5ddf655], a0.this$, a1);
      }

      jdouble AbstractTimeInterpolator::getExtrapolationThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExtrapolationThreshold_557b8123390d8d0c]);
      }

      jint AbstractTimeInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_412668abc8d889e9]);
      }

      ::java::util::List AbstractTimeInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_0d9551367f7ecdef]));
      }

      ::org::orekit::time::TimeStamped AbstractTimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_da5f44ff87474809], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeStamped AbstractTimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_d5b4fcbe51b9e2da], a0.this$, a1.this$));
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
      static PyObject *t_AbstractTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractTimeInterpolator_of_(t_AbstractTimeInterpolator *self, PyObject *args);
      static int t_AbstractTimeInterpolator_init_(t_AbstractTimeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbstractTimeInterpolator_checkInterpolatorCompatibilityWithSampleSize(PyTypeObject *type, PyObject *args);
      static PyObject *t_AbstractTimeInterpolator_getExtrapolationThreshold(t_AbstractTimeInterpolator *self);
      static PyObject *t_AbstractTimeInterpolator_getNbInterpolationPoints(t_AbstractTimeInterpolator *self);
      static PyObject *t_AbstractTimeInterpolator_getSubInterpolators(t_AbstractTimeInterpolator *self);
      static PyObject *t_AbstractTimeInterpolator_interpolate(t_AbstractTimeInterpolator *self, PyObject *args);
      static PyObject *t_AbstractTimeInterpolator_get__extrapolationThreshold(t_AbstractTimeInterpolator *self, void *data);
      static PyObject *t_AbstractTimeInterpolator_get__nbInterpolationPoints(t_AbstractTimeInterpolator *self, void *data);
      static PyObject *t_AbstractTimeInterpolator_get__subInterpolators(t_AbstractTimeInterpolator *self, void *data);
      static PyObject *t_AbstractTimeInterpolator_get__parameters_(t_AbstractTimeInterpolator *self, void *data);
      static PyGetSetDef t_AbstractTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator, extrapolationThreshold),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_AbstractTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbstractTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, checkInterpolatorCompatibilityWithSampleSize, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, getExtrapolationThreshold, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, getNbInterpolationPoints, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, getSubInterpolators, METH_NOARGS),
        DECLARE_METHOD(t_AbstractTimeInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractTimeInterpolator)[] = {
        { Py_tp_methods, t_AbstractTimeInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbstractTimeInterpolator_init_ },
        { Py_tp_getset, t_AbstractTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractTimeInterpolator, t_AbstractTimeInterpolator, AbstractTimeInterpolator);
      PyObject *t_AbstractTimeInterpolator::wrap_Object(const AbstractTimeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractTimeInterpolator *self = (t_AbstractTimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractTimeInterpolator *self = (t_AbstractTimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractTimeInterpolator), &PY_TYPE_DEF(AbstractTimeInterpolator), module, "AbstractTimeInterpolator", 0);
      }

      void t_AbstractTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator), "class_", make_descriptor(AbstractTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator), "wrapfn_", make_descriptor(t_AbstractTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator), "boxfn_", make_descriptor(boxObject));
        env->getClass(AbstractTimeInterpolator::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator), "DEFAULT_EXTRAPOLATION_THRESHOLD_SEC", make_descriptor(AbstractTimeInterpolator::DEFAULT_EXTRAPOLATION_THRESHOLD_SEC));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractTimeInterpolator), "DEFAULT_INTERPOLATION_POINTS", make_descriptor(AbstractTimeInterpolator::DEFAULT_INTERPOLATION_POINTS));
      }

      static PyObject *t_AbstractTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbstractTimeInterpolator::wrap_Object(AbstractTimeInterpolator(((t_AbstractTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbstractTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractTimeInterpolator_of_(t_AbstractTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbstractTimeInterpolator_init_(t_AbstractTimeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        AbstractTimeInterpolator object((jobject) NULL);

        if (!parseArgs(args, "ID", &a0, &a1))
        {
          INT_CALL(object = AbstractTimeInterpolator(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_AbstractTimeInterpolator_checkInterpolatorCompatibilityWithSampleSize(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::time::TimeInterpolator a0((jobject) NULL);
        PyTypeObject **p0;
        jint a1;

        if (!parseArgs(args, "KI", ::org::orekit::time::TimeInterpolator::initializeClass, &a0, &p0, ::org::orekit::time::t_TimeInterpolator::parameters_, &a1))
        {
          OBJ_CALL(::org::orekit::time::AbstractTimeInterpolator::checkInterpolatorCompatibilityWithSampleSize(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "checkInterpolatorCompatibilityWithSampleSize", args);
        return NULL;
      }

      static PyObject *t_AbstractTimeInterpolator_getExtrapolationThreshold(t_AbstractTimeInterpolator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_AbstractTimeInterpolator_getNbInterpolationPoints(t_AbstractTimeInterpolator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_AbstractTimeInterpolator_getSubInterpolators(t_AbstractTimeInterpolator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_AbstractTimeInterpolator_interpolate(t_AbstractTimeInterpolator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }
      static PyObject *t_AbstractTimeInterpolator_get__parameters_(t_AbstractTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractTimeInterpolator_get__extrapolationThreshold(t_AbstractTimeInterpolator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_AbstractTimeInterpolator_get__nbInterpolationPoints(t_AbstractTimeInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_AbstractTimeInterpolator_get__subInterpolators(t_AbstractTimeInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/LazyLoadedDataContext.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *LazyLoadedDataContext::class$ = NULL;
      jmethodID *LazyLoadedDataContext::mids$ = NULL;
      bool LazyLoadedDataContext::live$ = false;

      jclass LazyLoadedDataContext::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/LazyLoadedDataContext");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_getCelestialBodies_2192d5132b3243a4] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/LazyLoadedCelestialBodies;");
          mids$[mid_getDataProvidersManager_090dc74a0d7a5aef] = env->getMethodID(cls, "getDataProvidersManager", "()Lorg/orekit/data/DataProvidersManager;");
          mids$[mid_getFrames_19dab31df3f9900d] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/LazyLoadedFrames;");
          mids$[mid_getGeoMagneticFields_f938ea66f56d3454] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/LazyLoadedGeoMagneticFields;");
          mids$[mid_getGravityFields_0d8a4be514230626] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/LazyLoadedGravityFields;");
          mids$[mid_getTimeScales_52cbe31230c76b6b] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/LazyLoadedTimeScales;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedDataContext::LazyLoadedDataContext() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      ::org::orekit::bodies::LazyLoadedCelestialBodies LazyLoadedDataContext::getCelestialBodies() const
      {
        return ::org::orekit::bodies::LazyLoadedCelestialBodies(env->callObjectMethod(this$, mids$[mid_getCelestialBodies_2192d5132b3243a4]));
      }

      ::org::orekit::data::DataProvidersManager LazyLoadedDataContext::getDataProvidersManager() const
      {
        return ::org::orekit::data::DataProvidersManager(env->callObjectMethod(this$, mids$[mid_getDataProvidersManager_090dc74a0d7a5aef]));
      }

      ::org::orekit::frames::LazyLoadedFrames LazyLoadedDataContext::getFrames() const
      {
        return ::org::orekit::frames::LazyLoadedFrames(env->callObjectMethod(this$, mids$[mid_getFrames_19dab31df3f9900d]));
      }

      ::org::orekit::models::earth::LazyLoadedGeoMagneticFields LazyLoadedDataContext::getGeoMagneticFields() const
      {
        return ::org::orekit::models::earth::LazyLoadedGeoMagneticFields(env->callObjectMethod(this$, mids$[mid_getGeoMagneticFields_f938ea66f56d3454]));
      }

      ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields LazyLoadedDataContext::getGravityFields() const
      {
        return ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields(env->callObjectMethod(this$, mids$[mid_getGravityFields_0d8a4be514230626]));
      }

      ::org::orekit::time::LazyLoadedTimeScales LazyLoadedDataContext::getTimeScales() const
      {
        return ::org::orekit::time::LazyLoadedTimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_52cbe31230c76b6b]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_LazyLoadedDataContext_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LazyLoadedDataContext_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LazyLoadedDataContext_init_(t_LazyLoadedDataContext *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LazyLoadedDataContext_getCelestialBodies(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_getDataProvidersManager(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_getFrames(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_getGeoMagneticFields(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_getGravityFields(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_getTimeScales(t_LazyLoadedDataContext *self);
      static PyObject *t_LazyLoadedDataContext_get__celestialBodies(t_LazyLoadedDataContext *self, void *data);
      static PyObject *t_LazyLoadedDataContext_get__dataProvidersManager(t_LazyLoadedDataContext *self, void *data);
      static PyObject *t_LazyLoadedDataContext_get__frames(t_LazyLoadedDataContext *self, void *data);
      static PyObject *t_LazyLoadedDataContext_get__geoMagneticFields(t_LazyLoadedDataContext *self, void *data);
      static PyObject *t_LazyLoadedDataContext_get__gravityFields(t_LazyLoadedDataContext *self, void *data);
      static PyObject *t_LazyLoadedDataContext_get__timeScales(t_LazyLoadedDataContext *self, void *data);
      static PyGetSetDef t_LazyLoadedDataContext__fields_[] = {
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, celestialBodies),
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, dataProvidersManager),
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, frames),
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, geoMagneticFields),
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, gravityFields),
        DECLARE_GET_FIELD(t_LazyLoadedDataContext, timeScales),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LazyLoadedDataContext__methods_[] = {
        DECLARE_METHOD(t_LazyLoadedDataContext, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedDataContext, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getCelestialBodies, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getDataProvidersManager, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getFrames, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getGeoMagneticFields, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getGravityFields, METH_NOARGS),
        DECLARE_METHOD(t_LazyLoadedDataContext, getTimeScales, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LazyLoadedDataContext)[] = {
        { Py_tp_methods, t_LazyLoadedDataContext__methods_ },
        { Py_tp_init, (void *) t_LazyLoadedDataContext_init_ },
        { Py_tp_getset, t_LazyLoadedDataContext__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LazyLoadedDataContext)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LazyLoadedDataContext, t_LazyLoadedDataContext, LazyLoadedDataContext);

      void t_LazyLoadedDataContext::install(PyObject *module)
      {
        installType(&PY_TYPE(LazyLoadedDataContext), &PY_TYPE_DEF(LazyLoadedDataContext), module, "LazyLoadedDataContext", 0);
      }

      void t_LazyLoadedDataContext::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedDataContext), "class_", make_descriptor(LazyLoadedDataContext::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedDataContext), "wrapfn_", make_descriptor(t_LazyLoadedDataContext::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LazyLoadedDataContext), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LazyLoadedDataContext_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LazyLoadedDataContext::initializeClass, 1)))
          return NULL;
        return t_LazyLoadedDataContext::wrap_Object(LazyLoadedDataContext(((t_LazyLoadedDataContext *) arg)->object.this$));
      }
      static PyObject *t_LazyLoadedDataContext_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LazyLoadedDataContext::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LazyLoadedDataContext_init_(t_LazyLoadedDataContext *self, PyObject *args, PyObject *kwds)
      {
        LazyLoadedDataContext object((jobject) NULL);

        INT_CALL(object = LazyLoadedDataContext());
        self->object = object;

        return 0;
      }

      static PyObject *t_LazyLoadedDataContext_getCelestialBodies(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies result((jobject) NULL);
        OBJ_CALL(result = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_getDataProvidersManager(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::data::DataProvidersManager result((jobject) NULL);
        OBJ_CALL(result = self->object.getDataProvidersManager());
        return ::org::orekit::data::t_DataProvidersManager::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_getFrames(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::frames::LazyLoadedFrames result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_getGeoMagneticFields(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_getGravityFields(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields result((jobject) NULL);
        OBJ_CALL(result = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_getTimeScales(t_LazyLoadedDataContext *self)
      {
        ::org::orekit::time::LazyLoadedTimeScales result((jobject) NULL);
        OBJ_CALL(result = self->object.getTimeScales());
        return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(result);
      }

      static PyObject *t_LazyLoadedDataContext_get__celestialBodies(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::bodies::LazyLoadedCelestialBodies value((jobject) NULL);
        OBJ_CALL(value = self->object.getCelestialBodies());
        return ::org::orekit::bodies::t_LazyLoadedCelestialBodies::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedDataContext_get__dataProvidersManager(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::data::DataProvidersManager value((jobject) NULL);
        OBJ_CALL(value = self->object.getDataProvidersManager());
        return ::org::orekit::data::t_DataProvidersManager::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedDataContext_get__frames(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::frames::LazyLoadedFrames value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrames());
        return ::org::orekit::frames::t_LazyLoadedFrames::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedDataContext_get__geoMagneticFields(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::models::earth::LazyLoadedGeoMagneticFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeoMagneticFields());
        return ::org::orekit::models::earth::t_LazyLoadedGeoMagneticFields::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedDataContext_get__gravityFields(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields value((jobject) NULL);
        OBJ_CALL(value = self->object.getGravityFields());
        return ::org::orekit::forces::gravity::potential::t_LazyLoadedGravityFields::wrap_Object(value);
      }

      static PyObject *t_LazyLoadedDataContext_get__timeScales(t_LazyLoadedDataContext *self, void *data)
      {
        ::org::orekit::time::LazyLoadedTimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Hyperplane::class$ = NULL;
        jmethodID *Hyperplane::mids$ = NULL;
        bool Hyperplane::live$ = false;

        jclass Hyperplane::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Hyperplane");

            mids$ = new jmethodID[max_mid];
            mids$[mid_copySelf_db5d0f7cdc937b69] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/Hyperplane;");
            mids$[mid_emptyHyperplane_0629297ff6ae927a] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getOffset_cf1fec2b7b1c0efe] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
            mids$[mid_getTolerance_557b8123390d8d0c] = env->getMethodID(cls, "getTolerance", "()D");
            mids$[mid_project_328d0d966eeb9668] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
            mids$[mid_sameOrientationAs_cb9274a363000a77] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
            mids$[mid_wholeHyperplane_0629297ff6ae927a] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_wholeSpace_fd006079784937f2] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/partitioning/Region;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Hyperplane Hyperplane::copySelf() const
        {
          return Hyperplane(env->callObjectMethod(this$, mids$[mid_copySelf_db5d0f7cdc937b69]));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane Hyperplane::emptyHyperplane() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_0629297ff6ae927a]));
        }

        jdouble Hyperplane::getOffset(const ::org::hipparchus::geometry::Point & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOffset_cf1fec2b7b1c0efe], a0.this$);
        }

        jdouble Hyperplane::getTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTolerance_557b8123390d8d0c]);
        }

        ::org::hipparchus::geometry::Point Hyperplane::project(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_328d0d966eeb9668], a0.this$));
        }

        jboolean Hyperplane::sameOrientationAs(const Hyperplane & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_cb9274a363000a77], a0.this$);
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane Hyperplane::wholeHyperplane() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_0629297ff6ae927a]));
        }

        ::org::hipparchus::geometry::partitioning::Region Hyperplane::wholeSpace() const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_wholeSpace_fd006079784937f2]));
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
      namespace partitioning {
        static PyObject *t_Hyperplane_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Hyperplane_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Hyperplane_of_(t_Hyperplane *self, PyObject *args);
        static PyObject *t_Hyperplane_copySelf(t_Hyperplane *self);
        static PyObject *t_Hyperplane_emptyHyperplane(t_Hyperplane *self);
        static PyObject *t_Hyperplane_getOffset(t_Hyperplane *self, PyObject *arg);
        static PyObject *t_Hyperplane_getTolerance(t_Hyperplane *self);
        static PyObject *t_Hyperplane_project(t_Hyperplane *self, PyObject *arg);
        static PyObject *t_Hyperplane_sameOrientationAs(t_Hyperplane *self, PyObject *arg);
        static PyObject *t_Hyperplane_wholeHyperplane(t_Hyperplane *self);
        static PyObject *t_Hyperplane_wholeSpace(t_Hyperplane *self);
        static PyObject *t_Hyperplane_get__tolerance(t_Hyperplane *self, void *data);
        static PyObject *t_Hyperplane_get__parameters_(t_Hyperplane *self, void *data);
        static PyGetSetDef t_Hyperplane__fields_[] = {
          DECLARE_GET_FIELD(t_Hyperplane, tolerance),
          DECLARE_GET_FIELD(t_Hyperplane, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Hyperplane__methods_[] = {
          DECLARE_METHOD(t_Hyperplane, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Hyperplane, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Hyperplane, of_, METH_VARARGS),
          DECLARE_METHOD(t_Hyperplane, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_Hyperplane, emptyHyperplane, METH_NOARGS),
          DECLARE_METHOD(t_Hyperplane, getOffset, METH_O),
          DECLARE_METHOD(t_Hyperplane, getTolerance, METH_NOARGS),
          DECLARE_METHOD(t_Hyperplane, project, METH_O),
          DECLARE_METHOD(t_Hyperplane, sameOrientationAs, METH_O),
          DECLARE_METHOD(t_Hyperplane, wholeHyperplane, METH_NOARGS),
          DECLARE_METHOD(t_Hyperplane, wholeSpace, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Hyperplane)[] = {
          { Py_tp_methods, t_Hyperplane__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Hyperplane__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Hyperplane)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Hyperplane, t_Hyperplane, Hyperplane);
        PyObject *t_Hyperplane::wrap_Object(const Hyperplane& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Hyperplane::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Hyperplane *self = (t_Hyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Hyperplane::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Hyperplane::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Hyperplane *self = (t_Hyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Hyperplane::install(PyObject *module)
        {
          installType(&PY_TYPE(Hyperplane), &PY_TYPE_DEF(Hyperplane), module, "Hyperplane", 0);
        }

        void t_Hyperplane::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Hyperplane), "class_", make_descriptor(Hyperplane::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Hyperplane), "wrapfn_", make_descriptor(t_Hyperplane::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Hyperplane), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Hyperplane_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Hyperplane::initializeClass, 1)))
            return NULL;
          return t_Hyperplane::wrap_Object(Hyperplane(((t_Hyperplane *) arg)->object.this$));
        }
        static PyObject *t_Hyperplane_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Hyperplane::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Hyperplane_of_(t_Hyperplane *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Hyperplane_copySelf(t_Hyperplane *self)
        {
          Hyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_Hyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Hyperplane_emptyHyperplane(t_Hyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.emptyHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Hyperplane_getOffset(t_Hyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.getOffset(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getOffset", arg);
          return NULL;
        }

        static PyObject *t_Hyperplane_getTolerance(t_Hyperplane *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Hyperplane_project(t_Hyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::Point result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.project(a0));
            return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "project", arg);
          return NULL;
        }

        static PyObject *t_Hyperplane_sameOrientationAs(t_Hyperplane *self, PyObject *arg)
        {
          Hyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", Hyperplane::initializeClass, &a0, &p0, t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.sameOrientationAs(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
          return NULL;
        }

        static PyObject *t_Hyperplane_wholeHyperplane(t_Hyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.wholeHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Hyperplane_wholeSpace(t_Hyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);
          OBJ_CALL(result = self->object.wholeSpace());
          return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[0]);
        }
        static PyObject *t_Hyperplane_get__parameters_(t_Hyperplane *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Hyperplane_get__tolerance(t_Hyperplane *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTolerance());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DataLoader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DataLoader::class$ = NULL;
      jmethodID *DataLoader::mids$ = NULL;
      bool DataLoader::live$ = false;

      jclass DataLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DataLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_stillAcceptsData_89b302893bdbe1f1] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void DataLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_15770e8d8949a557], a0.this$, a1.this$);
      }

      jboolean DataLoader::stillAcceptsData() const
      {
        return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_89b302893bdbe1f1]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_DataLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataLoader_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DataLoader_loadData(t_DataLoader *self, PyObject *args);
      static PyObject *t_DataLoader_stillAcceptsData(t_DataLoader *self);

      static PyMethodDef t_DataLoader__methods_[] = {
        DECLARE_METHOD(t_DataLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DataLoader, loadData, METH_VARARGS),
        DECLARE_METHOD(t_DataLoader, stillAcceptsData, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DataLoader)[] = {
        { Py_tp_methods, t_DataLoader__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DataLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DataLoader, t_DataLoader, DataLoader);

      void t_DataLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(DataLoader), &PY_TYPE_DEF(DataLoader), module, "DataLoader", 0);
      }

      void t_DataLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataLoader), "class_", make_descriptor(DataLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataLoader), "wrapfn_", make_descriptor(t_DataLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DataLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DataLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DataLoader::initializeClass, 1)))
          return NULL;
        return t_DataLoader::wrap_Object(DataLoader(((t_DataLoader *) arg)->object.this$));
      }
      static PyObject *t_DataLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DataLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DataLoader_loadData(t_DataLoader *self, PyObject *args)
      {
        ::java::io::InputStream a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);

        if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.loadData(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "loadData", args);
        return NULL;
      }

      static PyObject *t_DataLoader_stillAcceptsData(t_DataLoader *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.stillAcceptsData());
        Py_RETURN_BOOL(result);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
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
            mids$[mid_init$_5d9c9afaca2e497c] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_add_56800b7225457744] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_antiDerivative_30587ce6268a4343] = env->getMethodID(cls, "antiDerivative", "()Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_degree_412668abc8d889e9] = env->getMethodID(cls, "degree", "()I");
            mids$[mid_getCoefficients_41762fd4377ff26e] = env->getMethodID(cls, "getCoefficients", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getField_20f98801541dcec1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_integrate_b42a276fbe83c342] = env->getMethodID(cls, "integrate", "(DD)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_integrate_d5f58731bcb8a011] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_multiply_56800b7225457744] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_negate_30587ce6268a4343] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_polynomialDerivative_30587ce6268a4343] = env->getMethodID(cls, "polynomialDerivative", "()Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_subtract_56800b7225457744] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialFunction;");
            mids$[mid_value_94d37e81a3238af8] = env->getMethodID(cls, "value", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_value_6672ad854985cb64] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_evaluate_89721435ed03bed1] = env->getStaticMethodID(cls, "evaluate", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_differentiate_a126e91ca3e53df2] = env->getStaticMethodID(cls, "differentiate", "([Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldPolynomialFunction::FieldPolynomialFunction(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5d9c9afaca2e497c, a0.this$)) {}

        FieldPolynomialFunction FieldPolynomialFunction::add(const FieldPolynomialFunction & a0) const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_add_56800b7225457744], a0.this$));
        }

        FieldPolynomialFunction FieldPolynomialFunction::antiDerivative() const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_antiDerivative_30587ce6268a4343]));
        }

        jint FieldPolynomialFunction::degree() const
        {
          return env->callIntMethod(this$, mids$[mid_degree_412668abc8d889e9]);
        }

        JArray< ::org::hipparchus::CalculusFieldElement > FieldPolynomialFunction::getCoefficients() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getCoefficients_41762fd4377ff26e]));
        }

        ::org::hipparchus::Field FieldPolynomialFunction::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_20f98801541dcec1]));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialFunction::integrate(jdouble a0, jdouble a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_b42a276fbe83c342], a0, a1));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialFunction::integrate(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_d5f58731bcb8a011], a0.this$, a1.this$));
        }

        FieldPolynomialFunction FieldPolynomialFunction::multiply(const FieldPolynomialFunction & a0) const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_multiply_56800b7225457744], a0.this$));
        }

        FieldPolynomialFunction FieldPolynomialFunction::negate() const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_negate_30587ce6268a4343]));
        }

        FieldPolynomialFunction FieldPolynomialFunction::polynomialDerivative() const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_polynomialDerivative_30587ce6268a4343]));
        }

        FieldPolynomialFunction FieldPolynomialFunction::subtract(const FieldPolynomialFunction & a0) const
        {
          return FieldPolynomialFunction(env->callObjectMethod(this$, mids$[mid_subtract_56800b7225457744], a0.this$));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialFunction::value(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_94d37e81a3238af8], a0));
        }

        ::org::hipparchus::CalculusFieldElement FieldPolynomialFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_6672ad854985cb64], a0.this$));
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
#include "org/hipparchus/dfp/Dfp.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/dfp/Dfp.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/dfp/DfpField.h"
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *Dfp::class$ = NULL;
      jmethodID *Dfp::mids$ = NULL;
      bool Dfp::live$ = false;
      jint Dfp::ERR_SCALE = (jint) 0;
      jbyte Dfp::FINITE = (jbyte) 0;
      jbyte Dfp::INFINITE$ = (jbyte) 0;
      jint Dfp::MAX_EXP = (jint) 0;
      jint Dfp::MIN_EXP = (jint) 0;
      jbyte Dfp::QNAN = (jbyte) 0;
      jint Dfp::RADIX = (jint) 0;
      jbyte Dfp::SNAN$ = (jbyte) 0;

      jclass Dfp::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/Dfp");

          mids$ = new jmethodID[max_mid];
          mids$[mid_abs_dce9a968b1de6538] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_acos_dce9a968b1de6538] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_acosh_dce9a968b1de6538] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_add_f081bcbf4bd8f1ad] = env->getMethodID(cls, "add", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_add_48c0a79cfaaf4ea7] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_asin_dce9a968b1de6538] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_asinh_dce9a968b1de6538] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atan_dce9a968b1de6538] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atan2_f081bcbf4bd8f1ad] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atanh_dce9a968b1de6538] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cbrt_dce9a968b1de6538] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_ceil_dce9a968b1de6538] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_classify_412668abc8d889e9] = env->getMethodID(cls, "classify", "()I");
          mids$[mid_copySign_f081bcbf4bd8f1ad] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_copySign_48c0a79cfaaf4ea7] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_copysign_badefef06f0dff33] = env->getStaticMethodID(cls, "copysign", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cos_dce9a968b1de6538] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cosh_dce9a968b1de6538] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_divide_f081bcbf4bd8f1ad] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_divide_48c0a79cfaaf4ea7] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_divide_8418d0fac935c091] = env->getMethodID(cls, "divide", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_dotrap_ae590c3e8cbc2723] = env->getMethodID(cls, "dotrap", "(ILjava/lang/String;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_exp_dce9a968b1de6538] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_expm1_dce9a968b1de6538] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_floor_dce9a968b1de6538] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getExponent_412668abc8d889e9] = env->getMethodID(cls, "getExponent", "()I");
          mids$[mid_getField_5a77f9c80b33fd5a] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/dfp/DfpField;");
          mids$[mid_getOne_dce9a968b1de6538] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getPi_dce9a968b1de6538] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getRadixDigits_412668abc8d889e9] = env->getMethodID(cls, "getRadixDigits", "()I");
          mids$[mid_getReal_557b8123390d8d0c] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getTwo_dce9a968b1de6538] = env->getMethodID(cls, "getTwo", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getZero_dce9a968b1de6538] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_greaterThan_f711ea474040e8fa] = env->getMethodID(cls, "greaterThan", "(Lorg/hipparchus/dfp/Dfp;)Z");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_f081bcbf4bd8f1ad] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_intLog10_412668abc8d889e9] = env->getMethodID(cls, "intLog10", "()I");
          mids$[mid_intValue_412668abc8d889e9] = env->getMethodID(cls, "intValue", "()I");
          mids$[mid_isInfinite_89b302893bdbe1f1] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_89b302893bdbe1f1] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_isZero_89b302893bdbe1f1] = env->getMethodID(cls, "isZero", "()Z");
          mids$[mid_lessThan_f711ea474040e8fa] = env->getMethodID(cls, "lessThan", "(Lorg/hipparchus/dfp/Dfp;)Z");
          mids$[mid_linearCombination_19bbc204d20f8540] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_02f814f49dfef721] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/dfp/Dfp;[Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_ec6553a6b54db0e5] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_b0562de35779a422] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_0155f8f7121286b5] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_6de12e2f74c8f855] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_06edfb4921c1f375] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_056ad35ad9be28a8] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_log_dce9a968b1de6538] = env->getMethodID(cls, "log", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_log10_dce9a968b1de6538] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_log10K_412668abc8d889e9] = env->getMethodID(cls, "log10K", "()I");
          mids$[mid_log1p_dce9a968b1de6538] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_multiply_f081bcbf4bd8f1ad] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_multiply_48c0a79cfaaf4ea7] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_multiply_8418d0fac935c091] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_negate_dce9a968b1de6538] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_negativeOrNull_89b302893bdbe1f1] = env->getMethodID(cls, "negativeOrNull", "()Z");
          mids$[mid_newInstance_dce9a968b1de6538] = env->getMethodID(cls, "newInstance", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_4cf97baa750c9172] = env->getMethodID(cls, "newInstance", "(Ljava/lang/String;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_f081bcbf4bd8f1ad] = env->getMethodID(cls, "newInstance", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_e45f329aeeedfd27] = env->getMethodID(cls, "newInstance", "(B)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_48c0a79cfaaf4ea7] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_8418d0fac935c091] = env->getMethodID(cls, "newInstance", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_521fd622f2a09126] = env->getMethodID(cls, "newInstance", "(J)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_eb48fee777e8e985] = env->getMethodID(cls, "newInstance", "(Lorg/hipparchus/dfp/DfpField;Lorg/hipparchus/dfp/DfpField$RoundingMode;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_7b144e66c7452202] = env->getMethodID(cls, "newInstance", "(BB)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_nextAfter_f081bcbf4bd8f1ad] = env->getMethodID(cls, "nextAfter", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_positiveOrNull_89b302893bdbe1f1] = env->getMethodID(cls, "positiveOrNull", "()Z");
          mids$[mid_pow_f081bcbf4bd8f1ad] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_pow_48c0a79cfaaf4ea7] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_pow_8418d0fac935c091] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_power10_8418d0fac935c091] = env->getMethodID(cls, "power10", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_power10K_8418d0fac935c091] = env->getMethodID(cls, "power10K", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_reciprocal_dce9a968b1de6538] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_remainder_f081bcbf4bd8f1ad] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_remainder_48c0a79cfaaf4ea7] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_rint_dce9a968b1de6538] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_rootN_8418d0fac935c091] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_scalb_8418d0fac935c091] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sign_dce9a968b1de6538] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sin_dce9a968b1de6538] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sinCos_5efdd92d175db117] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_dce9a968b1de6538] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sinhCosh_e5a948cfec461975] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_dce9a968b1de6538] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_strictlyNegative_89b302893bdbe1f1] = env->getMethodID(cls, "strictlyNegative", "()Z");
          mids$[mid_strictlyPositive_89b302893bdbe1f1] = env->getMethodID(cls, "strictlyPositive", "()Z");
          mids$[mid_subtract_f081bcbf4bd8f1ad] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_subtract_48c0a79cfaaf4ea7] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_tan_dce9a968b1de6538] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_tanh_dce9a968b1de6538] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_toDegrees_dce9a968b1de6538] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_toDouble_557b8123390d8d0c] = env->getMethodID(cls, "toDouble", "()D");
          mids$[mid_toRadians_dce9a968b1de6538] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_toSplitDouble_a53a7513ecedada2] = env->getMethodID(cls, "toSplitDouble", "()[D");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_ulp_dce9a968b1de6538] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_unequal_f711ea474040e8fa] = env->getMethodID(cls, "unequal", "(Lorg/hipparchus/dfp/Dfp;)Z");
          mids$[mid_shiftRight_0640e6acf969ed28] = env->getMethodID(cls, "shiftRight", "()V");
          mids$[mid_align_0092017e99012694] = env->getMethodID(cls, "align", "(I)I");
          mids$[mid_trunc_da4b052ce8cfcaf7] = env->getMethodID(cls, "trunc", "(Lorg/hipparchus/dfp/DfpField$RoundingMode;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_dfp2sci_3cffd47377eca18a] = env->getMethodID(cls, "dfp2sci", "()Ljava/lang/String;");
          mids$[mid_dfp2string_3cffd47377eca18a] = env->getMethodID(cls, "dfp2string", "()Ljava/lang/String;");
          mids$[mid_trap_e6d2b492ecfcb70d] = env->getMethodID(cls, "trap", "(ILjava/lang/String;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_complement_0092017e99012694] = env->getMethodID(cls, "complement", "(I)I");
          mids$[mid_shiftLeft_0640e6acf969ed28] = env->getMethodID(cls, "shiftLeft", "()V");
          mids$[mid_round_0092017e99012694] = env->getMethodID(cls, "round", "(I)I");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ERR_SCALE = env->getStaticIntField(cls, "ERR_SCALE");
          FINITE = env->getStaticByteField(cls, "FINITE");
          INFINITE$ = env->getStaticByteField(cls, "INFINITE");
          MAX_EXP = env->getStaticIntField(cls, "MAX_EXP");
          MIN_EXP = env->getStaticIntField(cls, "MIN_EXP");
          QNAN = env->getStaticByteField(cls, "QNAN");
          RADIX = env->getStaticIntField(cls, "RADIX");
          SNAN$ = env->getStaticByteField(cls, "SNAN");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Dfp Dfp::abs() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_abs_dce9a968b1de6538]));
      }

      Dfp Dfp::acos() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_acos_dce9a968b1de6538]));
      }

      Dfp Dfp::acosh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_acosh_dce9a968b1de6538]));
      }

      Dfp Dfp::add(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_add_f081bcbf4bd8f1ad], a0.this$));
      }

      Dfp Dfp::add(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_add_48c0a79cfaaf4ea7], a0));
      }

      Dfp Dfp::asin() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_asin_dce9a968b1de6538]));
      }

      Dfp Dfp::asinh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_asinh_dce9a968b1de6538]));
      }

      Dfp Dfp::atan() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_atan_dce9a968b1de6538]));
      }

      Dfp Dfp::atan2(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_atan2_f081bcbf4bd8f1ad], a0.this$));
      }

      Dfp Dfp::atanh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_atanh_dce9a968b1de6538]));
      }

      Dfp Dfp::cbrt() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_cbrt_dce9a968b1de6538]));
      }

      Dfp Dfp::ceil() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_ceil_dce9a968b1de6538]));
      }

      jint Dfp::classify() const
      {
        return env->callIntMethod(this$, mids$[mid_classify_412668abc8d889e9]);
      }

      Dfp Dfp::copySign(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_copySign_f081bcbf4bd8f1ad], a0.this$));
      }

      Dfp Dfp::copySign(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_copySign_48c0a79cfaaf4ea7], a0));
      }

      Dfp Dfp::copysign(const Dfp & a0, const Dfp & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Dfp(env->callStaticObjectMethod(cls, mids$[mid_copysign_badefef06f0dff33], a0.this$, a1.this$));
      }

      Dfp Dfp::cos() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_cos_dce9a968b1de6538]));
      }

      Dfp Dfp::cosh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_cosh_dce9a968b1de6538]));
      }

      Dfp Dfp::divide(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_divide_f081bcbf4bd8f1ad], a0.this$));
      }

      Dfp Dfp::divide(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_divide_48c0a79cfaaf4ea7], a0));
      }

      Dfp Dfp::divide(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_divide_8418d0fac935c091], a0));
      }

      Dfp Dfp::dotrap(jint a0, const ::java::lang::String & a1, const Dfp & a2, const Dfp & a3) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_dotrap_ae590c3e8cbc2723], a0, a1.this$, a2.this$, a3.this$));
      }

      jboolean Dfp::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      Dfp Dfp::exp() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_exp_dce9a968b1de6538]));
      }

      Dfp Dfp::expm1() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_expm1_dce9a968b1de6538]));
      }

      Dfp Dfp::floor() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_floor_dce9a968b1de6538]));
      }

      jint Dfp::getExponent() const
      {
        return env->callIntMethod(this$, mids$[mid_getExponent_412668abc8d889e9]);
      }

      ::org::hipparchus::dfp::DfpField Dfp::getField() const
      {
        return ::org::hipparchus::dfp::DfpField(env->callObjectMethod(this$, mids$[mid_getField_5a77f9c80b33fd5a]));
      }

      Dfp Dfp::getOne() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_getOne_dce9a968b1de6538]));
      }

      Dfp Dfp::getPi() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_getPi_dce9a968b1de6538]));
      }

      jint Dfp::getRadixDigits() const
      {
        return env->callIntMethod(this$, mids$[mid_getRadixDigits_412668abc8d889e9]);
      }

      jdouble Dfp::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_557b8123390d8d0c]);
      }

      Dfp Dfp::getTwo() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_getTwo_dce9a968b1de6538]));
      }

      Dfp Dfp::getZero() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_getZero_dce9a968b1de6538]));
      }

      jboolean Dfp::greaterThan(const Dfp & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_greaterThan_f711ea474040e8fa], a0.this$);
      }

      jint Dfp::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
      }

      Dfp Dfp::hypot(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_hypot_f081bcbf4bd8f1ad], a0.this$));
      }

      jint Dfp::intLog10() const
      {
        return env->callIntMethod(this$, mids$[mid_intLog10_412668abc8d889e9]);
      }

      jint Dfp::intValue() const
      {
        return env->callIntMethod(this$, mids$[mid_intValue_412668abc8d889e9]);
      }

      jboolean Dfp::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_89b302893bdbe1f1]);
      }

      jboolean Dfp::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_89b302893bdbe1f1]);
      }

      jboolean Dfp::isZero() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isZero_89b302893bdbe1f1]);
      }

      jboolean Dfp::lessThan(const Dfp & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_lessThan_f711ea474040e8fa], a0.this$);
      }

      Dfp Dfp::linearCombination(const JArray< jdouble > & a0, const JArray< Dfp > & a1) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_19bbc204d20f8540], a0.this$, a1.this$));
      }

      Dfp Dfp::linearCombination(const JArray< Dfp > & a0, const JArray< Dfp > & a1) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_02f814f49dfef721], a0.this$, a1.this$));
      }

      Dfp Dfp::linearCombination(const Dfp & a0, const Dfp & a1, const Dfp & a2, const Dfp & a3) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_ec6553a6b54db0e5], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Dfp Dfp::linearCombination(jdouble a0, const Dfp & a1, jdouble a2, const Dfp & a3) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_b0562de35779a422], a0, a1.this$, a2, a3.this$));
      }

      Dfp Dfp::linearCombination(const Dfp & a0, const Dfp & a1, const Dfp & a2, const Dfp & a3, const Dfp & a4, const Dfp & a5) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_0155f8f7121286b5], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      Dfp Dfp::linearCombination(jdouble a0, const Dfp & a1, jdouble a2, const Dfp & a3, jdouble a4, const Dfp & a5) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_6de12e2f74c8f855], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      Dfp Dfp::linearCombination(const Dfp & a0, const Dfp & a1, const Dfp & a2, const Dfp & a3, const Dfp & a4, const Dfp & a5, const Dfp & a6, const Dfp & a7) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_06edfb4921c1f375], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      Dfp Dfp::linearCombination(jdouble a0, const Dfp & a1, jdouble a2, const Dfp & a3, jdouble a4, const Dfp & a5, jdouble a6, const Dfp & a7) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_056ad35ad9be28a8], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      Dfp Dfp::log() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_log_dce9a968b1de6538]));
      }

      Dfp Dfp::log10() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_log10_dce9a968b1de6538]));
      }

      jint Dfp::log10K() const
      {
        return env->callIntMethod(this$, mids$[mid_log10K_412668abc8d889e9]);
      }

      Dfp Dfp::log1p() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_log1p_dce9a968b1de6538]));
      }

      Dfp Dfp::multiply(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_multiply_f081bcbf4bd8f1ad], a0.this$));
      }

      Dfp Dfp::multiply(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_multiply_48c0a79cfaaf4ea7], a0));
      }

      Dfp Dfp::multiply(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_multiply_8418d0fac935c091], a0));
      }

      Dfp Dfp::negate() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_negate_dce9a968b1de6538]));
      }

      jboolean Dfp::negativeOrNull() const
      {
        return env->callBooleanMethod(this$, mids$[mid_negativeOrNull_89b302893bdbe1f1]);
      }

      Dfp Dfp::newInstance() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_dce9a968b1de6538]));
      }

      Dfp Dfp::newInstance(const ::java::lang::String & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_4cf97baa750c9172], a0.this$));
      }

      Dfp Dfp::newInstance(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_f081bcbf4bd8f1ad], a0.this$));
      }

      Dfp Dfp::newInstance(jbyte a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_e45f329aeeedfd27], a0));
      }

      Dfp Dfp::newInstance(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_48c0a79cfaaf4ea7], a0));
      }

      Dfp Dfp::newInstance(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_8418d0fac935c091], a0));
      }

      Dfp Dfp::newInstance(jlong a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_521fd622f2a09126], a0));
      }

      Dfp Dfp::newInstance(const ::org::hipparchus::dfp::DfpField & a0, const ::org::hipparchus::dfp::DfpField$RoundingMode & a1) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_eb48fee777e8e985], a0.this$, a1.this$));
      }

      Dfp Dfp::newInstance(jbyte a0, jbyte a1) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_7b144e66c7452202], a0, a1));
      }

      Dfp Dfp::nextAfter(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_nextAfter_f081bcbf4bd8f1ad], a0.this$));
      }

      jboolean Dfp::positiveOrNull() const
      {
        return env->callBooleanMethod(this$, mids$[mid_positiveOrNull_89b302893bdbe1f1]);
      }

      Dfp Dfp::pow(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_pow_f081bcbf4bd8f1ad], a0.this$));
      }

      Dfp Dfp::pow(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_pow_48c0a79cfaaf4ea7], a0));
      }

      Dfp Dfp::pow(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_pow_8418d0fac935c091], a0));
      }

      Dfp Dfp::power10(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_power10_8418d0fac935c091], a0));
      }

      Dfp Dfp::power10K(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_power10K_8418d0fac935c091], a0));
      }

      Dfp Dfp::reciprocal() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_reciprocal_dce9a968b1de6538]));
      }

      Dfp Dfp::remainder(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_remainder_f081bcbf4bd8f1ad], a0.this$));
      }

      Dfp Dfp::remainder(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_remainder_48c0a79cfaaf4ea7], a0));
      }

      Dfp Dfp::rint() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_rint_dce9a968b1de6538]));
      }

      Dfp Dfp::rootN(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_rootN_8418d0fac935c091], a0));
      }

      Dfp Dfp::scalb(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_scalb_8418d0fac935c091], a0));
      }

      Dfp Dfp::sign() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_sign_dce9a968b1de6538]));
      }

      Dfp Dfp::sin() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_sin_dce9a968b1de6538]));
      }

      ::org::hipparchus::util::FieldSinCos Dfp::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_5efdd92d175db117]));
      }

      Dfp Dfp::sinh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_sinh_dce9a968b1de6538]));
      }

      ::org::hipparchus::util::FieldSinhCosh Dfp::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_e5a948cfec461975]));
      }

      Dfp Dfp::sqrt() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_sqrt_dce9a968b1de6538]));
      }

      jboolean Dfp::strictlyNegative() const
      {
        return env->callBooleanMethod(this$, mids$[mid_strictlyNegative_89b302893bdbe1f1]);
      }

      jboolean Dfp::strictlyPositive() const
      {
        return env->callBooleanMethod(this$, mids$[mid_strictlyPositive_89b302893bdbe1f1]);
      }

      Dfp Dfp::subtract(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_subtract_f081bcbf4bd8f1ad], a0.this$));
      }

      Dfp Dfp::subtract(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_subtract_48c0a79cfaaf4ea7], a0));
      }

      Dfp Dfp::tan() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_tan_dce9a968b1de6538]));
      }

      Dfp Dfp::tanh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_tanh_dce9a968b1de6538]));
      }

      Dfp Dfp::toDegrees() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_toDegrees_dce9a968b1de6538]));
      }

      jdouble Dfp::toDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_toDouble_557b8123390d8d0c]);
      }

      Dfp Dfp::toRadians() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_toRadians_dce9a968b1de6538]));
      }

      JArray< jdouble > Dfp::toSplitDouble() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toSplitDouble_a53a7513ecedada2]));
      }

      ::java::lang::String Dfp::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
      }

      Dfp Dfp::ulp() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_ulp_dce9a968b1de6538]));
      }

      jboolean Dfp::unequal(const Dfp & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_unequal_f711ea474040e8fa], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      static PyObject *t_Dfp_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Dfp_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Dfp_abs(t_Dfp *self);
      static PyObject *t_Dfp_acos(t_Dfp *self);
      static PyObject *t_Dfp_acosh(t_Dfp *self);
      static PyObject *t_Dfp_add(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_asin(t_Dfp *self);
      static PyObject *t_Dfp_asinh(t_Dfp *self);
      static PyObject *t_Dfp_atan(t_Dfp *self);
      static PyObject *t_Dfp_atan2(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_atanh(t_Dfp *self);
      static PyObject *t_Dfp_cbrt(t_Dfp *self);
      static PyObject *t_Dfp_ceil(t_Dfp *self);
      static PyObject *t_Dfp_classify(t_Dfp *self);
      static PyObject *t_Dfp_copySign(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_copysign(PyTypeObject *type, PyObject *args);
      static PyObject *t_Dfp_cos(t_Dfp *self);
      static PyObject *t_Dfp_cosh(t_Dfp *self);
      static PyObject *t_Dfp_divide(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_dotrap(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_equals(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_exp(t_Dfp *self);
      static PyObject *t_Dfp_expm1(t_Dfp *self);
      static PyObject *t_Dfp_floor(t_Dfp *self);
      static PyObject *t_Dfp_getExponent(t_Dfp *self);
      static PyObject *t_Dfp_getField(t_Dfp *self);
      static PyObject *t_Dfp_getOne(t_Dfp *self);
      static PyObject *t_Dfp_getPi(t_Dfp *self);
      static PyObject *t_Dfp_getRadixDigits(t_Dfp *self);
      static PyObject *t_Dfp_getReal(t_Dfp *self);
      static PyObject *t_Dfp_getTwo(t_Dfp *self);
      static PyObject *t_Dfp_getZero(t_Dfp *self);
      static PyObject *t_Dfp_greaterThan(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_hashCode(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_hypot(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_intLog10(t_Dfp *self);
      static PyObject *t_Dfp_intValue(t_Dfp *self);
      static PyObject *t_Dfp_isInfinite(t_Dfp *self);
      static PyObject *t_Dfp_isNaN(t_Dfp *self);
      static PyObject *t_Dfp_isZero(t_Dfp *self);
      static PyObject *t_Dfp_lessThan(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_linearCombination(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_log(t_Dfp *self);
      static PyObject *t_Dfp_log10(t_Dfp *self);
      static PyObject *t_Dfp_log10K(t_Dfp *self);
      static PyObject *t_Dfp_log1p(t_Dfp *self);
      static PyObject *t_Dfp_multiply(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_negate(t_Dfp *self);
      static PyObject *t_Dfp_negativeOrNull(t_Dfp *self);
      static PyObject *t_Dfp_newInstance(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_nextAfter(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_positiveOrNull(t_Dfp *self);
      static PyObject *t_Dfp_pow(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_power10(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_power10K(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_reciprocal(t_Dfp *self);
      static PyObject *t_Dfp_remainder(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_rint(t_Dfp *self);
      static PyObject *t_Dfp_rootN(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_scalb(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_sign(t_Dfp *self);
      static PyObject *t_Dfp_sin(t_Dfp *self);
      static PyObject *t_Dfp_sinCos(t_Dfp *self);
      static PyObject *t_Dfp_sinh(t_Dfp *self);
      static PyObject *t_Dfp_sinhCosh(t_Dfp *self);
      static PyObject *t_Dfp_sqrt(t_Dfp *self);
      static PyObject *t_Dfp_strictlyNegative(t_Dfp *self);
      static PyObject *t_Dfp_strictlyPositive(t_Dfp *self);
      static PyObject *t_Dfp_subtract(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_tan(t_Dfp *self);
      static PyObject *t_Dfp_tanh(t_Dfp *self);
      static PyObject *t_Dfp_toDegrees(t_Dfp *self);
      static PyObject *t_Dfp_toDouble(t_Dfp *self);
      static PyObject *t_Dfp_toRadians(t_Dfp *self);
      static PyObject *t_Dfp_toSplitDouble(t_Dfp *self);
      static PyObject *t_Dfp_toString(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_ulp(t_Dfp *self);
      static PyObject *t_Dfp_unequal(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_get__exponent(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__field(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__infinite(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__naN(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__one(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__pi(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__radixDigits(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__real(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__two(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__zero(t_Dfp *self, void *data);
      static PyGetSetDef t_Dfp__fields_[] = {
        DECLARE_GET_FIELD(t_Dfp, exponent),
        DECLARE_GET_FIELD(t_Dfp, field),
        DECLARE_GET_FIELD(t_Dfp, infinite),
        DECLARE_GET_FIELD(t_Dfp, naN),
        DECLARE_GET_FIELD(t_Dfp, one),
        DECLARE_GET_FIELD(t_Dfp, pi),
        DECLARE_GET_FIELD(t_Dfp, radixDigits),
        DECLARE_GET_FIELD(t_Dfp, real),
        DECLARE_GET_FIELD(t_Dfp, two),
        DECLARE_GET_FIELD(t_Dfp, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Dfp__methods_[] = {
        DECLARE_METHOD(t_Dfp, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Dfp, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Dfp, abs, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, acos, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, acosh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, add, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, asin, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, asinh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, atan, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, atan2, METH_O),
        DECLARE_METHOD(t_Dfp, atanh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, ceil, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, classify, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, copySign, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, copysign, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Dfp, cos, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, cosh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, divide, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, dotrap, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, equals, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, exp, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, expm1, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, floor, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getExponent, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getField, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getOne, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getPi, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getRadixDigits, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getTwo, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getZero, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, greaterThan, METH_O),
        DECLARE_METHOD(t_Dfp, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, hypot, METH_O),
        DECLARE_METHOD(t_Dfp, intLog10, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, intValue, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, isZero, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, lessThan, METH_O),
        DECLARE_METHOD(t_Dfp, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, log, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, log10, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, log10K, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, log1p, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, negate, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, negativeOrNull, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, newInstance, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, nextAfter, METH_O),
        DECLARE_METHOD(t_Dfp, positiveOrNull, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, pow, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, power10, METH_O),
        DECLARE_METHOD(t_Dfp, power10K, METH_O),
        DECLARE_METHOD(t_Dfp, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, remainder, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, rint, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, rootN, METH_O),
        DECLARE_METHOD(t_Dfp, scalb, METH_O),
        DECLARE_METHOD(t_Dfp, sign, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sin, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sinh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, strictlyNegative, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, strictlyPositive, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, tan, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, tanh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toDouble, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toSplitDouble, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toString, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, ulp, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, unequal, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Dfp)[] = {
        { Py_tp_methods, t_Dfp__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Dfp__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Dfp)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Dfp, t_Dfp, Dfp);

      void t_Dfp::install(PyObject *module)
      {
        installType(&PY_TYPE(Dfp), &PY_TYPE_DEF(Dfp), module, "Dfp", 0);
      }

      void t_Dfp::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "class_", make_descriptor(Dfp::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "wrapfn_", make_descriptor(t_Dfp::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "boxfn_", make_descriptor(boxObject));
        env->getClass(Dfp::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "ERR_SCALE", make_descriptor(Dfp::ERR_SCALE));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "FINITE", make_descriptor(Dfp::FINITE));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "INFINITE", make_descriptor(Dfp::INFINITE$));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "MAX_EXP", make_descriptor(Dfp::MAX_EXP));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "MIN_EXP", make_descriptor(Dfp::MIN_EXP));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "QNAN", make_descriptor(Dfp::QNAN));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "RADIX", make_descriptor(Dfp::RADIX));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "SNAN", make_descriptor(Dfp::SNAN$));
      }

      static PyObject *t_Dfp_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Dfp::initializeClass, 1)))
          return NULL;
        return t_Dfp::wrap_Object(Dfp(((t_Dfp *) arg)->object.this$));
      }
      static PyObject *t_Dfp_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Dfp::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Dfp_abs(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_acos(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_acosh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_add(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Dfp_asin(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_asinh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_atan(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_atan2(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_Dfp_atanh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_cbrt(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_ceil(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_classify(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.classify());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_copySign(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_Dfp_copysign(PyTypeObject *type, PyObject *args)
      {
        Dfp a0((jobject) NULL);
        Dfp a1((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArgs(args, "kk", Dfp::initializeClass, Dfp::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::Dfp::copysign(a0, a1));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "copysign", args);
        return NULL;
      }

      static PyObject *t_Dfp_cos(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_cosh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_divide(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Dfp_dotrap(t_Dfp *self, PyObject *args)
      {
        jint a0;
        ::java::lang::String a1((jobject) NULL);
        Dfp a2((jobject) NULL);
        Dfp a3((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArgs(args, "Iskk", Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.dotrap(a0, a1, a2, a3));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotrap", args);
        return NULL;
      }

      static PyObject *t_Dfp_equals(t_Dfp *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Dfp), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Dfp_exp(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_expm1(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_floor(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_getExponent(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getExponent());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_getField(t_Dfp *self)
      {
        ::org::hipparchus::dfp::DfpField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::dfp::t_DfpField::wrap_Object(result);
      }

      static PyObject *t_Dfp_getOne(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_getPi(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_getRadixDigits(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRadixDigits());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_getReal(t_Dfp *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Dfp_getTwo(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getTwo());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_getZero(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_greaterThan(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.greaterThan(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "greaterThan", arg);
        return NULL;
      }

      static PyObject *t_Dfp_hashCode(t_Dfp *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Dfp), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Dfp_hypot(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_Dfp_intLog10(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.intLog10());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_intValue(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_isInfinite(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_isNaN(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_isZero(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isZero());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_lessThan(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.lessThan(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "lessThan", arg);
        return NULL;
      }

      static PyObject *t_Dfp_linearCombination(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< Dfp > a1((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "[D[k", Dfp::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            JArray< Dfp > a0((jobject) NULL);
            JArray< Dfp > a1((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "[k[k", Dfp::initializeClass, Dfp::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            Dfp a0((jobject) NULL);
            Dfp a1((jobject) NULL);
            Dfp a2((jobject) NULL);
            Dfp a3((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "kkkk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp a1((jobject) NULL);
            jdouble a2;
            Dfp a3((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "DkDk", Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            Dfp a0((jobject) NULL);
            Dfp a1((jobject) NULL);
            Dfp a2((jobject) NULL);
            Dfp a3((jobject) NULL);
            Dfp a4((jobject) NULL);
            Dfp a5((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "kkkkkk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp a1((jobject) NULL);
            jdouble a2;
            Dfp a3((jobject) NULL);
            jdouble a4;
            Dfp a5((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 8:
          {
            Dfp a0((jobject) NULL);
            Dfp a1((jobject) NULL);
            Dfp a2((jobject) NULL);
            Dfp a3((jobject) NULL);
            Dfp a4((jobject) NULL);
            Dfp a5((jobject) NULL);
            Dfp a6((jobject) NULL);
            Dfp a7((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "kkkkkkkk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp a1((jobject) NULL);
            jdouble a2;
            Dfp a3((jobject) NULL);
            jdouble a4;
            Dfp a5((jobject) NULL);
            jdouble a6;
            Dfp a7((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_Dfp_log(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_log10(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_log10K(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.log10K());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_log1p(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_multiply(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Dfp_negate(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_negativeOrNull(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.negativeOrNull());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_newInstance(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Dfp result((jobject) NULL);
            OBJ_CALL(result = self->object.newInstance());
            return t_Dfp::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jbyte a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "B", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jlong a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::dfp::DfpField a0((jobject) NULL);
            ::org::hipparchus::dfp::DfpField$RoundingMode a1((jobject) NULL);
            PyTypeObject **p1;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::hipparchus::dfp::DfpField::initializeClass, ::org::hipparchus::dfp::DfpField$RoundingMode::initializeClass, &a0, &a1, &p1, ::org::hipparchus::dfp::t_DfpField$RoundingMode::parameters_))
            {
              OBJ_CALL(result = self->object.newInstance(a0, a1));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jbyte a0;
            jbyte a1;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "BB", &a0, &a1))
            {
              OBJ_CALL(result = self->object.newInstance(a0, a1));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", args);
        return NULL;
      }

      static PyObject *t_Dfp_nextAfter(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.nextAfter(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextAfter", arg);
        return NULL;
      }

      static PyObject *t_Dfp_positiveOrNull(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.positiveOrNull());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_pow(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_Dfp_power10(t_Dfp *self, PyObject *arg)
      {
        jint a0;
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power10(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "power10", arg);
        return NULL;
      }

      static PyObject *t_Dfp_power10K(t_Dfp *self, PyObject *arg)
      {
        jint a0;
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power10K(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "power10K", arg);
        return NULL;
      }

      static PyObject *t_Dfp_reciprocal(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_remainder(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_Dfp_rint(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_rootN(t_Dfp *self, PyObject *arg)
      {
        jint a0;
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_Dfp_scalb(t_Dfp *self, PyObject *arg)
      {
        jint a0;
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_Dfp_sign(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_sin(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_sinCos(t_Dfp *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::dfp::PY_TYPE(Dfp));
      }

      static PyObject *t_Dfp_sinh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_sinhCosh(t_Dfp *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::dfp::PY_TYPE(Dfp));
      }

      static PyObject *t_Dfp_sqrt(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_strictlyNegative(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.strictlyNegative());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_strictlyPositive(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.strictlyPositive());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_subtract(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Dfp_tan(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_tanh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_toDegrees(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_toDouble(t_Dfp *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.toDouble());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Dfp_toRadians(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_toSplitDouble(t_Dfp *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.toSplitDouble());
        return result.wrap();
      }

      static PyObject *t_Dfp_toString(t_Dfp *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Dfp), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Dfp_ulp(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_unequal(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.unequal(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "unequal", arg);
        return NULL;
      }

      static PyObject *t_Dfp_get__exponent(t_Dfp *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getExponent());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Dfp_get__field(t_Dfp *self, void *data)
      {
        ::org::hipparchus::dfp::DfpField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::dfp::t_DfpField::wrap_Object(value);
      }

      static PyObject *t_Dfp_get__infinite(t_Dfp *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Dfp_get__naN(t_Dfp *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Dfp_get__one(t_Dfp *self, void *data)
      {
        Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return t_Dfp::wrap_Object(value);
      }

      static PyObject *t_Dfp_get__pi(t_Dfp *self, void *data)
      {
        Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_Dfp::wrap_Object(value);
      }

      static PyObject *t_Dfp_get__radixDigits(t_Dfp *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRadixDigits());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Dfp_get__real(t_Dfp *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Dfp_get__two(t_Dfp *self, void *data)
      {
        Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getTwo());
        return t_Dfp::wrap_Object(value);
      }

      static PyObject *t_Dfp_get__zero(t_Dfp *self, void *data)
      {
        Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return t_Dfp::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/Apm.h"
#include "org/orekit/attitudes/Attitude.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmData.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *Apm::class$ = NULL;
              jmethodID *Apm::mids$ = NULL;
              bool Apm::live$ = false;
              ::java::lang::String *Apm::FORMAT_VERSION_KEY = NULL;
              ::java::lang::String *Apm::ROOT = NULL;

              jclass Apm::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/Apm");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_f4c63464eb8f0477] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_getAttitude_01bb94f66a53b35f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;)Lorg/orekit/attitudes/Attitude;");
                  mids$[mid_getData_da1d576fd2e75a4a] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/adm/apm/ApmData;");
                  mids$[mid_getMetadata_7dc122883bd588a3] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/adm/AdmMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Apm::Apm(const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_f4c63464eb8f0477, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              ::org::orekit::attitudes::Attitude Apm::getAttitude(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1) const
              {
                return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_01bb94f66a53b35f], a0.this$, a1.this$));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::ApmData Apm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::ApmData(env->callObjectMethod(this$, mids$[mid_getData_da1d576fd2e75a4a]));
              }

              ::org::orekit::files::ccsds::ndm::adm::AdmMetadata Apm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_7dc122883bd588a3]));
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
              static PyObject *t_Apm_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Apm_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Apm_of_(t_Apm *self, PyObject *args);
              static int t_Apm_init_(t_Apm *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Apm_getAttitude(t_Apm *self, PyObject *args);
              static PyObject *t_Apm_getData(t_Apm *self);
              static PyObject *t_Apm_getMetadata(t_Apm *self);
              static PyObject *t_Apm_get__data(t_Apm *self, void *data);
              static PyObject *t_Apm_get__metadata(t_Apm *self, void *data);
              static PyObject *t_Apm_get__parameters_(t_Apm *self, void *data);
              static PyGetSetDef t_Apm__fields_[] = {
                DECLARE_GET_FIELD(t_Apm, data),
                DECLARE_GET_FIELD(t_Apm, metadata),
                DECLARE_GET_FIELD(t_Apm, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Apm__methods_[] = {
                DECLARE_METHOD(t_Apm, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Apm, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Apm, of_, METH_VARARGS),
                DECLARE_METHOD(t_Apm, getAttitude, METH_VARARGS),
                DECLARE_METHOD(t_Apm, getData, METH_NOARGS),
                DECLARE_METHOD(t_Apm, getMetadata, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Apm)[] = {
                { Py_tp_methods, t_Apm__methods_ },
                { Py_tp_init, (void *) t_Apm_init_ },
                { Py_tp_getset, t_Apm__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Apm)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
                NULL
              };

              DEFINE_TYPE(Apm, t_Apm, Apm);
              PyObject *t_Apm::wrap_Object(const Apm& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Apm::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Apm *self = (t_Apm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Apm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Apm::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Apm *self = (t_Apm *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Apm::install(PyObject *module)
              {
                installType(&PY_TYPE(Apm), &PY_TYPE_DEF(Apm), module, "Apm", 0);
              }

              void t_Apm::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Apm), "class_", make_descriptor(Apm::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Apm), "wrapfn_", make_descriptor(t_Apm::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Apm), "boxfn_", make_descriptor(boxObject));
                env->getClass(Apm::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(Apm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Apm::FORMAT_VERSION_KEY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Apm), "ROOT", make_descriptor(j2p(*Apm::ROOT)));
              }

              static PyObject *t_Apm_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Apm::initializeClass, 1)))
                  return NULL;
                return t_Apm::wrap_Object(Apm(((t_Apm *) arg)->object.this$));
              }
              static PyObject *t_Apm_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Apm::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Apm_of_(t_Apm *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Apm_init_(t_Apm *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::utils::IERSConventions a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::data::DataContext a3((jobject) NULL);
                Apm object((jobject) NULL);

                if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
                {
                  INT_CALL(object = Apm(a0, a1, a2, a3));
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

              static PyObject *t_Apm_getAttitude(t_Apm *self, PyObject *args)
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

              static PyObject *t_Apm_getData(t_Apm *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmData result((jobject) NULL);
                OBJ_CALL(result = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmData::wrap_Object(result);
              }

              static PyObject *t_Apm_getMetadata(t_Apm *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmMetadata result((jobject) NULL);
                OBJ_CALL(result = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmMetadata::wrap_Object(result);
              }
              static PyObject *t_Apm_get__parameters_(t_Apm *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_Apm_get__data(t_Apm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::apm::ApmData value((jobject) NULL);
                OBJ_CALL(value = self->object.getData());
                return ::org::orekit::files::ccsds::ndm::adm::apm::t_ApmData::wrap_Object(value);
              }

              static PyObject *t_Apm_get__metadata(t_Apm *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmMetadata value((jobject) NULL);
                OBJ_CALL(value = self->object.getMetadata());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmMetadata::wrap_Object(value);
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
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadataKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmMetadataKey::class$ = NULL;
            jmethodID *AdmMetadataKey::mids$ = NULL;
            bool AdmMetadataKey::live$ = false;
            AdmMetadataKey *AdmMetadataKey::CENTER_NAME = NULL;
            AdmMetadataKey *AdmMetadataKey::OBJECT_NAME = NULL;

            jclass AdmMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_cfa125da71219f08] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/AdmMetadata;)Z");
                mids$[mid_valueOf_6a09891492e31266] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/AdmMetadataKey;");
                mids$[mid_values_b7d60a2274250787] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/AdmMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                CENTER_NAME = new AdmMetadataKey(env->getStaticObjectField(cls, "CENTER_NAME", "Lorg/orekit/files/ccsds/ndm/adm/AdmMetadataKey;"));
                OBJECT_NAME = new AdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_NAME", "Lorg/orekit/files/ccsds/ndm/adm/AdmMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AdmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::AdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_cfa125da71219f08], a0.this$, a1.this$, a2.this$);
            }

            AdmMetadataKey AdmMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AdmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6a09891492e31266], a0.this$));
            }

            JArray< AdmMetadataKey > AdmMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AdmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_b7d60a2274250787]));
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
            static PyObject *t_AdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmMetadataKey_of_(t_AdmMetadataKey *self, PyObject *args);
            static PyObject *t_AdmMetadataKey_process(t_AdmMetadataKey *self, PyObject *args);
            static PyObject *t_AdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AdmMetadataKey_values(PyTypeObject *type);
            static PyObject *t_AdmMetadataKey_get__parameters_(t_AdmMetadataKey *self, void *data);
            static PyGetSetDef t_AdmMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_AdmMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdmMetadataKey__methods_[] = {
              DECLARE_METHOD(t_AdmMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdmMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_AdmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AdmMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmMetadataKey)[] = {
              { Py_tp_methods, t_AdmMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdmMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AdmMetadataKey, t_AdmMetadataKey, AdmMetadataKey);
            PyObject *t_AdmMetadataKey::wrap_Object(const AdmMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdmMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmMetadataKey *self = (t_AdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AdmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdmMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmMetadataKey *self = (t_AdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AdmMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmMetadataKey), &PY_TYPE_DEF(AdmMetadataKey), module, "AdmMetadataKey", 0);
            }

            void t_AdmMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "class_", make_descriptor(AdmMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "wrapfn_", make_descriptor(t_AdmMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(AdmMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "CENTER_NAME", make_descriptor(t_AdmMetadataKey::wrap_Object(*AdmMetadataKey::CENTER_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmMetadataKey), "OBJECT_NAME", make_descriptor(t_AdmMetadataKey::wrap_Object(*AdmMetadataKey::OBJECT_NAME)));
            }

            static PyObject *t_AdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmMetadataKey::initializeClass, 1)))
                return NULL;
              return t_AdmMetadataKey::wrap_Object(AdmMetadataKey(((t_AdmMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_AdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdmMetadataKey_of_(t_AdmMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdmMetadataKey_process(t_AdmMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::adm::AdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::AdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_AdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AdmMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AdmMetadataKey::valueOf(a0));
                return t_AdmMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AdmMetadataKey_values(PyTypeObject *type)
            {
              JArray< AdmMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AdmMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_AdmMetadataKey::wrap_jobject);
            }
            static PyObject *t_AdmMetadataKey_get__parameters_(t_AdmMetadataKey *self, void *data)
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
#include "org/orekit/rugged/raster/Tile.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *Tile::class$ = NULL;
        jmethodID *Tile::mids$ = NULL;
        bool Tile::live$ = false;

        jclass Tile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/Tile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_cellIntersection_9786a4c652387487] = env->getMethodID(cls, "cellIntersection", "(Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;II)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_getElevationAtIndices_21b81d54c06b64b0] = env->getMethodID(cls, "getElevationAtIndices", "(II)D");
            mids$[mid_getFloorLatitudeIndex_abbeb9db7144ca23] = env->getMethodID(cls, "getFloorLatitudeIndex", "(D)I");
            mids$[mid_getFloorLongitudeIndex_abbeb9db7144ca23] = env->getMethodID(cls, "getFloorLongitudeIndex", "(D)I");
            mids$[mid_getLatitudeAtIndex_69cfb132c661aca4] = env->getMethodID(cls, "getLatitudeAtIndex", "(I)D");
            mids$[mid_getLatitudeRows_412668abc8d889e9] = env->getMethodID(cls, "getLatitudeRows", "()I");
            mids$[mid_getLatitudeStep_557b8123390d8d0c] = env->getMethodID(cls, "getLatitudeStep", "()D");
            mids$[mid_getLocation_f18cc9781bcd74eb] = env->getMethodID(cls, "getLocation", "(DD)Lorg/orekit/rugged/raster/Tile$Location;");
            mids$[mid_getLongitudeAtIndex_69cfb132c661aca4] = env->getMethodID(cls, "getLongitudeAtIndex", "(I)D");
            mids$[mid_getLongitudeColumns_412668abc8d889e9] = env->getMethodID(cls, "getLongitudeColumns", "()I");
            mids$[mid_getLongitudeStep_557b8123390d8d0c] = env->getMethodID(cls, "getLongitudeStep", "()D");
            mids$[mid_getMaxElevation_557b8123390d8d0c] = env->getMethodID(cls, "getMaxElevation", "()D");
            mids$[mid_getMaxElevationLatitudeIndex_412668abc8d889e9] = env->getMethodID(cls, "getMaxElevationLatitudeIndex", "()I");
            mids$[mid_getMaxElevationLongitudeIndex_412668abc8d889e9] = env->getMethodID(cls, "getMaxElevationLongitudeIndex", "()I");
            mids$[mid_getMaximumLatitude_557b8123390d8d0c] = env->getMethodID(cls, "getMaximumLatitude", "()D");
            mids$[mid_getMaximumLongitude_557b8123390d8d0c] = env->getMethodID(cls, "getMaximumLongitude", "()D");
            mids$[mid_getMinElevation_557b8123390d8d0c] = env->getMethodID(cls, "getMinElevation", "()D");
            mids$[mid_getMinElevationLatitudeIndex_412668abc8d889e9] = env->getMethodID(cls, "getMinElevationLatitudeIndex", "()I");
            mids$[mid_getMinElevationLongitudeIndex_412668abc8d889e9] = env->getMethodID(cls, "getMinElevationLongitudeIndex", "()I");
            mids$[mid_getMinimumLatitude_557b8123390d8d0c] = env->getMethodID(cls, "getMinimumLatitude", "()D");
            mids$[mid_getMinimumLongitude_557b8123390d8d0c] = env->getMethodID(cls, "getMinimumLongitude", "()D");
            mids$[mid_interpolateElevation_2268d18be49a6087] = env->getMethodID(cls, "interpolateElevation", "(DD)D");
            mids$[mid_tileUpdateCompleted_0640e6acf969ed28] = env->getMethodID(cls, "tileUpdateCompleted", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint Tile::cellIntersection(const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jint a2, jint a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_cellIntersection_9786a4c652387487], a0.this$, a1.this$, a2, a3));
        }

        jdouble Tile::getElevationAtIndices(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevationAtIndices_21b81d54c06b64b0], a0, a1);
        }

        jint Tile::getFloorLatitudeIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getFloorLatitudeIndex_abbeb9db7144ca23], a0);
        }

        jint Tile::getFloorLongitudeIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getFloorLongitudeIndex_abbeb9db7144ca23], a0);
        }

        jdouble Tile::getLatitudeAtIndex(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitudeAtIndex_69cfb132c661aca4], a0);
        }

        jint Tile::getLatitudeRows() const
        {
          return env->callIntMethod(this$, mids$[mid_getLatitudeRows_412668abc8d889e9]);
        }

        jdouble Tile::getLatitudeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitudeStep_557b8123390d8d0c]);
        }

        ::org::orekit::rugged::raster::Tile$Location Tile::getLocation(jdouble a0, jdouble a1) const
        {
          return ::org::orekit::rugged::raster::Tile$Location(env->callObjectMethod(this$, mids$[mid_getLocation_f18cc9781bcd74eb], a0, a1));
        }

        jdouble Tile::getLongitudeAtIndex(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitudeAtIndex_69cfb132c661aca4], a0);
        }

        jint Tile::getLongitudeColumns() const
        {
          return env->callIntMethod(this$, mids$[mid_getLongitudeColumns_412668abc8d889e9]);
        }

        jdouble Tile::getLongitudeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitudeStep_557b8123390d8d0c]);
        }

        jdouble Tile::getMaxElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxElevation_557b8123390d8d0c]);
        }

        jint Tile::getMaxElevationLatitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxElevationLatitudeIndex_412668abc8d889e9]);
        }

        jint Tile::getMaxElevationLongitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxElevationLongitudeIndex_412668abc8d889e9]);
        }

        jdouble Tile::getMaximumLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaximumLatitude_557b8123390d8d0c]);
        }

        jdouble Tile::getMaximumLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaximumLongitude_557b8123390d8d0c]);
        }

        jdouble Tile::getMinElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinElevation_557b8123390d8d0c]);
        }

        jint Tile::getMinElevationLatitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinElevationLatitudeIndex_412668abc8d889e9]);
        }

        jint Tile::getMinElevationLongitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinElevationLongitudeIndex_412668abc8d889e9]);
        }

        jdouble Tile::getMinimumLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinimumLatitude_557b8123390d8d0c]);
        }

        jdouble Tile::getMinimumLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinimumLongitude_557b8123390d8d0c]);
        }

        jdouble Tile::interpolateElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_interpolateElevation_2268d18be49a6087], a0, a1);
        }

        void Tile::tileUpdateCompleted() const
        {
          env->callVoidMethod(this$, mids$[mid_tileUpdateCompleted_0640e6acf969ed28]);
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
        static PyObject *t_Tile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tile_cellIntersection(t_Tile *self, PyObject *args);
        static PyObject *t_Tile_getElevationAtIndices(t_Tile *self, PyObject *args);
        static PyObject *t_Tile_getFloorLatitudeIndex(t_Tile *self, PyObject *arg);
        static PyObject *t_Tile_getFloorLongitudeIndex(t_Tile *self, PyObject *arg);
        static PyObject *t_Tile_getLatitudeAtIndex(t_Tile *self, PyObject *arg);
        static PyObject *t_Tile_getLatitudeRows(t_Tile *self);
        static PyObject *t_Tile_getLatitudeStep(t_Tile *self);
        static PyObject *t_Tile_getLocation(t_Tile *self, PyObject *args);
        static PyObject *t_Tile_getLongitudeAtIndex(t_Tile *self, PyObject *arg);
        static PyObject *t_Tile_getLongitudeColumns(t_Tile *self);
        static PyObject *t_Tile_getLongitudeStep(t_Tile *self);
        static PyObject *t_Tile_getMaxElevation(t_Tile *self);
        static PyObject *t_Tile_getMaxElevationLatitudeIndex(t_Tile *self);
        static PyObject *t_Tile_getMaxElevationLongitudeIndex(t_Tile *self);
        static PyObject *t_Tile_getMaximumLatitude(t_Tile *self);
        static PyObject *t_Tile_getMaximumLongitude(t_Tile *self);
        static PyObject *t_Tile_getMinElevation(t_Tile *self);
        static PyObject *t_Tile_getMinElevationLatitudeIndex(t_Tile *self);
        static PyObject *t_Tile_getMinElevationLongitudeIndex(t_Tile *self);
        static PyObject *t_Tile_getMinimumLatitude(t_Tile *self);
        static PyObject *t_Tile_getMinimumLongitude(t_Tile *self);
        static PyObject *t_Tile_interpolateElevation(t_Tile *self, PyObject *args);
        static PyObject *t_Tile_tileUpdateCompleted(t_Tile *self);
        static PyObject *t_Tile_get__latitudeRows(t_Tile *self, void *data);
        static PyObject *t_Tile_get__latitudeStep(t_Tile *self, void *data);
        static PyObject *t_Tile_get__longitudeColumns(t_Tile *self, void *data);
        static PyObject *t_Tile_get__longitudeStep(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maxElevation(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maxElevationLatitudeIndex(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maxElevationLongitudeIndex(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maximumLatitude(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maximumLongitude(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minElevation(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minElevationLatitudeIndex(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minElevationLongitudeIndex(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minimumLatitude(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minimumLongitude(t_Tile *self, void *data);
        static PyGetSetDef t_Tile__fields_[] = {
          DECLARE_GET_FIELD(t_Tile, latitudeRows),
          DECLARE_GET_FIELD(t_Tile, latitudeStep),
          DECLARE_GET_FIELD(t_Tile, longitudeColumns),
          DECLARE_GET_FIELD(t_Tile, longitudeStep),
          DECLARE_GET_FIELD(t_Tile, maxElevation),
          DECLARE_GET_FIELD(t_Tile, maxElevationLatitudeIndex),
          DECLARE_GET_FIELD(t_Tile, maxElevationLongitudeIndex),
          DECLARE_GET_FIELD(t_Tile, maximumLatitude),
          DECLARE_GET_FIELD(t_Tile, maximumLongitude),
          DECLARE_GET_FIELD(t_Tile, minElevation),
          DECLARE_GET_FIELD(t_Tile, minElevationLatitudeIndex),
          DECLARE_GET_FIELD(t_Tile, minElevationLongitudeIndex),
          DECLARE_GET_FIELD(t_Tile, minimumLatitude),
          DECLARE_GET_FIELD(t_Tile, minimumLongitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Tile__methods_[] = {
          DECLARE_METHOD(t_Tile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tile, cellIntersection, METH_VARARGS),
          DECLARE_METHOD(t_Tile, getElevationAtIndices, METH_VARARGS),
          DECLARE_METHOD(t_Tile, getFloorLatitudeIndex, METH_O),
          DECLARE_METHOD(t_Tile, getFloorLongitudeIndex, METH_O),
          DECLARE_METHOD(t_Tile, getLatitudeAtIndex, METH_O),
          DECLARE_METHOD(t_Tile, getLatitudeRows, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getLatitudeStep, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getLocation, METH_VARARGS),
          DECLARE_METHOD(t_Tile, getLongitudeAtIndex, METH_O),
          DECLARE_METHOD(t_Tile, getLongitudeColumns, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getLongitudeStep, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaxElevation, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaxElevationLatitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaxElevationLongitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaximumLatitude, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaximumLongitude, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinElevation, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinElevationLatitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinElevationLongitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinimumLatitude, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinimumLongitude, METH_NOARGS),
          DECLARE_METHOD(t_Tile, interpolateElevation, METH_VARARGS),
          DECLARE_METHOD(t_Tile, tileUpdateCompleted, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Tile)[] = {
          { Py_tp_methods, t_Tile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Tile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Tile)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::raster::UpdatableTile),
          NULL
        };

        DEFINE_TYPE(Tile, t_Tile, Tile);

        void t_Tile::install(PyObject *module)
        {
          installType(&PY_TYPE(Tile), &PY_TYPE_DEF(Tile), module, "Tile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "Location", make_descriptor(&PY_TYPE_DEF(Tile$Location)));
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

        static PyObject *t_Tile_cellIntersection(t_Tile *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jint a2;
          jint a3;
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkII", ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.cellIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "cellIntersection", args);
          return NULL;
        }

        static PyObject *t_Tile_getElevationAtIndices(t_Tile *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevationAtIndices(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevationAtIndices", args);
          return NULL;
        }

        static PyObject *t_Tile_getFloorLatitudeIndex(t_Tile *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getFloorLatitudeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFloorLatitudeIndex", arg);
          return NULL;
        }

        static PyObject *t_Tile_getFloorLongitudeIndex(t_Tile *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getFloorLongitudeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFloorLongitudeIndex", arg);
          return NULL;
        }

        static PyObject *t_Tile_getLatitudeAtIndex(t_Tile *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getLatitudeAtIndex(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLatitudeAtIndex", arg);
          return NULL;
        }

        static PyObject *t_Tile_getLatitudeRows(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLatitudeRows());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getLatitudeStep(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLatitudeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getLocation(t_Tile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::rugged::raster::Tile$Location result((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getLocation(a0, a1));
            return ::org::orekit::rugged::raster::t_Tile$Location::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLocation", args);
          return NULL;
        }

        static PyObject *t_Tile_getLongitudeAtIndex(t_Tile *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getLongitudeAtIndex(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLongitudeAtIndex", arg);
          return NULL;
        }

        static PyObject *t_Tile_getLongitudeColumns(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLongitudeColumns());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getLongitudeStep(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLongitudeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMaxElevation(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMaxElevationLatitudeIndex(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxElevationLatitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getMaxElevationLongitudeIndex(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxElevationLongitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getMaximumLatitude(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaximumLatitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMaximumLongitude(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaximumLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMinElevation(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMinElevationLatitudeIndex(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinElevationLatitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getMinElevationLongitudeIndex(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinElevationLongitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getMinimumLatitude(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinimumLatitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMinimumLongitude(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinimumLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_interpolateElevation(t_Tile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolateElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolateElevation", args);
          return NULL;
        }

        static PyObject *t_Tile_tileUpdateCompleted(t_Tile *self)
        {
          OBJ_CALL(self->object.tileUpdateCompleted());
          Py_RETURN_NONE;
        }

        static PyObject *t_Tile_get__latitudeRows(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLatitudeRows());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__latitudeStep(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLatitudeStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__longitudeColumns(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLongitudeColumns());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__longitudeStep(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLongitudeStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__maxElevation(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__maxElevationLatitudeIndex(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxElevationLatitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__maxElevationLongitudeIndex(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxElevationLongitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__maximumLatitude(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaximumLatitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__maximumLongitude(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaximumLongitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__minElevation(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__minElevationLatitudeIndex(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinElevationLatitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__minElevationLongitudeIndex(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinElevationLongitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__minimumLatitude(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinimumLatitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__minimumLongitude(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinimumLongitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *MarshallSolarActivityFutureEstimation$StrengthLevel::class$ = NULL;
            jmethodID *MarshallSolarActivityFutureEstimation$StrengthLevel::mids$ = NULL;
            bool MarshallSolarActivityFutureEstimation$StrengthLevel::live$ = false;
            MarshallSolarActivityFutureEstimation$StrengthLevel *MarshallSolarActivityFutureEstimation$StrengthLevel::AVERAGE = NULL;
            MarshallSolarActivityFutureEstimation$StrengthLevel *MarshallSolarActivityFutureEstimation$StrengthLevel::STRONG = NULL;
            MarshallSolarActivityFutureEstimation$StrengthLevel *MarshallSolarActivityFutureEstimation$StrengthLevel::WEAK = NULL;

            jclass MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_2278adfb7eaf3b82] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;");
                mids$[mid_values_3bcc67bf82b2118a] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                AVERAGE = new MarshallSolarActivityFutureEstimation$StrengthLevel(env->getStaticObjectField(cls, "AVERAGE", "Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;"));
                STRONG = new MarshallSolarActivityFutureEstimation$StrengthLevel(env->getStaticObjectField(cls, "STRONG", "Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;"));
                WEAK = new MarshallSolarActivityFutureEstimation$StrengthLevel(env->getStaticObjectField(cls, "WEAK", "Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MarshallSolarActivityFutureEstimation$StrengthLevel MarshallSolarActivityFutureEstimation$StrengthLevel::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return MarshallSolarActivityFutureEstimation$StrengthLevel(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2278adfb7eaf3b82], a0.this$));
            }

            JArray< MarshallSolarActivityFutureEstimation$StrengthLevel > MarshallSolarActivityFutureEstimation$StrengthLevel::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< MarshallSolarActivityFutureEstimation$StrengthLevel >(env->callStaticObjectMethod(cls, mids$[mid_values_3bcc67bf82b2118a]));
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
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_of_(t_MarshallSolarActivityFutureEstimation$StrengthLevel *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_values(PyTypeObject *type);
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_get__parameters_(t_MarshallSolarActivityFutureEstimation$StrengthLevel *self, void *data);
            static PyGetSetDef t_MarshallSolarActivityFutureEstimation$StrengthLevel__fields_[] = {
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MarshallSolarActivityFutureEstimation$StrengthLevel__methods_[] = {
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, of_, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimation$StrengthLevel, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MarshallSolarActivityFutureEstimation$StrengthLevel)[] = {
              { Py_tp_methods, t_MarshallSolarActivityFutureEstimation$StrengthLevel__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_MarshallSolarActivityFutureEstimation$StrengthLevel__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MarshallSolarActivityFutureEstimation$StrengthLevel)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel, t_MarshallSolarActivityFutureEstimation$StrengthLevel, MarshallSolarActivityFutureEstimation$StrengthLevel);
            PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(const MarshallSolarActivityFutureEstimation$StrengthLevel& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimation$StrengthLevel *self = (t_MarshallSolarActivityFutureEstimation$StrengthLevel *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimation$StrengthLevel *self = (t_MarshallSolarActivityFutureEstimation$StrengthLevel *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_MarshallSolarActivityFutureEstimation$StrengthLevel::install(PyObject *module)
            {
              installType(&PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), &PY_TYPE_DEF(MarshallSolarActivityFutureEstimation$StrengthLevel), module, "MarshallSolarActivityFutureEstimation$StrengthLevel", 0);
            }

            void t_MarshallSolarActivityFutureEstimation$StrengthLevel::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "class_", make_descriptor(MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "wrapfn_", make_descriptor(t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "boxfn_", make_descriptor(boxObject));
              env->getClass(MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "AVERAGE", make_descriptor(t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(*MarshallSolarActivityFutureEstimation$StrengthLevel::AVERAGE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "STRONG", make_descriptor(t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(*MarshallSolarActivityFutureEstimation$StrengthLevel::STRONG)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimation$StrengthLevel), "WEAK", make_descriptor(t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(*MarshallSolarActivityFutureEstimation$StrengthLevel::WEAK)));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, 1)))
                return NULL;
              return t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(MarshallSolarActivityFutureEstimation$StrengthLevel(((t_MarshallSolarActivityFutureEstimation$StrengthLevel *) arg)->object.this$));
            }
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_of_(t_MarshallSolarActivityFutureEstimation$StrengthLevel *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              MarshallSolarActivityFutureEstimation$StrengthLevel result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::valueOf(a0));
                return t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_values(PyTypeObject *type)
            {
              JArray< MarshallSolarActivityFutureEstimation$StrengthLevel > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::values());
              return JArray<jobject>(result.this$).wrap(t_MarshallSolarActivityFutureEstimation$StrengthLevel::wrap_jobject);
            }
            static PyObject *t_MarshallSolarActivityFutureEstimation$StrengthLevel_get__parameters_(t_MarshallSolarActivityFutureEstimation$StrengthLevel *self, void *data)
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
#include "org/orekit/files/sp3/SP3Header.h"
#include "org/orekit/files/sp3/DataUsed.h"
#include "org/orekit/files/sp3/SP3OrbitType.h"
#include "java/util/List.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/files/sp3/SP3FileType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Header::class$ = NULL;
        jmethodID *SP3Header::mids$ = NULL;
        bool SP3Header::live$ = false;
        ::java::lang::String *SP3Header::SP3_FRAME_CENTER_STRING = NULL;

        jclass SP3Header::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Header");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addComment_f5ffdf29129ef90a] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)V");
            mids$[mid_addSatId_f5ffdf29129ef90a] = env->getMethodID(cls, "addSatId", "(Ljava/lang/String;)V");
            mids$[mid_getAccuracy_071554b5f5a6b17b] = env->getMethodID(cls, "getAccuracy", "(Ljava/lang/String;)D");
            mids$[mid_getAgency_3cffd47377eca18a] = env->getMethodID(cls, "getAgency", "()Ljava/lang/String;");
            mids$[mid_getClockBase_557b8123390d8d0c] = env->getMethodID(cls, "getClockBase", "()D");
            mids$[mid_getComments_0d9551367f7ecdef] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
            mids$[mid_getCoordinateSystem_3cffd47377eca18a] = env->getMethodID(cls, "getCoordinateSystem", "()Ljava/lang/String;");
            mids$[mid_getDataUsed_0d9551367f7ecdef] = env->getMethodID(cls, "getDataUsed", "()Ljava/util/List;");
            mids$[mid_getDayFraction_557b8123390d8d0c] = env->getMethodID(cls, "getDayFraction", "()D");
            mids$[mid_getEpoch_7a97f7e149e79afb] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getEpochInterval_557b8123390d8d0c] = env->getMethodID(cls, "getEpochInterval", "()D");
            mids$[mid_getFilter_6c4898d6ec0c3837] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getGpsWeek_412668abc8d889e9] = env->getMethodID(cls, "getGpsWeek", "()I");
            mids$[mid_getModifiedJulianDay_412668abc8d889e9] = env->getMethodID(cls, "getModifiedJulianDay", "()I");
            mids$[mid_getNumberOfEpochs_412668abc8d889e9] = env->getMethodID(cls, "getNumberOfEpochs", "()I");
            mids$[mid_getOrbitType_19c13bdb82a38cf9] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/files/sp3/SP3OrbitType;");
            mids$[mid_getOrbitTypeKey_3cffd47377eca18a] = env->getMethodID(cls, "getOrbitTypeKey", "()Ljava/lang/String;");
            mids$[mid_getPosVelBase_557b8123390d8d0c] = env->getMethodID(cls, "getPosVelBase", "()D");
            mids$[mid_getSatIds_0d9551367f7ecdef] = env->getMethodID(cls, "getSatIds", "()Ljava/util/List;");
            mids$[mid_getSecondsOfWeek_557b8123390d8d0c] = env->getMethodID(cls, "getSecondsOfWeek", "()D");
            mids$[mid_getTimeSystem_2700635415605e4d] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
            mids$[mid_getType_faaa7ea236497595] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/sp3/SP3FileType;");
            mids$[mid_getVersion_d156d1ce330f6993] = env->getMethodID(cls, "getVersion", "()C");
            mids$[mid_setAccuracy_89aad365fb0ed8da] = env->getMethodID(cls, "setAccuracy", "(ID)V");
            mids$[mid_setAgency_f5ffdf29129ef90a] = env->getMethodID(cls, "setAgency", "(Ljava/lang/String;)V");
            mids$[mid_setClockBase_10f281d777284cea] = env->getMethodID(cls, "setClockBase", "(D)V");
            mids$[mid_setCoordinateSystem_f5ffdf29129ef90a] = env->getMethodID(cls, "setCoordinateSystem", "(Ljava/lang/String;)V");
            mids$[mid_setDataUsed_4ccaedadb068bdeb] = env->getMethodID(cls, "setDataUsed", "(Ljava/util/List;)V");
            mids$[mid_setDayFraction_10f281d777284cea] = env->getMethodID(cls, "setDayFraction", "(D)V");
            mids$[mid_setEpoch_20affcbd28542333] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_setEpochInterval_10f281d777284cea] = env->getMethodID(cls, "setEpochInterval", "(D)V");
            mids$[mid_setFilter_fd4d3944a3fb1083] = env->getMethodID(cls, "setFilter", "(Lorg/orekit/utils/CartesianDerivativesFilter;)V");
            mids$[mid_setGpsWeek_a3da1a935cb37f7b] = env->getMethodID(cls, "setGpsWeek", "(I)V");
            mids$[mid_setModifiedJulianDay_a3da1a935cb37f7b] = env->getMethodID(cls, "setModifiedJulianDay", "(I)V");
            mids$[mid_setNumberOfEpochs_a3da1a935cb37f7b] = env->getMethodID(cls, "setNumberOfEpochs", "(I)V");
            mids$[mid_setOrbitTypeKey_f5ffdf29129ef90a] = env->getMethodID(cls, "setOrbitTypeKey", "(Ljava/lang/String;)V");
            mids$[mid_setPosVelBase_10f281d777284cea] = env->getMethodID(cls, "setPosVelBase", "(D)V");
            mids$[mid_setSecondsOfWeek_10f281d777284cea] = env->getMethodID(cls, "setSecondsOfWeek", "(D)V");
            mids$[mid_setTimeSystem_562aaa7511f66c1c] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");
            mids$[mid_setType_b0728a16c85fc53b] = env->getMethodID(cls, "setType", "(Lorg/orekit/files/sp3/SP3FileType;)V");
            mids$[mid_setVersion_102587d250c3217b] = env->getMethodID(cls, "setVersion", "(C)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            SP3_FRAME_CENTER_STRING = new ::java::lang::String(env->getStaticObjectField(cls, "SP3_FRAME_CENTER_STRING", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Header::SP3Header() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void SP3Header::addComment(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addComment_f5ffdf29129ef90a], a0.this$);
        }

        void SP3Header::addSatId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addSatId_f5ffdf29129ef90a], a0.this$);
        }

        jdouble SP3Header::getAccuracy(const ::java::lang::String & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAccuracy_071554b5f5a6b17b], a0.this$);
        }

        ::java::lang::String SP3Header::getAgency() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAgency_3cffd47377eca18a]));
        }

        jdouble SP3Header::getClockBase() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockBase_557b8123390d8d0c]);
        }

        ::java::util::List SP3Header::getComments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_0d9551367f7ecdef]));
        }

        ::java::lang::String SP3Header::getCoordinateSystem() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCoordinateSystem_3cffd47377eca18a]));
        }

        ::java::util::List SP3Header::getDataUsed() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataUsed_0d9551367f7ecdef]));
        }

        jdouble SP3Header::getDayFraction() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDayFraction_557b8123390d8d0c]);
        }

        ::org::orekit::time::AbsoluteDate SP3Header::getEpoch() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_7a97f7e149e79afb]));
        }

        jdouble SP3Header::getEpochInterval() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getEpochInterval_557b8123390d8d0c]);
        }

        ::org::orekit::utils::CartesianDerivativesFilter SP3Header::getFilter() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_6c4898d6ec0c3837]));
        }

        jint SP3Header::getGpsWeek() const
        {
          return env->callIntMethod(this$, mids$[mid_getGpsWeek_412668abc8d889e9]);
        }

        jint SP3Header::getModifiedJulianDay() const
        {
          return env->callIntMethod(this$, mids$[mid_getModifiedJulianDay_412668abc8d889e9]);
        }

        jint SP3Header::getNumberOfEpochs() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfEpochs_412668abc8d889e9]);
        }

        ::org::orekit::files::sp3::SP3OrbitType SP3Header::getOrbitType() const
        {
          return ::org::orekit::files::sp3::SP3OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_19c13bdb82a38cf9]));
        }

        ::java::lang::String SP3Header::getOrbitTypeKey() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getOrbitTypeKey_3cffd47377eca18a]));
        }

        jdouble SP3Header::getPosVelBase() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPosVelBase_557b8123390d8d0c]);
        }

        ::java::util::List SP3Header::getSatIds() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatIds_0d9551367f7ecdef]));
        }

        jdouble SP3Header::getSecondsOfWeek() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSecondsOfWeek_557b8123390d8d0c]);
        }

        ::org::orekit::gnss::TimeSystem SP3Header::getTimeSystem() const
        {
          return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_2700635415605e4d]));
        }

        ::org::orekit::files::sp3::SP3FileType SP3Header::getType() const
        {
          return ::org::orekit::files::sp3::SP3FileType(env->callObjectMethod(this$, mids$[mid_getType_faaa7ea236497595]));
        }

        jchar SP3Header::getVersion() const
        {
          return env->callCharMethod(this$, mids$[mid_getVersion_d156d1ce330f6993]);
        }

        void SP3Header::setAccuracy(jint a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_setAccuracy_89aad365fb0ed8da], a0, a1);
        }

        void SP3Header::setAgency(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAgency_f5ffdf29129ef90a], a0.this$);
        }

        void SP3Header::setClockBase(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setClockBase_10f281d777284cea], a0);
        }

        void SP3Header::setCoordinateSystem(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setCoordinateSystem_f5ffdf29129ef90a], a0.this$);
        }

        void SP3Header::setDataUsed(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDataUsed_4ccaedadb068bdeb], a0.this$);
        }

        void SP3Header::setDayFraction(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDayFraction_10f281d777284cea], a0);
        }

        void SP3Header::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpoch_20affcbd28542333], a0.this$);
        }

        void SP3Header::setEpochInterval(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpochInterval_10f281d777284cea], a0);
        }

        void SP3Header::setFilter(const ::org::orekit::utils::CartesianDerivativesFilter & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setFilter_fd4d3944a3fb1083], a0.this$);
        }

        void SP3Header::setGpsWeek(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setGpsWeek_a3da1a935cb37f7b], a0);
        }

        void SP3Header::setModifiedJulianDay(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setModifiedJulianDay_a3da1a935cb37f7b], a0);
        }

        void SP3Header::setNumberOfEpochs(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setNumberOfEpochs_a3da1a935cb37f7b], a0);
        }

        void SP3Header::setOrbitTypeKey(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOrbitTypeKey_f5ffdf29129ef90a], a0.this$);
        }

        void SP3Header::setPosVelBase(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPosVelBase_10f281d777284cea], a0);
        }

        void SP3Header::setSecondsOfWeek(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSecondsOfWeek_10f281d777284cea], a0);
        }

        void SP3Header::setTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTimeSystem_562aaa7511f66c1c], a0.this$);
        }

        void SP3Header::setType(const ::org::orekit::files::sp3::SP3FileType & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setType_b0728a16c85fc53b], a0.this$);
        }

        void SP3Header::setVersion(jchar a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setVersion_102587d250c3217b], a0);
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
      namespace sp3 {
        static PyObject *t_SP3Header_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Header_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Header_init_(t_SP3Header *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Header_addComment(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_addSatId(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_getAccuracy(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_getAgency(t_SP3Header *self);
        static PyObject *t_SP3Header_getClockBase(t_SP3Header *self);
        static PyObject *t_SP3Header_getComments(t_SP3Header *self);
        static PyObject *t_SP3Header_getCoordinateSystem(t_SP3Header *self);
        static PyObject *t_SP3Header_getDataUsed(t_SP3Header *self);
        static PyObject *t_SP3Header_getDayFraction(t_SP3Header *self);
        static PyObject *t_SP3Header_getEpoch(t_SP3Header *self);
        static PyObject *t_SP3Header_getEpochInterval(t_SP3Header *self);
        static PyObject *t_SP3Header_getFilter(t_SP3Header *self);
        static PyObject *t_SP3Header_getGpsWeek(t_SP3Header *self);
        static PyObject *t_SP3Header_getModifiedJulianDay(t_SP3Header *self);
        static PyObject *t_SP3Header_getNumberOfEpochs(t_SP3Header *self);
        static PyObject *t_SP3Header_getOrbitType(t_SP3Header *self);
        static PyObject *t_SP3Header_getOrbitTypeKey(t_SP3Header *self);
        static PyObject *t_SP3Header_getPosVelBase(t_SP3Header *self);
        static PyObject *t_SP3Header_getSatIds(t_SP3Header *self);
        static PyObject *t_SP3Header_getSecondsOfWeek(t_SP3Header *self);
        static PyObject *t_SP3Header_getTimeSystem(t_SP3Header *self);
        static PyObject *t_SP3Header_getType(t_SP3Header *self);
        static PyObject *t_SP3Header_getVersion(t_SP3Header *self);
        static PyObject *t_SP3Header_setAccuracy(t_SP3Header *self, PyObject *args);
        static PyObject *t_SP3Header_setAgency(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setClockBase(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setCoordinateSystem(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setDataUsed(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setDayFraction(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setEpoch(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setEpochInterval(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setFilter(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setGpsWeek(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setModifiedJulianDay(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setNumberOfEpochs(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setOrbitTypeKey(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setPosVelBase(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setSecondsOfWeek(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setTimeSystem(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setType(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_setVersion(t_SP3Header *self, PyObject *arg);
        static PyObject *t_SP3Header_get__agency(t_SP3Header *self, void *data);
        static int t_SP3Header_set__agency(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__clockBase(t_SP3Header *self, void *data);
        static int t_SP3Header_set__clockBase(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__comments(t_SP3Header *self, void *data);
        static PyObject *t_SP3Header_get__coordinateSystem(t_SP3Header *self, void *data);
        static int t_SP3Header_set__coordinateSystem(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__dataUsed(t_SP3Header *self, void *data);
        static int t_SP3Header_set__dataUsed(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__dayFraction(t_SP3Header *self, void *data);
        static int t_SP3Header_set__dayFraction(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__epoch(t_SP3Header *self, void *data);
        static int t_SP3Header_set__epoch(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__epochInterval(t_SP3Header *self, void *data);
        static int t_SP3Header_set__epochInterval(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__filter(t_SP3Header *self, void *data);
        static int t_SP3Header_set__filter(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__gpsWeek(t_SP3Header *self, void *data);
        static int t_SP3Header_set__gpsWeek(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__modifiedJulianDay(t_SP3Header *self, void *data);
        static int t_SP3Header_set__modifiedJulianDay(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__numberOfEpochs(t_SP3Header *self, void *data);
        static int t_SP3Header_set__numberOfEpochs(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__orbitType(t_SP3Header *self, void *data);
        static PyObject *t_SP3Header_get__orbitTypeKey(t_SP3Header *self, void *data);
        static int t_SP3Header_set__orbitTypeKey(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__posVelBase(t_SP3Header *self, void *data);
        static int t_SP3Header_set__posVelBase(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__satIds(t_SP3Header *self, void *data);
        static PyObject *t_SP3Header_get__secondsOfWeek(t_SP3Header *self, void *data);
        static int t_SP3Header_set__secondsOfWeek(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__timeSystem(t_SP3Header *self, void *data);
        static int t_SP3Header_set__timeSystem(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__type(t_SP3Header *self, void *data);
        static int t_SP3Header_set__type(t_SP3Header *self, PyObject *arg, void *data);
        static PyObject *t_SP3Header_get__version(t_SP3Header *self, void *data);
        static int t_SP3Header_set__version(t_SP3Header *self, PyObject *arg, void *data);
        static PyGetSetDef t_SP3Header__fields_[] = {
          DECLARE_GETSET_FIELD(t_SP3Header, agency),
          DECLARE_GETSET_FIELD(t_SP3Header, clockBase),
          DECLARE_GET_FIELD(t_SP3Header, comments),
          DECLARE_GETSET_FIELD(t_SP3Header, coordinateSystem),
          DECLARE_GETSET_FIELD(t_SP3Header, dataUsed),
          DECLARE_GETSET_FIELD(t_SP3Header, dayFraction),
          DECLARE_GETSET_FIELD(t_SP3Header, epoch),
          DECLARE_GETSET_FIELD(t_SP3Header, epochInterval),
          DECLARE_GETSET_FIELD(t_SP3Header, filter),
          DECLARE_GETSET_FIELD(t_SP3Header, gpsWeek),
          DECLARE_GETSET_FIELD(t_SP3Header, modifiedJulianDay),
          DECLARE_GETSET_FIELD(t_SP3Header, numberOfEpochs),
          DECLARE_GET_FIELD(t_SP3Header, orbitType),
          DECLARE_GETSET_FIELD(t_SP3Header, orbitTypeKey),
          DECLARE_GETSET_FIELD(t_SP3Header, posVelBase),
          DECLARE_GET_FIELD(t_SP3Header, satIds),
          DECLARE_GETSET_FIELD(t_SP3Header, secondsOfWeek),
          DECLARE_GETSET_FIELD(t_SP3Header, timeSystem),
          DECLARE_GETSET_FIELD(t_SP3Header, type),
          DECLARE_GETSET_FIELD(t_SP3Header, version),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3Header__methods_[] = {
          DECLARE_METHOD(t_SP3Header, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Header, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Header, addComment, METH_O),
          DECLARE_METHOD(t_SP3Header, addSatId, METH_O),
          DECLARE_METHOD(t_SP3Header, getAccuracy, METH_O),
          DECLARE_METHOD(t_SP3Header, getAgency, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getClockBase, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getComments, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getCoordinateSystem, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getDataUsed, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getDayFraction, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getEpoch, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getEpochInterval, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getFilter, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getGpsWeek, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getModifiedJulianDay, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getNumberOfEpochs, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getOrbitTypeKey, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getPosVelBase, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getSatIds, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getSecondsOfWeek, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getTimeSystem, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getType, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, getVersion, METH_NOARGS),
          DECLARE_METHOD(t_SP3Header, setAccuracy, METH_VARARGS),
          DECLARE_METHOD(t_SP3Header, setAgency, METH_O),
          DECLARE_METHOD(t_SP3Header, setClockBase, METH_O),
          DECLARE_METHOD(t_SP3Header, setCoordinateSystem, METH_O),
          DECLARE_METHOD(t_SP3Header, setDataUsed, METH_O),
          DECLARE_METHOD(t_SP3Header, setDayFraction, METH_O),
          DECLARE_METHOD(t_SP3Header, setEpoch, METH_O),
          DECLARE_METHOD(t_SP3Header, setEpochInterval, METH_O),
          DECLARE_METHOD(t_SP3Header, setFilter, METH_O),
          DECLARE_METHOD(t_SP3Header, setGpsWeek, METH_O),
          DECLARE_METHOD(t_SP3Header, setModifiedJulianDay, METH_O),
          DECLARE_METHOD(t_SP3Header, setNumberOfEpochs, METH_O),
          DECLARE_METHOD(t_SP3Header, setOrbitTypeKey, METH_O),
          DECLARE_METHOD(t_SP3Header, setPosVelBase, METH_O),
          DECLARE_METHOD(t_SP3Header, setSecondsOfWeek, METH_O),
          DECLARE_METHOD(t_SP3Header, setTimeSystem, METH_O),
          DECLARE_METHOD(t_SP3Header, setType, METH_O),
          DECLARE_METHOD(t_SP3Header, setVersion, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Header)[] = {
          { Py_tp_methods, t_SP3Header__methods_ },
          { Py_tp_init, (void *) t_SP3Header_init_ },
          { Py_tp_getset, t_SP3Header__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Header)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Header, t_SP3Header, SP3Header);

        void t_SP3Header::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Header), &PY_TYPE_DEF(SP3Header), module, "SP3Header", 0);
        }

        void t_SP3Header::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Header), "class_", make_descriptor(SP3Header::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Header), "wrapfn_", make_descriptor(t_SP3Header::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Header), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3Header::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Header), "SP3_FRAME_CENTER_STRING", make_descriptor(j2p(*SP3Header::SP3_FRAME_CENTER_STRING)));
        }

        static PyObject *t_SP3Header_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Header::initializeClass, 1)))
            return NULL;
          return t_SP3Header::wrap_Object(SP3Header(((t_SP3Header *) arg)->object.this$));
        }
        static PyObject *t_SP3Header_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Header::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Header_init_(t_SP3Header *self, PyObject *args, PyObject *kwds)
        {
          SP3Header object((jobject) NULL);

          INT_CALL(object = SP3Header());
          self->object = object;

          return 0;
        }

        static PyObject *t_SP3Header_addComment(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.addComment(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addComment", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_addSatId(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.addSatId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSatId", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_getAccuracy(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getAccuracy(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getAccuracy", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_getAgency(t_SP3Header *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getAgency());
          return j2p(result);
        }

        static PyObject *t_SP3Header_getClockBase(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockBase());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getComments(t_SP3Header *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComments());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_SP3Header_getCoordinateSystem(t_SP3Header *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinateSystem());
          return j2p(result);
        }

        static PyObject *t_SP3Header_getDataUsed(t_SP3Header *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDataUsed());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::sp3::PY_TYPE(DataUsed));
        }

        static PyObject *t_SP3Header_getDayFraction(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDayFraction());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getEpoch(t_SP3Header *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getEpochInterval(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getEpochInterval());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getFilter(t_SP3Header *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getFilter());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getGpsWeek(t_SP3Header *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getGpsWeek());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Header_getModifiedJulianDay(t_SP3Header *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getModifiedJulianDay());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Header_getNumberOfEpochs(t_SP3Header *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfEpochs());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Header_getOrbitType(t_SP3Header *self)
        {
          ::org::orekit::files::sp3::SP3OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::files::sp3::t_SP3OrbitType::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getOrbitTypeKey(t_SP3Header *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitTypeKey());
          return j2p(result);
        }

        static PyObject *t_SP3Header_getPosVelBase(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPosVelBase());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getSatIds(t_SP3Header *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSatIds());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_SP3Header_getSecondsOfWeek(t_SP3Header *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSecondsOfWeek());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Header_getTimeSystem(t_SP3Header *self)
        {
          ::org::orekit::gnss::TimeSystem result((jobject) NULL);
          OBJ_CALL(result = self->object.getTimeSystem());
          return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getType(t_SP3Header *self)
        {
          ::org::orekit::files::sp3::SP3FileType result((jobject) NULL);
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::files::sp3::t_SP3FileType::wrap_Object(result);
        }

        static PyObject *t_SP3Header_getVersion(t_SP3Header *self)
        {
          jchar result;
          OBJ_CALL(result = self->object.getVersion());
          return c2p(result);
        }

        static PyObject *t_SP3Header_setAccuracy(t_SP3Header *self, PyObject *args)
        {
          jint a0;
          jdouble a1;

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(self->object.setAccuracy(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAccuracy", args);
          return NULL;
        }

        static PyObject *t_SP3Header_setAgency(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setAgency(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAgency", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setClockBase(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setClockBase(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setClockBase", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setCoordinateSystem(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setCoordinateSystem(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setCoordinateSystem", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setDataUsed(t_SP3Header *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.setDataUsed(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDataUsed", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setDayFraction(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setDayFraction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDayFraction", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setEpoch(t_SP3Header *self, PyObject *arg)
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

        static PyObject *t_SP3Header_setEpochInterval(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setEpochInterval(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEpochInterval", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setFilter(t_SP3Header *self, PyObject *arg)
        {
          ::org::orekit::utils::CartesianDerivativesFilter a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &p0, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
          {
            OBJ_CALL(self->object.setFilter(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setFilter", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setGpsWeek(t_SP3Header *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setGpsWeek(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setGpsWeek", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setModifiedJulianDay(t_SP3Header *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setModifiedJulianDay(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setModifiedJulianDay", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setNumberOfEpochs(t_SP3Header *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setNumberOfEpochs(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setNumberOfEpochs", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setOrbitTypeKey(t_SP3Header *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setOrbitTypeKey(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOrbitTypeKey", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setPosVelBase(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPosVelBase(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPosVelBase", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setSecondsOfWeek(t_SP3Header *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSecondsOfWeek(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSecondsOfWeek", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setTimeSystem(t_SP3Header *self, PyObject *arg)
        {
          ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
          {
            OBJ_CALL(self->object.setTimeSystem(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setType(t_SP3Header *self, PyObject *arg)
        {
          ::org::orekit::files::sp3::SP3FileType a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::files::sp3::SP3FileType::initializeClass, &a0, &p0, ::org::orekit::files::sp3::t_SP3FileType::parameters_))
          {
            OBJ_CALL(self->object.setType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setType", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_setVersion(t_SP3Header *self, PyObject *arg)
        {
          jchar a0;

          if (!parseArg(arg, "C", &a0))
          {
            OBJ_CALL(self->object.setVersion(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setVersion", arg);
          return NULL;
        }

        static PyObject *t_SP3Header_get__agency(t_SP3Header *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getAgency());
          return j2p(value);
        }
        static int t_SP3Header_set__agency(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setAgency(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "agency", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__clockBase(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockBase());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__clockBase(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setClockBase(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "clockBase", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__comments(t_SP3Header *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_SP3Header_get__coordinateSystem(t_SP3Header *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinateSystem());
          return j2p(value);
        }
        static int t_SP3Header_set__coordinateSystem(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setCoordinateSystem(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "coordinateSystem", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__dataUsed(t_SP3Header *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDataUsed());
          return ::java::util::t_List::wrap_Object(value);
        }
        static int t_SP3Header_set__dataUsed(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::java::util::List value((jobject) NULL);
            if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
            {
              INT_CALL(self->object.setDataUsed(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "dataUsed", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__dayFraction(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDayFraction());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__dayFraction(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setDayFraction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "dayFraction", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__epoch(t_SP3Header *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEpoch());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
        static int t_SP3Header_set__epoch(t_SP3Header *self, PyObject *arg, void *data)
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

        static PyObject *t_SP3Header_get__epochInterval(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getEpochInterval());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__epochInterval(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setEpochInterval(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "epochInterval", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__filter(t_SP3Header *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getFilter());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }
        static int t_SP3Header_set__filter(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &value))
            {
              INT_CALL(self->object.setFilter(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "filter", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__gpsWeek(t_SP3Header *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getGpsWeek());
          return PyLong_FromLong((long) value);
        }
        static int t_SP3Header_set__gpsWeek(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setGpsWeek(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "gpsWeek", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__modifiedJulianDay(t_SP3Header *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getModifiedJulianDay());
          return PyLong_FromLong((long) value);
        }
        static int t_SP3Header_set__modifiedJulianDay(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setModifiedJulianDay(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "modifiedJulianDay", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__numberOfEpochs(t_SP3Header *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfEpochs());
          return PyLong_FromLong((long) value);
        }
        static int t_SP3Header_set__numberOfEpochs(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setNumberOfEpochs(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "numberOfEpochs", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__orbitType(t_SP3Header *self, void *data)
        {
          ::org::orekit::files::sp3::SP3OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::files::sp3::t_SP3OrbitType::wrap_Object(value);
        }

        static PyObject *t_SP3Header_get__orbitTypeKey(t_SP3Header *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitTypeKey());
          return j2p(value);
        }
        static int t_SP3Header_set__orbitTypeKey(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setOrbitTypeKey(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "orbitTypeKey", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__posVelBase(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPosVelBase());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__posVelBase(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPosVelBase(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "posVelBase", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__satIds(t_SP3Header *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSatIds());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_SP3Header_get__secondsOfWeek(t_SP3Header *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSecondsOfWeek());
          return PyFloat_FromDouble((double) value);
        }
        static int t_SP3Header_set__secondsOfWeek(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSecondsOfWeek(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "secondsOfWeek", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__timeSystem(t_SP3Header *self, void *data)
        {
          ::org::orekit::gnss::TimeSystem value((jobject) NULL);
          OBJ_CALL(value = self->object.getTimeSystem());
          return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
        }
        static int t_SP3Header_set__timeSystem(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
            {
              INT_CALL(self->object.setTimeSystem(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__type(t_SP3Header *self, void *data)
        {
          ::org::orekit::files::sp3::SP3FileType value((jobject) NULL);
          OBJ_CALL(value = self->object.getType());
          return ::org::orekit::files::sp3::t_SP3FileType::wrap_Object(value);
        }
        static int t_SP3Header_set__type(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::sp3::SP3FileType value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::sp3::SP3FileType::initializeClass, &value))
            {
              INT_CALL(self->object.setType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "type", arg);
          return -1;
        }

        static PyObject *t_SP3Header_get__version(t_SP3Header *self, void *data)
        {
          jchar value;
          OBJ_CALL(value = self->object.getVersion());
          return c2p(value);
        }
        static int t_SP3Header_set__version(t_SP3Header *self, PyObject *arg, void *data)
        {
          {
            jchar value;
            if (!parseArg(arg, "C", &value))
            {
              INT_CALL(self->object.setVersion(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "version", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/JacobiTheta.h"
#include "org/hipparchus/special/elliptic/jacobi/Theta.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *JacobiTheta::class$ = NULL;
          jmethodID *JacobiTheta::mids$ = NULL;
          bool JacobiTheta::live$ = false;

          jclass JacobiTheta::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/JacobiTheta");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getQ_557b8123390d8d0c] = env->getMethodID(cls, "getQ", "()D");
              mids$[mid_values_2afa3af64630d764] = env->getMethodID(cls, "values", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/special/elliptic/jacobi/Theta;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JacobiTheta::JacobiTheta(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

          jdouble JacobiTheta::getQ() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQ_557b8123390d8d0c]);
          }

          ::org::hipparchus::special::elliptic::jacobi::Theta JacobiTheta::values(const ::org::hipparchus::complex::Complex & a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::Theta(env->callObjectMethod(this$, mids$[mid_values_2afa3af64630d764], a0.this$));
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
          static PyObject *t_JacobiTheta_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiTheta_instance_(PyTypeObject *type, PyObject *arg);
          static int t_JacobiTheta_init_(t_JacobiTheta *self, PyObject *args, PyObject *kwds);
          static PyObject *t_JacobiTheta_getQ(t_JacobiTheta *self);
          static PyObject *t_JacobiTheta_values(t_JacobiTheta *self, PyObject *arg);
          static PyObject *t_JacobiTheta_get__q(t_JacobiTheta *self, void *data);
          static PyGetSetDef t_JacobiTheta__fields_[] = {
            DECLARE_GET_FIELD(t_JacobiTheta, q),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_JacobiTheta__methods_[] = {
            DECLARE_METHOD(t_JacobiTheta, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiTheta, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiTheta, getQ, METH_NOARGS),
            DECLARE_METHOD(t_JacobiTheta, values, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JacobiTheta)[] = {
            { Py_tp_methods, t_JacobiTheta__methods_ },
            { Py_tp_init, (void *) t_JacobiTheta_init_ },
            { Py_tp_getset, t_JacobiTheta__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JacobiTheta)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(JacobiTheta, t_JacobiTheta, JacobiTheta);

          void t_JacobiTheta::install(PyObject *module)
          {
            installType(&PY_TYPE(JacobiTheta), &PY_TYPE_DEF(JacobiTheta), module, "JacobiTheta", 0);
          }

          void t_JacobiTheta::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiTheta), "class_", make_descriptor(JacobiTheta::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiTheta), "wrapfn_", make_descriptor(t_JacobiTheta::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiTheta), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JacobiTheta_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JacobiTheta::initializeClass, 1)))
              return NULL;
            return t_JacobiTheta::wrap_Object(JacobiTheta(((t_JacobiTheta *) arg)->object.this$));
          }
          static PyObject *t_JacobiTheta_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JacobiTheta::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_JacobiTheta_init_(t_JacobiTheta *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            JacobiTheta object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = JacobiTheta(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_JacobiTheta_getQ(t_JacobiTheta *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getQ());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_JacobiTheta_values(t_JacobiTheta *self, PyObject *arg)
          {
            ::org::hipparchus::complex::Complex a0((jobject) NULL);
            ::org::hipparchus::special::elliptic::jacobi::Theta result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.values(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_Theta::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "values", arg);
            return NULL;
          }

          static PyObject *t_JacobiTheta_get__q(t_JacobiTheta *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getQ());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/BracketFinder.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/scalar/GoalType.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *BracketFinder::class$ = NULL;
        jmethodID *BracketFinder::mids$ = NULL;
        bool BracketFinder::live$ = false;

        jclass BracketFinder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/BracketFinder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_47602ef8408ea361] = env->getMethodID(cls, "<init>", "(DI)V");
            mids$[mid_getEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFHi_557b8123390d8d0c] = env->getMethodID(cls, "getFHi", "()D");
            mids$[mid_getFLo_557b8123390d8d0c] = env->getMethodID(cls, "getFLo", "()D");
            mids$[mid_getFMid_557b8123390d8d0c] = env->getMethodID(cls, "getFMid", "()D");
            mids$[mid_getHi_557b8123390d8d0c] = env->getMethodID(cls, "getHi", "()D");
            mids$[mid_getLo_557b8123390d8d0c] = env->getMethodID(cls, "getLo", "()D");
            mids$[mid_getMaxEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getMaxEvaluations", "()I");
            mids$[mid_getMid_557b8123390d8d0c] = env->getMethodID(cls, "getMid", "()D");
            mids$[mid_search_33db5f32c3aed894] = env->getMethodID(cls, "search", "(Lorg/hipparchus/analysis/UnivariateFunction;Lorg/hipparchus/optim/nonlinear/scalar/GoalType;DD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BracketFinder::BracketFinder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        BracketFinder::BracketFinder(jdouble a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_47602ef8408ea361, a0, a1)) {}

        jint BracketFinder::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_412668abc8d889e9]);
        }

        jdouble BracketFinder::getFHi() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFHi_557b8123390d8d0c]);
        }

        jdouble BracketFinder::getFLo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFLo_557b8123390d8d0c]);
        }

        jdouble BracketFinder::getFMid() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFMid_557b8123390d8d0c]);
        }

        jdouble BracketFinder::getHi() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHi_557b8123390d8d0c]);
        }

        jdouble BracketFinder::getLo() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLo_557b8123390d8d0c]);
        }

        jint BracketFinder::getMaxEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_412668abc8d889e9]);
        }

        jdouble BracketFinder::getMid() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMid_557b8123390d8d0c]);
        }

        void BracketFinder::search(const ::org::hipparchus::analysis::UnivariateFunction & a0, const ::org::hipparchus::optim::nonlinear::scalar::GoalType & a1, jdouble a2, jdouble a3) const
        {
          env->callVoidMethod(this$, mids$[mid_search_33db5f32c3aed894], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_BracketFinder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketFinder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BracketFinder_init_(t_BracketFinder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BracketFinder_getEvaluations(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getFHi(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getFLo(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getFMid(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getHi(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getLo(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getMaxEvaluations(t_BracketFinder *self);
        static PyObject *t_BracketFinder_getMid(t_BracketFinder *self);
        static PyObject *t_BracketFinder_search(t_BracketFinder *self, PyObject *args);
        static PyObject *t_BracketFinder_get__evaluations(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__fHi(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__fLo(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__fMid(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__hi(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__lo(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__maxEvaluations(t_BracketFinder *self, void *data);
        static PyObject *t_BracketFinder_get__mid(t_BracketFinder *self, void *data);
        static PyGetSetDef t_BracketFinder__fields_[] = {
          DECLARE_GET_FIELD(t_BracketFinder, evaluations),
          DECLARE_GET_FIELD(t_BracketFinder, fHi),
          DECLARE_GET_FIELD(t_BracketFinder, fLo),
          DECLARE_GET_FIELD(t_BracketFinder, fMid),
          DECLARE_GET_FIELD(t_BracketFinder, hi),
          DECLARE_GET_FIELD(t_BracketFinder, lo),
          DECLARE_GET_FIELD(t_BracketFinder, maxEvaluations),
          DECLARE_GET_FIELD(t_BracketFinder, mid),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketFinder__methods_[] = {
          DECLARE_METHOD(t_BracketFinder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketFinder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketFinder, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getFHi, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getFLo, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getFMid, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getHi, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getLo, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getMaxEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, getMid, METH_NOARGS),
          DECLARE_METHOD(t_BracketFinder, search, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketFinder)[] = {
          { Py_tp_methods, t_BracketFinder__methods_ },
          { Py_tp_init, (void *) t_BracketFinder_init_ },
          { Py_tp_getset, t_BracketFinder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketFinder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BracketFinder, t_BracketFinder, BracketFinder);

        void t_BracketFinder::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketFinder), &PY_TYPE_DEF(BracketFinder), module, "BracketFinder", 0);
        }

        void t_BracketFinder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketFinder), "class_", make_descriptor(BracketFinder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketFinder), "wrapfn_", make_descriptor(t_BracketFinder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketFinder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketFinder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketFinder::initializeClass, 1)))
            return NULL;
          return t_BracketFinder::wrap_Object(BracketFinder(((t_BracketFinder *) arg)->object.this$));
        }
        static PyObject *t_BracketFinder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketFinder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BracketFinder_init_(t_BracketFinder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              BracketFinder object((jobject) NULL);

              INT_CALL(object = BracketFinder());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jint a1;
              BracketFinder object((jobject) NULL);

              if (!parseArgs(args, "DI", &a0, &a1))
              {
                INT_CALL(object = BracketFinder(a0, a1));
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

        static PyObject *t_BracketFinder_getEvaluations(t_BracketFinder *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketFinder_getFHi(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFHi());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_getFLo(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFLo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_getFMid(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getFMid());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_getHi(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHi());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_getLo(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLo());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_getMaxEvaluations(t_BracketFinder *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BracketFinder_getMid(t_BracketFinder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMid());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketFinder_search(t_BracketFinder *self, PyObject *args)
        {
          ::org::hipparchus::analysis::UnivariateFunction a0((jobject) NULL);
          ::org::hipparchus::optim::nonlinear::scalar::GoalType a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          jdouble a3;

          if (!parseArgs(args, "kKDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, ::org::hipparchus::optim::nonlinear::scalar::GoalType::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::nonlinear::scalar::t_GoalType::parameters_, &a2, &a3))
          {
            OBJ_CALL(self->object.search(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "search", args);
          return NULL;
        }

        static PyObject *t_BracketFinder_get__evaluations(t_BracketFinder *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BracketFinder_get__fHi(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFHi());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketFinder_get__fLo(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFLo());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketFinder_get__fMid(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getFMid());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketFinder_get__hi(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHi());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketFinder_get__lo(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLo());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketFinder_get__maxEvaluations(t_BracketFinder *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BracketFinder_get__mid(t_BracketFinder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMid());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/generation/PythonAbstractGenerator.h"
#include "java/io/IOException.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/lang/Appendable.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {

            ::java::lang::Class *PythonAbstractGenerator::class$ = NULL;
            jmethodID *PythonAbstractGenerator::mids$ = NULL;
            bool PythonAbstractGenerator::live$ = false;

            jclass PythonAbstractGenerator::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/generation/PythonAbstractGenerator");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_6e7c6a479ca124c5] = env->getMethodID(cls, "<init>", "(Ljava/lang/Appendable;Ljava/lang/String;DZ)V");
                mids$[mid_endMessage_f5ffdf29129ef90a] = env->getMethodID(cls, "endMessage", "(Ljava/lang/String;)V");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getFormat_c3a4c5f37e67a25e] = env->getMethodID(cls, "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_startMessage_9547058464ed819e] = env->getMethodID(cls, "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V");
                mids$[mid_writeComments_4ccaedadb068bdeb] = env->getMethodID(cls, "writeComments", "(Ljava/util/List;)V");
                mids$[mid_writeEntry_a717407bcf2f477f] = env->getMethodID(cls, "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonAbstractGenerator::PythonAbstractGenerator(const ::java::lang::Appendable & a0, const ::java::lang::String & a1, jdouble a2, jboolean a3) : ::org::orekit::files::ccsds::utils::generation::AbstractGenerator(env->newObject(initializeClass, &mids$, mid_init$_6e7c6a479ca124c5, a0.this$, a1.this$, a2, a3)) {}

            void PythonAbstractGenerator::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonAbstractGenerator::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonAbstractGenerator::pythonExtension(jlong a0) const
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
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace generation {
            static PyObject *t_PythonAbstractGenerator_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractGenerator_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonAbstractGenerator_init_(t_PythonAbstractGenerator *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonAbstractGenerator_finalize(t_PythonAbstractGenerator *self);
            static PyObject *t_PythonAbstractGenerator_pythonExtension(t_PythonAbstractGenerator *self, PyObject *args);
            static void JNICALL t_PythonAbstractGenerator_endMessage0(JNIEnv *jenv, jobject jobj, jobject a0);
            static jobject JNICALL t_PythonAbstractGenerator_getFormat1(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractGenerator_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractGenerator_startMessage3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
            static void JNICALL t_PythonAbstractGenerator_writeComments4(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonAbstractGenerator_writeEntry5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3);
            static PyObject *t_PythonAbstractGenerator_get__self(t_PythonAbstractGenerator *self, void *data);
            static PyGetSetDef t_PythonAbstractGenerator__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractGenerator, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractGenerator__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractGenerator, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractGenerator, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractGenerator, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractGenerator, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractGenerator)[] = {
              { Py_tp_methods, t_PythonAbstractGenerator__methods_ },
              { Py_tp_init, (void *) t_PythonAbstractGenerator_init_ },
              { Py_tp_getset, t_PythonAbstractGenerator__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractGenerator)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractGenerator),
              NULL
            };

            DEFINE_TYPE(PythonAbstractGenerator, t_PythonAbstractGenerator, PythonAbstractGenerator);

            void t_PythonAbstractGenerator::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractGenerator), &PY_TYPE_DEF(PythonAbstractGenerator), module, "PythonAbstractGenerator", 1);
            }

            void t_PythonAbstractGenerator::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGenerator), "class_", make_descriptor(PythonAbstractGenerator::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGenerator), "wrapfn_", make_descriptor(t_PythonAbstractGenerator::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGenerator), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractGenerator::initializeClass);
              JNINativeMethod methods[] = {
                { "endMessage", "(Ljava/lang/String;)V", (void *) t_PythonAbstractGenerator_endMessage0 },
                { "getFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;", (void *) t_PythonAbstractGenerator_getFormat1 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractGenerator_pythonDecRef2 },
                { "startMessage", "(Ljava/lang/String;Ljava/lang/String;D)V", (void *) t_PythonAbstractGenerator_startMessage3 },
                { "writeComments", "(Ljava/util/List;)V", (void *) t_PythonAbstractGenerator_writeComments4 },
                { "writeEntry", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/utils/units/Unit;Z)V", (void *) t_PythonAbstractGenerator_writeEntry5 },
              };
              env->registerNatives(cls, methods, 6);
            }

            static PyObject *t_PythonAbstractGenerator_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractGenerator::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractGenerator::wrap_Object(PythonAbstractGenerator(((t_PythonAbstractGenerator *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractGenerator_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractGenerator::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonAbstractGenerator_init_(t_PythonAbstractGenerator *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::Appendable a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              jdouble a2;
              jboolean a3;
              PythonAbstractGenerator object((jobject) NULL);

              if (!parseArgs(args, "ksDZ", ::java::lang::Appendable::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = PythonAbstractGenerator(a0, a1, a2, a3));
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

            static PyObject *t_PythonAbstractGenerator_finalize(t_PythonAbstractGenerator *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractGenerator_pythonExtension(t_PythonAbstractGenerator *self, PyObject *args)
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

            static void JNICALL t_PythonAbstractGenerator_endMessage0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *result = PyObject_CallMethod(obj, "endMessage", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static jobject JNICALL t_PythonAbstractGenerator_getFormat1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getFormat", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &value))
              {
                throwTypeError("getFormat", result);
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

            static void JNICALL t_PythonAbstractGenerator_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAbstractGenerator_startMessage3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = env->fromJString((jstring) a1, 0);
              PyObject *result = PyObject_CallMethod(obj, "startMessage", "OOd", o0, o1, (double) a2);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonAbstractGenerator_writeComments4(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
              PyObject *result = PyObject_CallMethod(obj, "writeComments", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static void JNICALL t_PythonAbstractGenerator_writeEntry5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jboolean a3)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractGenerator::mids$[PythonAbstractGenerator::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = env->fromJString((jstring) a0, 0);
              PyObject *o1 = env->fromJString((jstring) a1, 0);
              PyObject *o2 = ::org::orekit::utils::units::t_Unit::wrap_Object(::org::orekit::utils::units::Unit(a2));
              PyObject *o3 = (a3 ? Py_True : Py_False);
              PyObject *result = PyObject_CallMethod(obj, "writeEntry", "OOOO", o0, o1, o2, o3);
              Py_DECREF(o0);
              Py_DECREF(o1);
              Py_DECREF(o2);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonAbstractGenerator_get__self(t_PythonAbstractGenerator *self, void *data)
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
