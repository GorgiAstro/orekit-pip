#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/ThreeEighthesFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ThreeEighthesFieldIntegrator::class$ = NULL;
        jmethodID *ThreeEighthesFieldIntegrator::mids$ = NULL;
        bool ThreeEighthesFieldIntegrator::live$ = false;

        jclass ThreeEighthesFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ThreeEighthesFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_79b17d518528c1b2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_1b3ae884bec31e6d] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_226a0b2040b1d2e1] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_226a0b2040b1d2e1] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_f6d5497a0ccabfdc] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/ThreeEighthesFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThreeEighthesFieldIntegrator::ThreeEighthesFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_79b17d518528c1b2, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > ThreeEighthesFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_1b3ae884bec31e6d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > ThreeEighthesFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_226a0b2040b1d2e1]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > ThreeEighthesFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_226a0b2040b1d2e1]));
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
        static PyObject *t_ThreeEighthesFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesFieldIntegrator_of_(t_ThreeEighthesFieldIntegrator *self, PyObject *args);
        static int t_ThreeEighthesFieldIntegrator_init_(t_ThreeEighthesFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThreeEighthesFieldIntegrator_getA(t_ThreeEighthesFieldIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesFieldIntegrator_getB(t_ThreeEighthesFieldIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesFieldIntegrator_getC(t_ThreeEighthesFieldIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesFieldIntegrator_get__a(t_ThreeEighthesFieldIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesFieldIntegrator_get__b(t_ThreeEighthesFieldIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesFieldIntegrator_get__c(t_ThreeEighthesFieldIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesFieldIntegrator_get__parameters_(t_ThreeEighthesFieldIntegrator *self, void *data);
        static PyGetSetDef t_ThreeEighthesFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegrator, a),
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegrator, b),
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegrator, c),
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ThreeEighthesFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThreeEighthesFieldIntegrator)[] = {
          { Py_tp_methods, t_ThreeEighthesFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_ThreeEighthesFieldIntegrator_init_ },
          { Py_tp_getset, t_ThreeEighthesFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThreeEighthesFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(ThreeEighthesFieldIntegrator, t_ThreeEighthesFieldIntegrator, ThreeEighthesFieldIntegrator);
        PyObject *t_ThreeEighthesFieldIntegrator::wrap_Object(const ThreeEighthesFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ThreeEighthesFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ThreeEighthesFieldIntegrator *self = (t_ThreeEighthesFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ThreeEighthesFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ThreeEighthesFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ThreeEighthesFieldIntegrator *self = (t_ThreeEighthesFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ThreeEighthesFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(ThreeEighthesFieldIntegrator), &PY_TYPE_DEF(ThreeEighthesFieldIntegrator), module, "ThreeEighthesFieldIntegrator", 0);
        }

        void t_ThreeEighthesFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegrator), "class_", make_descriptor(ThreeEighthesFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegrator), "wrapfn_", make_descriptor(t_ThreeEighthesFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThreeEighthesFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_ThreeEighthesFieldIntegrator::wrap_Object(ThreeEighthesFieldIntegrator(((t_ThreeEighthesFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_ThreeEighthesFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThreeEighthesFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_of_(t_ThreeEighthesFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ThreeEighthesFieldIntegrator_init_(t_ThreeEighthesFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ThreeEighthesFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = ThreeEighthesFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_getA(t_ThreeEighthesFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(ThreeEighthesFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_getB(t_ThreeEighthesFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(ThreeEighthesFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_getC(t_ThreeEighthesFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(ThreeEighthesFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_ThreeEighthesFieldIntegrator_get__parameters_(t_ThreeEighthesFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_get__a(t_ThreeEighthesFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_get__b(t_ThreeEighthesFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_get__c(t_ThreeEighthesFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$AnglesMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$AnglesMeasurement::class$ = NULL;
        jmethodID *CRD$AnglesMeasurement::mids$ = NULL;
        bool CRD$AnglesMeasurement::live$ = false;

        jclass CRD$AnglesMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$AnglesMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_40fb827d152567d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDIIZDD)V");
            mids$[mid_getAzimuth_dff5885c2c873297] = env->getMethodID(cls, "getAzimuth", "()D");
            mids$[mid_getAzimuthRate_dff5885c2c873297] = env->getMethodID(cls, "getAzimuthRate", "()D");
            mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getDirectionFlag_570ce0828f81a2c1] = env->getMethodID(cls, "getDirectionFlag", "()I");
            mids$[mid_getElevation_dff5885c2c873297] = env->getMethodID(cls, "getElevation", "()D");
            mids$[mid_getElevationRate_dff5885c2c873297] = env->getMethodID(cls, "getElevationRate", "()D");
            mids$[mid_getOriginIndicator_570ce0828f81a2c1] = env->getMethodID(cls, "getOriginIndicator", "()I");
            mids$[mid_isRefractionCorrected_b108b35ef48e27bd] = env->getMethodID(cls, "isRefractionCorrected", "()Z");
            mids$[mid_toCrdString_11b109bd155ca898] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$AnglesMeasurement::CRD$AnglesMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jint a3, jint a4, jboolean a5, jdouble a6, jdouble a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_40fb827d152567d2, a0.this$, a1, a2, a3, a4, a5, a6, a7)) {}

        jdouble CRD$AnglesMeasurement::getAzimuth() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAzimuth_dff5885c2c873297]);
        }

        jdouble CRD$AnglesMeasurement::getAzimuthRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAzimuthRate_dff5885c2c873297]);
        }

        ::org::orekit::time::AbsoluteDate CRD$AnglesMeasurement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
        }

        jint CRD$AnglesMeasurement::getDirectionFlag() const
        {
          return env->callIntMethod(this$, mids$[mid_getDirectionFlag_570ce0828f81a2c1]);
        }

        jdouble CRD$AnglesMeasurement::getElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevation_dff5885c2c873297]);
        }

        jdouble CRD$AnglesMeasurement::getElevationRate() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevationRate_dff5885c2c873297]);
        }

        jint CRD$AnglesMeasurement::getOriginIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getOriginIndicator_570ce0828f81a2c1]);
        }

        jboolean CRD$AnglesMeasurement::isRefractionCorrected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isRefractionCorrected_b108b35ef48e27bd]);
        }

        ::java::lang::String CRD$AnglesMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_11b109bd155ca898]));
        }

        ::java::lang::String CRD$AnglesMeasurement::toString() const
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
        static PyObject *t_CRD$AnglesMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$AnglesMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$AnglesMeasurement_init_(t_CRD$AnglesMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$AnglesMeasurement_getAzimuth(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getAzimuthRate(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getDate(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getDirectionFlag(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getElevation(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getElevationRate(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_getOriginIndicator(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_isRefractionCorrected(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_toCrdString(t_CRD$AnglesMeasurement *self);
        static PyObject *t_CRD$AnglesMeasurement_toString(t_CRD$AnglesMeasurement *self, PyObject *args);
        static PyObject *t_CRD$AnglesMeasurement_get__azimuth(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__azimuthRate(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__date(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__directionFlag(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__elevation(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__elevationRate(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__originIndicator(t_CRD$AnglesMeasurement *self, void *data);
        static PyObject *t_CRD$AnglesMeasurement_get__refractionCorrected(t_CRD$AnglesMeasurement *self, void *data);
        static PyGetSetDef t_CRD$AnglesMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, azimuth),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, azimuthRate),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, date),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, directionFlag),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, elevation),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, elevationRate),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, originIndicator),
          DECLARE_GET_FIELD(t_CRD$AnglesMeasurement, refractionCorrected),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$AnglesMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$AnglesMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getAzimuth, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getAzimuthRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getDirectionFlag, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getElevation, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getElevationRate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, getOriginIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, isRefractionCorrected, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$AnglesMeasurement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$AnglesMeasurement)[] = {
          { Py_tp_methods, t_CRD$AnglesMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$AnglesMeasurement_init_ },
          { Py_tp_getset, t_CRD$AnglesMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$AnglesMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$AnglesMeasurement, t_CRD$AnglesMeasurement, CRD$AnglesMeasurement);

        void t_CRD$AnglesMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$AnglesMeasurement), &PY_TYPE_DEF(CRD$AnglesMeasurement), module, "CRD$AnglesMeasurement", 0);
        }

        void t_CRD$AnglesMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$AnglesMeasurement), "class_", make_descriptor(CRD$AnglesMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$AnglesMeasurement), "wrapfn_", make_descriptor(t_CRD$AnglesMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$AnglesMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$AnglesMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$AnglesMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$AnglesMeasurement::wrap_Object(CRD$AnglesMeasurement(((t_CRD$AnglesMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$AnglesMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$AnglesMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$AnglesMeasurement_init_(t_CRD$AnglesMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          jint a3;
          jint a4;
          jboolean a5;
          jdouble a6;
          jdouble a7;
          CRD$AnglesMeasurement object((jobject) NULL);

          if (!parseArgs(args, "kDDIIZDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            INT_CALL(object = CRD$AnglesMeasurement(a0, a1, a2, a3, a4, a5, a6, a7));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$AnglesMeasurement_getAzimuth(t_CRD$AnglesMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAzimuth());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getAzimuthRate(t_CRD$AnglesMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAzimuthRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getDate(t_CRD$AnglesMeasurement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getDirectionFlag(t_CRD$AnglesMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDirectionFlag());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getElevation(t_CRD$AnglesMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getElevationRate(t_CRD$AnglesMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getElevationRate());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_getOriginIndicator(t_CRD$AnglesMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOriginIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$AnglesMeasurement_isRefractionCorrected(t_CRD$AnglesMeasurement *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isRefractionCorrected());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRD$AnglesMeasurement_toCrdString(t_CRD$AnglesMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$AnglesMeasurement_toString(t_CRD$AnglesMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$AnglesMeasurement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__azimuth(t_CRD$AnglesMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAzimuth());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__azimuthRate(t_CRD$AnglesMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAzimuthRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__date(t_CRD$AnglesMeasurement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__directionFlag(t_CRD$AnglesMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDirectionFlag());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__elevation(t_CRD$AnglesMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__elevationRate(t_CRD$AnglesMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getElevationRate());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__originIndicator(t_CRD$AnglesMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOriginIndicator());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$AnglesMeasurement_get__refractionCorrected(t_CRD$AnglesMeasurement *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isRefractionCorrected());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldUnivariateFunction.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldUnivariateFunction::class$ = NULL;
      jmethodID *FieldUnivariateFunction::mids$ = NULL;
      bool FieldUnivariateFunction::live$ = false;

      jclass FieldUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldUnivariateFunction_4b124c830b2e90fc] = env->getMethodID(cls, "toCalculusFieldUnivariateFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldUnivariateFunction;");
          mids$[mid_value_a4b1871f4d29e58b] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldUnivariateFunction FieldUnivariateFunction::toCalculusFieldUnivariateFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldUnivariateFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldUnivariateFunction_4b124c830b2e90fc], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldUnivariateFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_a4b1871f4d29e58b], a0.this$));
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
      static PyObject *t_FieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldUnivariateFunction_toCalculusFieldUnivariateFunction(t_FieldUnivariateFunction *self, PyObject *arg);
      static PyObject *t_FieldUnivariateFunction_value(t_FieldUnivariateFunction *self, PyObject *arg);

      static PyMethodDef t_FieldUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_FieldUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldUnivariateFunction, toCalculusFieldUnivariateFunction, METH_O),
        DECLARE_METHOD(t_FieldUnivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateFunction)[] = {
        { Py_tp_methods, t_FieldUnivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldUnivariateFunction, t_FieldUnivariateFunction, FieldUnivariateFunction);

      void t_FieldUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldUnivariateFunction), &PY_TYPE_DEF(FieldUnivariateFunction), module, "FieldUnivariateFunction", 0);
      }

      void t_FieldUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateFunction), "class_", make_descriptor(FieldUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateFunction), "wrapfn_", make_descriptor(t_FieldUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_FieldUnivariateFunction::wrap_Object(FieldUnivariateFunction(((t_FieldUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldUnivariateFunction_toCalculusFieldUnivariateFunction(t_FieldUnivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldUnivariateFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldUnivariateFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldUnivariateFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldUnivariateFunction_value(t_FieldUnivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/DOPComputer.h"
#include "java/util/List.h"
#include "org/orekit/gnss/DOPComputer.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/gnss/DOP.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/utils/ElevationMask.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *DOPComputer::class$ = NULL;
      jmethodID *DOPComputer::mids$ = NULL;
      bool DOPComputer::live$ = false;
      jdouble DOPComputer::DOP_MIN_ELEVATION = (jdouble) 0;

      jclass DOPComputer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/DOPComputer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compute_370dd6e157cc4c90] = env->getMethodID(cls, "compute", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/List;)Lorg/orekit/gnss/DOP;");
          mids$[mid_create_759c52f3efaa4f0c] = env->getStaticMethodID(cls, "create", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/bodies/GeodeticPoint;)Lorg/orekit/gnss/DOPComputer;");
          mids$[mid_getElevationMask_a2b53d9e5ddb8a2d] = env->getMethodID(cls, "getElevationMask", "()Lorg/orekit/utils/ElevationMask;");
          mids$[mid_getMinElevation_dff5885c2c873297] = env->getMethodID(cls, "getMinElevation", "()D");
          mids$[mid_withElevationMask_fbe70e78b6eb5b3a] = env->getMethodID(cls, "withElevationMask", "(Lorg/orekit/utils/ElevationMask;)Lorg/orekit/gnss/DOPComputer;");
          mids$[mid_withMinElevation_c509d9237ff82859] = env->getMethodID(cls, "withMinElevation", "(D)Lorg/orekit/gnss/DOPComputer;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DOP_MIN_ELEVATION = env->getStaticDoubleField(cls, "DOP_MIN_ELEVATION");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::gnss::DOP DOPComputer::compute(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::List & a1) const
      {
        return ::org::orekit::gnss::DOP(env->callObjectMethod(this$, mids$[mid_compute_370dd6e157cc4c90], a0.this$, a1.this$));
      }

      DOPComputer DOPComputer::create(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::bodies::GeodeticPoint & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return DOPComputer(env->callStaticObjectMethod(cls, mids$[mid_create_759c52f3efaa4f0c], a0.this$, a1.this$));
      }

      ::org::orekit::utils::ElevationMask DOPComputer::getElevationMask() const
      {
        return ::org::orekit::utils::ElevationMask(env->callObjectMethod(this$, mids$[mid_getElevationMask_a2b53d9e5ddb8a2d]));
      }

      jdouble DOPComputer::getMinElevation() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getMinElevation_dff5885c2c873297]);
      }

      DOPComputer DOPComputer::withElevationMask(const ::org::orekit::utils::ElevationMask & a0) const
      {
        return DOPComputer(env->callObjectMethod(this$, mids$[mid_withElevationMask_fbe70e78b6eb5b3a], a0.this$));
      }

      DOPComputer DOPComputer::withMinElevation(jdouble a0) const
      {
        return DOPComputer(env->callObjectMethod(this$, mids$[mid_withMinElevation_c509d9237ff82859], a0));
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
      static PyObject *t_DOPComputer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DOPComputer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DOPComputer_compute(t_DOPComputer *self, PyObject *args);
      static PyObject *t_DOPComputer_create(PyTypeObject *type, PyObject *args);
      static PyObject *t_DOPComputer_getElevationMask(t_DOPComputer *self);
      static PyObject *t_DOPComputer_getMinElevation(t_DOPComputer *self);
      static PyObject *t_DOPComputer_withElevationMask(t_DOPComputer *self, PyObject *arg);
      static PyObject *t_DOPComputer_withMinElevation(t_DOPComputer *self, PyObject *arg);
      static PyObject *t_DOPComputer_get__elevationMask(t_DOPComputer *self, void *data);
      static PyObject *t_DOPComputer_get__minElevation(t_DOPComputer *self, void *data);
      static PyGetSetDef t_DOPComputer__fields_[] = {
        DECLARE_GET_FIELD(t_DOPComputer, elevationMask),
        DECLARE_GET_FIELD(t_DOPComputer, minElevation),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DOPComputer__methods_[] = {
        DECLARE_METHOD(t_DOPComputer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DOPComputer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DOPComputer, compute, METH_VARARGS),
        DECLARE_METHOD(t_DOPComputer, create, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DOPComputer, getElevationMask, METH_NOARGS),
        DECLARE_METHOD(t_DOPComputer, getMinElevation, METH_NOARGS),
        DECLARE_METHOD(t_DOPComputer, withElevationMask, METH_O),
        DECLARE_METHOD(t_DOPComputer, withMinElevation, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DOPComputer)[] = {
        { Py_tp_methods, t_DOPComputer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DOPComputer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DOPComputer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DOPComputer, t_DOPComputer, DOPComputer);

      void t_DOPComputer::install(PyObject *module)
      {
        installType(&PY_TYPE(DOPComputer), &PY_TYPE_DEF(DOPComputer), module, "DOPComputer", 0);
      }

      void t_DOPComputer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOPComputer), "class_", make_descriptor(DOPComputer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOPComputer), "wrapfn_", make_descriptor(t_DOPComputer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOPComputer), "boxfn_", make_descriptor(boxObject));
        env->getClass(DOPComputer::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DOPComputer), "DOP_MIN_ELEVATION", make_descriptor(DOPComputer::DOP_MIN_ELEVATION));
      }

      static PyObject *t_DOPComputer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DOPComputer::initializeClass, 1)))
          return NULL;
        return t_DOPComputer::wrap_Object(DOPComputer(((t_DOPComputer *) arg)->object.this$));
      }
      static PyObject *t_DOPComputer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DOPComputer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DOPComputer_compute(t_DOPComputer *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::util::List a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::gnss::DOP result((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
        {
          OBJ_CALL(result = self->object.compute(a0, a1));
          return ::org::orekit::gnss::t_DOP::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "compute", args);
        return NULL;
      }

      static PyObject *t_DOPComputer_create(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
        ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
        DOPComputer result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::orekit::gnss::DOPComputer::create(a0, a1));
          return t_DOPComputer::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "create", args);
        return NULL;
      }

      static PyObject *t_DOPComputer_getElevationMask(t_DOPComputer *self)
      {
        ::org::orekit::utils::ElevationMask result((jobject) NULL);
        OBJ_CALL(result = self->object.getElevationMask());
        return ::org::orekit::utils::t_ElevationMask::wrap_Object(result);
      }

      static PyObject *t_DOPComputer_getMinElevation(t_DOPComputer *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getMinElevation());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DOPComputer_withElevationMask(t_DOPComputer *self, PyObject *arg)
      {
        ::org::orekit::utils::ElevationMask a0((jobject) NULL);
        DOPComputer result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::utils::ElevationMask::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.withElevationMask(a0));
          return t_DOPComputer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withElevationMask", arg);
        return NULL;
      }

      static PyObject *t_DOPComputer_withMinElevation(t_DOPComputer *self, PyObject *arg)
      {
        jdouble a0;
        DOPComputer result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.withMinElevation(a0));
          return t_DOPComputer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMinElevation", arg);
        return NULL;
      }

      static PyObject *t_DOPComputer_get__elevationMask(t_DOPComputer *self, void *data)
      {
        ::org::orekit::utils::ElevationMask value((jobject) NULL);
        OBJ_CALL(value = self->object.getElevationMask());
        return ::org::orekit::utils::t_ElevationMask::wrap_Object(value);
      }

      static PyObject *t_DOPComputer_get__minElevation(t_DOPComputer *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getMinElevation());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BaseUnivariateSolver.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
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
            mids$[mid_getAbsoluteAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getFunctionValueAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getFunctionValueAccuracy", "()D");
            mids$[mid_getRelativeAccuracy_dff5885c2c873297] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_solve_a156b737628248ac] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;D)D");
            mids$[mid_solve_5531acb13e429311] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DD)D");
            mids$[mid_solve_136fe8df860928b8] = env->getMethodID(cls, "solve", "(ILorg/hipparchus/analysis/UnivariateFunction;DDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble BaseUnivariateSolver::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_dff5885c2c873297]);
        }

        jint BaseUnivariateSolver::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_570ce0828f81a2c1]);
        }

        jdouble BaseUnivariateSolver::getFunctionValueAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getFunctionValueAccuracy_dff5885c2c873297]);
        }

        jdouble BaseUnivariateSolver::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_dff5885c2c873297]);
        }

        jdouble BaseUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_a156b737628248ac], a0, a1.this$, a2);
        }

        jdouble BaseUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_5531acb13e429311], a0, a1.this$, a2, a3);
        }

        jdouble BaseUnivariateSolver::solve(jint a0, const ::org::hipparchus::analysis::UnivariateFunction & a1, jdouble a2, jdouble a3, jdouble a4) const
        {
          return env->callDoubleMethod(this$, mids$[mid_solve_136fe8df860928b8], a0, a1.this$, a2, a3, a4);
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
#include "org/orekit/propagation/events/handlers/StopOnEvent.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *StopOnEvent::class$ = NULL;
          jmethodID *StopOnEvent::mids$ = NULL;
          bool StopOnEvent::live$ = false;

          jclass StopOnEvent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/StopOnEvent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_abc543fa9701720f] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StopOnEvent::StopOnEvent() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          ::org::hipparchus::ode::events::Action StopOnEvent::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_abc543fa9701720f], a0.this$, a1.this$, a2));
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
          static PyObject *t_StopOnEvent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StopOnEvent_instance_(PyTypeObject *type, PyObject *arg);
          static int t_StopOnEvent_init_(t_StopOnEvent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_StopOnEvent_eventOccurred(t_StopOnEvent *self, PyObject *args);

          static PyMethodDef t_StopOnEvent__methods_[] = {
            DECLARE_METHOD(t_StopOnEvent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnEvent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StopOnEvent, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StopOnEvent)[] = {
            { Py_tp_methods, t_StopOnEvent__methods_ },
            { Py_tp_init, (void *) t_StopOnEvent_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StopOnEvent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(StopOnEvent, t_StopOnEvent, StopOnEvent);

          void t_StopOnEvent::install(PyObject *module)
          {
            installType(&PY_TYPE(StopOnEvent), &PY_TYPE_DEF(StopOnEvent), module, "StopOnEvent", 0);
          }

          void t_StopOnEvent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnEvent), "class_", make_descriptor(StopOnEvent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnEvent), "wrapfn_", make_descriptor(t_StopOnEvent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StopOnEvent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StopOnEvent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StopOnEvent::initializeClass, 1)))
              return NULL;
            return t_StopOnEvent::wrap_Object(StopOnEvent(((t_StopOnEvent *) arg)->object.this$));
          }
          static PyObject *t_StopOnEvent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StopOnEvent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_StopOnEvent_init_(t_StopOnEvent *self, PyObject *args, PyObject *kwds)
          {
            StopOnEvent object((jobject) NULL);

            INT_CALL(object = StopOnEvent());
            self->object = object;

            return 0;
          }

          static PyObject *t_StopOnEvent_eventOccurred(t_StopOnEvent *self, PyObject *args)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *LocalMagneticFieldFrame$LOFBuilderVector::class$ = NULL;
      jmethodID *LocalMagneticFieldFrame$LOFBuilderVector::mids$ = NULL;
      bool LocalMagneticFieldFrame$LOFBuilderVector::live$ = false;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::MINUS_MOMENTUM = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::MINUS_POSITION = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::MINUS_VELOCITY = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::PLUS_MOMENTUM = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::PLUS_POSITION = NULL;
      LocalMagneticFieldFrame$LOFBuilderVector *LocalMagneticFieldFrame$LOFBuilderVector::PLUS_VELOCITY = NULL;

      jclass LocalMagneticFieldFrame$LOFBuilderVector::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_4cbd5ebe0a0d58fe] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;");
          mids$[mid_values_f650e9d9fd199877] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          MINUS_MOMENTUM = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "MINUS_MOMENTUM", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          MINUS_POSITION = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "MINUS_POSITION", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          MINUS_VELOCITY = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "MINUS_VELOCITY", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          PLUS_MOMENTUM = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "PLUS_MOMENTUM", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          PLUS_POSITION = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "PLUS_POSITION", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          PLUS_VELOCITY = new LocalMagneticFieldFrame$LOFBuilderVector(env->getStaticObjectField(cls, "PLUS_VELOCITY", "Lorg/orekit/frames/LocalMagneticFieldFrame$LOFBuilderVector;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LocalMagneticFieldFrame$LOFBuilderVector LocalMagneticFieldFrame$LOFBuilderVector::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalMagneticFieldFrame$LOFBuilderVector(env->callStaticObjectMethod(cls, mids$[mid_valueOf_4cbd5ebe0a0d58fe], a0.this$));
      }

      JArray< LocalMagneticFieldFrame$LOFBuilderVector > LocalMagneticFieldFrame$LOFBuilderVector::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalMagneticFieldFrame$LOFBuilderVector >(env->callStaticObjectMethod(cls, mids$[mid_values_f650e9d9fd199877]));
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
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_of_(t_LocalMagneticFieldFrame$LOFBuilderVector *self, PyObject *args);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_values(PyTypeObject *type);
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_get__parameters_(t_LocalMagneticFieldFrame$LOFBuilderVector *self, void *data);
      static PyGetSetDef t_LocalMagneticFieldFrame$LOFBuilderVector__fields_[] = {
        DECLARE_GET_FIELD(t_LocalMagneticFieldFrame$LOFBuilderVector, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalMagneticFieldFrame$LOFBuilderVector__methods_[] = {
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalMagneticFieldFrame$LOFBuilderVector, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalMagneticFieldFrame$LOFBuilderVector)[] = {
        { Py_tp_methods, t_LocalMagneticFieldFrame$LOFBuilderVector__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalMagneticFieldFrame$LOFBuilderVector__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalMagneticFieldFrame$LOFBuilderVector)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalMagneticFieldFrame$LOFBuilderVector, t_LocalMagneticFieldFrame$LOFBuilderVector, LocalMagneticFieldFrame$LOFBuilderVector);
      PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(const LocalMagneticFieldFrame$LOFBuilderVector& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalMagneticFieldFrame$LOFBuilderVector *self = (t_LocalMagneticFieldFrame$LOFBuilderVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalMagneticFieldFrame$LOFBuilderVector *self = (t_LocalMagneticFieldFrame$LOFBuilderVector *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalMagneticFieldFrame$LOFBuilderVector::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), &PY_TYPE_DEF(LocalMagneticFieldFrame$LOFBuilderVector), module, "LocalMagneticFieldFrame$LOFBuilderVector", 0);
      }

      void t_LocalMagneticFieldFrame$LOFBuilderVector::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "class_", make_descriptor(LocalMagneticFieldFrame$LOFBuilderVector::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "wrapfn_", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalMagneticFieldFrame$LOFBuilderVector::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "MINUS_MOMENTUM", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::MINUS_MOMENTUM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "MINUS_POSITION", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::MINUS_POSITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "MINUS_VELOCITY", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::MINUS_VELOCITY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "PLUS_MOMENTUM", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::PLUS_MOMENTUM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "PLUS_POSITION", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::PLUS_POSITION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalMagneticFieldFrame$LOFBuilderVector), "PLUS_VELOCITY", make_descriptor(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(*LocalMagneticFieldFrame$LOFBuilderVector::PLUS_VELOCITY)));
      }

      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalMagneticFieldFrame$LOFBuilderVector::initializeClass, 1)))
          return NULL;
        return t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(LocalMagneticFieldFrame$LOFBuilderVector(((t_LocalMagneticFieldFrame$LOFBuilderVector *) arg)->object.this$));
      }
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalMagneticFieldFrame$LOFBuilderVector::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_of_(t_LocalMagneticFieldFrame$LOFBuilderVector *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalMagneticFieldFrame$LOFBuilderVector result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector::valueOf(a0));
          return t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_values(PyTypeObject *type)
      {
        JArray< LocalMagneticFieldFrame$LOFBuilderVector > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::LocalMagneticFieldFrame$LOFBuilderVector::values());
        return JArray<jobject>(result.this$).wrap(t_LocalMagneticFieldFrame$LOFBuilderVector::wrap_jobject);
      }
      static PyObject *t_LocalMagneticFieldFrame$LOFBuilderVector_get__parameters_(t_LocalMagneticFieldFrame$LOFBuilderVector *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/enclosing/WelzlEncloser.h"
#include "java/lang/Iterable.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "org/hipparchus/geometry/Space.h"
#include "org/hipparchus/geometry/enclosing/Encloser.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace enclosing {

        ::java::lang::Class *WelzlEncloser::class$ = NULL;
        jmethodID *WelzlEncloser::mids$ = NULL;
        bool WelzlEncloser::live$ = false;

        jclass WelzlEncloser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/enclosing/WelzlEncloser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_841d99db1dc71c2b] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/enclosing/SupportBallGenerator;)V");
            mids$[mid_enclose_ab52cd1d30fd41e7] = env->getMethodID(cls, "enclose", "(Ljava/lang/Iterable;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");
            mids$[mid_selectFarthest_8c9a589af2afc739] = env->getMethodID(cls, "selectFarthest", "(Ljava/lang/Iterable;Lorg/hipparchus/geometry/enclosing/EnclosingBall;)Lorg/hipparchus/geometry/Point;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        WelzlEncloser::WelzlEncloser(jdouble a0, const ::org::hipparchus::geometry::enclosing::SupportBallGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_841d99db1dc71c2b, a0, a1.this$)) {}

        ::org::hipparchus::geometry::enclosing::EnclosingBall WelzlEncloser::enclose(const ::java::lang::Iterable & a0) const
        {
          return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_enclose_ab52cd1d30fd41e7], a0.this$));
        }

        ::org::hipparchus::geometry::Point WelzlEncloser::selectFarthest(const ::java::lang::Iterable & a0, const ::org::hipparchus::geometry::enclosing::EnclosingBall & a1) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_selectFarthest_8c9a589af2afc739], a0.this$, a1.this$));
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
      namespace enclosing {
        static PyObject *t_WelzlEncloser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WelzlEncloser_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_WelzlEncloser_of_(t_WelzlEncloser *self, PyObject *args);
        static int t_WelzlEncloser_init_(t_WelzlEncloser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_WelzlEncloser_enclose(t_WelzlEncloser *self, PyObject *arg);
        static PyObject *t_WelzlEncloser_selectFarthest(t_WelzlEncloser *self, PyObject *args);
        static PyObject *t_WelzlEncloser_get__parameters_(t_WelzlEncloser *self, void *data);
        static PyGetSetDef t_WelzlEncloser__fields_[] = {
          DECLARE_GET_FIELD(t_WelzlEncloser, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_WelzlEncloser__methods_[] = {
          DECLARE_METHOD(t_WelzlEncloser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WelzlEncloser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_WelzlEncloser, of_, METH_VARARGS),
          DECLARE_METHOD(t_WelzlEncloser, enclose, METH_O),
          DECLARE_METHOD(t_WelzlEncloser, selectFarthest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(WelzlEncloser)[] = {
          { Py_tp_methods, t_WelzlEncloser__methods_ },
          { Py_tp_init, (void *) t_WelzlEncloser_init_ },
          { Py_tp_getset, t_WelzlEncloser__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(WelzlEncloser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(WelzlEncloser, t_WelzlEncloser, WelzlEncloser);
        PyObject *t_WelzlEncloser::wrap_Object(const WelzlEncloser& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_WelzlEncloser::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_WelzlEncloser *self = (t_WelzlEncloser *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_WelzlEncloser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_WelzlEncloser::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_WelzlEncloser *self = (t_WelzlEncloser *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_WelzlEncloser::install(PyObject *module)
        {
          installType(&PY_TYPE(WelzlEncloser), &PY_TYPE_DEF(WelzlEncloser), module, "WelzlEncloser", 0);
        }

        void t_WelzlEncloser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(WelzlEncloser), "class_", make_descriptor(WelzlEncloser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WelzlEncloser), "wrapfn_", make_descriptor(t_WelzlEncloser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(WelzlEncloser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_WelzlEncloser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, WelzlEncloser::initializeClass, 1)))
            return NULL;
          return t_WelzlEncloser::wrap_Object(WelzlEncloser(((t_WelzlEncloser *) arg)->object.this$));
        }
        static PyObject *t_WelzlEncloser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, WelzlEncloser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_WelzlEncloser_of_(t_WelzlEncloser *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_WelzlEncloser_init_(t_WelzlEncloser *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::hipparchus::geometry::enclosing::SupportBallGenerator a1((jobject) NULL);
          PyTypeObject **p1;
          WelzlEncloser object((jobject) NULL);

          if (!parseArgs(args, "DK", ::org::hipparchus::geometry::enclosing::SupportBallGenerator::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::enclosing::t_SupportBallGenerator::parameters_))
          {
            INT_CALL(object = WelzlEncloser(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_WelzlEncloser_enclose(t_WelzlEncloser *self, PyObject *arg)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(result = self->object.enclose(a0));
            return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "enclose", arg);
          return NULL;
        }

        static PyObject *t_WelzlEncloser_selectFarthest(t_WelzlEncloser *self, PyObject *args)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::enclosing::EnclosingBall a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::geometry::Point result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::lang::Iterable::initializeClass, ::org::hipparchus::geometry::enclosing::EnclosingBall::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_, &a1, &p1, ::org::hipparchus::geometry::enclosing::t_EnclosingBall::parameters_))
          {
            OBJ_CALL(result = self->object.selectFarthest(a0, a1));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::geometry::t_Point::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "selectFarthest", args);
          return NULL;
        }
        static PyObject *t_WelzlEncloser_get__parameters_(t_WelzlEncloser *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/SimpleExponentialAtmosphere.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
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
              mids$[mid_init$_d4e71ef1b50c73de] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/BodyShape;DDD)V");
              mids$[mid_getDensity_f7d7785230311c38] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_b79d75c1a8af7374] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SimpleExponentialAtmosphere::SimpleExponentialAtmosphere(const ::org::orekit::bodies::BodyShape & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d4e71ef1b50c73de, a0.this$, a1, a2, a3)) {}

          jdouble SimpleExponentialAtmosphere::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_f7d7785230311c38], a0.this$, a1.this$, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement SimpleExponentialAtmosphere::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_b79d75c1a8af7374], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::frames::Frame SimpleExponentialAtmosphere::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
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
#include "org/hipparchus/optim/OptimizationData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *OptimizationData::class$ = NULL;
      jmethodID *OptimizationData::mids$ = NULL;
      bool OptimizationData::live$ = false;

      jclass OptimizationData::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/OptimizationData");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
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
      static PyObject *t_OptimizationData_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OptimizationData_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_OptimizationData__methods_[] = {
        DECLARE_METHOD(t_OptimizationData, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OptimizationData, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OptimizationData)[] = {
        { Py_tp_methods, t_OptimizationData__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OptimizationData)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(OptimizationData, t_OptimizationData, OptimizationData);

      void t_OptimizationData::install(PyObject *module)
      {
        installType(&PY_TYPE(OptimizationData), &PY_TYPE_DEF(OptimizationData), module, "OptimizationData", 0);
      }

      void t_OptimizationData::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationData), "class_", make_descriptor(OptimizationData::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationData), "wrapfn_", make_descriptor(t_OptimizationData::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OptimizationData), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OptimizationData_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OptimizationData::initializeClass, 1)))
          return NULL;
        return t_OptimizationData::wrap_Object(OptimizationData(((t_OptimizationData *) arg)->object.this$));
      }
      static PyObject *t_OptimizationData_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OptimizationData::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/RateElementsType.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType.h"
#include "org/orekit/files/ccsds/definitions/AdMethodType.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeDetermination::class$ = NULL;
              jmethodID *AttitudeDetermination::mids$ = NULL;
              bool AttitudeDetermination::live$ = false;

              jclass AttitudeDetermination::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addSensor_bb8c5ac3b7165de2] = env->getMethodID(cls, "addSensor", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationSensor;)V");
                  mids$[mid_getAttitudeStates_f08064c40442c84b] = env->getMethodID(cls, "getAttitudeStates", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;");
                  mids$[mid_getCovarianceType_dbbc6c3c22ca640c] = env->getMethodID(cls, "getCovarianceType", "()Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;");
                  mids$[mid_getEndpoints_35bd4909c56b6915] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getEulerRotSeq_5aea028785008a06] = env->getMethodID(cls, "getEulerRotSeq", "()Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
                  mids$[mid_getId_11b109bd155ca898] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getMethod_d2912780ca38b0dd] = env->getMethodID(cls, "getMethod", "()Lorg/orekit/files/ccsds/definitions/AdMethodType;");
                  mids$[mid_getNbStates_570ce0828f81a2c1] = env->getMethodID(cls, "getNbStates", "()I");
                  mids$[mid_getPrevId_11b109bd155ca898] = env->getMethodID(cls, "getPrevId", "()Ljava/lang/String;");
                  mids$[mid_getRateProcessNoiseStdDev_dff5885c2c873297] = env->getMethodID(cls, "getRateProcessNoiseStdDev", "()D");
                  mids$[mid_getRateStates_f2358484d07d6202] = env->getMethodID(cls, "getRateStates", "()Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;");
                  mids$[mid_getSensorsUsed_2afa36052df4765d] = env->getMethodID(cls, "getSensorsUsed", "()Ljava/util/List;");
                  mids$[mid_getSigmaU_dff5885c2c873297] = env->getMethodID(cls, "getSigmaU", "()D");
                  mids$[mid_getSigmaV_dff5885c2c873297] = env->getMethodID(cls, "getSigmaV", "()D");
                  mids$[mid_getSource_11b109bd155ca898] = env->getMethodID(cls, "getSource", "()Ljava/lang/String;");
                  mids$[mid_setAttitudeStates_4299529dacf75fa7] = env->getMethodID(cls, "setAttitudeStates", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeElementsType;)V");
                  mids$[mid_setCovarianceType_c9a39b1c926f77b0] = env->getMethodID(cls, "setCovarianceType", "(Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceType;)V");
                  mids$[mid_setEulerRotSeq_a908138988eb2a50] = env->getMethodID(cls, "setEulerRotSeq", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");
                  mids$[mid_setId_d0bc48d5b00dc40c] = env->getMethodID(cls, "setId", "(Ljava/lang/String;)V");
                  mids$[mid_setMethod_2bd74e151e5425a9] = env->getMethodID(cls, "setMethod", "(Lorg/orekit/files/ccsds/definitions/AdMethodType;)V");
                  mids$[mid_setNbStates_99803b0791f320ff] = env->getMethodID(cls, "setNbStates", "(I)V");
                  mids$[mid_setPrevId_d0bc48d5b00dc40c] = env->getMethodID(cls, "setPrevId", "(Ljava/lang/String;)V");
                  mids$[mid_setRateProcessNoiseStdDev_17db3a65980d3441] = env->getMethodID(cls, "setRateProcessNoiseStdDev", "(D)V");
                  mids$[mid_setRateStates_819c66db610b1575] = env->getMethodID(cls, "setRateStates", "(Lorg/orekit/files/ccsds/ndm/adm/acm/RateElementsType;)V");
                  mids$[mid_setSigmaU_17db3a65980d3441] = env->getMethodID(cls, "setSigmaU", "(D)V");
                  mids$[mid_setSigmaV_17db3a65980d3441] = env->getMethodID(cls, "setSigmaV", "(D)V");
                  mids$[mid_setSource_d0bc48d5b00dc40c] = env->getMethodID(cls, "setSource", "(Ljava/lang/String;)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeDetermination::AttitudeDetermination() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              void AttitudeDetermination::addSensor(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_addSensor_bb8c5ac3b7165de2], a0.this$);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType AttitudeDetermination::getAttitudeStates() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType(env->callObjectMethod(this$, mids$[mid_getAttitudeStates_f08064c40442c84b]));
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType AttitudeDetermination::getCovarianceType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType(env->callObjectMethod(this$, mids$[mid_getCovarianceType_dbbc6c3c22ca640c]));
              }

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints AttitudeDetermination::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_35bd4909c56b6915]));
              }

              ::org::hipparchus::geometry::euclidean::threed::RotationOrder AttitudeDetermination::getEulerRotSeq() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::RotationOrder(env->callObjectMethod(this$, mids$[mid_getEulerRotSeq_5aea028785008a06]));
              }

              ::java::lang::String AttitudeDetermination::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_11b109bd155ca898]));
              }

              ::org::orekit::files::ccsds::definitions::AdMethodType AttitudeDetermination::getMethod() const
              {
                return ::org::orekit::files::ccsds::definitions::AdMethodType(env->callObjectMethod(this$, mids$[mid_getMethod_d2912780ca38b0dd]));
              }

              jint AttitudeDetermination::getNbStates() const
              {
                return env->callIntMethod(this$, mids$[mid_getNbStates_570ce0828f81a2c1]);
              }

              ::java::lang::String AttitudeDetermination::getPrevId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPrevId_11b109bd155ca898]));
              }

              jdouble AttitudeDetermination::getRateProcessNoiseStdDev() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getRateProcessNoiseStdDev_dff5885c2c873297]);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType AttitudeDetermination::getRateStates() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType(env->callObjectMethod(this$, mids$[mid_getRateStates_f2358484d07d6202]));
              }

              ::java::util::List AttitudeDetermination::getSensorsUsed() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSensorsUsed_2afa36052df4765d]));
              }

              jdouble AttitudeDetermination::getSigmaU() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSigmaU_dff5885c2c873297]);
              }

              jdouble AttitudeDetermination::getSigmaV() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getSigmaV_dff5885c2c873297]);
              }

              ::java::lang::String AttitudeDetermination::getSource() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSource_11b109bd155ca898]));
              }

              void AttitudeDetermination::setAttitudeStates(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeStates_4299529dacf75fa7], a0.this$);
              }

              void AttitudeDetermination::setCovarianceType(const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCovarianceType_c9a39b1c926f77b0], a0.this$);
              }

              void AttitudeDetermination::setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEulerRotSeq_a908138988eb2a50], a0.this$);
              }

              void AttitudeDetermination::setId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setId_d0bc48d5b00dc40c], a0.this$);
              }

              void AttitudeDetermination::setMethod(const ::org::orekit::files::ccsds::definitions::AdMethodType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMethod_2bd74e151e5425a9], a0.this$);
              }

              void AttitudeDetermination::setNbStates(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setNbStates_99803b0791f320ff], a0);
              }

              void AttitudeDetermination::setPrevId(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setPrevId_d0bc48d5b00dc40c], a0.this$);
              }

              void AttitudeDetermination::setRateProcessNoiseStdDev(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateProcessNoiseStdDev_17db3a65980d3441], a0);
              }

              void AttitudeDetermination::setRateStates(const ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateStates_819c66db610b1575], a0.this$);
              }

              void AttitudeDetermination::setSigmaU(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSigmaU_17db3a65980d3441], a0);
              }

              void AttitudeDetermination::setSigmaV(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSigmaV_17db3a65980d3441], a0);
              }

              void AttitudeDetermination::setSource(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSource_d0bc48d5b00dc40c], a0.this$);
              }

              void AttitudeDetermination::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
              static PyObject *t_AttitudeDetermination_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDetermination_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeDetermination_init_(t_AttitudeDetermination *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeDetermination_addSensor(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_getAttitudeStates(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getCovarianceType(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getEndpoints(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getEulerRotSeq(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getId(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getMethod(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getNbStates(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getPrevId(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getRateProcessNoiseStdDev(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getRateStates(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getSensorsUsed(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getSigmaU(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getSigmaV(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_getSource(t_AttitudeDetermination *self);
              static PyObject *t_AttitudeDetermination_setAttitudeStates(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setCovarianceType(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setEulerRotSeq(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setId(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setMethod(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setNbStates(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setPrevId(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setRateProcessNoiseStdDev(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setRateStates(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setSigmaU(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setSigmaV(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_setSource(t_AttitudeDetermination *self, PyObject *arg);
              static PyObject *t_AttitudeDetermination_validate(t_AttitudeDetermination *self, PyObject *args);
              static PyObject *t_AttitudeDetermination_get__attitudeStates(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__attitudeStates(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__covarianceType(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__covarianceType(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__endpoints(t_AttitudeDetermination *self, void *data);
              static PyObject *t_AttitudeDetermination_get__eulerRotSeq(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__eulerRotSeq(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__id(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__id(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__method(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__method(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__nbStates(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__nbStates(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__prevId(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__prevId(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__rateProcessNoiseStdDev(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__rateProcessNoiseStdDev(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__rateStates(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__rateStates(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__sensorsUsed(t_AttitudeDetermination *self, void *data);
              static PyObject *t_AttitudeDetermination_get__sigmaU(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__sigmaU(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__sigmaV(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__sigmaV(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyObject *t_AttitudeDetermination_get__source(t_AttitudeDetermination *self, void *data);
              static int t_AttitudeDetermination_set__source(t_AttitudeDetermination *self, PyObject *arg, void *data);
              static PyGetSetDef t_AttitudeDetermination__fields_[] = {
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, attitudeStates),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, covarianceType),
                DECLARE_GET_FIELD(t_AttitudeDetermination, endpoints),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, eulerRotSeq),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, id),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, method),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, nbStates),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, prevId),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, rateProcessNoiseStdDev),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, rateStates),
                DECLARE_GET_FIELD(t_AttitudeDetermination, sensorsUsed),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, sigmaU),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, sigmaV),
                DECLARE_GETSET_FIELD(t_AttitudeDetermination, source),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeDetermination__methods_[] = {
                DECLARE_METHOD(t_AttitudeDetermination, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDetermination, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDetermination, addSensor, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, getAttitudeStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getCovarianceType, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getEulerRotSeq, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getId, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getMethod, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getNbStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getPrevId, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getRateProcessNoiseStdDev, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getRateStates, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getSensorsUsed, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getSigmaU, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getSigmaV, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, getSource, METH_NOARGS),
                DECLARE_METHOD(t_AttitudeDetermination, setAttitudeStates, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setCovarianceType, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setEulerRotSeq, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setId, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setMethod, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setNbStates, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setPrevId, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setRateProcessNoiseStdDev, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setRateStates, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setSigmaU, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setSigmaV, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, setSource, METH_O),
                DECLARE_METHOD(t_AttitudeDetermination, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeDetermination)[] = {
                { Py_tp_methods, t_AttitudeDetermination__methods_ },
                { Py_tp_init, (void *) t_AttitudeDetermination_init_ },
                { Py_tp_getset, t_AttitudeDetermination__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeDetermination)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AttitudeDetermination, t_AttitudeDetermination, AttitudeDetermination);

              void t_AttitudeDetermination::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeDetermination), &PY_TYPE_DEF(AttitudeDetermination), module, "AttitudeDetermination", 0);
              }

              void t_AttitudeDetermination::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDetermination), "class_", make_descriptor(AttitudeDetermination::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDetermination), "wrapfn_", make_descriptor(t_AttitudeDetermination::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDetermination), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeDetermination_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeDetermination::initializeClass, 1)))
                  return NULL;
                return t_AttitudeDetermination::wrap_Object(AttitudeDetermination(((t_AttitudeDetermination *) arg)->object.this$));
              }
              static PyObject *t_AttitudeDetermination_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeDetermination::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeDetermination_init_(t_AttitudeDetermination *self, PyObject *args, PyObject *kwds)
              {
                AttitudeDetermination object((jobject) NULL);

                INT_CALL(object = AttitudeDetermination());
                self->object = object;

                return 0;
              }

              static PyObject *t_AttitudeDetermination_addSensor(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationSensor::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addSensor(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "addSensor", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_getAttitudeStates(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeStates());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getCovarianceType(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType result((jobject) NULL);
                OBJ_CALL(result = self->object.getCovarianceType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getEndpoints(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getEulerRotSeq(t_AttitudeDetermination *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getId(t_AttitudeDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_AttitudeDetermination_getMethod(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::definitions::AdMethodType result((jobject) NULL);
                OBJ_CALL(result = self->object.getMethod());
                return ::org::orekit::files::ccsds::definitions::t_AdMethodType::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getNbStates(t_AttitudeDetermination *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getNbStates());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AttitudeDetermination_getPrevId(t_AttitudeDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getPrevId());
                return j2p(result);
              }

              static PyObject *t_AttitudeDetermination_getRateProcessNoiseStdDev(t_AttitudeDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getRateProcessNoiseStdDev());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeDetermination_getRateStates(t_AttitudeDetermination *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType result((jobject) NULL);
                OBJ_CALL(result = self->object.getRateStates());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(result);
              }

              static PyObject *t_AttitudeDetermination_getSensorsUsed(t_AttitudeDetermination *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSensorsUsed());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeDeterminationSensor));
              }

              static PyObject *t_AttitudeDetermination_getSigmaU(t_AttitudeDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSigmaU());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeDetermination_getSigmaV(t_AttitudeDetermination *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getSigmaV());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_AttitudeDetermination_getSource(t_AttitudeDetermination *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getSource());
                return j2p(result);
              }

              static PyObject *t_AttitudeDetermination_setAttitudeStates(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setAttitudeStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeStates", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setCovarianceType(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::parameters_))
                {
                  OBJ_CALL(self->object.setCovarianceType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCovarianceType", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setEulerRotSeq(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::parameters_))
                {
                  OBJ_CALL(self->object.setEulerRotSeq(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEulerRotSeq", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setId(t_AttitudeDetermination *self, PyObject *arg)
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

              static PyObject *t_AttitudeDetermination_setMethod(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::AdMethodType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::definitions::AdMethodType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::definitions::t_AdMethodType::parameters_))
                {
                  OBJ_CALL(self->object.setMethod(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMethod", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setNbStates(t_AttitudeDetermination *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setNbStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setNbStates", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setPrevId(t_AttitudeDetermination *self, PyObject *arg)
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

              static PyObject *t_AttitudeDetermination_setRateProcessNoiseStdDev(t_AttitudeDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setRateProcessNoiseStdDev(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateProcessNoiseStdDev", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setRateStates(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::parameters_))
                {
                  OBJ_CALL(self->object.setRateStates(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateStates", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setSigmaU(t_AttitudeDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSigmaU(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSigmaU", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setSigmaV(t_AttitudeDetermination *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setSigmaV(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSigmaV", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_setSource(t_AttitudeDetermination *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setSource(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSource", arg);
                return NULL;
              }

              static PyObject *t_AttitudeDetermination_validate(t_AttitudeDetermination *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AttitudeDetermination), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_AttitudeDetermination_get__attitudeStates(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeStates());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeElementsType::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__attitudeStates(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAttitudeStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeStates", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__covarianceType(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                OBJ_CALL(value = self->object.getCovarianceType());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_AttitudeCovarianceType::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__covarianceType(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setCovarianceType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "covarianceType", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__endpoints(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_AttitudeDetermination_get__eulerRotSeq(t_AttitudeDetermination *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__eulerRotSeq(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::RotationOrder::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEulerRotSeq(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "eulerRotSeq", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__id(t_AttitudeDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }
              static int t_AttitudeDetermination_set__id(t_AttitudeDetermination *self, PyObject *arg, void *data)
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

              static PyObject *t_AttitudeDetermination_get__method(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::AdMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getMethod());
                return ::org::orekit::files::ccsds::definitions::t_AdMethodType::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__method(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::AdMethodType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::AdMethodType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setMethod(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "method", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__nbStates(t_AttitudeDetermination *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getNbStates());
                return PyLong_FromLong((long) value);
              }
              static int t_AttitudeDetermination_set__nbStates(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setNbStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "nbStates", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__prevId(t_AttitudeDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getPrevId());
                return j2p(value);
              }
              static int t_AttitudeDetermination_set__prevId(t_AttitudeDetermination *self, PyObject *arg, void *data)
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

              static PyObject *t_AttitudeDetermination_get__rateProcessNoiseStdDev(t_AttitudeDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getRateProcessNoiseStdDev());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeDetermination_set__rateProcessNoiseStdDev(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setRateProcessNoiseStdDev(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "rateProcessNoiseStdDev", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__rateStates(t_AttitudeDetermination *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                OBJ_CALL(value = self->object.getRateStates());
                return ::org::orekit::files::ccsds::ndm::adm::acm::t_RateElementsType::wrap_Object(value);
              }
              static int t_AttitudeDetermination_set__rateStates(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::acm::RateElementsType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setRateStates(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "rateStates", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__sensorsUsed(t_AttitudeDetermination *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSensorsUsed());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AttitudeDetermination_get__sigmaU(t_AttitudeDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSigmaU());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeDetermination_set__sigmaU(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSigmaU(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sigmaU", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__sigmaV(t_AttitudeDetermination *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getSigmaV());
                return PyFloat_FromDouble((double) value);
              }
              static int t_AttitudeDetermination_set__sigmaV(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setSigmaV(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "sigmaV", arg);
                return -1;
              }

              static PyObject *t_AttitudeDetermination_get__source(t_AttitudeDetermination *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getSource());
                return j2p(value);
              }
              static int t_AttitudeDetermination_set__source(t_AttitudeDetermination *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setSource(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "source", arg);
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata.h"
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

              ::java::lang::Class *AttitudeCovarianceHistoryMetadataKey::class$ = NULL;
              jmethodID *AttitudeCovarianceHistoryMetadataKey::mids$ = NULL;
              bool AttitudeCovarianceHistoryMetadataKey::live$ = false;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COMMENT = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_BASIS = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_BASIS_ID = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_ID = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_PREV_ID = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_REF_FRAME = NULL;
              AttitudeCovarianceHistoryMetadataKey *AttitudeCovarianceHistoryMetadataKey::COV_TYPE = NULL;

              jclass AttitudeCovarianceHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_e09e56f27a403a39] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadata;)Z");
                  mids$[mid_valueOf_2f7811d4f58a13da] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;");
                  mids$[mid_values_65605db3ba401a3e] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  COMMENT = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_BASIS = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_BASIS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_BASIS_ID = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_ID = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_PREV_ID = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_PREV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_REF_FRAME = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  COV_TYPE = new AttitudeCovarianceHistoryMetadataKey(env->getStaticObjectField(cls, "COV_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeCovarianceHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeCovarianceHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_e09e56f27a403a39], a0.this$, a1.this$, a2.this$);
              }

              AttitudeCovarianceHistoryMetadataKey AttitudeCovarianceHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeCovarianceHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2f7811d4f58a13da], a0.this$));
              }

              JArray< AttitudeCovarianceHistoryMetadataKey > AttitudeCovarianceHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeCovarianceHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_65605db3ba401a3e]));
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
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_of_(t_AttitudeCovarianceHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_process(t_AttitudeCovarianceHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_get__parameters_(t_AttitudeCovarianceHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_AttitudeCovarianceHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeCovarianceHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeCovarianceHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeCovarianceHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeCovarianceHistoryMetadataKey)[] = {
                { Py_tp_methods, t_AttitudeCovarianceHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeCovarianceHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeCovarianceHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeCovarianceHistoryMetadataKey, t_AttitudeCovarianceHistoryMetadataKey, AttitudeCovarianceHistoryMetadataKey);
              PyObject *t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(const AttitudeCovarianceHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeCovarianceHistoryMetadataKey *self = (t_AttitudeCovarianceHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeCovarianceHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeCovarianceHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeCovarianceHistoryMetadataKey *self = (t_AttitudeCovarianceHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeCovarianceHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeCovarianceHistoryMetadataKey), &PY_TYPE_DEF(AttitudeCovarianceHistoryMetadataKey), module, "AttitudeCovarianceHistoryMetadataKey", 0);
              }

              void t_AttitudeCovarianceHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "class_", make_descriptor(AttitudeCovarianceHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "wrapfn_", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeCovarianceHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COMMENT", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_BASIS", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_BASIS_ID", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_ID", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_PREV_ID", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_REF_FRAME", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeCovarianceHistoryMetadataKey), "COV_TYPE", make_descriptor(t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(*AttitudeCovarianceHistoryMetadataKey::COV_TYPE)));
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeCovarianceHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(AttitudeCovarianceHistoryMetadataKey(((t_AttitudeCovarianceHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeCovarianceHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_of_(t_AttitudeCovarianceHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_process(t_AttitudeCovarianceHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeCovarianceHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadataKey::valueOf(a0));
                  return t_AttitudeCovarianceHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< AttitudeCovarianceHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeCovarianceHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeCovarianceHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_AttitudeCovarianceHistoryMetadataKey_get__parameters_(t_AttitudeCovarianceHistoryMetadataKey *self, void *data)
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
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimator.h"
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/sequential/CovarianceMatrixProvider.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *UnscentedKalmanEstimatorBuilder::class$ = NULL;
        jmethodID *UnscentedKalmanEstimatorBuilder::mids$ = NULL;
        bool UnscentedKalmanEstimatorBuilder::live$ = false;

        jclass UnscentedKalmanEstimatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addPropagationConfiguration_4f0222b06fa4311a] = env->getMethodID(cls, "addPropagationConfiguration", "(Lorg/orekit/propagation/conversion/PropagatorBuilder;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder;");
            mids$[mid_build_a5b48003a865cd83] = env->getMethodID(cls, "build", "()Lorg/orekit/estimation/sequential/UnscentedKalmanEstimator;");
            mids$[mid_decomposer_e93e2b79e62135b3] = env->getMethodID(cls, "decomposer", "(Lorg/hipparchus/linear/MatrixDecomposer;)Lorg/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder;");
            mids$[mid_estimatedMeasurementsParameters_a8e81bedebfdb55c] = env->getMethodID(cls, "estimatedMeasurementsParameters", "(Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/sequential/CovarianceMatrixProvider;)Lorg/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder;");
            mids$[mid_unscentedTransformProvider_a5c354e7e08b95e2] = env->getMethodID(cls, "unscentedTransformProvider", "(Lorg/hipparchus/util/UnscentedTransformProvider;)Lorg/orekit/estimation/sequential/UnscentedKalmanEstimatorBuilder;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnscentedKalmanEstimatorBuilder::UnscentedKalmanEstimatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        UnscentedKalmanEstimatorBuilder UnscentedKalmanEstimatorBuilder::addPropagationConfiguration(const ::org::orekit::propagation::conversion::PropagatorBuilder & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return UnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_addPropagationConfiguration_4f0222b06fa4311a], a0.this$, a1.this$));
        }

        ::org::orekit::estimation::sequential::UnscentedKalmanEstimator UnscentedKalmanEstimatorBuilder::build() const
        {
          return ::org::orekit::estimation::sequential::UnscentedKalmanEstimator(env->callObjectMethod(this$, mids$[mid_build_a5b48003a865cd83]));
        }

        UnscentedKalmanEstimatorBuilder UnscentedKalmanEstimatorBuilder::decomposer(const ::org::hipparchus::linear::MatrixDecomposer & a0) const
        {
          return UnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_decomposer_e93e2b79e62135b3], a0.this$));
        }

        UnscentedKalmanEstimatorBuilder UnscentedKalmanEstimatorBuilder::estimatedMeasurementsParameters(const ::org::orekit::utils::ParameterDriversList & a0, const ::org::orekit::estimation::sequential::CovarianceMatrixProvider & a1) const
        {
          return UnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_estimatedMeasurementsParameters_a8e81bedebfdb55c], a0.this$, a1.this$));
        }

        UnscentedKalmanEstimatorBuilder UnscentedKalmanEstimatorBuilder::unscentedTransformProvider(const ::org::hipparchus::util::UnscentedTransformProvider & a0) const
        {
          return UnscentedKalmanEstimatorBuilder(env->callObjectMethod(this$, mids$[mid_unscentedTransformProvider_a5c354e7e08b95e2], a0.this$));
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
        static PyObject *t_UnscentedKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnscentedKalmanEstimatorBuilder_init_(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_addPropagationConfiguration(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_build(t_UnscentedKalmanEstimatorBuilder *self);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_decomposer(t_UnscentedKalmanEstimatorBuilder *self, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args);
        static PyObject *t_UnscentedKalmanEstimatorBuilder_unscentedTransformProvider(t_UnscentedKalmanEstimatorBuilder *self, PyObject *arg);

        static PyMethodDef t_UnscentedKalmanEstimatorBuilder__methods_[] = {
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, addPropagationConfiguration, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, decomposer, METH_O),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, estimatedMeasurementsParameters, METH_VARARGS),
          DECLARE_METHOD(t_UnscentedKalmanEstimatorBuilder, unscentedTransformProvider, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnscentedKalmanEstimatorBuilder)[] = {
          { Py_tp_methods, t_UnscentedKalmanEstimatorBuilder__methods_ },
          { Py_tp_init, (void *) t_UnscentedKalmanEstimatorBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnscentedKalmanEstimatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnscentedKalmanEstimatorBuilder, t_UnscentedKalmanEstimatorBuilder, UnscentedKalmanEstimatorBuilder);

        void t_UnscentedKalmanEstimatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(UnscentedKalmanEstimatorBuilder), &PY_TYPE_DEF(UnscentedKalmanEstimatorBuilder), module, "UnscentedKalmanEstimatorBuilder", 0);
        }

        void t_UnscentedKalmanEstimatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimatorBuilder), "class_", make_descriptor(UnscentedKalmanEstimatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimatorBuilder), "wrapfn_", make_descriptor(t_UnscentedKalmanEstimatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnscentedKalmanEstimatorBuilder::initializeClass, 1)))
            return NULL;
          return t_UnscentedKalmanEstimatorBuilder::wrap_Object(UnscentedKalmanEstimatorBuilder(((t_UnscentedKalmanEstimatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_UnscentedKalmanEstimatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnscentedKalmanEstimatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnscentedKalmanEstimatorBuilder_init_(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          UnscentedKalmanEstimatorBuilder object((jobject) NULL);

          INT_CALL(object = UnscentedKalmanEstimatorBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_addPropagationConfiguration(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::propagation::conversion::PropagatorBuilder a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          UnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.addPropagationConfiguration(a0, a1));
            return t_UnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addPropagationConfiguration", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_build(t_UnscentedKalmanEstimatorBuilder *self)
        {
          ::org::orekit::estimation::sequential::UnscentedKalmanEstimator result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::estimation::sequential::t_UnscentedKalmanEstimator::wrap_Object(result);
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_decomposer(t_UnscentedKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::linear::MatrixDecomposer a0((jobject) NULL);
          UnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::MatrixDecomposer::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.decomposer(a0));
            return t_UnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "decomposer", arg);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_estimatedMeasurementsParameters(t_UnscentedKalmanEstimatorBuilder *self, PyObject *args)
        {
          ::org::orekit::utils::ParameterDriversList a0((jobject) NULL);
          ::org::orekit::estimation::sequential::CovarianceMatrixProvider a1((jobject) NULL);
          UnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::sequential::CovarianceMatrixProvider::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.estimatedMeasurementsParameters(a0, a1));
            return t_UnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimatedMeasurementsParameters", args);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimatorBuilder_unscentedTransformProvider(t_UnscentedKalmanEstimatorBuilder *self, PyObject *arg)
        {
          ::org::hipparchus::util::UnscentedTransformProvider a0((jobject) NULL);
          UnscentedKalmanEstimatorBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::util::UnscentedTransformProvider::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.unscentedTransformProvider(a0));
            return t_UnscentedKalmanEstimatorBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "unscentedTransformProvider", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/PythonAbstractConstantThrustPropulsionModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
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

          ::java::lang::Class *PythonAbstractConstantThrustPropulsionModel::class$ = NULL;
          jmethodID *PythonAbstractConstantThrustPropulsionModel::mids$ = NULL;
          bool PythonAbstractConstantThrustPropulsionModel::live$ = false;

          jclass PythonAbstractConstantThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PythonAbstractConstantThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bd301e65f74781e6] = env->getMethodID(cls, "<init>", "(DDLorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getFlowRate_dff5885c2c873297] = env->getMethodID(cls, "getFlowRate", "()D");
              mids$[mid_getFlowRate_9dc1ec0bcc0a9a29] = env->getMethodID(cls, "getFlowRate", "([D)D");
              mids$[mid_getFlowRate_f2dc4f0d2f87d390] = env->getMethodID(cls, "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFlowRate_bf1d7732f1acb697] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_d52645e0d4c07563] = env->getMethodID(cls, "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_36619a55dd67cb97] = env->getMethodID(cls, "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_3cf6594f36d3d60d] = env->getMethodID(cls, "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_24461752d0eea1e3] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractConstantThrustPropulsionModel::PythonAbstractConstantThrustPropulsionModel(jdouble a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a3, const ::java::lang::String & a4) : ::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel(env->newObject(initializeClass, &mids$, mid_init$_bd301e65f74781e6, a0, a1, a2.this$, a3.this$, a4.this$)) {}

          void PythonAbstractConstantThrustPropulsionModel::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonAbstractConstantThrustPropulsionModel::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonAbstractConstantThrustPropulsionModel::pythonExtension(jlong a0) const
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
        namespace propulsion {
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractConstantThrustPropulsionModel_init_(t_PythonAbstractConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_finalize(t_PythonAbstractConstantThrustPropulsionModel *self);
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_pythonExtension(t_PythonAbstractConstantThrustPropulsionModel *self, PyObject *args);
          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate0(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate1(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate2(JNIEnv *jenv, jobject jobj, jobject a0);
          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate3(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getParametersDrivers4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector6(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector7(JNIEnv *jenv, jobject jobj, jobject a0);
          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector8(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonAbstractConstantThrustPropulsionModel_pythonDecRef9(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_get__self(t_PythonAbstractConstantThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_PythonAbstractConstantThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractConstantThrustPropulsionModel, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractConstantThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractConstantThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractConstantThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractConstantThrustPropulsionModel, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractConstantThrustPropulsionModel, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractConstantThrustPropulsionModel)[] = {
            { Py_tp_methods, t_PythonAbstractConstantThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractConstantThrustPropulsionModel_init_ },
            { Py_tp_getset, t_PythonAbstractConstantThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractConstantThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::propulsion::AbstractConstantThrustPropulsionModel),
            NULL
          };

          DEFINE_TYPE(PythonAbstractConstantThrustPropulsionModel, t_PythonAbstractConstantThrustPropulsionModel, PythonAbstractConstantThrustPropulsionModel);

          void t_PythonAbstractConstantThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractConstantThrustPropulsionModel), &PY_TYPE_DEF(PythonAbstractConstantThrustPropulsionModel), module, "PythonAbstractConstantThrustPropulsionModel", 1);
          }

          void t_PythonAbstractConstantThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstantThrustPropulsionModel), "class_", make_descriptor(PythonAbstractConstantThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstantThrustPropulsionModel), "wrapfn_", make_descriptor(t_PythonAbstractConstantThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractConstantThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractConstantThrustPropulsionModel::initializeClass);
            JNINativeMethod methods[] = {
              { "getFlowRate", "()D", (void *) t_PythonAbstractConstantThrustPropulsionModel_getFlowRate0 },
              { "getFlowRate", "([D)D", (void *) t_PythonAbstractConstantThrustPropulsionModel_getFlowRate1 },
              { "getFlowRate", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getFlowRate2 },
              { "getFlowRate", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonAbstractConstantThrustPropulsionModel_getFlowRate3 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getParametersDrivers4 },
              { "getThrustVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getThrustVector5 },
              { "getThrustVector", "([D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getThrustVector6 },
              { "getThrustVector", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getThrustVector7 },
              { "getThrustVector", "(Lorg/orekit/time/AbsoluteDate;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractConstantThrustPropulsionModel_getThrustVector8 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractConstantThrustPropulsionModel_pythonDecRef9 },
            };
            env->registerNatives(cls, methods, 10);
          }

          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractConstantThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractConstantThrustPropulsionModel::wrap_Object(PythonAbstractConstantThrustPropulsionModel(((t_PythonAbstractConstantThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractConstantThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractConstantThrustPropulsionModel_init_(t_PythonAbstractConstantThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::orekit::forces::maneuvers::Control3DVectorCostType a3((jobject) NULL);
            PyTypeObject **p3;
            ::java::lang::String a4((jobject) NULL);
            PythonAbstractConstantThrustPropulsionModel object((jobject) NULL);

            if (!parseArgs(args, "DDkKs", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a4))
            {
              INT_CALL(object = PythonAbstractConstantThrustPropulsionModel(a0, a1, a2, a3, a4));
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

          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_finalize(t_PythonAbstractConstantThrustPropulsionModel *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_pythonExtension(t_PythonAbstractConstantThrustPropulsionModel *self, PyObject *args)
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

          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getFlowRate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate1(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = JArray<jdouble>(a0).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getFlowRate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate2(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            PyObject *o0 = JArray<jobject>(a0).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              throwTypeError("getFlowRate", result);
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

          static jdouble JNICALL t_PythonAbstractConstantThrustPropulsionModel_getFlowRate3(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getFlowRate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getFlowRate", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getParametersDrivers4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = JArray<jdouble>(a0).wrap();
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector7(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            PyObject *o0 = JArray<jobject>(a0).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static jobject JNICALL t_PythonAbstractConstantThrustPropulsionModel_getThrustVector8(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "getThrustVector", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("getThrustVector", result);
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

          static void JNICALL t_PythonAbstractConstantThrustPropulsionModel_pythonDecRef9(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractConstantThrustPropulsionModel::mids$[PythonAbstractConstantThrustPropulsionModel::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractConstantThrustPropulsionModel_get__self(t_PythonAbstractConstantThrustPropulsionModel *self, void *data)
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
#include "org/hipparchus/stat/descriptive/summary/Product.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/summary/Product.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          ::java::lang::Class *Product::class$ = NULL;
          jmethodID *Product::mids$ = NULL;
          bool Product::live$ = false;

          jclass Product::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/summary/Product");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_2142388604881136] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/summary/Product;)V");
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_2710c30fb5f7bb06] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/summary/Product;");
              mids$[mid_evaluate_556bede10daac330] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_2634be61548fc62b] = env->getMethodID(cls, "evaluate", "([D[DII)D");
              mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_dff5885c2c873297] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_17db3a65980d3441] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Product::Product() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void Product::aggregate(const Product & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_2142388604881136], a0.this$);
          }

          void Product::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
          }

          Product Product::copy() const
          {
            return Product(env->callObjectMethod(this$, mids$[mid_copy_2710c30fb5f7bb06]));
          }

          jdouble Product::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_556bede10daac330], a0.this$, a1, a2);
          }

          jdouble Product::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_2634be61548fc62b], a0.this$, a1.this$, a2, a3);
          }

          jlong Product::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
          }

          jdouble Product::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_dff5885c2c873297]);
          }

          void Product::increment(jdouble a0) const
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
          static PyObject *t_Product_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Product_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Product_init_(t_Product *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Product_aggregate(t_Product *self, PyObject *arg);
          static PyObject *t_Product_clear(t_Product *self, PyObject *args);
          static PyObject *t_Product_copy(t_Product *self, PyObject *args);
          static PyObject *t_Product_evaluate(t_Product *self, PyObject *args);
          static PyObject *t_Product_getN(t_Product *self, PyObject *args);
          static PyObject *t_Product_getResult(t_Product *self, PyObject *args);
          static PyObject *t_Product_increment(t_Product *self, PyObject *args);
          static PyObject *t_Product_get__n(t_Product *self, void *data);
          static PyObject *t_Product_get__result(t_Product *self, void *data);
          static PyGetSetDef t_Product__fields_[] = {
            DECLARE_GET_FIELD(t_Product, n),
            DECLARE_GET_FIELD(t_Product, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Product__methods_[] = {
            DECLARE_METHOD(t_Product, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Product, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Product, aggregate, METH_O),
            DECLARE_METHOD(t_Product, clear, METH_VARARGS),
            DECLARE_METHOD(t_Product, copy, METH_VARARGS),
            DECLARE_METHOD(t_Product, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Product, getN, METH_VARARGS),
            DECLARE_METHOD(t_Product, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Product, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Product)[] = {
            { Py_tp_methods, t_Product__methods_ },
            { Py_tp_init, (void *) t_Product_init_ },
            { Py_tp_getset, t_Product__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Product)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Product, t_Product, Product);

          void t_Product::install(PyObject *module)
          {
            installType(&PY_TYPE(Product), &PY_TYPE_DEF(Product), module, "Product", 0);
          }

          void t_Product::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Product), "class_", make_descriptor(Product::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Product), "wrapfn_", make_descriptor(t_Product::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Product), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Product_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Product::initializeClass, 1)))
              return NULL;
            return t_Product::wrap_Object(Product(((t_Product *) arg)->object.this$));
          }
          static PyObject *t_Product_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Product::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Product_init_(t_Product *self, PyObject *args, PyObject *kwds)
          {
            Product object((jobject) NULL);

            INT_CALL(object = Product());
            self->object = object;

            return 0;
          }

          static PyObject *t_Product_aggregate(t_Product *self, PyObject *arg)
          {
            Product a0((jobject) NULL);

            if (!parseArg(arg, "k", Product::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Product_clear(t_Product *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Product_copy(t_Product *self, PyObject *args)
          {
            Product result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Product::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Product_evaluate(t_Product *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
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

            return callSuper(PY_TYPE(Product), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Product_getN(t_Product *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Product_getResult(t_Product *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Product_increment(t_Product *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Product_get__n(t_Product *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Product_get__result(t_Product *self, void *data)
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
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris.h"
#include "org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::class$ = NULL;
        jmethodID *OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::mids$ = NULL;
        bool OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::live$ = false;
        ::java::lang::String *OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::DEFAULT_INTERPOLATION_METHOD = NULL;
        jint OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::DEFAULT_INTERPOLATION_SIZE = (jint) 0;

        jclass OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_addNewSegment_3061e5b7306989ba] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;Ljava/lang/String;ILorg/orekit/utils/AngularDerivativesFilter;)Lorg/orekit/files/general/OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment;");
            mids$[mid_getId_11b109bd155ca898] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getSegments_2afa36052df4765d] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_INTERPOLATION_METHOD = new ::java::lang::String(env->getStaticObjectField(cls, "DEFAULT_INTERPOLATION_METHOD", "Ljava/lang/String;"));
            DEFAULT_INTERPOLATION_SIZE = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_SIZE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

        ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::addNewSegment(const ::java::util::List & a0, const ::java::lang::String & a1, jint a2, const ::org::orekit::utils::AngularDerivativesFilter & a3) const
        {
          return ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_3061e5b7306989ba], a0.this$, a1.this$, a2, a3.this$));
        }

        ::java::lang::String OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_11b109bd155ca898]));
        }

        ::java::util::List OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_2afa36052df4765d]));
        }

        ::org::orekit::time::AbsoluteDate OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_85703d13e302437e]));
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
      namespace general {
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_init_(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_addNewSegment(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, PyObject *args);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getId(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getSegments(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getStart(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getStop(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__id(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__segments(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__start(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data);
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__stop(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data);
        static PyGetSetDef t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, id),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, segments),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, start),
          DECLARE_GET_FIELD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris__methods_[] = {
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, addNewSegment, METH_VARARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris)[] = {
          { Py_tp_methods, t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris__methods_ },
          { Py_tp_init, (void *) t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_init_ },
          { Py_tp_getset, t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris, OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris);

        void t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), &PY_TYPE_DEF(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), module, "OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris", 0);
        }

        void t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "class_", make_descriptor(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "wrapfn_", make_descriptor(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "boxfn_", make_descriptor(boxObject));
          env->getClass(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "DEFAULT_INTERPOLATION_METHOD", make_descriptor(j2p(*OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::DEFAULT_INTERPOLATION_METHOD)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris), "DEFAULT_INTERPOLATION_SIZE", make_descriptor(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::DEFAULT_INTERPOLATION_SIZE));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass, 1)))
            return NULL;
          return t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::wrap_Object(OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(((t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *) arg)->object.this$));
        }
        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_init_(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_addNewSegment(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::java::lang::String a1((jobject) NULL);
          jint a2;
          ::org::orekit::utils::AngularDerivativesFilter a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::orekit::files::general::OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment result((jobject) NULL);

          if (!parseArgs(args, "KsIK", ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
          {
            OBJ_CALL(result = self->object.addNewSegment(a0, a1, a2, a3));
            return ::org::orekit::files::general::t_OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addNewSegment", args);
          return NULL;
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getId(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getSegments(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::general::PY_TYPE(OrekitAttitudeEphemerisFile$OrekitAttitudeEphemerisSegment));
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getStart(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_getStop(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__id(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__segments(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__start(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris_get__stop(t_OrekitAttitudeEphemerisFile$OrekitSatelliteAttitudeEphemeris *self, void *data)
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
#include "org/orekit/time/TimeInterpolator.h"
#include "java/util/stream/Stream.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeInterpolator::class$ = NULL;
      jmethodID *TimeInterpolator::mids$ = NULL;
      bool TimeInterpolator::live$ = false;

      jclass TimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getExtrapolationThreshold_dff5885c2c873297] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_570ce0828f81a2c1] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_2afa36052df4765d] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_706b4b6f6d197b4e] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/TimeStamped;");
          mids$[mid_interpolate_ca327566eddabc11] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/TimeStamped;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TimeInterpolator::getExtrapolationThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExtrapolationThreshold_dff5885c2c873297]);
      }

      jint TimeInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_570ce0828f81a2c1]);
      }

      ::java::util::List TimeInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_2afa36052df4765d]));
      }

      ::org::orekit::time::TimeStamped TimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_706b4b6f6d197b4e], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeStamped TimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_ca327566eddabc11], a0.this$, a1.this$));
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
      static PyObject *t_TimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeInterpolator_of_(t_TimeInterpolator *self, PyObject *args);
      static PyObject *t_TimeInterpolator_getExtrapolationThreshold(t_TimeInterpolator *self);
      static PyObject *t_TimeInterpolator_getNbInterpolationPoints(t_TimeInterpolator *self);
      static PyObject *t_TimeInterpolator_getSubInterpolators(t_TimeInterpolator *self);
      static PyObject *t_TimeInterpolator_interpolate(t_TimeInterpolator *self, PyObject *args);
      static PyObject *t_TimeInterpolator_get__extrapolationThreshold(t_TimeInterpolator *self, void *data);
      static PyObject *t_TimeInterpolator_get__nbInterpolationPoints(t_TimeInterpolator *self, void *data);
      static PyObject *t_TimeInterpolator_get__subInterpolators(t_TimeInterpolator *self, void *data);
      static PyObject *t_TimeInterpolator_get__parameters_(t_TimeInterpolator *self, void *data);
      static PyGetSetDef t_TimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeInterpolator, extrapolationThreshold),
        DECLARE_GET_FIELD(t_TimeInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_TimeInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_TimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeInterpolator, getExtrapolationThreshold, METH_NOARGS),
        DECLARE_METHOD(t_TimeInterpolator, getNbInterpolationPoints, METH_NOARGS),
        DECLARE_METHOD(t_TimeInterpolator, getSubInterpolators, METH_NOARGS),
        DECLARE_METHOD(t_TimeInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeInterpolator)[] = {
        { Py_tp_methods, t_TimeInterpolator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeInterpolator, t_TimeInterpolator, TimeInterpolator);
      PyObject *t_TimeInterpolator::wrap_Object(const TimeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeInterpolator *self = (t_TimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeInterpolator *self = (t_TimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeInterpolator), &PY_TYPE_DEF(TimeInterpolator), module, "TimeInterpolator", 0);
      }

      void t_TimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeInterpolator), "class_", make_descriptor(TimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeInterpolator), "wrapfn_", make_descriptor(t_TimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeInterpolator::wrap_Object(TimeInterpolator(((t_TimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeInterpolator_of_(t_TimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeInterpolator_getExtrapolationThreshold(t_TimeInterpolator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeInterpolator_getNbInterpolationPoints(t_TimeInterpolator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeInterpolator_getSubInterpolators(t_TimeInterpolator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_TimeInterpolator_interpolate(t_TimeInterpolator *self, PyObject *args)
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
      static PyObject *t_TimeInterpolator_get__parameters_(t_TimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeInterpolator_get__extrapolationThreshold(t_TimeInterpolator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TimeInterpolator_get__nbInterpolationPoints(t_TimeInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_TimeInterpolator_get__subInterpolators(t_TimeInterpolator *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSRangeModifier.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSRange.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaOneWayGNSSRangeModifier::class$ = NULL;
          jmethodID *OnBoardAntennaOneWayGNSSRangeModifier::mids$ = NULL;
          bool OnBoardAntennaOneWayGNSSRangeModifier::live$ = false;

          jclass OnBoardAntennaOneWayGNSSRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaOneWayGNSSRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_42136dcb6d46591a] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/attitudes/AttitudeProvider;)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaOneWayGNSSRangeModifier::OnBoardAntennaOneWayGNSSRangeModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_42136dcb6d46591a, a0.this$, a1.this$, a2.this$)) {}

          ::java::util::List OnBoardAntennaOneWayGNSSRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void OnBoardAntennaOneWayGNSSRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaOneWayGNSSRangeModifier_init_(t_OnBoardAntennaOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_getParametersDrivers(t_OnBoardAntennaOneWayGNSSRangeModifier *self);
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaOneWayGNSSRangeModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_get__parametersDrivers(t_OnBoardAntennaOneWayGNSSRangeModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaOneWayGNSSRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaOneWayGNSSRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaOneWayGNSSRangeModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaOneWayGNSSRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaOneWayGNSSRangeModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaOneWayGNSSRangeModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaOneWayGNSSRangeModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaOneWayGNSSRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaOneWayGNSSRangeModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaOneWayGNSSRangeModifier, t_OnBoardAntennaOneWayGNSSRangeModifier, OnBoardAntennaOneWayGNSSRangeModifier);

          void t_OnBoardAntennaOneWayGNSSRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier), &PY_TYPE_DEF(OnBoardAntennaOneWayGNSSRangeModifier), module, "OnBoardAntennaOneWayGNSSRangeModifier", 0);
          }

          void t_OnBoardAntennaOneWayGNSSRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier), "class_", make_descriptor(OnBoardAntennaOneWayGNSSRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaOneWayGNSSRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaOneWayGNSSRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaOneWayGNSSRangeModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaOneWayGNSSRangeModifier::wrap_Object(OnBoardAntennaOneWayGNSSRangeModifier(((t_OnBoardAntennaOneWayGNSSRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaOneWayGNSSRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaOneWayGNSSRangeModifier_init_(t_OnBoardAntennaOneWayGNSSRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
            OnBoardAntennaOneWayGNSSRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = OnBoardAntennaOneWayGNSSRangeModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_getParametersDrivers(t_OnBoardAntennaOneWayGNSSRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_modifyWithoutDerivatives(t_OnBoardAntennaOneWayGNSSRangeModifier *self, PyObject *arg)
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

          static PyObject *t_OnBoardAntennaOneWayGNSSRangeModifier_get__parametersDrivers(t_OnBoardAntennaOneWayGNSSRangeModifier *self, void *data)
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
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::class$ = NULL;
          jmethodID *UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::mids$ = NULL;
          bool UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::live$ = false;

          jclass UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getUnnormalizedCnm_dbbe5f05149dbf73] = env->getMethodID(cls, "getUnnormalizedCnm", "(II)D");
              mids$[mid_getUnnormalizedSnm_dbbe5f05149dbf73] = env->getMethodID(cls, "getUnnormalizedSnm", "(II)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::getUnnormalizedCnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getUnnormalizedCnm_dbbe5f05149dbf73], a0, a1);
          }

          jdouble UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::getUnnormalizedSnm(jint a0, jint a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getUnnormalizedSnm_dbbe5f05149dbf73], a0, a1);
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
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_getUnnormalizedCnm(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *self, PyObject *args);
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_getUnnormalizedSnm(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *self, PyObject *args);

          static PyMethodDef t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics__methods_[] = {
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, getUnnormalizedCnm, METH_VARARGS),
            DECLARE_METHOD(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, getUnnormalizedSnm, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics)[] = {
            { Py_tp_methods, t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics)[] = {
            &PY_TYPE_DEF(::org::orekit::time::TimeStamped),
            NULL
          };

          DEFINE_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics, UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics);

          void t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::install(PyObject *module)
          {
            installType(&PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), &PY_TYPE_DEF(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), module, "UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics", 0);
          }

          void t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), "class_", make_descriptor(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), "wrapfn_", make_descriptor(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, 1)))
              return NULL;
            return t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::wrap_Object(UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics(((t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *) arg)->object.this$));
          }
          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_getUnnormalizedCnm(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getUnnormalizedCnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getUnnormalizedCnm", args);
            return NULL;
          }

          static PyObject *t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics_getUnnormalizedSnm(t_UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "II", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getUnnormalizedSnm(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getUnnormalizedSnm", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/RombergIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *RombergIntegrator::class$ = NULL;
        jmethodID *RombergIntegrator::mids$ = NULL;
        bool RombergIntegrator::live$ = false;
        jint RombergIntegrator::ROMBERG_MAX_ITERATIONS_COUNT = (jint) 0;

        jclass RombergIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/RombergIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_6f37635c3285dbdf] = env->getMethodID(cls, "<init>", "(II)V");
            mids$[mid_init$_1b5e9254fb70ca20] = env->getMethodID(cls, "<init>", "(DDII)V");
            mids$[mid_doIntegrate_dff5885c2c873297] = env->getMethodID(cls, "doIntegrate", "()D");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ROMBERG_MAX_ITERATIONS_COUNT = env->getStaticIntField(cls, "ROMBERG_MAX_ITERATIONS_COUNT");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RombergIntegrator::RombergIntegrator() : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        RombergIntegrator::RombergIntegrator(jint a0, jint a1) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_6f37635c3285dbdf, a0, a1)) {}

        RombergIntegrator::RombergIntegrator(jdouble a0, jdouble a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_1b5e9254fb70ca20, a0, a1, a2, a3)) {}
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
        static PyObject *t_RombergIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RombergIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RombergIntegrator_init_(t_RombergIntegrator *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_RombergIntegrator__methods_[] = {
          DECLARE_METHOD(t_RombergIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RombergIntegrator, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RombergIntegrator)[] = {
          { Py_tp_methods, t_RombergIntegrator__methods_ },
          { Py_tp_init, (void *) t_RombergIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RombergIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(RombergIntegrator, t_RombergIntegrator, RombergIntegrator);

        void t_RombergIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(RombergIntegrator), &PY_TYPE_DEF(RombergIntegrator), module, "RombergIntegrator", 0);
        }

        void t_RombergIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RombergIntegrator), "class_", make_descriptor(RombergIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RombergIntegrator), "wrapfn_", make_descriptor(t_RombergIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RombergIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(RombergIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(RombergIntegrator), "ROMBERG_MAX_ITERATIONS_COUNT", make_descriptor(RombergIntegrator::ROMBERG_MAX_ITERATIONS_COUNT));
        }

        static PyObject *t_RombergIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RombergIntegrator::initializeClass, 1)))
            return NULL;
          return t_RombergIntegrator::wrap_Object(RombergIntegrator(((t_RombergIntegrator *) arg)->object.this$));
        }
        static PyObject *t_RombergIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RombergIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RombergIntegrator_init_(t_RombergIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              RombergIntegrator object((jobject) NULL);

              INT_CALL(object = RombergIntegrator());
              self->object = object;
              break;
            }
           case 2:
            {
              jint a0;
              jint a1;
              RombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                INT_CALL(object = RombergIntegrator(a0, a1));
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
              RombergIntegrator object((jobject) NULL);

              if (!parseArgs(args, "DDII", &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = RombergIntegrator(a0, a1, a2, a3));
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
#include "org/hipparchus/special/elliptic/jacobi/JacobiElliptic.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarC.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarS.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarD.h"
#include "java/lang/Class.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarN.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *JacobiElliptic::class$ = NULL;
          jmethodID *JacobiElliptic::mids$ = NULL;
          bool JacobiElliptic::live$ = false;

          jclass JacobiElliptic::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/JacobiElliptic");

              mids$ = new jmethodID[max_mid];
              mids$[mid_arccd_dcbc7ce2902fa136] = env->getMethodID(cls, "arccd", "(D)D");
              mids$[mid_arccn_dcbc7ce2902fa136] = env->getMethodID(cls, "arccn", "(D)D");
              mids$[mid_arccs_dcbc7ce2902fa136] = env->getMethodID(cls, "arccs", "(D)D");
              mids$[mid_arcdc_dcbc7ce2902fa136] = env->getMethodID(cls, "arcdc", "(D)D");
              mids$[mid_arcdn_dcbc7ce2902fa136] = env->getMethodID(cls, "arcdn", "(D)D");
              mids$[mid_arcds_dcbc7ce2902fa136] = env->getMethodID(cls, "arcds", "(D)D");
              mids$[mid_arcnc_dcbc7ce2902fa136] = env->getMethodID(cls, "arcnc", "(D)D");
              mids$[mid_arcnd_dcbc7ce2902fa136] = env->getMethodID(cls, "arcnd", "(D)D");
              mids$[mid_arcns_dcbc7ce2902fa136] = env->getMethodID(cls, "arcns", "(D)D");
              mids$[mid_arcsc_dcbc7ce2902fa136] = env->getMethodID(cls, "arcsc", "(D)D");
              mids$[mid_arcsd_dcbc7ce2902fa136] = env->getMethodID(cls, "arcsd", "(D)D");
              mids$[mid_arcsn_dcbc7ce2902fa136] = env->getMethodID(cls, "arcsn", "(D)D");
              mids$[mid_getM_dff5885c2c873297] = env->getMethodID(cls, "getM", "()D");
              mids$[mid_valuesC_ca62344eb6f456f0] = env->getMethodID(cls, "valuesC", "(D)Lorg/hipparchus/special/elliptic/jacobi/CopolarC;");
              mids$[mid_valuesD_9d6f2ff61c60fe05] = env->getMethodID(cls, "valuesD", "(D)Lorg/hipparchus/special/elliptic/jacobi/CopolarD;");
              mids$[mid_valuesN_aaa95204c76a4f3a] = env->getMethodID(cls, "valuesN", "(D)Lorg/hipparchus/special/elliptic/jacobi/CopolarN;");
              mids$[mid_valuesS_75536f4861244943] = env->getMethodID(cls, "valuesS", "(D)Lorg/hipparchus/special/elliptic/jacobi/CopolarS;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble JacobiElliptic::arccd(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arccd_dcbc7ce2902fa136], a0);
          }

          jdouble JacobiElliptic::arccn(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arccn_dcbc7ce2902fa136], a0);
          }

          jdouble JacobiElliptic::arccs(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arccs_dcbc7ce2902fa136], a0);
          }

          jdouble JacobiElliptic::arcdc(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcdc_dcbc7ce2902fa136], a0);
          }

          jdouble JacobiElliptic::arcdn(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcdn_dcbc7ce2902fa136], a0);
          }

          jdouble JacobiElliptic::arcds(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcds_dcbc7ce2902fa136], a0);
          }

          jdouble JacobiElliptic::arcnc(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcnc_dcbc7ce2902fa136], a0);
          }

          jdouble JacobiElliptic::arcnd(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcnd_dcbc7ce2902fa136], a0);
          }

          jdouble JacobiElliptic::arcns(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcns_dcbc7ce2902fa136], a0);
          }

          jdouble JacobiElliptic::arcsc(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcsc_dcbc7ce2902fa136], a0);
          }

          jdouble JacobiElliptic::arcsd(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcsd_dcbc7ce2902fa136], a0);
          }

          jdouble JacobiElliptic::arcsn(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcsn_dcbc7ce2902fa136], a0);
          }

          jdouble JacobiElliptic::getM() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getM_dff5885c2c873297]);
          }

          ::org::hipparchus::special::elliptic::jacobi::CopolarC JacobiElliptic::valuesC(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::CopolarC(env->callObjectMethod(this$, mids$[mid_valuesC_ca62344eb6f456f0], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::CopolarD JacobiElliptic::valuesD(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::CopolarD(env->callObjectMethod(this$, mids$[mid_valuesD_9d6f2ff61c60fe05], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::CopolarN JacobiElliptic::valuesN(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::CopolarN(env->callObjectMethod(this$, mids$[mid_valuesN_aaa95204c76a4f3a], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::CopolarS JacobiElliptic::valuesS(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::CopolarS(env->callObjectMethod(this$, mids$[mid_valuesS_75536f4861244943], a0));
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
          static PyObject *t_JacobiElliptic_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiElliptic_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiElliptic_arccd(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arccn(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arccs(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcdc(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcdn(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcds(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcnc(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcnd(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcns(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcsc(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcsd(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_arcsn(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_getM(t_JacobiElliptic *self);
          static PyObject *t_JacobiElliptic_valuesC(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_valuesD(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_valuesN(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_valuesS(t_JacobiElliptic *self, PyObject *arg);
          static PyObject *t_JacobiElliptic_get__m(t_JacobiElliptic *self, void *data);
          static PyGetSetDef t_JacobiElliptic__fields_[] = {
            DECLARE_GET_FIELD(t_JacobiElliptic, m),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_JacobiElliptic__methods_[] = {
            DECLARE_METHOD(t_JacobiElliptic, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiElliptic, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiElliptic, arccd, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arccn, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arccs, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcdc, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcdn, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcds, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcnc, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcnd, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcns, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcsc, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcsd, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, arcsn, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, getM, METH_NOARGS),
            DECLARE_METHOD(t_JacobiElliptic, valuesC, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, valuesD, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, valuesN, METH_O),
            DECLARE_METHOD(t_JacobiElliptic, valuesS, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JacobiElliptic)[] = {
            { Py_tp_methods, t_JacobiElliptic__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_JacobiElliptic__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JacobiElliptic)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(JacobiElliptic, t_JacobiElliptic, JacobiElliptic);

          void t_JacobiElliptic::install(PyObject *module)
          {
            installType(&PY_TYPE(JacobiElliptic), &PY_TYPE_DEF(JacobiElliptic), module, "JacobiElliptic", 0);
          }

          void t_JacobiElliptic::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiElliptic), "class_", make_descriptor(JacobiElliptic::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiElliptic), "wrapfn_", make_descriptor(t_JacobiElliptic::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiElliptic), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JacobiElliptic_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JacobiElliptic::initializeClass, 1)))
              return NULL;
            return t_JacobiElliptic::wrap_Object(JacobiElliptic(((t_JacobiElliptic *) arg)->object.this$));
          }
          static PyObject *t_JacobiElliptic_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JacobiElliptic::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_JacobiElliptic_arccd(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arccd(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arccd", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arccn(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arccn(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arccn", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arccs(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arccs(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arccs", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcdc(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcdc(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcdc", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcdn(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcdn(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcdn", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcds(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcds(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcds", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcnc(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcnc(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcnc", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcnd(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcnd(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcnd", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcns(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcns(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcns", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcsc(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcsc(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcsc", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcsd(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcsd(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcsd", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_arcsn(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.arcsn(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "arcsn", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_getM(t_JacobiElliptic *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getM());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_JacobiElliptic_valuesC(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::special::elliptic::jacobi::CopolarC result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.valuesC(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_CopolarC::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "valuesC", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_valuesD(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::special::elliptic::jacobi::CopolarD result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.valuesD(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_CopolarD::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "valuesD", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_valuesN(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::special::elliptic::jacobi::CopolarN result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.valuesN(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_CopolarN::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "valuesN", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_valuesS(t_JacobiElliptic *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::special::elliptic::jacobi::CopolarS result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.valuesS(a0));
              return ::org::hipparchus::special::elliptic::jacobi::t_CopolarS::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "valuesS", arg);
            return NULL;
          }

          static PyObject *t_JacobiElliptic_get__m(t_JacobiElliptic *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getM());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/DivertedSingularityAiming.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *DivertedSingularityAiming::class$ = NULL;
          jmethodID *DivertedSingularityAiming::mids$ = NULL;
          bool DivertedSingularityAiming::live$ = false;

          jclass DivertedSingularityAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/DivertedSingularityAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_de0cbf42314b699e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;)V");
              mids$[mid_alongTileDirection_cb13d5b31f03b28f] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSingularPoints_2afa36052df4765d] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DivertedSingularityAiming::DivertedSingularityAiming(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_de0cbf42314b699e, a0.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D DivertedSingularityAiming::alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_alongTileDirection_cb13d5b31f03b28f], a0.this$, a1.this$));
          }

          ::java::util::List DivertedSingularityAiming::getSingularPoints() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSingularPoints_2afa36052df4765d]));
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
          static PyObject *t_DivertedSingularityAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DivertedSingularityAiming_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DivertedSingularityAiming_init_(t_DivertedSingularityAiming *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DivertedSingularityAiming_alongTileDirection(t_DivertedSingularityAiming *self, PyObject *args);
          static PyObject *t_DivertedSingularityAiming_getSingularPoints(t_DivertedSingularityAiming *self);
          static PyObject *t_DivertedSingularityAiming_get__singularPoints(t_DivertedSingularityAiming *self, void *data);
          static PyGetSetDef t_DivertedSingularityAiming__fields_[] = {
            DECLARE_GET_FIELD(t_DivertedSingularityAiming, singularPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DivertedSingularityAiming__methods_[] = {
            DECLARE_METHOD(t_DivertedSingularityAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DivertedSingularityAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DivertedSingularityAiming, alongTileDirection, METH_VARARGS),
            DECLARE_METHOD(t_DivertedSingularityAiming, getSingularPoints, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DivertedSingularityAiming)[] = {
            { Py_tp_methods, t_DivertedSingularityAiming__methods_ },
            { Py_tp_init, (void *) t_DivertedSingularityAiming_init_ },
            { Py_tp_getset, t_DivertedSingularityAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DivertedSingularityAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DivertedSingularityAiming, t_DivertedSingularityAiming, DivertedSingularityAiming);

          void t_DivertedSingularityAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(DivertedSingularityAiming), &PY_TYPE_DEF(DivertedSingularityAiming), module, "DivertedSingularityAiming", 0);
          }

          void t_DivertedSingularityAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DivertedSingularityAiming), "class_", make_descriptor(DivertedSingularityAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DivertedSingularityAiming), "wrapfn_", make_descriptor(t_DivertedSingularityAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DivertedSingularityAiming), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DivertedSingularityAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DivertedSingularityAiming::initializeClass, 1)))
              return NULL;
            return t_DivertedSingularityAiming::wrap_Object(DivertedSingularityAiming(((t_DivertedSingularityAiming *) arg)->object.this$));
          }
          static PyObject *t_DivertedSingularityAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DivertedSingularityAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DivertedSingularityAiming_init_(t_DivertedSingularityAiming *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet a0((jobject) NULL);
            PyTypeObject **p0;
            DivertedSingularityAiming object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet::initializeClass, &a0, &p0, ::org::hipparchus::geometry::spherical::twod::t_SphericalPolygonsSet::parameters_))
            {
              INT_CALL(object = DivertedSingularityAiming(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DivertedSingularityAiming_alongTileDirection(t_DivertedSingularityAiming *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.alongTileDirection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "alongTileDirection", args);
            return NULL;
          }

          static PyObject *t_DivertedSingularityAiming_getSingularPoints(t_DivertedSingularityAiming *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::bodies::PY_TYPE(GeodeticPoint));
          }

          static PyObject *t_DivertedSingularityAiming_get__singularPoints(t_DivertedSingularityAiming *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace function {

      ::java::lang::Class *DoubleConsumer::class$ = NULL;
      jmethodID *DoubleConsumer::mids$ = NULL;
      bool DoubleConsumer::live$ = false;

      jclass DoubleConsumer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/function/DoubleConsumer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_accept_17db3a65980d3441] = env->getMethodID(cls, "accept", "(D)V");
          mids$[mid_andThen_6936d14169327829] = env->getMethodID(cls, "andThen", "(Ljava/util/function/DoubleConsumer;)Ljava/util/function/DoubleConsumer;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void DoubleConsumer::accept(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_accept_17db3a65980d3441], a0);
      }

      DoubleConsumer DoubleConsumer::andThen(const DoubleConsumer & a0) const
      {
        return DoubleConsumer(env->callObjectMethod(this$, mids$[mid_andThen_6936d14169327829], a0.this$));
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
      static PyObject *t_DoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleConsumer_accept(t_DoubleConsumer *self, PyObject *arg);
      static PyObject *t_DoubleConsumer_andThen(t_DoubleConsumer *self, PyObject *arg);

      static PyMethodDef t_DoubleConsumer__methods_[] = {
        DECLARE_METHOD(t_DoubleConsumer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleConsumer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleConsumer, accept, METH_O),
        DECLARE_METHOD(t_DoubleConsumer, andThen, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DoubleConsumer)[] = {
        { Py_tp_methods, t_DoubleConsumer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DoubleConsumer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DoubleConsumer, t_DoubleConsumer, DoubleConsumer);

      void t_DoubleConsumer::install(PyObject *module)
      {
        installType(&PY_TYPE(DoubleConsumer), &PY_TYPE_DEF(DoubleConsumer), module, "DoubleConsumer", 0);
      }

      void t_DoubleConsumer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleConsumer), "class_", make_descriptor(DoubleConsumer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleConsumer), "wrapfn_", make_descriptor(t_DoubleConsumer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleConsumer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DoubleConsumer::initializeClass, 1)))
          return NULL;
        return t_DoubleConsumer::wrap_Object(DoubleConsumer(((t_DoubleConsumer *) arg)->object.this$));
      }
      static PyObject *t_DoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DoubleConsumer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DoubleConsumer_accept(t_DoubleConsumer *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.accept(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "accept", arg);
        return NULL;
      }

      static PyObject *t_DoubleConsumer_andThen(t_DoubleConsumer *self, PyObject *arg)
      {
        DoubleConsumer a0((jobject) NULL);
        DoubleConsumer result((jobject) NULL);

        if (!parseArg(arg, "k", DoubleConsumer::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.andThen(a0));
          return t_DoubleConsumer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "andThen", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/IonosphereFreeCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *IonosphereFreeCombination::class$ = NULL;
          jmethodID *IonosphereFreeCombination::mids$ = NULL;
          bool IonosphereFreeCombination::live$ = false;

          jclass IonosphereFreeCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/IonosphereFreeCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_e0f2baaf2a2ab093] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_6baf140b93832af8] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

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
          static PyObject *t_IonosphereFreeCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereFreeCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_IonosphereFreeCombination__methods_[] = {
            DECLARE_METHOD(t_IonosphereFreeCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereFreeCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereFreeCombination)[] = {
            { Py_tp_methods, t_IonosphereFreeCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereFreeCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(IonosphereFreeCombination, t_IonosphereFreeCombination, IonosphereFreeCombination);

          void t_IonosphereFreeCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereFreeCombination), &PY_TYPE_DEF(IonosphereFreeCombination), module, "IonosphereFreeCombination", 0);
          }

          void t_IonosphereFreeCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereFreeCombination), "class_", make_descriptor(IonosphereFreeCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereFreeCombination), "wrapfn_", make_descriptor(t_IonosphereFreeCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereFreeCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphereFreeCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereFreeCombination::initializeClass, 1)))
              return NULL;
            return t_IonosphereFreeCombination::wrap_Object(IonosphereFreeCombination(((t_IonosphereFreeCombination *) arg)->object.this$));
          }
          static PyObject *t_IonosphereFreeCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereFreeCombination::initializeClass, 0))
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
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *InterSatellitesPhase::class$ = NULL;
          jmethodID *InterSatellitesPhase::mids$ = NULL;
          bool InterSatellitesPhase::live$ = false;
          ::java::lang::String *InterSatellitesPhase::AMBIGUITY_NAME = NULL;
          ::java::lang::String *InterSatellitesPhase::MEASUREMENT_TYPE = NULL;

          jclass InterSatellitesPhase::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/InterSatellitesPhase");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0d3f6425cb7d5653] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/time/AbsoluteDate;DDDD)V");
              mids$[mid_getAmbiguityDriver_a25ed222178aa59f] = env->getMethodID(cls, "getAmbiguityDriver", "()Lorg/orekit/utils/ParameterDriver;");
              mids$[mid_getWavelength_dff5885c2c873297] = env->getMethodID(cls, "getWavelength", "()D");
              mids$[mid_theoreticalEvaluationWithoutDerivatives_e32883476b3d9b22] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
              mids$[mid_theoreticalEvaluation_27ef5cc84ad0852b] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AMBIGUITY_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "AMBIGUITY_NAME", "Ljava/lang/String;"));
              MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesPhase::InterSatellitesPhase(const ::org::orekit::estimation::measurements::ObservableSatellite & a0, const ::org::orekit::estimation::measurements::ObservableSatellite & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_0d3f6425cb7d5653, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

          ::org::orekit::utils::ParameterDriver InterSatellitesPhase::getAmbiguityDriver() const
          {
            return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getAmbiguityDriver_a25ed222178aa59f]));
          }

          jdouble InterSatellitesPhase::getWavelength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWavelength_dff5885c2c873297]);
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
          static PyObject *t_InterSatellitesPhase_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhase_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhase_of_(t_InterSatellitesPhase *self, PyObject *args);
          static int t_InterSatellitesPhase_init_(t_InterSatellitesPhase *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesPhase_getAmbiguityDriver(t_InterSatellitesPhase *self);
          static PyObject *t_InterSatellitesPhase_getWavelength(t_InterSatellitesPhase *self);
          static PyObject *t_InterSatellitesPhase_get__ambiguityDriver(t_InterSatellitesPhase *self, void *data);
          static PyObject *t_InterSatellitesPhase_get__wavelength(t_InterSatellitesPhase *self, void *data);
          static PyObject *t_InterSatellitesPhase_get__parameters_(t_InterSatellitesPhase *self, void *data);
          static PyGetSetDef t_InterSatellitesPhase__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesPhase, ambiguityDriver),
            DECLARE_GET_FIELD(t_InterSatellitesPhase, wavelength),
            DECLARE_GET_FIELD(t_InterSatellitesPhase, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesPhase__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesPhase, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhase, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhase, of_, METH_VARARGS),
            DECLARE_METHOD(t_InterSatellitesPhase, getAmbiguityDriver, METH_NOARGS),
            DECLARE_METHOD(t_InterSatellitesPhase, getWavelength, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesPhase)[] = {
            { Py_tp_methods, t_InterSatellitesPhase__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesPhase_init_ },
            { Py_tp_getset, t_InterSatellitesPhase__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesPhase)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
            NULL
          };

          DEFINE_TYPE(InterSatellitesPhase, t_InterSatellitesPhase, InterSatellitesPhase);
          PyObject *t_InterSatellitesPhase::wrap_Object(const InterSatellitesPhase& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesPhase::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesPhase *self = (t_InterSatellitesPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_InterSatellitesPhase::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesPhase::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesPhase *self = (t_InterSatellitesPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_InterSatellitesPhase::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesPhase), &PY_TYPE_DEF(InterSatellitesPhase), module, "InterSatellitesPhase", 0);
          }

          void t_InterSatellitesPhase::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "class_", make_descriptor(InterSatellitesPhase::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "wrapfn_", make_descriptor(t_InterSatellitesPhase::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "boxfn_", make_descriptor(boxObject));
            env->getClass(InterSatellitesPhase::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "AMBIGUITY_NAME", make_descriptor(j2p(*InterSatellitesPhase::AMBIGUITY_NAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "MEASUREMENT_TYPE", make_descriptor(j2p(*InterSatellitesPhase::MEASUREMENT_TYPE)));
          }

          static PyObject *t_InterSatellitesPhase_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesPhase::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesPhase::wrap_Object(InterSatellitesPhase(((t_InterSatellitesPhase *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesPhase_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesPhase::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_InterSatellitesPhase_of_(t_InterSatellitesPhase *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_InterSatellitesPhase_init_(t_InterSatellitesPhase *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::ObservableSatellite a0((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            InterSatellitesPhase object((jobject) NULL);

            if (!parseArgs(args, "kkkDDDD", ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = InterSatellitesPhase(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(InterSatellitesPhase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_InterSatellitesPhase_getAmbiguityDriver(t_InterSatellitesPhase *self)
          {
            ::org::orekit::utils::ParameterDriver result((jobject) NULL);
            OBJ_CALL(result = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
          }

          static PyObject *t_InterSatellitesPhase_getWavelength(t_InterSatellitesPhase *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getWavelength());
            return PyFloat_FromDouble((double) result);
          }
          static PyObject *t_InterSatellitesPhase_get__parameters_(t_InterSatellitesPhase *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_InterSatellitesPhase_get__ambiguityDriver(t_InterSatellitesPhase *self, void *data)
          {
            ::org::orekit::utils::ParameterDriver value((jobject) NULL);
            OBJ_CALL(value = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
          }

          static PyObject *t_InterSatellitesPhase_get__wavelength(t_InterSatellitesPhase *self, void *data)
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
#include "org/orekit/files/general/PythonEphemerisFileWriter.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/general/EphemerisFileWriter.h"
#include "org/orekit/files/general/EphemerisFile.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonEphemerisFileWriter::class$ = NULL;
        jmethodID *PythonEphemerisFileWriter::mids$ = NULL;
        bool PythonEphemerisFileWriter::live$ = false;

        jclass PythonEphemerisFileWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonEphemerisFileWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_write_c304d7428e150e41] = env->getMethodID(cls, "write", "(Ljava/lang/String;Lorg/orekit/files/general/EphemerisFile;)V");
            mids$[mid_write_2fe5901b7cb5a492] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEphemerisFileWriter::PythonEphemerisFileWriter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonEphemerisFileWriter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonEphemerisFileWriter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonEphemerisFileWriter::pythonExtension(jlong a0) const
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
    namespace files {
      namespace general {
        static PyObject *t_PythonEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEphemerisFileWriter_init_(t_PythonEphemerisFileWriter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEphemerisFileWriter_finalize(t_PythonEphemerisFileWriter *self);
        static PyObject *t_PythonEphemerisFileWriter_pythonExtension(t_PythonEphemerisFileWriter *self, PyObject *args);
        static void JNICALL t_PythonEphemerisFileWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEphemerisFileWriter_write1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonEphemerisFileWriter_write2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static PyObject *t_PythonEphemerisFileWriter_get__self(t_PythonEphemerisFileWriter *self, void *data);
        static PyGetSetDef t_PythonEphemerisFileWriter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEphemerisFileWriter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEphemerisFileWriter__methods_[] = {
          DECLARE_METHOD(t_PythonEphemerisFileWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFileWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEphemerisFileWriter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEphemerisFileWriter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEphemerisFileWriter)[] = {
          { Py_tp_methods, t_PythonEphemerisFileWriter__methods_ },
          { Py_tp_init, (void *) t_PythonEphemerisFileWriter_init_ },
          { Py_tp_getset, t_PythonEphemerisFileWriter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEphemerisFileWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEphemerisFileWriter, t_PythonEphemerisFileWriter, PythonEphemerisFileWriter);

        void t_PythonEphemerisFileWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEphemerisFileWriter), &PY_TYPE_DEF(PythonEphemerisFileWriter), module, "PythonEphemerisFileWriter", 1);
        }

        void t_PythonEphemerisFileWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileWriter), "class_", make_descriptor(PythonEphemerisFileWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileWriter), "wrapfn_", make_descriptor(t_PythonEphemerisFileWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisFileWriter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEphemerisFileWriter::initializeClass);
          JNINativeMethod methods[] = {
            { "pythonDecRef", "()V", (void *) t_PythonEphemerisFileWriter_pythonDecRef0 },
            { "write", "(Ljava/lang/String;Lorg/orekit/files/general/EphemerisFile;)V", (void *) t_PythonEphemerisFileWriter_write1 },
            { "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/EphemerisFile;)V", (void *) t_PythonEphemerisFileWriter_write2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonEphemerisFileWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEphemerisFileWriter::initializeClass, 1)))
            return NULL;
          return t_PythonEphemerisFileWriter::wrap_Object(PythonEphemerisFileWriter(((t_PythonEphemerisFileWriter *) arg)->object.this$));
        }
        static PyObject *t_PythonEphemerisFileWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEphemerisFileWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEphemerisFileWriter_init_(t_PythonEphemerisFileWriter *self, PyObject *args, PyObject *kwds)
        {
          PythonEphemerisFileWriter object((jobject) NULL);

          INT_CALL(object = PythonEphemerisFileWriter());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEphemerisFileWriter_finalize(t_PythonEphemerisFileWriter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEphemerisFileWriter_pythonExtension(t_PythonEphemerisFileWriter *self, PyObject *args)
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

        static void JNICALL t_PythonEphemerisFileWriter_pythonDecRef0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileWriter::mids$[PythonEphemerisFileWriter::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEphemerisFileWriter::mids$[PythonEphemerisFileWriter::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonEphemerisFileWriter_write1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileWriter::mids$[PythonEphemerisFileWriter::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = env->fromJString((jstring) a0, 0);
          PyObject *o1 = ::org::orekit::files::general::t_EphemerisFile::wrap_Object(::org::orekit::files::general::EphemerisFile(a1));
          PyObject *result = PyObject_CallMethod(obj, "write", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonEphemerisFileWriter_write2(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisFileWriter::mids$[PythonEphemerisFileWriter::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::java::lang::t_Appendable::wrap_Object(::java::lang::Appendable(a0));
          PyObject *o1 = ::org::orekit::files::general::t_EphemerisFile::wrap_Object(::org::orekit::files::general::EphemerisFile(a1));
          PyObject *result = PyObject_CallMethod(obj, "write", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonEphemerisFileWriter_get__self(t_PythonEphemerisFileWriter *self, void *data)
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
#include "org/orekit/estimation/measurements/filtering/DualFrequencySmoother.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/estimation/measurements/filtering/SmoothedObservationDataSet.h"
#include "org/orekit/gnss/ObservationType.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "java/util/HashMap.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/filtering/DualFrequencyHatchFilter.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *DualFrequencySmoother::class$ = NULL;
          jmethodID *DualFrequencySmoother::mids$ = NULL;
          bool DualFrequencySmoother::live$ = false;

          jclass DualFrequencySmoother::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/DualFrequencySmoother");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_75c2da74a5a59fda] = env->getMethodID(cls, "<init>", "(DI)V");
              mids$[mid_copyObservationData_a2626020949c0710] = env->getMethodID(cls, "copyObservationData", "(Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/files/rinex/observation/ObservationData;");
              mids$[mid_createFilter_925e54532dc3f5f2] = env->getMethodID(cls, "createFilter", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/estimation/measurements/filtering/DualFrequencyHatchFilter;");
              mids$[mid_filterDataSet_71b58f251f63b1ae] = env->getMethodID(cls, "filterDataSet", "(Ljava/util/List;Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/gnss/ObservationType;Lorg/orekit/gnss/ObservationType;)V");
              mids$[mid_getFilteredDataMap_16a1de631a9b7527] = env->getMethodID(cls, "getFilteredDataMap", "()Ljava/util/HashMap;");
              mids$[mid_getMapFilters_16a1de631a9b7527] = env->getMethodID(cls, "getMapFilters", "()Ljava/util/HashMap;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DualFrequencySmoother::DualFrequencySmoother(jdouble a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_75c2da74a5a59fda, a0, a1)) {}

          ::org::orekit::files::rinex::observation::ObservationData DualFrequencySmoother::copyObservationData(const ::org::orekit::files::rinex::observation::ObservationData & a0) const
          {
            return ::org::orekit::files::rinex::observation::ObservationData(env->callObjectMethod(this$, mids$[mid_copyObservationData_a2626020949c0710], a0.this$));
          }

          ::org::orekit::estimation::measurements::filtering::DualFrequencyHatchFilter DualFrequencySmoother::createFilter(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1, const ::org::orekit::files::rinex::observation::ObservationData & a2, const ::org::orekit::gnss::SatelliteSystem & a3) const
          {
            return ::org::orekit::estimation::measurements::filtering::DualFrequencyHatchFilter(env->callObjectMethod(this$, mids$[mid_createFilter_925e54532dc3f5f2], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          void DualFrequencySmoother::filterDataSet(const ::java::util::List & a0, const ::org::orekit::gnss::SatelliteSystem & a1, jint a2, const ::org::orekit::gnss::ObservationType & a3, const ::org::orekit::gnss::ObservationType & a4) const
          {
            env->callVoidMethod(this$, mids$[mid_filterDataSet_71b58f251f63b1ae], a0.this$, a1.this$, a2, a3.this$, a4.this$);
          }

          ::java::util::HashMap DualFrequencySmoother::getFilteredDataMap() const
          {
            return ::java::util::HashMap(env->callObjectMethod(this$, mids$[mid_getFilteredDataMap_16a1de631a9b7527]));
          }

          ::java::util::HashMap DualFrequencySmoother::getMapFilters() const
          {
            return ::java::util::HashMap(env->callObjectMethod(this$, mids$[mid_getMapFilters_16a1de631a9b7527]));
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
          static PyObject *t_DualFrequencySmoother_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DualFrequencySmoother_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DualFrequencySmoother_init_(t_DualFrequencySmoother *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DualFrequencySmoother_copyObservationData(t_DualFrequencySmoother *self, PyObject *arg);
          static PyObject *t_DualFrequencySmoother_createFilter(t_DualFrequencySmoother *self, PyObject *args);
          static PyObject *t_DualFrequencySmoother_filterDataSet(t_DualFrequencySmoother *self, PyObject *args);
          static PyObject *t_DualFrequencySmoother_getFilteredDataMap(t_DualFrequencySmoother *self);
          static PyObject *t_DualFrequencySmoother_getMapFilters(t_DualFrequencySmoother *self);
          static PyObject *t_DualFrequencySmoother_get__filteredDataMap(t_DualFrequencySmoother *self, void *data);
          static PyObject *t_DualFrequencySmoother_get__mapFilters(t_DualFrequencySmoother *self, void *data);
          static PyGetSetDef t_DualFrequencySmoother__fields_[] = {
            DECLARE_GET_FIELD(t_DualFrequencySmoother, filteredDataMap),
            DECLARE_GET_FIELD(t_DualFrequencySmoother, mapFilters),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DualFrequencySmoother__methods_[] = {
            DECLARE_METHOD(t_DualFrequencySmoother, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DualFrequencySmoother, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DualFrequencySmoother, copyObservationData, METH_O),
            DECLARE_METHOD(t_DualFrequencySmoother, createFilter, METH_VARARGS),
            DECLARE_METHOD(t_DualFrequencySmoother, filterDataSet, METH_VARARGS),
            DECLARE_METHOD(t_DualFrequencySmoother, getFilteredDataMap, METH_NOARGS),
            DECLARE_METHOD(t_DualFrequencySmoother, getMapFilters, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DualFrequencySmoother)[] = {
            { Py_tp_methods, t_DualFrequencySmoother__methods_ },
            { Py_tp_init, (void *) t_DualFrequencySmoother_init_ },
            { Py_tp_getset, t_DualFrequencySmoother__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DualFrequencySmoother)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DualFrequencySmoother, t_DualFrequencySmoother, DualFrequencySmoother);

          void t_DualFrequencySmoother::install(PyObject *module)
          {
            installType(&PY_TYPE(DualFrequencySmoother), &PY_TYPE_DEF(DualFrequencySmoother), module, "DualFrequencySmoother", 0);
          }

          void t_DualFrequencySmoother::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencySmoother), "class_", make_descriptor(DualFrequencySmoother::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencySmoother), "wrapfn_", make_descriptor(t_DualFrequencySmoother::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DualFrequencySmoother), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DualFrequencySmoother_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DualFrequencySmoother::initializeClass, 1)))
              return NULL;
            return t_DualFrequencySmoother::wrap_Object(DualFrequencySmoother(((t_DualFrequencySmoother *) arg)->object.this$));
          }
          static PyObject *t_DualFrequencySmoother_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DualFrequencySmoother::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DualFrequencySmoother_init_(t_DualFrequencySmoother *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jint a1;
            DualFrequencySmoother object((jobject) NULL);

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              INT_CALL(object = DualFrequencySmoother(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DualFrequencySmoother_copyObservationData(t_DualFrequencySmoother *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copyObservationData(a0));
              return ::org::orekit::files::rinex::observation::t_ObservationData::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "copyObservationData", arg);
            return NULL;
          }

          static PyObject *t_DualFrequencySmoother_createFilter(t_DualFrequencySmoother *self, PyObject *args)
          {
            ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
            ::org::orekit::files::rinex::observation::ObservationData a2((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::estimation::measurements::filtering::DualFrequencyHatchFilter result((jobject) NULL);

            if (!parseArgs(args, "kkkK", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.createFilter(a0, a1, a2, a3));
              return ::org::orekit::estimation::measurements::filtering::t_DualFrequencyHatchFilter::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "createFilter", args);
            return NULL;
          }

          static PyObject *t_DualFrequencySmoother_filterDataSet(t_DualFrequencySmoother *self, PyObject *args)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            ::org::orekit::gnss::ObservationType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::gnss::ObservationType a4((jobject) NULL);
            PyTypeObject **p4;

            if (!parseArgs(args, "KKIKK", ::java::util::List::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a2, &a3, &p3, ::org::orekit::gnss::t_ObservationType::parameters_, &a4, &p4, ::org::orekit::gnss::t_ObservationType::parameters_))
            {
              OBJ_CALL(self->object.filterDataSet(a0, a1, a2, a3, a4));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filterDataSet", args);
            return NULL;
          }

          static PyObject *t_DualFrequencySmoother_getFilteredDataMap(t_DualFrequencySmoother *self)
          {
            ::java::util::HashMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getFilteredDataMap());
            return ::java::util::t_HashMap::wrap_Object(result);
          }

          static PyObject *t_DualFrequencySmoother_getMapFilters(t_DualFrequencySmoother *self)
          {
            ::java::util::HashMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapFilters());
            return ::java::util::t_HashMap::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(ObservationType), ::org::orekit::estimation::measurements::filtering::PY_TYPE(DualFrequencyHatchFilter));
          }

          static PyObject *t_DualFrequencySmoother_get__filteredDataMap(t_DualFrequencySmoother *self, void *data)
          {
            ::java::util::HashMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getFilteredDataMap());
            return ::java::util::t_HashMap::wrap_Object(value);
          }

          static PyObject *t_DualFrequencySmoother_get__mapFilters(t_DualFrequencySmoother *self, void *data)
          {
            ::java::util::HashMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapFilters());
            return ::java::util::t_HashMap::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1241.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmClockCorrectionData.h"
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
                  mids$[mid_init$_1b582be2cf76d4b0] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1241::Rtcm1241(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_1b582be2cf76d4b0, a0, a1.this$, a2.this$)) {}
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedGenerator::class$ = NULL;
      jmethodID *TimeStampedGenerator::mids$ = NULL;
      bool TimeStampedGenerator::live$ = false;

      jclass TimeStampedGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_generate_8060cef9318d72e3] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List TimeStampedGenerator::generate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_generate_8060cef9318d72e3], a0.this$, a1.this$));
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
      static PyObject *t_TimeStampedGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedGenerator_of_(t_TimeStampedGenerator *self, PyObject *args);
      static PyObject *t_TimeStampedGenerator_generate(t_TimeStampedGenerator *self, PyObject *args);
      static PyObject *t_TimeStampedGenerator_get__parameters_(t_TimeStampedGenerator *self, void *data);
      static PyGetSetDef t_TimeStampedGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedGenerator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedGenerator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedGenerator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedGenerator, generate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedGenerator)[] = {
        { Py_tp_methods, t_TimeStampedGenerator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeStampedGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeStampedGenerator, t_TimeStampedGenerator, TimeStampedGenerator);
      PyObject *t_TimeStampedGenerator::wrap_Object(const TimeStampedGenerator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedGenerator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedGenerator *self = (t_TimeStampedGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedGenerator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedGenerator *self = (t_TimeStampedGenerator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedGenerator), &PY_TYPE_DEF(TimeStampedGenerator), module, "TimeStampedGenerator", 0);
      }

      void t_TimeStampedGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedGenerator), "class_", make_descriptor(TimeStampedGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedGenerator), "wrapfn_", make_descriptor(t_TimeStampedGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedGenerator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedGenerator::wrap_Object(TimeStampedGenerator(((t_TimeStampedGenerator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedGenerator_of_(t_TimeStampedGenerator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeStampedGenerator_generate(t_TimeStampedGenerator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.generate(a0, a1));
          return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "generate", args);
        return NULL;
      }
      static PyObject *t_TimeStampedGenerator_get__parameters_(t_TimeStampedGenerator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
