#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/SGP4.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *SGP4::class$ = NULL;
          jmethodID *SGP4::mids$ = NULL;
          bool SGP4::live$ = false;

          jclass SGP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/SGP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_11c826170d15cb79] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;D)V");
              mids$[mid_init$_2709a562b7f01856] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/frames/Frame;)V");
              mids$[mid_sxpInitialize_0fa09c18fee449d5] = env->getMethodID(cls, "sxpInitialize", "()V");
              mids$[mid_sxpPropagate_17db3a65980d3441] = env->getMethodID(cls, "sxpPropagate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SGP4::SGP4(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::tle::TLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_11c826170d15cb79, a0.this$, a1.this$, a2)) {}

          SGP4::SGP4(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::propagation::analytical::tle::TLEPropagator(env->newObject(initializeClass, &mids$, mid_init$_2709a562b7f01856, a0.this$, a1.this$, a2, a3.this$)) {}
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
          static PyObject *t_SGP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SGP4_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SGP4_init_(t_SGP4 *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_SGP4__methods_[] = {
            DECLARE_METHOD(t_SGP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SGP4, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SGP4)[] = {
            { Py_tp_methods, t_SGP4__methods_ },
            { Py_tp_init, (void *) t_SGP4_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SGP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::TLEPropagator),
            NULL
          };

          DEFINE_TYPE(SGP4, t_SGP4, SGP4);

          void t_SGP4::install(PyObject *module)
          {
            installType(&PY_TYPE(SGP4), &PY_TYPE_DEF(SGP4), module, "SGP4", 0);
          }

          void t_SGP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SGP4), "class_", make_descriptor(SGP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SGP4), "wrapfn_", make_descriptor(t_SGP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SGP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SGP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SGP4::initializeClass, 1)))
              return NULL;
            return t_SGP4::wrap_Object(SGP4(((t_SGP4 *) arg)->object.this$));
          }
          static PyObject *t_SGP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SGP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SGP4_init_(t_SGP4 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                SGP4 object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = SGP4(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                SGP4 object((jobject) NULL);

                if (!parseArgs(args, "kkDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = SGP4(a0, a1, a2, a3));
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepNormalizer.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldOrekitStepNormalizer::class$ = NULL;
        jmethodID *FieldOrekitStepNormalizer::mids$ = NULL;
        bool FieldOrekitStepNormalizer::live$ = false;

        jclass FieldOrekitStepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldOrekitStepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_465bcdb67e0beb29] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;)V");
            mids$[mid_finish_1463d3d0d52f94dd] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_getFixedStepHandler_59748327a655db59] = env->getMethodID(cls, "getFixedStepHandler", "()Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;");
            mids$[mid_getFixedTimeStep_eba8e72a22c984ac] = env->getMethodID(cls, "getFixedTimeStep", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_handleStep_edb529c141e8d4a9] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_requiresDenseOutput_b108b35ef48e27bd] = env->getMethodID(cls, "requiresDenseOutput", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldOrekitStepNormalizer::FieldOrekitStepNormalizer(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_465bcdb67e0beb29, a0.this$, a1.this$)) {}

        void FieldOrekitStepNormalizer::finish(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_1463d3d0d52f94dd], a0.this$);
        }

        ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler FieldOrekitStepNormalizer::getFixedStepHandler() const
        {
          return ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler(env->callObjectMethod(this$, mids$[mid_getFixedStepHandler_59748327a655db59]));
        }

        ::org::hipparchus::CalculusFieldElement FieldOrekitStepNormalizer::getFixedTimeStep() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFixedTimeStep_eba8e72a22c984ac]));
        }

        void FieldOrekitStepNormalizer::handleStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_edb529c141e8d4a9], a0.this$);
        }

        void FieldOrekitStepNormalizer::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
        }

        jboolean FieldOrekitStepNormalizer::requiresDenseOutput() const
        {
          return env->callBooleanMethod(this$, mids$[mid_requiresDenseOutput_b108b35ef48e27bd]);
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
        static PyObject *t_FieldOrekitStepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepNormalizer_of_(t_FieldOrekitStepNormalizer *self, PyObject *args);
        static int t_FieldOrekitStepNormalizer_init_(t_FieldOrekitStepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldOrekitStepNormalizer_finish(t_FieldOrekitStepNormalizer *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepNormalizer_getFixedStepHandler(t_FieldOrekitStepNormalizer *self);
        static PyObject *t_FieldOrekitStepNormalizer_getFixedTimeStep(t_FieldOrekitStepNormalizer *self);
        static PyObject *t_FieldOrekitStepNormalizer_handleStep(t_FieldOrekitStepNormalizer *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepNormalizer_init(t_FieldOrekitStepNormalizer *self, PyObject *args);
        static PyObject *t_FieldOrekitStepNormalizer_requiresDenseOutput(t_FieldOrekitStepNormalizer *self);
        static PyObject *t_FieldOrekitStepNormalizer_get__fixedStepHandler(t_FieldOrekitStepNormalizer *self, void *data);
        static PyObject *t_FieldOrekitStepNormalizer_get__fixedTimeStep(t_FieldOrekitStepNormalizer *self, void *data);
        static PyObject *t_FieldOrekitStepNormalizer_get__parameters_(t_FieldOrekitStepNormalizer *self, void *data);
        static PyGetSetDef t_FieldOrekitStepNormalizer__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOrekitStepNormalizer, fixedStepHandler),
          DECLARE_GET_FIELD(t_FieldOrekitStepNormalizer, fixedTimeStep),
          DECLARE_GET_FIELD(t_FieldOrekitStepNormalizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOrekitStepNormalizer__methods_[] = {
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, getFixedStepHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, getFixedTimeStep, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, requiresDenseOutput, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOrekitStepNormalizer)[] = {
          { Py_tp_methods, t_FieldOrekitStepNormalizer__methods_ },
          { Py_tp_init, (void *) t_FieldOrekitStepNormalizer_init_ },
          { Py_tp_getset, t_FieldOrekitStepNormalizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOrekitStepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldOrekitStepNormalizer, t_FieldOrekitStepNormalizer, FieldOrekitStepNormalizer);
        PyObject *t_FieldOrekitStepNormalizer::wrap_Object(const FieldOrekitStepNormalizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepNormalizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepNormalizer *self = (t_FieldOrekitStepNormalizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOrekitStepNormalizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepNormalizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepNormalizer *self = (t_FieldOrekitStepNormalizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOrekitStepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOrekitStepNormalizer), &PY_TYPE_DEF(FieldOrekitStepNormalizer), module, "FieldOrekitStepNormalizer", 0);
        }

        void t_FieldOrekitStepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepNormalizer), "class_", make_descriptor(FieldOrekitStepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepNormalizer), "wrapfn_", make_descriptor(t_FieldOrekitStepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOrekitStepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOrekitStepNormalizer::initializeClass, 1)))
            return NULL;
          return t_FieldOrekitStepNormalizer::wrap_Object(FieldOrekitStepNormalizer(((t_FieldOrekitStepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_FieldOrekitStepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOrekitStepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOrekitStepNormalizer_of_(t_FieldOrekitStepNormalizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldOrekitStepNormalizer_init_(t_FieldOrekitStepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler a1((jobject) NULL);
          PyTypeObject **p1;
          FieldOrekitStepNormalizer object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::parameters_))
          {
            INT_CALL(object = FieldOrekitStepNormalizer(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldOrekitStepNormalizer_finish(t_FieldOrekitStepNormalizer *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepNormalizer_getFixedStepHandler(t_FieldOrekitStepNormalizer *self)
        {
          ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldOrekitStepNormalizer_getFixedTimeStep(t_FieldOrekitStepNormalizer *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFixedTimeStep());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldOrekitStepNormalizer_handleStep(t_FieldOrekitStepNormalizer *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepNormalizer_init(t_FieldOrekitStepNormalizer *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepNormalizer_requiresDenseOutput(t_FieldOrekitStepNormalizer *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.requiresDenseOutput());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_FieldOrekitStepNormalizer_get__parameters_(t_FieldOrekitStepNormalizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldOrekitStepNormalizer_get__fixedStepHandler(t_FieldOrekitStepNormalizer *self, void *data)
        {
          ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::wrap_Object(value);
        }

        static PyObject *t_FieldOrekitStepNormalizer_get__fixedTimeStep(t_FieldOrekitStepNormalizer *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFixedTimeStep());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LevenbergMarquardtOptimizer::class$ = NULL;
            jmethodID *LevenbergMarquardtOptimizer::mids$ = NULL;
            bool LevenbergMarquardtOptimizer::live$ = false;

            jclass LevenbergMarquardtOptimizer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_init$_cf6593b07e7e8f64] = env->getMethodID(cls, "<init>", "(DDDDD)V");
                mids$[mid_getCostRelativeTolerance_dff5885c2c873297] = env->getMethodID(cls, "getCostRelativeTolerance", "()D");
                mids$[mid_getInitialStepBoundFactor_dff5885c2c873297] = env->getMethodID(cls, "getInitialStepBoundFactor", "()D");
                mids$[mid_getOrthoTolerance_dff5885c2c873297] = env->getMethodID(cls, "getOrthoTolerance", "()D");
                mids$[mid_getParameterRelativeTolerance_dff5885c2c873297] = env->getMethodID(cls, "getParameterRelativeTolerance", "()D");
                mids$[mid_getRankingThreshold_dff5885c2c873297] = env->getMethodID(cls, "getRankingThreshold", "()D");
                mids$[mid_optimize_3488934cadbbcc09] = env->getMethodID(cls, "optimize", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
                mids$[mid_withCostRelativeTolerance_848d7cf4c83dca4b] = env->getMethodID(cls, "withCostRelativeTolerance", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");
                mids$[mid_withInitialStepBoundFactor_848d7cf4c83dca4b] = env->getMethodID(cls, "withInitialStepBoundFactor", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");
                mids$[mid_withOrthoTolerance_848d7cf4c83dca4b] = env->getMethodID(cls, "withOrthoTolerance", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");
                mids$[mid_withParameterRelativeTolerance_848d7cf4c83dca4b] = env->getMethodID(cls, "withParameterRelativeTolerance", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");
                mids$[mid_withRankingThreshold_848d7cf4c83dca4b] = env->getMethodID(cls, "withRankingThreshold", "(D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LevenbergMarquardtOptimizer;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LevenbergMarquardtOptimizer::LevenbergMarquardtOptimizer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            LevenbergMarquardtOptimizer::LevenbergMarquardtOptimizer(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cf6593b07e7e8f64, a0, a1, a2, a3, a4)) {}

            jdouble LevenbergMarquardtOptimizer::getCostRelativeTolerance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCostRelativeTolerance_dff5885c2c873297]);
            }

            jdouble LevenbergMarquardtOptimizer::getInitialStepBoundFactor() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getInitialStepBoundFactor_dff5885c2c873297]);
            }

            jdouble LevenbergMarquardtOptimizer::getOrthoTolerance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getOrthoTolerance_dff5885c2c873297]);
            }

            jdouble LevenbergMarquardtOptimizer::getParameterRelativeTolerance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getParameterRelativeTolerance_dff5885c2c873297]);
            }

            jdouble LevenbergMarquardtOptimizer::getRankingThreshold() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRankingThreshold_dff5885c2c873297]);
            }

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum LevenbergMarquardtOptimizer::optimize(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem & a0) const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_optimize_3488934cadbbcc09], a0.this$));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withCostRelativeTolerance(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withCostRelativeTolerance_848d7cf4c83dca4b], a0));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withInitialStepBoundFactor(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withInitialStepBoundFactor_848d7cf4c83dca4b], a0));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withOrthoTolerance(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withOrthoTolerance_848d7cf4c83dca4b], a0));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withParameterRelativeTolerance(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withParameterRelativeTolerance_848d7cf4c83dca4b], a0));
            }

            LevenbergMarquardtOptimizer LevenbergMarquardtOptimizer::withRankingThreshold(jdouble a0) const
            {
              return LevenbergMarquardtOptimizer(env->callObjectMethod(this$, mids$[mid_withRankingThreshold_848d7cf4c83dca4b], a0));
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
            static PyObject *t_LevenbergMarquardtOptimizer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LevenbergMarquardtOptimizer_init_(t_LevenbergMarquardtOptimizer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LevenbergMarquardtOptimizer_getCostRelativeTolerance(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_getInitialStepBoundFactor(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_getOrthoTolerance(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_getParameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_getRankingThreshold(t_LevenbergMarquardtOptimizer *self);
            static PyObject *t_LevenbergMarquardtOptimizer_optimize(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withCostRelativeTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withInitialStepBoundFactor(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withOrthoTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withParameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_withRankingThreshold(t_LevenbergMarquardtOptimizer *self, PyObject *arg);
            static PyObject *t_LevenbergMarquardtOptimizer_get__costRelativeTolerance(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyObject *t_LevenbergMarquardtOptimizer_get__initialStepBoundFactor(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyObject *t_LevenbergMarquardtOptimizer_get__orthoTolerance(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyObject *t_LevenbergMarquardtOptimizer_get__parameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyObject *t_LevenbergMarquardtOptimizer_get__rankingThreshold(t_LevenbergMarquardtOptimizer *self, void *data);
            static PyGetSetDef t_LevenbergMarquardtOptimizer__fields_[] = {
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, costRelativeTolerance),
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, initialStepBoundFactor),
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, orthoTolerance),
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, parameterRelativeTolerance),
              DECLARE_GET_FIELD(t_LevenbergMarquardtOptimizer, rankingThreshold),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LevenbergMarquardtOptimizer__methods_[] = {
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getCostRelativeTolerance, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getInitialStepBoundFactor, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getOrthoTolerance, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getParameterRelativeTolerance, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, getRankingThreshold, METH_NOARGS),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, optimize, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withCostRelativeTolerance, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withInitialStepBoundFactor, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withOrthoTolerance, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withParameterRelativeTolerance, METH_O),
              DECLARE_METHOD(t_LevenbergMarquardtOptimizer, withRankingThreshold, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LevenbergMarquardtOptimizer)[] = {
              { Py_tp_methods, t_LevenbergMarquardtOptimizer__methods_ },
              { Py_tp_init, (void *) t_LevenbergMarquardtOptimizer_init_ },
              { Py_tp_getset, t_LevenbergMarquardtOptimizer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LevenbergMarquardtOptimizer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LevenbergMarquardtOptimizer, t_LevenbergMarquardtOptimizer, LevenbergMarquardtOptimizer);

            void t_LevenbergMarquardtOptimizer::install(PyObject *module)
            {
              installType(&PY_TYPE(LevenbergMarquardtOptimizer), &PY_TYPE_DEF(LevenbergMarquardtOptimizer), module, "LevenbergMarquardtOptimizer", 0);
            }

            void t_LevenbergMarquardtOptimizer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LevenbergMarquardtOptimizer), "class_", make_descriptor(LevenbergMarquardtOptimizer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LevenbergMarquardtOptimizer), "wrapfn_", make_descriptor(t_LevenbergMarquardtOptimizer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LevenbergMarquardtOptimizer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LevenbergMarquardtOptimizer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LevenbergMarquardtOptimizer::initializeClass, 1)))
                return NULL;
              return t_LevenbergMarquardtOptimizer::wrap_Object(LevenbergMarquardtOptimizer(((t_LevenbergMarquardtOptimizer *) arg)->object.this$));
            }
            static PyObject *t_LevenbergMarquardtOptimizer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LevenbergMarquardtOptimizer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LevenbergMarquardtOptimizer_init_(t_LevenbergMarquardtOptimizer *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 0:
                {
                  LevenbergMarquardtOptimizer object((jobject) NULL);

                  INT_CALL(object = LevenbergMarquardtOptimizer());
                  self->object = object;
                  break;
                }
               case 5:
                {
                  jdouble a0;
                  jdouble a1;
                  jdouble a2;
                  jdouble a3;
                  jdouble a4;
                  LevenbergMarquardtOptimizer object((jobject) NULL);

                  if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = LevenbergMarquardtOptimizer(a0, a1, a2, a3, a4));
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

            static PyObject *t_LevenbergMarquardtOptimizer_getCostRelativeTolerance(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCostRelativeTolerance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getInitialStepBoundFactor(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getInitialStepBoundFactor());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getOrthoTolerance(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getOrthoTolerance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getParameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getParameterRelativeTolerance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_getRankingThreshold(t_LevenbergMarquardtOptimizer *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRankingThreshold());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_optimize(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
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

            static PyObject *t_LevenbergMarquardtOptimizer_withCostRelativeTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withCostRelativeTolerance(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withCostRelativeTolerance", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withInitialStepBoundFactor(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withInitialStepBoundFactor(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withInitialStepBoundFactor", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withOrthoTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withOrthoTolerance(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withOrthoTolerance", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withParameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withParameterRelativeTolerance(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withParameterRelativeTolerance", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_withRankingThreshold(t_LevenbergMarquardtOptimizer *self, PyObject *arg)
            {
              jdouble a0;
              LevenbergMarquardtOptimizer result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.withRankingThreshold(a0));
                return t_LevenbergMarquardtOptimizer::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "withRankingThreshold", arg);
              return NULL;
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__costRelativeTolerance(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCostRelativeTolerance());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__initialStepBoundFactor(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getInitialStepBoundFactor());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__orthoTolerance(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getOrthoTolerance());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__parameterRelativeTolerance(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getParameterRelativeTolerance());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LevenbergMarquardtOptimizer_get__rankingThreshold(t_LevenbergMarquardtOptimizer *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRankingThreshold());
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
#include "org/orekit/gnss/attitude/GPSBlockIIA.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *GPSBlockIIA::class$ = NULL;
        jmethodID *GPSBlockIIA::mids$ = NULL;
        bool GPSBlockIIA::live$ = false;
        jdouble GPSBlockIIA::DEFAULT_YAW_BIAS = (jdouble) 0;

        jclass GPSBlockIIA::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/GPSBlockIIA");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8e8d0492d42d1957] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");
            mids$[mid_getDefaultYawRate_46f85b53d9aedd96] = env->getStaticMethodID(cls, "getDefaultYawRate", "(I)D");
            mids$[mid_correctedYaw_dbb16eda5c9f6b1d] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
            mids$[mid_correctedYaw_64e3133ed57cb807] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_YAW_BIAS = env->getStaticDoubleField(cls, "DEFAULT_YAW_BIAS");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GPSBlockIIA::GPSBlockIIA(jdouble a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2, const ::org::orekit::time::AbsoluteDate & a3, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a4, const ::org::orekit::frames::Frame & a5) : ::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider(env->newObject(initializeClass, &mids$, mid_init$_8e8d0492d42d1957, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        jdouble GPSBlockIIA::getDefaultYawRate(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticDoubleMethod(cls, mids$[mid_getDefaultYawRate_46f85b53d9aedd96], a0);
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
      namespace attitude {
        static PyObject *t_GPSBlockIIA_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GPSBlockIIA_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GPSBlockIIA_init_(t_GPSBlockIIA *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GPSBlockIIA_getDefaultYawRate(PyTypeObject *type, PyObject *arg);

        static PyMethodDef t_GPSBlockIIA__methods_[] = {
          DECLARE_METHOD(t_GPSBlockIIA, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GPSBlockIIA, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GPSBlockIIA, getDefaultYawRate, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GPSBlockIIA)[] = {
          { Py_tp_methods, t_GPSBlockIIA__methods_ },
          { Py_tp_init, (void *) t_GPSBlockIIA_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GPSBlockIIA)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::AbstractGNSSAttitudeProvider),
          NULL
        };

        DEFINE_TYPE(GPSBlockIIA, t_GPSBlockIIA, GPSBlockIIA);

        void t_GPSBlockIIA::install(PyObject *module)
        {
          installType(&PY_TYPE(GPSBlockIIA), &PY_TYPE_DEF(GPSBlockIIA), module, "GPSBlockIIA", 0);
        }

        void t_GPSBlockIIA::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIA), "class_", make_descriptor(GPSBlockIIA::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIA), "wrapfn_", make_descriptor(t_GPSBlockIIA::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIA), "boxfn_", make_descriptor(boxObject));
          env->getClass(GPSBlockIIA::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GPSBlockIIA), "DEFAULT_YAW_BIAS", make_descriptor(GPSBlockIIA::DEFAULT_YAW_BIAS));
        }

        static PyObject *t_GPSBlockIIA_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GPSBlockIIA::initializeClass, 1)))
            return NULL;
          return t_GPSBlockIIA::wrap_Object(GPSBlockIIA(((t_GPSBlockIIA *) arg)->object.this$));
        }
        static PyObject *t_GPSBlockIIA_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GPSBlockIIA::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GPSBlockIIA_init_(t_GPSBlockIIA *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a3((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a4((jobject) NULL);
          ::org::orekit::frames::Frame a5((jobject) NULL);
          GPSBlockIIA object((jobject) NULL);

          if (!parseArgs(args, "DDkkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = GPSBlockIIA(a0, a1, a2, a3, a4, a5));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GPSBlockIIA_getDefaultYawRate(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::orekit::gnss::attitude::GPSBlockIIA::getDefaultYawRate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError(type, "getDefaultYawRate", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/fraction/Fraction$ConvergenceTest.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *Fraction$ConvergenceTest::class$ = NULL;
      jmethodID *Fraction$ConvergenceTest::mids$ = NULL;
      bool Fraction$ConvergenceTest::live$ = false;

      jclass Fraction$ConvergenceTest::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/Fraction$ConvergenceTest");

          mids$ = new jmethodID[max_mid];
          mids$[mid_test_4bcf680fb63dc524] = env->getMethodID(cls, "test", "(II)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean Fraction$ConvergenceTest::test(jint a0, jint a1) const
      {
        return env->callBooleanMethod(this$, mids$[mid_test_4bcf680fb63dc524], a0, a1);
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
      static PyObject *t_Fraction$ConvergenceTest_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fraction$ConvergenceTest_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fraction$ConvergenceTest_test(t_Fraction$ConvergenceTest *self, PyObject *args);

      static PyMethodDef t_Fraction$ConvergenceTest__methods_[] = {
        DECLARE_METHOD(t_Fraction$ConvergenceTest, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fraction$ConvergenceTest, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fraction$ConvergenceTest, test, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Fraction$ConvergenceTest)[] = {
        { Py_tp_methods, t_Fraction$ConvergenceTest__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Fraction$ConvergenceTest)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Fraction$ConvergenceTest, t_Fraction$ConvergenceTest, Fraction$ConvergenceTest);

      void t_Fraction$ConvergenceTest::install(PyObject *module)
      {
        installType(&PY_TYPE(Fraction$ConvergenceTest), &PY_TYPE_DEF(Fraction$ConvergenceTest), module, "Fraction$ConvergenceTest", 0);
      }

      void t_Fraction$ConvergenceTest::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction$ConvergenceTest), "class_", make_descriptor(Fraction$ConvergenceTest::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction$ConvergenceTest), "wrapfn_", make_descriptor(t_Fraction$ConvergenceTest::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fraction$ConvergenceTest), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Fraction$ConvergenceTest_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Fraction$ConvergenceTest::initializeClass, 1)))
          return NULL;
        return t_Fraction$ConvergenceTest::wrap_Object(Fraction$ConvergenceTest(((t_Fraction$ConvergenceTest *) arg)->object.this$));
      }
      static PyObject *t_Fraction$ConvergenceTest_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Fraction$ConvergenceTest::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Fraction$ConvergenceTest_test(t_Fraction$ConvergenceTest *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jboolean result;

        if (!parseArgs(args, "II", &a0, &a1))
        {
          OBJ_CALL(result = self->object.test(a0, a1));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "test", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/OsculatingToMeanElementsConverter.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *OsculatingToMeanElementsConverter::class$ = NULL;
        jmethodID *OsculatingToMeanElementsConverter::mids$ = NULL;
        bool OsculatingToMeanElementsConverter::live$ = false;

        jclass OsculatingToMeanElementsConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/OsculatingToMeanElementsConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_36851c0c6c006d26] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;ILorg/orekit/propagation/Propagator;D)V");
            mids$[mid_convert_c6311115fea01a34] = env->getMethodID(cls, "convert", "()Lorg/orekit/propagation/SpacecraftState;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OsculatingToMeanElementsConverter::OsculatingToMeanElementsConverter(const ::org::orekit::propagation::SpacecraftState & a0, jint a1, const ::org::orekit::propagation::Propagator & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_36851c0c6c006d26, a0.this$, a1, a2.this$, a3)) {}

        ::org::orekit::propagation::SpacecraftState OsculatingToMeanElementsConverter::convert() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_convert_c6311115fea01a34]));
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
        static PyObject *t_OsculatingToMeanElementsConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OsculatingToMeanElementsConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OsculatingToMeanElementsConverter_init_(t_OsculatingToMeanElementsConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OsculatingToMeanElementsConverter_convert(t_OsculatingToMeanElementsConverter *self);

        static PyMethodDef t_OsculatingToMeanElementsConverter__methods_[] = {
          DECLARE_METHOD(t_OsculatingToMeanElementsConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OsculatingToMeanElementsConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OsculatingToMeanElementsConverter, convert, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OsculatingToMeanElementsConverter)[] = {
          { Py_tp_methods, t_OsculatingToMeanElementsConverter__methods_ },
          { Py_tp_init, (void *) t_OsculatingToMeanElementsConverter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OsculatingToMeanElementsConverter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OsculatingToMeanElementsConverter, t_OsculatingToMeanElementsConverter, OsculatingToMeanElementsConverter);

        void t_OsculatingToMeanElementsConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(OsculatingToMeanElementsConverter), &PY_TYPE_DEF(OsculatingToMeanElementsConverter), module, "OsculatingToMeanElementsConverter", 0);
        }

        void t_OsculatingToMeanElementsConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OsculatingToMeanElementsConverter), "class_", make_descriptor(OsculatingToMeanElementsConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OsculatingToMeanElementsConverter), "wrapfn_", make_descriptor(t_OsculatingToMeanElementsConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OsculatingToMeanElementsConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OsculatingToMeanElementsConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OsculatingToMeanElementsConverter::initializeClass, 1)))
            return NULL;
          return t_OsculatingToMeanElementsConverter::wrap_Object(OsculatingToMeanElementsConverter(((t_OsculatingToMeanElementsConverter *) arg)->object.this$));
        }
        static PyObject *t_OsculatingToMeanElementsConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OsculatingToMeanElementsConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OsculatingToMeanElementsConverter_init_(t_OsculatingToMeanElementsConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jint a1;
          ::org::orekit::propagation::Propagator a2((jobject) NULL);
          jdouble a3;
          OsculatingToMeanElementsConverter object((jobject) NULL);

          if (!parseArgs(args, "kIkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::Propagator::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = OsculatingToMeanElementsConverter(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OsculatingToMeanElementsConverter_convert(t_OsculatingToMeanElementsConverter *self)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
          OBJ_CALL(result = self->object.convert());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/sequential/PythonSemiAnalyticalProcess.h"
#include "java/lang/Throwable.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *PythonSemiAnalyticalProcess::class$ = NULL;
        jmethodID *PythonSemiAnalyticalProcess::mids$ = NULL;
        bool PythonSemiAnalyticalProcess::live$ = false;

        jclass PythonSemiAnalyticalProcess::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/PythonSemiAnalyticalProcess");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_finalizeEstimation_da0919b7ae9816a3] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_finalizeOperationsObservationGrid_0fa09c18fee449d5] = env->getMethodID(cls, "finalizeOperationsObservationGrid", "()V");
            mids$[mid_getObserver_fc89aee73878aefd] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;");
            mids$[mid_initializeShortPeriodicTerms_0ee5c56004643a2e] = env->getMethodID(cls, "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_updateNominalSpacecraftState_0ee5c56004643a2e] = env->getMethodID(cls, "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateShortPeriods_0ee5c56004643a2e] = env->getMethodID(cls, "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonSemiAnalyticalProcess::PythonSemiAnalyticalProcess() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonSemiAnalyticalProcess::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonSemiAnalyticalProcess::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonSemiAnalyticalProcess::pythonExtension(jlong a0) const
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
    namespace estimation {
      namespace sequential {
        static PyObject *t_PythonSemiAnalyticalProcess_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonSemiAnalyticalProcess_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonSemiAnalyticalProcess_init_(t_PythonSemiAnalyticalProcess *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonSemiAnalyticalProcess_finalize(t_PythonSemiAnalyticalProcess *self);
        static PyObject *t_PythonSemiAnalyticalProcess_pythonExtension(t_PythonSemiAnalyticalProcess *self, PyObject *args);
        static void JNICALL t_PythonSemiAnalyticalProcess_finalizeEstimation0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static void JNICALL t_PythonSemiAnalyticalProcess_finalizeOperationsObservationGrid1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSemiAnalyticalProcess_getObserver2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonSemiAnalyticalProcess_initializeShortPeriodicTerms3(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonSemiAnalyticalProcess_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonSemiAnalyticalProcess_updateNominalSpacecraftState5(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonSemiAnalyticalProcess_updateShortPeriods6(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonSemiAnalyticalProcess_get__self(t_PythonSemiAnalyticalProcess *self, void *data);
        static PyGetSetDef t_PythonSemiAnalyticalProcess__fields_[] = {
          DECLARE_GET_FIELD(t_PythonSemiAnalyticalProcess, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonSemiAnalyticalProcess__methods_[] = {
          DECLARE_METHOD(t_PythonSemiAnalyticalProcess, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSemiAnalyticalProcess, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSemiAnalyticalProcess, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonSemiAnalyticalProcess, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonSemiAnalyticalProcess)[] = {
          { Py_tp_methods, t_PythonSemiAnalyticalProcess__methods_ },
          { Py_tp_init, (void *) t_PythonSemiAnalyticalProcess_init_ },
          { Py_tp_getset, t_PythonSemiAnalyticalProcess__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonSemiAnalyticalProcess)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonSemiAnalyticalProcess, t_PythonSemiAnalyticalProcess, PythonSemiAnalyticalProcess);

        void t_PythonSemiAnalyticalProcess::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonSemiAnalyticalProcess), &PY_TYPE_DEF(PythonSemiAnalyticalProcess), module, "PythonSemiAnalyticalProcess", 1);
        }

        void t_PythonSemiAnalyticalProcess::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSemiAnalyticalProcess), "class_", make_descriptor(PythonSemiAnalyticalProcess::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSemiAnalyticalProcess), "wrapfn_", make_descriptor(t_PythonSemiAnalyticalProcess::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSemiAnalyticalProcess), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonSemiAnalyticalProcess::initializeClass);
          JNINativeMethod methods[] = {
            { "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V", (void *) t_PythonSemiAnalyticalProcess_finalizeEstimation0 },
            { "finalizeOperationsObservationGrid", "()V", (void *) t_PythonSemiAnalyticalProcess_finalizeOperationsObservationGrid1 },
            { "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;", (void *) t_PythonSemiAnalyticalProcess_getObserver2 },
            { "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonSemiAnalyticalProcess_initializeShortPeriodicTerms3 },
            { "pythonDecRef", "()V", (void *) t_PythonSemiAnalyticalProcess_pythonDecRef4 },
            { "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonSemiAnalyticalProcess_updateNominalSpacecraftState5 },
            { "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonSemiAnalyticalProcess_updateShortPeriods6 },
          };
          env->registerNatives(cls, methods, 7);
        }

        static PyObject *t_PythonSemiAnalyticalProcess_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonSemiAnalyticalProcess::initializeClass, 1)))
            return NULL;
          return t_PythonSemiAnalyticalProcess::wrap_Object(PythonSemiAnalyticalProcess(((t_PythonSemiAnalyticalProcess *) arg)->object.this$));
        }
        static PyObject *t_PythonSemiAnalyticalProcess_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonSemiAnalyticalProcess::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonSemiAnalyticalProcess_init_(t_PythonSemiAnalyticalProcess *self, PyObject *args, PyObject *kwds)
        {
          PythonSemiAnalyticalProcess object((jobject) NULL);

          INT_CALL(object = PythonSemiAnalyticalProcess());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonSemiAnalyticalProcess_finalize(t_PythonSemiAnalyticalProcess *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonSemiAnalyticalProcess_pythonExtension(t_PythonSemiAnalyticalProcess *self, PyObject *args)
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

        static void JNICALL t_PythonSemiAnalyticalProcess_finalizeEstimation0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::estimation::measurements::t_ObservedMeasurement::wrap_Object(::org::orekit::estimation::measurements::ObservedMeasurement(a0));
          PyObject *o1 = ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(::org::hipparchus::filtering::kalman::ProcessEstimate(a1));
          PyObject *result = PyObject_CallMethod(obj, "finalizeEstimation", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonSemiAnalyticalProcess_finalizeOperationsObservationGrid1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *result = PyObject_CallMethod(obj, "finalizeOperationsObservationGrid", "");
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static jobject JNICALL t_PythonSemiAnalyticalProcess_getObserver2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getObserver", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
          {
            throwTypeError("getObserver", result);
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

        static void JNICALL t_PythonSemiAnalyticalProcess_initializeShortPeriodicTerms3(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "initializeShortPeriodicTerms", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonSemiAnalyticalProcess_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonSemiAnalyticalProcess_updateNominalSpacecraftState5(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "updateNominalSpacecraftState", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static void JNICALL t_PythonSemiAnalyticalProcess_updateShortPeriods6(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSemiAnalyticalProcess::mids$[PythonSemiAnalyticalProcess::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *result = PyObject_CallMethod(obj, "updateShortPeriods", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonSemiAnalyticalProcess_get__self(t_PythonSemiAnalyticalProcess *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace igm {

              ::java::lang::Class *SsrIgm03Header::class$ = NULL;
              jmethodID *SsrIgm03Header::mids$ = NULL;
              bool SsrIgm03Header::live$ = false;

              jclass SsrIgm03Header::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/igm/SsrIgm03Header");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getCrsIndicator_570ce0828f81a2c1] = env->getMethodID(cls, "getCrsIndicator", "()I");
                  mids$[mid_setCrsIndicator_99803b0791f320ff] = env->getMethodID(cls, "setCrsIndicator", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIgm03Header::SsrIgm03Header() : ::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jint SsrIgm03Header::getCrsIndicator() const
              {
                return env->callIntMethod(this$, mids$[mid_getCrsIndicator_570ce0828f81a2c1]);
              }

              void SsrIgm03Header::setCrsIndicator(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setCrsIndicator_99803b0791f320ff], a0);
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
              static PyObject *t_SsrIgm03Header_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIgm03Header_instance_(PyTypeObject *type, PyObject *arg);
              static int t_SsrIgm03Header_init_(t_SsrIgm03Header *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIgm03Header_getCrsIndicator(t_SsrIgm03Header *self);
              static PyObject *t_SsrIgm03Header_setCrsIndicator(t_SsrIgm03Header *self, PyObject *arg);
              static PyObject *t_SsrIgm03Header_get__crsIndicator(t_SsrIgm03Header *self, void *data);
              static int t_SsrIgm03Header_set__crsIndicator(t_SsrIgm03Header *self, PyObject *arg, void *data);
              static PyGetSetDef t_SsrIgm03Header__fields_[] = {
                DECLARE_GETSET_FIELD(t_SsrIgm03Header, crsIndicator),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIgm03Header__methods_[] = {
                DECLARE_METHOD(t_SsrIgm03Header, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03Header, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIgm03Header, getCrsIndicator, METH_NOARGS),
                DECLARE_METHOD(t_SsrIgm03Header, setCrsIndicator, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIgm03Header)[] = {
                { Py_tp_methods, t_SsrIgm03Header__methods_ },
                { Py_tp_init, (void *) t_SsrIgm03Header_init_ },
                { Py_tp_getset, t_SsrIgm03Header__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIgm03Header)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::igm::SsrIgmHeader),
                NULL
              };

              DEFINE_TYPE(SsrIgm03Header, t_SsrIgm03Header, SsrIgm03Header);

              void t_SsrIgm03Header::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIgm03Header), &PY_TYPE_DEF(SsrIgm03Header), module, "SsrIgm03Header", 0);
              }

              void t_SsrIgm03Header::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Header), "class_", make_descriptor(SsrIgm03Header::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Header), "wrapfn_", make_descriptor(t_SsrIgm03Header::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIgm03Header), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIgm03Header_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIgm03Header::initializeClass, 1)))
                  return NULL;
                return t_SsrIgm03Header::wrap_Object(SsrIgm03Header(((t_SsrIgm03Header *) arg)->object.this$));
              }
              static PyObject *t_SsrIgm03Header_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIgm03Header::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_SsrIgm03Header_init_(t_SsrIgm03Header *self, PyObject *args, PyObject *kwds)
              {
                SsrIgm03Header object((jobject) NULL);

                INT_CALL(object = SsrIgm03Header());
                self->object = object;

                return 0;
              }

              static PyObject *t_SsrIgm03Header_getCrsIndicator(t_SsrIgm03Header *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getCrsIndicator());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_SsrIgm03Header_setCrsIndicator(t_SsrIgm03Header *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setCrsIndicator(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setCrsIndicator", arg);
                return NULL;
              }

              static PyObject *t_SsrIgm03Header_get__crsIndicator(t_SsrIgm03Header *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getCrsIndicator());
                return PyLong_FromLong((long) value);
              }
              static int t_SsrIgm03Header_set__crsIndicator(t_SsrIgm03Header *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setCrsIndicator(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "crsIndicator", arg);
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
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *TrajectoryStateHistoryMetadataKey::class$ = NULL;
              jmethodID *TrajectoryStateHistoryMetadataKey::mids$ = NULL;
              bool TrajectoryStateHistoryMetadataKey::live$ = false;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::CENTER_NAME = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::COMMENT = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::INTERPOLATION = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::INTERPOLATION_DEGREE = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::ORB_AVERAGING = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::ORB_REVNUM = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::ORB_REVNUM_BASIS = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::PROPAGATOR = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_BASIS = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_BASIS_ID = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_FRAME_EPOCH = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_ID = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_NEXT_ID = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_PREV_ID = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_REF_FRAME = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_TYPE = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::TRAJ_UNITS = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::USEABLE_START_TIME = NULL;
              TrajectoryStateHistoryMetadataKey *TrajectoryStateHistoryMetadataKey::USEABLE_STOP_TIME = NULL;

              jclass TrajectoryStateHistoryMetadataKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_b6af25ec97c9e2be] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadata;)Z");
                  mids$[mid_valueOf_b8480e569bae6ced] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;");
                  mids$[mid_values_0e526f44ce4016ba] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CENTER_NAME = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "CENTER_NAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  COMMENT = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  INTERPOLATION = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  INTERPOLATION_DEGREE = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "INTERPOLATION_DEGREE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  ORB_AVERAGING = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "ORB_AVERAGING", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  ORB_REVNUM = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "ORB_REVNUM", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  ORB_REVNUM_BASIS = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "ORB_REVNUM_BASIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  PROPAGATOR = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "PROPAGATOR", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_BASIS = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_BASIS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_BASIS_ID = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_BASIS_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_FRAME_EPOCH = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_FRAME_EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_ID = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_NEXT_ID = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_NEXT_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_PREV_ID = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_PREV_ID", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_REF_FRAME = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_REF_FRAME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_TYPE = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_TYPE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  TRAJ_UNITS = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "TRAJ_UNITS", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  USEABLE_START_TIME = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "USEABLE_START_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  USEABLE_STOP_TIME = new TrajectoryStateHistoryMetadataKey(env->getStaticObjectField(cls, "USEABLE_STOP_TIME", "Lorg/orekit/files/ccsds/ndm/odm/ocm/TrajectoryStateHistoryMetadataKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean TrajectoryStateHistoryMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata & a2) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_b6af25ec97c9e2be], a0.this$, a1.this$, a2.this$);
              }

              TrajectoryStateHistoryMetadataKey TrajectoryStateHistoryMetadataKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return TrajectoryStateHistoryMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b8480e569bae6ced], a0.this$));
              }

              JArray< TrajectoryStateHistoryMetadataKey > TrajectoryStateHistoryMetadataKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< TrajectoryStateHistoryMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_0e526f44ce4016ba]));
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
              static PyObject *t_TrajectoryStateHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_of_(t_TrajectoryStateHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_process(t_TrajectoryStateHistoryMetadataKey *self, PyObject *args);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_values(PyTypeObject *type);
              static PyObject *t_TrajectoryStateHistoryMetadataKey_get__parameters_(t_TrajectoryStateHistoryMetadataKey *self, void *data);
              static PyGetSetDef t_TrajectoryStateHistoryMetadataKey__fields_[] = {
                DECLARE_GET_FIELD(t_TrajectoryStateHistoryMetadataKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_TrajectoryStateHistoryMetadataKey__methods_[] = {
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, process, METH_VARARGS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_TrajectoryStateHistoryMetadataKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(TrajectoryStateHistoryMetadataKey)[] = {
                { Py_tp_methods, t_TrajectoryStateHistoryMetadataKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_TrajectoryStateHistoryMetadataKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(TrajectoryStateHistoryMetadataKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(TrajectoryStateHistoryMetadataKey, t_TrajectoryStateHistoryMetadataKey, TrajectoryStateHistoryMetadataKey);
              PyObject *t_TrajectoryStateHistoryMetadataKey::wrap_Object(const TrajectoryStateHistoryMetadataKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_TrajectoryStateHistoryMetadataKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_TrajectoryStateHistoryMetadataKey *self = (t_TrajectoryStateHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_TrajectoryStateHistoryMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_TrajectoryStateHistoryMetadataKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_TrajectoryStateHistoryMetadataKey *self = (t_TrajectoryStateHistoryMetadataKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_TrajectoryStateHistoryMetadataKey::install(PyObject *module)
              {
                installType(&PY_TYPE(TrajectoryStateHistoryMetadataKey), &PY_TYPE_DEF(TrajectoryStateHistoryMetadataKey), module, "TrajectoryStateHistoryMetadataKey", 0);
              }

              void t_TrajectoryStateHistoryMetadataKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "class_", make_descriptor(TrajectoryStateHistoryMetadataKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "wrapfn_", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(TrajectoryStateHistoryMetadataKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "CENTER_NAME", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::CENTER_NAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "COMMENT", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "INTERPOLATION", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::INTERPOLATION)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "INTERPOLATION_DEGREE", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::INTERPOLATION_DEGREE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "ORB_AVERAGING", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::ORB_AVERAGING)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "ORB_REVNUM", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::ORB_REVNUM)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "ORB_REVNUM_BASIS", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::ORB_REVNUM_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "PROPAGATOR", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::PROPAGATOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_BASIS", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_BASIS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_BASIS_ID", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_BASIS_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_FRAME_EPOCH", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_FRAME_EPOCH)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_ID", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_NEXT_ID", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_NEXT_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_PREV_ID", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_REF_FRAME", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_REF_FRAME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_TYPE", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "TRAJ_UNITS", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::TRAJ_UNITS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "USEABLE_START_TIME", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::USEABLE_START_TIME)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(TrajectoryStateHistoryMetadataKey), "USEABLE_STOP_TIME", make_descriptor(t_TrajectoryStateHistoryMetadataKey::wrap_Object(*TrajectoryStateHistoryMetadataKey::USEABLE_STOP_TIME)));
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, TrajectoryStateHistoryMetadataKey::initializeClass, 1)))
                  return NULL;
                return t_TrajectoryStateHistoryMetadataKey::wrap_Object(TrajectoryStateHistoryMetadataKey(((t_TrajectoryStateHistoryMetadataKey *) arg)->object.this$));
              }
              static PyObject *t_TrajectoryStateHistoryMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, TrajectoryStateHistoryMetadataKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_of_(t_TrajectoryStateHistoryMetadataKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_process(t_TrajectoryStateHistoryMetadataKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata a2((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadata::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                TrajectoryStateHistoryMetadataKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadataKey::valueOf(a0));
                  return t_TrajectoryStateHistoryMetadataKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_TrajectoryStateHistoryMetadataKey_values(PyTypeObject *type)
              {
                JArray< TrajectoryStateHistoryMetadataKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::TrajectoryStateHistoryMetadataKey::values());
                return JArray<jobject>(result.this$).wrap(t_TrajectoryStateHistoryMetadataKey::wrap_jobject);
              }
              static PyObject *t_TrajectoryStateHistoryMetadataKey_get__parameters_(t_TrajectoryStateHistoryMetadataKey *self, void *data)
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
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *MultivariateDifferentiableFunction::class$ = NULL;
        jmethodID *MultivariateDifferentiableFunction::mids$ = NULL;
        bool MultivariateDifferentiableFunction::live$ = false;

        jclass MultivariateDifferentiableFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_eba3a2cb3a68c757] = env->getMethodID(cls, "value", "([Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure MultivariateDifferentiableFunction::value(const JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_value_eba3a2cb3a68c757], a0.this$));
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
        static PyObject *t_MultivariateDifferentiableFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateDifferentiableFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateDifferentiableFunction_value(t_MultivariateDifferentiableFunction *self, PyObject *args);

        static PyMethodDef t_MultivariateDifferentiableFunction__methods_[] = {
          DECLARE_METHOD(t_MultivariateDifferentiableFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateDifferentiableFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateDifferentiableFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateDifferentiableFunction)[] = {
          { Py_tp_methods, t_MultivariateDifferentiableFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateDifferentiableFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::MultivariateFunction),
          NULL
        };

        DEFINE_TYPE(MultivariateDifferentiableFunction, t_MultivariateDifferentiableFunction, MultivariateDifferentiableFunction);

        void t_MultivariateDifferentiableFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateDifferentiableFunction), &PY_TYPE_DEF(MultivariateDifferentiableFunction), module, "MultivariateDifferentiableFunction", 0);
        }

        void t_MultivariateDifferentiableFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableFunction), "class_", make_descriptor(MultivariateDifferentiableFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableFunction), "wrapfn_", make_descriptor(t_MultivariateDifferentiableFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateDifferentiableFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateDifferentiableFunction::initializeClass, 1)))
            return NULL;
          return t_MultivariateDifferentiableFunction::wrap_Object(MultivariateDifferentiableFunction(((t_MultivariateDifferentiableFunction *) arg)->object.this$));
        }
        static PyObject *t_MultivariateDifferentiableFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateDifferentiableFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultivariateDifferentiableFunction_value(t_MultivariateDifferentiableFunction *self, PyObject *args)
        {
          JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > a0((jobject) NULL);
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
          }

          return callSuper(PY_TYPE(MultivariateDifferentiableFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/multivariate/AbstractMultivariateRealDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/distribution/MultivariateRealDistribution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        ::java::lang::Class *AbstractMultivariateRealDistribution::class$ = NULL;
        jmethodID *AbstractMultivariateRealDistribution::mids$ = NULL;
        bool AbstractMultivariateRealDistribution::live$ = false;

        jclass AbstractMultivariateRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/multivariate/AbstractMultivariateRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_reseedRandomGenerator_3a8e7649f31fdb20] = env->getMethodID(cls, "reseedRandomGenerator", "(J)V");
            mids$[mid_sample_60c7040667a7dc5c] = env->getMethodID(cls, "sample", "()[D");
            mids$[mid_sample_d3e8f395184a4338] = env->getMethodID(cls, "sample", "(I)[[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jint AbstractMultivariateRealDistribution::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
        }

        void AbstractMultivariateRealDistribution::reseedRandomGenerator(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reseedRandomGenerator_3a8e7649f31fdb20], a0);
        }

        JArray< jdouble > AbstractMultivariateRealDistribution::sample() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_sample_60c7040667a7dc5c]));
        }

        JArray< JArray< jdouble > > AbstractMultivariateRealDistribution::sample(jint a0) const
        {
          return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_sample_d3e8f395184a4338], a0));
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
      namespace multivariate {
        static PyObject *t_AbstractMultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractMultivariateRealDistribution_getDimension(t_AbstractMultivariateRealDistribution *self);
        static PyObject *t_AbstractMultivariateRealDistribution_reseedRandomGenerator(t_AbstractMultivariateRealDistribution *self, PyObject *arg);
        static PyObject *t_AbstractMultivariateRealDistribution_sample(t_AbstractMultivariateRealDistribution *self, PyObject *args);
        static PyObject *t_AbstractMultivariateRealDistribution_get__dimension(t_AbstractMultivariateRealDistribution *self, void *data);
        static PyGetSetDef t_AbstractMultivariateRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractMultivariateRealDistribution, dimension),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractMultivariateRealDistribution__methods_[] = {
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, reseedRandomGenerator, METH_O),
          DECLARE_METHOD(t_AbstractMultivariateRealDistribution, sample, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractMultivariateRealDistribution)[] = {
          { Py_tp_methods, t_AbstractMultivariateRealDistribution__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractMultivariateRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractMultivariateRealDistribution)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractMultivariateRealDistribution, t_AbstractMultivariateRealDistribution, AbstractMultivariateRealDistribution);

        void t_AbstractMultivariateRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractMultivariateRealDistribution), &PY_TYPE_DEF(AbstractMultivariateRealDistribution), module, "AbstractMultivariateRealDistribution", 0);
        }

        void t_AbstractMultivariateRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultivariateRealDistribution), "class_", make_descriptor(AbstractMultivariateRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultivariateRealDistribution), "wrapfn_", make_descriptor(t_AbstractMultivariateRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMultivariateRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractMultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractMultivariateRealDistribution::initializeClass, 1)))
            return NULL;
          return t_AbstractMultivariateRealDistribution::wrap_Object(AbstractMultivariateRealDistribution(((t_AbstractMultivariateRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_AbstractMultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractMultivariateRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractMultivariateRealDistribution_getDimension(t_AbstractMultivariateRealDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractMultivariateRealDistribution_reseedRandomGenerator(t_AbstractMultivariateRealDistribution *self, PyObject *arg)
        {
          jlong a0;

          if (!parseArg(arg, "J", &a0))
          {
            OBJ_CALL(self->object.reseedRandomGenerator(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reseedRandomGenerator", arg);
          return NULL;
        }

        static PyObject *t_AbstractMultivariateRealDistribution_sample(t_AbstractMultivariateRealDistribution *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              JArray< jdouble > result((jobject) NULL);
              OBJ_CALL(result = self->object.sample());
              return result.wrap();
            }
            break;
           case 1:
            {
              jint a0;
              JArray< JArray< jdouble > > result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.sample(a0));
                return JArray<jobject>(result.this$).wrap(NULL);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "sample", args);
          return NULL;
        }

        static PyObject *t_AbstractMultivariateRealDistribution_get__dimension(t_AbstractMultivariateRealDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/SystemTimeOffsetMessage.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/navigation/UtcId.h"
#include "java/lang/String.h"
#include "org/orekit/files/rinex/navigation/SbasId.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *SystemTimeOffsetMessage::class$ = NULL;
          jmethodID *SystemTimeOffsetMessage::mids$ = NULL;
          bool SystemTimeOffsetMessage::live$ = false;

          jclass SystemTimeOffsetMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/SystemTimeOffsetMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a82ff7a18fa6993f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getA0_dff5885c2c873297] = env->getMethodID(cls, "getA0", "()D");
              mids$[mid_getA1_dff5885c2c873297] = env->getMethodID(cls, "getA1", "()D");
              mids$[mid_getA2_dff5885c2c873297] = env->getMethodID(cls, "getA2", "()D");
              mids$[mid_getDefinedTimeSystem_47ed81afbc0cea8f] = env->getMethodID(cls, "getDefinedTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
              mids$[mid_getReferenceEpoch_85703d13e302437e] = env->getMethodID(cls, "getReferenceEpoch", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getReferenceTimeSystem_47ed81afbc0cea8f] = env->getMethodID(cls, "getReferenceTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
              mids$[mid_getSbasId_8f6914b4bd2e2d71] = env->getMethodID(cls, "getSbasId", "()Lorg/orekit/files/rinex/navigation/SbasId;");
              mids$[mid_getTransmissionTime_dff5885c2c873297] = env->getMethodID(cls, "getTransmissionTime", "()D");
              mids$[mid_getUtcId_561540de83f061b2] = env->getMethodID(cls, "getUtcId", "()Lorg/orekit/files/rinex/navigation/UtcId;");
              mids$[mid_setA0_17db3a65980d3441] = env->getMethodID(cls, "setA0", "(D)V");
              mids$[mid_setA1_17db3a65980d3441] = env->getMethodID(cls, "setA1", "(D)V");
              mids$[mid_setA2_17db3a65980d3441] = env->getMethodID(cls, "setA2", "(D)V");
              mids$[mid_setDefinedTimeSystem_188d9681dd6fbe69] = env->getMethodID(cls, "setDefinedTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");
              mids$[mid_setReferenceEpoch_600a2a61652bc473] = env->getMethodID(cls, "setReferenceEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setReferenceTimeSystem_188d9681dd6fbe69] = env->getMethodID(cls, "setReferenceTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");
              mids$[mid_setSbasId_f0dccd70fadf61fe] = env->getMethodID(cls, "setSbasId", "(Lorg/orekit/files/rinex/navigation/SbasId;)V");
              mids$[mid_setTransmissionTime_17db3a65980d3441] = env->getMethodID(cls, "setTransmissionTime", "(D)V");
              mids$[mid_setUtcId_588659e8e1639977] = env->getMethodID(cls, "setUtcId", "(Lorg/orekit/files/rinex/navigation/UtcId;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SystemTimeOffsetMessage::SystemTimeOffsetMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::TypeSvMessage(env->newObject(initializeClass, &mids$, mid_init$_a82ff7a18fa6993f, a0.this$, a1, a2.this$)) {}

          jdouble SystemTimeOffsetMessage::getA0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA0_dff5885c2c873297]);
          }

          jdouble SystemTimeOffsetMessage::getA1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA1_dff5885c2c873297]);
          }

          jdouble SystemTimeOffsetMessage::getA2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA2_dff5885c2c873297]);
          }

          ::org::orekit::gnss::TimeSystem SystemTimeOffsetMessage::getDefinedTimeSystem() const
          {
            return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getDefinedTimeSystem_47ed81afbc0cea8f]));
          }

          ::org::orekit::time::AbsoluteDate SystemTimeOffsetMessage::getReferenceEpoch() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceEpoch_85703d13e302437e]));
          }

          ::org::orekit::gnss::TimeSystem SystemTimeOffsetMessage::getReferenceTimeSystem() const
          {
            return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getReferenceTimeSystem_47ed81afbc0cea8f]));
          }

          ::org::orekit::files::rinex::navigation::SbasId SystemTimeOffsetMessage::getSbasId() const
          {
            return ::org::orekit::files::rinex::navigation::SbasId(env->callObjectMethod(this$, mids$[mid_getSbasId_8f6914b4bd2e2d71]));
          }

          jdouble SystemTimeOffsetMessage::getTransmissionTime() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTransmissionTime_dff5885c2c873297]);
          }

          ::org::orekit::files::rinex::navigation::UtcId SystemTimeOffsetMessage::getUtcId() const
          {
            return ::org::orekit::files::rinex::navigation::UtcId(env->callObjectMethod(this$, mids$[mid_getUtcId_561540de83f061b2]));
          }

          void SystemTimeOffsetMessage::setA0(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setA0_17db3a65980d3441], a0);
          }

          void SystemTimeOffsetMessage::setA1(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setA1_17db3a65980d3441], a0);
          }

          void SystemTimeOffsetMessage::setA2(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setA2_17db3a65980d3441], a0);
          }

          void SystemTimeOffsetMessage::setDefinedTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDefinedTimeSystem_188d9681dd6fbe69], a0.this$);
          }

          void SystemTimeOffsetMessage::setReferenceEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReferenceEpoch_600a2a61652bc473], a0.this$);
          }

          void SystemTimeOffsetMessage::setReferenceTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReferenceTimeSystem_188d9681dd6fbe69], a0.this$);
          }

          void SystemTimeOffsetMessage::setSbasId(const ::org::orekit::files::rinex::navigation::SbasId & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSbasId_f0dccd70fadf61fe], a0.this$);
          }

          void SystemTimeOffsetMessage::setTransmissionTime(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTransmissionTime_17db3a65980d3441], a0);
          }

          void SystemTimeOffsetMessage::setUtcId(const ::org::orekit::files::rinex::navigation::UtcId & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setUtcId_588659e8e1639977], a0.this$);
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
          static PyObject *t_SystemTimeOffsetMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SystemTimeOffsetMessage_init_(t_SystemTimeOffsetMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SystemTimeOffsetMessage_getA0(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getA1(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getA2(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getDefinedTimeSystem(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getReferenceEpoch(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getReferenceTimeSystem(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getSbasId(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getTransmissionTime(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getUtcId(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_setA0(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setA1(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setA2(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setDefinedTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setReferenceEpoch(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setReferenceTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setSbasId(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setTransmissionTime(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setUtcId(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_get__a0(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__a0(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__a1(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__a1(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__a2(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__a2(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__definedTimeSystem(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__definedTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__referenceEpoch(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__referenceEpoch(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__referenceTimeSystem(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__referenceTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__sbasId(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__sbasId(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__transmissionTime(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__transmissionTime(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__utcId(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__utcId(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_SystemTimeOffsetMessage__fields_[] = {
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, a0),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, a1),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, a2),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, definedTimeSystem),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, referenceEpoch),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, referenceTimeSystem),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, sbasId),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, transmissionTime),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, utcId),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SystemTimeOffsetMessage__methods_[] = {
            DECLARE_METHOD(t_SystemTimeOffsetMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getA0, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getA1, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getA2, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getDefinedTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getReferenceEpoch, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getReferenceTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getSbasId, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getTransmissionTime, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getUtcId, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setA0, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setA1, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setA2, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setDefinedTimeSystem, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setReferenceEpoch, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setReferenceTimeSystem, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setSbasId, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setTransmissionTime, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setUtcId, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SystemTimeOffsetMessage)[] = {
            { Py_tp_methods, t_SystemTimeOffsetMessage__methods_ },
            { Py_tp_init, (void *) t_SystemTimeOffsetMessage_init_ },
            { Py_tp_getset, t_SystemTimeOffsetMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SystemTimeOffsetMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::TypeSvMessage),
            NULL
          };

          DEFINE_TYPE(SystemTimeOffsetMessage, t_SystemTimeOffsetMessage, SystemTimeOffsetMessage);

          void t_SystemTimeOffsetMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(SystemTimeOffsetMessage), &PY_TYPE_DEF(SystemTimeOffsetMessage), module, "SystemTimeOffsetMessage", 0);
          }

          void t_SystemTimeOffsetMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SystemTimeOffsetMessage), "class_", make_descriptor(SystemTimeOffsetMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SystemTimeOffsetMessage), "wrapfn_", make_descriptor(t_SystemTimeOffsetMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SystemTimeOffsetMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SystemTimeOffsetMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SystemTimeOffsetMessage::initializeClass, 1)))
              return NULL;
            return t_SystemTimeOffsetMessage::wrap_Object(SystemTimeOffsetMessage(((t_SystemTimeOffsetMessage *) arg)->object.this$));
          }
          static PyObject *t_SystemTimeOffsetMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SystemTimeOffsetMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SystemTimeOffsetMessage_init_(t_SystemTimeOffsetMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            SystemTimeOffsetMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = SystemTimeOffsetMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SystemTimeOffsetMessage_getA0(t_SystemTimeOffsetMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getA1(t_SystemTimeOffsetMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getA2(t_SystemTimeOffsetMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getDefinedTimeSystem(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::gnss::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getDefinedTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getReferenceEpoch(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getReferenceTimeSystem(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::gnss::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getSbasId(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::files::rinex::navigation::SbasId result((jobject) NULL);
            OBJ_CALL(result = self->object.getSbasId());
            return ::org::orekit::files::rinex::navigation::t_SbasId::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getTransmissionTime(t_SystemTimeOffsetMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTransmissionTime());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getUtcId(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::files::rinex::navigation::UtcId result((jobject) NULL);
            OBJ_CALL(result = self->object.getUtcId());
            return ::org::orekit::files::rinex::navigation::t_UtcId::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_setA0(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setA0(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setA0", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setA1(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setA1(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setA1", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setA2(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setA2(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setA2", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setDefinedTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
            {
              OBJ_CALL(self->object.setDefinedTimeSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDefinedTimeSystem", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setReferenceEpoch(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setReferenceEpoch(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReferenceEpoch", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setReferenceTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
            {
              OBJ_CALL(self->object.setReferenceTimeSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReferenceTimeSystem", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setSbasId(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::SbasId a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::navigation::SbasId::initializeClass, &a0, &p0, ::org::orekit::files::rinex::navigation::t_SbasId::parameters_))
            {
              OBJ_CALL(self->object.setSbasId(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSbasId", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setTransmissionTime(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setTransmissionTime(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTransmissionTime", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setUtcId(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::UtcId a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::navigation::UtcId::initializeClass, &a0, &p0, ::org::orekit::files::rinex::navigation::t_UtcId::parameters_))
            {
              OBJ_CALL(self->object.setUtcId(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setUtcId", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__a0(t_SystemTimeOffsetMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA0());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SystemTimeOffsetMessage_set__a0(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setA0(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "a0", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__a1(t_SystemTimeOffsetMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA1());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SystemTimeOffsetMessage_set__a1(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setA1(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "a1", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__a2(t_SystemTimeOffsetMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA2());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SystemTimeOffsetMessage_set__a2(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setA2(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "a2", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__definedTimeSystem(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getDefinedTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__definedTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::TimeSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setDefinedTimeSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "definedTimeSystem", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__referenceEpoch(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__referenceEpoch(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setReferenceEpoch(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "referenceEpoch", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__referenceTimeSystem(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__referenceTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::TimeSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setReferenceTimeSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "referenceTimeSystem", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__sbasId(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::files::rinex::navigation::SbasId value((jobject) NULL);
            OBJ_CALL(value = self->object.getSbasId());
            return ::org::orekit::files::rinex::navigation::t_SbasId::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__sbasId(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::rinex::navigation::SbasId value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::SbasId::initializeClass, &value))
              {
                INT_CALL(self->object.setSbasId(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "sbasId", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__transmissionTime(t_SystemTimeOffsetMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTransmissionTime());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SystemTimeOffsetMessage_set__transmissionTime(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setTransmissionTime(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "transmissionTime", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__utcId(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::files::rinex::navigation::UtcId value((jobject) NULL);
            OBJ_CALL(value = self->object.getUtcId());
            return ::org::orekit::files::rinex::navigation::t_UtcId::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__utcId(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::rinex::navigation::UtcId value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::UtcId::initializeClass, &value))
              {
                INT_CALL(self->object.setUtcId(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "utcId", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/PoissonSeries$CompiledSeries.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/data/FieldBodiesElements.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PoissonSeries$CompiledSeries::class$ = NULL;
      jmethodID *PoissonSeries$CompiledSeries::mids$ = NULL;
      bool PoissonSeries$CompiledSeries::live$ = false;

      jclass PoissonSeries$CompiledSeries::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PoissonSeries$CompiledSeries");

          mids$ = new jmethodID[max_mid];
          mids$[mid_derivative_82ff8289084ebe61] = env->getMethodID(cls, "derivative", "(Lorg/orekit/data/BodiesElements;)[D");
          mids$[mid_derivative_87b8f1de0a07b746] = env->getMethodID(cls, "derivative", "(Lorg/orekit/data/FieldBodiesElements;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_value_82ff8289084ebe61] = env->getMethodID(cls, "value", "(Lorg/orekit/data/BodiesElements;)[D");
          mids$[mid_value_87b8f1de0a07b746] = env->getMethodID(cls, "value", "(Lorg/orekit/data/FieldBodiesElements;)[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > PoissonSeries$CompiledSeries::derivative(const ::org::orekit::data::BodiesElements & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_derivative_82ff8289084ebe61], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > PoissonSeries$CompiledSeries::derivative(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_derivative_87b8f1de0a07b746], a0.this$));
      }

      JArray< jdouble > PoissonSeries$CompiledSeries::value(const ::org::orekit::data::BodiesElements & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_82ff8289084ebe61], a0.this$));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > PoissonSeries$CompiledSeries::value(const ::org::orekit::data::FieldBodiesElements & a0) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_value_87b8f1de0a07b746], a0.this$));
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
      static PyObject *t_PoissonSeries$CompiledSeries_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeries$CompiledSeries_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PoissonSeries$CompiledSeries_derivative(t_PoissonSeries$CompiledSeries *self, PyObject *args);
      static PyObject *t_PoissonSeries$CompiledSeries_value(t_PoissonSeries$CompiledSeries *self, PyObject *args);

      static PyMethodDef t_PoissonSeries$CompiledSeries__methods_[] = {
        DECLARE_METHOD(t_PoissonSeries$CompiledSeries, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeries$CompiledSeries, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PoissonSeries$CompiledSeries, derivative, METH_VARARGS),
        DECLARE_METHOD(t_PoissonSeries$CompiledSeries, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PoissonSeries$CompiledSeries)[] = {
        { Py_tp_methods, t_PoissonSeries$CompiledSeries__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PoissonSeries$CompiledSeries)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PoissonSeries$CompiledSeries, t_PoissonSeries$CompiledSeries, PoissonSeries$CompiledSeries);

      void t_PoissonSeries$CompiledSeries::install(PyObject *module)
      {
        installType(&PY_TYPE(PoissonSeries$CompiledSeries), &PY_TYPE_DEF(PoissonSeries$CompiledSeries), module, "PoissonSeries$CompiledSeries", 0);
      }

      void t_PoissonSeries$CompiledSeries::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries$CompiledSeries), "class_", make_descriptor(PoissonSeries$CompiledSeries::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries$CompiledSeries), "wrapfn_", make_descriptor(t_PoissonSeries$CompiledSeries::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PoissonSeries$CompiledSeries), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_PoissonSeries$CompiledSeries_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PoissonSeries$CompiledSeries::initializeClass, 1)))
          return NULL;
        return t_PoissonSeries$CompiledSeries::wrap_Object(PoissonSeries$CompiledSeries(((t_PoissonSeries$CompiledSeries *) arg)->object.this$));
      }
      static PyObject *t_PoissonSeries$CompiledSeries_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PoissonSeries$CompiledSeries::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PoissonSeries$CompiledSeries_derivative(t_PoissonSeries$CompiledSeries *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
            {
              OBJ_CALL(result = self->object.derivative(a0));
              return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "derivative", args);
        return NULL;
      }

      static PyObject *t_PoissonSeries$CompiledSeries_value(t_PoissonSeries$CompiledSeries *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            JArray< jdouble > result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::data::BodiesElements::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.value(a0));
              return result.wrap();
            }
          }
          {
            ::org::orekit::data::FieldBodiesElements a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::data::FieldBodiesElements::initializeClass, &a0, &p0, ::org::orekit::data::t_FieldBodiesElements::parameters_))
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldSinhCosh::class$ = NULL;
      jmethodID *FieldSinhCosh::mids$ = NULL;
      bool FieldSinhCosh::live$ = false;

      jclass FieldSinhCosh::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldSinhCosh");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ea69641e3fe74dd6] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V");
          mids$[mid_cosh_4d26fd885228c716] = env->getMethodID(cls, "cosh", "()Ljava/lang/Object;");
          mids$[mid_difference_7303e199c6f7c51d] = env->getStaticMethodID(cls, "difference", "(Lorg/hipparchus/util/FieldSinhCosh;Lorg/hipparchus/util/FieldSinhCosh;)Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sinh_4d26fd885228c716] = env->getMethodID(cls, "sinh", "()Ljava/lang/Object;");
          mids$[mid_sum_7303e199c6f7c51d] = env->getStaticMethodID(cls, "sum", "(Lorg/hipparchus/util/FieldSinhCosh;Lorg/hipparchus/util/FieldSinhCosh;)Lorg/hipparchus/util/FieldSinhCosh;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldSinhCosh::FieldSinhCosh(const ::java::lang::Object & a0, const ::java::lang::Object & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ea69641e3fe74dd6, a0.this$, a1.this$)) {}

      ::java::lang::Object FieldSinhCosh::cosh() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_cosh_4d26fd885228c716]));
      }

      FieldSinhCosh FieldSinhCosh::difference(const FieldSinhCosh & a0, const FieldSinhCosh & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldSinhCosh(env->callStaticObjectMethod(cls, mids$[mid_difference_7303e199c6f7c51d], a0.this$, a1.this$));
      }

      ::java::lang::Object FieldSinhCosh::sinh() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_sinh_4d26fd885228c716]));
      }

      FieldSinhCosh FieldSinhCosh::sum(const FieldSinhCosh & a0, const FieldSinhCosh & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldSinhCosh(env->callStaticObjectMethod(cls, mids$[mid_sum_7303e199c6f7c51d], a0.this$, a1.this$));
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
      static PyObject *t_FieldSinhCosh_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSinhCosh_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSinhCosh_of_(t_FieldSinhCosh *self, PyObject *args);
      static int t_FieldSinhCosh_init_(t_FieldSinhCosh *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldSinhCosh_cosh(t_FieldSinhCosh *self);
      static PyObject *t_FieldSinhCosh_difference(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldSinhCosh_sinh(t_FieldSinhCosh *self);
      static PyObject *t_FieldSinhCosh_sum(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldSinhCosh_get__parameters_(t_FieldSinhCosh *self, void *data);
      static PyGetSetDef t_FieldSinhCosh__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSinhCosh, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSinhCosh__methods_[] = {
        DECLARE_METHOD(t_FieldSinhCosh, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSinhCosh, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSinhCosh, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSinhCosh, cosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldSinhCosh, difference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldSinhCosh, sinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldSinhCosh, sum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSinhCosh)[] = {
        { Py_tp_methods, t_FieldSinhCosh__methods_ },
        { Py_tp_init, (void *) t_FieldSinhCosh_init_ },
        { Py_tp_getset, t_FieldSinhCosh__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSinhCosh)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldSinhCosh, t_FieldSinhCosh, FieldSinhCosh);
      PyObject *t_FieldSinhCosh::wrap_Object(const FieldSinhCosh& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSinhCosh::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSinhCosh *self = (t_FieldSinhCosh *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSinhCosh::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSinhCosh::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSinhCosh *self = (t_FieldSinhCosh *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSinhCosh::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSinhCosh), &PY_TYPE_DEF(FieldSinhCosh), module, "FieldSinhCosh", 0);
      }

      void t_FieldSinhCosh::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinhCosh), "class_", make_descriptor(FieldSinhCosh::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinhCosh), "wrapfn_", make_descriptor(t_FieldSinhCosh::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinhCosh), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSinhCosh_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSinhCosh::initializeClass, 1)))
          return NULL;
        return t_FieldSinhCosh::wrap_Object(FieldSinhCosh(((t_FieldSinhCosh *) arg)->object.this$));
      }
      static PyObject *t_FieldSinhCosh_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSinhCosh::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSinhCosh_of_(t_FieldSinhCosh *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldSinhCosh_init_(t_FieldSinhCosh *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::java::lang::Object a1((jobject) NULL);
        FieldSinhCosh object((jobject) NULL);

        if (!parseArgs(args, "oo", &a0, &a1))
        {
          INT_CALL(object = FieldSinhCosh(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldSinhCosh_cosh(t_FieldSinhCosh *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldSinhCosh_difference(PyTypeObject *type, PyObject *args)
      {
        FieldSinhCosh a0((jobject) NULL);
        PyTypeObject **p0;
        FieldSinhCosh a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSinhCosh result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldSinhCosh::initializeClass, FieldSinhCosh::initializeClass, &a0, &p0, t_FieldSinhCosh::parameters_, &a1, &p1, t_FieldSinhCosh::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FieldSinhCosh::difference(a0, a1));
          return t_FieldSinhCosh::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "difference", args);
        return NULL;
      }

      static PyObject *t_FieldSinhCosh_sinh(t_FieldSinhCosh *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldSinhCosh_sum(PyTypeObject *type, PyObject *args)
      {
        FieldSinhCosh a0((jobject) NULL);
        PyTypeObject **p0;
        FieldSinhCosh a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSinhCosh result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldSinhCosh::initializeClass, FieldSinhCosh::initializeClass, &a0, &p0, t_FieldSinhCosh::parameters_, &a1, &p1, t_FieldSinhCosh::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FieldSinhCosh::sum(a0, a1));
          return t_FieldSinhCosh::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }
      static PyObject *t_FieldSinhCosh_get__parameters_(t_FieldSinhCosh *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonBoundedPropagator.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/util/Collection.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/propagation/SpacecraftState.h"
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
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addAdditionalStateProvider_81bc0d009507f0f4] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V");
          mids$[mid_addEventDetector_efb7003d866d4523] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
          mids$[mid_clearEventsDetectors_0fa09c18fee449d5] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalStateProviders_2afa36052df4765d] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_a904f3d015a354a0] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_18d439b26e70ccd0] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
          mids$[mid_getEventsDetectors_37528d110cff6b74] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_c6311115fea01a34] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getManagedAdditionalStates_692f4257baa8d3c3] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMaxDate_85703d13e302437e] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_85703d13e302437e] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMultiplexer_808e9f10a9e4927b] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_cfeec55f7c63ec64] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_7edad2c2f64f4d68] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_fbff2ff5554d95e1] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_propagate_a69ef29c3ea1e1fa] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_resetInitialState_0ee5c56004643a2e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_setAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonBoundedPropagator::PythonBoundedPropagator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonBoundedPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonBoundedPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonBoundedPropagator::pythonExtension(jlong a0) const
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonBoundedPropagator_resetInitialState18(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
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
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_492808a339bfa35f]);
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
#include "org/orekit/data/AbstractListCrawler.h"
#include "org/orekit/data/DataProvider.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *AbstractListCrawler::class$ = NULL;
      jmethodID *AbstractListCrawler::mids$ = NULL;
      bool AbstractListCrawler::live$ = false;

      jclass AbstractListCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/AbstractListCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addInput_2990946c992aafed] = env->getMethodID(cls, "addInput", "(Ljava/lang/Object;)V");
          mids$[mid_getInputs_2afa36052df4765d] = env->getMethodID(cls, "getInputs", "()Ljava/util/List;");
          mids$[mid_getStream_21e7c14915faab34] = env->getMethodID(cls, "getStream", "(Ljava/lang/Object;)Ljava/io/InputStream;");
          mids$[mid_getZipJarCrawler_30558b0704cd5966] = env->getMethodID(cls, "getZipJarCrawler", "(Ljava/lang/Object;)Lorg/orekit/data/ZipJarCrawler;");
          mids$[mid_getBaseName_e816b890c4273bbd] = env->getMethodID(cls, "getBaseName", "(Ljava/lang/Object;)Ljava/lang/String;");
          mids$[mid_getCompleteName_e816b890c4273bbd] = env->getMethodID(cls, "getCompleteName", "(Ljava/lang/Object;)Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void AbstractListCrawler::addInput(const ::java::lang::Object & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_addInput_2990946c992aafed], a0.this$);
      }

      ::java::util::List AbstractListCrawler::getInputs() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getInputs_2afa36052df4765d]));
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
      static PyObject *t_AbstractListCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractListCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractListCrawler_of_(t_AbstractListCrawler *self, PyObject *args);
      static PyObject *t_AbstractListCrawler_addInput(t_AbstractListCrawler *self, PyObject *arg);
      static PyObject *t_AbstractListCrawler_getInputs(t_AbstractListCrawler *self);
      static PyObject *t_AbstractListCrawler_get__inputs(t_AbstractListCrawler *self, void *data);
      static PyObject *t_AbstractListCrawler_get__parameters_(t_AbstractListCrawler *self, void *data);
      static PyGetSetDef t_AbstractListCrawler__fields_[] = {
        DECLARE_GET_FIELD(t_AbstractListCrawler, inputs),
        DECLARE_GET_FIELD(t_AbstractListCrawler, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbstractListCrawler__methods_[] = {
        DECLARE_METHOD(t_AbstractListCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractListCrawler, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractListCrawler, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbstractListCrawler, addInput, METH_O),
        DECLARE_METHOD(t_AbstractListCrawler, getInputs, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractListCrawler)[] = {
        { Py_tp_methods, t_AbstractListCrawler__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_AbstractListCrawler__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractListCrawler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractListCrawler, t_AbstractListCrawler, AbstractListCrawler);
      PyObject *t_AbstractListCrawler::wrap_Object(const AbstractListCrawler& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractListCrawler::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractListCrawler *self = (t_AbstractListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbstractListCrawler::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbstractListCrawler::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbstractListCrawler *self = (t_AbstractListCrawler *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbstractListCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractListCrawler), &PY_TYPE_DEF(AbstractListCrawler), module, "AbstractListCrawler", 0);
      }

      void t_AbstractListCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractListCrawler), "class_", make_descriptor(AbstractListCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractListCrawler), "wrapfn_", make_descriptor(t_AbstractListCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractListCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractListCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractListCrawler::initializeClass, 1)))
          return NULL;
        return t_AbstractListCrawler::wrap_Object(AbstractListCrawler(((t_AbstractListCrawler *) arg)->object.this$));
      }
      static PyObject *t_AbstractListCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractListCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbstractListCrawler_of_(t_AbstractListCrawler *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_AbstractListCrawler_addInput(t_AbstractListCrawler *self, PyObject *arg)
      {
        ::java::lang::Object a0((jobject) NULL);

        if (!parseArg(arg, "O", self->parameters[0], &a0))
        {
          OBJ_CALL(self->object.addInput(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addInput", arg);
        return NULL;
      }

      static PyObject *t_AbstractListCrawler_getInputs(t_AbstractListCrawler *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getInputs());
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_AbstractListCrawler_get__parameters_(t_AbstractListCrawler *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbstractListCrawler_get__inputs(t_AbstractListCrawler *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getInputs());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *DfpField$RoundingMode::class$ = NULL;
      jmethodID *DfpField$RoundingMode::mids$ = NULL;
      bool DfpField$RoundingMode::live$ = false;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_CEIL = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_DOWN = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_FLOOR = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_HALF_DOWN = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_HALF_EVEN = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_HALF_ODD = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_HALF_UP = NULL;
      DfpField$RoundingMode *DfpField$RoundingMode::ROUND_UP = NULL;

      jclass DfpField$RoundingMode::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/DfpField$RoundingMode");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_ea89e584afd79cc7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/dfp/DfpField$RoundingMode;");
          mids$[mid_values_487a25867658d69c] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/dfp/DfpField$RoundingMode;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ROUND_CEIL = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_CEIL", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_DOWN = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_DOWN", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_FLOOR = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_FLOOR", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_HALF_DOWN = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_HALF_DOWN", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_HALF_EVEN = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_HALF_EVEN", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_HALF_ODD = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_HALF_ODD", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_HALF_UP = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_HALF_UP", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          ROUND_UP = new DfpField$RoundingMode(env->getStaticObjectField(cls, "ROUND_UP", "Lorg/hipparchus/dfp/DfpField$RoundingMode;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DfpField$RoundingMode DfpField$RoundingMode::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DfpField$RoundingMode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ea89e584afd79cc7], a0.this$));
      }

      JArray< DfpField$RoundingMode > DfpField$RoundingMode::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< DfpField$RoundingMode >(env->callStaticObjectMethod(cls, mids$[mid_values_487a25867658d69c]));
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
      static PyObject *t_DfpField$RoundingMode_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpField$RoundingMode_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DfpField$RoundingMode_of_(t_DfpField$RoundingMode *self, PyObject *args);
      static PyObject *t_DfpField$RoundingMode_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_DfpField$RoundingMode_values(PyTypeObject *type);
      static PyObject *t_DfpField$RoundingMode_get__parameters_(t_DfpField$RoundingMode *self, void *data);
      static PyGetSetDef t_DfpField$RoundingMode__fields_[] = {
        DECLARE_GET_FIELD(t_DfpField$RoundingMode, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DfpField$RoundingMode__methods_[] = {
        DECLARE_METHOD(t_DfpField$RoundingMode, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpField$RoundingMode, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DfpField$RoundingMode, of_, METH_VARARGS),
        DECLARE_METHOD(t_DfpField$RoundingMode, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DfpField$RoundingMode, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DfpField$RoundingMode)[] = {
        { Py_tp_methods, t_DfpField$RoundingMode__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_DfpField$RoundingMode__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DfpField$RoundingMode)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(DfpField$RoundingMode, t_DfpField$RoundingMode, DfpField$RoundingMode);
      PyObject *t_DfpField$RoundingMode::wrap_Object(const DfpField$RoundingMode& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DfpField$RoundingMode::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DfpField$RoundingMode *self = (t_DfpField$RoundingMode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_DfpField$RoundingMode::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DfpField$RoundingMode::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DfpField$RoundingMode *self = (t_DfpField$RoundingMode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_DfpField$RoundingMode::install(PyObject *module)
      {
        installType(&PY_TYPE(DfpField$RoundingMode), &PY_TYPE_DEF(DfpField$RoundingMode), module, "DfpField$RoundingMode", 0);
      }

      void t_DfpField$RoundingMode::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "class_", make_descriptor(DfpField$RoundingMode::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "wrapfn_", make_descriptor(t_DfpField$RoundingMode::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "boxfn_", make_descriptor(boxObject));
        env->getClass(DfpField$RoundingMode::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_CEIL", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_CEIL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_DOWN", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_DOWN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_FLOOR", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_FLOOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_HALF_DOWN", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_HALF_DOWN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_HALF_EVEN", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_HALF_EVEN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_HALF_ODD", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_HALF_ODD)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_HALF_UP", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_HALF_UP)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DfpField$RoundingMode), "ROUND_UP", make_descriptor(t_DfpField$RoundingMode::wrap_Object(*DfpField$RoundingMode::ROUND_UP)));
      }

      static PyObject *t_DfpField$RoundingMode_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DfpField$RoundingMode::initializeClass, 1)))
          return NULL;
        return t_DfpField$RoundingMode::wrap_Object(DfpField$RoundingMode(((t_DfpField$RoundingMode *) arg)->object.this$));
      }
      static PyObject *t_DfpField$RoundingMode_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DfpField$RoundingMode::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DfpField$RoundingMode_of_(t_DfpField$RoundingMode *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_DfpField$RoundingMode_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        DfpField$RoundingMode result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::DfpField$RoundingMode::valueOf(a0));
          return t_DfpField$RoundingMode::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_DfpField$RoundingMode_values(PyTypeObject *type)
      {
        JArray< DfpField$RoundingMode > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::dfp::DfpField$RoundingMode::values());
        return JArray<jobject>(result.this$).wrap(t_DfpField$RoundingMode::wrap_jobject);
      }
      static PyObject *t_DfpField$RoundingMode_get__parameters_(t_DfpField$RoundingMode *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/rflink/gps/SubFrame4A0.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4A0::class$ = NULL;
          jmethodID *SubFrame4A0::mids$ = NULL;
          bool SubFrame4A0::live$ = false;

          jclass SubFrame4A0::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4A0");

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
    namespace gnss {
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrame4A0_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4A0_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_SubFrame4A0__methods_[] = {
            DECLARE_METHOD(t_SubFrame4A0, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4A0, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4A0)[] = {
            { Py_tp_methods, t_SubFrame4A0__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4A0)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame4A),
            NULL
          };

          DEFINE_TYPE(SubFrame4A0, t_SubFrame4A0, SubFrame4A0);

          void t_SubFrame4A0::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4A0), &PY_TYPE_DEF(SubFrame4A0), module, "SubFrame4A0", 0);
          }

          void t_SubFrame4A0::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A0), "class_", make_descriptor(SubFrame4A0::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A0), "wrapfn_", make_descriptor(t_SubFrame4A0::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A0), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4A0_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4A0::initializeClass, 1)))
              return NULL;
            return t_SubFrame4A0::wrap_Object(SubFrame4A0(((t_SubFrame4A0 *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4A0_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4A0::initializeClass, 0))
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder.h"
#include "org/hipparchus/optim/PointVectorValuePair.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "org/hipparchus/analysis/MultivariateMatrixFunction.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresBuilder::class$ = NULL;
            jmethodID *LeastSquaresBuilder::mids$ = NULL;
            bool LeastSquaresBuilder::live$ = false;

            jclass LeastSquaresBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_build_aeabf3242ed5a8b9] = env->getMethodID(cls, "build", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem;");
                mids$[mid_checker_fdf80a18bc265075] = env->getMethodID(cls, "checker", "(Lorg/hipparchus/optim/ConvergenceChecker;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_checkerPair_fdf80a18bc265075] = env->getMethodID(cls, "checkerPair", "(Lorg/hipparchus/optim/ConvergenceChecker;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_lazyEvaluation_38772d24a7221ad8] = env->getMethodID(cls, "lazyEvaluation", "(Z)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_maxEvaluations_dd50180c17e64d80] = env->getMethodID(cls, "maxEvaluations", "(I)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_maxIterations_dd50180c17e64d80] = env->getMethodID(cls, "maxIterations", "(I)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_model_8f1d32e159419274] = env->getMethodID(cls, "model", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_model_8f865717df8aafbe] = env->getMethodID(cls, "model", "(Lorg/hipparchus/analysis/MultivariateVectorFunction;Lorg/hipparchus/analysis/MultivariateMatrixFunction;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_parameterValidator_b0761bb56229051e] = env->getMethodID(cls, "parameterValidator", "(Lorg/hipparchus/optim/nonlinear/vector/leastsquares/ParameterValidator;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_start_14af3579014ddd1a] = env->getMethodID(cls, "start", "([D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_start_97966ff84717f705] = env->getMethodID(cls, "start", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_target_14af3579014ddd1a] = env->getMethodID(cls, "target", "([D)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_target_97966ff84717f705] = env->getMethodID(cls, "target", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");
                mids$[mid_weight_084a0d6cdaf6838e] = env->getMethodID(cls, "weight", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresBuilder;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            LeastSquaresBuilder::LeastSquaresBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem LeastSquaresBuilder::build() const
            {
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem(env->callObjectMethod(this$, mids$[mid_build_aeabf3242ed5a8b9]));
            }

            LeastSquaresBuilder LeastSquaresBuilder::checker(const ::org::hipparchus::optim::ConvergenceChecker & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_checker_fdf80a18bc265075], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::checkerPair(const ::org::hipparchus::optim::ConvergenceChecker & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_checkerPair_fdf80a18bc265075], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::lazyEvaluation(jboolean a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_lazyEvaluation_38772d24a7221ad8], a0));
            }

            LeastSquaresBuilder LeastSquaresBuilder::maxEvaluations(jint a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_maxEvaluations_dd50180c17e64d80], a0));
            }

            LeastSquaresBuilder LeastSquaresBuilder::maxIterations(jint a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_maxIterations_dd50180c17e64d80], a0));
            }

            LeastSquaresBuilder LeastSquaresBuilder::model(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_model_8f1d32e159419274], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::model(const ::org::hipparchus::analysis::MultivariateVectorFunction & a0, const ::org::hipparchus::analysis::MultivariateMatrixFunction & a1) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_model_8f865717df8aafbe], a0.this$, a1.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::parameterValidator(const ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_parameterValidator_b0761bb56229051e], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::start(const JArray< jdouble > & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_start_14af3579014ddd1a], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::start(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_start_97966ff84717f705], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::target(const JArray< jdouble > & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_target_14af3579014ddd1a], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::target(const ::org::hipparchus::linear::RealVector & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_target_97966ff84717f705], a0.this$));
            }

            LeastSquaresBuilder LeastSquaresBuilder::weight(const ::org::hipparchus::linear::RealMatrix & a0) const
            {
              return LeastSquaresBuilder(env->callObjectMethod(this$, mids$[mid_weight_084a0d6cdaf6838e], a0.this$));
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
            static PyObject *t_LeastSquaresBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_LeastSquaresBuilder_init_(t_LeastSquaresBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_LeastSquaresBuilder_build(t_LeastSquaresBuilder *self);
            static PyObject *t_LeastSquaresBuilder_checker(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_checkerPair(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_lazyEvaluation(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_maxEvaluations(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_maxIterations(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_model(t_LeastSquaresBuilder *self, PyObject *args);
            static PyObject *t_LeastSquaresBuilder_parameterValidator(t_LeastSquaresBuilder *self, PyObject *arg);
            static PyObject *t_LeastSquaresBuilder_start(t_LeastSquaresBuilder *self, PyObject *args);
            static PyObject *t_LeastSquaresBuilder_target(t_LeastSquaresBuilder *self, PyObject *args);
            static PyObject *t_LeastSquaresBuilder_weight(t_LeastSquaresBuilder *self, PyObject *arg);

            static PyMethodDef t_LeastSquaresBuilder__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresBuilder, build, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresBuilder, checker, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, checkerPair, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, lazyEvaluation, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, maxEvaluations, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, maxIterations, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, model, METH_VARARGS),
              DECLARE_METHOD(t_LeastSquaresBuilder, parameterValidator, METH_O),
              DECLARE_METHOD(t_LeastSquaresBuilder, start, METH_VARARGS),
              DECLARE_METHOD(t_LeastSquaresBuilder, target, METH_VARARGS),
              DECLARE_METHOD(t_LeastSquaresBuilder, weight, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresBuilder)[] = {
              { Py_tp_methods, t_LeastSquaresBuilder__methods_ },
              { Py_tp_init, (void *) t_LeastSquaresBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresBuilder, t_LeastSquaresBuilder, LeastSquaresBuilder);

            void t_LeastSquaresBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresBuilder), &PY_TYPE_DEF(LeastSquaresBuilder), module, "LeastSquaresBuilder", 0);
            }

            void t_LeastSquaresBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresBuilder), "class_", make_descriptor(LeastSquaresBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresBuilder), "wrapfn_", make_descriptor(t_LeastSquaresBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresBuilder::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresBuilder::wrap_Object(LeastSquaresBuilder(((t_LeastSquaresBuilder *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_LeastSquaresBuilder_init_(t_LeastSquaresBuilder *self, PyObject *args, PyObject *kwds)
            {
              LeastSquaresBuilder object((jobject) NULL);

              INT_CALL(object = LeastSquaresBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_LeastSquaresBuilder_build(t_LeastSquaresBuilder *self)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem result((jobject) NULL);
              OBJ_CALL(result = self->object.build());
              return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresProblem::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresBuilder_checker(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
              PyTypeObject **p0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                OBJ_CALL(result = self->object.checker(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "checker", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_checkerPair(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              ::org::hipparchus::optim::ConvergenceChecker a0((jobject) NULL);
              PyTypeObject **p0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "K", ::org::hipparchus::optim::ConvergenceChecker::initializeClass, &a0, &p0, ::org::hipparchus::optim::t_ConvergenceChecker::parameters_))
              {
                OBJ_CALL(result = self->object.checkerPair(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "checkerPair", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_lazyEvaluation(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              jboolean a0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(result = self->object.lazyEvaluation(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "lazyEvaluation", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_maxEvaluations(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              jint a0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.maxEvaluations(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "maxEvaluations", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_maxIterations(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              jint a0;
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.maxIterations(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "maxIterations", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_model(t_LeastSquaresBuilder *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.model(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
                break;
               case 2:
                {
                  ::org::hipparchus::analysis::MultivariateVectorFunction a0((jobject) NULL);
                  ::org::hipparchus::analysis::MultivariateMatrixFunction a1((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, ::org::hipparchus::analysis::MultivariateMatrixFunction::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.model(a0, a1));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "model", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_parameterValidator(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator a0((jobject) NULL);
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::ParameterValidator::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.parameterValidator(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "parameterValidator", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_start(t_LeastSquaresBuilder *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "[D", &a0))
                  {
                    OBJ_CALL(result = self->object.start(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
                {
                  ::org::hipparchus::linear::RealVector a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.start(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "start", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_target(t_LeastSquaresBuilder *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  JArray< jdouble > a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "[D", &a0))
                  {
                    OBJ_CALL(result = self->object.target(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
                {
                  ::org::hipparchus::linear::RealVector a0((jobject) NULL);
                  LeastSquaresBuilder result((jobject) NULL);

                  if (!parseArgs(args, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
                  {
                    OBJ_CALL(result = self->object.target(a0));
                    return t_LeastSquaresBuilder::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "target", args);
              return NULL;
            }

            static PyObject *t_LeastSquaresBuilder_weight(t_LeastSquaresBuilder *self, PyObject *arg)
            {
              ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
              LeastSquaresBuilder result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.weight(a0));
                return t_LeastSquaresBuilder::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "weight", arg);
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
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldAbstractDetector::class$ = NULL;
        jmethodID *FieldAbstractDetector::mids$ = NULL;
        bool FieldAbstractDetector::live$ = false;
        jdouble FieldAbstractDetector::DEFAULT_MAXCHECK = (jdouble) 0;
        jint FieldAbstractDetector::DEFAULT_MAX_ITER = (jint) 0;
        jdouble FieldAbstractDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass FieldAbstractDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldAbstractDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_41a008afe53da855] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_48965f0f9fa2ddf9] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;");
            mids$[mid_getMaxCheckInterval_69f9ee3154bea730] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_eba8e72a22c984ac] = env->getMethodID(cls, "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_isForward_b108b35ef48e27bd] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_withHandler_588d9f7485c49043] = env->getMethodID(cls, "withHandler", "(Lorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_withMaxCheck_921acf6bac04b9dd] = env->getMethodID(cls, "withMaxCheck", "(D)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_withMaxCheck_aae90521b0d20054] = env->getMethodID(cls, "withMaxCheck", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_withMaxIter_a99decc01f775036] = env->getMethodID(cls, "withMaxIter", "(I)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_withThreshold_2eeda93969d276ef] = env->getMethodID(cls, "withThreshold", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_create_933932f56453be16] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAbstractDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAXCHECK = env->getStaticDoubleField(cls, "DEFAULT_MAXCHECK");
            DEFAULT_MAX_ITER = env->getStaticIntField(cls, "DEFAULT_MAX_ITER");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement FieldAbstractDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_41a008afe53da855], a0.this$));
        }

        ::org::orekit::propagation::events::handlers::FieldEventHandler FieldAbstractDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::FieldEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_48965f0f9fa2ddf9]));
        }

        ::org::orekit::propagation::events::FieldAdaptableInterval FieldAbstractDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_69f9ee3154bea730]));
        }

        jint FieldAbstractDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_570ce0828f81a2c1]);
        }

        ::org::hipparchus::CalculusFieldElement FieldAbstractDetector::getThreshold() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getThreshold_eba8e72a22c984ac]));
        }

        void FieldAbstractDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
        }

        jboolean FieldAbstractDetector::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_b108b35ef48e27bd]);
        }

        FieldAbstractDetector FieldAbstractDetector::withHandler(const ::org::orekit::propagation::events::handlers::FieldEventHandler & a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withHandler_588d9f7485c49043], a0.this$));
        }

        FieldAbstractDetector FieldAbstractDetector::withMaxCheck(jdouble a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_921acf6bac04b9dd], a0));
        }

        FieldAbstractDetector FieldAbstractDetector::withMaxCheck(const ::org::orekit::propagation::events::FieldAdaptableInterval & a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_aae90521b0d20054], a0.this$));
        }

        FieldAbstractDetector FieldAbstractDetector::withMaxIter(jint a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxIter_a99decc01f775036], a0));
        }

        FieldAbstractDetector FieldAbstractDetector::withThreshold(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withThreshold_2eeda93969d276ef], a0.this$));
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
        static PyObject *t_FieldAbstractDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_of_(t_FieldAbstractDetector *self, PyObject *args);
        static PyObject *t_FieldAbstractDetector_g(t_FieldAbstractDetector *self, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_getHandler(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_getMaxCheckInterval(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_getMaxIterationCount(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_getThreshold(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_init(t_FieldAbstractDetector *self, PyObject *args);
        static PyObject *t_FieldAbstractDetector_isForward(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_withHandler(t_FieldAbstractDetector *self, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_withMaxCheck(t_FieldAbstractDetector *self, PyObject *args);
        static PyObject *t_FieldAbstractDetector_withMaxIter(t_FieldAbstractDetector *self, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_withThreshold(t_FieldAbstractDetector *self, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_get__forward(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__handler(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__maxCheckInterval(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__maxIterationCount(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__threshold(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__parameters_(t_FieldAbstractDetector *self, void *data);
        static PyGetSetDef t_FieldAbstractDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAbstractDetector, forward),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, handler),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, threshold),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAbstractDetector__methods_[] = {
          DECLARE_METHOD(t_FieldAbstractDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, g, METH_O),
          DECLARE_METHOD(t_FieldAbstractDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, isForward, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, withHandler, METH_O),
          DECLARE_METHOD(t_FieldAbstractDetector, withMaxCheck, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, withMaxIter, METH_O),
          DECLARE_METHOD(t_FieldAbstractDetector, withThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAbstractDetector)[] = {
          { Py_tp_methods, t_FieldAbstractDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAbstractDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAbstractDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAbstractDetector, t_FieldAbstractDetector, FieldAbstractDetector);
        PyObject *t_FieldAbstractDetector::wrap_Object(const FieldAbstractDetector& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldAbstractDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractDetector *self = (t_FieldAbstractDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldAbstractDetector::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldAbstractDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractDetector *self = (t_FieldAbstractDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldAbstractDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAbstractDetector), &PY_TYPE_DEF(FieldAbstractDetector), module, "FieldAbstractDetector", 0);
        }

        void t_FieldAbstractDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "class_", make_descriptor(FieldAbstractDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "wrapfn_", make_descriptor(t_FieldAbstractDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldAbstractDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "DEFAULT_MAXCHECK", make_descriptor(FieldAbstractDetector::DEFAULT_MAXCHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "DEFAULT_MAX_ITER", make_descriptor(FieldAbstractDetector::DEFAULT_MAX_ITER));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "DEFAULT_THRESHOLD", make_descriptor(FieldAbstractDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_FieldAbstractDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAbstractDetector::initializeClass, 1)))
            return NULL;
          return t_FieldAbstractDetector::wrap_Object(FieldAbstractDetector(((t_FieldAbstractDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldAbstractDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAbstractDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAbstractDetector_of_(t_FieldAbstractDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAbstractDetector_g(t_FieldAbstractDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_getHandler(t_FieldAbstractDetector *self)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldAbstractDetector_getMaxCheckInterval(t_FieldAbstractDetector *self)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldAbstractDetector_getMaxIterationCount(t_FieldAbstractDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAbstractDetector_getThreshold(t_FieldAbstractDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getThreshold());
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldAbstractDetector_init(t_FieldAbstractDetector *self, PyObject *args)
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

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_isForward(t_FieldAbstractDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldAbstractDetector_withHandler(t_FieldAbstractDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler a0((jobject) NULL);
          PyTypeObject **p0;
          FieldAbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::events::handlers::FieldEventHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::events::handlers::t_FieldEventHandler::parameters_))
          {
            OBJ_CALL(result = self->object.withHandler(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withHandler", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_withMaxCheck(t_FieldAbstractDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              FieldAbstractDetector result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::events::FieldAdaptableInterval a0((jobject) NULL);
              PyTypeObject **p0;
              FieldAbstractDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldAdaptableInterval::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldAdaptableInterval::parameters_))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxCheck", args);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_withMaxIter(t_FieldAbstractDetector *self, PyObject *arg)
        {
          jint a0;
          FieldAbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.withMaxIter(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxIter", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_withThreshold(t_FieldAbstractDetector *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          FieldAbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.withThreshold(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withThreshold", arg);
          return NULL;
        }
        static PyObject *t_FieldAbstractDetector_get__parameters_(t_FieldAbstractDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAbstractDetector_get__forward(t_FieldAbstractDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldAbstractDetector_get__handler(t_FieldAbstractDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractDetector_get__maxCheckInterval(t_FieldAbstractDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractDetector_get__maxIterationCount(t_FieldAbstractDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAbstractDetector_get__threshold(t_FieldAbstractDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getThreshold());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Log1p.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Log1p::class$ = NULL;
        jmethodID *Log1p::mids$ = NULL;
        bool Log1p::live$ = false;

        jclass Log1p::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Log1p");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Log1p::Log1p() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Log1p::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Log1p::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_73d6acaa8ebd2b7d], a0.this$));
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
      namespace function {
        static PyObject *t_Log1p_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Log1p_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Log1p_init_(t_Log1p *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Log1p_value(t_Log1p *self, PyObject *args);

        static PyMethodDef t_Log1p__methods_[] = {
          DECLARE_METHOD(t_Log1p, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log1p, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Log1p, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Log1p)[] = {
          { Py_tp_methods, t_Log1p__methods_ },
          { Py_tp_init, (void *) t_Log1p_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Log1p)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Log1p, t_Log1p, Log1p);

        void t_Log1p::install(PyObject *module)
        {
          installType(&PY_TYPE(Log1p), &PY_TYPE_DEF(Log1p), module, "Log1p", 0);
        }

        void t_Log1p::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log1p), "class_", make_descriptor(Log1p::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log1p), "wrapfn_", make_descriptor(t_Log1p::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Log1p), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Log1p_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Log1p::initializeClass, 1)))
            return NULL;
          return t_Log1p::wrap_Object(Log1p(((t_Log1p *) arg)->object.this$));
        }
        static PyObject *t_Log1p_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Log1p::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Log1p_init_(t_Log1p *self, PyObject *args, PyObject *kwds)
        {
          Log1p object((jobject) NULL);

          INT_CALL(object = Log1p());
          self->object = object;

          return 0;
        }

        static PyObject *t_Log1p_value(t_Log1p *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
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
#include "org/hipparchus/filtering/kalman/linear/LinearKalmanFilter.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/filtering/kalman/linear/LinearProcess.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/filtering/kalman/Measurement.h"
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
              mids$[mid_init$_122c613624d6f176] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/MatrixDecomposer;Lorg/hipparchus/filtering/kalman/linear/LinearProcess;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
              mids$[mid_estimationStep_ba157b27aa6224ec] = env->getMethodID(cls, "estimationStep", "(Lorg/hipparchus/filtering/kalman/Measurement;)Lorg/hipparchus/filtering/kalman/ProcessEstimate;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LinearKalmanFilter::LinearKalmanFilter(const ::org::hipparchus::linear::MatrixDecomposer & a0, const ::org::hipparchus::filtering::kalman::linear::LinearProcess & a1, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a2) : ::org::hipparchus::filtering::kalman::AbstractKalmanFilter(env->newObject(initializeClass, &mids$, mid_init$_122c613624d6f176, a0.this$, a1.this$, a2.this$)) {}

          ::org::hipparchus::filtering::kalman::ProcessEstimate LinearKalmanFilter::estimationStep(const ::org::hipparchus::filtering::kalman::Measurement & a0) const
          {
            return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_estimationStep_ba157b27aa6224ec], a0.this$));
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
#include "org/hipparchus/fraction/FractionField.h"
#include "org/hipparchus/fraction/Fraction.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/fraction/FractionField.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace fraction {

      ::java::lang::Class *FractionField::class$ = NULL;
      jmethodID *FractionField::mids$ = NULL;
      bool FractionField::live$ = false;

      jclass FractionField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/fraction/FractionField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_c92e44cc353119ce] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/fraction/FractionField;");
          mids$[mid_getOne_883007575ab78b44] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_getRuntimeClass_7c16c5008b34b3db] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_883007575ab78b44] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/fraction/Fraction;");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean FractionField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      FractionField FractionField::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return FractionField(env->callStaticObjectMethod(cls, mids$[mid_getInstance_c92e44cc353119ce]));
      }

      ::org::hipparchus::fraction::Fraction FractionField::getOne() const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getOne_883007575ab78b44]));
      }

      ::java::lang::Class FractionField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_7c16c5008b34b3db]));
      }

      ::org::hipparchus::fraction::Fraction FractionField::getZero() const
      {
        return ::org::hipparchus::fraction::Fraction(env->callObjectMethod(this$, mids$[mid_getZero_883007575ab78b44]));
      }

      jint FractionField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
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
      static PyObject *t_FractionField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FractionField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FractionField_equals(t_FractionField *self, PyObject *args);
      static PyObject *t_FractionField_getInstance(PyTypeObject *type);
      static PyObject *t_FractionField_getOne(t_FractionField *self);
      static PyObject *t_FractionField_getRuntimeClass(t_FractionField *self);
      static PyObject *t_FractionField_getZero(t_FractionField *self);
      static PyObject *t_FractionField_hashCode(t_FractionField *self, PyObject *args);
      static PyObject *t_FractionField_get__instance(t_FractionField *self, void *data);
      static PyObject *t_FractionField_get__one(t_FractionField *self, void *data);
      static PyObject *t_FractionField_get__runtimeClass(t_FractionField *self, void *data);
      static PyObject *t_FractionField_get__zero(t_FractionField *self, void *data);
      static PyGetSetDef t_FractionField__fields_[] = {
        DECLARE_GET_FIELD(t_FractionField, instance),
        DECLARE_GET_FIELD(t_FractionField, one),
        DECLARE_GET_FIELD(t_FractionField, runtimeClass),
        DECLARE_GET_FIELD(t_FractionField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FractionField__methods_[] = {
        DECLARE_METHOD(t_FractionField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FractionField, equals, METH_VARARGS),
        DECLARE_METHOD(t_FractionField, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_FractionField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_FractionField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_FractionField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_FractionField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FractionField)[] = {
        { Py_tp_methods, t_FractionField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FractionField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FractionField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FractionField, t_FractionField, FractionField);

      void t_FractionField::install(PyObject *module)
      {
        installType(&PY_TYPE(FractionField), &PY_TYPE_DEF(FractionField), module, "FractionField", 0);
      }

      void t_FractionField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionField), "class_", make_descriptor(FractionField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionField), "wrapfn_", make_descriptor(t_FractionField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FractionField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FractionField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FractionField::initializeClass, 1)))
          return NULL;
        return t_FractionField::wrap_Object(FractionField(((t_FractionField *) arg)->object.this$));
      }
      static PyObject *t_FractionField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FractionField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FractionField_equals(t_FractionField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FractionField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FractionField_getInstance(PyTypeObject *type)
      {
        FractionField result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::fraction::FractionField::getInstance());
        return t_FractionField::wrap_Object(result);
      }

      static PyObject *t_FractionField_getOne(t_FractionField *self)
      {
        ::org::hipparchus::fraction::Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
      }

      static PyObject *t_FractionField_getRuntimeClass(t_FractionField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::fraction::PY_TYPE(Fraction));
      }

      static PyObject *t_FractionField_getZero(t_FractionField *self)
      {
        ::org::hipparchus::fraction::Fraction result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::fraction::t_Fraction::wrap_Object(result);
      }

      static PyObject *t_FractionField_hashCode(t_FractionField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FractionField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FractionField_get__instance(t_FractionField *self, void *data)
      {
        FractionField value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_FractionField::wrap_Object(value);
      }

      static PyObject *t_FractionField_get__one(t_FractionField *self, void *data)
      {
        ::org::hipparchus::fraction::Fraction value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
      }

      static PyObject *t_FractionField_get__runtimeClass(t_FractionField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_FractionField_get__zero(t_FractionField *self, void *data)
      {
        ::org::hipparchus::fraction::Fraction value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::fraction::t_Fraction::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "java/util/List.h"
#include "org/orekit/gnss/MeasurementType.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/CombinationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *CombinedObservationData::class$ = NULL;
          jmethodID *CombinedObservationData::mids$ = NULL;
          bool CombinedObservationData::live$ = false;

          jclass CombinedObservationData::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/CombinedObservationData");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f8e1e2997176852d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/gnss/CombinationType;Lorg/orekit/gnss/MeasurementType;DDLjava/util/List;)V");
              mids$[mid_getCombinationType_bcbd5b9371c0a4d1] = env->getMethodID(cls, "getCombinationType", "()Lorg/orekit/estimation/measurements/gnss/CombinationType;");
              mids$[mid_getCombinedMHzFrequency_dff5885c2c873297] = env->getMethodID(cls, "getCombinedMHzFrequency", "()D");
              mids$[mid_getMeasurementType_b9f942cb72c4c59a] = env->getMethodID(cls, "getMeasurementType", "()Lorg/orekit/gnss/MeasurementType;");
              mids$[mid_getUsedObservationData_2afa36052df4765d] = env->getMethodID(cls, "getUsedObservationData", "()Ljava/util/List;");
              mids$[mid_getValue_dff5885c2c873297] = env->getMethodID(cls, "getValue", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CombinedObservationData::CombinedObservationData(const ::org::orekit::estimation::measurements::gnss::CombinationType & a0, const ::org::orekit::gnss::MeasurementType & a1, jdouble a2, jdouble a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f8e1e2997176852d, a0.this$, a1.this$, a2, a3, a4.this$)) {}

          ::org::orekit::estimation::measurements::gnss::CombinationType CombinedObservationData::getCombinationType() const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinationType(env->callObjectMethod(this$, mids$[mid_getCombinationType_bcbd5b9371c0a4d1]));
          }

          jdouble CombinedObservationData::getCombinedMHzFrequency() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getCombinedMHzFrequency_dff5885c2c873297]);
          }

          ::org::orekit::gnss::MeasurementType CombinedObservationData::getMeasurementType() const
          {
            return ::org::orekit::gnss::MeasurementType(env->callObjectMethod(this$, mids$[mid_getMeasurementType_b9f942cb72c4c59a]));
          }

          ::java::util::List CombinedObservationData::getUsedObservationData() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getUsedObservationData_2afa36052df4765d]));
          }

          jdouble CombinedObservationData::getValue() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getValue_dff5885c2c873297]);
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
          static PyObject *t_CombinedObservationData_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CombinedObservationData_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CombinedObservationData_init_(t_CombinedObservationData *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CombinedObservationData_getCombinationType(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_getCombinedMHzFrequency(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_getMeasurementType(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_getUsedObservationData(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_getValue(t_CombinedObservationData *self);
          static PyObject *t_CombinedObservationData_get__combinationType(t_CombinedObservationData *self, void *data);
          static PyObject *t_CombinedObservationData_get__combinedMHzFrequency(t_CombinedObservationData *self, void *data);
          static PyObject *t_CombinedObservationData_get__measurementType(t_CombinedObservationData *self, void *data);
          static PyObject *t_CombinedObservationData_get__usedObservationData(t_CombinedObservationData *self, void *data);
          static PyObject *t_CombinedObservationData_get__value(t_CombinedObservationData *self, void *data);
          static PyGetSetDef t_CombinedObservationData__fields_[] = {
            DECLARE_GET_FIELD(t_CombinedObservationData, combinationType),
            DECLARE_GET_FIELD(t_CombinedObservationData, combinedMHzFrequency),
            DECLARE_GET_FIELD(t_CombinedObservationData, measurementType),
            DECLARE_GET_FIELD(t_CombinedObservationData, usedObservationData),
            DECLARE_GET_FIELD(t_CombinedObservationData, value),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CombinedObservationData__methods_[] = {
            DECLARE_METHOD(t_CombinedObservationData, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinedObservationData, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CombinedObservationData, getCombinationType, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationData, getCombinedMHzFrequency, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationData, getMeasurementType, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationData, getUsedObservationData, METH_NOARGS),
            DECLARE_METHOD(t_CombinedObservationData, getValue, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CombinedObservationData)[] = {
            { Py_tp_methods, t_CombinedObservationData__methods_ },
            { Py_tp_init, (void *) t_CombinedObservationData_init_ },
            { Py_tp_getset, t_CombinedObservationData__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CombinedObservationData)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CombinedObservationData, t_CombinedObservationData, CombinedObservationData);

          void t_CombinedObservationData::install(PyObject *module)
          {
            installType(&PY_TYPE(CombinedObservationData), &PY_TYPE_DEF(CombinedObservationData), module, "CombinedObservationData", 0);
          }

          void t_CombinedObservationData::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationData), "class_", make_descriptor(CombinedObservationData::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationData), "wrapfn_", make_descriptor(t_CombinedObservationData::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CombinedObservationData), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CombinedObservationData_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CombinedObservationData::initializeClass, 1)))
              return NULL;
            return t_CombinedObservationData::wrap_Object(CombinedObservationData(((t_CombinedObservationData *) arg)->object.this$));
          }
          static PyObject *t_CombinedObservationData_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CombinedObservationData::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CombinedObservationData_init_(t_CombinedObservationData *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::MeasurementType a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            jdouble a3;
            ::java::util::List a4((jobject) NULL);
            PyTypeObject **p4;
            CombinedObservationData object((jobject) NULL);

            if (!parseArgs(args, "KKDDK", ::org::orekit::estimation::measurements::gnss::CombinationType::initializeClass, ::org::orekit::gnss::MeasurementType::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::gnss::t_CombinationType::parameters_, &a1, &p1, ::org::orekit::gnss::t_MeasurementType::parameters_, &a2, &a3, &a4, &p4, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = CombinedObservationData(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CombinedObservationData_getCombinationType(t_CombinedObservationData *self)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getCombinationType());
            return ::org::orekit::estimation::measurements::gnss::t_CombinationType::wrap_Object(result);
          }

          static PyObject *t_CombinedObservationData_getCombinedMHzFrequency(t_CombinedObservationData *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getCombinedMHzFrequency());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CombinedObservationData_getMeasurementType(t_CombinedObservationData *self)
          {
            ::org::orekit::gnss::MeasurementType result((jobject) NULL);
            OBJ_CALL(result = self->object.getMeasurementType());
            return ::org::orekit::gnss::t_MeasurementType::wrap_Object(result);
          }

          static PyObject *t_CombinedObservationData_getUsedObservationData(t_CombinedObservationData *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getUsedObservationData());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::observation::PY_TYPE(ObservationData));
          }

          static PyObject *t_CombinedObservationData_getValue(t_CombinedObservationData *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CombinedObservationData_get__combinationType(t_CombinedObservationData *self, void *data)
          {
            ::org::orekit::estimation::measurements::gnss::CombinationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getCombinationType());
            return ::org::orekit::estimation::measurements::gnss::t_CombinationType::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationData_get__combinedMHzFrequency(t_CombinedObservationData *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getCombinedMHzFrequency());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CombinedObservationData_get__measurementType(t_CombinedObservationData *self, void *data)
          {
            ::org::orekit::gnss::MeasurementType value((jobject) NULL);
            OBJ_CALL(value = self->object.getMeasurementType());
            return ::org::orekit::gnss::t_MeasurementType::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationData_get__usedObservationData(t_CombinedObservationData *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getUsedObservationData());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_CombinedObservationData_get__value(t_CombinedObservationData *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getValue());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldStepEndEventState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/events/FieldEventState.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/ode/events/FieldODEStepEndHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldStepEndEventState::class$ = NULL;
        jmethodID *FieldStepEndEventState::mids$ = NULL;
        bool FieldStepEndEventState::live$ = false;

        jclass FieldStepEndEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldStepEndEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9ddb55dbce73d9f2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/FieldODEStepEndHandler;)V");
            mids$[mid_doEvent_bdf842cbe214f2d2] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/events/FieldEventOccurrence;");
            mids$[mid_evaluateStep_92ced200eac51ce8] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)Z");
            mids$[mid_getEventTime_eba8e72a22c984ac] = env->getMethodID(cls, "getEventTime", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_f311821b5588cd27] = env->getMethodID(cls, "getHandler", "()Lorg/hipparchus/ode/events/FieldODEStepEndHandler;");
            mids$[mid_init_81b5dd1fb920fdc1] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setStepEnd_072c8635f2164db9] = env->getMethodID(cls, "setStepEnd", "(Lorg/hipparchus/CalculusFieldElement;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldStepEndEventState::FieldStepEndEventState(const ::org::hipparchus::ode::events::FieldODEStepEndHandler & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9ddb55dbce73d9f2, a0.this$)) {}

        ::org::hipparchus::ode::events::FieldEventOccurrence FieldStepEndEventState::doEvent(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::FieldEventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_bdf842cbe214f2d2], a0.this$));
        }

        jboolean FieldStepEndEventState::evaluateStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_92ced200eac51ce8], a0.this$);
        }

        ::org::hipparchus::CalculusFieldElement FieldStepEndEventState::getEventTime() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEventTime_eba8e72a22c984ac]));
        }

        ::org::hipparchus::ode::events::FieldODEStepEndHandler FieldStepEndEventState::getHandler() const
        {
          return ::org::hipparchus::ode::events::FieldODEStepEndHandler(env->callObjectMethod(this$, mids$[mid_getHandler_f311821b5588cd27]));
        }

        void FieldStepEndEventState::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_81b5dd1fb920fdc1], a0.this$, a1.this$);
        }

        void FieldStepEndEventState::setStepEnd(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStepEnd_072c8635f2164db9], a0.this$);
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
      namespace events {
        static PyObject *t_FieldStepEndEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepEndEventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldStepEndEventState_of_(t_FieldStepEndEventState *self, PyObject *args);
        static int t_FieldStepEndEventState_init_(t_FieldStepEndEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldStepEndEventState_doEvent(t_FieldStepEndEventState *self, PyObject *arg);
        static PyObject *t_FieldStepEndEventState_evaluateStep(t_FieldStepEndEventState *self, PyObject *arg);
        static PyObject *t_FieldStepEndEventState_getEventTime(t_FieldStepEndEventState *self);
        static PyObject *t_FieldStepEndEventState_getHandler(t_FieldStepEndEventState *self);
        static PyObject *t_FieldStepEndEventState_init(t_FieldStepEndEventState *self, PyObject *args);
        static PyObject *t_FieldStepEndEventState_setStepEnd(t_FieldStepEndEventState *self, PyObject *arg);
        static PyObject *t_FieldStepEndEventState_get__eventTime(t_FieldStepEndEventState *self, void *data);
        static PyObject *t_FieldStepEndEventState_get__handler(t_FieldStepEndEventState *self, void *data);
        static int t_FieldStepEndEventState_set__stepEnd(t_FieldStepEndEventState *self, PyObject *arg, void *data);
        static PyObject *t_FieldStepEndEventState_get__parameters_(t_FieldStepEndEventState *self, void *data);
        static PyGetSetDef t_FieldStepEndEventState__fields_[] = {
          DECLARE_GET_FIELD(t_FieldStepEndEventState, eventTime),
          DECLARE_GET_FIELD(t_FieldStepEndEventState, handler),
          DECLARE_SET_FIELD(t_FieldStepEndEventState, stepEnd),
          DECLARE_GET_FIELD(t_FieldStepEndEventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldStepEndEventState__methods_[] = {
          DECLARE_METHOD(t_FieldStepEndEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepEndEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldStepEndEventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepEndEventState, doEvent, METH_O),
          DECLARE_METHOD(t_FieldStepEndEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_FieldStepEndEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_FieldStepEndEventState, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldStepEndEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldStepEndEventState, setStepEnd, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldStepEndEventState)[] = {
          { Py_tp_methods, t_FieldStepEndEventState__methods_ },
          { Py_tp_init, (void *) t_FieldStepEndEventState_init_ },
          { Py_tp_getset, t_FieldStepEndEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldStepEndEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldStepEndEventState, t_FieldStepEndEventState, FieldStepEndEventState);
        PyObject *t_FieldStepEndEventState::wrap_Object(const FieldStepEndEventState& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepEndEventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepEndEventState *self = (t_FieldStepEndEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldStepEndEventState::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldStepEndEventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldStepEndEventState *self = (t_FieldStepEndEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldStepEndEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldStepEndEventState), &PY_TYPE_DEF(FieldStepEndEventState), module, "FieldStepEndEventState", 0);
        }

        void t_FieldStepEndEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepEndEventState), "class_", make_descriptor(FieldStepEndEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepEndEventState), "wrapfn_", make_descriptor(t_FieldStepEndEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStepEndEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldStepEndEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldStepEndEventState::initializeClass, 1)))
            return NULL;
          return t_FieldStepEndEventState::wrap_Object(FieldStepEndEventState(((t_FieldStepEndEventState *) arg)->object.this$));
        }
        static PyObject *t_FieldStepEndEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldStepEndEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldStepEndEventState_of_(t_FieldStepEndEventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldStepEndEventState_init_(t_FieldStepEndEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::FieldODEStepEndHandler a0((jobject) NULL);
          PyTypeObject **p0;
          FieldStepEndEventState object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::ode::events::FieldODEStepEndHandler::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::parameters_))
          {
            INT_CALL(object = FieldStepEndEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldStepEndEventState_doEvent(t_FieldStepEndEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::events::FieldEventOccurrence result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
          {
            OBJ_CALL(result = self->object.doEvent(a0));
            return ::org::hipparchus::ode::events::t_FieldEventOccurrence::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "doEvent", arg);
          return NULL;
        }

        static PyObject *t_FieldStepEndEventState_evaluateStep(t_FieldStepEndEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.evaluateStep(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "evaluateStep", arg);
          return NULL;
        }

        static PyObject *t_FieldStepEndEventState_getEventTime(t_FieldStepEndEventState *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventTime());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldStepEndEventState_getHandler(t_FieldStepEndEventState *self)
        {
          ::org::hipparchus::ode::events::FieldODEStepEndHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldStepEndEventState_init(t_FieldStepEndEventState *self, PyObject *args)
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

        static PyObject *t_FieldStepEndEventState_setStepEnd(t_FieldStepEndEventState *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setStepEnd(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStepEnd", arg);
          return NULL;
        }
        static PyObject *t_FieldStepEndEventState_get__parameters_(t_FieldStepEndEventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldStepEndEventState_get__eventTime(t_FieldStepEndEventState *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventTime());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldStepEndEventState_get__handler(t_FieldStepEndEventState *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEStepEndHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::hipparchus::ode::events::t_FieldODEStepEndHandler::wrap_Object(value);
        }

        static int t_FieldStepEndEventState_set__stepEnd(t_FieldStepEndEventState *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setStepEnd(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stepEnd", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/units/UnitsCache.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {
      namespace units {

        ::java::lang::Class *UnitsCache::class$ = NULL;
        jmethodID *UnitsCache::mids$ = NULL;
        bool UnitsCache::live$ = false;

        jclass UnitsCache::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/utils/units/UnitsCache");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getUnits_0a5740869b287d80] = env->getMethodID(cls, "getUnits", "(Ljava/lang/String;)Lorg/orekit/utils/units/Unit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnitsCache::UnitsCache() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::org::orekit::utils::units::Unit UnitsCache::getUnits(const ::java::lang::String & a0) const
        {
          return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_getUnits_0a5740869b287d80], a0.this$));
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
    namespace utils {
      namespace units {
        static PyObject *t_UnitsCache_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnitsCache_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnitsCache_init_(t_UnitsCache *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnitsCache_getUnits(t_UnitsCache *self, PyObject *arg);

        static PyMethodDef t_UnitsCache__methods_[] = {
          DECLARE_METHOD(t_UnitsCache, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnitsCache, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnitsCache, getUnits, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnitsCache)[] = {
          { Py_tp_methods, t_UnitsCache__methods_ },
          { Py_tp_init, (void *) t_UnitsCache_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnitsCache)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnitsCache, t_UnitsCache, UnitsCache);

        void t_UnitsCache::install(PyObject *module)
        {
          installType(&PY_TYPE(UnitsCache), &PY_TYPE_DEF(UnitsCache), module, "UnitsCache", 0);
        }

        void t_UnitsCache::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsCache), "class_", make_descriptor(UnitsCache::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsCache), "wrapfn_", make_descriptor(t_UnitsCache::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnitsCache), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnitsCache_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnitsCache::initializeClass, 1)))
            return NULL;
          return t_UnitsCache::wrap_Object(UnitsCache(((t_UnitsCache *) arg)->object.this$));
        }
        static PyObject *t_UnitsCache_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnitsCache::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnitsCache_init_(t_UnitsCache *self, PyObject *args, PyObject *kwds)
        {
          UnitsCache object((jobject) NULL);

          INT_CALL(object = UnitsCache());
          self->object = object;

          return 0;
        }

        static PyObject *t_UnitsCache_getUnits(t_UnitsCache *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::utils::units::Unit result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = self->object.getUnits(a0));
            return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getUnits", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace opm {

              ::java::lang::Class *Maneuver::class$ = NULL;
              jmethodID *Maneuver::mids$ = NULL;
              bool Maneuver::live$ = false;

              jclass Maneuver::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/opm/Maneuver");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_completed_b108b35ef48e27bd] = env->getMethodID(cls, "completed", "()Z");
                  mids$[mid_getDV_d52645e0d4c07563] = env->getMethodID(cls, "getDV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDeltaMass_dff5885c2c873297] = env->getMethodID(cls, "getDeltaMass", "()D");
                  mids$[mid_getDuration_dff5885c2c873297] = env->getMethodID(cls, "getDuration", "()D");
                  mids$[mid_getEpochIgnition_85703d13e302437e] = env->getMethodID(cls, "getEpochIgnition", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getReferenceFrame_5d5dd95b04037824] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_setDV_bb79ca80d85d0a66] = env->getMethodID(cls, "setDV", "(ID)V");
                  mids$[mid_setDeltaMass_17db3a65980d3441] = env->getMethodID(cls, "setDeltaMass", "(D)V");
                  mids$[mid_setDuration_17db3a65980d3441] = env->getMethodID(cls, "setDuration", "(D)V");
                  mids$[mid_setEpochIgnition_600a2a61652bc473] = env->getMethodID(cls, "setEpochIgnition", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setReferenceFrame_849bc9e3b38b9bcb] = env->getMethodID(cls, "setReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Maneuver::Maneuver() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              jboolean Maneuver::completed() const
              {
                return env->callBooleanMethod(this$, mids$[mid_completed_b108b35ef48e27bd]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D Maneuver::getDV() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDV_d52645e0d4c07563]));
              }

              jdouble Maneuver::getDeltaMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeltaMass_dff5885c2c873297]);
              }

              jdouble Maneuver::getDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDuration_dff5885c2c873297]);
              }

              ::org::orekit::time::AbsoluteDate Maneuver::getEpochIgnition() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochIgnition_85703d13e302437e]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade Maneuver::getReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_5d5dd95b04037824]));
              }

              void Maneuver::setDV(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setDV_bb79ca80d85d0a66], a0, a1);
              }

              void Maneuver::setDeltaMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeltaMass_17db3a65980d3441], a0);
              }

              void Maneuver::setDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDuration_17db3a65980d3441], a0);
              }

              void Maneuver::setEpochIgnition(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochIgnition_600a2a61652bc473], a0.this$);
              }

              void Maneuver::setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setReferenceFrame_849bc9e3b38b9bcb], a0.this$);
              }

              void Maneuver::validate(jdouble a0) const
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
          namespace odm {
            namespace opm {
              static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Maneuver_completed(t_Maneuver *self);
              static PyObject *t_Maneuver_getDV(t_Maneuver *self);
              static PyObject *t_Maneuver_getDeltaMass(t_Maneuver *self);
              static PyObject *t_Maneuver_getDuration(t_Maneuver *self);
              static PyObject *t_Maneuver_getEpochIgnition(t_Maneuver *self);
              static PyObject *t_Maneuver_getReferenceFrame(t_Maneuver *self);
              static PyObject *t_Maneuver_setDV(t_Maneuver *self, PyObject *args);
              static PyObject *t_Maneuver_setDeltaMass(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setDuration(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setEpochIgnition(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setReferenceFrame(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_validate(t_Maneuver *self, PyObject *args);
              static PyObject *t_Maneuver_get__dV(t_Maneuver *self, void *data);
              static PyObject *t_Maneuver_get__deltaMass(t_Maneuver *self, void *data);
              static int t_Maneuver_set__deltaMass(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__duration(t_Maneuver *self, void *data);
              static int t_Maneuver_set__duration(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__epochIgnition(t_Maneuver *self, void *data);
              static int t_Maneuver_set__epochIgnition(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__referenceFrame(t_Maneuver *self, void *data);
              static int t_Maneuver_set__referenceFrame(t_Maneuver *self, PyObject *arg, void *data);
              static PyGetSetDef t_Maneuver__fields_[] = {
                DECLARE_GET_FIELD(t_Maneuver, dV),
                DECLARE_GETSET_FIELD(t_Maneuver, deltaMass),
                DECLARE_GETSET_FIELD(t_Maneuver, duration),
                DECLARE_GETSET_FIELD(t_Maneuver, epochIgnition),
                DECLARE_GETSET_FIELD(t_Maneuver, referenceFrame),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Maneuver__methods_[] = {
                DECLARE_METHOD(t_Maneuver, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Maneuver, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Maneuver, completed, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getDV, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getDeltaMass, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getDuration, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getEpochIgnition, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, setDV, METH_VARARGS),
                DECLARE_METHOD(t_Maneuver, setDeltaMass, METH_O),
                DECLARE_METHOD(t_Maneuver, setDuration, METH_O),
                DECLARE_METHOD(t_Maneuver, setEpochIgnition, METH_O),
                DECLARE_METHOD(t_Maneuver, setReferenceFrame, METH_O),
                DECLARE_METHOD(t_Maneuver, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Maneuver)[] = {
                { Py_tp_methods, t_Maneuver__methods_ },
                { Py_tp_init, (void *) t_Maneuver_init_ },
                { Py_tp_getset, t_Maneuver__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Maneuver)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(Maneuver, t_Maneuver, Maneuver);

              void t_Maneuver::install(PyObject *module)
              {
                installType(&PY_TYPE(Maneuver), &PY_TYPE_DEF(Maneuver), module, "Maneuver", 0);
              }

              void t_Maneuver::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "class_", make_descriptor(Maneuver::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "wrapfn_", make_descriptor(t_Maneuver::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Maneuver), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Maneuver::initializeClass, 1)))
                  return NULL;
                return t_Maneuver::wrap_Object(Maneuver(((t_Maneuver *) arg)->object.this$));
              }
              static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Maneuver::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds)
              {
                Maneuver object((jobject) NULL);

                INT_CALL(object = Maneuver());
                self->object = object;

                return 0;
              }

              static PyObject *t_Maneuver_completed(t_Maneuver *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.completed());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_Maneuver_getDV(t_Maneuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getDV());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }

              static PyObject *t_Maneuver_getDeltaMass(t_Maneuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Maneuver_getDuration(t_Maneuver *self)
              {
                jdouble result;
                OBJ_CALL(result = self->object.getDuration());
                return PyFloat_FromDouble((double) result);
              }

              static PyObject *t_Maneuver_getEpochIgnition(t_Maneuver *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpochIgnition());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Maneuver_getReferenceFrame(t_Maneuver *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_Maneuver_setDV(t_Maneuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setDV(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDV", args);
                return NULL;
              }

              static PyObject *t_Maneuver_setDeltaMass(t_Maneuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDeltaMass(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDeltaMass", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setDuration(t_Maneuver *self, PyObject *arg)
              {
                jdouble a0;

                if (!parseArg(arg, "D", &a0))
                {
                  OBJ_CALL(self->object.setDuration(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setDuration", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setEpochIgnition(t_Maneuver *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setEpochIgnition(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochIgnition", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setReferenceFrame(t_Maneuver *self, PyObject *arg)
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

              static PyObject *t_Maneuver_validate(t_Maneuver *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(Maneuver), (PyObject *) self, "validate", args, 2);
              }

              static PyObject *t_Maneuver_get__dV(t_Maneuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getDV());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
              }

              static PyObject *t_Maneuver_get__deltaMass(t_Maneuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDeltaMass());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Maneuver_set__deltaMass(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDeltaMass(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "deltaMass", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__duration(t_Maneuver *self, void *data)
              {
                jdouble value;
                OBJ_CALL(value = self->object.getDuration());
                return PyFloat_FromDouble((double) value);
              }
              static int t_Maneuver_set__duration(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  jdouble value;
                  if (!parseArg(arg, "D", &value))
                  {
                    INT_CALL(self->object.setDuration(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "duration", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__epochIgnition(t_Maneuver *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpochIgnition());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_Maneuver_set__epochIgnition(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEpochIgnition(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochIgnition", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__referenceFrame(t_Maneuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_Maneuver_set__referenceFrame(t_Maneuver *self, PyObject *arg, void *data)
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
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemSegment.h"
#include "java/util/List.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemData.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/oem/OemMetadata.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/ccsds/ndm/odm/CartesianCovariance.h"
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
                  mids$[mid_init$_b2fa6049a1a0a856] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/oem/OemMetadata;Lorg/orekit/files/ccsds/ndm/odm/oem/OemData;D)V");
                  mids$[mid_getAvailableDerivatives_16e9a7b5414faf2d] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
                  mids$[mid_getCoordinates_2afa36052df4765d] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
                  mids$[mid_getCovarianceMatrices_2afa36052df4765d] = env->getMethodID(cls, "getCovarianceMatrices", "()Ljava/util/List;");
                  mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getInertialFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getInterpolationSamples_570ce0828f81a2c1] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
                  mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OemSegment::OemSegment(const ::org::orekit::files::ccsds::ndm::odm::oem::OemMetadata & a0, const ::org::orekit::files::ccsds::ndm::odm::oem::OemData & a1, jdouble a2) : ::org::orekit::files::ccsds::section::Segment(env->newObject(initializeClass, &mids$, mid_init$_b2fa6049a1a0a856, a0.this$, a1.this$, a2)) {}

              ::org::orekit::utils::CartesianDerivativesFilter OemSegment::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_16e9a7b5414faf2d]));
              }

              ::java::util::List OemSegment::getCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_2afa36052df4765d]));
              }

              ::java::util::List OemSegment::getCovarianceMatrices() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCovarianceMatrices_2afa36052df4765d]));
              }

              ::org::orekit::frames::Frame OemSegment::getFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
              }

              ::org::orekit::frames::Frame OemSegment::getInertialFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_b86f9f61d97a7244]));
              }

              jint OemSegment::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_570ce0828f81a2c1]);
              }

              jdouble OemSegment::getMu() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
              }

              ::org::orekit::time::AbsoluteDate OemSegment::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate OemSegment::getStop() const
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
#include "org/orekit/models/earth/atmosphere/DTM2000.h"
#include "org/orekit/models/earth/atmosphere/DTM2000InputParameters.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/bodies/BodyShape.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
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

          ::java::lang::Class *DTM2000::class$ = NULL;
          jmethodID *DTM2000::mids$ = NULL;
          bool DTM2000::live$ = false;

          jclass DTM2000::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/DTM2000");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_be95f33da0d2904c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/DTM2000InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;)V");
              mids$[mid_init$_7901fb8814519ab6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/DTM2000InputParameters;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/bodies/BodyShape;Lorg/orekit/time/TimeScale;)V");
              mids$[mid_getDensity_f7d7785230311c38] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/frames/Frame;)D");
              mids$[mid_getDensity_b79d75c1a8af7374] = env->getMethodID(cls, "getDensity", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/orekit/frames/Frame;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDensity_8e42f47834f10f03] = env->getMethodID(cls, "getDensity", "(IDDDDDDDD)D");
              mids$[mid_getDensity_f74e74a24d011c99] = env->getMethodID(cls, "getDensity", "(ILorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;DDDD)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DTM2000::DTM2000(const ::org::orekit::models::earth::atmosphere::DTM2000InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_be95f33da0d2904c, a0.this$, a1.this$, a2.this$)) {}

          DTM2000::DTM2000(const ::org::orekit::models::earth::atmosphere::DTM2000InputParameters & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::bodies::BodyShape & a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7901fb8814519ab6, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          jdouble DTM2000::getDensity(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_f7d7785230311c38], a0.this$, a1.this$, a2.this$);
          }

          ::org::hipparchus::CalculusFieldElement DTM2000::getDensity(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, const ::org::orekit::frames::Frame & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_b79d75c1a8af7374], a0.this$, a1.this$, a2.this$));
          }

          jdouble DTM2000::getDensity(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDensity_8e42f47834f10f03], a0, a1, a2, a3, a4, a5, a6, a7, a8);
          }

          ::org::hipparchus::CalculusFieldElement DTM2000::getDensity(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDensity_f74e74a24d011c99], a0, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6, a7, a8));
          }

          ::org::orekit::frames::Frame DTM2000::getFrame() const
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
          static PyObject *t_DTM2000_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DTM2000_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DTM2000_init_(t_DTM2000 *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DTM2000_getDensity(t_DTM2000 *self, PyObject *args);
          static PyObject *t_DTM2000_getFrame(t_DTM2000 *self);
          static PyObject *t_DTM2000_get__frame(t_DTM2000 *self, void *data);
          static PyGetSetDef t_DTM2000__fields_[] = {
            DECLARE_GET_FIELD(t_DTM2000, frame),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DTM2000__methods_[] = {
            DECLARE_METHOD(t_DTM2000, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DTM2000, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DTM2000, getDensity, METH_VARARGS),
            DECLARE_METHOD(t_DTM2000, getFrame, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DTM2000)[] = {
            { Py_tp_methods, t_DTM2000__methods_ },
            { Py_tp_init, (void *) t_DTM2000_init_ },
            { Py_tp_getset, t_DTM2000__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DTM2000)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DTM2000, t_DTM2000, DTM2000);

          void t_DTM2000::install(PyObject *module)
          {
            installType(&PY_TYPE(DTM2000), &PY_TYPE_DEF(DTM2000), module, "DTM2000", 0);
          }

          void t_DTM2000::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000), "class_", make_descriptor(DTM2000::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000), "wrapfn_", make_descriptor(t_DTM2000::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DTM2000), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DTM2000_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DTM2000::initializeClass, 1)))
              return NULL;
            return t_DTM2000::wrap_Object(DTM2000(((t_DTM2000 *) arg)->object.this$));
          }
          static PyObject *t_DTM2000_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DTM2000::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DTM2000_init_(t_DTM2000 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::models::earth::atmosphere::DTM2000InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                DTM2000 object((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::orekit::models::earth::atmosphere::DTM2000InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = DTM2000(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::orekit::models::earth::atmosphere::DTM2000InputParameters a0((jobject) NULL);
                ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                ::org::orekit::bodies::BodyShape a2((jobject) NULL);
                ::org::orekit::time::TimeScale a3((jobject) NULL);
                DTM2000 object((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::orekit::models::earth::atmosphere::DTM2000InputParameters::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::bodies::BodyShape::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = DTM2000(a0, a1, a2, a3));
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

          static PyObject *t_DTM2000_getDensity(t_DTM2000 *self, PyObject *args)
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
              break;
             case 9:
              {
                jint a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                jdouble a5;
                jdouble a6;
                jdouble a7;
                jdouble a8;
                jdouble result;

                if (!parseArgs(args, "IDDDDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                jint a0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                jdouble a5;
                jdouble a6;
                jdouble a7;
                jdouble a8;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "IKKKKDDDD", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8))
                {
                  OBJ_CALL(result = self->object.getDensity(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getDensity", args);
            return NULL;
          }

          static PyObject *t_DTM2000_getFrame(t_DTM2000 *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_DTM2000_get__frame(t_DTM2000 *self, void *data)
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
