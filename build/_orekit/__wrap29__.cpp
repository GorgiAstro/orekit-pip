#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/BaseAbstractUnivariateIntegrator.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/integration/UnivariateIntegrator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *BaseAbstractUnivariateIntegrator::class$ = NULL;
        jmethodID *BaseAbstractUnivariateIntegrator::mids$ = NULL;
        bool BaseAbstractUnivariateIntegrator::live$ = false;
        jdouble BaseAbstractUnivariateIntegrator::DEFAULT_ABSOLUTE_ACCURACY = (jdouble) 0;
        jint BaseAbstractUnivariateIntegrator::DEFAULT_MAX_ITERATIONS_COUNT = (jint) 0;
        jint BaseAbstractUnivariateIntegrator::DEFAULT_MIN_ITERATIONS_COUNT = (jint) 0;
        jdouble BaseAbstractUnivariateIntegrator::DEFAULT_RELATIVE_ACCURACY = (jdouble) 0;

        jclass BaseAbstractUnivariateIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/BaseAbstractUnivariateIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getIterations_570ce0828f81a2c1] = env->getMethodID(cls, "getIterations", "()I");
            mids$[mid_getMaximalIterationCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMaximalIterationCount", "()I");
            mids$[mid_getMinimalIterationCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMinimalIterationCount", "()I");
            mids$[mid_getRelativeAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_integrate_5531acb13e429311] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)D");
            mids$[mid_doIntegrate_dff5885c2c873297] = env->getMethodID(cls, "doIntegrate", "()D");
            mids$[mid_getMin_dff5885c2c873297] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getMax_dff5885c2c873297] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_computeObjectiveValue_dcbc7ce2902fa136] = env->getMethodID(cls, "computeObjectiveValue", "(D)D");
            mids$[mid_setup_7fd3ea6a2f8f4582] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_ABSOLUTE_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_ABSOLUTE_ACCURACY");
            DEFAULT_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "DEFAULT_MAX_ITERATIONS_COUNT");
            DEFAULT_MIN_ITERATIONS_COUNT = env->getStaticIntField(cls, "DEFAULT_MIN_ITERATIONS_COUNT");
            DEFAULT_RELATIVE_ACCURACY = env->getStaticDoubleField(cls, "DEFAULT_RELATIVE_ACCURACY");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseAbstractUnivariateIntegrator::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_dff5885c2c873297]);
        }

        jint BaseAbstractUnivariateIntegrator::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_570ce0828f81a2c1]);
        }

        jint BaseAbstractUnivariateIntegrator::getIterations() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterations_570ce0828f81a2c1]);
        }

        jint BaseAbstractUnivariateIntegrator::getMaximalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalIterationCount_570ce0828f81a2c1]);
        }

        jint BaseAbstractUnivariateIntegrator::getMinimalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinimalIterationCount_570ce0828f81a2c1]);
        }

        jdouble BaseAbstractUnivariateIntegrator::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_dff5885c2c873297]);
        }

        jdouble BaseAbstractUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_integrate_5531acb13e429311], a0, a1.this$, a2, a3);
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
        static PyObject *t_BaseAbstractUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getAbsoluteAccuracy(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getEvaluations(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getIterations(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getMaximalIterationCount(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getMinimalIterationCount(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_getRelativeAccuracy(t_BaseAbstractUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractUnivariateIntegrator_integrate(t_BaseAbstractUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__absoluteAccuracy(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__evaluations(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__iterations(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__maximalIterationCount(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__minimalIterationCount(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractUnivariateIntegrator_get__relativeAccuracy(t_BaseAbstractUnivariateIntegrator *self, void *data);
        static PyGetSetDef t_BaseAbstractUnivariateIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, evaluations),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, iterations),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, maximalIterationCount),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, minimalIterationCount),
          DECLARE_GET_FIELD(t_BaseAbstractUnivariateIntegrator, relativeAccuracy),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseAbstractUnivariateIntegrator__methods_[] = {
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getIterations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getMaximalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getMinimalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractUnivariateIntegrator, integrate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseAbstractUnivariateIntegrator)[] = {
          { Py_tp_methods, t_BaseAbstractUnivariateIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseAbstractUnivariateIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseAbstractUnivariateIntegrator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BaseAbstractUnivariateIntegrator, t_BaseAbstractUnivariateIntegrator, BaseAbstractUnivariateIntegrator);

        void t_BaseAbstractUnivariateIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseAbstractUnivariateIntegrator), &PY_TYPE_DEF(BaseAbstractUnivariateIntegrator), module, "BaseAbstractUnivariateIntegrator", 0);
        }

        void t_BaseAbstractUnivariateIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "class_", make_descriptor(BaseAbstractUnivariateIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "wrapfn_", make_descriptor(t_BaseAbstractUnivariateIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(BaseAbstractUnivariateIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "DEFAULT_ABSOLUTE_ACCURACY", make_descriptor(BaseAbstractUnivariateIntegrator::DEFAULT_ABSOLUTE_ACCURACY));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "DEFAULT_MAX_ITERATIONS_COUNT", make_descriptor(BaseAbstractUnivariateIntegrator::DEFAULT_MAX_ITERATIONS_COUNT));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "DEFAULT_MIN_ITERATIONS_COUNT", make_descriptor(BaseAbstractUnivariateIntegrator::DEFAULT_MIN_ITERATIONS_COUNT));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractUnivariateIntegrator), "DEFAULT_RELATIVE_ACCURACY", make_descriptor(BaseAbstractUnivariateIntegrator::DEFAULT_RELATIVE_ACCURACY));
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseAbstractUnivariateIntegrator::initializeClass, 1)))
            return NULL;
          return t_BaseAbstractUnivariateIntegrator::wrap_Object(BaseAbstractUnivariateIntegrator(((t_BaseAbstractUnivariateIntegrator *) arg)->object.this$));
        }
        static PyObject *t_BaseAbstractUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseAbstractUnivariateIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getAbsoluteAccuracy(t_BaseAbstractUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getEvaluations(t_BaseAbstractUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getIterations(t_BaseAbstractUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getMaximalIterationCount(t_BaseAbstractUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getMinimalIterationCount(t_BaseAbstractUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_getRelativeAccuracy(t_BaseAbstractUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_integrate(t_BaseAbstractUnivariateIntegrator *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::UnivariateFunction a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble result;

          if (!parseArgs(args, "IkDD", ::org::hipparchus::analysis::UnivariateFunction::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__absoluteAccuracy(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__evaluations(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__iterations(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__maximalIterationCount(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__minimalIterationCount(t_BaseAbstractUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractUnivariateIntegrator_get__relativeAccuracy(t_BaseAbstractUnivariateIntegrator *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmElements.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/OcmElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *OcmElements::class$ = NULL;
              jmethodID *OcmElements::mids$ = NULL;
              bool OcmElements::live$ = false;
              OcmElements *OcmElements::COV = NULL;
              OcmElements *OcmElements::MAN = NULL;
              OcmElements *OcmElements::OD = NULL;
              OcmElements *OcmElements::ORB = NULL;
              OcmElements *OcmElements::PERT = NULL;
              OcmElements *OcmElements::PHYS = NULL;
              OcmElements *OcmElements::USER = NULL;

              jclass OcmElements::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/OcmElements");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_ea7ff09e28f9c18b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;");
                  mids$[mid_values_b4f2b69e777aa1cf] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COV = new OcmElements(env->getStaticObjectField(cls, "COV", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  MAN = new OcmElements(env->getStaticObjectField(cls, "MAN", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  OD = new OcmElements(env->getStaticObjectField(cls, "OD", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  ORB = new OcmElements(env->getStaticObjectField(cls, "ORB", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  PERT = new OcmElements(env->getStaticObjectField(cls, "PERT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  PHYS = new OcmElements(env->getStaticObjectField(cls, "PHYS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  USER = new OcmElements(env->getStaticObjectField(cls, "USER", "Lorg/orekit/files/ccsds/ndm/odm/ocm/OcmElements;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OcmElements OcmElements::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return OcmElements(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ea7ff09e28f9c18b], a0.this$));
              }

              JArray< OcmElements > OcmElements::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< OcmElements >(env->callStaticObjectMethod(cls, mids$[mid_values_b4f2b69e777aa1cf]));
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
              static PyObject *t_OcmElements_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmElements_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OcmElements_of_(t_OcmElements *self, PyObject *args);
              static PyObject *t_OcmElements_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_OcmElements_values(PyTypeObject *type);
              static PyObject *t_OcmElements_get__parameters_(t_OcmElements *self, void *data);
              static PyGetSetDef t_OcmElements__fields_[] = {
                DECLARE_GET_FIELD(t_OcmElements, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OcmElements__methods_[] = {
                DECLARE_METHOD(t_OcmElements, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmElements, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OcmElements, of_, METH_VARARGS),
                DECLARE_METHOD(t_OcmElements, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_OcmElements, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OcmElements)[] = {
                { Py_tp_methods, t_OcmElements__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_OcmElements__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OcmElements)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(OcmElements, t_OcmElements, OcmElements);
              PyObject *t_OcmElements::wrap_Object(const OcmElements& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmElements::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmElements *self = (t_OcmElements *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_OcmElements::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_OcmElements::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_OcmElements *self = (t_OcmElements *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_OcmElements::install(PyObject *module)
              {
                installType(&PY_TYPE(OcmElements), &PY_TYPE_DEF(OcmElements), module, "OcmElements", 0);
              }

              void t_OcmElements::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "class_", make_descriptor(OcmElements::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "wrapfn_", make_descriptor(t_OcmElements::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "boxfn_", make_descriptor(boxObject));
                env->getClass(OcmElements::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "COV", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::COV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "MAN", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::MAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "OD", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::OD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "ORB", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::ORB)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "PERT", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::PERT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "PHYS", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::PHYS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OcmElements), "USER", make_descriptor(t_OcmElements::wrap_Object(*OcmElements::USER)));
              }

              static PyObject *t_OcmElements_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OcmElements::initializeClass, 1)))
                  return NULL;
                return t_OcmElements::wrap_Object(OcmElements(((t_OcmElements *) arg)->object.this$));
              }
              static PyObject *t_OcmElements_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OcmElements::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_OcmElements_of_(t_OcmElements *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_OcmElements_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                OcmElements result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmElements::valueOf(a0));
                  return t_OcmElements::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_OcmElements_values(PyTypeObject *type)
              {
                JArray< OcmElements > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::OcmElements::values());
                return JArray<jobject>(result.this$).wrap(t_OcmElements::wrap_jobject);
              }
              static PyObject *t_OcmElements_get__parameters_(t_OcmElements *self, void *data)
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
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "org/orekit/orbits/FieldKeplerianOrbit.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
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
          mids$[mid_init$_1cbcb2601e7d1334] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;)V");
          mids$[mid_init$_3ab2b5dce8b183c1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/KeplerianOrbit;)V");
          mids$[mid_init$_726dc2bf140240a1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_a1d831f131e24bc0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedFieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_960ad4c09c9f5686] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_b6f9c400578e2bc2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_2a14969bf128ed41] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_addKeplerContribution_4e49f6ed48591ef2] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getA_eba8e72a22c984ac] = env->getMethodID(cls, "getA", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getADot_eba8e72a22c984ac] = env->getMethodID(cls, "getADot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAnomaly_aefb08df7a137c22] = env->getMethodID(cls, "getAnomaly", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getAnomalyDot_aefb08df7a137c22] = env->getMethodID(cls, "getAnomalyDot", "(Lorg/orekit/orbits/PositionAngleType;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getCachedPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getE_eba8e72a22c984ac] = env->getMethodID(cls, "getE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEDot_eba8e72a22c984ac] = env->getMethodID(cls, "getEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEccentricAnomaly_eba8e72a22c984ac] = env->getMethodID(cls, "getEccentricAnomaly", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEccentricAnomalyDot_eba8e72a22c984ac] = env->getMethodID(cls, "getEccentricAnomalyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEx_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialEx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialExDot_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialExDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEy_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialEy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getEquinoctialEyDot_eba8e72a22c984ac] = env->getMethodID(cls, "getEquinoctialEyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHx_eba8e72a22c984ac] = env->getMethodID(cls, "getHx", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHxDot_eba8e72a22c984ac] = env->getMethodID(cls, "getHxDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHy_eba8e72a22c984ac] = env->getMethodID(cls, "getHy", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getHyDot_eba8e72a22c984ac] = env->getMethodID(cls, "getHyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getI_eba8e72a22c984ac] = env->getMethodID(cls, "getI", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getIDot_eba8e72a22c984ac] = env->getMethodID(cls, "getIDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLE_eba8e72a22c984ac] = env->getMethodID(cls, "getLE", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLEDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLEDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLM_eba8e72a22c984ac] = env->getMethodID(cls, "getLM", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLMDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLMDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLv_eba8e72a22c984ac] = env->getMethodID(cls, "getLv", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getLvDot_eba8e72a22c984ac] = env->getMethodID(cls, "getLvDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMeanAnomaly_eba8e72a22c984ac] = env->getMethodID(cls, "getMeanAnomaly", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getMeanAnomalyDot_eba8e72a22c984ac] = env->getMethodID(cls, "getMeanAnomalyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPerigeeArgument_eba8e72a22c984ac] = env->getMethodID(cls, "getPerigeeArgument", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getPerigeeArgumentDot_eba8e72a22c984ac] = env->getMethodID(cls, "getPerigeeArgumentDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRightAscensionOfAscendingNode_eba8e72a22c984ac] = env->getMethodID(cls, "getRightAscensionOfAscendingNode", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRightAscensionOfAscendingNodeDot_eba8e72a22c984ac] = env->getMethodID(cls, "getRightAscensionOfAscendingNodeDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getTrueAnomaly_eba8e72a22c984ac] = env->getMethodID(cls, "getTrueAnomaly", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getTrueAnomalyDot_eba8e72a22c984ac] = env->getMethodID(cls, "getTrueAnomalyDot", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getType_e29360d311dc0e20] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasDerivatives_b108b35ef48e27bd] = env->getMethodID(cls, "hasDerivatives", "()Z");
          mids$[mid_hasRates_b108b35ef48e27bd] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_removeRates_095082babca4bc54] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/FieldKeplerianOrbit;");
          mids$[mid_shiftedBy_5350f66dbc19717d] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/FieldKeplerianOrbit;");
          mids$[mid_shiftedBy_4aa1ce340b48f3cb] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldKeplerianOrbit;");
          mids$[mid_toOrbit_3b8c2ada972e4fd7] = env->getMethodID(cls, "toOrbit", "()Lorg/orekit/orbits/KeplerianOrbit;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_initPVCoordinates_f89522ff77904397] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_initPosition_716f50c86ffc8da7] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_computeJacobianMeanWrtCartesian_1b3ae884bec31e6d] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianEccentricWrtCartesian_1b3ae884bec31e6d] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_computeJacobianTrueWrtCartesian_1b3ae884bec31e6d] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::orekit::orbits::FieldOrbit & a0) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_1cbcb2601e7d1334, a0.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::KeplerianOrbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_3ab2b5dce8b183c1, a0.this$, a1.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_726dc2bf140240a1, a0.this$, a1.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::orekit::utils::TimeStampedFieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_a1d831f131e24bc0, a0.this$, a1.this$, a2.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::orekit::utils::FieldPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::FieldAbsoluteDate & a2, const ::org::hipparchus::CalculusFieldElement & a3) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_960ad4c09c9f5686, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::FieldAbsoluteDate & a8, const ::org::hipparchus::CalculusFieldElement & a9) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_b6f9c400578e2bc2, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$)) {}

      FieldKeplerianOrbit::FieldKeplerianOrbit(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::CalculusFieldElement & a5, const ::org::hipparchus::CalculusFieldElement & a6, const ::org::hipparchus::CalculusFieldElement & a7, const ::org::hipparchus::CalculusFieldElement & a8, const ::org::hipparchus::CalculusFieldElement & a9, const ::org::hipparchus::CalculusFieldElement & a10, const ::org::hipparchus::CalculusFieldElement & a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::FieldAbsoluteDate & a14, const ::org::hipparchus::CalculusFieldElement & a15) : ::org::orekit::orbits::FieldOrbit(env->newObject(initializeClass, &mids$, mid_init$_2a14969bf128ed41, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10.this$, a11.this$, a12.this$, a13.this$, a14.this$, a15.this$)) {}

      void FieldKeplerianOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, const ::org::hipparchus::CalculusFieldElement & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_4e49f6ed48591ef2], a0.this$, a1.this$, a2.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getA() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getA_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getADot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getADot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getAnomaly(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAnomaly_aefb08df7a137c22], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getAnomalyDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAnomalyDot_aefb08df7a137c22], a0.this$));
      }

      ::org::orekit::orbits::PositionAngleType FieldKeplerianOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_8f17e83e5a86217c]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getE_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEccentricAnomaly() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEccentricAnomaly_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEccentricAnomalyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEccentricAnomalyDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEquinoctialEx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEx_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEquinoctialExDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialExDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEquinoctialEy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEy_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getEquinoctialEyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEquinoctialEyDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getHx() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHx_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getHxDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHxDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getHy() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHy_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getHyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getHyDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getI() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getI_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getIDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getIDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLE() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLE_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLEDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLEDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLM() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLM_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLMDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLMDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLv() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLv_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getLvDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLvDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getMeanAnomaly() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanAnomaly_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getMeanAnomalyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMeanAnomalyDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getPerigeeArgument() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPerigeeArgument_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getPerigeeArgumentDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getPerigeeArgumentDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getRightAscensionOfAscendingNode() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAscensionOfAscendingNode_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getRightAscensionOfAscendingNodeDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRightAscensionOfAscendingNodeDot_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getTrueAnomaly() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTrueAnomaly_eba8e72a22c984ac]));
      }

      ::org::hipparchus::CalculusFieldElement FieldKeplerianOrbit::getTrueAnomalyDot() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getTrueAnomalyDot_eba8e72a22c984ac]));
      }

      ::org::orekit::orbits::OrbitType FieldKeplerianOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_e29360d311dc0e20]));
      }

      jboolean FieldKeplerianOrbit::hasDerivatives() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasDerivatives_b108b35ef48e27bd]);
      }

      jboolean FieldKeplerianOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_b108b35ef48e27bd]);
      }

      FieldKeplerianOrbit FieldKeplerianOrbit::removeRates() const
      {
        return FieldKeplerianOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_095082babca4bc54]));
      }

      FieldKeplerianOrbit FieldKeplerianOrbit::shiftedBy(jdouble a0) const
      {
        return FieldKeplerianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_5350f66dbc19717d], a0));
      }

      FieldKeplerianOrbit FieldKeplerianOrbit::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldKeplerianOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_4aa1ce340b48f3cb], a0.this$));
      }

      ::org::orekit::orbits::KeplerianOrbit FieldKeplerianOrbit::toOrbit() const
      {
        return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_toOrbit_3b8c2ada972e4fd7]));
      }

      ::java::lang::String FieldKeplerianOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/GradientField.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *Gradient::class$ = NULL;
        jmethodID *Gradient::mids$ = NULL;
        bool Gradient::live$ = false;

        jclass Gradient::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/Gradient");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff2e40d13a189b48] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)V");
            mids$[mid_init$_f617b8481082c6ea] = env->getMethodID(cls, "<init>", "(D[D)V");
            mids$[mid_abs_cc2f4e0a456f51de] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_acos_cc2f4e0a456f51de] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_acosh_cc2f4e0a456f51de] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_add_8d97bcb0cb8ef664] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_add_f02fa7769dd26af8] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_asin_cc2f4e0a456f51de] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_asinh_cc2f4e0a456f51de] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_atan_cc2f4e0a456f51de] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_atan2_8d97bcb0cb8ef664] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_atanh_cc2f4e0a456f51de] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_cbrt_cc2f4e0a456f51de] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_ceil_cc2f4e0a456f51de] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_compose_891e66590aff07a5] = env->getMethodID(cls, "compose", "([D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_constant_487bb7e647e22309] = env->getStaticMethodID(cls, "constant", "(ID)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_copySign_8d97bcb0cb8ef664] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_copySign_f02fa7769dd26af8] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_cos_cc2f4e0a456f51de] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_cosh_cc2f4e0a456f51de] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_divide_8d97bcb0cb8ef664] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_divide_f02fa7769dd26af8] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_cc2f4e0a456f51de] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_expm1_cc2f4e0a456f51de] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_floor_cc2f4e0a456f51de] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getExponent_570ce0828f81a2c1] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_95de3da39edef43e] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/GradientField;");
            mids$[mid_getFreeParameters_570ce0828f81a2c1] = env->getMethodID(cls, "getFreeParameters", "()I");
            mids$[mid_getGradient_60c7040667a7dc5c] = env->getMethodID(cls, "getGradient", "()[D");
            mids$[mid_getOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPartialDerivative_48330f48ce3d930b] = env->getMethodID(cls, "getPartialDerivative", "([I)D");
            mids$[mid_getPartialDerivative_46f85b53d9aedd96] = env->getMethodID(cls, "getPartialDerivative", "(I)D");
            mids$[mid_getPi_cc2f4e0a456f51de] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_getReal_dff5885c2c873297] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getValue_dff5885c2c873297] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_8d97bcb0cb8ef664] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_4c95feae0c1b039f] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_5e2cd906c44368d9] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/Gradient;[Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_2ec80775a1d2fdcb] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_9f7acdc80e930088] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_e2eb1d83443da5ff] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_08be119d3e8d3fdd] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_9fc013f20e253228] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_linearCombination_ed5bc80f3bfed0e8] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;DLorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_log_cc2f4e0a456f51de] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_log10_cc2f4e0a456f51de] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_log1p_cc2f4e0a456f51de] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_multiply_8d97bcb0cb8ef664] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_multiply_f02fa7769dd26af8] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_multiply_09473def8ae95614] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_negate_cc2f4e0a456f51de] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_newInstance_f02fa7769dd26af8] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_pow_8d97bcb0cb8ef664] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_pow_f02fa7769dd26af8] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_pow_09473def8ae95614] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_pow_6b5c2cf44f4fe5ce] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_reciprocal_cc2f4e0a456f51de] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_remainder_8d97bcb0cb8ef664] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_remainder_f02fa7769dd26af8] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_rint_cc2f4e0a456f51de] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_rootN_09473def8ae95614] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_scalb_09473def8ae95614] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_sign_cc2f4e0a456f51de] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_sin_cc2f4e0a456f51de] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_sinCos_a447b7ca640e6b68] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_cc2f4e0a456f51de] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_sinhCosh_eef733c8a50b276f] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_cc2f4e0a456f51de] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_subtract_8d97bcb0cb8ef664] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/Gradient;)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_subtract_f02fa7769dd26af8] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_tan_cc2f4e0a456f51de] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_tanh_cc2f4e0a456f51de] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_taylor_9dc1ec0bcc0a9a29] = env->getMethodID(cls, "taylor", "([D)D");
            mids$[mid_toDegrees_cc2f4e0a456f51de] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_toDerivativeStructure_73e277cbd957031a] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_toRadians_cc2f4e0a456f51de] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_ulp_cc2f4e0a456f51de] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_variable_11a97b17f1817abe] = env->getStaticMethodID(cls, "variable", "(IID)Lorg/hipparchus/analysis/differentiation/Gradient;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Gradient::Gradient(const ::org::hipparchus::analysis::differentiation::DerivativeStructure & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff2e40d13a189b48, a0.this$)) {}

        Gradient::Gradient(jdouble a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f617b8481082c6ea, a0, a1.this$)) {}

        Gradient Gradient::abs() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_abs_cc2f4e0a456f51de]));
        }

        Gradient Gradient::acos() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_acos_cc2f4e0a456f51de]));
        }

        Gradient Gradient::acosh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_acosh_cc2f4e0a456f51de]));
        }

        Gradient Gradient::add(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_add_8d97bcb0cb8ef664], a0.this$));
        }

        Gradient Gradient::add(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_add_f02fa7769dd26af8], a0));
        }

        Gradient Gradient::asin() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_asin_cc2f4e0a456f51de]));
        }

        Gradient Gradient::asinh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_asinh_cc2f4e0a456f51de]));
        }

        Gradient Gradient::atan() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_atan_cc2f4e0a456f51de]));
        }

        Gradient Gradient::atan2(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_atan2_8d97bcb0cb8ef664], a0.this$));
        }

        Gradient Gradient::atanh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_atanh_cc2f4e0a456f51de]));
        }

        Gradient Gradient::cbrt() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_cbrt_cc2f4e0a456f51de]));
        }

        Gradient Gradient::ceil() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_ceil_cc2f4e0a456f51de]));
        }

        Gradient Gradient::compose(const JArray< jdouble > & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_compose_891e66590aff07a5], a0.this$));
        }

        Gradient Gradient::constant(jint a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          return Gradient(env->callStaticObjectMethod(cls, mids$[mid_constant_487bb7e647e22309], a0, a1));
        }

        Gradient Gradient::copySign(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_copySign_8d97bcb0cb8ef664], a0.this$));
        }

        Gradient Gradient::copySign(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_copySign_f02fa7769dd26af8], a0));
        }

        Gradient Gradient::cos() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_cos_cc2f4e0a456f51de]));
        }

        Gradient Gradient::cosh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_cosh_cc2f4e0a456f51de]));
        }

        Gradient Gradient::divide(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_divide_8d97bcb0cb8ef664], a0.this$));
        }

        Gradient Gradient::divide(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_divide_f02fa7769dd26af8], a0));
        }

        jboolean Gradient::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        Gradient Gradient::exp() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_exp_cc2f4e0a456f51de]));
        }

        Gradient Gradient::expm1() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_expm1_cc2f4e0a456f51de]));
        }

        Gradient Gradient::floor() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_floor_cc2f4e0a456f51de]));
        }

        jint Gradient::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_570ce0828f81a2c1]);
        }

        ::org::hipparchus::analysis::differentiation::GradientField Gradient::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::GradientField(env->callObjectMethod(this$, mids$[mid_getField_95de3da39edef43e]));
        }

        jint Gradient::getFreeParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeParameters_570ce0828f81a2c1]);
        }

        JArray< jdouble > Gradient::getGradient() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getGradient_60c7040667a7dc5c]));
        }

        jint Gradient::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_570ce0828f81a2c1]);
        }

        jdouble Gradient::getPartialDerivative(const JArray< jint > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_48330f48ce3d930b], a0.this$);
        }

        jdouble Gradient::getPartialDerivative(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPartialDerivative_46f85b53d9aedd96], a0);
        }

        Gradient Gradient::getPi() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_getPi_cc2f4e0a456f51de]));
        }

        jdouble Gradient::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_dff5885c2c873297]);
        }

        jdouble Gradient::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_dff5885c2c873297]);
        }

        jint Gradient::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
        }

        Gradient Gradient::hypot(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_hypot_8d97bcb0cb8ef664], a0.this$));
        }

        Gradient Gradient::linearCombination(const JArray< jdouble > & a0, const JArray< Gradient > & a1) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_4c95feae0c1b039f], a0.this$, a1.this$));
        }

        Gradient Gradient::linearCombination(const JArray< Gradient > & a0, const JArray< Gradient > & a1) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_5e2cd906c44368d9], a0.this$, a1.this$));
        }

        Gradient Gradient::linearCombination(const Gradient & a0, const Gradient & a1, const Gradient & a2, const Gradient & a3) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_2ec80775a1d2fdcb], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        Gradient Gradient::linearCombination(jdouble a0, const Gradient & a1, jdouble a2, const Gradient & a3) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_9f7acdc80e930088], a0, a1.this$, a2, a3.this$));
        }

        Gradient Gradient::linearCombination(const Gradient & a0, const Gradient & a1, const Gradient & a2, const Gradient & a3, const Gradient & a4, const Gradient & a5) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_e2eb1d83443da5ff], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        Gradient Gradient::linearCombination(jdouble a0, const Gradient & a1, jdouble a2, const Gradient & a3, jdouble a4, const Gradient & a5) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_08be119d3e8d3fdd], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        Gradient Gradient::linearCombination(const Gradient & a0, const Gradient & a1, const Gradient & a2, const Gradient & a3, const Gradient & a4, const Gradient & a5, const Gradient & a6, const Gradient & a7) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_9fc013f20e253228], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        Gradient Gradient::linearCombination(jdouble a0, const Gradient & a1, jdouble a2, const Gradient & a3, jdouble a4, const Gradient & a5, jdouble a6, const Gradient & a7) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_linearCombination_ed5bc80f3bfed0e8], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        Gradient Gradient::log() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_log_cc2f4e0a456f51de]));
        }

        Gradient Gradient::log10() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_log10_cc2f4e0a456f51de]));
        }

        Gradient Gradient::log1p() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_log1p_cc2f4e0a456f51de]));
        }

        Gradient Gradient::multiply(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_multiply_8d97bcb0cb8ef664], a0.this$));
        }

        Gradient Gradient::multiply(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_multiply_f02fa7769dd26af8], a0));
        }

        Gradient Gradient::multiply(jint a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_multiply_09473def8ae95614], a0));
        }

        Gradient Gradient::negate() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_negate_cc2f4e0a456f51de]));
        }

        Gradient Gradient::newInstance(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_newInstance_f02fa7769dd26af8], a0));
        }

        Gradient Gradient::pow(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_pow_8d97bcb0cb8ef664], a0.this$));
        }

        Gradient Gradient::pow(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_pow_f02fa7769dd26af8], a0));
        }

        Gradient Gradient::pow(jint a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_pow_09473def8ae95614], a0));
        }

        Gradient Gradient::pow(jdouble a0, const Gradient & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return Gradient(env->callStaticObjectMethod(cls, mids$[mid_pow_6b5c2cf44f4fe5ce], a0, a1.this$));
        }

        Gradient Gradient::reciprocal() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_reciprocal_cc2f4e0a456f51de]));
        }

        Gradient Gradient::remainder(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_remainder_8d97bcb0cb8ef664], a0.this$));
        }

        Gradient Gradient::remainder(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_remainder_f02fa7769dd26af8], a0));
        }

        Gradient Gradient::rint() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_rint_cc2f4e0a456f51de]));
        }

        Gradient Gradient::rootN(jint a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_rootN_09473def8ae95614], a0));
        }

        Gradient Gradient::scalb(jint a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_scalb_09473def8ae95614], a0));
        }

        Gradient Gradient::sign() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_sign_cc2f4e0a456f51de]));
        }

        Gradient Gradient::sin() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_sin_cc2f4e0a456f51de]));
        }

        ::org::hipparchus::util::FieldSinCos Gradient::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_a447b7ca640e6b68]));
        }

        Gradient Gradient::sinh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_sinh_cc2f4e0a456f51de]));
        }

        ::org::hipparchus::util::FieldSinhCosh Gradient::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_eef733c8a50b276f]));
        }

        Gradient Gradient::sqrt() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_sqrt_cc2f4e0a456f51de]));
        }

        Gradient Gradient::subtract(const Gradient & a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_subtract_8d97bcb0cb8ef664], a0.this$));
        }

        Gradient Gradient::subtract(jdouble a0) const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_subtract_f02fa7769dd26af8], a0));
        }

        Gradient Gradient::tan() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_tan_cc2f4e0a456f51de]));
        }

        Gradient Gradient::tanh() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_tanh_cc2f4e0a456f51de]));
        }

        jdouble Gradient::taylor(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_taylor_9dc1ec0bcc0a9a29], a0.this$);
        }

        Gradient Gradient::toDegrees() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_toDegrees_cc2f4e0a456f51de]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure Gradient::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_73e277cbd957031a]));
        }

        Gradient Gradient::toRadians() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_toRadians_cc2f4e0a456f51de]));
        }

        Gradient Gradient::ulp() const
        {
          return Gradient(env->callObjectMethod(this$, mids$[mid_ulp_cc2f4e0a456f51de]));
        }

        Gradient Gradient::variable(jint a0, jint a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          return Gradient(env->callStaticObjectMethod(cls, mids$[mid_variable_11a97b17f1817abe], a0, a1, a2));
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
        static PyObject *t_Gradient_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Gradient_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Gradient_init_(t_Gradient *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Gradient_abs(t_Gradient *self);
        static PyObject *t_Gradient_acos(t_Gradient *self);
        static PyObject *t_Gradient_acosh(t_Gradient *self);
        static PyObject *t_Gradient_add(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_asin(t_Gradient *self);
        static PyObject *t_Gradient_asinh(t_Gradient *self);
        static PyObject *t_Gradient_atan(t_Gradient *self);
        static PyObject *t_Gradient_atan2(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_atanh(t_Gradient *self);
        static PyObject *t_Gradient_cbrt(t_Gradient *self);
        static PyObject *t_Gradient_ceil(t_Gradient *self);
        static PyObject *t_Gradient_compose(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_constant(PyTypeObject *type, PyObject *args);
        static PyObject *t_Gradient_copySign(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_cos(t_Gradient *self);
        static PyObject *t_Gradient_cosh(t_Gradient *self);
        static PyObject *t_Gradient_divide(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_equals(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_exp(t_Gradient *self);
        static PyObject *t_Gradient_expm1(t_Gradient *self);
        static PyObject *t_Gradient_floor(t_Gradient *self);
        static PyObject *t_Gradient_getExponent(t_Gradient *self);
        static PyObject *t_Gradient_getField(t_Gradient *self);
        static PyObject *t_Gradient_getFreeParameters(t_Gradient *self);
        static PyObject *t_Gradient_getGradient(t_Gradient *self);
        static PyObject *t_Gradient_getOrder(t_Gradient *self);
        static PyObject *t_Gradient_getPartialDerivative(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_getPi(t_Gradient *self);
        static PyObject *t_Gradient_getReal(t_Gradient *self);
        static PyObject *t_Gradient_getValue(t_Gradient *self);
        static PyObject *t_Gradient_hashCode(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_hypot(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_linearCombination(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_log(t_Gradient *self);
        static PyObject *t_Gradient_log10(t_Gradient *self);
        static PyObject *t_Gradient_log1p(t_Gradient *self);
        static PyObject *t_Gradient_multiply(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_negate(t_Gradient *self);
        static PyObject *t_Gradient_newInstance(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_pow(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_Gradient_reciprocal(t_Gradient *self);
        static PyObject *t_Gradient_remainder(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_rint(t_Gradient *self);
        static PyObject *t_Gradient_rootN(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_scalb(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_sign(t_Gradient *self);
        static PyObject *t_Gradient_sin(t_Gradient *self);
        static PyObject *t_Gradient_sinCos(t_Gradient *self);
        static PyObject *t_Gradient_sinh(t_Gradient *self);
        static PyObject *t_Gradient_sinhCosh(t_Gradient *self);
        static PyObject *t_Gradient_sqrt(t_Gradient *self);
        static PyObject *t_Gradient_subtract(t_Gradient *self, PyObject *args);
        static PyObject *t_Gradient_tan(t_Gradient *self);
        static PyObject *t_Gradient_tanh(t_Gradient *self);
        static PyObject *t_Gradient_taylor(t_Gradient *self, PyObject *arg);
        static PyObject *t_Gradient_toDegrees(t_Gradient *self);
        static PyObject *t_Gradient_toDerivativeStructure(t_Gradient *self);
        static PyObject *t_Gradient_toRadians(t_Gradient *self);
        static PyObject *t_Gradient_ulp(t_Gradient *self);
        static PyObject *t_Gradient_variable(PyTypeObject *type, PyObject *args);
        static PyObject *t_Gradient_get__exponent(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__field(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__freeParameters(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__gradient(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__order(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__pi(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__real(t_Gradient *self, void *data);
        static PyObject *t_Gradient_get__value(t_Gradient *self, void *data);
        static PyGetSetDef t_Gradient__fields_[] = {
          DECLARE_GET_FIELD(t_Gradient, exponent),
          DECLARE_GET_FIELD(t_Gradient, field),
          DECLARE_GET_FIELD(t_Gradient, freeParameters),
          DECLARE_GET_FIELD(t_Gradient, gradient),
          DECLARE_GET_FIELD(t_Gradient, order),
          DECLARE_GET_FIELD(t_Gradient, pi),
          DECLARE_GET_FIELD(t_Gradient, real),
          DECLARE_GET_FIELD(t_Gradient, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Gradient__methods_[] = {
          DECLARE_METHOD(t_Gradient, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gradient, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Gradient, abs, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, acos, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, acosh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, add, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, asin, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, asinh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, atan, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, atan2, METH_O),
          DECLARE_METHOD(t_Gradient, atanh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, cbrt, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, ceil, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, compose, METH_O),
          DECLARE_METHOD(t_Gradient, constant, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Gradient, copySign, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, cos, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, cosh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, divide, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, equals, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, exp, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, expm1, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, floor, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getExponent, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getField, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getFreeParameters, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getGradient, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getPartialDerivative, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, getPi, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getReal, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, getValue, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, hypot, METH_O),
          DECLARE_METHOD(t_Gradient, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, log, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, log10, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, log1p, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, multiply, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, negate, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, newInstance, METH_O),
          DECLARE_METHOD(t_Gradient, pow, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Gradient, reciprocal, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, remainder, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, rint, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, rootN, METH_O),
          DECLARE_METHOD(t_Gradient, scalb, METH_O),
          DECLARE_METHOD(t_Gradient, sign, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sin, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sinCos, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sinh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sinhCosh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, sqrt, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, subtract, METH_VARARGS),
          DECLARE_METHOD(t_Gradient, tan, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, tanh, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, taylor, METH_O),
          DECLARE_METHOD(t_Gradient, toDegrees, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, toDerivativeStructure, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, toRadians, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, ulp, METH_NOARGS),
          DECLARE_METHOD(t_Gradient, variable, METH_VARARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Gradient)[] = {
          { Py_tp_methods, t_Gradient__methods_ },
          { Py_tp_init, (void *) t_Gradient_init_ },
          { Py_tp_getset, t_Gradient__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Gradient)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Gradient, t_Gradient, Gradient);

        void t_Gradient::install(PyObject *module)
        {
          installType(&PY_TYPE(Gradient), &PY_TYPE_DEF(Gradient), module, "Gradient", 0);
        }

        void t_Gradient::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gradient), "class_", make_descriptor(Gradient::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gradient), "wrapfn_", make_descriptor(t_Gradient::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Gradient), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Gradient_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Gradient::initializeClass, 1)))
            return NULL;
          return t_Gradient::wrap_Object(Gradient(((t_Gradient *) arg)->object.this$));
        }
        static PyObject *t_Gradient_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Gradient::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Gradient_init_(t_Gradient *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::DerivativeStructure a0((jobject) NULL);
              Gradient object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
              {
                INT_CALL(object = Gradient(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              Gradient object((jobject) NULL);

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                INT_CALL(object = Gradient(a0, a1));
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

        static PyObject *t_Gradient_abs(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.abs());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_acos(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acos());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_acosh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.acosh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_add(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "add", args);
          return NULL;
        }

        static PyObject *t_Gradient_asin(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asin());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_asinh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.asinh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_atan(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atan());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_atan2(t_Gradient *self, PyObject *arg)
        {
          Gradient a0((jobject) NULL);
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "k", Gradient::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "atan2", arg);
          return NULL;
        }

        static PyObject *t_Gradient_atanh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.atanh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_cbrt(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cbrt());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_ceil(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ceil());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_compose(t_Gradient *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.compose(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", arg);
          return NULL;
        }

        static PyObject *t_Gradient_constant(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jdouble a1;
          Gradient result((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::Gradient::constant(a0, a1));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "constant", args);
          return NULL;
        }

        static PyObject *t_Gradient_copySign(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "copySign", args);
          return NULL;
        }

        static PyObject *t_Gradient_cos(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cos());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_cosh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.cosh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_divide(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "divide", args);
          return NULL;
        }

        static PyObject *t_Gradient_equals(t_Gradient *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(Gradient), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_Gradient_exp(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.exp());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_expm1(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.expm1());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_floor(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.floor());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_getExponent(t_Gradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getExponent());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Gradient_getField(t_Gradient *self)
        {
          ::org::hipparchus::analysis::differentiation::GradientField result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_GradientField::wrap_Object(result);
        }

        static PyObject *t_Gradient_getFreeParameters(t_Gradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFreeParameters());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Gradient_getGradient(t_Gradient *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getGradient());
          return result.wrap();
        }

        static PyObject *t_Gradient_getOrder(t_Gradient *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Gradient_getPartialDerivative(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.getPartialDerivative(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jint a0;
              jdouble result;

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.getPartialDerivative(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialDerivative", args);
          return NULL;
        }

        static PyObject *t_Gradient_getPi(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_getReal(t_Gradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getReal());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Gradient_getValue(t_Gradient *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Gradient_hashCode(t_Gradient *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(Gradient), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_Gradient_hypot(t_Gradient *self, PyObject *arg)
        {
          Gradient a0((jobject) NULL);
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "k", Gradient::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "hypot", arg);
          return NULL;
        }

        static PyObject *t_Gradient_linearCombination(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< Gradient > a1((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "[D[k", Gradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              JArray< Gradient > a0((jobject) NULL);
              JArray< Gradient > a1((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "[k[k", Gradient::initializeClass, Gradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_Gradient::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              Gradient a0((jobject) NULL);
              Gradient a1((jobject) NULL);
              Gradient a2((jobject) NULL);
              Gradient a3((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "kkkk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient a1((jobject) NULL);
              jdouble a2;
              Gradient a3((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "DkDk", Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_Gradient::wrap_Object(result);
              }
            }
            break;
           case 6:
            {
              Gradient a0((jobject) NULL);
              Gradient a1((jobject) NULL);
              Gradient a2((jobject) NULL);
              Gradient a3((jobject) NULL);
              Gradient a4((jobject) NULL);
              Gradient a5((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "kkkkkk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient a1((jobject) NULL);
              jdouble a2;
              Gradient a3((jobject) NULL);
              jdouble a4;
              Gradient a5((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "DkDkDk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_Gradient::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              Gradient a0((jobject) NULL);
              Gradient a1((jobject) NULL);
              Gradient a2((jobject) NULL);
              Gradient a3((jobject) NULL);
              Gradient a4((jobject) NULL);
              Gradient a5((jobject) NULL);
              Gradient a6((jobject) NULL);
              Gradient a7((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient a1((jobject) NULL);
              jdouble a2;
              Gradient a3((jobject) NULL);
              jdouble a4;
              Gradient a5((jobject) NULL);
              jdouble a6;
              Gradient a7((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "DkDkDkDk", Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, Gradient::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
          return NULL;
        }

        static PyObject *t_Gradient_log(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_log10(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log10());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_log1p(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.log1p());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_multiply(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jint a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "multiply", args);
          return NULL;
        }

        static PyObject *t_Gradient_negate(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.negate());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_newInstance(t_Gradient *self, PyObject *arg)
        {
          jdouble a0;
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
          return NULL;
        }

        static PyObject *t_Gradient_pow(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jint a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pow", args);
          return NULL;
        }

        static PyObject *t_Gradient_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          Gradient a1((jobject) NULL);
          Gradient result((jobject) NULL);

          if (!parseArgs(args, "Dk", Gradient::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::Gradient::pow(a0, a1));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_Gradient_reciprocal(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.reciprocal());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_remainder(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "remainder", args);
          return NULL;
        }

        static PyObject *t_Gradient_rint(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.rint());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_rootN(t_Gradient *self, PyObject *arg)
        {
          jint a0;
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "rootN", arg);
          return NULL;
        }

        static PyObject *t_Gradient_scalb(t_Gradient *self, PyObject *arg)
        {
          jint a0;
          Gradient result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "scalb", arg);
          return NULL;
        }

        static PyObject *t_Gradient_sign(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sign());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_sin(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sin());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_sinCos(t_Gradient *self)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
          OBJ_CALL(result = self->object.sinCos());
          return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_Gradient_sinh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sinh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_sinhCosh(t_Gradient *self)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
          OBJ_CALL(result = self->object.sinhCosh());
          return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
        }

        static PyObject *t_Gradient_sqrt(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.sqrt());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_subtract(t_Gradient *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              Gradient a0((jobject) NULL);
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "k", Gradient::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
            {
              jdouble a0;
              Gradient result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_Gradient::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "subtract", args);
          return NULL;
        }

        static PyObject *t_Gradient_tan(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tan());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_tanh(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.tanh());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_taylor(t_Gradient *self, PyObject *arg)
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

        static PyObject *t_Gradient_toDegrees(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toDegrees());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_toDerivativeStructure(t_Gradient *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.toDerivativeStructure());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_Gradient_toRadians(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.toRadians());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_ulp(t_Gradient *self)
        {
          Gradient result((jobject) NULL);
          OBJ_CALL(result = self->object.ulp());
          return t_Gradient::wrap_Object(result);
        }

        static PyObject *t_Gradient_variable(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble a2;
          Gradient result((jobject) NULL);

          if (!parseArgs(args, "IID", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::Gradient::variable(a0, a1, a2));
            return t_Gradient::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "variable", args);
          return NULL;
        }

        static PyObject *t_Gradient_get__exponent(t_Gradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Gradient_get__field(t_Gradient *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::GradientField value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_GradientField::wrap_Object(value);
        }

        static PyObject *t_Gradient_get__freeParameters(t_Gradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeParameters());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Gradient_get__gradient(t_Gradient *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getGradient());
          return value.wrap();
        }

        static PyObject *t_Gradient_get__order(t_Gradient *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Gradient_get__pi(t_Gradient *self, void *data)
        {
          Gradient value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_Gradient::wrap_Object(value);
        }

        static PyObject *t_Gradient_get__real(t_Gradient *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Gradient_get__value(t_Gradient *self, void *data)
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
#include "org/orekit/data/SimpleTimeStampedTableParser$RowConverter.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *SimpleTimeStampedTableParser$RowConverter::class$ = NULL;
      jmethodID *SimpleTimeStampedTableParser$RowConverter::mids$ = NULL;
      bool SimpleTimeStampedTableParser$RowConverter::live$ = false;

      jclass SimpleTimeStampedTableParser$RowConverter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/SimpleTimeStampedTableParser$RowConverter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_convert_a343645103cbfbac] = env->getMethodID(cls, "convert", "([D)Lorg/orekit/time/TimeStamped;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::TimeStamped SimpleTimeStampedTableParser$RowConverter::convert(const JArray< jdouble > & a0) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_convert_a343645103cbfbac], a0.this$));
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
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_of_(t_SimpleTimeStampedTableParser$RowConverter *self, PyObject *args);
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_convert(t_SimpleTimeStampedTableParser$RowConverter *self, PyObject *arg);
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_get__parameters_(t_SimpleTimeStampedTableParser$RowConverter *self, void *data);
      static PyGetSetDef t_SimpleTimeStampedTableParser$RowConverter__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleTimeStampedTableParser$RowConverter, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleTimeStampedTableParser$RowConverter__methods_[] = {
        DECLARE_METHOD(t_SimpleTimeStampedTableParser$RowConverter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser$RowConverter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser$RowConverter, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimpleTimeStampedTableParser$RowConverter, convert, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleTimeStampedTableParser$RowConverter)[] = {
        { Py_tp_methods, t_SimpleTimeStampedTableParser$RowConverter__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SimpleTimeStampedTableParser$RowConverter__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleTimeStampedTableParser$RowConverter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SimpleTimeStampedTableParser$RowConverter, t_SimpleTimeStampedTableParser$RowConverter, SimpleTimeStampedTableParser$RowConverter);
      PyObject *t_SimpleTimeStampedTableParser$RowConverter::wrap_Object(const SimpleTimeStampedTableParser$RowConverter& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleTimeStampedTableParser$RowConverter::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleTimeStampedTableParser$RowConverter *self = (t_SimpleTimeStampedTableParser$RowConverter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimpleTimeStampedTableParser$RowConverter::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleTimeStampedTableParser$RowConverter::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleTimeStampedTableParser$RowConverter *self = (t_SimpleTimeStampedTableParser$RowConverter *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimpleTimeStampedTableParser$RowConverter::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleTimeStampedTableParser$RowConverter), &PY_TYPE_DEF(SimpleTimeStampedTableParser$RowConverter), module, "SimpleTimeStampedTableParser$RowConverter", 0);
      }

      void t_SimpleTimeStampedTableParser$RowConverter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser$RowConverter), "class_", make_descriptor(SimpleTimeStampedTableParser$RowConverter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser$RowConverter), "wrapfn_", make_descriptor(t_SimpleTimeStampedTableParser$RowConverter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleTimeStampedTableParser$RowConverter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleTimeStampedTableParser$RowConverter::initializeClass, 1)))
          return NULL;
        return t_SimpleTimeStampedTableParser$RowConverter::wrap_Object(SimpleTimeStampedTableParser$RowConverter(((t_SimpleTimeStampedTableParser$RowConverter *) arg)->object.this$));
      }
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleTimeStampedTableParser$RowConverter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_of_(t_SimpleTimeStampedTableParser$RowConverter *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_convert(t_SimpleTimeStampedTableParser$RowConverter *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        ::org::orekit::time::TimeStamped result((jobject) NULL);

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.convert(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "convert", arg);
        return NULL;
      }
      static PyObject *t_SimpleTimeStampedTableParser$RowConverter_get__parameters_(t_SimpleTimeStampedTableParser$RowConverter *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeVectorFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeVectorFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeVectorFunction::class$ = NULL;
      jmethodID *PythonTimeVectorFunction::mids$ = NULL;
      bool PythonTimeVectorFunction::live$ = false;

      jclass PythonTimeVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_2b9aa40de0a696a4] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)[D");
          mids$[mid_value_1d12c7a27955163b] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeVectorFunction::PythonTimeVectorFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonTimeVectorFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonTimeVectorFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonTimeVectorFunction::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonTimeVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeVectorFunction_init_(t_PythonTimeVectorFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeVectorFunction_finalize(t_PythonTimeVectorFunction *self);
      static PyObject *t_PythonTimeVectorFunction_pythonExtension(t_PythonTimeVectorFunction *self, PyObject *args);
      static void JNICALL t_PythonTimeVectorFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonTimeVectorFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTimeVectorFunction_value2(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonTimeVectorFunction_get__self(t_PythonTimeVectorFunction *self, void *data);
      static PyGetSetDef t_PythonTimeVectorFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeVectorFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeVectorFunction__methods_[] = {
        DECLARE_METHOD(t_PythonTimeVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeVectorFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeVectorFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeVectorFunction)[] = {
        { Py_tp_methods, t_PythonTimeVectorFunction__methods_ },
        { Py_tp_init, (void *) t_PythonTimeVectorFunction_init_ },
        { Py_tp_getset, t_PythonTimeVectorFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeVectorFunction, t_PythonTimeVectorFunction, PythonTimeVectorFunction);

      void t_PythonTimeVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeVectorFunction), &PY_TYPE_DEF(PythonTimeVectorFunction), module, "PythonTimeVectorFunction", 1);
      }

      void t_PythonTimeVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeVectorFunction), "class_", make_descriptor(PythonTimeVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeVectorFunction), "wrapfn_", make_descriptor(t_PythonTimeVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeVectorFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeVectorFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonTimeVectorFunction_pythonDecRef0 },
          { "value", "(Lorg/orekit/time/AbsoluteDate;)[D", (void *) t_PythonTimeVectorFunction_value1 },
          { "value", "(Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonTimeVectorFunction_value2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonTimeVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeVectorFunction::initializeClass, 1)))
          return NULL;
        return t_PythonTimeVectorFunction::wrap_Object(PythonTimeVectorFunction(((t_PythonTimeVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeVectorFunction_init_(t_PythonTimeVectorFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeVectorFunction object((jobject) NULL);

        INT_CALL(object = PythonTimeVectorFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeVectorFunction_finalize(t_PythonTimeVectorFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeVectorFunction_pythonExtension(t_PythonTimeVectorFunction *self, PyObject *args)
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

      static void JNICALL t_PythonTimeVectorFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeVectorFunction::mids$[PythonTimeVectorFunction::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeVectorFunction::mids$[PythonTimeVectorFunction::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonTimeVectorFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeVectorFunction::mids$[PythonTimeVectorFunction::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< jdouble > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
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

      static jobject JNICALL t_PythonTimeVectorFunction_value2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeVectorFunction::mids$[PythonTimeVectorFunction::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
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

      static PyObject *t_PythonTimeVectorFunction_get__self(t_PythonTimeVectorFunction *self, void *data)
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
#include "java/util/function/IntConsumer.h"
#include "java/util/function/IntConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace function {

      ::java::lang::Class *IntConsumer::class$ = NULL;
      jmethodID *IntConsumer::mids$ = NULL;
      bool IntConsumer::live$ = false;

      jclass IntConsumer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/function/IntConsumer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_accept_99803b0791f320ff] = env->getMethodID(cls, "accept", "(I)V");
          mids$[mid_andThen_5d30ea6f2e7770e3] = env->getMethodID(cls, "andThen", "(Ljava/util/function/IntConsumer;)Ljava/util/function/IntConsumer;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void IntConsumer::accept(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_accept_99803b0791f320ff], a0);
      }

      IntConsumer IntConsumer::andThen(const IntConsumer & a0) const
      {
        return IntConsumer(env->callObjectMethod(this$, mids$[mid_andThen_5d30ea6f2e7770e3], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace function {
      static PyObject *t_IntConsumer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntConsumer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IntConsumer_accept(t_IntConsumer *self, PyObject *arg);
      static PyObject *t_IntConsumer_andThen(t_IntConsumer *self, PyObject *arg);

      static PyMethodDef t_IntConsumer__methods_[] = {
        DECLARE_METHOD(t_IntConsumer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntConsumer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IntConsumer, accept, METH_O),
        DECLARE_METHOD(t_IntConsumer, andThen, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IntConsumer)[] = {
        { Py_tp_methods, t_IntConsumer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IntConsumer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IntConsumer, t_IntConsumer, IntConsumer);

      void t_IntConsumer::install(PyObject *module)
      {
        installType(&PY_TYPE(IntConsumer), &PY_TYPE_DEF(IntConsumer), module, "IntConsumer", 0);
      }

      void t_IntConsumer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntConsumer), "class_", make_descriptor(IntConsumer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntConsumer), "wrapfn_", make_descriptor(t_IntConsumer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IntConsumer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IntConsumer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IntConsumer::initializeClass, 1)))
          return NULL;
        return t_IntConsumer::wrap_Object(IntConsumer(((t_IntConsumer *) arg)->object.this$));
      }
      static PyObject *t_IntConsumer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IntConsumer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IntConsumer_accept(t_IntConsumer *self, PyObject *arg)
      {
        jint a0;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(self->object.accept(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "accept", arg);
        return NULL;
      }

      static PyObject *t_IntConsumer_andThen(t_IntConsumer *self, PyObject *arg)
      {
        IntConsumer a0((jobject) NULL);
        IntConsumer result((jobject) NULL);

        if (!parseArg(arg, "k", IntConsumer::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.andThen(a0));
          return t_IntConsumer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "andThen", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/common/ClockCorrection.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace common {

            ::java::lang::Class *ClockCorrection::class$ = NULL;
            jmethodID *ClockCorrection::mids$ = NULL;
            bool ClockCorrection::live$ = false;

            jclass ClockCorrection::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/common/ClockCorrection");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_2c56b6dd4d4b1dec] = env->getMethodID(cls, "<init>", "(DDD)V");
                mids$[mid_getDeltaClockC0_dff5885c2c873297] = env->getMethodID(cls, "getDeltaClockC0", "()D");
                mids$[mid_getDeltaClockC1_dff5885c2c873297] = env->getMethodID(cls, "getDeltaClockC1", "()D");
                mids$[mid_getDeltaClockC2_dff5885c2c873297] = env->getMethodID(cls, "getDeltaClockC2", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ClockCorrection::ClockCorrection(jdouble a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c56b6dd4d4b1dec, a0, a1, a2)) {}

            jdouble ClockCorrection::getDeltaClockC0() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaClockC0_dff5885c2c873297]);
            }

            jdouble ClockCorrection::getDeltaClockC1() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaClockC1_dff5885c2c873297]);
            }

            jdouble ClockCorrection::getDeltaClockC2() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDeltaClockC2_dff5885c2c873297]);
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
            static PyObject *t_ClockCorrection_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ClockCorrection_instance_(PyTypeObject *type, PyObject *arg);
            static int t_ClockCorrection_init_(t_ClockCorrection *self, PyObject *args, PyObject *kwds);
            static PyObject *t_ClockCorrection_getDeltaClockC0(t_ClockCorrection *self);
            static PyObject *t_ClockCorrection_getDeltaClockC1(t_ClockCorrection *self);
            static PyObject *t_ClockCorrection_getDeltaClockC2(t_ClockCorrection *self);
            static PyObject *t_ClockCorrection_get__deltaClockC0(t_ClockCorrection *self, void *data);
            static PyObject *t_ClockCorrection_get__deltaClockC1(t_ClockCorrection *self, void *data);
            static PyObject *t_ClockCorrection_get__deltaClockC2(t_ClockCorrection *self, void *data);
            static PyGetSetDef t_ClockCorrection__fields_[] = {
              DECLARE_GET_FIELD(t_ClockCorrection, deltaClockC0),
              DECLARE_GET_FIELD(t_ClockCorrection, deltaClockC1),
              DECLARE_GET_FIELD(t_ClockCorrection, deltaClockC2),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ClockCorrection__methods_[] = {
              DECLARE_METHOD(t_ClockCorrection, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ClockCorrection, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ClockCorrection, getDeltaClockC0, METH_NOARGS),
              DECLARE_METHOD(t_ClockCorrection, getDeltaClockC1, METH_NOARGS),
              DECLARE_METHOD(t_ClockCorrection, getDeltaClockC2, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ClockCorrection)[] = {
              { Py_tp_methods, t_ClockCorrection__methods_ },
              { Py_tp_init, (void *) t_ClockCorrection_init_ },
              { Py_tp_getset, t_ClockCorrection__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ClockCorrection)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ClockCorrection, t_ClockCorrection, ClockCorrection);

            void t_ClockCorrection::install(PyObject *module)
            {
              installType(&PY_TYPE(ClockCorrection), &PY_TYPE_DEF(ClockCorrection), module, "ClockCorrection", 0);
            }

            void t_ClockCorrection::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrection), "class_", make_descriptor(ClockCorrection::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrection), "wrapfn_", make_descriptor(t_ClockCorrection::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ClockCorrection), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ClockCorrection_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ClockCorrection::initializeClass, 1)))
                return NULL;
              return t_ClockCorrection::wrap_Object(ClockCorrection(((t_ClockCorrection *) arg)->object.this$));
            }
            static PyObject *t_ClockCorrection_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ClockCorrection::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_ClockCorrection_init_(t_ClockCorrection *self, PyObject *args, PyObject *kwds)
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              ClockCorrection object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = ClockCorrection(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_ClockCorrection_getDeltaClockC0(t_ClockCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaClockC0());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ClockCorrection_getDeltaClockC1(t_ClockCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaClockC1());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ClockCorrection_getDeltaClockC2(t_ClockCorrection *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getDeltaClockC2());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_ClockCorrection_get__deltaClockC0(t_ClockCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaClockC0());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_ClockCorrection_get__deltaClockC1(t_ClockCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaClockC1());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_ClockCorrection_get__deltaClockC2(t_ClockCorrection *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getDeltaClockC2());
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
#include "org/orekit/propagation/PythonFieldAdditionalStateProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/FieldAdditionalStateProvider.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonFieldAdditionalStateProvider::class$ = NULL;
      jmethodID *PythonFieldAdditionalStateProvider::mids$ = NULL;
      bool PythonFieldAdditionalStateProvider::live$ = false;

      jclass PythonFieldAdditionalStateProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonFieldAdditionalStateProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalState_567ea49d447f98c8] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/FieldSpacecraftState;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_yield_1b0abd4f90ebd0eb] = env->getMethodID(cls, "yield", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");
          mids$[mid_yield__1b0abd4f90ebd0eb] = env->getMethodID(cls, "yield_", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldAdditionalStateProvider::PythonFieldAdditionalStateProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonFieldAdditionalStateProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonFieldAdditionalStateProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonFieldAdditionalStateProvider::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
      }

      jboolean PythonFieldAdditionalStateProvider::yield(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_yield_1b0abd4f90ebd0eb], a0.this$);
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
      static PyObject *t_PythonFieldAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldAdditionalStateProvider_of_(t_PythonFieldAdditionalStateProvider *self, PyObject *args);
      static int t_PythonFieldAdditionalStateProvider_init_(t_PythonFieldAdditionalStateProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldAdditionalStateProvider_finalize(t_PythonFieldAdditionalStateProvider *self);
      static PyObject *t_PythonFieldAdditionalStateProvider_pythonExtension(t_PythonFieldAdditionalStateProvider *self, PyObject *args);
      static PyObject *t_PythonFieldAdditionalStateProvider_yield(t_PythonFieldAdditionalStateProvider *self, PyObject *arg);
      static jobject JNICALL t_PythonFieldAdditionalStateProvider_getAdditionalState0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFieldAdditionalStateProvider_getName1(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldAdditionalStateProvider_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldAdditionalStateProvider_pythonDecRef3(JNIEnv *jenv, jobject jobj);
      static jboolean JNICALL t_PythonFieldAdditionalStateProvider_yield_4(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldAdditionalStateProvider_get__self(t_PythonFieldAdditionalStateProvider *self, void *data);
      static PyObject *t_PythonFieldAdditionalStateProvider_get__parameters_(t_PythonFieldAdditionalStateProvider *self, void *data);
      static PyGetSetDef t_PythonFieldAdditionalStateProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldAdditionalStateProvider, self),
        DECLARE_GET_FIELD(t_PythonFieldAdditionalStateProvider, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldAdditionalStateProvider__methods_[] = {
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, pythonExtension, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldAdditionalStateProvider, yield, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldAdditionalStateProvider)[] = {
        { Py_tp_methods, t_PythonFieldAdditionalStateProvider__methods_ },
        { Py_tp_init, (void *) t_PythonFieldAdditionalStateProvider_init_ },
        { Py_tp_getset, t_PythonFieldAdditionalStateProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldAdditionalStateProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldAdditionalStateProvider, t_PythonFieldAdditionalStateProvider, PythonFieldAdditionalStateProvider);
      PyObject *t_PythonFieldAdditionalStateProvider::wrap_Object(const PythonFieldAdditionalStateProvider& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldAdditionalStateProvider::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldAdditionalStateProvider *self = (t_PythonFieldAdditionalStateProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PythonFieldAdditionalStateProvider::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PythonFieldAdditionalStateProvider::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldAdditionalStateProvider *self = (t_PythonFieldAdditionalStateProvider *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PythonFieldAdditionalStateProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldAdditionalStateProvider), &PY_TYPE_DEF(PythonFieldAdditionalStateProvider), module, "PythonFieldAdditionalStateProvider", 1);
      }

      void t_PythonFieldAdditionalStateProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalStateProvider), "class_", make_descriptor(PythonFieldAdditionalStateProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalStateProvider), "wrapfn_", make_descriptor(t_PythonFieldAdditionalStateProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldAdditionalStateProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldAdditionalStateProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "getAdditionalState", "(Lorg/orekit/propagation/FieldSpacecraftState;)[Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonFieldAdditionalStateProvider_getAdditionalState0 },
          { "getName", "()Ljava/lang/String;", (void *) t_PythonFieldAdditionalStateProvider_getName1 },
          { "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V", (void *) t_PythonFieldAdditionalStateProvider_init2 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldAdditionalStateProvider_pythonDecRef3 },
          { "yield_", "(Lorg/orekit/propagation/FieldSpacecraftState;)Z", (void *) t_PythonFieldAdditionalStateProvider_yield_4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldAdditionalStateProvider::initializeClass, 1)))
          return NULL;
        return t_PythonFieldAdditionalStateProvider::wrap_Object(PythonFieldAdditionalStateProvider(((t_PythonFieldAdditionalStateProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldAdditionalStateProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldAdditionalStateProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_of_(t_PythonFieldAdditionalStateProvider *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldAdditionalStateProvider_init_(t_PythonFieldAdditionalStateProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldAdditionalStateProvider object((jobject) NULL);

        INT_CALL(object = PythonFieldAdditionalStateProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_finalize(t_PythonFieldAdditionalStateProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_pythonExtension(t_PythonFieldAdditionalStateProvider *self, PyObject *args)
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

      static PyObject *t_PythonFieldAdditionalStateProvider_yield(t_PythonFieldAdditionalStateProvider *self, PyObject *arg)
      {
        ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean result;

        if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
        {
          OBJ_CALL(result = self->object.yield(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "yield", arg);
        return NULL;
      }

      static jobject JNICALL t_PythonFieldAdditionalStateProvider_getAdditionalState0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("getAdditionalState", result);
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

      static jobject JNICALL t_PythonFieldAdditionalStateProvider_getName1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_492808a339bfa35f]);
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

      static void JNICALL t_PythonFieldAdditionalStateProvider_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *o1 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "init", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonFieldAdditionalStateProvider_pythonDecRef3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jboolean JNICALL t_PythonFieldAdditionalStateProvider_yield_4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldAdditionalStateProvider::mids$[PythonFieldAdditionalStateProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "yield_", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("yield_", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static PyObject *t_PythonFieldAdditionalStateProvider_get__self(t_PythonFieldAdditionalStateProvider *self, void *data)
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
      static PyObject *t_PythonFieldAdditionalStateProvider_get__parameters_(t_PythonFieldAdditionalStateProvider *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfLogs.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/summary/SumOfLogs.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          ::java::lang::Class *SumOfLogs::class$ = NULL;
          jmethodID *SumOfLogs::mids$ = NULL;
          bool SumOfLogs::live$ = false;

          jclass SumOfLogs::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/summary/SumOfLogs");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_b873a77489eff3da] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/summary/SumOfLogs;)V");
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_a52e9a87e240d410] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/summary/SumOfLogs;");
              mids$[mid_evaluate_556bede10daac330] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_dff5885c2c873297] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_17db3a65980d3441] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SumOfLogs::SumOfLogs() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void SumOfLogs::aggregate(const SumOfLogs & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_b873a77489eff3da], a0.this$);
          }

          void SumOfLogs::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
          }

          SumOfLogs SumOfLogs::copy() const
          {
            return SumOfLogs(env->callObjectMethod(this$, mids$[mid_copy_a52e9a87e240d410]));
          }

          jdouble SumOfLogs::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_556bede10daac330], a0.this$, a1, a2);
          }

          jlong SumOfLogs::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
          }

          jdouble SumOfLogs::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_dff5885c2c873297]);
          }

          void SumOfLogs::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_17db3a65980d3441], a0);
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
    namespace stat {
      namespace descriptive {
        namespace summary {
          static PyObject *t_SumOfLogs_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SumOfLogs_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SumOfLogs_init_(t_SumOfLogs *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SumOfLogs_aggregate(t_SumOfLogs *self, PyObject *arg);
          static PyObject *t_SumOfLogs_clear(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_copy(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_evaluate(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_getN(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_getResult(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_increment(t_SumOfLogs *self, PyObject *args);
          static PyObject *t_SumOfLogs_get__n(t_SumOfLogs *self, void *data);
          static PyObject *t_SumOfLogs_get__result(t_SumOfLogs *self, void *data);
          static PyGetSetDef t_SumOfLogs__fields_[] = {
            DECLARE_GET_FIELD(t_SumOfLogs, n),
            DECLARE_GET_FIELD(t_SumOfLogs, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SumOfLogs__methods_[] = {
            DECLARE_METHOD(t_SumOfLogs, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SumOfLogs, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SumOfLogs, aggregate, METH_O),
            DECLARE_METHOD(t_SumOfLogs, clear, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, copy, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, getN, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, getResult, METH_VARARGS),
            DECLARE_METHOD(t_SumOfLogs, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SumOfLogs)[] = {
            { Py_tp_methods, t_SumOfLogs__methods_ },
            { Py_tp_init, (void *) t_SumOfLogs_init_ },
            { Py_tp_getset, t_SumOfLogs__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SumOfLogs)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(SumOfLogs, t_SumOfLogs, SumOfLogs);

          void t_SumOfLogs::install(PyObject *module)
          {
            installType(&PY_TYPE(SumOfLogs), &PY_TYPE_DEF(SumOfLogs), module, "SumOfLogs", 0);
          }

          void t_SumOfLogs::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfLogs), "class_", make_descriptor(SumOfLogs::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfLogs), "wrapfn_", make_descriptor(t_SumOfLogs::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SumOfLogs), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SumOfLogs_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SumOfLogs::initializeClass, 1)))
              return NULL;
            return t_SumOfLogs::wrap_Object(SumOfLogs(((t_SumOfLogs *) arg)->object.this$));
          }
          static PyObject *t_SumOfLogs_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SumOfLogs::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SumOfLogs_init_(t_SumOfLogs *self, PyObject *args, PyObject *kwds)
          {
            SumOfLogs object((jobject) NULL);

            INT_CALL(object = SumOfLogs());
            self->object = object;

            return 0;
          }

          static PyObject *t_SumOfLogs_aggregate(t_SumOfLogs *self, PyObject *arg)
          {
            SumOfLogs a0((jobject) NULL);

            if (!parseArg(arg, "k", SumOfLogs::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_SumOfLogs_clear(t_SumOfLogs *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_SumOfLogs_copy(t_SumOfLogs *self, PyObject *args)
          {
            SumOfLogs result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_SumOfLogs::wrap_Object(result);
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_SumOfLogs_evaluate(t_SumOfLogs *self, PyObject *args)
          {
            JArray< jdouble > a0((jobject) NULL);
            jint a1;
            jint a2;
            jdouble result;

            if (!parseArgs(args, "[DII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.evaluate(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_SumOfLogs_getN(t_SumOfLogs *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_SumOfLogs_getResult(t_SumOfLogs *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_SumOfLogs_increment(t_SumOfLogs *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(SumOfLogs), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_SumOfLogs_get__n(t_SumOfLogs *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_SumOfLogs_get__result(t_SumOfLogs *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getResult());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *MeasurementDecorator::class$ = NULL;
        jmethodID *MeasurementDecorator::mids$ = NULL;
        bool MeasurementDecorator::live$ = false;

        jclass MeasurementDecorator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/MeasurementDecorator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_68b85a591bc859cc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/linear/RealMatrix;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_getCovariance_688b496048ff947b] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getObservedMeasurement_744f33e0abf11bf9] = env->getMethodID(cls, "getObservedMeasurement", "()Lorg/orekit/estimation/measurements/ObservedMeasurement;");
            mids$[mid_getTime_dff5885c2c873297] = env->getMethodID(cls, "getTime", "()D");
            mids$[mid_getValue_aab4fbf77867daa8] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/linear/RealVector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MeasurementDecorator::MeasurementDecorator(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::linear::RealMatrix & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_68b85a591bc859cc, a0.this$, a1.this$, a2.this$)) {}

        ::org::hipparchus::linear::RealMatrix MeasurementDecorator::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_688b496048ff947b]));
        }

        ::org::orekit::estimation::measurements::ObservedMeasurement MeasurementDecorator::getObservedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::ObservedMeasurement(env->callObjectMethod(this$, mids$[mid_getObservedMeasurement_744f33e0abf11bf9]));
        }

        jdouble MeasurementDecorator::getTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTime_dff5885c2c873297]);
        }

        ::org::hipparchus::linear::RealVector MeasurementDecorator::getValue() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getValue_aab4fbf77867daa8]));
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
        static PyObject *t_MeasurementDecorator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MeasurementDecorator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MeasurementDecorator_init_(t_MeasurementDecorator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MeasurementDecorator_getCovariance(t_MeasurementDecorator *self);
        static PyObject *t_MeasurementDecorator_getObservedMeasurement(t_MeasurementDecorator *self);
        static PyObject *t_MeasurementDecorator_getTime(t_MeasurementDecorator *self);
        static PyObject *t_MeasurementDecorator_getValue(t_MeasurementDecorator *self);
        static PyObject *t_MeasurementDecorator_get__covariance(t_MeasurementDecorator *self, void *data);
        static PyObject *t_MeasurementDecorator_get__observedMeasurement(t_MeasurementDecorator *self, void *data);
        static PyObject *t_MeasurementDecorator_get__time(t_MeasurementDecorator *self, void *data);
        static PyObject *t_MeasurementDecorator_get__value(t_MeasurementDecorator *self, void *data);
        static PyGetSetDef t_MeasurementDecorator__fields_[] = {
          DECLARE_GET_FIELD(t_MeasurementDecorator, covariance),
          DECLARE_GET_FIELD(t_MeasurementDecorator, observedMeasurement),
          DECLARE_GET_FIELD(t_MeasurementDecorator, time),
          DECLARE_GET_FIELD(t_MeasurementDecorator, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MeasurementDecorator__methods_[] = {
          DECLARE_METHOD(t_MeasurementDecorator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MeasurementDecorator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MeasurementDecorator, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_MeasurementDecorator, getObservedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_MeasurementDecorator, getTime, METH_NOARGS),
          DECLARE_METHOD(t_MeasurementDecorator, getValue, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MeasurementDecorator)[] = {
          { Py_tp_methods, t_MeasurementDecorator__methods_ },
          { Py_tp_init, (void *) t_MeasurementDecorator_init_ },
          { Py_tp_getset, t_MeasurementDecorator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MeasurementDecorator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MeasurementDecorator, t_MeasurementDecorator, MeasurementDecorator);

        void t_MeasurementDecorator::install(PyObject *module)
        {
          installType(&PY_TYPE(MeasurementDecorator), &PY_TYPE_DEF(MeasurementDecorator), module, "MeasurementDecorator", 0);
        }

        void t_MeasurementDecorator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementDecorator), "class_", make_descriptor(MeasurementDecorator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementDecorator), "wrapfn_", make_descriptor(t_MeasurementDecorator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MeasurementDecorator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MeasurementDecorator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MeasurementDecorator::initializeClass, 1)))
            return NULL;
          return t_MeasurementDecorator::wrap_Object(MeasurementDecorator(((t_MeasurementDecorator *) arg)->object.this$));
        }
        static PyObject *t_MeasurementDecorator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MeasurementDecorator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MeasurementDecorator_init_(t_MeasurementDecorator *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          MeasurementDecorator object((jobject) NULL);

          if (!parseArgs(args, "Kkk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1, &a2))
          {
            INT_CALL(object = MeasurementDecorator(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MeasurementDecorator_getCovariance(t_MeasurementDecorator *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_MeasurementDecorator_getObservedMeasurement(t_MeasurementDecorator *self)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getObservedMeasurement());
          return ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(result);
        }

        static PyObject *t_MeasurementDecorator_getTime(t_MeasurementDecorator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MeasurementDecorator_getValue(t_MeasurementDecorator *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getValue());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_MeasurementDecorator_get__covariance(t_MeasurementDecorator *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_MeasurementDecorator_get__observedMeasurement(t_MeasurementDecorator *self, void *data)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getObservedMeasurement());
          return ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(value);
        }

        static PyObject *t_MeasurementDecorator_get__time(t_MeasurementDecorator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTime());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_MeasurementDecorator_get__value(t_MeasurementDecorator *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/FieldEphemerisGenerator.h"
#include "org/orekit/propagation/FieldBoundedPropagator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldEphemerisGenerator::class$ = NULL;
      jmethodID *FieldEphemerisGenerator::mids$ = NULL;
      bool FieldEphemerisGenerator::live$ = false;

      jclass FieldEphemerisGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldEphemerisGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getGeneratedEphemeris_a5b4612f864868f8] = env->getMethodID(cls, "getGeneratedEphemeris", "()Lorg/orekit/propagation/FieldBoundedPropagator;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::propagation::FieldBoundedPropagator FieldEphemerisGenerator::getGeneratedEphemeris() const
      {
        return ::org::orekit::propagation::FieldBoundedPropagator(env->callObjectMethod(this$, mids$[mid_getGeneratedEphemeris_a5b4612f864868f8]));
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
      static PyObject *t_FieldEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEphemerisGenerator_of_(t_FieldEphemerisGenerator *self, PyObject *args);
      static PyObject *t_FieldEphemerisGenerator_getGeneratedEphemeris(t_FieldEphemerisGenerator *self);
      static PyObject *t_FieldEphemerisGenerator_get__generatedEphemeris(t_FieldEphemerisGenerator *self, void *data);
      static PyObject *t_FieldEphemerisGenerator_get__parameters_(t_FieldEphemerisGenerator *self, void *data);
      static PyGetSetDef t_FieldEphemerisGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldEphemerisGenerator, generatedEphemeris),
        DECLARE_GET_FIELD(t_FieldEphemerisGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldEphemerisGenerator__methods_[] = {
        DECLARE_METHOD(t_FieldEphemerisGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEphemerisGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEphemerisGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldEphemerisGenerator, getGeneratedEphemeris, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldEphemerisGenerator)[] = {
        { Py_tp_methods, t_FieldEphemerisGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldEphemerisGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldEphemerisGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldEphemerisGenerator, t_FieldEphemerisGenerator, FieldEphemerisGenerator);
      PyObject *t_FieldEphemerisGenerator::wrap_Object(const FieldEphemerisGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEphemerisGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEphemerisGenerator *self = (t_FieldEphemerisGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldEphemerisGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEphemerisGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEphemerisGenerator *self = (t_FieldEphemerisGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldEphemerisGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldEphemerisGenerator), &PY_TYPE_DEF(FieldEphemerisGenerator), module, "FieldEphemerisGenerator", 0);
      }

      void t_FieldEphemerisGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEphemerisGenerator), "class_", make_descriptor(FieldEphemerisGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEphemerisGenerator), "wrapfn_", make_descriptor(t_FieldEphemerisGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEphemerisGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldEphemerisGenerator::initializeClass, 1)))
          return NULL;
        return t_FieldEphemerisGenerator::wrap_Object(FieldEphemerisGenerator(((t_FieldEphemerisGenerator *) arg)->object.this$));
      }
      static PyObject *t_FieldEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldEphemerisGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldEphemerisGenerator_of_(t_FieldEphemerisGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldEphemerisGenerator_getGeneratedEphemeris(t_FieldEphemerisGenerator *self)
      {
        ::org::orekit::propagation::FieldBoundedPropagator result((jobject) NULL);
        OBJ_CALL(result = self->object.getGeneratedEphemeris());
        return ::org::orekit::propagation::t_FieldBoundedPropagator::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldEphemerisGenerator_get__parameters_(t_FieldEphemerisGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldEphemerisGenerator_get__generatedEphemeris(t_FieldEphemerisGenerator *self, void *data)
      {
        ::org::orekit::propagation::FieldBoundedPropagator value((jobject) NULL);
        OBJ_CALL(value = self->object.getGeneratedEphemeris());
        return ::org::orekit::propagation::t_FieldBoundedPropagator::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance$Direction.h"
#include "org/hipparchus/stat/descriptive/moment/SemiVariance$Direction.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace moment {

          ::java::lang::Class *SemiVariance$Direction::class$ = NULL;
          jmethodID *SemiVariance$Direction::mids$ = NULL;
          bool SemiVariance$Direction::live$ = false;
          SemiVariance$Direction *SemiVariance$Direction::DOWNSIDE = NULL;
          SemiVariance$Direction *SemiVariance$Direction::UPSIDE = NULL;

          jclass SemiVariance$Direction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/moment/SemiVariance$Direction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_49b8ea7599d58688] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;");
              mids$[mid_values_a91e0e5bbc0692ab] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DOWNSIDE = new SemiVariance$Direction(env->getStaticObjectField(cls, "DOWNSIDE", "Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;"));
              UPSIDE = new SemiVariance$Direction(env->getStaticObjectField(cls, "UPSIDE", "Lorg/hipparchus/stat/descriptive/moment/SemiVariance$Direction;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SemiVariance$Direction SemiVariance$Direction::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return SemiVariance$Direction(env->callStaticObjectMethod(cls, mids$[mid_valueOf_49b8ea7599d58688], a0.this$));
          }

          JArray< SemiVariance$Direction > SemiVariance$Direction::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< SemiVariance$Direction >(env->callStaticObjectMethod(cls, mids$[mid_values_a91e0e5bbc0692ab]));
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
    namespace stat {
      namespace descriptive {
        namespace moment {
          static PyObject *t_SemiVariance$Direction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SemiVariance$Direction_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SemiVariance$Direction_of_(t_SemiVariance$Direction *self, PyObject *args);
          static PyObject *t_SemiVariance$Direction_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_SemiVariance$Direction_values(PyTypeObject *type);
          static PyObject *t_SemiVariance$Direction_get__parameters_(t_SemiVariance$Direction *self, void *data);
          static PyGetSetDef t_SemiVariance$Direction__fields_[] = {
            DECLARE_GET_FIELD(t_SemiVariance$Direction, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SemiVariance$Direction__methods_[] = {
            DECLARE_METHOD(t_SemiVariance$Direction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance$Direction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance$Direction, of_, METH_VARARGS),
            DECLARE_METHOD(t_SemiVariance$Direction, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_SemiVariance$Direction, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SemiVariance$Direction)[] = {
            { Py_tp_methods, t_SemiVariance$Direction__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SemiVariance$Direction__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SemiVariance$Direction)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(SemiVariance$Direction, t_SemiVariance$Direction, SemiVariance$Direction);
          PyObject *t_SemiVariance$Direction::wrap_Object(const SemiVariance$Direction& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SemiVariance$Direction::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SemiVariance$Direction *self = (t_SemiVariance$Direction *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_SemiVariance$Direction::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_SemiVariance$Direction::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_SemiVariance$Direction *self = (t_SemiVariance$Direction *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_SemiVariance$Direction::install(PyObject *module)
          {
            installType(&PY_TYPE(SemiVariance$Direction), &PY_TYPE_DEF(SemiVariance$Direction), module, "SemiVariance$Direction", 0);
          }

          void t_SemiVariance$Direction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "class_", make_descriptor(SemiVariance$Direction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "wrapfn_", make_descriptor(t_SemiVariance$Direction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "boxfn_", make_descriptor(boxObject));
            env->getClass(SemiVariance$Direction::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "DOWNSIDE", make_descriptor(t_SemiVariance$Direction::wrap_Object(*SemiVariance$Direction::DOWNSIDE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SemiVariance$Direction), "UPSIDE", make_descriptor(t_SemiVariance$Direction::wrap_Object(*SemiVariance$Direction::UPSIDE)));
          }

          static PyObject *t_SemiVariance$Direction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SemiVariance$Direction::initializeClass, 1)))
              return NULL;
            return t_SemiVariance$Direction::wrap_Object(SemiVariance$Direction(((t_SemiVariance$Direction *) arg)->object.this$));
          }
          static PyObject *t_SemiVariance$Direction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SemiVariance$Direction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SemiVariance$Direction_of_(t_SemiVariance$Direction *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_SemiVariance$Direction_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            SemiVariance$Direction result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::valueOf(a0));
              return t_SemiVariance$Direction::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_SemiVariance$Direction_values(PyTypeObject *type)
          {
            JArray< SemiVariance$Direction > result((jobject) NULL);
            OBJ_CALL(result = ::org::hipparchus::stat::descriptive::moment::SemiVariance$Direction::values());
            return JArray<jobject>(result.this$).wrap(t_SemiVariance$Direction::wrap_jobject);
          }
          static PyObject *t_SemiVariance$Direction_get__parameters_(t_SemiVariance$Direction *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadataKey.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmMetadataKey::class$ = NULL;
            jmethodID *CdmMetadataKey::mids$ = NULL;
            bool CdmMetadataKey::live$ = false;
            CdmMetadataKey *CdmMetadataKey::ADM_MSG_LINK = NULL;
            CdmMetadataKey *CdmMetadataKey::ALT_COV_REF_FRAME = NULL;
            CdmMetadataKey *CdmMetadataKey::ALT_COV_TYPE = NULL;
            CdmMetadataKey *CdmMetadataKey::ATMOSPHERIC_MODEL = NULL;
            CdmMetadataKey *CdmMetadataKey::CATALOG_NAME = NULL;
            CdmMetadataKey *CdmMetadataKey::COVARIANCE_METHOD = NULL;
            CdmMetadataKey *CdmMetadataKey::COVARIANCE_SOURCE = NULL;
            CdmMetadataKey *CdmMetadataKey::EARTH_TIDES = NULL;
            CdmMetadataKey *CdmMetadataKey::EPHEMERIS_NAME = NULL;
            CdmMetadataKey *CdmMetadataKey::GRAVITY_MODEL = NULL;
            CdmMetadataKey *CdmMetadataKey::INTERNATIONAL_DESIGNATOR = NULL;
            CdmMetadataKey *CdmMetadataKey::INTRACK_THRUST = NULL;
            CdmMetadataKey *CdmMetadataKey::MANEUVERABLE = NULL;
            CdmMetadataKey *CdmMetadataKey::N_BODY_PERTURBATIONS = NULL;
            CdmMetadataKey *CdmMetadataKey::OBJECT = NULL;
            CdmMetadataKey *CdmMetadataKey::OBJECT_DESIGNATOR = NULL;
            CdmMetadataKey *CdmMetadataKey::OBJECT_NAME = NULL;
            CdmMetadataKey *CdmMetadataKey::OBJECT_TYPE = NULL;
            CdmMetadataKey *CdmMetadataKey::OBS_BEFORE_NEXT_MESSAGE = NULL;
            CdmMetadataKey *CdmMetadataKey::ODM_MSG_LINK = NULL;
            CdmMetadataKey *CdmMetadataKey::OPERATOR_CONTACT_POSITION = NULL;
            CdmMetadataKey *CdmMetadataKey::OPERATOR_EMAIL = NULL;
            CdmMetadataKey *CdmMetadataKey::OPERATOR_ORGANIZATION = NULL;
            CdmMetadataKey *CdmMetadataKey::OPERATOR_PHONE = NULL;
            CdmMetadataKey *CdmMetadataKey::ORBIT_CENTER = NULL;
            CdmMetadataKey *CdmMetadataKey::REF_FRAME = NULL;
            CdmMetadataKey *CdmMetadataKey::SOLAR_RAD_PRESSURE = NULL;

            jclass CdmMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_cee5cd7c20970f69] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;)Z");
                mids$[mid_valueOf_f6271b7b29ee6546] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;");
                mids$[mid_values_bce12cf01bac7900] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ADM_MSG_LINK = new CdmMetadataKey(env->getStaticObjectField(cls, "ADM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ALT_COV_REF_FRAME = new CdmMetadataKey(env->getStaticObjectField(cls, "ALT_COV_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ALT_COV_TYPE = new CdmMetadataKey(env->getStaticObjectField(cls, "ALT_COV_TYPE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ATMOSPHERIC_MODEL = new CdmMetadataKey(env->getStaticObjectField(cls, "ATMOSPHERIC_MODEL", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                CATALOG_NAME = new CdmMetadataKey(env->getStaticObjectField(cls, "CATALOG_NAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                COVARIANCE_METHOD = new CdmMetadataKey(env->getStaticObjectField(cls, "COVARIANCE_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                COVARIANCE_SOURCE = new CdmMetadataKey(env->getStaticObjectField(cls, "COVARIANCE_SOURCE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                EARTH_TIDES = new CdmMetadataKey(env->getStaticObjectField(cls, "EARTH_TIDES", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                EPHEMERIS_NAME = new CdmMetadataKey(env->getStaticObjectField(cls, "EPHEMERIS_NAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                GRAVITY_MODEL = new CdmMetadataKey(env->getStaticObjectField(cls, "GRAVITY_MODEL", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                INTERNATIONAL_DESIGNATOR = new CdmMetadataKey(env->getStaticObjectField(cls, "INTERNATIONAL_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                INTRACK_THRUST = new CdmMetadataKey(env->getStaticObjectField(cls, "INTRACK_THRUST", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                MANEUVERABLE = new CdmMetadataKey(env->getStaticObjectField(cls, "MANEUVERABLE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                N_BODY_PERTURBATIONS = new CdmMetadataKey(env->getStaticObjectField(cls, "N_BODY_PERTURBATIONS", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBJECT = new CdmMetadataKey(env->getStaticObjectField(cls, "OBJECT", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBJECT_DESIGNATOR = new CdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_DESIGNATOR", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBJECT_NAME = new CdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_NAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBJECT_TYPE = new CdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_TYPE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OBS_BEFORE_NEXT_MESSAGE = new CdmMetadataKey(env->getStaticObjectField(cls, "OBS_BEFORE_NEXT_MESSAGE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ODM_MSG_LINK = new CdmMetadataKey(env->getStaticObjectField(cls, "ODM_MSG_LINK", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OPERATOR_CONTACT_POSITION = new CdmMetadataKey(env->getStaticObjectField(cls, "OPERATOR_CONTACT_POSITION", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OPERATOR_EMAIL = new CdmMetadataKey(env->getStaticObjectField(cls, "OPERATOR_EMAIL", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OPERATOR_ORGANIZATION = new CdmMetadataKey(env->getStaticObjectField(cls, "OPERATOR_ORGANIZATION", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                OPERATOR_PHONE = new CdmMetadataKey(env->getStaticObjectField(cls, "OPERATOR_PHONE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                ORBIT_CENTER = new CdmMetadataKey(env->getStaticObjectField(cls, "ORBIT_CENTER", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                REF_FRAME = new CdmMetadataKey(env->getStaticObjectField(cls, "REF_FRAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                SOLAR_RAD_PRESSURE = new CdmMetadataKey(env->getStaticObjectField(cls, "SOLAR_RAD_PRESSURE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CdmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_cee5cd7c20970f69], a0.this$, a1.this$, a2.this$);
            }

            CdmMetadataKey CdmMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CdmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f6271b7b29ee6546], a0.this$));
            }

            JArray< CdmMetadataKey > CdmMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CdmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_bce12cf01bac7900]));
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
            static PyObject *t_CdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmMetadataKey_of_(t_CdmMetadataKey *self, PyObject *args);
            static PyObject *t_CdmMetadataKey_process(t_CdmMetadataKey *self, PyObject *args);
            static PyObject *t_CdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CdmMetadataKey_values(PyTypeObject *type);
            static PyObject *t_CdmMetadataKey_get__parameters_(t_CdmMetadataKey *self, void *data);
            static PyGetSetDef t_CdmMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_CdmMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmMetadataKey__methods_[] = {
              DECLARE_METHOD(t_CdmMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CdmMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CdmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CdmMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmMetadataKey)[] = {
              { Py_tp_methods, t_CdmMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CdmMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CdmMetadataKey, t_CdmMetadataKey, CdmMetadataKey);
            PyObject *t_CdmMetadataKey::wrap_Object(const CdmMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmMetadataKey *self = (t_CdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CdmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmMetadataKey *self = (t_CdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CdmMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmMetadataKey), &PY_TYPE_DEF(CdmMetadataKey), module, "CdmMetadataKey", 0);
            }

            void t_CdmMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "class_", make_descriptor(CdmMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "wrapfn_", make_descriptor(t_CdmMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ADM_MSG_LINK", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ADM_MSG_LINK)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ALT_COV_REF_FRAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ALT_COV_REF_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ALT_COV_TYPE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ALT_COV_TYPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ATMOSPHERIC_MODEL", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ATMOSPHERIC_MODEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "CATALOG_NAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::CATALOG_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "COVARIANCE_METHOD", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::COVARIANCE_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "COVARIANCE_SOURCE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::COVARIANCE_SOURCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "EARTH_TIDES", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::EARTH_TIDES)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "EPHEMERIS_NAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::EPHEMERIS_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "GRAVITY_MODEL", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::GRAVITY_MODEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "INTERNATIONAL_DESIGNATOR", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::INTERNATIONAL_DESIGNATOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "INTRACK_THRUST", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::INTRACK_THRUST)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "MANEUVERABLE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::MANEUVERABLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "N_BODY_PERTURBATIONS", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::N_BODY_PERTURBATIONS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBJECT", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBJECT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBJECT_DESIGNATOR", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBJECT_DESIGNATOR)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBJECT_NAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBJECT_NAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBJECT_TYPE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBJECT_TYPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OBS_BEFORE_NEXT_MESSAGE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OBS_BEFORE_NEXT_MESSAGE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ODM_MSG_LINK", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ODM_MSG_LINK)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OPERATOR_CONTACT_POSITION", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OPERATOR_CONTACT_POSITION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OPERATOR_EMAIL", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OPERATOR_EMAIL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OPERATOR_ORGANIZATION", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OPERATOR_ORGANIZATION)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "OPERATOR_PHONE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::OPERATOR_PHONE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "ORBIT_CENTER", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::ORBIT_CENTER)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "REF_FRAME", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::REF_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmMetadataKey), "SOLAR_RAD_PRESSURE", make_descriptor(t_CdmMetadataKey::wrap_Object(*CdmMetadataKey::SOLAR_RAD_PRESSURE)));
            }

            static PyObject *t_CdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmMetadataKey::initializeClass, 1)))
                return NULL;
              return t_CdmMetadataKey::wrap_Object(CdmMetadataKey(((t_CdmMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_CdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmMetadataKey_of_(t_CdmMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CdmMetadataKey_process(t_CdmMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CdmMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmMetadataKey::valueOf(a0));
                return t_CdmMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CdmMetadataKey_values(PyTypeObject *type)
            {
              JArray< CdmMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_CdmMetadataKey::wrap_jobject);
            }
            static PyObject *t_CdmMetadataKey_get__parameters_(t_CdmMetadataKey *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmSatelliteEphemeris::class$ = NULL;
              jmethodID *AcmSatelliteEphemeris::mids$ = NULL;
              bool AcmSatelliteEphemeris::live$ = false;

              jclass AcmSatelliteEphemeris::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmSatelliteEphemeris");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_91fd4e71827f714e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/util/List;)V");
                  mids$[mid_getId_11b109bd155ca898] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getSegments_2afa36052df4765d] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
                  mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmSatelliteEphemeris::AcmSatelliteEphemeris(const ::java::lang::String & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_91fd4e71827f714e, a0.this$, a1.this$)) {}

              ::java::lang::String AcmSatelliteEphemeris::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_11b109bd155ca898]));
              }

              ::java::util::List AcmSatelliteEphemeris::getSegments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_2afa36052df4765d]));
              }

              ::org::orekit::time::AbsoluteDate AcmSatelliteEphemeris::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate AcmSatelliteEphemeris::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_85703d13e302437e]));
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
              static PyObject *t_AcmSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AcmSatelliteEphemeris_init_(t_AcmSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AcmSatelliteEphemeris_getId(t_AcmSatelliteEphemeris *self);
              static PyObject *t_AcmSatelliteEphemeris_getSegments(t_AcmSatelliteEphemeris *self);
              static PyObject *t_AcmSatelliteEphemeris_getStart(t_AcmSatelliteEphemeris *self);
              static PyObject *t_AcmSatelliteEphemeris_getStop(t_AcmSatelliteEphemeris *self);
              static PyObject *t_AcmSatelliteEphemeris_get__id(t_AcmSatelliteEphemeris *self, void *data);
              static PyObject *t_AcmSatelliteEphemeris_get__segments(t_AcmSatelliteEphemeris *self, void *data);
              static PyObject *t_AcmSatelliteEphemeris_get__start(t_AcmSatelliteEphemeris *self, void *data);
              static PyObject *t_AcmSatelliteEphemeris_get__stop(t_AcmSatelliteEphemeris *self, void *data);
              static PyGetSetDef t_AcmSatelliteEphemeris__fields_[] = {
                DECLARE_GET_FIELD(t_AcmSatelliteEphemeris, id),
                DECLARE_GET_FIELD(t_AcmSatelliteEphemeris, segments),
                DECLARE_GET_FIELD(t_AcmSatelliteEphemeris, start),
                DECLARE_GET_FIELD(t_AcmSatelliteEphemeris, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmSatelliteEphemeris__methods_[] = {
                DECLARE_METHOD(t_AcmSatelliteEphemeris, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmSatelliteEphemeris, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmSatelliteEphemeris, getId, METH_NOARGS),
                DECLARE_METHOD(t_AcmSatelliteEphemeris, getSegments, METH_NOARGS),
                DECLARE_METHOD(t_AcmSatelliteEphemeris, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AcmSatelliteEphemeris, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmSatelliteEphemeris)[] = {
                { Py_tp_methods, t_AcmSatelliteEphemeris__methods_ },
                { Py_tp_init, (void *) t_AcmSatelliteEphemeris_init_ },
                { Py_tp_getset, t_AcmSatelliteEphemeris__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmSatelliteEphemeris)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AcmSatelliteEphemeris, t_AcmSatelliteEphemeris, AcmSatelliteEphemeris);

              void t_AcmSatelliteEphemeris::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmSatelliteEphemeris), &PY_TYPE_DEF(AcmSatelliteEphemeris), module, "AcmSatelliteEphemeris", 0);
              }

              void t_AcmSatelliteEphemeris::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmSatelliteEphemeris), "class_", make_descriptor(AcmSatelliteEphemeris::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmSatelliteEphemeris), "wrapfn_", make_descriptor(t_AcmSatelliteEphemeris::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AcmSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmSatelliteEphemeris::initializeClass, 1)))
                  return NULL;
                return t_AcmSatelliteEphemeris::wrap_Object(AcmSatelliteEphemeris(((t_AcmSatelliteEphemeris *) arg)->object.this$));
              }
              static PyObject *t_AcmSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmSatelliteEphemeris::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AcmSatelliteEphemeris_init_(t_AcmSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                AcmSatelliteEphemeris object((jobject) NULL);

                if (!parseArgs(args, "sK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = AcmSatelliteEphemeris(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AcmSatelliteEphemeris_getId(t_AcmSatelliteEphemeris *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_AcmSatelliteEphemeris_getSegments(t_AcmSatelliteEphemeris *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeStateHistory));
              }

              static PyObject *t_AcmSatelliteEphemeris_getStart(t_AcmSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmSatelliteEphemeris_getStop(t_AcmSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmSatelliteEphemeris_get__id(t_AcmSatelliteEphemeris *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }

              static PyObject *t_AcmSatelliteEphemeris_get__segments(t_AcmSatelliteEphemeris *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AcmSatelliteEphemeris_get__start(t_AcmSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AcmSatelliteEphemeris_get__stop(t_AcmSatelliteEphemeris *self, void *data)
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
#include "org/orekit/models/earth/ionosphere/KlobucharIonoCoefficientsLoader.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace ionosphere {

          ::java::lang::Class *KlobucharIonoCoefficientsLoader::class$ = NULL;
          jmethodID *KlobucharIonoCoefficientsLoader::mids$ = NULL;
          bool KlobucharIonoCoefficientsLoader::live$ = false;
          ::java::lang::String *KlobucharIonoCoefficientsLoader::DEFAULT_SUPPORTED_NAMES = NULL;

          jclass KlobucharIonoCoefficientsLoader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/ionosphere/KlobucharIonoCoefficientsLoader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
              mids$[mid_init$_63232a42a5419b09] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
              mids$[mid_getAlpha_60c7040667a7dc5c] = env->getMethodID(cls, "getAlpha", "()[D");
              mids$[mid_getBeta_60c7040667a7dc5c] = env->getMethodID(cls, "getBeta", "()[D");
              mids$[mid_getSupportedNames_11b109bd155ca898] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
              mids$[mid_loadData_1815f85c118161ad] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
              mids$[mid_loadKlobucharIonosphericCoefficients_0fa09c18fee449d5] = env->getMethodID(cls, "loadKlobucharIonosphericCoefficients", "()V");
              mids$[mid_loadKlobucharIonosphericCoefficients_56dc33c3871b1cb7] = env->getMethodID(cls, "loadKlobucharIonosphericCoefficients", "(Lorg/orekit/time/DateComponents;)V");
              mids$[mid_stillAcceptsData_b108b35ef48e27bd] = env->getMethodID(cls, "stillAcceptsData", "()Z");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_SUPPORTED_NAMES = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_SUPPORTED_NAMES", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          KlobucharIonoCoefficientsLoader::KlobucharIonoCoefficientsLoader() : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          KlobucharIonoCoefficientsLoader::KlobucharIonoCoefficientsLoader(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

          KlobucharIonoCoefficientsLoader::KlobucharIonoCoefficientsLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_63232a42a5419b09, a0.this$, a1.this$)) {}

          JArray< jdouble > KlobucharIonoCoefficientsLoader::getAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAlpha_60c7040667a7dc5c]));
          }

          JArray< jdouble > KlobucharIonoCoefficientsLoader::getBeta() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getBeta_60c7040667a7dc5c]));
          }

          ::java::lang::String KlobucharIonoCoefficientsLoader::getSupportedNames() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_11b109bd155ca898]));
          }

          void KlobucharIonoCoefficientsLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_1815f85c118161ad], a0.this$, a1.this$);
          }

          void KlobucharIonoCoefficientsLoader::loadKlobucharIonosphericCoefficients() const
          {
            env->callVoidMethod(this$, mids$[mid_loadKlobucharIonosphericCoefficients_0fa09c18fee449d5]);
          }

          void KlobucharIonoCoefficientsLoader::loadKlobucharIonosphericCoefficients(const ::org::orekit::time::DateComponents & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_loadKlobucharIonosphericCoefficients_56dc33c3871b1cb7], a0.this$);
          }

          jboolean KlobucharIonoCoefficientsLoader::stillAcceptsData() const
          {
            return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_b108b35ef48e27bd]);
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
          static PyObject *t_KlobucharIonoCoefficientsLoader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_KlobucharIonoCoefficientsLoader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_KlobucharIonoCoefficientsLoader_init_(t_KlobucharIonoCoefficientsLoader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_KlobucharIonoCoefficientsLoader_getAlpha(t_KlobucharIonoCoefficientsLoader *self);
          static PyObject *t_KlobucharIonoCoefficientsLoader_getBeta(t_KlobucharIonoCoefficientsLoader *self);
          static PyObject *t_KlobucharIonoCoefficientsLoader_getSupportedNames(t_KlobucharIonoCoefficientsLoader *self);
          static PyObject *t_KlobucharIonoCoefficientsLoader_loadData(t_KlobucharIonoCoefficientsLoader *self, PyObject *args);
          static PyObject *t_KlobucharIonoCoefficientsLoader_loadKlobucharIonosphericCoefficients(t_KlobucharIonoCoefficientsLoader *self, PyObject *args);
          static PyObject *t_KlobucharIonoCoefficientsLoader_stillAcceptsData(t_KlobucharIonoCoefficientsLoader *self);
          static PyObject *t_KlobucharIonoCoefficientsLoader_get__alpha(t_KlobucharIonoCoefficientsLoader *self, void *data);
          static PyObject *t_KlobucharIonoCoefficientsLoader_get__beta(t_KlobucharIonoCoefficientsLoader *self, void *data);
          static PyObject *t_KlobucharIonoCoefficientsLoader_get__supportedNames(t_KlobucharIonoCoefficientsLoader *self, void *data);
          static PyGetSetDef t_KlobucharIonoCoefficientsLoader__fields_[] = {
            DECLARE_GET_FIELD(t_KlobucharIonoCoefficientsLoader, alpha),
            DECLARE_GET_FIELD(t_KlobucharIonoCoefficientsLoader, beta),
            DECLARE_GET_FIELD(t_KlobucharIonoCoefficientsLoader, supportedNames),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_KlobucharIonoCoefficientsLoader__methods_[] = {
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, getAlpha, METH_NOARGS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, getBeta, METH_NOARGS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, getSupportedNames, METH_NOARGS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, loadData, METH_VARARGS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, loadKlobucharIonosphericCoefficients, METH_VARARGS),
            DECLARE_METHOD(t_KlobucharIonoCoefficientsLoader, stillAcceptsData, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(KlobucharIonoCoefficientsLoader)[] = {
            { Py_tp_methods, t_KlobucharIonoCoefficientsLoader__methods_ },
            { Py_tp_init, (void *) t_KlobucharIonoCoefficientsLoader_init_ },
            { Py_tp_getset, t_KlobucharIonoCoefficientsLoader__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(KlobucharIonoCoefficientsLoader)[] = {
            &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
            NULL
          };

          DEFINE_TYPE(KlobucharIonoCoefficientsLoader, t_KlobucharIonoCoefficientsLoader, KlobucharIonoCoefficientsLoader);

          void t_KlobucharIonoCoefficientsLoader::install(PyObject *module)
          {
            installType(&PY_TYPE(KlobucharIonoCoefficientsLoader), &PY_TYPE_DEF(KlobucharIonoCoefficientsLoader), module, "KlobucharIonoCoefficientsLoader", 0);
          }

          void t_KlobucharIonoCoefficientsLoader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoCoefficientsLoader), "class_", make_descriptor(KlobucharIonoCoefficientsLoader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoCoefficientsLoader), "wrapfn_", make_descriptor(t_KlobucharIonoCoefficientsLoader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoCoefficientsLoader), "boxfn_", make_descriptor(boxObject));
            env->getClass(KlobucharIonoCoefficientsLoader::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(KlobucharIonoCoefficientsLoader), "DEFAULT_SUPPORTED_NAMES", make_descriptor(j2p(*KlobucharIonoCoefficientsLoader::DEFAULT_SUPPORTED_NAMES)));
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, KlobucharIonoCoefficientsLoader::initializeClass, 1)))
              return NULL;
            return t_KlobucharIonoCoefficientsLoader::wrap_Object(KlobucharIonoCoefficientsLoader(((t_KlobucharIonoCoefficientsLoader *) arg)->object.this$));
          }
          static PyObject *t_KlobucharIonoCoefficientsLoader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, KlobucharIonoCoefficientsLoader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_KlobucharIonoCoefficientsLoader_init_(t_KlobucharIonoCoefficientsLoader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                KlobucharIonoCoefficientsLoader object((jobject) NULL);

                INT_CALL(object = KlobucharIonoCoefficientsLoader());
                self->object = object;
                break;
              }
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                KlobucharIonoCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  INT_CALL(object = KlobucharIonoCoefficientsLoader(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
                KlobucharIonoCoefficientsLoader object((jobject) NULL);

                if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = KlobucharIonoCoefficientsLoader(a0, a1));
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

          static PyObject *t_KlobucharIonoCoefficientsLoader_getAlpha(t_KlobucharIonoCoefficientsLoader *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlpha());
            return result.wrap();
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_getBeta(t_KlobucharIonoCoefficientsLoader *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getBeta());
            return result.wrap();
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_getSupportedNames(t_KlobucharIonoCoefficientsLoader *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSupportedNames());
            return j2p(result);
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_loadData(t_KlobucharIonoCoefficientsLoader *self, PyObject *args)
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

          static PyObject *t_KlobucharIonoCoefficientsLoader_loadKlobucharIonosphericCoefficients(t_KlobucharIonoCoefficientsLoader *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                OBJ_CALL(self->object.loadKlobucharIonosphericCoefficients());
                Py_RETURN_NONE;
              }
              break;
             case 1:
              {
                ::org::orekit::time::DateComponents a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::DateComponents::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.loadKlobucharIonosphericCoefficients(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "loadKlobucharIonosphericCoefficients", args);
            return NULL;
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_stillAcceptsData(t_KlobucharIonoCoefficientsLoader *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.stillAcceptsData());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_get__alpha(t_KlobucharIonoCoefficientsLoader *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlpha());
            return value.wrap();
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_get__beta(t_KlobucharIonoCoefficientsLoader *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getBeta());
            return value.wrap();
          }

          static PyObject *t_KlobucharIonoCoefficientsLoader_get__supportedNames(t_KlobucharIonoCoefficientsLoader *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSupportedNames());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/RangeRate.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *RangeRate::class$ = NULL;
        jmethodID *RangeRate::mids$ = NULL;
        bool RangeRate::live$ = false;
        ::java::lang::String *RangeRate::MEASUREMENT_TYPE = NULL;

        jclass RangeRate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/RangeRate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ca22cc422827aa5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDZLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_27ef5cc84ad0852b] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RangeRate::RangeRate(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jdouble a3, jdouble a4, jboolean a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_8ca22cc422827aa5, a0.this$, a1.this$, a2, a3, a4, a5, a6.this$)) {}
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
        static PyObject *t_RangeRate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RangeRate_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RangeRate_of_(t_RangeRate *self, PyObject *args);
        static int t_RangeRate_init_(t_RangeRate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RangeRate_get__parameters_(t_RangeRate *self, void *data);
        static PyGetSetDef t_RangeRate__fields_[] = {
          DECLARE_GET_FIELD(t_RangeRate, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RangeRate__methods_[] = {
          DECLARE_METHOD(t_RangeRate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RangeRate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RangeRate, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RangeRate)[] = {
          { Py_tp_methods, t_RangeRate__methods_ },
          { Py_tp_init, (void *) t_RangeRate_init_ },
          { Py_tp_getset, t_RangeRate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RangeRate)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(RangeRate, t_RangeRate, RangeRate);
        PyObject *t_RangeRate::wrap_Object(const RangeRate& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RangeRate::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RangeRate *self = (t_RangeRate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_RangeRate::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_RangeRate::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_RangeRate *self = (t_RangeRate *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_RangeRate::install(PyObject *module)
        {
          installType(&PY_TYPE(RangeRate), &PY_TYPE_DEF(RangeRate), module, "RangeRate", 0);
        }

        void t_RangeRate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRate), "class_", make_descriptor(RangeRate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRate), "wrapfn_", make_descriptor(t_RangeRate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRate), "boxfn_", make_descriptor(boxObject));
          env->getClass(RangeRate::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RangeRate), "MEASUREMENT_TYPE", make_descriptor(j2p(*RangeRate::MEASUREMENT_TYPE)));
        }

        static PyObject *t_RangeRate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RangeRate::initializeClass, 1)))
            return NULL;
          return t_RangeRate::wrap_Object(RangeRate(((t_RangeRate *) arg)->object.this$));
        }
        static PyObject *t_RangeRate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RangeRate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RangeRate_of_(t_RangeRate *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_RangeRate_init_(t_RangeRate *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          jdouble a4;
          jboolean a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          RangeRate object((jobject) NULL);

          if (!parseArgs(args, "kkDDDZk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = RangeRate(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(RangeRate);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_RangeRate_get__parameters_(t_RangeRate *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/errors/RuggedException.h"
#include "org/hipparchus/exception/LocalizedException.h"
#include "java/util/Locale.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *RuggedException::class$ = NULL;
        jmethodID *RuggedException::mids$ = NULL;
        bool RuggedException::live$ = false;

        jclass RuggedException::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/RuggedException");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d0cf82c16a7e8751] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
            mids$[mid_init$_6ecc3fd6067c266c] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
            mids$[mid_getLocalizedMessage_11b109bd155ca898] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
            mids$[mid_getMessage_11b109bd155ca898] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
            mids$[mid_getMessage_3cd873bfb132c4fd] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
            mids$[mid_getParts_b93c730013ce64c6] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
            mids$[mid_getSpecifier_517615caa9b88a24] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedException::RuggedException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_d0cf82c16a7e8751, a0.this$, a1.this$)) {}

        RuggedException::RuggedException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::java::lang::RuntimeException(env->newObject(initializeClass, &mids$, mid_init$_6ecc3fd6067c266c, a0.this$, a1.this$, a2.this$)) {}

        ::java::lang::String RuggedException::getLocalizedMessage() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_11b109bd155ca898]));
        }

        ::java::lang::String RuggedException::getMessage() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_11b109bd155ca898]));
        }

        ::java::lang::String RuggedException::getMessage(const ::java::util::Locale & a0) const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cd873bfb132c4fd], a0.this$));
        }

        JArray< ::java::lang::Object > RuggedException::getParts() const
        {
          return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_b93c730013ce64c6]));
        }

        ::org::hipparchus::exception::Localizable RuggedException::getSpecifier() const
        {
          return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_517615caa9b88a24]));
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
      namespace errors {
        static PyObject *t_RuggedException_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedException_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RuggedException_init_(t_RuggedException *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedException_getLocalizedMessage(t_RuggedException *self, PyObject *args);
        static PyObject *t_RuggedException_getMessage(t_RuggedException *self, PyObject *args);
        static PyObject *t_RuggedException_getParts(t_RuggedException *self);
        static PyObject *t_RuggedException_getSpecifier(t_RuggedException *self);
        static PyObject *t_RuggedException_get__localizedMessage(t_RuggedException *self, void *data);
        static PyObject *t_RuggedException_get__message(t_RuggedException *self, void *data);
        static PyObject *t_RuggedException_get__parts(t_RuggedException *self, void *data);
        static PyObject *t_RuggedException_get__specifier(t_RuggedException *self, void *data);
        static PyGetSetDef t_RuggedException__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedException, localizedMessage),
          DECLARE_GET_FIELD(t_RuggedException, message),
          DECLARE_GET_FIELD(t_RuggedException, parts),
          DECLARE_GET_FIELD(t_RuggedException, specifier),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedException__methods_[] = {
          DECLARE_METHOD(t_RuggedException, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedException, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedException, getLocalizedMessage, METH_VARARGS),
          DECLARE_METHOD(t_RuggedException, getMessage, METH_VARARGS),
          DECLARE_METHOD(t_RuggedException, getParts, METH_NOARGS),
          DECLARE_METHOD(t_RuggedException, getSpecifier, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedException)[] = {
          { Py_tp_methods, t_RuggedException__methods_ },
          { Py_tp_init, (void *) t_RuggedException_init_ },
          { Py_tp_getset, t_RuggedException__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedException)[] = {
          &PY_TYPE_DEF(::java::lang::RuntimeException),
          NULL
        };

        DEFINE_TYPE(RuggedException, t_RuggedException, RuggedException);

        void t_RuggedException::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedException), &PY_TYPE_DEF(RuggedException), module, "RuggedException", 0);
        }

        void t_RuggedException::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedException), "class_", make_descriptor(RuggedException::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedException), "wrapfn_", make_descriptor(t_RuggedException::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedException), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedException_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedException::initializeClass, 1)))
            return NULL;
          return t_RuggedException::wrap_Object(RuggedException(((t_RuggedException *) arg)->object.this$));
        }
        static PyObject *t_RuggedException_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedException::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RuggedException_init_(t_RuggedException *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::exception::Localizable a0((jobject) NULL);
              JArray< ::java::lang::Object > a1((jobject) NULL);
              RuggedException object((jobject) NULL);

              if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
              {
                INT_CALL(object = RuggedException(a0, a1));
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
              RuggedException object((jobject) NULL);

              if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = RuggedException(a0, a1, a2));
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

        static PyObject *t_RuggedException_getLocalizedMessage(t_RuggedException *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getLocalizedMessage());
            return j2p(result);
          }

          return callSuper(PY_TYPE(RuggedException), (PyObject *) self, "getLocalizedMessage", args, 2);
        }

        static PyObject *t_RuggedException_getMessage(t_RuggedException *self, PyObject *args)
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

          return callSuper(PY_TYPE(RuggedException), (PyObject *) self, "getMessage", args, 2);
        }

        static PyObject *t_RuggedException_getParts(t_RuggedException *self)
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.getParts());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }

        static PyObject *t_RuggedException_getSpecifier(t_RuggedException *self)
        {
          ::org::hipparchus::exception::Localizable result((jobject) NULL);
          OBJ_CALL(result = self->object.getSpecifier());
          return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
        }

        static PyObject *t_RuggedException_get__localizedMessage(t_RuggedException *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getLocalizedMessage());
          return j2p(value);
        }

        static PyObject *t_RuggedException_get__message(t_RuggedException *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getMessage());
          return j2p(value);
        }

        static PyObject *t_RuggedException_get__parts(t_RuggedException *self, void *data)
        {
          JArray< ::java::lang::Object > value((jobject) NULL);
          OBJ_CALL(value = self->object.getParts());
          return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }

        static PyObject *t_RuggedException_get__specifier(t_RuggedException *self, void *data)
        {
          ::org::hipparchus::exception::Localizable value((jobject) NULL);
          OBJ_CALL(value = self->object.getSpecifier());
          return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
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
            mids$[mid_init$_8911ec2fe4f4cc28] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;ILjava/lang/String;IIDDDDDDDIIIID)V");
            mids$[mid_toCrdString_11b109bd155ca898] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$CalibrationDetail::CRD$CalibrationDetail(const ::org::orekit::time::AbsoluteDate & a0, jint a1, const ::java::lang::String & a2, jint a3, jint a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jint a12, jint a13, jint a14, jint a15, jdouble a16) : ::org::orekit::files::ilrs::CRD$Calibration(env->newObject(initializeClass, &mids$, mid_init$_8911ec2fe4f4cc28, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16)) {}

        ::java::lang::String CRD$CalibrationDetail::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_11b109bd155ca898]));
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
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/util/List.h"
#include "java/io/Serializable.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *TLE::class$ = NULL;
          jmethodID *TLE::mids$ = NULL;
          bool TLE::live$ = false;
          ::java::lang::String *TLE::B_STAR = NULL;
          jint TLE::DEFAULT = (jint) 0;
          jint TLE::SDP4 = (jint) 0;
          jint TLE::SDP8 = (jint) 0;
          jint TLE::SGP = (jint) 0;
          jint TLE::SGP4 = (jint) 0;
          jint TLE::SGP8 = (jint) 0;

          jclass TLE::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/TLE");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_6a2001eff0605f71] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_6de69b758d25049e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_init$_26f3d55884b29b3a] = env->getMethodID(cls, "<init>", "(ICIILjava/lang/String;IILorg/orekit/time/AbsoluteDate;DDDDDDDDID)V");
              mids$[mid_init$_ddb6b020cef25251] = env->getMethodID(cls, "<init>", "(ICIILjava/lang/String;IILorg/orekit/time/AbsoluteDate;DDDDDDDDIDLorg/orekit/time/TimeScale;)V");
              mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_getBStar_dff5885c2c873297] = env->getMethodID(cls, "getBStar", "()D");
              mids$[mid_getBStar_bf1d7732f1acb697] = env->getMethodID(cls, "getBStar", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getClassification_7818f5b58320cd1f] = env->getMethodID(cls, "getClassification", "()C");
              mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getE_dff5885c2c873297] = env->getMethodID(cls, "getE", "()D");
              mids$[mid_getElementNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getElementNumber", "()I");
              mids$[mid_getEphemerisType_570ce0828f81a2c1] = env->getMethodID(cls, "getEphemerisType", "()I");
              mids$[mid_getI_dff5885c2c873297] = env->getMethodID(cls, "getI", "()D");
              mids$[mid_getLaunchNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getLaunchNumber", "()I");
              mids$[mid_getLaunchPiece_11b109bd155ca898] = env->getMethodID(cls, "getLaunchPiece", "()Ljava/lang/String;");
              mids$[mid_getLaunchYear_570ce0828f81a2c1] = env->getMethodID(cls, "getLaunchYear", "()I");
              mids$[mid_getLine1_11b109bd155ca898] = env->getMethodID(cls, "getLine1", "()Ljava/lang/String;");
              mids$[mid_getLine2_11b109bd155ca898] = env->getMethodID(cls, "getLine2", "()Ljava/lang/String;");
              mids$[mid_getMeanAnomaly_dff5885c2c873297] = env->getMethodID(cls, "getMeanAnomaly", "()D");
              mids$[mid_getMeanMotion_dff5885c2c873297] = env->getMethodID(cls, "getMeanMotion", "()D");
              mids$[mid_getMeanMotionFirstDerivative_dff5885c2c873297] = env->getMethodID(cls, "getMeanMotionFirstDerivative", "()D");
              mids$[mid_getMeanMotionSecondDerivative_dff5885c2c873297] = env->getMethodID(cls, "getMeanMotionSecondDerivative", "()D");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getPerigeeArgument_dff5885c2c873297] = env->getMethodID(cls, "getPerigeeArgument", "()D");
              mids$[mid_getRaan_dff5885c2c873297] = env->getMethodID(cls, "getRaan", "()D");
              mids$[mid_getRevolutionNumberAtEpoch_570ce0828f81a2c1] = env->getMethodID(cls, "getRevolutionNumberAtEpoch", "()I");
              mids$[mid_getSatelliteNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getSatelliteNumber", "()I");
              mids$[mid_getUtc_c39031284193adbe] = env->getMethodID(cls, "getUtc", "()Lorg/orekit/time/TimeScale;");
              mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isFormatOK_9365555b1308b94c] = env->getStaticMethodID(cls, "isFormatOK", "(Ljava/lang/String;Ljava/lang/String;)Z");
              mids$[mid_stateToTLE_343a1afa95f9e6f7] = env->getStaticMethodID(cls, "stateToTLE", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm;)Lorg/orekit/propagation/analytical/tle/TLE;");
              mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              B_STAR = new ::java::lang::String(env->getStaticObjectField(cls, "B_STAR", "Ljava/lang/String;"));
              DEFAULT = env->getStaticIntField(cls, "DEFAULT");
              SDP4 = env->getStaticIntField(cls, "SDP4");
              SDP8 = env->getStaticIntField(cls, "SDP8");
              SGP = env->getStaticIntField(cls, "SGP");
              SGP4 = env->getStaticIntField(cls, "SGP4");
              SGP8 = env->getStaticIntField(cls, "SGP8");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TLE::TLE(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6a2001eff0605f71, a0.this$, a1.this$)) {}

          TLE::TLE(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::time::TimeScale & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6de69b758d25049e, a0.this$, a1.this$, a2.this$)) {}

          TLE::TLE(jint a0, jchar a1, jint a2, jint a3, const ::java::lang::String & a4, jint a5, jint a6, const ::org::orekit::time::AbsoluteDate & a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14, jdouble a15, jint a16, jdouble a17) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_26f3d55884b29b3a, a0, a1, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17)) {}

          TLE::TLE(jint a0, jchar a1, jint a2, jint a3, const ::java::lang::String & a4, jint a5, jint a6, const ::org::orekit::time::AbsoluteDate & a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13, jdouble a14, jdouble a15, jint a16, jdouble a17, const ::org::orekit::time::TimeScale & a18) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ddb6b020cef25251, a0, a1, a2, a3, a4.this$, a5, a6, a7.this$, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18.this$)) {}

          jboolean TLE::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
          }

          jdouble TLE::getBStar() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBStar_dff5885c2c873297]);
          }

          jdouble TLE::getBStar(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBStar_bf1d7732f1acb697], a0.this$);
          }

          jchar TLE::getClassification() const
          {
            return env->callCharMethod(this$, mids$[mid_getClassification_7818f5b58320cd1f]);
          }

          ::org::orekit::time::AbsoluteDate TLE::getDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
          }

          jdouble TLE::getE() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getE_dff5885c2c873297]);
          }

          jint TLE::getElementNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getElementNumber_570ce0828f81a2c1]);
          }

          jint TLE::getEphemerisType() const
          {
            return env->callIntMethod(this$, mids$[mid_getEphemerisType_570ce0828f81a2c1]);
          }

          jdouble TLE::getI() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getI_dff5885c2c873297]);
          }

          jint TLE::getLaunchNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getLaunchNumber_570ce0828f81a2c1]);
          }

          ::java::lang::String TLE::getLaunchPiece() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLaunchPiece_11b109bd155ca898]));
          }

          jint TLE::getLaunchYear() const
          {
            return env->callIntMethod(this$, mids$[mid_getLaunchYear_570ce0828f81a2c1]);
          }

          ::java::lang::String TLE::getLine1() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLine1_11b109bd155ca898]));
          }

          ::java::lang::String TLE::getLine2() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLine2_11b109bd155ca898]));
          }

          jdouble TLE::getMeanAnomaly() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanAnomaly_dff5885c2c873297]);
          }

          jdouble TLE::getMeanMotion() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_dff5885c2c873297]);
          }

          jdouble TLE::getMeanMotionFirstDerivative() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanMotionFirstDerivative_dff5885c2c873297]);
          }

          jdouble TLE::getMeanMotionSecondDerivative() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMeanMotionSecondDerivative_dff5885c2c873297]);
          }

          ::java::util::List TLE::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          jdouble TLE::getPerigeeArgument() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPerigeeArgument_dff5885c2c873297]);
          }

          jdouble TLE::getRaan() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRaan_dff5885c2c873297]);
          }

          jint TLE::getRevolutionNumberAtEpoch() const
          {
            return env->callIntMethod(this$, mids$[mid_getRevolutionNumberAtEpoch_570ce0828f81a2c1]);
          }

          jint TLE::getSatelliteNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getSatelliteNumber_570ce0828f81a2c1]);
          }

          ::org::orekit::time::TimeScale TLE::getUtc() const
          {
            return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getUtc_c39031284193adbe]));
          }

          jint TLE::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
          }

          jboolean TLE::isFormatOK(const ::java::lang::String & a0, const ::java::lang::String & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticBooleanMethod(cls, mids$[mid_isFormatOK_9365555b1308b94c], a0.this$, a1.this$);
          }

          TLE TLE::stateToTLE(const ::org::orekit::propagation::SpacecraftState & a0, const TLE & a1, const ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return TLE(env->callStaticObjectMethod(cls, mids$[mid_stateToTLE_343a1afa95f9e6f7], a0.this$, a1.this$, a2.this$));
          }

          ::java::lang::String TLE::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
        namespace tle {
          static PyObject *t_TLE_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TLE_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TLE_init_(t_TLE *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TLE_equals(t_TLE *self, PyObject *args);
          static PyObject *t_TLE_getBStar(t_TLE *self, PyObject *args);
          static PyObject *t_TLE_getClassification(t_TLE *self);
          static PyObject *t_TLE_getDate(t_TLE *self);
          static PyObject *t_TLE_getE(t_TLE *self);
          static PyObject *t_TLE_getElementNumber(t_TLE *self);
          static PyObject *t_TLE_getEphemerisType(t_TLE *self);
          static PyObject *t_TLE_getI(t_TLE *self);
          static PyObject *t_TLE_getLaunchNumber(t_TLE *self);
          static PyObject *t_TLE_getLaunchPiece(t_TLE *self);
          static PyObject *t_TLE_getLaunchYear(t_TLE *self);
          static PyObject *t_TLE_getLine1(t_TLE *self);
          static PyObject *t_TLE_getLine2(t_TLE *self);
          static PyObject *t_TLE_getMeanAnomaly(t_TLE *self);
          static PyObject *t_TLE_getMeanMotion(t_TLE *self);
          static PyObject *t_TLE_getMeanMotionFirstDerivative(t_TLE *self);
          static PyObject *t_TLE_getMeanMotionSecondDerivative(t_TLE *self);
          static PyObject *t_TLE_getParametersDrivers(t_TLE *self);
          static PyObject *t_TLE_getPerigeeArgument(t_TLE *self);
          static PyObject *t_TLE_getRaan(t_TLE *self);
          static PyObject *t_TLE_getRevolutionNumberAtEpoch(t_TLE *self);
          static PyObject *t_TLE_getSatelliteNumber(t_TLE *self);
          static PyObject *t_TLE_getUtc(t_TLE *self);
          static PyObject *t_TLE_hashCode(t_TLE *self, PyObject *args);
          static PyObject *t_TLE_isFormatOK(PyTypeObject *type, PyObject *args);
          static PyObject *t_TLE_stateToTLE(PyTypeObject *type, PyObject *args);
          static PyObject *t_TLE_toString(t_TLE *self, PyObject *args);
          static PyObject *t_TLE_get__bStar(t_TLE *self, void *data);
          static PyObject *t_TLE_get__classification(t_TLE *self, void *data);
          static PyObject *t_TLE_get__date(t_TLE *self, void *data);
          static PyObject *t_TLE_get__e(t_TLE *self, void *data);
          static PyObject *t_TLE_get__elementNumber(t_TLE *self, void *data);
          static PyObject *t_TLE_get__ephemerisType(t_TLE *self, void *data);
          static PyObject *t_TLE_get__i(t_TLE *self, void *data);
          static PyObject *t_TLE_get__launchNumber(t_TLE *self, void *data);
          static PyObject *t_TLE_get__launchPiece(t_TLE *self, void *data);
          static PyObject *t_TLE_get__launchYear(t_TLE *self, void *data);
          static PyObject *t_TLE_get__line1(t_TLE *self, void *data);
          static PyObject *t_TLE_get__line2(t_TLE *self, void *data);
          static PyObject *t_TLE_get__meanAnomaly(t_TLE *self, void *data);
          static PyObject *t_TLE_get__meanMotion(t_TLE *self, void *data);
          static PyObject *t_TLE_get__meanMotionFirstDerivative(t_TLE *self, void *data);
          static PyObject *t_TLE_get__meanMotionSecondDerivative(t_TLE *self, void *data);
          static PyObject *t_TLE_get__parametersDrivers(t_TLE *self, void *data);
          static PyObject *t_TLE_get__perigeeArgument(t_TLE *self, void *data);
          static PyObject *t_TLE_get__raan(t_TLE *self, void *data);
          static PyObject *t_TLE_get__revolutionNumberAtEpoch(t_TLE *self, void *data);
          static PyObject *t_TLE_get__satelliteNumber(t_TLE *self, void *data);
          static PyObject *t_TLE_get__utc(t_TLE *self, void *data);
          static PyGetSetDef t_TLE__fields_[] = {
            DECLARE_GET_FIELD(t_TLE, bStar),
            DECLARE_GET_FIELD(t_TLE, classification),
            DECLARE_GET_FIELD(t_TLE, date),
            DECLARE_GET_FIELD(t_TLE, e),
            DECLARE_GET_FIELD(t_TLE, elementNumber),
            DECLARE_GET_FIELD(t_TLE, ephemerisType),
            DECLARE_GET_FIELD(t_TLE, i),
            DECLARE_GET_FIELD(t_TLE, launchNumber),
            DECLARE_GET_FIELD(t_TLE, launchPiece),
            DECLARE_GET_FIELD(t_TLE, launchYear),
            DECLARE_GET_FIELD(t_TLE, line1),
            DECLARE_GET_FIELD(t_TLE, line2),
            DECLARE_GET_FIELD(t_TLE, meanAnomaly),
            DECLARE_GET_FIELD(t_TLE, meanMotion),
            DECLARE_GET_FIELD(t_TLE, meanMotionFirstDerivative),
            DECLARE_GET_FIELD(t_TLE, meanMotionSecondDerivative),
            DECLARE_GET_FIELD(t_TLE, parametersDrivers),
            DECLARE_GET_FIELD(t_TLE, perigeeArgument),
            DECLARE_GET_FIELD(t_TLE, raan),
            DECLARE_GET_FIELD(t_TLE, revolutionNumberAtEpoch),
            DECLARE_GET_FIELD(t_TLE, satelliteNumber),
            DECLARE_GET_FIELD(t_TLE, utc),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_TLE__methods_[] = {
            DECLARE_METHOD(t_TLE, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLE, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TLE, equals, METH_VARARGS),
            DECLARE_METHOD(t_TLE, getBStar, METH_VARARGS),
            DECLARE_METHOD(t_TLE, getClassification, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getDate, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getE, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getElementNumber, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getEphemerisType, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getI, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLaunchNumber, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLaunchPiece, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLaunchYear, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLine1, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getLine2, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getMeanAnomaly, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getMeanMotion, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getMeanMotionFirstDerivative, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getMeanMotionSecondDerivative, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getPerigeeArgument, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getRaan, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getRevolutionNumberAtEpoch, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getSatelliteNumber, METH_NOARGS),
            DECLARE_METHOD(t_TLE, getUtc, METH_NOARGS),
            DECLARE_METHOD(t_TLE, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_TLE, isFormatOK, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TLE, stateToTLE, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TLE, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TLE)[] = {
            { Py_tp_methods, t_TLE__methods_ },
            { Py_tp_init, (void *) t_TLE_init_ },
            { Py_tp_getset, t_TLE__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TLE)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TLE, t_TLE, TLE);

          void t_TLE::install(PyObject *module)
          {
            installType(&PY_TYPE(TLE), &PY_TYPE_DEF(TLE), module, "TLE", 0);
          }

          void t_TLE::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "class_", make_descriptor(TLE::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "wrapfn_", make_descriptor(t_TLE::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "boxfn_", make_descriptor(boxObject));
            env->getClass(TLE::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "B_STAR", make_descriptor(j2p(*TLE::B_STAR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "DEFAULT", make_descriptor(TLE::DEFAULT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SDP4", make_descriptor(TLE::SDP4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SDP8", make_descriptor(TLE::SDP8));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SGP", make_descriptor(TLE::SGP));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SGP4", make_descriptor(TLE::SGP4));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TLE), "SGP8", make_descriptor(TLE::SGP8));
          }

          static PyObject *t_TLE_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TLE::initializeClass, 1)))
              return NULL;
            return t_TLE::wrap_Object(TLE(((t_TLE *) arg)->object.this$));
          }
          static PyObject *t_TLE_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TLE::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TLE_init_(t_TLE *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                TLE object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = TLE(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                TLE object((jobject) NULL);

                if (!parseArgs(args, "ssk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = TLE(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 18:
              {
                jint a0;
                jchar a1;
                jint a2;
                jint a3;
                ::java::lang::String a4((jobject) NULL);
                jint a5;
                jint a6;
                ::org::orekit::time::AbsoluteDate a7((jobject) NULL);
                jdouble a8;
                jdouble a9;
                jdouble a10;
                jdouble a11;
                jdouble a12;
                jdouble a13;
                jdouble a14;
                jdouble a15;
                jint a16;
                jdouble a17;
                TLE object((jobject) NULL);

                if (!parseArgs(args, "ICIIsIIkDDDDDDDDID", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17))
                {
                  INT_CALL(object = TLE(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 19:
              {
                jint a0;
                jchar a1;
                jint a2;
                jint a3;
                ::java::lang::String a4((jobject) NULL);
                jint a5;
                jint a6;
                ::org::orekit::time::AbsoluteDate a7((jobject) NULL);
                jdouble a8;
                jdouble a9;
                jdouble a10;
                jdouble a11;
                jdouble a12;
                jdouble a13;
                jdouble a14;
                jdouble a15;
                jint a16;
                jdouble a17;
                ::org::orekit::time::TimeScale a18((jobject) NULL);
                TLE object((jobject) NULL);

                if (!parseArgs(args, "ICIIsIIkDDDDDDDDIDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13, &a14, &a15, &a16, &a17, &a18))
                {
                  INT_CALL(object = TLE(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18));
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

          static PyObject *t_TLE_equals(t_TLE *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(TLE), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_TLE_getBStar(t_TLE *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getBStar());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getBStar(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getBStar", args);
            return NULL;
          }

          static PyObject *t_TLE_getClassification(t_TLE *self)
          {
            jchar result;
            OBJ_CALL(result = self->object.getClassification());
            return c2p(result);
          }

          static PyObject *t_TLE_getDate(t_TLE *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_TLE_getE(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getE());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getElementNumber(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getElementNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getEphemerisType(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getEphemerisType());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getI(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getI());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getLaunchNumber(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLaunchNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getLaunchPiece(t_TLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLaunchPiece());
            return j2p(result);
          }

          static PyObject *t_TLE_getLaunchYear(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLaunchYear());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getLine1(t_TLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine1());
            return j2p(result);
          }

          static PyObject *t_TLE_getLine2(t_TLE *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getLine2());
            return j2p(result);
          }

          static PyObject *t_TLE_getMeanAnomaly(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMeanAnomaly());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getMeanMotion(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMeanMotion());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getMeanMotionFirstDerivative(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMeanMotionFirstDerivative());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getMeanMotionSecondDerivative(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMeanMotionSecondDerivative());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getParametersDrivers(t_TLE *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_TLE_getPerigeeArgument(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPerigeeArgument());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getRaan(t_TLE *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getRaan());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_TLE_getRevolutionNumberAtEpoch(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getRevolutionNumberAtEpoch());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getSatelliteNumber(t_TLE *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSatelliteNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_TLE_getUtc(t_TLE *self)
          {
            ::org::orekit::time::TimeScale result((jobject) NULL);
            OBJ_CALL(result = self->object.getUtc());
            return ::org::orekit::time::t_TimeScale::wrap_Object(result);
          }

          static PyObject *t_TLE_hashCode(t_TLE *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(TLE), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_TLE_isFormatOK(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "ss", &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLE::isFormatOK(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError(type, "isFormatOK", args);
            return NULL;
          }

          static PyObject *t_TLE_stateToTLE(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            TLE a1((jobject) NULL);
            ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm a2((jobject) NULL);
            TLE result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::propagation::SpacecraftState::initializeClass, TLE::initializeClass, ::org::orekit::propagation::analytical::tle::generation::TleGenerationAlgorithm::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::TLE::stateToTLE(a0, a1, a2));
              return t_TLE::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "stateToTLE", args);
            return NULL;
          }

          static PyObject *t_TLE_toString(t_TLE *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(TLE), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_TLE_get__bStar(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBStar());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__classification(t_TLE *self, void *data)
          {
            jchar value;
            OBJ_CALL(value = self->object.getClassification());
            return c2p(value);
          }

          static PyObject *t_TLE_get__date(t_TLE *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_TLE_get__e(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getE());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__elementNumber(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getElementNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__ephemerisType(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getEphemerisType());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__i(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getI());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__launchNumber(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLaunchNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__launchPiece(t_TLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLaunchPiece());
            return j2p(value);
          }

          static PyObject *t_TLE_get__launchYear(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLaunchYear());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__line1(t_TLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine1());
            return j2p(value);
          }

          static PyObject *t_TLE_get__line2(t_TLE *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getLine2());
            return j2p(value);
          }

          static PyObject *t_TLE_get__meanAnomaly(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMeanAnomaly());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__meanMotion(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMeanMotion());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__meanMotionFirstDerivative(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMeanMotionFirstDerivative());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__meanMotionSecondDerivative(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMeanMotionSecondDerivative());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__parametersDrivers(t_TLE *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_TLE_get__perigeeArgument(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPerigeeArgument());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__raan(t_TLE *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getRaan());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_TLE_get__revolutionNumberAtEpoch(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getRevolutionNumberAtEpoch());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__satelliteNumber(t_TLE *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSatelliteNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_TLE_get__utc(t_TLE *self, void *data)
          {
            ::org::orekit::time::TimeScale value((jobject) NULL);
            OBJ_CALL(value = self->object.getUtc());
            return ::org::orekit::time::t_TimeScale::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/DoubleArrayDictionary$Entry.h"
#include "org/orekit/utils/DoubleArrayDictionary$Entry.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *DoubleArrayDictionary$Entry::class$ = NULL;
      jmethodID *DoubleArrayDictionary$Entry::mids$ = NULL;
      bool DoubleArrayDictionary$Entry::live$ = false;

      jclass DoubleArrayDictionary$Entry::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/DoubleArrayDictionary$Entry");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getKey_11b109bd155ca898] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
          mids$[mid_getValue_60c7040667a7dc5c] = env->getMethodID(cls, "getValue", "()[D");
          mids$[mid_increment_fa9d415d19f69361] = env->getMethodID(cls, "increment", "([D)V");
          mids$[mid_scaledIncrement_af50fa6eed2131d6] = env->getMethodID(cls, "scaledIncrement", "(DLorg/orekit/utils/DoubleArrayDictionary$Entry;)V");
          mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");
          mids$[mid_zero_0fa09c18fee449d5] = env->getMethodID(cls, "zero", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String DoubleArrayDictionary$Entry::getKey() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_11b109bd155ca898]));
      }

      JArray< jdouble > DoubleArrayDictionary$Entry::getValue() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValue_60c7040667a7dc5c]));
      }

      void DoubleArrayDictionary$Entry::increment(const JArray< jdouble > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_increment_fa9d415d19f69361], a0.this$);
      }

      void DoubleArrayDictionary$Entry::scaledIncrement(jdouble a0, const DoubleArrayDictionary$Entry & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_scaledIncrement_af50fa6eed2131d6], a0, a1.this$);
      }

      jint DoubleArrayDictionary$Entry::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
      }

      void DoubleArrayDictionary$Entry::zero() const
      {
        env->callVoidMethod(this$, mids$[mid_zero_0fa09c18fee449d5]);
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
      static PyObject *t_DoubleArrayDictionary$Entry_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary$Entry_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary$Entry_getKey(t_DoubleArrayDictionary$Entry *self);
      static PyObject *t_DoubleArrayDictionary$Entry_getValue(t_DoubleArrayDictionary$Entry *self);
      static PyObject *t_DoubleArrayDictionary$Entry_increment(t_DoubleArrayDictionary$Entry *self, PyObject *arg);
      static PyObject *t_DoubleArrayDictionary$Entry_scaledIncrement(t_DoubleArrayDictionary$Entry *self, PyObject *args);
      static PyObject *t_DoubleArrayDictionary$Entry_size(t_DoubleArrayDictionary$Entry *self);
      static PyObject *t_DoubleArrayDictionary$Entry_zero(t_DoubleArrayDictionary$Entry *self);
      static PyObject *t_DoubleArrayDictionary$Entry_get__key(t_DoubleArrayDictionary$Entry *self, void *data);
      static PyObject *t_DoubleArrayDictionary$Entry_get__value(t_DoubleArrayDictionary$Entry *self, void *data);
      static PyGetSetDef t_DoubleArrayDictionary$Entry__fields_[] = {
        DECLARE_GET_FIELD(t_DoubleArrayDictionary$Entry, key),
        DECLARE_GET_FIELD(t_DoubleArrayDictionary$Entry, value),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DoubleArrayDictionary$Entry__methods_[] = {
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, getKey, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, getValue, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, increment, METH_O),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, scaledIncrement, METH_VARARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, size, METH_NOARGS),
        DECLARE_METHOD(t_DoubleArrayDictionary$Entry, zero, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DoubleArrayDictionary$Entry)[] = {
        { Py_tp_methods, t_DoubleArrayDictionary$Entry__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DoubleArrayDictionary$Entry__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DoubleArrayDictionary$Entry)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DoubleArrayDictionary$Entry, t_DoubleArrayDictionary$Entry, DoubleArrayDictionary$Entry);

      void t_DoubleArrayDictionary$Entry::install(PyObject *module)
      {
        installType(&PY_TYPE(DoubleArrayDictionary$Entry), &PY_TYPE_DEF(DoubleArrayDictionary$Entry), module, "DoubleArrayDictionary$Entry", 0);
      }

      void t_DoubleArrayDictionary$Entry::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary$Entry), "class_", make_descriptor(DoubleArrayDictionary$Entry::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary$Entry), "wrapfn_", make_descriptor(t_DoubleArrayDictionary$Entry::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleArrayDictionary$Entry), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DoubleArrayDictionary$Entry_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DoubleArrayDictionary$Entry::initializeClass, 1)))
          return NULL;
        return t_DoubleArrayDictionary$Entry::wrap_Object(DoubleArrayDictionary$Entry(((t_DoubleArrayDictionary$Entry *) arg)->object.this$));
      }
      static PyObject *t_DoubleArrayDictionary$Entry_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DoubleArrayDictionary$Entry::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DoubleArrayDictionary$Entry_getKey(t_DoubleArrayDictionary$Entry *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getKey());
        return j2p(result);
      }

      static PyObject *t_DoubleArrayDictionary$Entry_getValue(t_DoubleArrayDictionary$Entry *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValue());
        return result.wrap();
      }

      static PyObject *t_DoubleArrayDictionary$Entry_increment(t_DoubleArrayDictionary$Entry *self, PyObject *arg)
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

      static PyObject *t_DoubleArrayDictionary$Entry_scaledIncrement(t_DoubleArrayDictionary$Entry *self, PyObject *args)
      {
        jdouble a0;
        DoubleArrayDictionary$Entry a1((jobject) NULL);

        if (!parseArgs(args, "Dk", DoubleArrayDictionary$Entry::initializeClass, &a0, &a1))
        {
          OBJ_CALL(self->object.scaledIncrement(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "scaledIncrement", args);
        return NULL;
      }

      static PyObject *t_DoubleArrayDictionary$Entry_size(t_DoubleArrayDictionary$Entry *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_DoubleArrayDictionary$Entry_zero(t_DoubleArrayDictionary$Entry *self)
      {
        OBJ_CALL(self->object.zero());
        Py_RETURN_NONE;
      }

      static PyObject *t_DoubleArrayDictionary$Entry_get__key(t_DoubleArrayDictionary$Entry *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getKey());
        return j2p(value);
      }

      static PyObject *t_DoubleArrayDictionary$Entry_get__value(t_DoubleArrayDictionary$Entry *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return value.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/partitioning/AbstractRegion.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *AbstractRegion::class$ = NULL;
        jmethodID *AbstractRegion::mids$ = NULL;
        bool AbstractRegion::live$ = false;

        jclass AbstractRegion::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/AbstractRegion");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_52fbfb23c628acd5] = env->getMethodID(cls, "<init>", "([Lorg/hipparchus/geometry/partitioning/Hyperplane;D)V");
            mids$[mid_applyTransform_125abe747efd3c42] = env->getMethodID(cls, "applyTransform", "(Lorg/hipparchus/geometry/partitioning/Transform;)Lorg/hipparchus/geometry/partitioning/AbstractRegion;");
            mids$[mid_buildNew_21f87056dd177f50] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/partitioning/AbstractRegion;");
            mids$[mid_checkPoint_50307f10d8b0681b] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_checkPoint_9b5450307493913f] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_contains_699b13c84f9f9ff1] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/partitioning/Region;)Z");
            mids$[mid_copySelf_54d714b9b8ebd2c9] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/AbstractRegion;");
            mids$[mid_getBarycenter_e164db6eb4ec1f00] = env->getMethodID(cls, "getBarycenter", "()Lorg/hipparchus/geometry/Point;");
            mids$[mid_getBoundarySize_dff5885c2c873297] = env->getMethodID(cls, "getBoundarySize", "()D");
            mids$[mid_getSize_dff5885c2c873297] = env->getMethodID(cls, "getSize", "()D");
            mids$[mid_getTolerance_dff5885c2c873297] = env->getMethodID(cls, "getTolerance", "()D");
            mids$[mid_getTree_4457617bb6ed0c9d] = env->getMethodID(cls, "getTree", "(Z)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_intersection_208a723630302f7b] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
            mids$[mid_isEmpty_06c832607c1f3329] = env->getMethodID(cls, "isEmpty", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Z");
            mids$[mid_isFull_b108b35ef48e27bd] = env->getMethodID(cls, "isFull", "()Z");
            mids$[mid_isFull_06c832607c1f3329] = env->getMethodID(cls, "isFull", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Z");
            mids$[mid_projectToBoundary_e9baadaaf6c2e7eb] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/BoundaryProjection;");
            mids$[mid_checkPoint_a8d4dfa8636caf0b] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_checkPoint_c5f03bf79b0dd0ad] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/partitioning/BSPTree;Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_computeGeometricalProperties_0fa09c18fee449d5] = env->getMethodID(cls, "computeGeometricalProperties", "()V");
            mids$[mid_setBarycenter_ebc8a8ff77d92c6e] = env->getMethodID(cls, "setBarycenter", "(Lorg/hipparchus/geometry/Vector;)V");
            mids$[mid_setBarycenter_8567c8fd9fae1122] = env->getMethodID(cls, "setBarycenter", "(Lorg/hipparchus/geometry/Point;)V");
            mids$[mid_setSize_17db3a65980d3441] = env->getMethodID(cls, "setSize", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractRegion::AbstractRegion(const JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_52fbfb23c628acd5, a0.this$, a1)) {}

        AbstractRegion AbstractRegion::applyTransform(const ::org::hipparchus::geometry::partitioning::Transform & a0) const
        {
          return AbstractRegion(env->callObjectMethod(this$, mids$[mid_applyTransform_125abe747efd3c42], a0.this$));
        }

        AbstractRegion AbstractRegion::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return AbstractRegion(env->callObjectMethod(this$, mids$[mid_buildNew_21f87056dd177f50], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region$Location AbstractRegion::checkPoint(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_50307f10d8b0681b], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region$Location AbstractRegion::checkPoint(const ::org::hipparchus::geometry::Vector & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_9b5450307493913f], a0.this$));
        }

        jboolean AbstractRegion::contains(const ::org::hipparchus::geometry::partitioning::Region & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_contains_699b13c84f9f9ff1], a0.this$);
        }

        AbstractRegion AbstractRegion::copySelf() const
        {
          return AbstractRegion(env->callObjectMethod(this$, mids$[mid_copySelf_54d714b9b8ebd2c9]));
        }

        ::org::hipparchus::geometry::Point AbstractRegion::getBarycenter() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getBarycenter_e164db6eb4ec1f00]));
        }

        jdouble AbstractRegion::getBoundarySize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBoundarySize_dff5885c2c873297]);
        }

        jdouble AbstractRegion::getSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSize_dff5885c2c873297]);
        }

        jdouble AbstractRegion::getTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTolerance_dff5885c2c873297]);
        }

        ::org::hipparchus::geometry::partitioning::BSPTree AbstractRegion::getTree(jboolean a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTree(env->callObjectMethod(this$, mids$[mid_getTree_4457617bb6ed0c9d], a0));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane AbstractRegion::intersection(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_intersection_208a723630302f7b], a0.this$));
        }

        jboolean AbstractRegion::isEmpty() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
        }

        jboolean AbstractRegion::isEmpty(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_06c832607c1f3329], a0.this$);
        }

        jboolean AbstractRegion::isFull() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFull_b108b35ef48e27bd]);
        }

        jboolean AbstractRegion::isFull(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFull_06c832607c1f3329], a0.this$);
        }

        ::org::hipparchus::geometry::partitioning::BoundaryProjection AbstractRegion::projectToBoundary(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BoundaryProjection(env->callObjectMethod(this$, mids$[mid_projectToBoundary_e9baadaaf6c2e7eb], a0.this$));
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
        static PyObject *t_AbstractRegion_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRegion_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractRegion_of_(t_AbstractRegion *self, PyObject *args);
        static int t_AbstractRegion_init_(t_AbstractRegion *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractRegion_applyTransform(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_buildNew(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_checkPoint(t_AbstractRegion *self, PyObject *args);
        static PyObject *t_AbstractRegion_contains(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_copySelf(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getBarycenter(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getBoundarySize(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getSize(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getTolerance(t_AbstractRegion *self);
        static PyObject *t_AbstractRegion_getTree(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_intersection(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_isEmpty(t_AbstractRegion *self, PyObject *args);
        static PyObject *t_AbstractRegion_isFull(t_AbstractRegion *self, PyObject *args);
        static PyObject *t_AbstractRegion_projectToBoundary(t_AbstractRegion *self, PyObject *arg);
        static PyObject *t_AbstractRegion_get__barycenter(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__boundarySize(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__empty(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__full(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__size(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__tolerance(t_AbstractRegion *self, void *data);
        static PyObject *t_AbstractRegion_get__parameters_(t_AbstractRegion *self, void *data);
        static PyGetSetDef t_AbstractRegion__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractRegion, barycenter),
          DECLARE_GET_FIELD(t_AbstractRegion, boundarySize),
          DECLARE_GET_FIELD(t_AbstractRegion, empty),
          DECLARE_GET_FIELD(t_AbstractRegion, full),
          DECLARE_GET_FIELD(t_AbstractRegion, size),
          DECLARE_GET_FIELD(t_AbstractRegion, tolerance),
          DECLARE_GET_FIELD(t_AbstractRegion, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractRegion__methods_[] = {
          DECLARE_METHOD(t_AbstractRegion, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRegion, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractRegion, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRegion, applyTransform, METH_O),
          DECLARE_METHOD(t_AbstractRegion, buildNew, METH_O),
          DECLARE_METHOD(t_AbstractRegion, checkPoint, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRegion, contains, METH_O),
          DECLARE_METHOD(t_AbstractRegion, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getBarycenter, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getBoundarySize, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getSize, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getTolerance, METH_NOARGS),
          DECLARE_METHOD(t_AbstractRegion, getTree, METH_O),
          DECLARE_METHOD(t_AbstractRegion, intersection, METH_O),
          DECLARE_METHOD(t_AbstractRegion, isEmpty, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRegion, isFull, METH_VARARGS),
          DECLARE_METHOD(t_AbstractRegion, projectToBoundary, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractRegion)[] = {
          { Py_tp_methods, t_AbstractRegion__methods_ },
          { Py_tp_init, (void *) t_AbstractRegion_init_ },
          { Py_tp_getset, t_AbstractRegion__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractRegion)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractRegion, t_AbstractRegion, AbstractRegion);
        PyObject *t_AbstractRegion::wrap_Object(const AbstractRegion& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractRegion::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractRegion *self = (t_AbstractRegion *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AbstractRegion::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractRegion::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractRegion *self = (t_AbstractRegion *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AbstractRegion::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractRegion), &PY_TYPE_DEF(AbstractRegion), module, "AbstractRegion", 0);
        }

        void t_AbstractRegion::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRegion), "class_", make_descriptor(AbstractRegion::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRegion), "wrapfn_", make_descriptor(t_AbstractRegion::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRegion), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractRegion_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractRegion::initializeClass, 1)))
            return NULL;
          return t_AbstractRegion::wrap_Object(AbstractRegion(((t_AbstractRegion *) arg)->object.this$));
        }
        static PyObject *t_AbstractRegion_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractRegion::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractRegion_of_(t_AbstractRegion *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AbstractRegion_init_(t_AbstractRegion *self, PyObject *args, PyObject *kwds)
        {
          JArray< ::org::hipparchus::geometry::partitioning::Hyperplane > a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble a1;
          AbstractRegion object((jobject) NULL);

          if (!parseArgs(args, "[KD", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a1))
          {
            INT_CALL(object = AbstractRegion(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AbstractRegion_applyTransform(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Transform a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractRegion result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Transform::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Transform::parameters_))
          {
            OBJ_CALL(result = self->object.applyTransform(a0));
            return t_AbstractRegion::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "applyTransform", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_buildNew(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractRegion result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(result = self->object.buildNew(a0));
            return t_AbstractRegion::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "buildNew", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_checkPoint(t_AbstractRegion *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::Point a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
              {
                OBJ_CALL(result = self->object.checkPoint(a0));
                return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::Vector a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
              {
                OBJ_CALL(result = self->object.checkPoint(a0));
                return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "checkPoint", args);
          return NULL;
        }

        static PyObject *t_AbstractRegion_contains(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Region a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Region::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.contains(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "contains", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_copySelf(t_AbstractRegion *self)
        {
          AbstractRegion result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_AbstractRegion::wrap_Object(result, self->parameters[0], self->parameters[1]);
        }

        static PyObject *t_AbstractRegion_getBarycenter(t_AbstractRegion *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getBarycenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractRegion_getBoundarySize(t_AbstractRegion *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBoundarySize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractRegion_getSize(t_AbstractRegion *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractRegion_getTolerance(t_AbstractRegion *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractRegion_getTree(t_AbstractRegion *self, PyObject *arg)
        {
          jboolean a0;
          ::org::hipparchus::geometry::partitioning::BSPTree result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getTree(a0));
            return ::org::hipparchus::geometry::partitioning::t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getTree", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_intersection(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.intersection(a0));
            return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", arg);
          return NULL;
        }

        static PyObject *t_AbstractRegion_isEmpty(t_AbstractRegion *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jboolean result;
              OBJ_CALL(result = self->object.isEmpty());
              Py_RETURN_BOOL(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
              {
                OBJ_CALL(result = self->object.isEmpty(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isEmpty", args);
          return NULL;
        }

        static PyObject *t_AbstractRegion_isFull(t_AbstractRegion *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jboolean result;
              OBJ_CALL(result = self->object.isFull());
              Py_RETURN_BOOL(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
              {
                OBJ_CALL(result = self->object.isFull(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isFull", args);
          return NULL;
        }

        static PyObject *t_AbstractRegion_projectToBoundary(t_AbstractRegion *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BoundaryProjection result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::partitioning::t_BoundaryProjection::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "projectToBoundary", arg);
          return NULL;
        }
        static PyObject *t_AbstractRegion_get__parameters_(t_AbstractRegion *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractRegion_get__barycenter(t_AbstractRegion *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getBarycenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }

        static PyObject *t_AbstractRegion_get__boundarySize(t_AbstractRegion *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBoundarySize());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AbstractRegion_get__empty(t_AbstractRegion *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEmpty());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractRegion_get__full(t_AbstractRegion *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isFull());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractRegion_get__size(t_AbstractRegion *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSize());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AbstractRegion_get__tolerance(t_AbstractRegion *self, void *data)
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
#include "org/orekit/propagation/numerical/StateTransitionMatrixGenerator$PartialsObserver.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *StateTransitionMatrixGenerator$PartialsObserver::class$ = NULL;
        jmethodID *StateTransitionMatrixGenerator$PartialsObserver::mids$ = NULL;
        bool StateTransitionMatrixGenerator$PartialsObserver::live$ = false;

        jclass StateTransitionMatrixGenerator$PartialsObserver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/StateTransitionMatrixGenerator$PartialsObserver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_partialsComputed_747d586861d6528b] = env->getMethodID(cls, "partialsComputed", "(Lorg/orekit/propagation/SpacecraftState;[D[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void StateTransitionMatrixGenerator$PartialsObserver::partialsComputed(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_partialsComputed_747d586861d6528b], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_partialsComputed(t_StateTransitionMatrixGenerator$PartialsObserver *self, PyObject *args);

        static PyMethodDef t_StateTransitionMatrixGenerator$PartialsObserver__methods_[] = {
          DECLARE_METHOD(t_StateTransitionMatrixGenerator$PartialsObserver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StateTransitionMatrixGenerator$PartialsObserver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StateTransitionMatrixGenerator$PartialsObserver, partialsComputed, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StateTransitionMatrixGenerator$PartialsObserver)[] = {
          { Py_tp_methods, t_StateTransitionMatrixGenerator$PartialsObserver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StateTransitionMatrixGenerator$PartialsObserver)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StateTransitionMatrixGenerator$PartialsObserver, t_StateTransitionMatrixGenerator$PartialsObserver, StateTransitionMatrixGenerator$PartialsObserver);

        void t_StateTransitionMatrixGenerator$PartialsObserver::install(PyObject *module)
        {
          installType(&PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver), &PY_TYPE_DEF(StateTransitionMatrixGenerator$PartialsObserver), module, "StateTransitionMatrixGenerator$PartialsObserver", 0);
        }

        void t_StateTransitionMatrixGenerator$PartialsObserver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver), "class_", make_descriptor(StateTransitionMatrixGenerator$PartialsObserver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver), "wrapfn_", make_descriptor(t_StateTransitionMatrixGenerator$PartialsObserver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StateTransitionMatrixGenerator$PartialsObserver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StateTransitionMatrixGenerator$PartialsObserver::initializeClass, 1)))
            return NULL;
          return t_StateTransitionMatrixGenerator$PartialsObserver::wrap_Object(StateTransitionMatrixGenerator$PartialsObserver(((t_StateTransitionMatrixGenerator$PartialsObserver *) arg)->object.this$));
        }
        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StateTransitionMatrixGenerator$PartialsObserver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StateTransitionMatrixGenerator$PartialsObserver_partialsComputed(t_StateTransitionMatrixGenerator$PartialsObserver *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);

          if (!parseArgs(args, "k[D[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.partialsComputed(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "partialsComputed", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/PythonMultiSatFixedStepHandler.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/sampling/MultiSatFixedStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *PythonMultiSatFixedStepHandler::class$ = NULL;
        jmethodID *PythonMultiSatFixedStepHandler::mids$ = NULL;
        bool PythonMultiSatFixedStepHandler::live$ = false;

        jclass PythonMultiSatFixedStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/PythonMultiSatFixedStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finish_de3e021e7266b71e] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_de3e021e7266b71e] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_c2a9f38df475e398] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;D)V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonMultiSatFixedStepHandler::PythonMultiSatFixedStepHandler() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonMultiSatFixedStepHandler::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonMultiSatFixedStepHandler::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonMultiSatFixedStepHandler::pythonExtension(jlong a0) const
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
    namespace propagation {
      namespace sampling {
        static PyObject *t_PythonMultiSatFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonMultiSatFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonMultiSatFixedStepHandler_init_(t_PythonMultiSatFixedStepHandler *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonMultiSatFixedStepHandler_finalize(t_PythonMultiSatFixedStepHandler *self);
        static PyObject *t_PythonMultiSatFixedStepHandler_pythonExtension(t_PythonMultiSatFixedStepHandler *self, PyObject *args);
        static void JNICALL t_PythonMultiSatFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonMultiSatFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonMultiSatFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static void JNICALL t_PythonMultiSatFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonMultiSatFixedStepHandler_get__self(t_PythonMultiSatFixedStepHandler *self, void *data);
        static PyGetSetDef t_PythonMultiSatFixedStepHandler__fields_[] = {
          DECLARE_GET_FIELD(t_PythonMultiSatFixedStepHandler, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonMultiSatFixedStepHandler__methods_[] = {
          DECLARE_METHOD(t_PythonMultiSatFixedStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonMultiSatFixedStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonMultiSatFixedStepHandler, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonMultiSatFixedStepHandler, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonMultiSatFixedStepHandler)[] = {
          { Py_tp_methods, t_PythonMultiSatFixedStepHandler__methods_ },
          { Py_tp_init, (void *) t_PythonMultiSatFixedStepHandler_init_ },
          { Py_tp_getset, t_PythonMultiSatFixedStepHandler__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonMultiSatFixedStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonMultiSatFixedStepHandler, t_PythonMultiSatFixedStepHandler, PythonMultiSatFixedStepHandler);

        void t_PythonMultiSatFixedStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonMultiSatFixedStepHandler), &PY_TYPE_DEF(PythonMultiSatFixedStepHandler), module, "PythonMultiSatFixedStepHandler", 1);
        }

        void t_PythonMultiSatFixedStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatFixedStepHandler), "class_", make_descriptor(PythonMultiSatFixedStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatFixedStepHandler), "wrapfn_", make_descriptor(t_PythonMultiSatFixedStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonMultiSatFixedStepHandler), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonMultiSatFixedStepHandler::initializeClass);
          JNINativeMethod methods[] = {
            { "finish", "(Ljava/util/List;)V", (void *) t_PythonMultiSatFixedStepHandler_finish0 },
            { "handleStep", "(Ljava/util/List;)V", (void *) t_PythonMultiSatFixedStepHandler_handleStep1 },
            { "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;D)V", (void *) t_PythonMultiSatFixedStepHandler_init2 },
            { "pythonDecRef", "()V", (void *) t_PythonMultiSatFixedStepHandler_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonMultiSatFixedStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonMultiSatFixedStepHandler::initializeClass, 1)))
            return NULL;
          return t_PythonMultiSatFixedStepHandler::wrap_Object(PythonMultiSatFixedStepHandler(((t_PythonMultiSatFixedStepHandler *) arg)->object.this$));
        }
        static PyObject *t_PythonMultiSatFixedStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonMultiSatFixedStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonMultiSatFixedStepHandler_init_(t_PythonMultiSatFixedStepHandler *self, PyObject *args, PyObject *kwds)
        {
          PythonMultiSatFixedStepHandler object((jobject) NULL);

          INT_CALL(object = PythonMultiSatFixedStepHandler());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonMultiSatFixedStepHandler_finalize(t_PythonMultiSatFixedStepHandler *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonMultiSatFixedStepHandler_pythonExtension(t_PythonMultiSatFixedStepHandler *self, PyObject *args)
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

        static void JNICALL t_PythonMultiSatFixedStepHandler_finish0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *result = PyObject_CallMethod(obj, "finish", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatFixedStepHandler_handleStep1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *result = PyObject_CallMethod(obj, "handleStep", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatFixedStepHandler_init2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::util::t_List::wrap_Object(::java::util::List(a0));
          PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
          PyObject *result = PyObject_CallMethod(obj, "init", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonMultiSatFixedStepHandler_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonMultiSatFixedStepHandler::mids$[PythonMultiSatFixedStepHandler::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonMultiSatFixedStepHandler_get__self(t_PythonMultiSatFixedStepHandler *self, void *data)
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
#include "org/orekit/gnss/metric/parser/InputStreamEncodedMessage.h"
#include "java/lang/Class.h"
#include "java/io/InputStream.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *InputStreamEncodedMessage::class$ = NULL;
          jmethodID *InputStreamEncodedMessage::mids$ = NULL;
          bool InputStreamEncodedMessage::live$ = false;

          jclass InputStreamEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/InputStreamEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_42871fcf824ad25f] = env->getMethodID(cls, "<init>", "(Ljava/io/InputStream;)V");
              mids$[mid_fetchByte_570ce0828f81a2c1] = env->getMethodID(cls, "fetchByte", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InputStreamEncodedMessage::InputStreamEncodedMessage(const ::java::io::InputStream & a0) : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_42871fcf824ad25f, a0.this$)) {}
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
          static PyObject *t_InputStreamEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InputStreamEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_InputStreamEncodedMessage_init_(t_InputStreamEncodedMessage *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_InputStreamEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_InputStreamEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InputStreamEncodedMessage, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InputStreamEncodedMessage)[] = {
            { Py_tp_methods, t_InputStreamEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_InputStreamEncodedMessage_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InputStreamEncodedMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(InputStreamEncodedMessage, t_InputStreamEncodedMessage, InputStreamEncodedMessage);

          void t_InputStreamEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(InputStreamEncodedMessage), &PY_TYPE_DEF(InputStreamEncodedMessage), module, "InputStreamEncodedMessage", 0);
          }

          void t_InputStreamEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamEncodedMessage), "class_", make_descriptor(InputStreamEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamEncodedMessage), "wrapfn_", make_descriptor(t_InputStreamEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InputStreamEncodedMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InputStreamEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InputStreamEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_InputStreamEncodedMessage::wrap_Object(InputStreamEncodedMessage(((t_InputStreamEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_InputStreamEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InputStreamEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_InputStreamEncodedMessage_init_(t_InputStreamEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            ::java::io::InputStream a0((jobject) NULL);
            InputStreamEncodedMessage object((jobject) NULL);

            if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
            {
              INT_CALL(object = InputStreamEncodedMessage(a0));
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/String.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
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
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_a6dbc2626fd93207] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;ZLorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)V");
                mids$[mid_getDecomposer_43a2c3cb3afc9b3b] = env->getMethodID(cls, "getDecomposer", "()Lorg/hipparchus/linear/MatrixDecomposer;");
                mids$[mid_getOldEvaluation_b37820a2ab3d7e67] = env->getMethodID(cls, "getOldEvaluation", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;");
                mids$[mid_isFormNormalEquations_b108b35ef48e27bd] = env->getMethodID(cls, "isFormNormalEquations", "()Z");
                mids$[mid_optimize_3488934cadbbcc09] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
                mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
                mids$[mid_withAPrioriData_6c4b3e1fccdc5ae7] = env->getMethodID(cls, "withAPrioriData", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");
                mids$[mid_withAPrioriData_103c23346cfe98fc] = env->getMethodID(cls, "withAPrioriData", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;DD)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");
                mids$[mid_withDecomposer_d5e36e467a8f93c2] = env->getMethodID(cls, "withDecomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");
                mids$[mid_withEvaluation_6b9a3a2736db8a71] = env->getMethodID(cls, "withEvaluation", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");
                mids$[mid_withFormNormalEquations_200a796350a5ce05] = env->getMethodID(cls, "withFormNormalEquations", "(Z)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/SequentialGaussNewtonOptimizer;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            SequentialGaussNewtonOptimizer::SequentialGaussNewtonOptimizer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            SequentialGaussNewtonOptimizer::SequentialGaussNewtonOptimizer(const ::org::hipparchus::linear::MatrixDecomposer & a0, jboolean a1, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a6dbc2626fd93207, a0.this$, a1, a2.this$)) {}

            ::org::hipparchus::linear::MatrixDecomposer SequentialGaussNewtonOptimizer::getDecomposer() const
            {
              return ::org::hipparchus::linear::MatrixDecomposer(env->callObjectMethod(this$, mids$[mid_getDecomposer_43a2c3cb3afc9b3b]));
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation SequentialGaussNewtonOptimizer::getOldEvaluation() const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation(env->callObjectMethod(this$, mids$[mid_getOldEvaluation_b37820a2ab3d7e67]));
            }

            jboolean SequentialGaussNewtonOptimizer::isFormNormalEquations() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isFormNormalEquations_b108b35ef48e27bd]);
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum SequentialGaussNewtonOptimizer::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_3488934cadbbcc09], a0.this$));
            }

            ::java::lang::String SequentialGaussNewtonOptimizer::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withAPrioriData(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::linear::RealMatrix & a1) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withAPrioriData_6c4b3e1fccdc5ae7], a0.this$, a1.this$));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withAPrioriData(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::linear::RealMatrix & a1, jdouble a2, jdouble a3) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withAPrioriData_103c23346cfe98fc], a0.this$, a1.this$, a2, a3));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withDecomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withDecomposer_d5e36e467a8f93c2], a0.this$));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withEvaluation(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a0) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withEvaluation_6b9a3a2736db8a71], a0.this$));
            }

            SequentialGaussNewtonOptimizer SequentialGaussNewtonOptimizer::withFormNormalEquations(jboolean a0) const
            {
              return SequentialGaussNewtonOptimizer(env->callObjectMethod(this$, mids$[mid_withFormNormalEquations_200a796350a5ce05], a0));
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
#include "org/orekit/attitudes/TorqueFree.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/attitudes/Inertia.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *TorqueFree::class$ = NULL;
      jmethodID *TorqueFree::mids$ = NULL;
      bool TorqueFree::live$ = false;

      jclass TorqueFree::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/TorqueFree");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_928f9caae3df060e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/attitudes/Attitude;Lorg/orekit/attitudes/Inertia;)V");
          mids$[mid_getAttitude_4e541876ea7d5bd0] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_d2b70935d932b5c5] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getInertia_abcaa399dcf67539] = env->getMethodID(cls, "getInertia", "()Lorg/orekit/attitudes/Inertia;");
          mids$[mid_getInitialAttitude_bd12f6f74bd44dca] = env->getMethodID(cls, "getInitialAttitude", "()Lorg/orekit/attitudes/Attitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TorqueFree::TorqueFree(const ::org::orekit::attitudes::Attitude & a0, const ::org::orekit::attitudes::Inertia & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_928f9caae3df060e, a0.this$, a1.this$)) {}

      ::org::orekit::attitudes::FieldAttitude TorqueFree::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_4e541876ea7d5bd0], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude TorqueFree::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_d2b70935d932b5c5], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Inertia TorqueFree::getInertia() const
      {
        return ::org::orekit::attitudes::Inertia(env->callObjectMethod(this$, mids$[mid_getInertia_abcaa399dcf67539]));
      }

      ::org::orekit::attitudes::Attitude TorqueFree::getInitialAttitude() const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getInitialAttitude_bd12f6f74bd44dca]));
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
      static PyObject *t_TorqueFree_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TorqueFree_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TorqueFree_init_(t_TorqueFree *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TorqueFree_getAttitude(t_TorqueFree *self, PyObject *args);
      static PyObject *t_TorqueFree_getInertia(t_TorqueFree *self);
      static PyObject *t_TorqueFree_getInitialAttitude(t_TorqueFree *self);
      static PyObject *t_TorqueFree_get__inertia(t_TorqueFree *self, void *data);
      static PyObject *t_TorqueFree_get__initialAttitude(t_TorqueFree *self, void *data);
      static PyGetSetDef t_TorqueFree__fields_[] = {
        DECLARE_GET_FIELD(t_TorqueFree, inertia),
        DECLARE_GET_FIELD(t_TorqueFree, initialAttitude),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TorqueFree__methods_[] = {
        DECLARE_METHOD(t_TorqueFree, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TorqueFree, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TorqueFree, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_TorqueFree, getInertia, METH_NOARGS),
        DECLARE_METHOD(t_TorqueFree, getInitialAttitude, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TorqueFree)[] = {
        { Py_tp_methods, t_TorqueFree__methods_ },
        { Py_tp_init, (void *) t_TorqueFree_init_ },
        { Py_tp_getset, t_TorqueFree__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TorqueFree)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TorqueFree, t_TorqueFree, TorqueFree);

      void t_TorqueFree::install(PyObject *module)
      {
        installType(&PY_TYPE(TorqueFree), &PY_TYPE_DEF(TorqueFree), module, "TorqueFree", 0);
      }

      void t_TorqueFree::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TorqueFree), "class_", make_descriptor(TorqueFree::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TorqueFree), "wrapfn_", make_descriptor(t_TorqueFree::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TorqueFree), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TorqueFree_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TorqueFree::initializeClass, 1)))
          return NULL;
        return t_TorqueFree::wrap_Object(TorqueFree(((t_TorqueFree *) arg)->object.this$));
      }
      static PyObject *t_TorqueFree_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TorqueFree::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TorqueFree_init_(t_TorqueFree *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::attitudes::Attitude a0((jobject) NULL);
        ::org::orekit::attitudes::Inertia a1((jobject) NULL);
        TorqueFree object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::attitudes::Attitude::initializeClass, ::org::orekit::attitudes::Inertia::initializeClass, &a0, &a1))
        {
          INT_CALL(object = TorqueFree(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TorqueFree_getAttitude(t_TorqueFree *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_TorqueFree_getInertia(t_TorqueFree *self)
      {
        ::org::orekit::attitudes::Inertia result((jobject) NULL);
        OBJ_CALL(result = self->object.getInertia());
        return ::org::orekit::attitudes::t_Inertia::wrap_Object(result);
      }

      static PyObject *t_TorqueFree_getInitialAttitude(t_TorqueFree *self)
      {
        ::org::orekit::attitudes::Attitude result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
      }

      static PyObject *t_TorqueFree_get__inertia(t_TorqueFree *self, void *data)
      {
        ::org::orekit::attitudes::Inertia value((jobject) NULL);
        OBJ_CALL(value = self->object.getInertia());
        return ::org::orekit::attitudes::t_Inertia::wrap_Object(value);
      }

      static PyObject *t_TorqueFree_get__initialAttitude(t_TorqueFree *self, void *data)
      {
        ::org::orekit::attitudes::Attitude value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialAttitude());
        return ::org::orekit::attitudes::t_Attitude::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/BicubicInterpolatingFunction.h"
#include "org/hipparchus/analysis/BivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *BicubicInterpolatingFunction::class$ = NULL;
        jmethodID *BicubicInterpolatingFunction::mids$ = NULL;
        bool BicubicInterpolatingFunction::live$ = false;

        jclass BicubicInterpolatingFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/BicubicInterpolatingFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f897de34796be74a] = env->getMethodID(cls, "<init>", "([D[D[[D[[D[[D[[D)V");
            mids$[mid_isValidPoint_ff85a0d8ff097ee5] = env->getMethodID(cls, "isValidPoint", "(DD)Z");
            mids$[mid_value_86ffecc08a63eff0] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BicubicInterpolatingFunction::BicubicInterpolatingFunction(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2, const JArray< JArray< jdouble > > & a3, const JArray< JArray< jdouble > > & a4, const JArray< JArray< jdouble > > & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f897de34796be74a, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        jboolean BicubicInterpolatingFunction::isValidPoint(jdouble a0, jdouble a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isValidPoint_ff85a0d8ff097ee5], a0, a1);
        }

        jdouble BicubicInterpolatingFunction::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_86ffecc08a63eff0], a0, a1);
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
        static PyObject *t_BicubicInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BicubicInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BicubicInterpolatingFunction_init_(t_BicubicInterpolatingFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BicubicInterpolatingFunction_isValidPoint(t_BicubicInterpolatingFunction *self, PyObject *args);
        static PyObject *t_BicubicInterpolatingFunction_value(t_BicubicInterpolatingFunction *self, PyObject *args);

        static PyMethodDef t_BicubicInterpolatingFunction__methods_[] = {
          DECLARE_METHOD(t_BicubicInterpolatingFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BicubicInterpolatingFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BicubicInterpolatingFunction, isValidPoint, METH_VARARGS),
          DECLARE_METHOD(t_BicubicInterpolatingFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BicubicInterpolatingFunction)[] = {
          { Py_tp_methods, t_BicubicInterpolatingFunction__methods_ },
          { Py_tp_init, (void *) t_BicubicInterpolatingFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BicubicInterpolatingFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BicubicInterpolatingFunction, t_BicubicInterpolatingFunction, BicubicInterpolatingFunction);

        void t_BicubicInterpolatingFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(BicubicInterpolatingFunction), &PY_TYPE_DEF(BicubicInterpolatingFunction), module, "BicubicInterpolatingFunction", 0);
        }

        void t_BicubicInterpolatingFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolatingFunction), "class_", make_descriptor(BicubicInterpolatingFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolatingFunction), "wrapfn_", make_descriptor(t_BicubicInterpolatingFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BicubicInterpolatingFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BicubicInterpolatingFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BicubicInterpolatingFunction::initializeClass, 1)))
            return NULL;
          return t_BicubicInterpolatingFunction::wrap_Object(BicubicInterpolatingFunction(((t_BicubicInterpolatingFunction *) arg)->object.this$));
        }
        static PyObject *t_BicubicInterpolatingFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BicubicInterpolatingFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BicubicInterpolatingFunction_init_(t_BicubicInterpolatingFunction *self, PyObject *args, PyObject *kwds)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          JArray< JArray< jdouble > > a3((jobject) NULL);
          JArray< JArray< jdouble > > a4((jobject) NULL);
          JArray< JArray< jdouble > > a5((jobject) NULL);
          BicubicInterpolatingFunction object((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D[[D[[D[[D", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = BicubicInterpolatingFunction(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BicubicInterpolatingFunction_isValidPoint(t_BicubicInterpolatingFunction *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jboolean result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.isValidPoint(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "isValidPoint", args);
          return NULL;
        }

        static PyObject *t_BicubicInterpolatingFunction_value(t_BicubicInterpolatingFunction *self, PyObject *args)
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
#include "org/hipparchus/ode/nonstiff/DormandPrince853FieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *DormandPrince853FieldIntegrator::class$ = NULL;
        jmethodID *DormandPrince853FieldIntegrator::mids$ = NULL;
        bool DormandPrince853FieldIntegrator::live$ = false;

        jclass DormandPrince853FieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/DormandPrince853FieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4a2c9513f4a7704d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DD[D[D)V");
            mids$[mid_init$_6d182549447f82d8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDDD)V");
            mids$[mid_getA_1b3ae884bec31e6d] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_226a0b2040b1d2e1] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_226a0b2040b1d2e1] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_7826ce4bcb5554d5] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/DormandPrince853FieldStateInterpolator;");
            mids$[mid_estimateError_f7f77a3e7e765297] = env->getMethodID(cls, "estimateError", "([[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince853FieldIntegrator::DormandPrince853FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_4a2c9513f4a7704d, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        DormandPrince853FieldIntegrator::DormandPrince853FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_6d182549447f82d8, a0.this$, a1, a2, a3, a4)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > DormandPrince853FieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_1b3ae884bec31e6d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > DormandPrince853FieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_226a0b2040b1d2e1]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > DormandPrince853FieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_226a0b2040b1d2e1]));
        }

        jint DormandPrince853FieldIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_570ce0828f81a2c1]);
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
      namespace nonstiff {
        static PyObject *t_DormandPrince853FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince853FieldIntegrator_of_(t_DormandPrince853FieldIntegrator *self, PyObject *args);
        static int t_DormandPrince853FieldIntegrator_init_(t_DormandPrince853FieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince853FieldIntegrator_getA(t_DormandPrince853FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegrator_getB(t_DormandPrince853FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegrator_getC(t_DormandPrince853FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegrator_getOrder(t_DormandPrince853FieldIntegrator *self, PyObject *args);
        static PyObject *t_DormandPrince853FieldIntegrator_get__a(t_DormandPrince853FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince853FieldIntegrator_get__b(t_DormandPrince853FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince853FieldIntegrator_get__c(t_DormandPrince853FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince853FieldIntegrator_get__order(t_DormandPrince853FieldIntegrator *self, void *data);
        static PyObject *t_DormandPrince853FieldIntegrator_get__parameters_(t_DormandPrince853FieldIntegrator *self, void *data);
        static PyGetSetDef t_DormandPrince853FieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegrator, a),
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegrator, b),
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegrator, c),
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegrator, order),
          DECLARE_GET_FIELD(t_DormandPrince853FieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince853FieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, getC, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince853FieldIntegrator, getOrder, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince853FieldIntegrator)[] = {
          { Py_tp_methods, t_DormandPrince853FieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_DormandPrince853FieldIntegrator_init_ },
          { Py_tp_getset, t_DormandPrince853FieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince853FieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(DormandPrince853FieldIntegrator, t_DormandPrince853FieldIntegrator, DormandPrince853FieldIntegrator);
        PyObject *t_DormandPrince853FieldIntegrator::wrap_Object(const DormandPrince853FieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince853FieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince853FieldIntegrator *self = (t_DormandPrince853FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DormandPrince853FieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince853FieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince853FieldIntegrator *self = (t_DormandPrince853FieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DormandPrince853FieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince853FieldIntegrator), &PY_TYPE_DEF(DormandPrince853FieldIntegrator), module, "DormandPrince853FieldIntegrator", 0);
        }

        void t_DormandPrince853FieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegrator), "class_", make_descriptor(DormandPrince853FieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegrator), "wrapfn_", make_descriptor(t_DormandPrince853FieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince853FieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince853FieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince853FieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_DormandPrince853FieldIntegrator::wrap_Object(DormandPrince853FieldIntegrator(((t_DormandPrince853FieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince853FieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince853FieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DormandPrince853FieldIntegrator_of_(t_DormandPrince853FieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_DormandPrince853FieldIntegrator_init_(t_DormandPrince853FieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              JArray< jdouble > a3((jobject) NULL);
              JArray< jdouble > a4((jobject) NULL);
              DormandPrince853FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = DormandPrince853FieldIntegrator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              DormandPrince853FieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = DormandPrince853FieldIntegrator(a0, a1, a2, a3, a4));
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

        static PyObject *t_DormandPrince853FieldIntegrator_getA(t_DormandPrince853FieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(DormandPrince853FieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_getB(t_DormandPrince853FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(DormandPrince853FieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_getC(t_DormandPrince853FieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(DormandPrince853FieldIntegrator), (PyObject *) self, "getC", args, 2);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_getOrder(t_DormandPrince853FieldIntegrator *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DormandPrince853FieldIntegrator), (PyObject *) self, "getOrder", args, 2);
        }
        static PyObject *t_DormandPrince853FieldIntegrator_get__parameters_(t_DormandPrince853FieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_DormandPrince853FieldIntegrator_get__a(t_DormandPrince853FieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_get__b(t_DormandPrince853FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_get__c(t_DormandPrince853FieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_DormandPrince853FieldIntegrator_get__order(t_DormandPrince853FieldIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
