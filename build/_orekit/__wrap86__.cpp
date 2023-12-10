#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/AdjustmentContext.h"
#include "java/util/Collection.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "org/orekit/rugged/adjustment/OptimizerId.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "java/lang/String.h"
#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *AdjustmentContext::class$ = NULL;
        jmethodID *AdjustmentContext::mids$ = NULL;
        bool AdjustmentContext::live$ = false;

        jclass AdjustmentContext::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/AdjustmentContext");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_fc035e109332928e] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;Lorg/orekit/rugged/adjustment/measurements/Observables;)V");
            mids$[mid_estimateFreeParameters_052b675d648919f4] = env->getMethodID(cls, "estimateFreeParameters", "(Ljava/util/Collection;ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
            mids$[mid_setOptimizer_a666ad31260df77e] = env->getMethodID(cls, "setOptimizer", "(Lorg/orekit/rugged/adjustment/OptimizerId;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdjustmentContext::AdjustmentContext(const ::java::util::Collection & a0, const ::org::orekit::rugged::adjustment::measurements::Observables & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fc035e109332928e, a0.this$, a1.this$)) {}

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum AdjustmentContext::estimateFreeParameters(const ::java::util::Collection & a0, jint a1, jdouble a2) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_estimateFreeParameters_052b675d648919f4], a0.this$, a1, a2));
        }

        void AdjustmentContext::setOptimizer(const ::org::orekit::rugged::adjustment::OptimizerId & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOptimizer_a666ad31260df77e], a0.this$);
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
      namespace adjustment {
        static PyObject *t_AdjustmentContext_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdjustmentContext_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdjustmentContext_init_(t_AdjustmentContext *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdjustmentContext_estimateFreeParameters(t_AdjustmentContext *self, PyObject *args);
        static PyObject *t_AdjustmentContext_setOptimizer(t_AdjustmentContext *self, PyObject *arg);
        static int t_AdjustmentContext_set__optimizer(t_AdjustmentContext *self, PyObject *arg, void *data);
        static PyGetSetDef t_AdjustmentContext__fields_[] = {
          DECLARE_SET_FIELD(t_AdjustmentContext, optimizer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdjustmentContext__methods_[] = {
          DECLARE_METHOD(t_AdjustmentContext, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdjustmentContext, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdjustmentContext, estimateFreeParameters, METH_VARARGS),
          DECLARE_METHOD(t_AdjustmentContext, setOptimizer, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdjustmentContext)[] = {
          { Py_tp_methods, t_AdjustmentContext__methods_ },
          { Py_tp_init, (void *) t_AdjustmentContext_init_ },
          { Py_tp_getset, t_AdjustmentContext__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdjustmentContext)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdjustmentContext, t_AdjustmentContext, AdjustmentContext);

        void t_AdjustmentContext::install(PyObject *module)
        {
          installType(&PY_TYPE(AdjustmentContext), &PY_TYPE_DEF(AdjustmentContext), module, "AdjustmentContext", 0);
        }

        void t_AdjustmentContext::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdjustmentContext), "class_", make_descriptor(AdjustmentContext::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdjustmentContext), "wrapfn_", make_descriptor(t_AdjustmentContext::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdjustmentContext), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdjustmentContext_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdjustmentContext::initializeClass, 1)))
            return NULL;
          return t_AdjustmentContext::wrap_Object(AdjustmentContext(((t_AdjustmentContext *) arg)->object.this$));
        }
        static PyObject *t_AdjustmentContext_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdjustmentContext::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdjustmentContext_init_(t_AdjustmentContext *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::rugged::adjustment::measurements::Observables a1((jobject) NULL);
          AdjustmentContext object((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::Collection::initializeClass, ::org::orekit::rugged::adjustment::measurements::Observables::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
          {
            INT_CALL(object = AdjustmentContext(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdjustmentContext_estimateFreeParameters(t_AdjustmentContext *self, PyObject *args)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jdouble a2;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

          if (!parseArgs(args, "KID", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimateFreeParameters(a0, a1, a2));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimateFreeParameters", args);
          return NULL;
        }

        static PyObject *t_AdjustmentContext_setOptimizer(t_AdjustmentContext *self, PyObject *arg)
        {
          ::org::orekit::rugged::adjustment::OptimizerId a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::rugged::adjustment::OptimizerId::initializeClass, &a0, &p0, ::org::orekit::rugged::adjustment::t_OptimizerId::parameters_))
          {
            OBJ_CALL(self->object.setOptimizer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOptimizer", arg);
          return NULL;
        }

        static int t_AdjustmentContext_set__optimizer(t_AdjustmentContext *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::rugged::adjustment::OptimizerId value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::rugged::adjustment::OptimizerId::initializeClass, &value))
            {
              INT_CALL(self->object.setOptimizer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "optimizer", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/CR3BPRotatingFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *CR3BPRotatingFrame::class$ = NULL;
      jmethodID *CR3BPRotatingFrame::mids$ = NULL;
      bool CR3BPRotatingFrame::live$ = false;

      jclass CR3BPRotatingFrame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/CR3BPRotatingFrame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_5be1eb0283facc23] = env->getMethodID(cls, "<init>", "(DLorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CR3BPRotatingFrame::CR3BPRotatingFrame(jdouble a0, const ::org::orekit::bodies::CelestialBody & a1, const ::org::orekit::bodies::CelestialBody & a2) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_5be1eb0283facc23, a0, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_CR3BPRotatingFrame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPRotatingFrame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CR3BPRotatingFrame_init_(t_CR3BPRotatingFrame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_CR3BPRotatingFrame__methods_[] = {
        DECLARE_METHOD(t_CR3BPRotatingFrame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPRotatingFrame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CR3BPRotatingFrame)[] = {
        { Py_tp_methods, t_CR3BPRotatingFrame__methods_ },
        { Py_tp_init, (void *) t_CR3BPRotatingFrame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CR3BPRotatingFrame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(CR3BPRotatingFrame, t_CR3BPRotatingFrame, CR3BPRotatingFrame);

      void t_CR3BPRotatingFrame::install(PyObject *module)
      {
        installType(&PY_TYPE(CR3BPRotatingFrame), &PY_TYPE_DEF(CR3BPRotatingFrame), module, "CR3BPRotatingFrame", 0);
      }

      void t_CR3BPRotatingFrame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPRotatingFrame), "class_", make_descriptor(CR3BPRotatingFrame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPRotatingFrame), "wrapfn_", make_descriptor(t_CR3BPRotatingFrame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPRotatingFrame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CR3BPRotatingFrame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CR3BPRotatingFrame::initializeClass, 1)))
          return NULL;
        return t_CR3BPRotatingFrame::wrap_Object(CR3BPRotatingFrame(((t_CR3BPRotatingFrame *) arg)->object.this$));
      }
      static PyObject *t_CR3BPRotatingFrame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CR3BPRotatingFrame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CR3BPRotatingFrame_init_(t_CR3BPRotatingFrame *self, PyObject *args, PyObject *kwds)
      {
        jdouble a0;
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a2((jobject) NULL);
        CR3BPRotatingFrame object((jobject) NULL);

        if (!parseArgs(args, "Dkk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = CR3BPRotatingFrame(a0, a1, a2));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/EvaluationRmsChecker.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *EvaluationRmsChecker::class$ = NULL;
            jmethodID *EvaluationRmsChecker::mids$ = NULL;
            bool EvaluationRmsChecker::live$ = false;

            jclass EvaluationRmsChecker::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/EvaluationRmsChecker");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
                mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
                mids$[mid_converged_62033baec104fa85] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation;)Z");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            EvaluationRmsChecker::EvaluationRmsChecker(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

            EvaluationRmsChecker::EvaluationRmsChecker(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

            jboolean EvaluationRmsChecker::converged(jint a0, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a1, const ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_converged_62033baec104fa85], a0, a1.this$, a2.this$);
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
            static PyObject *t_EvaluationRmsChecker_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_EvaluationRmsChecker_instance_(PyTypeObject *type, PyObject *arg);
            static int t_EvaluationRmsChecker_init_(t_EvaluationRmsChecker *self, PyObject *args, PyObject *kwds);
            static PyObject *t_EvaluationRmsChecker_converged(t_EvaluationRmsChecker *self, PyObject *args);

            static PyMethodDef t_EvaluationRmsChecker__methods_[] = {
              DECLARE_METHOD(t_EvaluationRmsChecker, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_EvaluationRmsChecker, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_EvaluationRmsChecker, converged, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(EvaluationRmsChecker)[] = {
              { Py_tp_methods, t_EvaluationRmsChecker__methods_ },
              { Py_tp_init, (void *) t_EvaluationRmsChecker_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(EvaluationRmsChecker)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(EvaluationRmsChecker, t_EvaluationRmsChecker, EvaluationRmsChecker);

            void t_EvaluationRmsChecker::install(PyObject *module)
            {
              installType(&PY_TYPE(EvaluationRmsChecker), &PY_TYPE_DEF(EvaluationRmsChecker), module, "EvaluationRmsChecker", 0);
            }

            void t_EvaluationRmsChecker::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(EvaluationRmsChecker), "class_", make_descriptor(EvaluationRmsChecker::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(EvaluationRmsChecker), "wrapfn_", make_descriptor(t_EvaluationRmsChecker::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(EvaluationRmsChecker), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_EvaluationRmsChecker_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, EvaluationRmsChecker::initializeClass, 1)))
                return NULL;
              return t_EvaluationRmsChecker::wrap_Object(EvaluationRmsChecker(((t_EvaluationRmsChecker *) arg)->object.this$));
            }
            static PyObject *t_EvaluationRmsChecker_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, EvaluationRmsChecker::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_EvaluationRmsChecker_init_(t_EvaluationRmsChecker *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  jdouble a0;
                  EvaluationRmsChecker object((jobject) NULL);

                  if (!parseArgs(args, "D", &a0))
                  {
                    INT_CALL(object = EvaluationRmsChecker(a0));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  jdouble a0;
                  jdouble a1;
                  EvaluationRmsChecker object((jobject) NULL);

                  if (!parseArgs(args, "DD", &a0, &a1))
                  {
                    INT_CALL(object = EvaluationRmsChecker(a0, a1));
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

            static PyObject *t_EvaluationRmsChecker_converged(t_EvaluationRmsChecker *self, PyObject *args)
            {
              jint a0;
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a1((jobject) NULL);
              ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "Ikk", ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresProblem$Evaluation::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.converged(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "converged", args);
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
#include "org/hipparchus/analysis/integration/IterativeLegendreFieldGaussIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *IterativeLegendreFieldGaussIntegrator::class$ = NULL;
        jmethodID *IterativeLegendreFieldGaussIntegrator::mids$ = NULL;
        bool IterativeLegendreFieldGaussIntegrator::live$ = false;

        jclass IterativeLegendreFieldGaussIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/IterativeLegendreFieldGaussIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_85647617c51ec669] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDD)V");
            mids$[mid_init$_3537cc0f3be9839f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;III)V");
            mids$[mid_init$_f8ce8809366d766b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;IDDII)V");
            mids$[mid_doIntegrate_e6d4d3215c30992a] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IterativeLegendreFieldGaussIntegrator::IterativeLegendreFieldGaussIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_85647617c51ec669, a0.this$, a1, a2, a3)) {}

        IterativeLegendreFieldGaussIntegrator::IterativeLegendreFieldGaussIntegrator(const ::org::hipparchus::Field & a0, jint a1, jint a2, jint a3) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_3537cc0f3be9839f, a0.this$, a1, a2, a3)) {}

        IterativeLegendreFieldGaussIntegrator::IterativeLegendreFieldGaussIntegrator(const ::org::hipparchus::Field & a0, jint a1, jdouble a2, jdouble a3, jint a4, jint a5) : ::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator(env->newObject(initializeClass, &mids$, mid_init$_f8ce8809366d766b, a0.this$, a1, a2, a3, a4, a5)) {}
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
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_of_(t_IterativeLegendreFieldGaussIntegrator *self, PyObject *args);
        static int t_IterativeLegendreFieldGaussIntegrator_init_(t_IterativeLegendreFieldGaussIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_get__parameters_(t_IterativeLegendreFieldGaussIntegrator *self, void *data);
        static PyGetSetDef t_IterativeLegendreFieldGaussIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_IterativeLegendreFieldGaussIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IterativeLegendreFieldGaussIntegrator__methods_[] = {
          DECLARE_METHOD(t_IterativeLegendreFieldGaussIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IterativeLegendreFieldGaussIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IterativeLegendreFieldGaussIntegrator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IterativeLegendreFieldGaussIntegrator)[] = {
          { Py_tp_methods, t_IterativeLegendreFieldGaussIntegrator__methods_ },
          { Py_tp_init, (void *) t_IterativeLegendreFieldGaussIntegrator_init_ },
          { Py_tp_getset, t_IterativeLegendreFieldGaussIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IterativeLegendreFieldGaussIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::integration::BaseAbstractFieldUnivariateIntegrator),
          NULL
        };

        DEFINE_TYPE(IterativeLegendreFieldGaussIntegrator, t_IterativeLegendreFieldGaussIntegrator, IterativeLegendreFieldGaussIntegrator);
        PyObject *t_IterativeLegendreFieldGaussIntegrator::wrap_Object(const IterativeLegendreFieldGaussIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_IterativeLegendreFieldGaussIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_IterativeLegendreFieldGaussIntegrator *self = (t_IterativeLegendreFieldGaussIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_IterativeLegendreFieldGaussIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_IterativeLegendreFieldGaussIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_IterativeLegendreFieldGaussIntegrator *self = (t_IterativeLegendreFieldGaussIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_IterativeLegendreFieldGaussIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(IterativeLegendreFieldGaussIntegrator), &PY_TYPE_DEF(IterativeLegendreFieldGaussIntegrator), module, "IterativeLegendreFieldGaussIntegrator", 0);
        }

        void t_IterativeLegendreFieldGaussIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreFieldGaussIntegrator), "class_", make_descriptor(IterativeLegendreFieldGaussIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreFieldGaussIntegrator), "wrapfn_", make_descriptor(t_IterativeLegendreFieldGaussIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLegendreFieldGaussIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IterativeLegendreFieldGaussIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IterativeLegendreFieldGaussIntegrator::initializeClass, 1)))
            return NULL;
          return t_IterativeLegendreFieldGaussIntegrator::wrap_Object(IterativeLegendreFieldGaussIntegrator(((t_IterativeLegendreFieldGaussIntegrator *) arg)->object.this$));
        }
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IterativeLegendreFieldGaussIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_IterativeLegendreFieldGaussIntegrator_of_(t_IterativeLegendreFieldGaussIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_IterativeLegendreFieldGaussIntegrator_init_(t_IterativeLegendreFieldGaussIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              IterativeLegendreFieldGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = IterativeLegendreFieldGaussIntegrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jint a2;
              jint a3;
              IterativeLegendreFieldGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3))
              {
                INT_CALL(object = IterativeLegendreFieldGaussIntegrator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;
              jdouble a3;
              jint a4;
              jint a5;
              IterativeLegendreFieldGaussIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KIDDII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5))
              {
                INT_CALL(object = IterativeLegendreFieldGaussIntegrator(a0, a1, a2, a3, a4, a5));
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
        static PyObject *t_IterativeLegendreFieldGaussIntegrator_get__parameters_(t_IterativeLegendreFieldGaussIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeScalesFactory.h"
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/GLONASSScale.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/time/BDTScale.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/TTScale.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "org/orekit/time/TDBScale.h"
#include "org/orekit/time/GPSScale.h"
#include "org/orekit/time/QZSSScale.h"
#include "org/orekit/time/TCBScale.h"
#include "org/orekit/time/TCGScale.h"
#include "org/orekit/time/TAIScale.h"
#include "org/orekit/time/GalileoScale.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/GMSTScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeScalesFactory::class$ = NULL;
      jmethodID *TimeScalesFactory::mids$ = NULL;
      bool TimeScalesFactory::live$ = false;

      jclass TimeScalesFactory::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeScalesFactory");

          mids$ = new jmethodID[max_mid];
          mids$[mid_addDefaultUTCTAIOffsetsLoaders_7ae3461a92a43152] = env->getStaticMethodID(cls, "addDefaultUTCTAIOffsetsLoaders", "()V");
          mids$[mid_addUTCTAIOffsetsLoader_fd1ab7015414bef0] = env->getStaticMethodID(cls, "addUTCTAIOffsetsLoader", "(Lorg/orekit/time/UTCTAIOffsetsLoader;)V");
          mids$[mid_clearUTCTAIOffsetsLoaders_7ae3461a92a43152] = env->getStaticMethodID(cls, "clearUTCTAIOffsetsLoaders", "()V");
          mids$[mid_getBDT_deaa012966748070] = env->getStaticMethodID(cls, "getBDT", "()Lorg/orekit/time/BDTScale;");
          mids$[mid_getGLONASS_c91e99b6d55c6edd] = env->getStaticMethodID(cls, "getGLONASS", "()Lorg/orekit/time/GLONASSScale;");
          mids$[mid_getGMST_9d529a30e942a554] = env->getStaticMethodID(cls, "getGMST", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/GMSTScale;");
          mids$[mid_getGPS_c3529b957726f144] = env->getStaticMethodID(cls, "getGPS", "()Lorg/orekit/time/GPSScale;");
          mids$[mid_getGST_11ee1ca64364e897] = env->getStaticMethodID(cls, "getGST", "()Lorg/orekit/time/GalileoScale;");
          mids$[mid_getIRNSS_ec0466e710e3daab] = env->getStaticMethodID(cls, "getIRNSS", "()Lorg/orekit/time/IRNSSScale;");
          mids$[mid_getQZSS_7f540f12419eda56] = env->getStaticMethodID(cls, "getQZSS", "()Lorg/orekit/time/QZSSScale;");
          mids$[mid_getTAI_9316322b62b6b656] = env->getStaticMethodID(cls, "getTAI", "()Lorg/orekit/time/TAIScale;");
          mids$[mid_getTCB_2460e78d331af28f] = env->getStaticMethodID(cls, "getTCB", "()Lorg/orekit/time/TCBScale;");
          mids$[mid_getTCG_30aeac15cc80b3c1] = env->getStaticMethodID(cls, "getTCG", "()Lorg/orekit/time/TCGScale;");
          mids$[mid_getTDB_0bcc4110bc5be1d2] = env->getStaticMethodID(cls, "getTDB", "()Lorg/orekit/time/TDBScale;");
          mids$[mid_getTT_9be074c5a298fe1e] = env->getStaticMethodID(cls, "getTT", "()Lorg/orekit/time/TTScale;");
          mids$[mid_getTimeScales_8c0eab743ddad863] = env->getStaticMethodID(cls, "getTimeScales", "()Lorg/orekit/time/LazyLoadedTimeScales;");
          mids$[mid_getUT1_7b22e00b4ab08eba] = env->getStaticMethodID(cls, "getUT1", "(Lorg/orekit/frames/EOPHistory;)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUT1_603d1058a5002a04] = env->getStaticMethodID(cls, "getUT1", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/time/UT1Scale;");
          mids$[mid_getUTC_ed870393143e8ecb] = env->getStaticMethodID(cls, "getUTC", "()Lorg/orekit/time/UTCScale;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void TimeScalesFactory::addDefaultUTCTAIOffsetsLoaders()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addDefaultUTCTAIOffsetsLoaders_7ae3461a92a43152]);
      }

      void TimeScalesFactory::addUTCTAIOffsetsLoader(const ::org::orekit::time::UTCTAIOffsetsLoader & a0)
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_addUTCTAIOffsetsLoader_fd1ab7015414bef0], a0.this$);
      }

      void TimeScalesFactory::clearUTCTAIOffsetsLoaders()
      {
        jclass cls = env->getClass(initializeClass);
        env->callStaticVoidMethod(cls, mids$[mid_clearUTCTAIOffsetsLoaders_7ae3461a92a43152]);
      }

      ::org::orekit::time::BDTScale TimeScalesFactory::getBDT()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::BDTScale(env->callStaticObjectMethod(cls, mids$[mid_getBDT_deaa012966748070]));
      }

      ::org::orekit::time::GLONASSScale TimeScalesFactory::getGLONASS()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::GLONASSScale(env->callStaticObjectMethod(cls, mids$[mid_getGLONASS_c91e99b6d55c6edd]));
      }

      ::org::orekit::time::GMSTScale TimeScalesFactory::getGMST(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::GMSTScale(env->callStaticObjectMethod(cls, mids$[mid_getGMST_9d529a30e942a554], a0.this$, a1));
      }

      ::org::orekit::time::GPSScale TimeScalesFactory::getGPS()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::GPSScale(env->callStaticObjectMethod(cls, mids$[mid_getGPS_c3529b957726f144]));
      }

      ::org::orekit::time::GalileoScale TimeScalesFactory::getGST()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::GalileoScale(env->callStaticObjectMethod(cls, mids$[mid_getGST_11ee1ca64364e897]));
      }

      ::org::orekit::time::IRNSSScale TimeScalesFactory::getIRNSS()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::IRNSSScale(env->callStaticObjectMethod(cls, mids$[mid_getIRNSS_ec0466e710e3daab]));
      }

      ::org::orekit::time::QZSSScale TimeScalesFactory::getQZSS()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::QZSSScale(env->callStaticObjectMethod(cls, mids$[mid_getQZSS_7f540f12419eda56]));
      }

      ::org::orekit::time::TAIScale TimeScalesFactory::getTAI()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TAIScale(env->callStaticObjectMethod(cls, mids$[mid_getTAI_9316322b62b6b656]));
      }

      ::org::orekit::time::TCBScale TimeScalesFactory::getTCB()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TCBScale(env->callStaticObjectMethod(cls, mids$[mid_getTCB_2460e78d331af28f]));
      }

      ::org::orekit::time::TCGScale TimeScalesFactory::getTCG()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TCGScale(env->callStaticObjectMethod(cls, mids$[mid_getTCG_30aeac15cc80b3c1]));
      }

      ::org::orekit::time::TDBScale TimeScalesFactory::getTDB()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TDBScale(env->callStaticObjectMethod(cls, mids$[mid_getTDB_0bcc4110bc5be1d2]));
      }

      ::org::orekit::time::TTScale TimeScalesFactory::getTT()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::TTScale(env->callStaticObjectMethod(cls, mids$[mid_getTT_9be074c5a298fe1e]));
      }

      ::org::orekit::time::LazyLoadedTimeScales TimeScalesFactory::getTimeScales()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::LazyLoadedTimeScales(env->callStaticObjectMethod(cls, mids$[mid_getTimeScales_8c0eab743ddad863]));
      }

      ::org::orekit::time::UT1Scale TimeScalesFactory::getUT1(const ::org::orekit::frames::EOPHistory & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::UT1Scale(env->callStaticObjectMethod(cls, mids$[mid_getUT1_7b22e00b4ab08eba], a0.this$));
      }

      ::org::orekit::time::UT1Scale TimeScalesFactory::getUT1(const ::org::orekit::utils::IERSConventions & a0, jboolean a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::UT1Scale(env->callStaticObjectMethod(cls, mids$[mid_getUT1_603d1058a5002a04], a0.this$, a1));
      }

      ::org::orekit::time::UTCScale TimeScalesFactory::getUTC()
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::time::UTCScale(env->callStaticObjectMethod(cls, mids$[mid_getUTC_ed870393143e8ecb]));
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
      static PyObject *t_TimeScalesFactory_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalesFactory_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalesFactory_addDefaultUTCTAIOffsetsLoaders(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_addUTCTAIOffsetsLoader(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeScalesFactory_clearUTCTAIOffsetsLoaders(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getBDT(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getGLONASS(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getGMST(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeScalesFactory_getGPS(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getGST(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getIRNSS(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getQZSS(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTAI(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTCB(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTCG(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTDB(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTT(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getTimeScales(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_getUT1(PyTypeObject *type, PyObject *args);
      static PyObject *t_TimeScalesFactory_getUTC(PyTypeObject *type);
      static PyObject *t_TimeScalesFactory_get__bDT(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__gLONASS(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__gPS(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__gST(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__iRNSS(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__qZSS(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__tAI(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__tCB(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__tCG(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__tDB(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__tT(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__timeScales(t_TimeScalesFactory *self, void *data);
      static PyObject *t_TimeScalesFactory_get__uTC(t_TimeScalesFactory *self, void *data);
      static PyGetSetDef t_TimeScalesFactory__fields_[] = {
        DECLARE_GET_FIELD(t_TimeScalesFactory, bDT),
        DECLARE_GET_FIELD(t_TimeScalesFactory, gLONASS),
        DECLARE_GET_FIELD(t_TimeScalesFactory, gPS),
        DECLARE_GET_FIELD(t_TimeScalesFactory, gST),
        DECLARE_GET_FIELD(t_TimeScalesFactory, iRNSS),
        DECLARE_GET_FIELD(t_TimeScalesFactory, qZSS),
        DECLARE_GET_FIELD(t_TimeScalesFactory, tAI),
        DECLARE_GET_FIELD(t_TimeScalesFactory, tCB),
        DECLARE_GET_FIELD(t_TimeScalesFactory, tCG),
        DECLARE_GET_FIELD(t_TimeScalesFactory, tDB),
        DECLARE_GET_FIELD(t_TimeScalesFactory, tT),
        DECLARE_GET_FIELD(t_TimeScalesFactory, timeScales),
        DECLARE_GET_FIELD(t_TimeScalesFactory, uTC),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeScalesFactory__methods_[] = {
        DECLARE_METHOD(t_TimeScalesFactory, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, addDefaultUTCTAIOffsetsLoaders, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, addUTCTAIOffsetsLoader, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, clearUTCTAIOffsetsLoaders, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getBDT, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getGLONASS, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getGMST, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getGPS, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getGST, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getIRNSS, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getQZSS, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTAI, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTCB, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTCG, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTDB, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTT, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getTimeScales, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getUT1, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_TimeScalesFactory, getUTC, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeScalesFactory)[] = {
        { Py_tp_methods, t_TimeScalesFactory__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeScalesFactory__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeScalesFactory)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeScalesFactory, t_TimeScalesFactory, TimeScalesFactory);

      void t_TimeScalesFactory::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeScalesFactory), &PY_TYPE_DEF(TimeScalesFactory), module, "TimeScalesFactory", 0);
      }

      void t_TimeScalesFactory::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalesFactory), "class_", make_descriptor(TimeScalesFactory::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalesFactory), "wrapfn_", make_descriptor(t_TimeScalesFactory::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeScalesFactory), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeScalesFactory_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeScalesFactory::initializeClass, 1)))
          return NULL;
        return t_TimeScalesFactory::wrap_Object(TimeScalesFactory(((t_TimeScalesFactory *) arg)->object.this$));
      }
      static PyObject *t_TimeScalesFactory_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeScalesFactory::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeScalesFactory_addDefaultUTCTAIOffsetsLoaders(PyTypeObject *type)
      {
        OBJ_CALL(::org::orekit::time::TimeScalesFactory::addDefaultUTCTAIOffsetsLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_TimeScalesFactory_addUTCTAIOffsetsLoader(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::time::UTCTAIOffsetsLoader a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::UTCTAIOffsetsLoader::initializeClass, &a0))
        {
          OBJ_CALL(::org::orekit::time::TimeScalesFactory::addUTCTAIOffsetsLoader(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError(type, "addUTCTAIOffsetsLoader", arg);
        return NULL;
      }

      static PyObject *t_TimeScalesFactory_clearUTCTAIOffsetsLoaders(PyTypeObject *type)
      {
        OBJ_CALL(::org::orekit::time::TimeScalesFactory::clearUTCTAIOffsetsLoaders());
        Py_RETURN_NONE;
      }

      static PyObject *t_TimeScalesFactory_getBDT(PyTypeObject *type)
      {
        ::org::orekit::time::BDTScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getGLONASS(PyTypeObject *type)
      {
        ::org::orekit::time::GLONASSScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getGMST(PyTypeObject *type, PyObject *args)
      {
        ::org::orekit::utils::IERSConventions a0((jobject) NULL);
        PyTypeObject **p0;
        jboolean a1;
        ::org::orekit::time::GMSTScale result((jobject) NULL);

        if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
        {
          OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getGMST(a0, a1));
          return ::org::orekit::time::t_GMSTScale::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getGMST", args);
        return NULL;
      }

      static PyObject *t_TimeScalesFactory_getGPS(PyTypeObject *type)
      {
        ::org::orekit::time::GPSScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getGST(PyTypeObject *type)
      {
        ::org::orekit::time::GalileoScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getIRNSS(PyTypeObject *type)
      {
        ::org::orekit::time::IRNSSScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getQZSS(PyTypeObject *type)
      {
        ::org::orekit::time::QZSSScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTAI(PyTypeObject *type)
      {
        ::org::orekit::time::TAIScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTCB(PyTypeObject *type)
      {
        ::org::orekit::time::TCBScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTCG(PyTypeObject *type)
      {
        ::org::orekit::time::TCGScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTDB(PyTypeObject *type)
      {
        ::org::orekit::time::TDBScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTT(PyTypeObject *type)
      {
        ::org::orekit::time::TTScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getTimeScales(PyTypeObject *type)
      {
        ::org::orekit::time::LazyLoadedTimeScales result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getTimeScales());
        return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_getUT1(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::EOPHistory a0((jobject) NULL);
            ::org::orekit::time::UT1Scale result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::EOPHistory::initializeClass, &a0))
            {
              OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getUT1(a0));
              return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::orekit::utils::IERSConventions a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;
            ::org::orekit::time::UT1Scale result((jobject) NULL);

            if (!parseArgs(args, "KZ", ::org::orekit::utils::IERSConventions::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getUT1(a0, a1));
              return ::org::orekit::time::t_UT1Scale::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getUT1", args);
        return NULL;
      }

      static PyObject *t_TimeScalesFactory_getUTC(PyTypeObject *type)
      {
        ::org::orekit::time::UTCScale result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::time::TimeScalesFactory::getUTC());
        return ::org::orekit::time::t_UTCScale::wrap_Object(result);
      }

      static PyObject *t_TimeScalesFactory_get__bDT(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::BDTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getBDT());
        return ::org::orekit::time::t_BDTScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__gLONASS(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::GLONASSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGLONASS());
        return ::org::orekit::time::t_GLONASSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__gPS(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::GPSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGPS());
        return ::org::orekit::time::t_GPSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__gST(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::GalileoScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getGST());
        return ::org::orekit::time::t_GalileoScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__iRNSS(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::IRNSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getIRNSS());
        return ::org::orekit::time::t_IRNSSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__qZSS(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::QZSSScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getQZSS());
        return ::org::orekit::time::t_QZSSScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__tAI(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::TAIScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTAI());
        return ::org::orekit::time::t_TAIScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__tCB(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::TCBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCB());
        return ::org::orekit::time::t_TCBScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__tCG(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::TCGScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTCG());
        return ::org::orekit::time::t_TCGScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__tDB(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::TDBScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTDB());
        return ::org::orekit::time::t_TDBScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__tT(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::TTScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getTT());
        return ::org::orekit::time::t_TTScale::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__timeScales(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::LazyLoadedTimeScales value((jobject) NULL);
        OBJ_CALL(value = self->object.getTimeScales());
        return ::org::orekit::time::t_LazyLoadedTimeScales::wrap_Object(value);
      }

      static PyObject *t_TimeScalesFactory_get__uTC(t_TimeScalesFactory *self, void *data)
      {
        ::org::orekit::time::UTCScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getUTC());
        return ::org::orekit::time::t_UTCScale::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *BoundedPropagator::class$ = NULL;
      jmethodID *BoundedPropagator::mids$ = NULL;
      bool BoundedPropagator::live$ = false;

      jclass BoundedPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/BoundedPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxDate_aaa854c403487cf3] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_aaa854c403487cf3] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::AbsoluteDate BoundedPropagator::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_aaa854c403487cf3]));
      }

      ::org::orekit::time::AbsoluteDate BoundedPropagator::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_aaa854c403487cf3]));
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
      static PyObject *t_BoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoundedPropagator_getMaxDate(t_BoundedPropagator *self);
      static PyObject *t_BoundedPropagator_getMinDate(t_BoundedPropagator *self);
      static PyObject *t_BoundedPropagator_get__maxDate(t_BoundedPropagator *self, void *data);
      static PyObject *t_BoundedPropagator_get__minDate(t_BoundedPropagator *self, void *data);
      static PyGetSetDef t_BoundedPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_BoundedPropagator, maxDate),
        DECLARE_GET_FIELD(t_BoundedPropagator, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BoundedPropagator__methods_[] = {
        DECLARE_METHOD(t_BoundedPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoundedPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoundedPropagator, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_BoundedPropagator, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BoundedPropagator)[] = {
        { Py_tp_methods, t_BoundedPropagator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BoundedPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BoundedPropagator)[] = {
        &PY_TYPE_DEF(::org::orekit::propagation::Propagator),
        NULL
      };

      DEFINE_TYPE(BoundedPropagator, t_BoundedPropagator, BoundedPropagator);

      void t_BoundedPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(BoundedPropagator), &PY_TYPE_DEF(BoundedPropagator), module, "BoundedPropagator", 0);
      }

      void t_BoundedPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedPropagator), "class_", make_descriptor(BoundedPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedPropagator), "wrapfn_", make_descriptor(t_BoundedPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedPropagator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BoundedPropagator::initializeClass, 1)))
          return NULL;
        return t_BoundedPropagator::wrap_Object(BoundedPropagator(((t_BoundedPropagator *) arg)->object.this$));
      }
      static PyObject *t_BoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BoundedPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BoundedPropagator_getMaxDate(t_BoundedPropagator *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_BoundedPropagator_getMinDate(t_BoundedPropagator *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_BoundedPropagator_get__maxDate(t_BoundedPropagator *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_BoundedPropagator_get__minDate(t_BoundedPropagator *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *MappingFunction::class$ = NULL;
          jmethodID *MappingFunction::mids$ = NULL;
          bool MappingFunction::live$ = false;

          jclass MappingFunction::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/MappingFunction");

              mids$ = new jmethodID[max_mid];
              mids$[mid_mappingFactors_67294ed37389436d] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_6def5a87906f3de8] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< ::org::hipparchus::CalculusFieldElement > MappingFunction::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_67294ed37389436d], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > MappingFunction::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_6def5a87906f3de8], a0, a1.this$, a2.this$));
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
          static PyObject *t_MappingFunction_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MappingFunction_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MappingFunction_mappingFactors(t_MappingFunction *self, PyObject *args);

          static PyMethodDef t_MappingFunction__methods_[] = {
            DECLARE_METHOD(t_MappingFunction, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MappingFunction, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MappingFunction, mappingFactors, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MappingFunction)[] = {
            { Py_tp_methods, t_MappingFunction__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MappingFunction)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MappingFunction, t_MappingFunction, MappingFunction);

          void t_MappingFunction::install(PyObject *module)
          {
            installType(&PY_TYPE(MappingFunction), &PY_TYPE_DEF(MappingFunction), module, "MappingFunction", 0);
          }

          void t_MappingFunction::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MappingFunction), "class_", make_descriptor(MappingFunction::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MappingFunction), "wrapfn_", make_descriptor(t_MappingFunction::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MappingFunction), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MappingFunction_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MappingFunction::initializeClass, 1)))
              return NULL;
            return t_MappingFunction::wrap_Object(MappingFunction(((t_MappingFunction *) arg)->object.this$));
          }
          static PyObject *t_MappingFunction_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MappingFunction::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MappingFunction_mappingFactors(t_MappingFunction *self, PyObject *args)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *TleGenerationAlgorithm::class$ = NULL;
            jmethodID *TleGenerationAlgorithm::mids$ = NULL;
            bool TleGenerationAlgorithm::live$ = false;

            jclass TleGenerationAlgorithm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_generate_70bd59273b78d702] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_generate_129bb6d4ed7ed841] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::propagation::analytical::tle::FieldTLE TleGenerationAlgorithm::generate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::FieldTLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callObjectMethod(this$, mids$[mid_generate_70bd59273b78d702], a0.this$, a1.this$));
            }

            ::org::orekit::propagation::analytical::tle::TLE TleGenerationAlgorithm::generate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::analytical::tle::TLE & a1) const
            {
              return ::org::orekit::propagation::analytical::tle::TLE(env->callObjectMethod(this$, mids$[mid_generate_129bb6d4ed7ed841], a0.this$, a1.this$));
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
        namespace tle {
          namespace generation {
            static PyObject *t_TleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TleGenerationAlgorithm_generate(t_TleGenerationAlgorithm *self, PyObject *args);

            static PyMethodDef t_TleGenerationAlgorithm__methods_[] = {
              DECLARE_METHOD(t_TleGenerationAlgorithm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TleGenerationAlgorithm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TleGenerationAlgorithm, generate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TleGenerationAlgorithm)[] = {
              { Py_tp_methods, t_TleGenerationAlgorithm__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TleGenerationAlgorithm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(TleGenerationAlgorithm, t_TleGenerationAlgorithm, TleGenerationAlgorithm);

            void t_TleGenerationAlgorithm::install(PyObject *module)
            {
              installType(&PY_TYPE(TleGenerationAlgorithm), &PY_TYPE_DEF(TleGenerationAlgorithm), module, "TleGenerationAlgorithm", 0);
            }

            void t_TleGenerationAlgorithm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationAlgorithm), "class_", make_descriptor(TleGenerationAlgorithm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationAlgorithm), "wrapfn_", make_descriptor(t_TleGenerationAlgorithm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TleGenerationAlgorithm), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_TleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TleGenerationAlgorithm::initializeClass, 1)))
                return NULL;
              return t_TleGenerationAlgorithm::wrap_Object(TleGenerationAlgorithm(((t_TleGenerationAlgorithm *) arg)->object.this$));
            }
            static PyObject *t_TleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TleGenerationAlgorithm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TleGenerationAlgorithm_generate(t_TleGenerationAlgorithm *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::analytical::tle::FieldTLE a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);

                  if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE a1((jobject) NULL);
                  ::org::orekit::propagation::analytical::tle::TLE result((jobject) NULL);

                  if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(result = self->object.generate(a0, a1));
                    return ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "generate", args);
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
#include "org/orekit/rugged/errors/DumpManager.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/utils/SpacecraftToObservedBody.h"
#include "java/io/File.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/rugged/linesensor/SensorMeanPlaneCrossing.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/lang/Class.h"
#include "java/lang/Boolean.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Transform.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace errors {

        ::java::lang::Class *DumpManager::class$ = NULL;
        jmethodID *DumpManager::mids$ = NULL;
        bool DumpManager::live$ = false;

        jclass DumpManager::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/errors/DumpManager");

            mids$ = new jmethodID[max_mid];
            mids$[mid_activate_46e66c77c82c9a6b] = env->getStaticMethodID(cls, "activate", "(Ljava/io/File;)V");
            mids$[mid_deactivate_7ae3461a92a43152] = env->getStaticMethodID(cls, "deactivate", "()V");
            mids$[mid_dumpAlgorithm_7617e0dc8b479a43] = env->getStaticMethodID(cls, "dumpAlgorithm", "(Lorg/orekit/rugged/api/AlgorithmId;)V");
            mids$[mid_dumpAlgorithm_457e5a62486d41a2] = env->getStaticMethodID(cls, "dumpAlgorithm", "(Lorg/orekit/rugged/api/AlgorithmId;D)V");
            mids$[mid_dumpDirectLocation_db599073dd91eb82] = env->getStaticMethodID(cls, "dumpDirectLocation", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;ZZZ)V");
            mids$[mid_dumpDirectLocationResult_e901f09a0b8554bd] = env->getStaticMethodID(cls, "dumpDirectLocationResult", "(Lorg/orekit/bodies/GeodeticPoint;)V");
            mids$[mid_dumpEllipsoid_de42b33da926dabf] = env->getStaticMethodID(cls, "dumpEllipsoid", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;)V");
            mids$[mid_dumpInverseLocation_cca31eb67820bbbc] = env->getStaticMethodID(cls, "dumpInverseLocation", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/rugged/utils/ExtendedEllipsoid;IIZZZ)V");
            mids$[mid_dumpInverseLocationResult_f611587b55cd2fe6] = env->getStaticMethodID(cls, "dumpInverseLocationResult", "(Lorg/orekit/rugged/linesensor/SensorPixel;)V");
            mids$[mid_dumpSensorDatation_5af65513ee4e934d] = env->getStaticMethodID(cls, "dumpSensorDatation", "(Lorg/orekit/rugged/linesensor/LineSensor;DLorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_dumpSensorLOS_e473049b34767c7c] = env->getStaticMethodID(cls, "dumpSensorLOS", "(Lorg/orekit/rugged/linesensor/LineSensor;Lorg/orekit/time/AbsoluteDate;ILorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
            mids$[mid_dumpSensorMeanPlane_2739a8dd5a6080b9] = env->getStaticMethodID(cls, "dumpSensorMeanPlane", "(Lorg/orekit/rugged/linesensor/SensorMeanPlaneCrossing;)V");
            mids$[mid_dumpSensorRate_1139651494940895] = env->getStaticMethodID(cls, "dumpSensorRate", "(Lorg/orekit/rugged/linesensor/LineSensor;DD)V");
            mids$[mid_dumpTileCell_33172774d6ef32ea] = env->getStaticMethodID(cls, "dumpTileCell", "(Lorg/orekit/rugged/raster/Tile;IID)V");
            mids$[mid_dumpTransform_0d73dc55a552eb68] = env->getStaticMethodID(cls, "dumpTransform", "(Lorg/orekit/rugged/utils/SpacecraftToObservedBody;ILorg/orekit/frames/Transform;Lorg/orekit/frames/Transform;)V");
            mids$[mid_endNicely_7ae3461a92a43152] = env->getStaticMethodID(cls, "endNicely", "()V");
            mids$[mid_isActive_e470b6d9e0d979db] = env->getStaticMethodID(cls, "isActive", "()Z");
            mids$[mid_resume_837ebd2d6615d831] = env->getStaticMethodID(cls, "resume", "(Ljava/lang/Boolean;)V");
            mids$[mid_suspend_cc0d8e7d471c2d45] = env->getStaticMethodID(cls, "suspend", "()Ljava/lang/Boolean;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void DumpManager::activate(const ::java::io::File & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_activate_46e66c77c82c9a6b], a0.this$);
        }

        void DumpManager::deactivate()
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_deactivate_7ae3461a92a43152]);
        }

        void DumpManager::dumpAlgorithm(const ::org::orekit::rugged::api::AlgorithmId & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpAlgorithm_7617e0dc8b479a43], a0.this$);
        }

        void DumpManager::dumpAlgorithm(const ::org::orekit::rugged::api::AlgorithmId & a0, jdouble a1)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpAlgorithm_457e5a62486d41a2], a0.this$, a1);
        }

        void DumpManager::dumpDirectLocation(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jboolean a3, jboolean a4, jboolean a5)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpDirectLocation_db599073dd91eb82], a0.this$, a1.this$, a2.this$, a3, a4, a5);
        }

        void DumpManager::dumpDirectLocationResult(const ::org::orekit::bodies::GeodeticPoint & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpDirectLocationResult_e901f09a0b8554bd], a0.this$);
        }

        void DumpManager::dumpEllipsoid(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpEllipsoid_de42b33da926dabf], a0.this$);
        }

        void DumpManager::dumpInverseLocation(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::rugged::utils::ExtendedEllipsoid & a2, jint a3, jint a4, jboolean a5, jboolean a6, jboolean a7)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpInverseLocation_cca31eb67820bbbc], a0.this$, a1.this$, a2.this$, a3, a4, a5, a6, a7);
        }

        void DumpManager::dumpInverseLocationResult(const ::org::orekit::rugged::linesensor::SensorPixel & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpInverseLocationResult_f611587b55cd2fe6], a0.this$);
        }

        void DumpManager::dumpSensorDatation(const ::org::orekit::rugged::linesensor::LineSensor & a0, jdouble a1, const ::org::orekit::time::AbsoluteDate & a2)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpSensorDatation_5af65513ee4e934d], a0.this$, a1, a2.this$);
        }

        void DumpManager::dumpSensorLOS(const ::org::orekit::rugged::linesensor::LineSensor & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpSensorLOS_e473049b34767c7c], a0.this$, a1.this$, a2, a3.this$);
        }

        void DumpManager::dumpSensorMeanPlane(const ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpSensorMeanPlane_2739a8dd5a6080b9], a0.this$);
        }

        void DumpManager::dumpSensorRate(const ::org::orekit::rugged::linesensor::LineSensor & a0, jdouble a1, jdouble a2)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpSensorRate_1139651494940895], a0.this$, a1, a2);
        }

        void DumpManager::dumpTileCell(const ::org::orekit::rugged::raster::Tile & a0, jint a1, jint a2, jdouble a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpTileCell_33172774d6ef32ea], a0.this$, a1, a2, a3);
        }

        void DumpManager::dumpTransform(const ::org::orekit::rugged::utils::SpacecraftToObservedBody & a0, jint a1, const ::org::orekit::frames::Transform & a2, const ::org::orekit::frames::Transform & a3)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_dumpTransform_0d73dc55a552eb68], a0.this$, a1, a2.this$, a3.this$);
        }

        void DumpManager::endNicely()
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_endNicely_7ae3461a92a43152]);
        }

        jboolean DumpManager::isActive()
        {
          jclass cls = env->getClass(initializeClass);
          return env->callStaticBooleanMethod(cls, mids$[mid_isActive_e470b6d9e0d979db]);
        }

        void DumpManager::resume(const ::java::lang::Boolean & a0)
        {
          jclass cls = env->getClass(initializeClass);
          env->callStaticVoidMethod(cls, mids$[mid_resume_837ebd2d6615d831], a0.this$);
        }

        ::java::lang::Boolean DumpManager::suspend()
        {
          jclass cls = env->getClass(initializeClass);
          return ::java::lang::Boolean(env->callStaticObjectMethod(cls, mids$[mid_suspend_cc0d8e7d471c2d45]));
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
        static PyObject *t_DumpManager_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_activate(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_deactivate(PyTypeObject *type);
        static PyObject *t_DumpManager_dumpAlgorithm(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpDirectLocation(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpDirectLocationResult(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_dumpEllipsoid(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_dumpInverseLocation(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpInverseLocationResult(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_dumpSensorDatation(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpSensorLOS(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpSensorMeanPlane(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_dumpSensorRate(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpTileCell(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_dumpTransform(PyTypeObject *type, PyObject *args);
        static PyObject *t_DumpManager_endNicely(PyTypeObject *type);
        static PyObject *t_DumpManager_isActive(PyTypeObject *type);
        static PyObject *t_DumpManager_resume(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DumpManager_suspend(PyTypeObject *type);
        static PyObject *t_DumpManager_get__active(t_DumpManager *self, void *data);
        static PyGetSetDef t_DumpManager__fields_[] = {
          DECLARE_GET_FIELD(t_DumpManager, active),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DumpManager__methods_[] = {
          DECLARE_METHOD(t_DumpManager, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, activate, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, deactivate, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpAlgorithm, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpDirectLocation, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpDirectLocationResult, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpEllipsoid, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpInverseLocation, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpInverseLocationResult, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpSensorDatation, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpSensorLOS, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpSensorMeanPlane, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpSensorRate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpTileCell, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, dumpTransform, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, endNicely, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, isActive, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, resume, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DumpManager, suspend, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DumpManager)[] = {
          { Py_tp_methods, t_DumpManager__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DumpManager__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DumpManager)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DumpManager, t_DumpManager, DumpManager);

        void t_DumpManager::install(PyObject *module)
        {
          installType(&PY_TYPE(DumpManager), &PY_TYPE_DEF(DumpManager), module, "DumpManager", 0);
        }

        void t_DumpManager::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpManager), "class_", make_descriptor(DumpManager::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpManager), "wrapfn_", make_descriptor(t_DumpManager::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DumpManager), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DumpManager_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DumpManager::initializeClass, 1)))
            return NULL;
          return t_DumpManager::wrap_Object(DumpManager(((t_DumpManager *) arg)->object.this$));
        }
        static PyObject *t_DumpManager_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DumpManager::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DumpManager_activate(PyTypeObject *type, PyObject *arg)
        {
          ::java::io::File a0((jobject) NULL);

          if (!parseArg(arg, "k", ::java::io::File::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::activate(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "activate", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_deactivate(PyTypeObject *type)
        {
          OBJ_CALL(::org::orekit::rugged::errors::DumpManager::deactivate());
          Py_RETURN_NONE;
        }

        static PyObject *t_DumpManager_dumpAlgorithm(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::rugged::api::AlgorithmId a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::rugged::api::AlgorithmId::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_AlgorithmId::parameters_))
              {
                OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpAlgorithm(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::rugged::api::AlgorithmId a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;

              if (!parseArgs(args, "KD", ::org::orekit::rugged::api::AlgorithmId::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_AlgorithmId::parameters_, &a1))
              {
                OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpAlgorithm(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError(type, "dumpAlgorithm", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpDirectLocation(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          jboolean a3;
          jboolean a4;
          jboolean a5;

          if (!parseArgs(args, "kkkZZZ", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpDirectLocation(a0, a1, a2, a3, a4, a5));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpDirectLocation", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpDirectLocationResult(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpDirectLocationResult(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpDirectLocationResult", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpEllipsoid(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpEllipsoid(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpEllipsoid", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpInverseLocation(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
          ::org::orekit::rugged::utils::ExtendedEllipsoid a2((jobject) NULL);
          jint a3;
          jint a4;
          jboolean a5;
          jboolean a6;
          jboolean a7;

          if (!parseArgs(args, "kkkIIZZZ", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpInverseLocation(a0, a1, a2, a3, a4, a5, a6, a7));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpInverseLocation", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpInverseLocationResult(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpInverseLocationResult(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpInverseLocationResult", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpSensorDatation(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);

          if (!parseArgs(args, "kDk", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpSensorDatation(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpSensorDatation", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpSensorLOS(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jint a2;
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);

          if (!parseArgs(args, "kkIk", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpSensorLOS(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpSensorLOS", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpSensorMeanPlane(PyTypeObject *type, PyObject *arg)
        {
          ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::linesensor::SensorMeanPlaneCrossing::initializeClass, &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpSensorMeanPlane(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpSensorMeanPlane", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpSensorRate(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          jdouble a1;
          jdouble a2;

          if (!parseArgs(args, "kDD", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpSensorRate(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpSensorRate", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpTileCell(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::raster::Tile a0((jobject) NULL);
          jint a1;
          jint a2;
          jdouble a3;

          if (!parseArgs(args, "kIID", ::org::orekit::rugged::raster::Tile::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpTileCell(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpTileCell", args);
          return NULL;
        }

        static PyObject *t_DumpManager_dumpTransform(PyTypeObject *type, PyObject *args)
        {
          ::org::orekit::rugged::utils::SpacecraftToObservedBody a0((jobject) NULL);
          jint a1;
          ::org::orekit::frames::Transform a2((jobject) NULL);
          ::org::orekit::frames::Transform a3((jobject) NULL);

          if (!parseArgs(args, "kIkk", ::org::orekit::rugged::utils::SpacecraftToObservedBody::initializeClass, ::org::orekit::frames::Transform::initializeClass, ::org::orekit::frames::Transform::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::dumpTransform(a0, a1, a2, a3));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "dumpTransform", args);
          return NULL;
        }

        static PyObject *t_DumpManager_endNicely(PyTypeObject *type)
        {
          OBJ_CALL(::org::orekit::rugged::errors::DumpManager::endNicely());
          Py_RETURN_NONE;
        }

        static PyObject *t_DumpManager_isActive(PyTypeObject *type)
        {
          jboolean result;
          OBJ_CALL(result = ::org::orekit::rugged::errors::DumpManager::isActive());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_DumpManager_resume(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::Boolean a0((jobject) NULL);

          if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Boolean), &a0))
          {
            OBJ_CALL(::org::orekit::rugged::errors::DumpManager::resume(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError(type, "resume", arg);
          return NULL;
        }

        static PyObject *t_DumpManager_suspend(PyTypeObject *type)
        {
          ::java::lang::Boolean result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::errors::DumpManager::suspend());
          return ::java::lang::t_Boolean::wrap_Object(result);
        }

        static PyObject *t_DumpManager_get__active(t_DumpManager *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isActive());
          Py_RETURN_BOOL(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Point.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Transform::class$ = NULL;
        jmethodID *Transform::mids$ = NULL;
        bool Transform::live$ = false;

        jclass Transform::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Transform");

            mids$ = new jmethodID[max_mid];
            mids$[mid_apply_ac445dfe898b403a] = env->getMethodID(cls, "apply", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
            mids$[mid_apply_369238cc76da09a5] = env->getMethodID(cls, "apply", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/Hyperplane;");
            mids$[mid_apply_525a9dfaec49a781] = env->getMethodID(cls, "apply", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::Point Transform::apply(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_apply_ac445dfe898b403a], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Hyperplane Transform::apply(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Hyperplane(env->callObjectMethod(this$, mids$[mid_apply_369238cc76da09a5], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane Transform::apply(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0, const ::org::hipparchus::geometry::partitioning::Hyperplane & a1, const ::org::hipparchus::geometry::partitioning::Hyperplane & a2) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_apply_525a9dfaec49a781], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_Transform_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Transform_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Transform_of_(t_Transform *self, PyObject *args);
        static PyObject *t_Transform_apply(t_Transform *self, PyObject *args);
        static PyObject *t_Transform_get__parameters_(t_Transform *self, void *data);
        static PyGetSetDef t_Transform__fields_[] = {
          DECLARE_GET_FIELD(t_Transform, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Transform__methods_[] = {
          DECLARE_METHOD(t_Transform, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Transform, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Transform, of_, METH_VARARGS),
          DECLARE_METHOD(t_Transform, apply, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Transform)[] = {
          { Py_tp_methods, t_Transform__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Transform__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Transform)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Transform, t_Transform, Transform);
        PyObject *t_Transform::wrap_Object(const Transform& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Transform::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Transform *self = (t_Transform *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_Transform::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_Transform::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Transform *self = (t_Transform *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_Transform::install(PyObject *module)
        {
          installType(&PY_TYPE(Transform), &PY_TYPE_DEF(Transform), module, "Transform", 0);
        }

        void t_Transform::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "class_", make_descriptor(Transform::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "wrapfn_", make_descriptor(t_Transform::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Transform), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Transform_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Transform::initializeClass, 1)))
            return NULL;
          return t_Transform::wrap_Object(Transform(((t_Transform *) arg)->object.this$));
        }
        static PyObject *t_Transform_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Transform::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Transform_of_(t_Transform *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Transform_apply(t_Transform *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::geometry::Point a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::Point result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::partitioning::Hyperplane result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::partitioning::Hyperplane a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::partitioning::Hyperplane a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_, &a2, &p2, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
              {
                OBJ_CALL(result = self->object.apply(a0, a1, a2));
                return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[1]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "apply", args);
          return NULL;
        }
        static PyObject *t_Transform_get__parameters_(t_Transform *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonFieldTimeInterpolator.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonFieldTimeInterpolator::class$ = NULL;
      jmethodID *PythonFieldTimeInterpolator::mids$ = NULL;
      bool PythonFieldTimeInterpolator::live$ = false;

      jclass PythonFieldTimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonFieldTimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getExtrapolationThreshold_456d9a2f64d6b28d] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_f2f64475e4580546] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_a6156df500549a58] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_e5d5b5a7ee2b02b5] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeInterpolator;");
          mids$[mid_interpolate_a0507ed7c568b47c] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeInterpolator;");
          mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldTimeInterpolator::PythonFieldTimeInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      void PythonFieldTimeInterpolator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
      }

      jlong PythonFieldTimeInterpolator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
      }

      void PythonFieldTimeInterpolator::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonFieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeInterpolator_of_(t_PythonFieldTimeInterpolator *self, PyObject *args);
      static int t_PythonFieldTimeInterpolator_init_(t_PythonFieldTimeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldTimeInterpolator_finalize(t_PythonFieldTimeInterpolator *self);
      static PyObject *t_PythonFieldTimeInterpolator_pythonExtension(t_PythonFieldTimeInterpolator *self, PyObject *args);
      static jdouble JNICALL t_PythonFieldTimeInterpolator_getExtrapolationThreshold0(JNIEnv *jenv, jobject jobj);
      static jint JNICALL t_PythonFieldTimeInterpolator_getNbInterpolationPoints1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeInterpolator_getSubInterpolators2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeInterpolator_interpolate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jobject JNICALL t_PythonFieldTimeInterpolator_interpolate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonFieldTimeInterpolator_pythonDecRef5(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldTimeInterpolator_get__self(t_PythonFieldTimeInterpolator *self, void *data);
      static PyObject *t_PythonFieldTimeInterpolator_get__parameters_(t_PythonFieldTimeInterpolator *self, void *data);
      static PyGetSetDef t_PythonFieldTimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldTimeInterpolator, self),
        DECLARE_GET_FIELD(t_PythonFieldTimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldTimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldTimeInterpolator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeInterpolator)[] = {
        { Py_tp_methods, t_PythonFieldTimeInterpolator__methods_ },
        { Py_tp_init, (void *) t_PythonFieldTimeInterpolator_init_ },
        { Py_tp_getset, t_PythonFieldTimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldTimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldTimeInterpolator, t_PythonFieldTimeInterpolator, PythonFieldTimeInterpolator);
      PyObject *t_PythonFieldTimeInterpolator::wrap_Object(const PythonFieldTimeInterpolator& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeInterpolator *self = (t_PythonFieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PythonFieldTimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeInterpolator *self = (t_PythonFieldTimeInterpolator *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PythonFieldTimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldTimeInterpolator), &PY_TYPE_DEF(PythonFieldTimeInterpolator), module, "PythonFieldTimeInterpolator", 1);
      }

      void t_PythonFieldTimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeInterpolator), "class_", make_descriptor(PythonFieldTimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeInterpolator), "wrapfn_", make_descriptor(t_PythonFieldTimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeInterpolator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldTimeInterpolator::initializeClass);
        JNINativeMethod methods[] = {
          { "getExtrapolationThreshold", "()D", (void *) t_PythonFieldTimeInterpolator_getExtrapolationThreshold0 },
          { "getNbInterpolationPoints", "()I", (void *) t_PythonFieldTimeInterpolator_getNbInterpolationPoints1 },
          { "getSubInterpolators", "()Ljava/util/List;", (void *) t_PythonFieldTimeInterpolator_getSubInterpolators2 },
          { "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/FieldTimeInterpolator;", (void *) t_PythonFieldTimeInterpolator_interpolate3 },
          { "interpolate", "(Lorg/orekit/time/FieldAbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/FieldTimeInterpolator;", (void *) t_PythonFieldTimeInterpolator_interpolate4 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldTimeInterpolator_pythonDecRef5 },
        };
        env->registerNatives(cls, methods, 6);
      }

      static PyObject *t_PythonFieldTimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldTimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_PythonFieldTimeInterpolator::wrap_Object(PythonFieldTimeInterpolator(((t_PythonFieldTimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldTimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldTimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldTimeInterpolator_of_(t_PythonFieldTimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldTimeInterpolator_init_(t_PythonFieldTimeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldTimeInterpolator object((jobject) NULL);

        INT_CALL(object = PythonFieldTimeInterpolator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldTimeInterpolator_finalize(t_PythonFieldTimeInterpolator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldTimeInterpolator_pythonExtension(t_PythonFieldTimeInterpolator *self, PyObject *args)
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

      static jdouble JNICALL t_PythonFieldTimeInterpolator_getExtrapolationThreshold0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getExtrapolationThreshold", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getExtrapolationThreshold", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jint JNICALL t_PythonFieldTimeInterpolator_getNbInterpolationPoints1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jint value;
        PyObject *result = PyObject_CallMethod(obj, "getNbInterpolationPoints", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "I", &value))
        {
          throwTypeError("getNbInterpolationPoints", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jint) 0;
      }

      static jobject JNICALL t_PythonFieldTimeInterpolator_getSubInterpolators2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getSubInterpolators", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getSubInterpolators", result);
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

      static jobject JNICALL t_PythonFieldTimeInterpolator_interpolate3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeInterpolator value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::java::util::t_Collection::wrap_Object(::java::util::Collection(a1));
        PyObject *result = PyObject_CallMethod(obj, "interpolate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeInterpolator::initializeClass, &value))
        {
          throwTypeError("interpolate", result);
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

      static jobject JNICALL t_PythonFieldTimeInterpolator_interpolate4(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeInterpolator value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *o1 = ::java::util::stream::t_Stream::wrap_Object(::java::util::stream::Stream(a1));
        PyObject *result = PyObject_CallMethod(obj, "interpolate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeInterpolator::initializeClass, &value))
        {
          throwTypeError("interpolate", result);
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

      static void JNICALL t_PythonFieldTimeInterpolator_pythonDecRef5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_a27fc9afd27e559d]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldTimeInterpolator::mids$[PythonFieldTimeInterpolator::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldTimeInterpolator_get__self(t_PythonFieldTimeInterpolator *self, void *data)
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
      static PyObject *t_PythonFieldTimeInterpolator_get__parameters_(t_PythonFieldTimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/DormandPrince853FieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
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
            mids$[mid_init$_f7a36558ff3a2d8e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DD[D[D)V");
            mids$[mid_init$_348f4c168cbaf312] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;DDDD)V");
            mids$[mid_getA_dd8485a0eb2e2903] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_01c7d10e96d5cf94] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_01c7d10e96d5cf94] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_f2f64475e4580546] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_createInterpolator_cc63d3ee9a54e620] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/DormandPrince853FieldStateInterpolator;");
            mids$[mid_estimateError_681c74af7b6fa1aa] = env->getMethodID(cls, "estimateError", "([[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince853FieldIntegrator::DormandPrince853FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_f7a36558ff3a2d8e, a0.this$, a1, a2, a3.this$, a4.this$)) {}

        DormandPrince853FieldIntegrator::DormandPrince853FieldIntegrator(const ::org::hipparchus::Field & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) : ::org::hipparchus::ode::nonstiff::EmbeddedRungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_348f4c168cbaf312, a0.this$, a1, a2, a3, a4)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > DormandPrince853FieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_dd8485a0eb2e2903]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > DormandPrince853FieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_01c7d10e96d5cf94]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > DormandPrince853FieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_01c7d10e96d5cf94]));
        }

        jint DormandPrince853FieldIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_f2f64475e4580546]);
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/AbstractConvergenceChecker.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
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
          mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_converged_530133671081dc04] = env->getMethodID(cls, "converged", "(ILjava/lang/Object;Ljava/lang/Object;)Z");
          mids$[mid_getAbsoluteThreshold_456d9a2f64d6b28d] = env->getMethodID(cls, "getAbsoluteThreshold", "()D");
          mids$[mid_getRelativeThreshold_456d9a2f64d6b28d] = env->getMethodID(cls, "getRelativeThreshold", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbstractConvergenceChecker::AbstractConvergenceChecker(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

      jboolean AbstractConvergenceChecker::converged(jint a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_530133671081dc04], a0, a1.this$, a2.this$);
      }

      jdouble AbstractConvergenceChecker::getAbsoluteThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAbsoluteThreshold_456d9a2f64d6b28d]);
      }

      jdouble AbstractConvergenceChecker::getRelativeThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRelativeThreshold_456d9a2f64d6b28d]);
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
#include "org/orekit/files/ilrs/CPF$CPFEphemeris.h"
#include "org/orekit/files/ilrs/CPF$CPFCoordinate.h"
#include "java/util/List.h"
#include "org/orekit/files/ilrs/CPF.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/files/ilrs/CPF$CPFEphemeris.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPF$CPFEphemeris::class$ = NULL;
        jmethodID *CPF$CPFEphemeris::mids$ = NULL;
        bool CPF$CPFEphemeris::live$ = false;

        jclass CPF$CPFEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPF$CPFEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6ad257d4efed1c41] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ilrs/CPF;Ljava/lang/String;)V");
            mids$[mid_getAvailableDerivatives_237181d932324188] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_a6156df500549a58] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getEphemeridesDataLines_a6156df500549a58] = env->getMethodID(cls, "getEphemeridesDataLines", "()Ljava/util/List;");
            mids$[mid_getFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getId_0090f7797e403f43] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_f2f64475e4580546] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getPropagator_e29a1189b47e1aad] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getPropagator_ecec515dedcdf4ce] = env->getMethodID(cls, "getPropagator", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/BoundedPropagator;");
            mids$[mid_getSegments_a6156df500549a58] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPF$CPFEphemeris::CPF$CPFEphemeris(const ::org::orekit::files::ilrs::CPF & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6ad257d4efed1c41, a0.this$, a1.this$)) {}

        ::org::orekit::utils::CartesianDerivativesFilter CPF$CPFEphemeris::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_237181d932324188]));
        }

        ::java::util::List CPF$CPFEphemeris::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_a6156df500549a58]));
        }

        ::java::util::List CPF$CPFEphemeris::getEphemeridesDataLines() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEphemeridesDataLines_a6156df500549a58]));
        }

        ::org::orekit::frames::Frame CPF$CPFEphemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_c8fe21bcdac65bf6]));
        }

        ::java::lang::String CPF$CPFEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_0090f7797e403f43]));
        }

        jint CPF$CPFEphemeris::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_f2f64475e4580546]);
        }

        jdouble CPF$CPFEphemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_456d9a2f64d6b28d]);
        }

        ::org::orekit::propagation::BoundedPropagator CPF$CPFEphemeris::getPropagator() const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_e29a1189b47e1aad]));
        }

        ::org::orekit::propagation::BoundedPropagator CPF$CPFEphemeris::getPropagator(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          return ::org::orekit::propagation::BoundedPropagator(env->callObjectMethod(this$, mids$[mid_getPropagator_ecec515dedcdf4ce], a0.this$));
        }

        ::java::util::List CPF$CPFEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_a6156df500549a58]));
        }

        ::org::orekit::time::AbsoluteDate CPF$CPFEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
        }

        ::org::orekit::time::AbsoluteDate CPF$CPFEphemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_aaa854c403487cf3]));
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
        static PyObject *t_CPF$CPFEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPF$CPFEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPF$CPFEphemeris_init_(t_CPF$CPFEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPF$CPFEphemeris_getAvailableDerivatives(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getCoordinates(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getEphemeridesDataLines(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getFrame(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getId(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getInterpolationSamples(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getMu(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getPropagator(t_CPF$CPFEphemeris *self, PyObject *args);
        static PyObject *t_CPF$CPFEphemeris_getSegments(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getStart(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_getStop(t_CPF$CPFEphemeris *self);
        static PyObject *t_CPF$CPFEphemeris_get__availableDerivatives(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__coordinates(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__ephemeridesDataLines(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__frame(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__id(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__interpolationSamples(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__mu(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__propagator(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__segments(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__start(t_CPF$CPFEphemeris *self, void *data);
        static PyObject *t_CPF$CPFEphemeris_get__stop(t_CPF$CPFEphemeris *self, void *data);
        static PyGetSetDef t_CPF$CPFEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, availableDerivatives),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, coordinates),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, ephemeridesDataLines),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, frame),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, id),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, interpolationSamples),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, mu),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, propagator),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, segments),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, start),
          DECLARE_GET_FIELD(t_CPF$CPFEphemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CPF$CPFEphemeris__methods_[] = {
          DECLARE_METHOD(t_CPF$CPFEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getEphemeridesDataLines, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getPropagator, METH_VARARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_CPF$CPFEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPF$CPFEphemeris)[] = {
          { Py_tp_methods, t_CPF$CPFEphemeris__methods_ },
          { Py_tp_init, (void *) t_CPF$CPFEphemeris_init_ },
          { Py_tp_getset, t_CPF$CPFEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPF$CPFEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CPF$CPFEphemeris, t_CPF$CPFEphemeris, CPF$CPFEphemeris);

        void t_CPF$CPFEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(CPF$CPFEphemeris), &PY_TYPE_DEF(CPF$CPFEphemeris), module, "CPF$CPFEphemeris", 0);
        }

        void t_CPF$CPFEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFEphemeris), "class_", make_descriptor(CPF$CPFEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFEphemeris), "wrapfn_", make_descriptor(t_CPF$CPFEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPF$CPFEphemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPF$CPFEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPF$CPFEphemeris::initializeClass, 1)))
            return NULL;
          return t_CPF$CPFEphemeris::wrap_Object(CPF$CPFEphemeris(((t_CPF$CPFEphemeris *) arg)->object.this$));
        }
        static PyObject *t_CPF$CPFEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPF$CPFEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPF$CPFEphemeris_init_(t_CPF$CPFEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::files::ilrs::CPF a0((jobject) NULL);
          ::java::lang::String a1((jobject) NULL);
          CPF$CPFEphemeris object((jobject) NULL);

          if (!parseArgs(args, "ks", ::org::orekit::files::ilrs::CPF::initializeClass, &a0, &a1))
          {
            INT_CALL(object = CPF$CPFEphemeris(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CPF$CPFEphemeris_getAvailableDerivatives(t_CPF$CPFEphemeris *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_CPF$CPFEphemeris_getCoordinates(t_CPF$CPFEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CPF$CPFCoordinate));
        }

        static PyObject *t_CPF$CPFEphemeris_getEphemeridesDataLines(t_CPF$CPFEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getEphemeridesDataLines());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CPF$CPFCoordinate));
        }

        static PyObject *t_CPF$CPFEphemeris_getFrame(t_CPF$CPFEphemeris *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_CPF$CPFEphemeris_getId(t_CPF$CPFEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_CPF$CPFEphemeris_getInterpolationSamples(t_CPF$CPFEphemeris *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CPF$CPFEphemeris_getMu(t_CPF$CPFEphemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CPF$CPFEphemeris_getPropagator(t_CPF$CPFEphemeris *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);
              OBJ_CALL(result = self->object.getPropagator());
              return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
              ::org::orekit::propagation::BoundedPropagator result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getPropagator(a0));
                return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getPropagator", args);
          return NULL;
        }

        static PyObject *t_CPF$CPFEphemeris_getSegments(t_CPF$CPFEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CPF$CPFEphemeris));
        }

        static PyObject *t_CPF$CPFEphemeris_getStart(t_CPF$CPFEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CPF$CPFEphemeris_getStop(t_CPF$CPFEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CPF$CPFEphemeris_get__availableDerivatives(t_CPF$CPFEphemeris *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__coordinates(t_CPF$CPFEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__ephemeridesDataLines(t_CPF$CPFEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getEphemeridesDataLines());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__frame(t_CPF$CPFEphemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__id(t_CPF$CPFEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__interpolationSamples(t_CPF$CPFEphemeris *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__mu(t_CPF$CPFEphemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__propagator(t_CPF$CPFEphemeris *self, void *data)
        {
          ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_BoundedPropagator::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__segments(t_CPF$CPFEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__start(t_CPF$CPFEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CPF$CPFEphemeris_get__stop(t_CPF$CPFEphemeris *self, void *data)
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
#include "org/orekit/data/LazyLoadedDataContext.h"
#include "org/orekit/time/LazyLoadedTimeScales.h"
#include "org/orekit/forces/gravity/potential/LazyLoadedGravityFields.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/bodies/LazyLoadedCelestialBodies.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/frames/LazyLoadedFrames.h"
#include "org/orekit/models/earth/LazyLoadedGeoMagneticFields.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_getCelestialBodies_f685d2a163f9f12b] = env->getMethodID(cls, "getCelestialBodies", "()Lorg/orekit/bodies/LazyLoadedCelestialBodies;");
          mids$[mid_getDataProvidersManager_e1fc6728282cfec7] = env->getMethodID(cls, "getDataProvidersManager", "()Lorg/orekit/data/DataProvidersManager;");
          mids$[mid_getFrames_279cf148ff8a6939] = env->getMethodID(cls, "getFrames", "()Lorg/orekit/frames/LazyLoadedFrames;");
          mids$[mid_getGeoMagneticFields_2e55f41473500ba6] = env->getMethodID(cls, "getGeoMagneticFields", "()Lorg/orekit/models/earth/LazyLoadedGeoMagneticFields;");
          mids$[mid_getGravityFields_4859dab0854ea5fb] = env->getMethodID(cls, "getGravityFields", "()Lorg/orekit/forces/gravity/potential/LazyLoadedGravityFields;");
          mids$[mid_getTimeScales_8c0eab743ddad863] = env->getMethodID(cls, "getTimeScales", "()Lorg/orekit/time/LazyLoadedTimeScales;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LazyLoadedDataContext::LazyLoadedDataContext() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

      ::org::orekit::bodies::LazyLoadedCelestialBodies LazyLoadedDataContext::getCelestialBodies() const
      {
        return ::org::orekit::bodies::LazyLoadedCelestialBodies(env->callObjectMethod(this$, mids$[mid_getCelestialBodies_f685d2a163f9f12b]));
      }

      ::org::orekit::data::DataProvidersManager LazyLoadedDataContext::getDataProvidersManager() const
      {
        return ::org::orekit::data::DataProvidersManager(env->callObjectMethod(this$, mids$[mid_getDataProvidersManager_e1fc6728282cfec7]));
      }

      ::org::orekit::frames::LazyLoadedFrames LazyLoadedDataContext::getFrames() const
      {
        return ::org::orekit::frames::LazyLoadedFrames(env->callObjectMethod(this$, mids$[mid_getFrames_279cf148ff8a6939]));
      }

      ::org::orekit::models::earth::LazyLoadedGeoMagneticFields LazyLoadedDataContext::getGeoMagneticFields() const
      {
        return ::org::orekit::models::earth::LazyLoadedGeoMagneticFields(env->callObjectMethod(this$, mids$[mid_getGeoMagneticFields_2e55f41473500ba6]));
      }

      ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields LazyLoadedDataContext::getGravityFields() const
      {
        return ::org::orekit::forces::gravity::potential::LazyLoadedGravityFields(env->callObjectMethod(this$, mids$[mid_getGravityFields_4859dab0854ea5fb]));
      }

      ::org::orekit::time::LazyLoadedTimeScales LazyLoadedDataContext::getTimeScales() const
      {
        return ::org::orekit::time::LazyLoadedTimeScales(env->callObjectMethod(this$, mids$[mid_getTimeScales_8c0eab743ddad863]));
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
#include "org/orekit/rugged/api/EllipsoidId.h"
#include "org/orekit/rugged/api/EllipsoidId.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *EllipsoidId::class$ = NULL;
        jmethodID *EllipsoidId::mids$ = NULL;
        bool EllipsoidId::live$ = false;
        EllipsoidId *EllipsoidId::GRS80 = NULL;
        EllipsoidId *EllipsoidId::IERS2003 = NULL;
        EllipsoidId *EllipsoidId::IERS96 = NULL;
        EllipsoidId *EllipsoidId::WGS84 = NULL;

        jclass EllipsoidId::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/EllipsoidId");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_cdc3195a7e94b902] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/rugged/api/EllipsoidId;");
            mids$[mid_values_525c745fa8cc71ae] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/rugged/api/EllipsoidId;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            GRS80 = new EllipsoidId(env->getStaticObjectField(cls, "GRS80", "Lorg/orekit/rugged/api/EllipsoidId;"));
            IERS2003 = new EllipsoidId(env->getStaticObjectField(cls, "IERS2003", "Lorg/orekit/rugged/api/EllipsoidId;"));
            IERS96 = new EllipsoidId(env->getStaticObjectField(cls, "IERS96", "Lorg/orekit/rugged/api/EllipsoidId;"));
            WGS84 = new EllipsoidId(env->getStaticObjectField(cls, "WGS84", "Lorg/orekit/rugged/api/EllipsoidId;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EllipsoidId EllipsoidId::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return EllipsoidId(env->callStaticObjectMethod(cls, mids$[mid_valueOf_cdc3195a7e94b902], a0.this$));
        }

        JArray< EllipsoidId > EllipsoidId::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< EllipsoidId >(env->callStaticObjectMethod(cls, mids$[mid_values_525c745fa8cc71ae]));
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
      namespace api {
        static PyObject *t_EllipsoidId_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EllipsoidId_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EllipsoidId_of_(t_EllipsoidId *self, PyObject *args);
        static PyObject *t_EllipsoidId_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_EllipsoidId_values(PyTypeObject *type);
        static PyObject *t_EllipsoidId_get__parameters_(t_EllipsoidId *self, void *data);
        static PyGetSetDef t_EllipsoidId__fields_[] = {
          DECLARE_GET_FIELD(t_EllipsoidId, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EllipsoidId__methods_[] = {
          DECLARE_METHOD(t_EllipsoidId, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EllipsoidId, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EllipsoidId, of_, METH_VARARGS),
          DECLARE_METHOD(t_EllipsoidId, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_EllipsoidId, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EllipsoidId)[] = {
          { Py_tp_methods, t_EllipsoidId__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EllipsoidId__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EllipsoidId)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(EllipsoidId, t_EllipsoidId, EllipsoidId);
        PyObject *t_EllipsoidId::wrap_Object(const EllipsoidId& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EllipsoidId::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EllipsoidId *self = (t_EllipsoidId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EllipsoidId::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EllipsoidId::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EllipsoidId *self = (t_EllipsoidId *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EllipsoidId::install(PyObject *module)
        {
          installType(&PY_TYPE(EllipsoidId), &PY_TYPE_DEF(EllipsoidId), module, "EllipsoidId", 0);
        }

        void t_EllipsoidId::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "class_", make_descriptor(EllipsoidId::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "wrapfn_", make_descriptor(t_EllipsoidId::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "boxfn_", make_descriptor(boxObject));
          env->getClass(EllipsoidId::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "GRS80", make_descriptor(t_EllipsoidId::wrap_Object(*EllipsoidId::GRS80)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "IERS2003", make_descriptor(t_EllipsoidId::wrap_Object(*EllipsoidId::IERS2003)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "IERS96", make_descriptor(t_EllipsoidId::wrap_Object(*EllipsoidId::IERS96)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EllipsoidId), "WGS84", make_descriptor(t_EllipsoidId::wrap_Object(*EllipsoidId::WGS84)));
        }

        static PyObject *t_EllipsoidId_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EllipsoidId::initializeClass, 1)))
            return NULL;
          return t_EllipsoidId::wrap_Object(EllipsoidId(((t_EllipsoidId *) arg)->object.this$));
        }
        static PyObject *t_EllipsoidId_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EllipsoidId::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EllipsoidId_of_(t_EllipsoidId *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EllipsoidId_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          EllipsoidId result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::rugged::api::EllipsoidId::valueOf(a0));
            return t_EllipsoidId::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_EllipsoidId_values(PyTypeObject *type)
        {
          JArray< EllipsoidId > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::rugged::api::EllipsoidId::values());
          return JArray<jobject>(result.this$).wrap(t_EllipsoidId::wrap_jobject);
        }
        static PyObject *t_EllipsoidId_get__parameters_(t_EllipsoidId *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Log1p.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
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
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Log1p::Log1p() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Log1p::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Log1p::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace vector {
          namespace leastsquares {

            ::java::lang::Class *LeastSquaresProblem$Evaluation::class$ = NULL;
            jmethodID *LeastSquaresProblem$Evaluation::mids$ = NULL;
            bool LeastSquaresProblem$Evaluation::live$ = false;

            jclass LeastSquaresProblem$Evaluation::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresProblem$Evaluation");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getChiSquare_456d9a2f64d6b28d] = env->getMethodID(cls, "getChiSquare", "()D");
                mids$[mid_getCost_456d9a2f64d6b28d] = env->getMethodID(cls, "getCost", "()D");
                mids$[mid_getCovariances_2461b653ab91779b] = env->getMethodID(cls, "getCovariances", "(D)Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_getJacobian_7116bbecdd8ceb21] = env->getMethodID(cls, "getJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
                mids$[mid_getPoint_6d9adf1d5b463928] = env->getMethodID(cls, "getPoint", "()Lorg/hipparchus/linear/RealVector;");
                mids$[mid_getRMS_456d9a2f64d6b28d] = env->getMethodID(cls, "getRMS", "()D");
                mids$[mid_getReducedChiSquare_b772323fc98b7293] = env->getMethodID(cls, "getReducedChiSquare", "(I)D");
                mids$[mid_getResiduals_6d9adf1d5b463928] = env->getMethodID(cls, "getResiduals", "()Lorg/hipparchus/linear/RealVector;");
                mids$[mid_getSigma_247afd2de476d613] = env->getMethodID(cls, "getSigma", "(D)Lorg/hipparchus/linear/RealVector;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jdouble LeastSquaresProblem$Evaluation::getChiSquare() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getChiSquare_456d9a2f64d6b28d]);
            }

            jdouble LeastSquaresProblem$Evaluation::getCost() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getCost_456d9a2f64d6b28d]);
            }

            ::org::hipparchus::linear::RealMatrix LeastSquaresProblem$Evaluation::getCovariances(jdouble a0) const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariances_2461b653ab91779b], a0));
            }

            ::org::hipparchus::linear::RealMatrix LeastSquaresProblem$Evaluation::getJacobian() const
            {
              return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getJacobian_7116bbecdd8ceb21]));
            }

            ::org::hipparchus::linear::RealVector LeastSquaresProblem$Evaluation::getPoint() const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPoint_6d9adf1d5b463928]));
            }

            jdouble LeastSquaresProblem$Evaluation::getRMS() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRMS_456d9a2f64d6b28d]);
            }

            jdouble LeastSquaresProblem$Evaluation::getReducedChiSquare(jint a0) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getReducedChiSquare_b772323fc98b7293], a0);
            }

            ::org::hipparchus::linear::RealVector LeastSquaresProblem$Evaluation::getResiduals() const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getResiduals_6d9adf1d5b463928]));
            }

            ::org::hipparchus::linear::RealVector LeastSquaresProblem$Evaluation::getSigma(jdouble a0) const
            {
              return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSigma_247afd2de476d613], a0));
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
            static PyObject *t_LeastSquaresProblem$Evaluation_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_getChiSquare(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getCost(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getCovariances(t_LeastSquaresProblem$Evaluation *self, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_getJacobian(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getPoint(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getRMS(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getReducedChiSquare(t_LeastSquaresProblem$Evaluation *self, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_getResiduals(t_LeastSquaresProblem$Evaluation *self);
            static PyObject *t_LeastSquaresProblem$Evaluation_getSigma(t_LeastSquaresProblem$Evaluation *self, PyObject *arg);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__chiSquare(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__cost(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__jacobian(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__point(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__rMS(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyObject *t_LeastSquaresProblem$Evaluation_get__residuals(t_LeastSquaresProblem$Evaluation *self, void *data);
            static PyGetSetDef t_LeastSquaresProblem$Evaluation__fields_[] = {
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, chiSquare),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, cost),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, jacobian),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, point),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, rMS),
              DECLARE_GET_FIELD(t_LeastSquaresProblem$Evaluation, residuals),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LeastSquaresProblem$Evaluation__methods_[] = {
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getChiSquare, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getCost, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getCovariances, METH_O),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getJacobian, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getPoint, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getRMS, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getReducedChiSquare, METH_O),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getResiduals, METH_NOARGS),
              DECLARE_METHOD(t_LeastSquaresProblem$Evaluation, getSigma, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LeastSquaresProblem$Evaluation)[] = {
              { Py_tp_methods, t_LeastSquaresProblem$Evaluation__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_LeastSquaresProblem$Evaluation__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LeastSquaresProblem$Evaluation)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(LeastSquaresProblem$Evaluation, t_LeastSquaresProblem$Evaluation, LeastSquaresProblem$Evaluation);

            void t_LeastSquaresProblem$Evaluation::install(PyObject *module)
            {
              installType(&PY_TYPE(LeastSquaresProblem$Evaluation), &PY_TYPE_DEF(LeastSquaresProblem$Evaluation), module, "LeastSquaresProblem$Evaluation", 0);
            }

            void t_LeastSquaresProblem$Evaluation::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem$Evaluation), "class_", make_descriptor(LeastSquaresProblem$Evaluation::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem$Evaluation), "wrapfn_", make_descriptor(t_LeastSquaresProblem$Evaluation::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LeastSquaresProblem$Evaluation), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LeastSquaresProblem$Evaluation::initializeClass, 1)))
                return NULL;
              return t_LeastSquaresProblem$Evaluation::wrap_Object(LeastSquaresProblem$Evaluation(((t_LeastSquaresProblem$Evaluation *) arg)->object.this$));
            }
            static PyObject *t_LeastSquaresProblem$Evaluation_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LeastSquaresProblem$Evaluation::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getChiSquare(t_LeastSquaresProblem$Evaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getChiSquare());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getCost(t_LeastSquaresProblem$Evaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getCost());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getCovariances(t_LeastSquaresProblem$Evaluation *self, PyObject *arg)
            {
              jdouble a0;
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getCovariances(a0));
                return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getCovariances", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getJacobian(t_LeastSquaresProblem$Evaluation *self)
            {
              ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
              OBJ_CALL(result = self->object.getJacobian());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getPoint(t_LeastSquaresProblem$Evaluation *self)
            {
              ::org::hipparchus::linear::RealVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getPoint());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getRMS(t_LeastSquaresProblem$Evaluation *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRMS());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getReducedChiSquare(t_LeastSquaresProblem$Evaluation *self, PyObject *arg)
            {
              jint a0;
              jdouble result;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(result = self->object.getReducedChiSquare(a0));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getReducedChiSquare", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getResiduals(t_LeastSquaresProblem$Evaluation *self)
            {
              ::org::hipparchus::linear::RealVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getResiduals());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_getSigma(t_LeastSquaresProblem$Evaluation *self, PyObject *arg)
            {
              jdouble a0;
              ::org::hipparchus::linear::RealVector result((jobject) NULL);

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(result = self->object.getSigma(a0));
                return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getSigma", arg);
              return NULL;
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__chiSquare(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getChiSquare());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__cost(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getCost());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__jacobian(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
              OBJ_CALL(value = self->object.getJacobian());
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__point(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              ::org::hipparchus::linear::RealVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getPoint());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__rMS(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRMS());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_LeastSquaresProblem$Evaluation_get__residuals(t_LeastSquaresProblem$Evaluation *self, void *data)
            {
              ::org::hipparchus::linear::RealVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getResiduals());
              return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmHeader.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmSegment.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmMetadata.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *Cdm::class$ = NULL;
            jmethodID *Cdm::mids$ = NULL;
            bool Cdm::live$ = false;
            ::java::lang::String *Cdm::FORMAT_VERSION_KEY = NULL;
            ::java::lang::String *Cdm::ROOT = NULL;

            jclass Cdm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/Cdm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a34e1d2d5ade684b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                mids$[mid_getDataObject1_336753ea3523a1cf] = env->getMethodID(cls, "getDataObject1", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmData;");
                mids$[mid_getDataObject2_336753ea3523a1cf] = env->getMethodID(cls, "getDataObject2", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmData;");
                mids$[mid_getMetadataObject1_bced7a5677927e3c] = env->getMethodID(cls, "getMetadataObject1", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;");
                mids$[mid_getMetadataObject2_bced7a5677927e3c] = env->getMethodID(cls, "getMetadataObject2", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;");
                mids$[mid_getRelativeMetadata_f8673e4c3b4aceb6] = env->getMethodID(cls, "getRelativeMetadata", "()Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;");
                mids$[mid_getUserDefinedParameters_dc0ba09fd1c52b52] = env->getMethodID(cls, "getUserDefinedParameters", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            Cdm::Cdm(const ::org::orekit::files::ccsds::ndm::cdm::CdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_a34e1d2d5ade684b, a0.this$, a1.this$, a2.this$, a3.this$)) {}

            ::org::orekit::files::ccsds::ndm::cdm::CdmData Cdm::getDataObject1() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmData(env->callObjectMethod(this$, mids$[mid_getDataObject1_336753ea3523a1cf]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmData Cdm::getDataObject2() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmData(env->callObjectMethod(this$, mids$[mid_getDataObject2_336753ea3523a1cf]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata Cdm::getMetadataObject1() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadataObject1_bced7a5677927e3c]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata Cdm::getMetadataObject2() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadataObject2_bced7a5677927e3c]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata Cdm::getRelativeMetadata() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata(env->callObjectMethod(this$, mids$[mid_getRelativeMetadata_f8673e4c3b4aceb6]));
            }

            ::org::orekit::files::ccsds::ndm::odm::UserDefined Cdm::getUserDefinedParameters() const
            {
              return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedParameters_dc0ba09fd1c52b52]));
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
            static PyObject *t_Cdm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Cdm_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Cdm_of_(t_Cdm *self, PyObject *args);
            static int t_Cdm_init_(t_Cdm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_Cdm_getDataObject1(t_Cdm *self);
            static PyObject *t_Cdm_getDataObject2(t_Cdm *self);
            static PyObject *t_Cdm_getMetadataObject1(t_Cdm *self);
            static PyObject *t_Cdm_getMetadataObject2(t_Cdm *self);
            static PyObject *t_Cdm_getRelativeMetadata(t_Cdm *self);
            static PyObject *t_Cdm_getUserDefinedParameters(t_Cdm *self);
            static PyObject *t_Cdm_get__dataObject1(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__dataObject2(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__metadataObject1(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__metadataObject2(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__relativeMetadata(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__userDefinedParameters(t_Cdm *self, void *data);
            static PyObject *t_Cdm_get__parameters_(t_Cdm *self, void *data);
            static PyGetSetDef t_Cdm__fields_[] = {
              DECLARE_GET_FIELD(t_Cdm, dataObject1),
              DECLARE_GET_FIELD(t_Cdm, dataObject2),
              DECLARE_GET_FIELD(t_Cdm, metadataObject1),
              DECLARE_GET_FIELD(t_Cdm, metadataObject2),
              DECLARE_GET_FIELD(t_Cdm, relativeMetadata),
              DECLARE_GET_FIELD(t_Cdm, userDefinedParameters),
              DECLARE_GET_FIELD(t_Cdm, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_Cdm__methods_[] = {
              DECLARE_METHOD(t_Cdm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Cdm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Cdm, of_, METH_VARARGS),
              DECLARE_METHOD(t_Cdm, getDataObject1, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getDataObject2, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getMetadataObject1, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getMetadataObject2, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getRelativeMetadata, METH_NOARGS),
              DECLARE_METHOD(t_Cdm, getUserDefinedParameters, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Cdm)[] = {
              { Py_tp_methods, t_Cdm__methods_ },
              { Py_tp_init, (void *) t_Cdm_init_ },
              { Py_tp_getset, t_Cdm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Cdm)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::NdmConstituent),
              NULL
            };

            DEFINE_TYPE(Cdm, t_Cdm, Cdm);
            PyObject *t_Cdm::wrap_Object(const Cdm& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_Cdm::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Cdm *self = (t_Cdm *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_Cdm::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_Cdm::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_Cdm *self = (t_Cdm *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_Cdm::install(PyObject *module)
            {
              installType(&PY_TYPE(Cdm), &PY_TYPE_DEF(Cdm), module, "Cdm", 0);
            }

            void t_Cdm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "class_", make_descriptor(Cdm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "wrapfn_", make_descriptor(t_Cdm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "boxfn_", make_descriptor(boxObject));
              env->getClass(Cdm::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "FORMAT_VERSION_KEY", make_descriptor(j2p(*Cdm::FORMAT_VERSION_KEY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Cdm), "ROOT", make_descriptor(j2p(*Cdm::ROOT)));
            }

            static PyObject *t_Cdm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Cdm::initializeClass, 1)))
                return NULL;
              return t_Cdm::wrap_Object(Cdm(((t_Cdm *) arg)->object.this$));
            }
            static PyObject *t_Cdm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Cdm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Cdm_of_(t_Cdm *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_Cdm_init_(t_Cdm *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmHeader a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::IERSConventions a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::data::DataContext a3((jobject) NULL);
              Cdm object((jobject) NULL);

              if (!parseArgs(args, "kKKk", ::org::orekit::files::ccsds::ndm::cdm::CdmHeader::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3))
              {
                INT_CALL(object = Cdm(a0, a1, a2, a3));
                self->object = object;
                self->parameters[0] = ::org::orekit::files::ccsds::ndm::cdm::PY_TYPE(CdmHeader);
                self->parameters[1] = ::org::orekit::files::ccsds::ndm::cdm::PY_TYPE(CdmSegment);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_Cdm_getDataObject1(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmData result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataObject1());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmData::wrap_Object(result);
            }

            static PyObject *t_Cdm_getDataObject2(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmData result((jobject) NULL);
              OBJ_CALL(result = self->object.getDataObject2());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmData::wrap_Object(result);
            }

            static PyObject *t_Cdm_getMetadataObject1(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getMetadataObject1());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmMetadata::wrap_Object(result);
            }

            static PyObject *t_Cdm_getMetadataObject2(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getMetadataObject2());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmMetadata::wrap_Object(result);
            }

            static PyObject *t_Cdm_getRelativeMetadata(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getRelativeMetadata());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmRelativeMetadata::wrap_Object(result);
            }

            static PyObject *t_Cdm_getUserDefinedParameters(t_Cdm *self)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
              OBJ_CALL(result = self->object.getUserDefinedParameters());
              return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
            }
            static PyObject *t_Cdm_get__parameters_(t_Cdm *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_Cdm_get__dataObject1(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmData value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataObject1());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmData::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__dataObject2(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmData value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataObject2());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmData::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__metadataObject1(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getMetadataObject1());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmMetadata::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__metadataObject2(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getMetadataObject2());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmMetadata::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__relativeMetadata(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getRelativeMetadata());
              return ::org::orekit::files::ccsds::ndm::cdm::t_CdmRelativeMetadata::wrap_Object(value);
            }

            static PyObject *t_Cdm_get__userDefinedParameters(t_Cdm *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
              OBJ_CALL(value = self->object.getUserDefinedParameters());
              return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/DragSensitive.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *DragSensitive::class$ = NULL;
        jmethodID *DragSensitive::mids$ = NULL;
        bool DragSensitive::live$ = false;
        ::java::lang::String *DragSensitive::DRAG_COEFFICIENT = NULL;
        ::java::lang::String *DragSensitive::GLOBAL_DRAG_FACTOR = NULL;
        ::java::lang::String *DragSensitive::LIFT_RATIO = NULL;

        jclass DragSensitive::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/DragSensitive");

            mids$ = new jmethodID[max_mid];
            mids$[mid_dragAcceleration_72c100be3e679e5e] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dragAcceleration_3061f9a13979e9fa] = env->getMethodID(cls, "dragAcceleration", "(Lorg/orekit/propagation/SpacecraftState;DLorg/hipparchus/geometry/euclidean/threed/Vector3D;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getDragParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getDragParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DRAG_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "DRAG_COEFFICIENT", "Ljava/lang/String;"));
            GLOBAL_DRAG_FACTOR = new ::java::lang::String(env->getStaticObjectField(cls, "GLOBAL_DRAG_FACTOR", "Ljava/lang/String;"));
            LIFT_RATIO = new ::java::lang::String(env->getStaticObjectField(cls, "LIFT_RATIO", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D DragSensitive::dragAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_72c100be3e679e5e], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D DragSensitive::dragAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, jdouble a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const JArray< jdouble > & a3) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_dragAcceleration_3061f9a13979e9fa], a0.this$, a1, a2.this$, a3.this$));
        }

        ::java::util::List DragSensitive::getDragParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDragParametersDrivers_a6156df500549a58]));
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
      namespace drag {
        static PyObject *t_DragSensitive_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DragSensitive_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DragSensitive_dragAcceleration(t_DragSensitive *self, PyObject *args);
        static PyObject *t_DragSensitive_getDragParametersDrivers(t_DragSensitive *self);
        static PyObject *t_DragSensitive_get__dragParametersDrivers(t_DragSensitive *self, void *data);
        static PyGetSetDef t_DragSensitive__fields_[] = {
          DECLARE_GET_FIELD(t_DragSensitive, dragParametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DragSensitive__methods_[] = {
          DECLARE_METHOD(t_DragSensitive, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DragSensitive, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DragSensitive, dragAcceleration, METH_VARARGS),
          DECLARE_METHOD(t_DragSensitive, getDragParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DragSensitive)[] = {
          { Py_tp_methods, t_DragSensitive__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DragSensitive__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DragSensitive)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DragSensitive, t_DragSensitive, DragSensitive);

        void t_DragSensitive::install(PyObject *module)
        {
          installType(&PY_TYPE(DragSensitive), &PY_TYPE_DEF(DragSensitive), module, "DragSensitive", 0);
        }

        void t_DragSensitive::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "class_", make_descriptor(DragSensitive::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "wrapfn_", make_descriptor(t_DragSensitive::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "boxfn_", make_descriptor(boxObject));
          env->getClass(DragSensitive::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "DRAG_COEFFICIENT", make_descriptor(j2p(*DragSensitive::DRAG_COEFFICIENT)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "GLOBAL_DRAG_FACTOR", make_descriptor(j2p(*DragSensitive::GLOBAL_DRAG_FACTOR)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DragSensitive), "LIFT_RATIO", make_descriptor(j2p(*DragSensitive::LIFT_RATIO)));
        }

        static PyObject *t_DragSensitive_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DragSensitive::initializeClass, 1)))
            return NULL;
          return t_DragSensitive::wrap_Object(DragSensitive(((t_DragSensitive *) arg)->object.this$));
        }
        static PyObject *t_DragSensitive_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DragSensitive::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DragSensitive_dragAcceleration(t_DragSensitive *self, PyObject *args)
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

        static PyObject *t_DragSensitive_getDragParametersDrivers(t_DragSensitive *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDragParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_DragSensitive_get__dragParametersDrivers(t_DragSensitive *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDragParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RealLinearOperator.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/UnsupportedOperationException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RealLinearOperator::class$ = NULL;
      jmethodID *RealLinearOperator::mids$ = NULL;
      bool RealLinearOperator::live$ = false;

      jclass RealLinearOperator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RealLinearOperator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getColumnDimension_f2f64475e4580546] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getRowDimension_f2f64475e4580546] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_isTransposable_e470b6d9e0d979db] = env->getMethodID(cls, "isTransposable", "()Z");
          mids$[mid_operate_a3e626dfa1abd779] = env->getMethodID(cls, "operate", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_operateTranspose_a3e626dfa1abd779] = env->getMethodID(cls, "operateTranspose", "(Lorg/hipparchus/linear/RealVector;)Lorg/hipparchus/linear/RealVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint RealLinearOperator::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_f2f64475e4580546]);
      }

      jint RealLinearOperator::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_f2f64475e4580546]);
      }

      jboolean RealLinearOperator::isTransposable() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isTransposable_e470b6d9e0d979db]);
      }

      ::org::hipparchus::linear::RealVector RealLinearOperator::operate(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operate_a3e626dfa1abd779], a0.this$));
      }

      ::org::hipparchus::linear::RealVector RealLinearOperator::operateTranspose(const ::org::hipparchus::linear::RealVector & a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_operateTranspose_a3e626dfa1abd779], a0.this$));
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
      static PyObject *t_RealLinearOperator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealLinearOperator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RealLinearOperator_getColumnDimension(t_RealLinearOperator *self);
      static PyObject *t_RealLinearOperator_getRowDimension(t_RealLinearOperator *self);
      static PyObject *t_RealLinearOperator_isTransposable(t_RealLinearOperator *self);
      static PyObject *t_RealLinearOperator_operate(t_RealLinearOperator *self, PyObject *arg);
      static PyObject *t_RealLinearOperator_operateTranspose(t_RealLinearOperator *self, PyObject *arg);
      static PyObject *t_RealLinearOperator_get__columnDimension(t_RealLinearOperator *self, void *data);
      static PyObject *t_RealLinearOperator_get__rowDimension(t_RealLinearOperator *self, void *data);
      static PyObject *t_RealLinearOperator_get__transposable(t_RealLinearOperator *self, void *data);
      static PyGetSetDef t_RealLinearOperator__fields_[] = {
        DECLARE_GET_FIELD(t_RealLinearOperator, columnDimension),
        DECLARE_GET_FIELD(t_RealLinearOperator, rowDimension),
        DECLARE_GET_FIELD(t_RealLinearOperator, transposable),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RealLinearOperator__methods_[] = {
        DECLARE_METHOD(t_RealLinearOperator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealLinearOperator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RealLinearOperator, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_RealLinearOperator, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_RealLinearOperator, isTransposable, METH_NOARGS),
        DECLARE_METHOD(t_RealLinearOperator, operate, METH_O),
        DECLARE_METHOD(t_RealLinearOperator, operateTranspose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RealLinearOperator)[] = {
        { Py_tp_methods, t_RealLinearOperator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_RealLinearOperator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RealLinearOperator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RealLinearOperator, t_RealLinearOperator, RealLinearOperator);

      void t_RealLinearOperator::install(PyObject *module)
      {
        installType(&PY_TYPE(RealLinearOperator), &PY_TYPE_DEF(RealLinearOperator), module, "RealLinearOperator", 0);
      }

      void t_RealLinearOperator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealLinearOperator), "class_", make_descriptor(RealLinearOperator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealLinearOperator), "wrapfn_", make_descriptor(t_RealLinearOperator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RealLinearOperator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RealLinearOperator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RealLinearOperator::initializeClass, 1)))
          return NULL;
        return t_RealLinearOperator::wrap_Object(RealLinearOperator(((t_RealLinearOperator *) arg)->object.this$));
      }
      static PyObject *t_RealLinearOperator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RealLinearOperator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_RealLinearOperator_getColumnDimension(t_RealLinearOperator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealLinearOperator_getRowDimension(t_RealLinearOperator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RealLinearOperator_isTransposable(t_RealLinearOperator *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isTransposable());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_RealLinearOperator_operate(t_RealLinearOperator *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.operate(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "operate", arg);
        return NULL;
      }

      static PyObject *t_RealLinearOperator_operateTranspose(t_RealLinearOperator *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealVector::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.operateTranspose(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "operateTranspose", arg);
        return NULL;
      }

      static PyObject *t_RealLinearOperator_get__columnDimension(t_RealLinearOperator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealLinearOperator_get__rowDimension(t_RealLinearOperator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RealLinearOperator_get__transposable(t_RealLinearOperator *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isTransposable());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/SubLine.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Line::class$ = NULL;
          jmethodID *Line::mids$ = NULL;
          bool Line::live$ = false;

          jclass Line::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Line");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7b3ba1964c11031c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_closestPoint_26c38ef25f8d6fd7] = env->getMethodID(cls, "closestPoint", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_contains_c8fb5394ceb559de] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Z");
              mids$[mid_distance_9631d63e1e207976] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)D");
              mids$[mid_distance_80b2470b9511edd1] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_fromDirection_d50cb83cce4f328e] = env->getStaticMethodID(cls, "fromDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)Lorg/hipparchus/geometry/euclidean/threed/Line;");
              mids$[mid_getAbscissa_80b2470b9511edd1] = env->getMethodID(cls, "getAbscissa", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)D");
              mids$[mid_getDirection_17a952530a808943] = env->getMethodID(cls, "getDirection", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getOrigin_17a952530a808943] = env->getMethodID(cls, "getOrigin", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getTolerance_456d9a2f64d6b28d] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_intersection_26c38ef25f8d6fd7] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_isSimilarTo_d51b9d9c9584654a] = env->getMethodID(cls, "isSimilarTo", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Z");
              mids$[mid_pointAt_5f993a721a1d8c59] = env->getMethodID(cls, "pointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_reset_bedd188d9f399c34] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_revert_927626ac26078f4f] = env->getMethodID(cls, "revert", "()Lorg/hipparchus/geometry/euclidean/threed/Line;");
              mids$[mid_toSpace_a49086d4148c0139] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toSpace_7a21411cb28c8c28] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toSubSpace_f56ff726ce04194f] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_toSubSpace_32bf1487354a978b] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_wholeLine_6979bc19b5e872ae] = env->getMethodID(cls, "wholeLine", "()Lorg/hipparchus/geometry/euclidean/threed/SubLine;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Line::Line(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7b3ba1964c11031c, a0.this$, a1.this$, a2)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::closestPoint(const Line & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_closestPoint_26c38ef25f8d6fd7], a0.this$));
          }

          jboolean Line::contains(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_c8fb5394ceb559de], a0.this$);
          }

          jdouble Line::distance(const Line & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_9631d63e1e207976], a0.this$);
          }

          jdouble Line::distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_80b2470b9511edd1], a0.this$);
          }

          Line Line::fromDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return Line(env->callStaticObjectMethod(cls, mids$[mid_fromDirection_d50cb83cce4f328e], a0.this$, a1.this$, a2));
          }

          jdouble Line::getAbscissa(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAbscissa_80b2470b9511edd1], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::getDirection() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_17a952530a808943]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::getOrigin() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getOrigin_17a952530a808943]));
          }

          jdouble Line::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_456d9a2f64d6b28d]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::intersection(const Line & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_intersection_26c38ef25f8d6fd7], a0.this$));
          }

          jboolean Line::isSimilarTo(const Line & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimilarTo_d51b9d9c9584654a], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::pointAt(jdouble a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_pointAt_5f993a721a1d8c59], a0));
          }

          void Line::reset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_bedd188d9f399c34], a0.this$, a1.this$);
          }

          Line Line::revert() const
          {
            return Line(env->callObjectMethod(this$, mids$[mid_revert_927626ac26078f4f]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::toSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_a49086d4148c0139], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Line::toSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_7a21411cb28c8c28], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Line::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_toSubSpace_f56ff726ce04194f], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D Line::toSubSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_toSubSpace_32bf1487354a978b], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::SubLine Line::wholeLine() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::SubLine(env->callObjectMethod(this$, mids$[mid_wholeLine_6979bc19b5e872ae]));
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
          static PyObject *t_Line_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Line_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Line_init_(t_Line *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Line_closestPoint(t_Line *self, PyObject *arg);
          static PyObject *t_Line_contains(t_Line *self, PyObject *arg);
          static PyObject *t_Line_distance(t_Line *self, PyObject *args);
          static PyObject *t_Line_fromDirection(PyTypeObject *type, PyObject *args);
          static PyObject *t_Line_getAbscissa(t_Line *self, PyObject *arg);
          static PyObject *t_Line_getDirection(t_Line *self);
          static PyObject *t_Line_getOrigin(t_Line *self);
          static PyObject *t_Line_getTolerance(t_Line *self);
          static PyObject *t_Line_intersection(t_Line *self, PyObject *arg);
          static PyObject *t_Line_isSimilarTo(t_Line *self, PyObject *arg);
          static PyObject *t_Line_pointAt(t_Line *self, PyObject *arg);
          static PyObject *t_Line_reset(t_Line *self, PyObject *args);
          static PyObject *t_Line_revert(t_Line *self);
          static PyObject *t_Line_toSpace(t_Line *self, PyObject *args);
          static PyObject *t_Line_toSubSpace(t_Line *self, PyObject *args);
          static PyObject *t_Line_wholeLine(t_Line *self);
          static PyObject *t_Line_get__direction(t_Line *self, void *data);
          static PyObject *t_Line_get__origin(t_Line *self, void *data);
          static PyObject *t_Line_get__tolerance(t_Line *self, void *data);
          static PyGetSetDef t_Line__fields_[] = {
            DECLARE_GET_FIELD(t_Line, direction),
            DECLARE_GET_FIELD(t_Line, origin),
            DECLARE_GET_FIELD(t_Line, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Line__methods_[] = {
            DECLARE_METHOD(t_Line, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Line, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Line, closestPoint, METH_O),
            DECLARE_METHOD(t_Line, contains, METH_O),
            DECLARE_METHOD(t_Line, distance, METH_VARARGS),
            DECLARE_METHOD(t_Line, fromDirection, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Line, getAbscissa, METH_O),
            DECLARE_METHOD(t_Line, getDirection, METH_NOARGS),
            DECLARE_METHOD(t_Line, getOrigin, METH_NOARGS),
            DECLARE_METHOD(t_Line, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_Line, intersection, METH_O),
            DECLARE_METHOD(t_Line, isSimilarTo, METH_O),
            DECLARE_METHOD(t_Line, pointAt, METH_O),
            DECLARE_METHOD(t_Line, reset, METH_VARARGS),
            DECLARE_METHOD(t_Line, revert, METH_NOARGS),
            DECLARE_METHOD(t_Line, toSpace, METH_VARARGS),
            DECLARE_METHOD(t_Line, toSubSpace, METH_VARARGS),
            DECLARE_METHOD(t_Line, wholeLine, METH_NOARGS),
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
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            jdouble a2;
            Line object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = Line(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Line_closestPoint(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.closestPoint(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "closestPoint", arg);
            return NULL;
          }

          static PyObject *t_Line_contains(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.contains(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "contains", arg);
            return NULL;
          }

          static PyObject *t_Line_distance(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Line a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", Line::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance", args);
            return NULL;
          }

          static PyObject *t_Line_fromDirection(PyTypeObject *type, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            jdouble a2;
            Line result((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Line::fromDirection(a0, a1, a2));
              return t_Line::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "fromDirection", args);
            return NULL;
          }

          static PyObject *t_Line_getAbscissa(t_Line *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getAbscissa(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAbscissa", arg);
            return NULL;
          }

          static PyObject *t_Line_getDirection(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Line_getOrigin(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Line_getTolerance(t_Line *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Line_intersection(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.intersection(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", arg);
            return NULL;
          }

          static PyObject *t_Line_isSimilarTo(t_Line *self, PyObject *arg)
          {
            Line a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", Line::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.isSimilarTo(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isSimilarTo", arg);
            return NULL;
          }

          static PyObject *t_Line_pointAt(t_Line *self, PyObject *arg)
          {
            jdouble a0;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.pointAt(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "pointAt", arg);
            return NULL;
          }

          static PyObject *t_Line_reset(t_Line *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.reset(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "reset", args);
            return NULL;
          }

          static PyObject *t_Line_revert(t_Line *self)
          {
            Line result((jobject) NULL);
            OBJ_CALL(result = self->object.revert());
            return t_Line::wrap_Object(result);
          }

          static PyObject *t_Line_toSpace(t_Line *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
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

          static PyObject *t_Line_wholeLine(t_Line *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::SubLine result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeLine());
            return ::org::hipparchus::geometry::euclidean::threed::t_SubLine::wrap_Object(result);
          }

          static PyObject *t_Line_get__direction(t_Line *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Line_get__origin(t_Line *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
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
#include "org/orekit/files/ccsds/definitions/OdMethodFacade.h"
#include "org/orekit/files/ccsds/definitions/OdMethodType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/OdMethodFacade.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *OdMethodFacade::class$ = NULL;
          jmethodID *OdMethodFacade::mids$ = NULL;
          bool OdMethodFacade::live$ = false;

          jclass OdMethodFacade::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/OdMethodFacade");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_5ca2d90996f645ae] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/OdMethodType;Ljava/lang/String;)V");
              mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getTool_0090f7797e403f43] = env->getMethodID(cls, "getTool", "()Ljava/lang/String;");
              mids$[mid_getType_2b10baa745d272af] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/definitions/OdMethodType;");
              mids$[mid_parse_a7a24fb4f58a4d57] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/OdMethodFacade;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OdMethodFacade::OdMethodFacade(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::definitions::OdMethodType & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5ca2d90996f645ae, a0.this$, a1.this$, a2.this$)) {}

          ::java::lang::String OdMethodFacade::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
          }

          ::java::lang::String OdMethodFacade::getTool() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTool_0090f7797e403f43]));
          }

          ::org::orekit::files::ccsds::definitions::OdMethodType OdMethodFacade::getType() const
          {
            return ::org::orekit::files::ccsds::definitions::OdMethodType(env->callObjectMethod(this$, mids$[mid_getType_2b10baa745d272af]));
          }

          OdMethodFacade OdMethodFacade::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OdMethodFacade(env->callStaticObjectMethod(cls, mids$[mid_parse_a7a24fb4f58a4d57], a0.this$));
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
          static PyObject *t_OdMethodFacade_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OdMethodFacade_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OdMethodFacade_init_(t_OdMethodFacade *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OdMethodFacade_getName(t_OdMethodFacade *self);
          static PyObject *t_OdMethodFacade_getTool(t_OdMethodFacade *self);
          static PyObject *t_OdMethodFacade_getType(t_OdMethodFacade *self);
          static PyObject *t_OdMethodFacade_parse(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OdMethodFacade_get__name(t_OdMethodFacade *self, void *data);
          static PyObject *t_OdMethodFacade_get__tool(t_OdMethodFacade *self, void *data);
          static PyObject *t_OdMethodFacade_get__type(t_OdMethodFacade *self, void *data);
          static PyGetSetDef t_OdMethodFacade__fields_[] = {
            DECLARE_GET_FIELD(t_OdMethodFacade, name),
            DECLARE_GET_FIELD(t_OdMethodFacade, tool),
            DECLARE_GET_FIELD(t_OdMethodFacade, type),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OdMethodFacade__methods_[] = {
            DECLARE_METHOD(t_OdMethodFacade, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OdMethodFacade, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OdMethodFacade, getName, METH_NOARGS),
            DECLARE_METHOD(t_OdMethodFacade, getTool, METH_NOARGS),
            DECLARE_METHOD(t_OdMethodFacade, getType, METH_NOARGS),
            DECLARE_METHOD(t_OdMethodFacade, parse, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OdMethodFacade)[] = {
            { Py_tp_methods, t_OdMethodFacade__methods_ },
            { Py_tp_init, (void *) t_OdMethodFacade_init_ },
            { Py_tp_getset, t_OdMethodFacade__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OdMethodFacade)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OdMethodFacade, t_OdMethodFacade, OdMethodFacade);

          void t_OdMethodFacade::install(PyObject *module)
          {
            installType(&PY_TYPE(OdMethodFacade), &PY_TYPE_DEF(OdMethodFacade), module, "OdMethodFacade", 0);
          }

          void t_OdMethodFacade::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodFacade), "class_", make_descriptor(OdMethodFacade::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodFacade), "wrapfn_", make_descriptor(t_OdMethodFacade::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OdMethodFacade), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OdMethodFacade_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OdMethodFacade::initializeClass, 1)))
              return NULL;
            return t_OdMethodFacade::wrap_Object(OdMethodFacade(((t_OdMethodFacade *) arg)->object.this$));
          }
          static PyObject *t_OdMethodFacade_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OdMethodFacade::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OdMethodFacade_init_(t_OdMethodFacade *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::files::ccsds::definitions::OdMethodType a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::lang::String a2((jobject) NULL);
            OdMethodFacade object((jobject) NULL);

            if (!parseArgs(args, "sKs", ::org::orekit::files::ccsds::definitions::OdMethodType::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::definitions::t_OdMethodType::parameters_, &a2))
            {
              INT_CALL(object = OdMethodFacade(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OdMethodFacade_getName(t_OdMethodFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_OdMethodFacade_getTool(t_OdMethodFacade *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getTool());
            return j2p(result);
          }

          static PyObject *t_OdMethodFacade_getType(t_OdMethodFacade *self)
          {
            ::org::orekit::files::ccsds::definitions::OdMethodType result((jobject) NULL);
            OBJ_CALL(result = self->object.getType());
            return ::org::orekit::files::ccsds::definitions::t_OdMethodType::wrap_Object(result);
          }

          static PyObject *t_OdMethodFacade_parse(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            OdMethodFacade result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::definitions::OdMethodFacade::parse(a0));
              return t_OdMethodFacade::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parse", arg);
            return NULL;
          }

          static PyObject *t_OdMethodFacade_get__name(t_OdMethodFacade *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_OdMethodFacade_get__tool(t_OdMethodFacade *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getTool());
            return j2p(value);
          }

          static PyObject *t_OdMethodFacade_get__type(t_OdMethodFacade *self, void *data)
          {
            ::org::orekit::files::ccsds::definitions::OdMethodType value((jobject) NULL);
            OBJ_CALL(value = self->object.getType());
            return ::org::orekit::files::ccsds::definitions::t_OdMethodType::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/CommonMetadataWriter.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmCommonMetadata.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *CommonMetadataWriter::class$ = NULL;
            jmethodID *CommonMetadataWriter::mids$ = NULL;
            bool CommonMetadataWriter::live$ = false;

            jclass CommonMetadataWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/CommonMetadataWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_4fae69f3aa5b4208] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/odm/OdmCommonMetadata;Lorg/orekit/files/ccsds/definitions/TimeConverter;)V");
                mids$[mid_writeContent_fb36c2e4ae059ab9] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CommonMetadataWriter::CommonMetadataWriter(const ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata & a0, const ::org::orekit::files::ccsds::definitions::TimeConverter & a1) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_4fae69f3aa5b4208, a0.this$, a1.this$)) {}
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
            static PyObject *t_CommonMetadataWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CommonMetadataWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CommonMetadataWriter_init_(t_CommonMetadataWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_CommonMetadataWriter__methods_[] = {
              DECLARE_METHOD(t_CommonMetadataWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CommonMetadataWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CommonMetadataWriter)[] = {
              { Py_tp_methods, t_CommonMetadataWriter__methods_ },
              { Py_tp_init, (void *) t_CommonMetadataWriter_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CommonMetadataWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(CommonMetadataWriter, t_CommonMetadataWriter, CommonMetadataWriter);

            void t_CommonMetadataWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(CommonMetadataWriter), &PY_TYPE_DEF(CommonMetadataWriter), module, "CommonMetadataWriter", 0);
            }

            void t_CommonMetadataWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataWriter), "class_", make_descriptor(CommonMetadataWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataWriter), "wrapfn_", make_descriptor(t_CommonMetadataWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CommonMetadataWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CommonMetadataWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CommonMetadataWriter::initializeClass, 1)))
                return NULL;
              return t_CommonMetadataWriter::wrap_Object(CommonMetadataWriter(((t_CommonMetadataWriter *) arg)->object.this$));
            }
            static PyObject *t_CommonMetadataWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CommonMetadataWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CommonMetadataWriter_init_(t_CommonMetadataWriter *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata a0((jobject) NULL);
              ::org::orekit::files::ccsds::definitions::TimeConverter a1((jobject) NULL);
              CommonMetadataWriter object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata::initializeClass, ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, &a0, &a1))
              {
                INT_CALL(object = CommonMetadataWriter(a0, a1));
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
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldLnsCoefficients.h"
#include "java/util/SortedMap.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/CoefficientsFactory$NSKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldLnsCoefficients::class$ = NULL;
            jmethodID *FieldLnsCoefficients::mids$ = NULL;
            bool FieldLnsCoefficients::live$ = false;

            jclass FieldLnsCoefficients::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldLnsCoefficients");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a1f22cac9018a557] = env->getMethodID(cls, "<init>", "(II[[Lorg/hipparchus/CalculusFieldElement;Ljava/util/SortedMap;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/Field;)V");
                mids$[mid_getLns_3e44951e1cc3e6e3] = env->getMethodID(cls, "getLns", "(II)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getdLnsdGamma_3e44951e1cc3e6e3] = env->getMethodID(cls, "getdLnsdGamma", "(II)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldLnsCoefficients::FieldLnsCoefficients(jint a0, jint a1, const JArray< JArray< ::org::hipparchus::CalculusFieldElement > > & a2, const ::java::util::SortedMap & a3, const ::org::hipparchus::CalculusFieldElement & a4, const ::org::hipparchus::Field & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1f22cac9018a557, a0, a1, a2.this$, a3.this$, a4.this$, a5.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldLnsCoefficients::getLns(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getLns_3e44951e1cc3e6e3], a0, a1));
            }

            ::org::hipparchus::CalculusFieldElement FieldLnsCoefficients::getdLnsdGamma(jint a0, jint a1) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getdLnsdGamma_3e44951e1cc3e6e3], a0, a1));
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
            static PyObject *t_FieldLnsCoefficients_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldLnsCoefficients_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldLnsCoefficients_of_(t_FieldLnsCoefficients *self, PyObject *args);
            static int t_FieldLnsCoefficients_init_(t_FieldLnsCoefficients *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldLnsCoefficients_getLns(t_FieldLnsCoefficients *self, PyObject *args);
            static PyObject *t_FieldLnsCoefficients_getdLnsdGamma(t_FieldLnsCoefficients *self, PyObject *args);
            static PyObject *t_FieldLnsCoefficients_get__parameters_(t_FieldLnsCoefficients *self, void *data);
            static PyGetSetDef t_FieldLnsCoefficients__fields_[] = {
              DECLARE_GET_FIELD(t_FieldLnsCoefficients, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldLnsCoefficients__methods_[] = {
              DECLARE_METHOD(t_FieldLnsCoefficients, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldLnsCoefficients, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldLnsCoefficients, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldLnsCoefficients, getLns, METH_VARARGS),
              DECLARE_METHOD(t_FieldLnsCoefficients, getdLnsdGamma, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldLnsCoefficients)[] = {
              { Py_tp_methods, t_FieldLnsCoefficients__methods_ },
              { Py_tp_init, (void *) t_FieldLnsCoefficients_init_ },
              { Py_tp_getset, t_FieldLnsCoefficients__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldLnsCoefficients)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldLnsCoefficients, t_FieldLnsCoefficients, FieldLnsCoefficients);
            PyObject *t_FieldLnsCoefficients::wrap_Object(const FieldLnsCoefficients& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldLnsCoefficients::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldLnsCoefficients *self = (t_FieldLnsCoefficients *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldLnsCoefficients::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldLnsCoefficients::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldLnsCoefficients *self = (t_FieldLnsCoefficients *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldLnsCoefficients::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldLnsCoefficients), &PY_TYPE_DEF(FieldLnsCoefficients), module, "FieldLnsCoefficients", 0);
            }

            void t_FieldLnsCoefficients::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLnsCoefficients), "class_", make_descriptor(FieldLnsCoefficients::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLnsCoefficients), "wrapfn_", make_descriptor(t_FieldLnsCoefficients::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLnsCoefficients), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldLnsCoefficients_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldLnsCoefficients::initializeClass, 1)))
                return NULL;
              return t_FieldLnsCoefficients::wrap_Object(FieldLnsCoefficients(((t_FieldLnsCoefficients *) arg)->object.this$));
            }
            static PyObject *t_FieldLnsCoefficients_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldLnsCoefficients::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldLnsCoefficients_of_(t_FieldLnsCoefficients *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldLnsCoefficients_init_(t_FieldLnsCoefficients *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jint a1;
              JArray< JArray< ::org::hipparchus::CalculusFieldElement > > a2((jobject) NULL);
              PyTypeObject **p2;
              ::java::util::SortedMap a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::hipparchus::Field a5((jobject) NULL);
              PyTypeObject **p5;
              FieldLnsCoefficients object((jobject) NULL);

              if (!parseArgs(args, "II[[KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::java::util::SortedMap::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::java::util::t_SortedMap::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldLnsCoefficients(a0, a1, a2, a3, a4, a5));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldLnsCoefficients_getLns(t_FieldLnsCoefficients *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getLns(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getLns", args);
              return NULL;
            }

            static PyObject *t_FieldLnsCoefficients_getdLnsdGamma(t_FieldLnsCoefficients *self, PyObject *args)
            {
              jint a0;
              jint a1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "II", &a0, &a1))
              {
                OBJ_CALL(result = self->object.getdLnsdGamma(a0, a1));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getdLnsdGamma", args);
              return NULL;
            }
            static PyObject *t_FieldLnsCoefficients_get__parameters_(t_FieldLnsCoefficients *self, void *data)
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
#include "org/orekit/files/rinex/navigation/RinexNavigation.h"
#include "org/orekit/files/rinex/navigation/SystemTimeOffsetMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouCivilianNavigationMessage.h"
#include "org/orekit/files/rinex/navigation/EarthOrientationParameterMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage.h"
#include "java/util/Map.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage.h"
#include "org/orekit/files/rinex/navigation/IonosphereBDGIMMessage.h"
#include "org/orekit/files/rinex/navigation/RinexNavigationHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/navigation/IonosphereKlobucharMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/SBASNavigationMessage.h"
#include "org/orekit/files/rinex/navigation/IonosphereNequickGMessage.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/analytical/gnss/data/IRNSSNavigationMessage.h"
#include "java/util/List.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSCivilianNavigationMessage.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *RinexNavigation::class$ = NULL;
          jmethodID *RinexNavigation::mids$ = NULL;
          bool RinexNavigation::live$ = false;

          jclass RinexNavigation::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/RinexNavigation");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_addBDGIMMessage_48f35a9d59768764] = env->getMethodID(cls, "addBDGIMMessage", "(Lorg/orekit/files/rinex/navigation/IonosphereBDGIMMessage;)V");
              mids$[mid_addBeidouCivilianNavigationMessage_9b7c3b8708cb60f0] = env->getMethodID(cls, "addBeidouCivilianNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/BeidouCivilianNavigationMessage;)V");
              mids$[mid_addBeidouLegacyNavigationMessage_1df5a8e3672c5ba9] = env->getMethodID(cls, "addBeidouLegacyNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/BeidouLegacyNavigationMessage;)V");
              mids$[mid_addEarthOrientationParameter_e5e3f383d80cbda5] = env->getMethodID(cls, "addEarthOrientationParameter", "(Lorg/orekit/files/rinex/navigation/EarthOrientationParameterMessage;)V");
              mids$[mid_addGPSLegacyNavigationMessage_476f45cbe0a6ddd3] = env->getMethodID(cls, "addGPSLegacyNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GPSCivilianNavigationMessage;)V");
              mids$[mid_addGPSLegacyNavigationMessage_5e4004300df49c74] = env->getMethodID(cls, "addGPSLegacyNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage;)V");
              mids$[mid_addGalileoNavigationMessage_712a4317d632ec13] = env->getMethodID(cls, "addGalileoNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GalileoNavigationMessage;)V");
              mids$[mid_addGlonassNavigationMessage_9f037303855bf75b] = env->getMethodID(cls, "addGlonassNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/GLONASSNavigationMessage;)V");
              mids$[mid_addIRNSSNavigationMessage_5a9c01f88c870dbb] = env->getMethodID(cls, "addIRNSSNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/IRNSSNavigationMessage;)V");
              mids$[mid_addKlobucharMessage_2654acbdecbca783] = env->getMethodID(cls, "addKlobucharMessage", "(Lorg/orekit/files/rinex/navigation/IonosphereKlobucharMessage;)V");
              mids$[mid_addNequickGMessage_d7c89b2936167e22] = env->getMethodID(cls, "addNequickGMessage", "(Lorg/orekit/files/rinex/navigation/IonosphereNequickGMessage;)V");
              mids$[mid_addQZSSCivilianNavigationMessage_9020d0332d2c932e] = env->getMethodID(cls, "addQZSSCivilianNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage;)V");
              mids$[mid_addQZSSLegacyNavigationMessage_c40499bedaddc366] = env->getMethodID(cls, "addQZSSLegacyNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/QZSSLegacyNavigationMessage;)V");
              mids$[mid_addSBASNavigationMessage_fbb7b22707ec344c] = env->getMethodID(cls, "addSBASNavigationMessage", "(Lorg/orekit/propagation/analytical/gnss/data/SBASNavigationMessage;)V");
              mids$[mid_addSystemTimeOffset_368892e3a3cd8277] = env->getMethodID(cls, "addSystemTimeOffset", "(Lorg/orekit/files/rinex/navigation/SystemTimeOffsetMessage;)V");
              mids$[mid_getBDGIMMessages_a6156df500549a58] = env->getMethodID(cls, "getBDGIMMessages", "()Ljava/util/List;");
              mids$[mid_getBeidouCivilianNavigationMessages_d6753b7055940a54] = env->getMethodID(cls, "getBeidouCivilianNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getBeidouCivilianNavigationMessages_720e76ad3b86a46a] = env->getMethodID(cls, "getBeidouCivilianNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getBeidouLegacyNavigationMessages_d6753b7055940a54] = env->getMethodID(cls, "getBeidouLegacyNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getBeidouLegacyNavigationMessages_720e76ad3b86a46a] = env->getMethodID(cls, "getBeidouLegacyNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getEarthOrientationParameters_a6156df500549a58] = env->getMethodID(cls, "getEarthOrientationParameters", "()Ljava/util/List;");
              mids$[mid_getGPSCivilianNavigationMessages_d6753b7055940a54] = env->getMethodID(cls, "getGPSCivilianNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getGPSCivilianNavigationMessages_720e76ad3b86a46a] = env->getMethodID(cls, "getGPSCivilianNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getGPSLegacyNavigationMessages_d6753b7055940a54] = env->getMethodID(cls, "getGPSLegacyNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getGPSLegacyNavigationMessages_720e76ad3b86a46a] = env->getMethodID(cls, "getGPSLegacyNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getGalileoNavigationMessages_d6753b7055940a54] = env->getMethodID(cls, "getGalileoNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getGalileoNavigationMessages_720e76ad3b86a46a] = env->getMethodID(cls, "getGalileoNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getGlonassNavigationMessages_d6753b7055940a54] = env->getMethodID(cls, "getGlonassNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getGlonassNavigationMessages_720e76ad3b86a46a] = env->getMethodID(cls, "getGlonassNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getIRNSSNavigationMessages_d6753b7055940a54] = env->getMethodID(cls, "getIRNSSNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getIRNSSNavigationMessages_720e76ad3b86a46a] = env->getMethodID(cls, "getIRNSSNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getKlobucharAlpha_7cdc325af0834901] = env->getMethodID(cls, "getKlobucharAlpha", "()[D");
              mids$[mid_getKlobucharBeta_7cdc325af0834901] = env->getMethodID(cls, "getKlobucharBeta", "()[D");
              mids$[mid_getKlobucharMessages_a6156df500549a58] = env->getMethodID(cls, "getKlobucharMessages", "()Ljava/util/List;");
              mids$[mid_getNeQuickAlpha_7cdc325af0834901] = env->getMethodID(cls, "getNeQuickAlpha", "()[D");
              mids$[mid_getNequickGMessages_a6156df500549a58] = env->getMethodID(cls, "getNequickGMessages", "()Ljava/util/List;");
              mids$[mid_getQZSSCivilianNavigationMessages_d6753b7055940a54] = env->getMethodID(cls, "getQZSSCivilianNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getQZSSCivilianNavigationMessages_720e76ad3b86a46a] = env->getMethodID(cls, "getQZSSCivilianNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getQZSSLegacyNavigationMessages_d6753b7055940a54] = env->getMethodID(cls, "getQZSSLegacyNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getQZSSLegacyNavigationMessages_720e76ad3b86a46a] = env->getMethodID(cls, "getQZSSLegacyNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getSBASNavigationMessages_d6753b7055940a54] = env->getMethodID(cls, "getSBASNavigationMessages", "()Ljava/util/Map;");
              mids$[mid_getSBASNavigationMessages_720e76ad3b86a46a] = env->getMethodID(cls, "getSBASNavigationMessages", "(Ljava/lang/String;)Ljava/util/List;");
              mids$[mid_getSystemTimeOffsets_a6156df500549a58] = env->getMethodID(cls, "getSystemTimeOffsets", "()Ljava/util/List;");
              mids$[mid_setKlobucharAlpha_ebc26dcaf4761286] = env->getMethodID(cls, "setKlobucharAlpha", "([D)V");
              mids$[mid_setKlobucharBeta_ebc26dcaf4761286] = env->getMethodID(cls, "setKlobucharBeta", "([D)V");
              mids$[mid_setNeQuickAlpha_ebc26dcaf4761286] = env->getMethodID(cls, "setNeQuickAlpha", "([D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexNavigation::RinexNavigation() : ::org::orekit::files::rinex::RinexFile(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void RinexNavigation::addBDGIMMessage(const ::org::orekit::files::rinex::navigation::IonosphereBDGIMMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addBDGIMMessage_48f35a9d59768764], a0.this$);
          }

          void RinexNavigation::addBeidouCivilianNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::BeidouCivilianNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addBeidouCivilianNavigationMessage_9b7c3b8708cb60f0], a0.this$);
          }

          void RinexNavigation::addBeidouLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addBeidouLegacyNavigationMessage_1df5a8e3672c5ba9], a0.this$);
          }

          void RinexNavigation::addEarthOrientationParameter(const ::org::orekit::files::rinex::navigation::EarthOrientationParameterMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addEarthOrientationParameter_e5e3f383d80cbda5], a0.this$);
          }

          void RinexNavigation::addGPSLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GPSCivilianNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGPSLegacyNavigationMessage_476f45cbe0a6ddd3], a0.this$);
          }

          void RinexNavigation::addGPSLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGPSLegacyNavigationMessage_5e4004300df49c74], a0.this$);
          }

          void RinexNavigation::addGalileoNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGalileoNavigationMessage_712a4317d632ec13], a0.this$);
          }

          void RinexNavigation::addGlonassNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addGlonassNavigationMessage_9f037303855bf75b], a0.this$);
          }

          void RinexNavigation::addIRNSSNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::IRNSSNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addIRNSSNavigationMessage_5a9c01f88c870dbb], a0.this$);
          }

          void RinexNavigation::addKlobucharMessage(const ::org::orekit::files::rinex::navigation::IonosphereKlobucharMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addKlobucharMessage_2654acbdecbca783], a0.this$);
          }

          void RinexNavigation::addNequickGMessage(const ::org::orekit::files::rinex::navigation::IonosphereNequickGMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addNequickGMessage_d7c89b2936167e22], a0.this$);
          }

          void RinexNavigation::addQZSSCivilianNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::QZSSCivilianNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addQZSSCivilianNavigationMessage_9020d0332d2c932e], a0.this$);
          }

          void RinexNavigation::addQZSSLegacyNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addQZSSLegacyNavigationMessage_c40499bedaddc366], a0.this$);
          }

          void RinexNavigation::addSBASNavigationMessage(const ::org::orekit::propagation::analytical::gnss::data::SBASNavigationMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addSBASNavigationMessage_fbb7b22707ec344c], a0.this$);
          }

          void RinexNavigation::addSystemTimeOffset(const ::org::orekit::files::rinex::navigation::SystemTimeOffsetMessage & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addSystemTimeOffset_368892e3a3cd8277], a0.this$);
          }

          ::java::util::List RinexNavigation::getBDGIMMessages() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBDGIMMessages_a6156df500549a58]));
          }

          ::java::util::Map RinexNavigation::getBeidouCivilianNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getBeidouCivilianNavigationMessages_d6753b7055940a54]));
          }

          ::java::util::List RinexNavigation::getBeidouCivilianNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBeidouCivilianNavigationMessages_720e76ad3b86a46a], a0.this$));
          }

          ::java::util::Map RinexNavigation::getBeidouLegacyNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getBeidouLegacyNavigationMessages_d6753b7055940a54]));
          }

          ::java::util::List RinexNavigation::getBeidouLegacyNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBeidouLegacyNavigationMessages_720e76ad3b86a46a], a0.this$));
          }

          ::java::util::List RinexNavigation::getEarthOrientationParameters() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEarthOrientationParameters_a6156df500549a58]));
          }

          ::java::util::Map RinexNavigation::getGPSCivilianNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getGPSCivilianNavigationMessages_d6753b7055940a54]));
          }

          ::java::util::List RinexNavigation::getGPSCivilianNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGPSCivilianNavigationMessages_720e76ad3b86a46a], a0.this$));
          }

          ::java::util::Map RinexNavigation::getGPSLegacyNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getGPSLegacyNavigationMessages_d6753b7055940a54]));
          }

          ::java::util::List RinexNavigation::getGPSLegacyNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGPSLegacyNavigationMessages_720e76ad3b86a46a], a0.this$));
          }

          ::java::util::Map RinexNavigation::getGalileoNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getGalileoNavigationMessages_d6753b7055940a54]));
          }

          ::java::util::List RinexNavigation::getGalileoNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGalileoNavigationMessages_720e76ad3b86a46a], a0.this$));
          }

          ::java::util::Map RinexNavigation::getGlonassNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getGlonassNavigationMessages_d6753b7055940a54]));
          }

          ::java::util::List RinexNavigation::getGlonassNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getGlonassNavigationMessages_720e76ad3b86a46a], a0.this$));
          }

          ::java::util::Map RinexNavigation::getIRNSSNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getIRNSSNavigationMessages_d6753b7055940a54]));
          }

          ::java::util::List RinexNavigation::getIRNSSNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getIRNSSNavigationMessages_720e76ad3b86a46a], a0.this$));
          }

          JArray< jdouble > RinexNavigation::getKlobucharAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getKlobucharAlpha_7cdc325af0834901]));
          }

          JArray< jdouble > RinexNavigation::getKlobucharBeta() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getKlobucharBeta_7cdc325af0834901]));
          }

          ::java::util::List RinexNavigation::getKlobucharMessages() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getKlobucharMessages_a6156df500549a58]));
          }

          JArray< jdouble > RinexNavigation::getNeQuickAlpha() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getNeQuickAlpha_7cdc325af0834901]));
          }

          ::java::util::List RinexNavigation::getNequickGMessages() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNequickGMessages_a6156df500549a58]));
          }

          ::java::util::Map RinexNavigation::getQZSSCivilianNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getQZSSCivilianNavigationMessages_d6753b7055940a54]));
          }

          ::java::util::List RinexNavigation::getQZSSCivilianNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getQZSSCivilianNavigationMessages_720e76ad3b86a46a], a0.this$));
          }

          ::java::util::Map RinexNavigation::getQZSSLegacyNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getQZSSLegacyNavigationMessages_d6753b7055940a54]));
          }

          ::java::util::List RinexNavigation::getQZSSLegacyNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getQZSSLegacyNavigationMessages_720e76ad3b86a46a], a0.this$));
          }

          ::java::util::Map RinexNavigation::getSBASNavigationMessages() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSBASNavigationMessages_d6753b7055940a54]));
          }

          ::java::util::List RinexNavigation::getSBASNavigationMessages(const ::java::lang::String & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSBASNavigationMessages_720e76ad3b86a46a], a0.this$));
          }

          ::java::util::List RinexNavigation::getSystemTimeOffsets() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSystemTimeOffsets_a6156df500549a58]));
          }

          void RinexNavigation::setKlobucharAlpha(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setKlobucharAlpha_ebc26dcaf4761286], a0.this$);
          }

          void RinexNavigation::setKlobucharBeta(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setKlobucharBeta_ebc26dcaf4761286], a0.this$);
          }

          void RinexNavigation::setNeQuickAlpha(const JArray< jdouble > & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNeQuickAlpha_ebc26dcaf4761286], a0.this$);
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
          static PyObject *t_RinexNavigation_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexNavigation_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexNavigation_of_(t_RinexNavigation *self, PyObject *args);
          static int t_RinexNavigation_init_(t_RinexNavigation *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexNavigation_addBDGIMMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addBeidouCivilianNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addBeidouLegacyNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addEarthOrientationParameter(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addGPSLegacyNavigationMessage(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_addGalileoNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addGlonassNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addIRNSSNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addKlobucharMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addNequickGMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addQZSSCivilianNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addQZSSLegacyNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addSBASNavigationMessage(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_addSystemTimeOffset(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_getBDGIMMessages(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getBeidouCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getBeidouLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getEarthOrientationParameters(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getGPSCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getGPSLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getGalileoNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getGlonassNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getIRNSSNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getKlobucharAlpha(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getKlobucharBeta(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getKlobucharMessages(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getNeQuickAlpha(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getNequickGMessages(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_getQZSSCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getQZSSLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getSBASNavigationMessages(t_RinexNavigation *self, PyObject *args);
          static PyObject *t_RinexNavigation_getSystemTimeOffsets(t_RinexNavigation *self);
          static PyObject *t_RinexNavigation_setKlobucharAlpha(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_setKlobucharBeta(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_setNeQuickAlpha(t_RinexNavigation *self, PyObject *arg);
          static PyObject *t_RinexNavigation_get__bDGIMMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__beidouCivilianNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__beidouLegacyNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__earthOrientationParameters(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__gPSCivilianNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__gPSLegacyNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__galileoNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__glonassNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__iRNSSNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__klobucharAlpha(t_RinexNavigation *self, void *data);
          static int t_RinexNavigation_set__klobucharAlpha(t_RinexNavigation *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigation_get__klobucharBeta(t_RinexNavigation *self, void *data);
          static int t_RinexNavigation_set__klobucharBeta(t_RinexNavigation *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigation_get__klobucharMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__neQuickAlpha(t_RinexNavigation *self, void *data);
          static int t_RinexNavigation_set__neQuickAlpha(t_RinexNavigation *self, PyObject *arg, void *data);
          static PyObject *t_RinexNavigation_get__nequickGMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__qZSSCivilianNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__qZSSLegacyNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__sBASNavigationMessages(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__systemTimeOffsets(t_RinexNavigation *self, void *data);
          static PyObject *t_RinexNavigation_get__parameters_(t_RinexNavigation *self, void *data);
          static PyGetSetDef t_RinexNavigation__fields_[] = {
            DECLARE_GET_FIELD(t_RinexNavigation, bDGIMMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, beidouCivilianNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, beidouLegacyNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, earthOrientationParameters),
            DECLARE_GET_FIELD(t_RinexNavigation, gPSCivilianNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, gPSLegacyNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, galileoNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, glonassNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, iRNSSNavigationMessages),
            DECLARE_GETSET_FIELD(t_RinexNavigation, klobucharAlpha),
            DECLARE_GETSET_FIELD(t_RinexNavigation, klobucharBeta),
            DECLARE_GET_FIELD(t_RinexNavigation, klobucharMessages),
            DECLARE_GETSET_FIELD(t_RinexNavigation, neQuickAlpha),
            DECLARE_GET_FIELD(t_RinexNavigation, nequickGMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, qZSSCivilianNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, qZSSLegacyNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, sBASNavigationMessages),
            DECLARE_GET_FIELD(t_RinexNavigation, systemTimeOffsets),
            DECLARE_GET_FIELD(t_RinexNavigation, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexNavigation__methods_[] = {
            DECLARE_METHOD(t_RinexNavigation, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigation, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigation, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, addBDGIMMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addBeidouCivilianNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addBeidouLegacyNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addEarthOrientationParameter, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addGPSLegacyNavigationMessage, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, addGalileoNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addGlonassNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addIRNSSNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addKlobucharMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addNequickGMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addQZSSCivilianNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addQZSSLegacyNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addSBASNavigationMessage, METH_O),
            DECLARE_METHOD(t_RinexNavigation, addSystemTimeOffset, METH_O),
            DECLARE_METHOD(t_RinexNavigation, getBDGIMMessages, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getBeidouCivilianNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getBeidouLegacyNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getEarthOrientationParameters, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getGPSCivilianNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getGPSLegacyNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getGalileoNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getGlonassNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getIRNSSNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getKlobucharAlpha, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getKlobucharBeta, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getKlobucharMessages, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getNeQuickAlpha, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getNequickGMessages, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, getQZSSCivilianNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getQZSSLegacyNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getSBASNavigationMessages, METH_VARARGS),
            DECLARE_METHOD(t_RinexNavigation, getSystemTimeOffsets, METH_NOARGS),
            DECLARE_METHOD(t_RinexNavigation, setKlobucharAlpha, METH_O),
            DECLARE_METHOD(t_RinexNavigation, setKlobucharBeta, METH_O),
            DECLARE_METHOD(t_RinexNavigation, setNeQuickAlpha, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexNavigation)[] = {
            { Py_tp_methods, t_RinexNavigation__methods_ },
            { Py_tp_init, (void *) t_RinexNavigation_init_ },
            { Py_tp_getset, t_RinexNavigation__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexNavigation)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::RinexFile),
            NULL
          };

          DEFINE_TYPE(RinexNavigation, t_RinexNavigation, RinexNavigation);
          PyObject *t_RinexNavigation::wrap_Object(const RinexNavigation& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexNavigation::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexNavigation *self = (t_RinexNavigation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexNavigation::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexNavigation::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexNavigation *self = (t_RinexNavigation *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexNavigation::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexNavigation), &PY_TYPE_DEF(RinexNavigation), module, "RinexNavigation", 0);
          }

          void t_RinexNavigation::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigation), "class_", make_descriptor(RinexNavigation::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigation), "wrapfn_", make_descriptor(t_RinexNavigation::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigation), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexNavigation_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexNavigation::initializeClass, 1)))
              return NULL;
            return t_RinexNavigation::wrap_Object(RinexNavigation(((t_RinexNavigation *) arg)->object.this$));
          }
          static PyObject *t_RinexNavigation_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexNavigation::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexNavigation_of_(t_RinexNavigation *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_RinexNavigation_init_(t_RinexNavigation *self, PyObject *args, PyObject *kwds)
          {
            RinexNavigation object((jobject) NULL);

            INT_CALL(object = RinexNavigation());
            self->object = object;
            self->parameters[0] = ::org::orekit::files::rinex::navigation::PY_TYPE(RinexNavigationHeader);

            return 0;
          }

          static PyObject *t_RinexNavigation_addBDGIMMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::IonosphereBDGIMMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::IonosphereBDGIMMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addBDGIMMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addBDGIMMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addBeidouCivilianNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::BeidouCivilianNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouCivilianNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addBeidouCivilianNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addBeidouCivilianNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addBeidouLegacyNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::BeidouLegacyNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addBeidouLegacyNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addBeidouLegacyNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addEarthOrientationParameter(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::EarthOrientationParameterMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::EarthOrientationParameterMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addEarthOrientationParameter(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addEarthOrientationParameter", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addGPSLegacyNavigationMessage(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::gnss::data::GPSCivilianNavigationMessage a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GPSCivilianNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addGPSLegacyNavigationMessage(a0));
                  Py_RETURN_NONE;
                }
              }
              {
                ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage a0((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GPSLegacyNavigationMessage::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.addGPSLegacyNavigationMessage(a0));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addGPSLegacyNavigationMessage", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addGalileoNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GalileoNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addGalileoNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addGalileoNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addGlonassNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::GLONASSNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addGlonassNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addGlonassNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addIRNSSNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::IRNSSNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::IRNSSNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addIRNSSNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addIRNSSNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addKlobucharMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::IonosphereKlobucharMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::IonosphereKlobucharMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addKlobucharMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addKlobucharMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addNequickGMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::IonosphereNequickGMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::IonosphereNequickGMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addNequickGMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addNequickGMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addQZSSCivilianNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::QZSSCivilianNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::QZSSCivilianNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addQZSSCivilianNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addQZSSCivilianNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addQZSSLegacyNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::QZSSLegacyNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addQZSSLegacyNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addQZSSLegacyNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addSBASNavigationMessage(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::propagation::analytical::gnss::data::SBASNavigationMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::gnss::data::SBASNavigationMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addSBASNavigationMessage(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSBASNavigationMessage", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_addSystemTimeOffset(t_RinexNavigation *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::SystemTimeOffsetMessage a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::SystemTimeOffsetMessage::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addSystemTimeOffset(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSystemTimeOffset", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getBDGIMMessages(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getBDGIMMessages());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(IonosphereBDGIMMessage));
          }

          static PyObject *t_RinexNavigation_getBeidouCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getBeidouCivilianNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getBeidouCivilianNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(BeidouCivilianNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getBeidouCivilianNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getBeidouLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getBeidouLegacyNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getBeidouLegacyNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(BeidouLegacyNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getBeidouLegacyNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getEarthOrientationParameters(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getEarthOrientationParameters());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(EarthOrientationParameterMessage));
          }

          static PyObject *t_RinexNavigation_getGPSCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getGPSCivilianNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getGPSCivilianNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GPSCivilianNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getGPSCivilianNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getGPSLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getGPSLegacyNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getGPSLegacyNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GPSLegacyNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getGPSLegacyNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getGalileoNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getGalileoNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getGalileoNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GalileoNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getGalileoNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getGlonassNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getGlonassNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getGlonassNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GLONASSNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getGlonassNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getIRNSSNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getIRNSSNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getIRNSSNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(IRNSSNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getIRNSSNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getKlobucharAlpha(t_RinexNavigation *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getKlobucharAlpha());
            return result.wrap();
          }

          static PyObject *t_RinexNavigation_getKlobucharBeta(t_RinexNavigation *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getKlobucharBeta());
            return result.wrap();
          }

          static PyObject *t_RinexNavigation_getKlobucharMessages(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getKlobucharMessages());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(IonosphereKlobucharMessage));
          }

          static PyObject *t_RinexNavigation_getNeQuickAlpha(t_RinexNavigation *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getNeQuickAlpha());
            return result.wrap();
          }

          static PyObject *t_RinexNavigation_getNequickGMessages(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getNequickGMessages());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(IonosphereNequickGMessage));
          }

          static PyObject *t_RinexNavigation_getQZSSCivilianNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getQZSSCivilianNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getQZSSCivilianNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(QZSSCivilianNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getQZSSCivilianNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getQZSSLegacyNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getQZSSLegacyNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getQZSSLegacyNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(QZSSLegacyNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getQZSSLegacyNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getSBASNavigationMessages(t_RinexNavigation *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::util::Map result((jobject) NULL);
                OBJ_CALL(result = self->object.getSBASNavigationMessages());
                return ::java::util::t_Map::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.getSBASNavigationMessages(a0));
                  return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(SBASNavigationMessage));
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getSBASNavigationMessages", args);
            return NULL;
          }

          static PyObject *t_RinexNavigation_getSystemTimeOffsets(t_RinexNavigation *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSystemTimeOffsets());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::navigation::PY_TYPE(SystemTimeOffsetMessage));
          }

          static PyObject *t_RinexNavigation_setKlobucharAlpha(t_RinexNavigation *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.setKlobucharAlpha(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setKlobucharAlpha", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_setKlobucharBeta(t_RinexNavigation *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.setKlobucharBeta(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setKlobucharBeta", arg);
            return NULL;
          }

          static PyObject *t_RinexNavigation_setNeQuickAlpha(t_RinexNavigation *self, PyObject *arg)
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArg(arg, "[D", &a0))
            {
              OBJ_CALL(self->object.setNeQuickAlpha(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNeQuickAlpha", arg);
            return NULL;
          }
          static PyObject *t_RinexNavigation_get__parameters_(t_RinexNavigation *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RinexNavigation_get__bDGIMMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getBDGIMMessages());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__beidouCivilianNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getBeidouCivilianNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__beidouLegacyNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getBeidouLegacyNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__earthOrientationParameters(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getEarthOrientationParameters());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__gPSCivilianNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getGPSCivilianNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__gPSLegacyNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getGPSLegacyNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__galileoNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getGalileoNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__glonassNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getGlonassNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__iRNSSNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getIRNSSNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__klobucharAlpha(t_RinexNavigation *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getKlobucharAlpha());
            return value.wrap();
          }
          static int t_RinexNavigation_set__klobucharAlpha(t_RinexNavigation *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setKlobucharAlpha(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "klobucharAlpha", arg);
            return -1;
          }

          static PyObject *t_RinexNavigation_get__klobucharBeta(t_RinexNavigation *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getKlobucharBeta());
            return value.wrap();
          }
          static int t_RinexNavigation_set__klobucharBeta(t_RinexNavigation *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setKlobucharBeta(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "klobucharBeta", arg);
            return -1;
          }

          static PyObject *t_RinexNavigation_get__klobucharMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getKlobucharMessages());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__neQuickAlpha(t_RinexNavigation *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getNeQuickAlpha());
            return value.wrap();
          }
          static int t_RinexNavigation_set__neQuickAlpha(t_RinexNavigation *self, PyObject *arg, void *data)
          {
            {
              JArray< jdouble > value((jobject) NULL);
              if (!parseArg(arg, "[D", &value))
              {
                INT_CALL(self->object.setNeQuickAlpha(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "neQuickAlpha", arg);
            return -1;
          }

          static PyObject *t_RinexNavigation_get__nequickGMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getNequickGMessages());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__qZSSCivilianNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getQZSSCivilianNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__qZSSLegacyNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getQZSSLegacyNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__sBASNavigationMessages(t_RinexNavigation *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getSBASNavigationMessages());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexNavigation_get__systemTimeOffsets(t_RinexNavigation *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSystemTimeOffsets());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *AbstractIntegratedPropagator$MainStateEquations::class$ = NULL;
        jmethodID *AbstractIntegratedPropagator$MainStateEquations::mids$ = NULL;
        bool AbstractIntegratedPropagator$MainStateEquations::live$ = false;

        jclass AbstractIntegratedPropagator$MainStateEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/AbstractIntegratedPropagator$MainStateEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_computeDerivatives_137d7db4f3f987f7] = env->getMethodID(cls, "computeDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)[D");
            mids$[mid_init_3d13474d79f5e7bc] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< jdouble > AbstractIntegratedPropagator$MainStateEquations::computeDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_137d7db4f3f987f7], a0.this$));
        }

        void AbstractIntegratedPropagator$MainStateEquations::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_3d13474d79f5e7bc], a0.this$, a1.this$);
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
      namespace integration {
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_computeDerivatives(t_AbstractIntegratedPropagator$MainStateEquations *self, PyObject *arg);
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_init(t_AbstractIntegratedPropagator$MainStateEquations *self, PyObject *args);

        static PyMethodDef t_AbstractIntegratedPropagator$MainStateEquations__methods_[] = {
          DECLARE_METHOD(t_AbstractIntegratedPropagator$MainStateEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator$MainStateEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegratedPropagator$MainStateEquations, computeDerivatives, METH_O),
          DECLARE_METHOD(t_AbstractIntegratedPropagator$MainStateEquations, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractIntegratedPropagator$MainStateEquations)[] = {
          { Py_tp_methods, t_AbstractIntegratedPropagator$MainStateEquations__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractIntegratedPropagator$MainStateEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractIntegratedPropagator$MainStateEquations, t_AbstractIntegratedPropagator$MainStateEquations, AbstractIntegratedPropagator$MainStateEquations);

        void t_AbstractIntegratedPropagator$MainStateEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractIntegratedPropagator$MainStateEquations), &PY_TYPE_DEF(AbstractIntegratedPropagator$MainStateEquations), module, "AbstractIntegratedPropagator$MainStateEquations", 0);
        }

        void t_AbstractIntegratedPropagator$MainStateEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator$MainStateEquations), "class_", make_descriptor(AbstractIntegratedPropagator$MainStateEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator$MainStateEquations), "wrapfn_", make_descriptor(t_AbstractIntegratedPropagator$MainStateEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegratedPropagator$MainStateEquations), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractIntegratedPropagator$MainStateEquations::initializeClass, 1)))
            return NULL;
          return t_AbstractIntegratedPropagator$MainStateEquations::wrap_Object(AbstractIntegratedPropagator$MainStateEquations(((t_AbstractIntegratedPropagator$MainStateEquations *) arg)->object.this$));
        }
        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractIntegratedPropagator$MainStateEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_computeDerivatives(t_AbstractIntegratedPropagator$MainStateEquations *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.computeDerivatives(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "computeDerivatives", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegratedPropagator$MainStateEquations_init(t_AbstractIntegratedPropagator$MainStateEquations *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
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
#include "org/orekit/forces/gravity/potential/ICGEMFormatReader.h"
#include "java/io/IOException.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/time/TimeScale.h"
#include "java/io/InputStream.h"
#include "java/lang/Class.h"
#include "java/text/ParseException.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *ICGEMFormatReader::class$ = NULL;
          jmethodID *ICGEMFormatReader::mids$ = NULL;
          bool ICGEMFormatReader::live$ = false;

          jclass ICGEMFormatReader::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/ICGEMFormatReader");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d1dd1bdcf55f8f80] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Z)V");
              mids$[mid_init$_ead6ed0365e2cf97] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;ZLorg/orekit/time/TimeScale;)V");
              mids$[mid_getProvider_086897fc27688c23] = env->getMethodID(cls, "getProvider", "(ZII)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider;");
              mids$[mid_loadData_ec60cb5f4b3de555] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ICGEMFormatReader::ICGEMFormatReader(const ::java::lang::String & a0, jboolean a1) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_d1dd1bdcf55f8f80, a0.this$, a1)) {}

          ICGEMFormatReader::ICGEMFormatReader(const ::java::lang::String & a0, jboolean a1, const ::org::orekit::time::TimeScale & a2) : ::org::orekit::forces::gravity::potential::PotentialCoefficientsReader(env->newObject(initializeClass, &mids$, mid_init$_ead6ed0365e2cf97, a0.this$, a1, a2.this$)) {}

          ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider ICGEMFormatReader::getProvider(jboolean a0, jint a1, jint a2) const
          {
            return ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider(env->callObjectMethod(this$, mids$[mid_getProvider_086897fc27688c23], a0, a1, a2));
          }

          void ICGEMFormatReader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_loadData_ec60cb5f4b3de555], a0.this$, a1.this$);
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
          static PyObject *t_ICGEMFormatReader_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ICGEMFormatReader_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ICGEMFormatReader_init_(t_ICGEMFormatReader *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ICGEMFormatReader_getProvider(t_ICGEMFormatReader *self, PyObject *args);
          static PyObject *t_ICGEMFormatReader_loadData(t_ICGEMFormatReader *self, PyObject *args);

          static PyMethodDef t_ICGEMFormatReader__methods_[] = {
            DECLARE_METHOD(t_ICGEMFormatReader, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ICGEMFormatReader, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ICGEMFormatReader, getProvider, METH_VARARGS),
            DECLARE_METHOD(t_ICGEMFormatReader, loadData, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ICGEMFormatReader)[] = {
            { Py_tp_methods, t_ICGEMFormatReader__methods_ },
            { Py_tp_init, (void *) t_ICGEMFormatReader_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ICGEMFormatReader)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::gravity::potential::PotentialCoefficientsReader),
            NULL
          };

          DEFINE_TYPE(ICGEMFormatReader, t_ICGEMFormatReader, ICGEMFormatReader);

          void t_ICGEMFormatReader::install(PyObject *module)
          {
            installType(&PY_TYPE(ICGEMFormatReader), &PY_TYPE_DEF(ICGEMFormatReader), module, "ICGEMFormatReader", 0);
          }

          void t_ICGEMFormatReader::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ICGEMFormatReader), "class_", make_descriptor(ICGEMFormatReader::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ICGEMFormatReader), "wrapfn_", make_descriptor(t_ICGEMFormatReader::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ICGEMFormatReader), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ICGEMFormatReader_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ICGEMFormatReader::initializeClass, 1)))
              return NULL;
            return t_ICGEMFormatReader::wrap_Object(ICGEMFormatReader(((t_ICGEMFormatReader *) arg)->object.this$));
          }
          static PyObject *t_ICGEMFormatReader_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ICGEMFormatReader::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ICGEMFormatReader_init_(t_ICGEMFormatReader *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                ICGEMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZ", &a0, &a1))
                {
                  INT_CALL(object = ICGEMFormatReader(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                jboolean a1;
                ::org::orekit::time::TimeScale a2((jobject) NULL);
                ICGEMFormatReader object((jobject) NULL);

                if (!parseArgs(args, "sZk", ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = ICGEMFormatReader(a0, a1, a2));
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

          static PyObject *t_ICGEMFormatReader_getProvider(t_ICGEMFormatReader *self, PyObject *args)
          {
            jboolean a0;
            jint a1;
            jint a2;
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider result((jobject) NULL);

            if (!parseArgs(args, "ZII", &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getProvider(a0, a1, a2));
              return ::org::orekit::forces::gravity::potential::t_RawSphericalHarmonicsProvider::wrap_Object(result);
            }

            return callSuper(PY_TYPE(ICGEMFormatReader), (PyObject *) self, "getProvider", args, 2);
          }

          static PyObject *t_ICGEMFormatReader_loadData(t_ICGEMFormatReader *self, PyObject *args)
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(ICGEMFormatReader), (PyObject *) self, "loadData", args, 2);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Region$Location::class$ = NULL;
        jmethodID *Region$Location::mids$ = NULL;
        bool Region$Location::live$ = false;
        Region$Location *Region$Location::BOUNDARY = NULL;
        Region$Location *Region$Location::INSIDE = NULL;
        Region$Location *Region$Location::OUTSIDE = NULL;

        jclass Region$Location::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Region$Location");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_04702013dd7b2fc7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_values_79ed7072e162d8f5] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/partitioning/Region$Location;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BOUNDARY = new Region$Location(env->getStaticObjectField(cls, "BOUNDARY", "Lorg/hipparchus/geometry/partitioning/Region$Location;"));
            INSIDE = new Region$Location(env->getStaticObjectField(cls, "INSIDE", "Lorg/hipparchus/geometry/partitioning/Region$Location;"));
            OUTSIDE = new Region$Location(env->getStaticObjectField(cls, "OUTSIDE", "Lorg/hipparchus/geometry/partitioning/Region$Location;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Region$Location Region$Location::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Region$Location(env->callStaticObjectMethod(cls, mids$[mid_valueOf_04702013dd7b2fc7], a0.this$));
        }

        JArray< Region$Location > Region$Location::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Region$Location >(env->callStaticObjectMethod(cls, mids$[mid_values_79ed7072e162d8f5]));
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
        static PyObject *t_Region$Location_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Region$Location_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Region$Location_of_(t_Region$Location *self, PyObject *args);
        static PyObject *t_Region$Location_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Region$Location_values(PyTypeObject *type);
        static PyObject *t_Region$Location_get__parameters_(t_Region$Location *self, void *data);
        static PyGetSetDef t_Region$Location__fields_[] = {
          DECLARE_GET_FIELD(t_Region$Location, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Region$Location__methods_[] = {
          DECLARE_METHOD(t_Region$Location, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Region$Location, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Region$Location, of_, METH_VARARGS),
          DECLARE_METHOD(t_Region$Location, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Region$Location, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Region$Location)[] = {
          { Py_tp_methods, t_Region$Location__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Region$Location__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Region$Location)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Region$Location, t_Region$Location, Region$Location);
        PyObject *t_Region$Location::wrap_Object(const Region$Location& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Region$Location::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Region$Location *self = (t_Region$Location *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Region$Location::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Region$Location::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Region$Location *self = (t_Region$Location *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Region$Location::install(PyObject *module)
        {
          installType(&PY_TYPE(Region$Location), &PY_TYPE_DEF(Region$Location), module, "Region$Location", 0);
        }

        void t_Region$Location::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "class_", make_descriptor(Region$Location::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "wrapfn_", make_descriptor(t_Region$Location::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "boxfn_", make_descriptor(boxObject));
          env->getClass(Region$Location::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "BOUNDARY", make_descriptor(t_Region$Location::wrap_Object(*Region$Location::BOUNDARY)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "INSIDE", make_descriptor(t_Region$Location::wrap_Object(*Region$Location::INSIDE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region$Location), "OUTSIDE", make_descriptor(t_Region$Location::wrap_Object(*Region$Location::OUTSIDE)));
        }

        static PyObject *t_Region$Location_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Region$Location::initializeClass, 1)))
            return NULL;
          return t_Region$Location::wrap_Object(Region$Location(((t_Region$Location *) arg)->object.this$));
        }
        static PyObject *t_Region$Location_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Region$Location::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Region$Location_of_(t_Region$Location *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Region$Location_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Region$Location result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::Region$Location::valueOf(a0));
            return t_Region$Location::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Region$Location_values(PyTypeObject *type)
        {
          JArray< Region$Location > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::geometry::partitioning::Region$Location::values());
          return JArray<jobject>(result.this$).wrap(t_Region$Location::wrap_jobject);
        }
        static PyObject *t_Region$Location_get__parameters_(t_Region$Location *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
