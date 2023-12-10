#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/GradientFunction.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *GradientFunction::class$ = NULL;
        jmethodID *GradientFunction::mids$ = NULL;
        bool GradientFunction::live$ = false;

        jclass GradientFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/GradientFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f1b81f9c2c2ca13f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/MultivariateDifferentiableFunction;)V");
            mids$[mid_value_ac3d742ccc742f22] = env->getMethodID(cls, "value", "([D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GradientFunction::GradientFunction(const ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f1b81f9c2c2ca13f, a0.this$)) {}

        JArray< jdouble > GradientFunction::value(const JArray< jdouble > & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_ac3d742ccc742f22], a0.this$));
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
        static PyObject *t_GradientFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GradientFunction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GradientFunction_init_(t_GradientFunction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GradientFunction_value(t_GradientFunction *self, PyObject *arg);

        static PyMethodDef t_GradientFunction__methods_[] = {
          DECLARE_METHOD(t_GradientFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GradientFunction, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GradientFunction)[] = {
          { Py_tp_methods, t_GradientFunction__methods_ },
          { Py_tp_init, (void *) t_GradientFunction_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GradientFunction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GradientFunction, t_GradientFunction, GradientFunction);

        void t_GradientFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(GradientFunction), &PY_TYPE_DEF(GradientFunction), module, "GradientFunction", 0);
        }

        void t_GradientFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientFunction), "class_", make_descriptor(GradientFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientFunction), "wrapfn_", make_descriptor(t_GradientFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GradientFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GradientFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GradientFunction::initializeClass, 1)))
            return NULL;
          return t_GradientFunction::wrap_Object(GradientFunction(((t_GradientFunction *) arg)->object.this$));
        }
        static PyObject *t_GradientFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GradientFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GradientFunction_init_(t_GradientFunction *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction a0((jobject) NULL);
          GradientFunction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::hipparchus::analysis::differentiation::MultivariateDifferentiableFunction::initializeClass, &a0))
          {
            INT_CALL(object = GradientFunction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GradientFunction_value(t_GradientFunction *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *AuxiliaryElements::class$ = NULL;
            jmethodID *AuxiliaryElements::mids$ = NULL;
            bool AuxiliaryElements::live$ = false;

            jclass AuxiliaryElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_cf2001232a340a40] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;I)V");
                mids$[mid_getAlpha_dff5885c2c873297] = env->getMethodID(cls, "getAlpha", "()D");
                mids$[mid_getB_dff5885c2c873297] = env->getMethodID(cls, "getB", "()D");
                mids$[mid_getBeta_dff5885c2c873297] = env->getMethodID(cls, "getBeta", "()D");
                mids$[mid_getC_dff5885c2c873297] = env->getMethodID(cls, "getC", "()D");
                mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getEcc_dff5885c2c873297] = env->getMethodID(cls, "getEcc", "()D");
                mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
                mids$[mid_getGamma_dff5885c2c873297] = env->getMethodID(cls, "getGamma", "()D");
                mids$[mid_getH_dff5885c2c873297] = env->getMethodID(cls, "getH", "()D");
                mids$[mid_getK_dff5885c2c873297] = env->getMethodID(cls, "getK", "()D");
                mids$[mid_getKeplerianPeriod_dff5885c2c873297] = env->getMethodID(cls, "getKeplerianPeriod", "()D");
                mids$[mid_getLM_dff5885c2c873297] = env->getMethodID(cls, "getLM", "()D");
                mids$[mid_getLf_dff5885c2c873297] = env->getMethodID(cls, "getLf", "()D");
                mids$[mid_getLv_dff5885c2c873297] = env->getMethodID(cls, "getLv", "()D");
                mids$[mid_getMeanMotion_dff5885c2c873297] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getOrbit_cde5690bfa4f9649] = env->getMethodID(cls, "getOrbit", "()Lorg/orekit/orbits/Orbit;");
                mids$[mid_getP_dff5885c2c873297] = env->getMethodID(cls, "getP", "()D");
                mids$[mid_getQ_dff5885c2c873297] = env->getMethodID(cls, "getQ", "()D");
                mids$[mid_getRetrogradeFactor_570ce0828f81a2c1] = env->getMethodID(cls, "getRetrogradeFactor", "()I");
                mids$[mid_getSma_dff5885c2c873297] = env->getMethodID(cls, "getSma", "()D");
                mids$[mid_getVectorF_d52645e0d4c07563] = env->getMethodID(cls, "getVectorF", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getVectorG_d52645e0d4c07563] = env->getMethodID(cls, "getVectorG", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                mids$[mid_getVectorW_d52645e0d4c07563] = env->getMethodID(cls, "getVectorW", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AuxiliaryElements::AuxiliaryElements(const ::org::orekit::orbits::Orbit & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cf2001232a340a40, a0.this$, a1)) {}

            jdouble AuxiliaryElements::getAlpha() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAlpha_dff5885c2c873297]);
            }

            jdouble AuxiliaryElements::getB() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getB_dff5885c2c873297]);
            }

            jdouble AuxiliaryElements::getBeta() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getBeta_dff5885c2c873297]);
            }

            jdouble AuxiliaryElements::getC() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getC_dff5885c2c873297]);
            }

            ::org::orekit::time::AbsoluteDate AuxiliaryElements::getDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
            }

            jdouble AuxiliaryElements::getEcc() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getEcc_dff5885c2c873297]);
            }

            ::org::orekit::frames::Frame AuxiliaryElements::getFrame() const
            {
              return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
            }

            jdouble AuxiliaryElements::getGamma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getGamma_dff5885c2c873297]);
            }

            jdouble AuxiliaryElements::getH() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getH_dff5885c2c873297]);
            }

            jdouble AuxiliaryElements::getK() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getK_dff5885c2c873297]);
            }

            jdouble AuxiliaryElements::getKeplerianPeriod() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getKeplerianPeriod_dff5885c2c873297]);
            }

            jdouble AuxiliaryElements::getLM() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLM_dff5885c2c873297]);
            }

            jdouble AuxiliaryElements::getLf() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLf_dff5885c2c873297]);
            }

            jdouble AuxiliaryElements::getLv() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getLv_dff5885c2c873297]);
            }

            jdouble AuxiliaryElements::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_dff5885c2c873297]);
            }

            ::org::orekit::orbits::Orbit AuxiliaryElements::getOrbit() const
            {
              return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_getOrbit_cde5690bfa4f9649]));
            }

            jdouble AuxiliaryElements::getP() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getP_dff5885c2c873297]);
            }

            jdouble AuxiliaryElements::getQ() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getQ_dff5885c2c873297]);
            }

            jint AuxiliaryElements::getRetrogradeFactor() const
            {
              return env->callIntMethod(this$, mids$[mid_getRetrogradeFactor_570ce0828f81a2c1]);
            }

            jdouble AuxiliaryElements::getSma() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSma_dff5885c2c873297]);
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D AuxiliaryElements::getVectorF() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVectorF_d52645e0d4c07563]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D AuxiliaryElements::getVectorG() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVectorG_d52645e0d4c07563]));
            }

            ::org::hipparchus::geometry::euclidean::threed::Vector3D AuxiliaryElements::getVectorW() const
            {
              return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVectorW_d52645e0d4c07563]));
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
            static PyObject *t_AuxiliaryElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AuxiliaryElements_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AuxiliaryElements_init_(t_AuxiliaryElements *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AuxiliaryElements_getAlpha(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getB(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getBeta(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getC(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getDate(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getEcc(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getFrame(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getGamma(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getH(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getK(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getKeplerianPeriod(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getLM(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getLf(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getLv(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getMeanMotion(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getOrbit(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getP(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getQ(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getRetrogradeFactor(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getSma(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getVectorF(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getVectorG(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_getVectorW(t_AuxiliaryElements *self);
            static PyObject *t_AuxiliaryElements_get__alpha(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__b(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__beta(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__c(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__date(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__ecc(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__frame(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__gamma(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__h(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__k(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__keplerianPeriod(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__lM(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__lf(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__lv(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__meanMotion(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__orbit(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__p(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__q(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__retrogradeFactor(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__sma(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__vectorF(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__vectorG(t_AuxiliaryElements *self, void *data);
            static PyObject *t_AuxiliaryElements_get__vectorW(t_AuxiliaryElements *self, void *data);
            static PyGetSetDef t_AuxiliaryElements__fields_[] = {
              DECLARE_GET_FIELD(t_AuxiliaryElements, alpha),
              DECLARE_GET_FIELD(t_AuxiliaryElements, b),
              DECLARE_GET_FIELD(t_AuxiliaryElements, beta),
              DECLARE_GET_FIELD(t_AuxiliaryElements, c),
              DECLARE_GET_FIELD(t_AuxiliaryElements, date),
              DECLARE_GET_FIELD(t_AuxiliaryElements, ecc),
              DECLARE_GET_FIELD(t_AuxiliaryElements, frame),
              DECLARE_GET_FIELD(t_AuxiliaryElements, gamma),
              DECLARE_GET_FIELD(t_AuxiliaryElements, h),
              DECLARE_GET_FIELD(t_AuxiliaryElements, k),
              DECLARE_GET_FIELD(t_AuxiliaryElements, keplerianPeriod),
              DECLARE_GET_FIELD(t_AuxiliaryElements, lM),
              DECLARE_GET_FIELD(t_AuxiliaryElements, lf),
              DECLARE_GET_FIELD(t_AuxiliaryElements, lv),
              DECLARE_GET_FIELD(t_AuxiliaryElements, meanMotion),
              DECLARE_GET_FIELD(t_AuxiliaryElements, orbit),
              DECLARE_GET_FIELD(t_AuxiliaryElements, p),
              DECLARE_GET_FIELD(t_AuxiliaryElements, q),
              DECLARE_GET_FIELD(t_AuxiliaryElements, retrogradeFactor),
              DECLARE_GET_FIELD(t_AuxiliaryElements, sma),
              DECLARE_GET_FIELD(t_AuxiliaryElements, vectorF),
              DECLARE_GET_FIELD(t_AuxiliaryElements, vectorG),
              DECLARE_GET_FIELD(t_AuxiliaryElements, vectorW),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AuxiliaryElements__methods_[] = {
              DECLARE_METHOD(t_AuxiliaryElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AuxiliaryElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AuxiliaryElements, getAlpha, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getB, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getBeta, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getC, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getDate, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getEcc, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getFrame, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getGamma, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getH, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getK, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getKeplerianPeriod, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getLM, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getLf, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getLv, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getOrbit, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getP, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getQ, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getRetrogradeFactor, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getSma, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getVectorF, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getVectorG, METH_NOARGS),
              DECLARE_METHOD(t_AuxiliaryElements, getVectorW, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AuxiliaryElements)[] = {
              { Py_tp_methods, t_AuxiliaryElements__methods_ },
              { Py_tp_init, (void *) t_AuxiliaryElements_init_ },
              { Py_tp_getset, t_AuxiliaryElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AuxiliaryElements)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AuxiliaryElements, t_AuxiliaryElements, AuxiliaryElements);

            void t_AuxiliaryElements::install(PyObject *module)
            {
              installType(&PY_TYPE(AuxiliaryElements), &PY_TYPE_DEF(AuxiliaryElements), module, "AuxiliaryElements", 0);
            }

            void t_AuxiliaryElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AuxiliaryElements), "class_", make_descriptor(AuxiliaryElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AuxiliaryElements), "wrapfn_", make_descriptor(t_AuxiliaryElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AuxiliaryElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AuxiliaryElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AuxiliaryElements::initializeClass, 1)))
                return NULL;
              return t_AuxiliaryElements::wrap_Object(AuxiliaryElements(((t_AuxiliaryElements *) arg)->object.this$));
            }
            static PyObject *t_AuxiliaryElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AuxiliaryElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AuxiliaryElements_init_(t_AuxiliaryElements *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              jint a1;
              AuxiliaryElements object((jobject) NULL);

              if (!parseArgs(args, "kI", ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1))
              {
                INT_CALL(object = AuxiliaryElements(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_AuxiliaryElements_getAlpha(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAlpha());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getB(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getB());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getBeta(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getBeta());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getC(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getC());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getDate(t_AuxiliaryElements *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getEcc(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getEcc());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getFrame(t_AuxiliaryElements *self)
            {
              ::org::orekit::frames::Frame result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getGamma(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getGamma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getH(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getH());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getK(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getK());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getKeplerianPeriod(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getKeplerianPeriod());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getLM(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLM());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getLf(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLf());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getLv(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getLv());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getMeanMotion(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getOrbit(t_AuxiliaryElements *self)
            {
              ::org::orekit::orbits::Orbit result((jobject) NULL);
              OBJ_CALL(result = self->object.getOrbit());
              return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getP(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getP());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getQ(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getQ());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getRetrogradeFactor(t_AuxiliaryElements *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getRetrogradeFactor());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_AuxiliaryElements_getSma(t_AuxiliaryElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSma());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AuxiliaryElements_getVectorF(t_AuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorF());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getVectorG(t_AuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorG());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_getVectorW(t_AuxiliaryElements *self)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getVectorW());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            static PyObject *t_AuxiliaryElements_get__alpha(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAlpha());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__b(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getB());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__beta(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getBeta());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__c(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getC());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__date(t_AuxiliaryElements *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__ecc(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getEcc());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__frame(t_AuxiliaryElements *self, void *data)
            {
              ::org::orekit::frames::Frame value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__gamma(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getGamma());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__h(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getH());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__k(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getK());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__keplerianPeriod(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getKeplerianPeriod());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__lM(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLM());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__lf(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLf());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__lv(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getLv());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__meanMotion(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__orbit(t_AuxiliaryElements *self, void *data)
            {
              ::org::orekit::orbits::Orbit value((jobject) NULL);
              OBJ_CALL(value = self->object.getOrbit());
              return ::org::orekit::orbits::t_Orbit::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__p(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getP());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__q(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getQ());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__retrogradeFactor(t_AuxiliaryElements *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getRetrogradeFactor());
              return PyLong_FromLong((long) value);
            }

            static PyObject *t_AuxiliaryElements_get__sma(t_AuxiliaryElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSma());
              return PyFloat_FromDouble((double) value);
            }

            static PyObject *t_AuxiliaryElements_get__vectorF(t_AuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorF());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__vectorG(t_AuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorG());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }

            static PyObject *t_AuxiliaryElements_get__vectorW(t_AuxiliaryElements *self, void *data)
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
              OBJ_CALL(value = self->object.getVectorW());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader$LineParameters.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/util/SortedSet.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *CssiSpaceWeatherDataLoader::class$ = NULL;
            jmethodID *CssiSpaceWeatherDataLoader::mids$ = NULL;
            bool CssiSpaceWeatherDataLoader::live$ = false;

            jclass CssiSpaceWeatherDataLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_e93d77ad761aa1f2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDataSet_917725130bbb61f1] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_getLastDailyPredictedDate_85703d13e302437e] = env->getMethodID(cls, "getLastDailyPredictedDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getLastObservedDate_85703d13e302437e] = env->getMethodID(cls, "getLastObservedDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_loadData_1815f85c118161ad] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CssiSpaceWeatherDataLoader::CssiSpaceWeatherDataLoader(const ::org::orekit::time::TimeScale & a0) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader(env->newObject(initializeClass, &mids$, mid_init$_e93d77ad761aa1f2, a0.this$)) {}

            ::java::util::SortedSet CssiSpaceWeatherDataLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_917725130bbb61f1]));
            }

            ::org::orekit::time::AbsoluteDate CssiSpaceWeatherDataLoader::getLastDailyPredictedDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getLastDailyPredictedDate_85703d13e302437e]));
            }

            ::org::orekit::time::AbsoluteDate CssiSpaceWeatherDataLoader::getLastObservedDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getLastObservedDate_85703d13e302437e]));
            }

            void CssiSpaceWeatherDataLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_loadData_1815f85c118161ad], a0.this$, a1.this$);
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
            static PyObject *t_CssiSpaceWeatherDataLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherDataLoader_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherDataLoader_of_(t_CssiSpaceWeatherDataLoader *self, PyObject *args);
            static int t_CssiSpaceWeatherDataLoader_init_(t_CssiSpaceWeatherDataLoader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CssiSpaceWeatherDataLoader_getDataSet(t_CssiSpaceWeatherDataLoader *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader_getLastDailyPredictedDate(t_CssiSpaceWeatherDataLoader *self);
            static PyObject *t_CssiSpaceWeatherDataLoader_getLastObservedDate(t_CssiSpaceWeatherDataLoader *self);
            static PyObject *t_CssiSpaceWeatherDataLoader_loadData(t_CssiSpaceWeatherDataLoader *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader_get__dataSet(t_CssiSpaceWeatherDataLoader *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader_get__lastDailyPredictedDate(t_CssiSpaceWeatherDataLoader *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader_get__lastObservedDate(t_CssiSpaceWeatherDataLoader *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader_get__parameters_(t_CssiSpaceWeatherDataLoader *self, void *data);
            static PyGetSetDef t_CssiSpaceWeatherDataLoader__fields_[] = {
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader, dataSet),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader, lastDailyPredictedDate),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader, lastObservedDate),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CssiSpaceWeatherDataLoader__methods_[] = {
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, of_, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, getDataSet, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, getLastDailyPredictedDate, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, getLastObservedDate, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, loadData, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CssiSpaceWeatherDataLoader)[] = {
              { Py_tp_methods, t_CssiSpaceWeatherDataLoader__methods_ },
              { Py_tp_init, (void *) t_CssiSpaceWeatherDataLoader_init_ },
              { Py_tp_getset, t_CssiSpaceWeatherDataLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CssiSpaceWeatherDataLoader)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader),
              NULL
            };

            DEFINE_TYPE(CssiSpaceWeatherDataLoader, t_CssiSpaceWeatherDataLoader, CssiSpaceWeatherDataLoader);
            PyObject *t_CssiSpaceWeatherDataLoader::wrap_Object(const CssiSpaceWeatherDataLoader& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CssiSpaceWeatherDataLoader::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherDataLoader *self = (t_CssiSpaceWeatherDataLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CssiSpaceWeatherDataLoader::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CssiSpaceWeatherDataLoader::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherDataLoader *self = (t_CssiSpaceWeatherDataLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CssiSpaceWeatherDataLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(CssiSpaceWeatherDataLoader), &PY_TYPE_DEF(CssiSpaceWeatherDataLoader), module, "CssiSpaceWeatherDataLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(CssiSpaceWeatherDataLoader$LineParameters)));
            }

            void t_CssiSpaceWeatherDataLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader), "class_", make_descriptor(CssiSpaceWeatherDataLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader), "wrapfn_", make_descriptor(t_CssiSpaceWeatherDataLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CssiSpaceWeatherDataLoader::initializeClass, 1)))
                return NULL;
              return t_CssiSpaceWeatherDataLoader::wrap_Object(CssiSpaceWeatherDataLoader(((t_CssiSpaceWeatherDataLoader *) arg)->object.this$));
            }
            static PyObject *t_CssiSpaceWeatherDataLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CssiSpaceWeatherDataLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_of_(t_CssiSpaceWeatherDataLoader *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CssiSpaceWeatherDataLoader_init_(t_CssiSpaceWeatherDataLoader *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::TimeScale a0((jobject) NULL);
              CssiSpaceWeatherDataLoader object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
              {
                INT_CALL(object = CssiSpaceWeatherDataLoader(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_getDataSet(t_CssiSpaceWeatherDataLoader *self, PyObject *args)
            {
              ::java::util::SortedSet result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getDataSet());
                return ::java::util::t_SortedSet::wrap_Object(result, ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters));
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader), (PyObject *) self, "getDataSet", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_getLastDailyPredictedDate(t_CssiSpaceWeatherDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getLastDailyPredictedDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_getLastObservedDate(t_CssiSpaceWeatherDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getLastObservedDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_loadData(t_CssiSpaceWeatherDataLoader *self, PyObject *args)
            {
              ::java::io::InputStream a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.loadData(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader), (PyObject *) self, "loadData", args, 2);
            }
            static PyObject *t_CssiSpaceWeatherDataLoader_get__parameters_(t_CssiSpaceWeatherDataLoader *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_get__dataSet(t_CssiSpaceWeatherDataLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_get__lastDailyPredictedDate(t_CssiSpaceWeatherDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getLastDailyPredictedDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_get__lastObservedDate(t_CssiSpaceWeatherDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getLastObservedDate());
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
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/TimeStamped.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeStampedPVCoordinates::class$ = NULL;
      jmethodID *TimeStampedPVCoordinates::mids$ = NULL;
      bool TimeStampedPVCoordinates::live$ = false;

      jclass TimeStampedPVCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeStampedPVCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f88e9097ff8a5727] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
          mids$[mid_init$_db8760ebddf85268] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_d039183b82af87d6] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_9ff2f3ca38e5cacd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_eeb459fa935d9f89] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_1c345cf73262affe] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
          mids$[mid_init$_c4b26be37eff0af5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_df5cef70e3fdc417] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_init$_676a84b2fb6cb2c2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;DLorg/orekit/utils/PVCoordinates;)V");
          mids$[mid_getDate_85703d13e302437e] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_shiftedBy_9de3a3e1b3ac3d5a] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_toString_e3ec59f6a2ed4d7c] = env->getMethodID(cls, "toString", "(Lorg/orekit/time/TimeScale;)Ljava/lang/String;");
          mids$[mid_toTaylorProvider_2d8eb60a3ed519a7] = env->getMethodID(cls, "toTaylorProvider", "(Lorg/orekit/frames/Frame;)Lorg/orekit/utils/PVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_f88e9097ff8a5727, a0.this$, a1.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_db8760ebddf85268, a0.this$, a1.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_d039183b82af87d6, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::utils::PVCoordinates & a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_9ff2f3ca38e5cacd, a0.this$, a1.this$, a2.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::PVCoordinates & a2) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_eeb459fa935d9f89, a0.this$, a1, a2.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_1c345cf73262affe, a0.this$, a1.this$, a2.this$, a3.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::PVCoordinates & a2, jdouble a3, const ::org::orekit::utils::PVCoordinates & a4) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_c4b26be37eff0af5, a0.this$, a1, a2.this$, a3, a4.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::PVCoordinates & a2, jdouble a3, const ::org::orekit::utils::PVCoordinates & a4, jdouble a5, const ::org::orekit::utils::PVCoordinates & a6) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_df5cef70e3fdc417, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$)) {}

      TimeStampedPVCoordinates::TimeStampedPVCoordinates(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, const ::org::orekit::utils::PVCoordinates & a2, jdouble a3, const ::org::orekit::utils::PVCoordinates & a4, jdouble a5, const ::org::orekit::utils::PVCoordinates & a6, jdouble a7, const ::org::orekit::utils::PVCoordinates & a8) : ::org::orekit::utils::PVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_676a84b2fb6cb2c2, a0.this$, a1, a2.this$, a3, a4.this$, a5, a6.this$, a7, a8.this$)) {}

      ::org::orekit::time::AbsoluteDate TimeStampedPVCoordinates::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_85703d13e302437e]));
      }

      TimeStampedPVCoordinates TimeStampedPVCoordinates::shiftedBy(jdouble a0) const
      {
        return TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_shiftedBy_9de3a3e1b3ac3d5a], a0));
      }

      ::java::lang::String TimeStampedPVCoordinates::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      ::java::lang::String TimeStampedPVCoordinates::toString(const ::org::orekit::time::TimeScale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_e3ec59f6a2ed4d7c], a0.this$));
      }

      ::org::orekit::utils::PVCoordinatesProvider TimeStampedPVCoordinates::toTaylorProvider(const ::org::orekit::frames::Frame & a0) const
      {
        return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_toTaylorProvider_2d8eb60a3ed519a7], a0.this$));
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
      static PyObject *t_TimeStampedPVCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedPVCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TimeStampedPVCoordinates_init_(t_TimeStampedPVCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedPVCoordinates_getDate(t_TimeStampedPVCoordinates *self);
      static PyObject *t_TimeStampedPVCoordinates_shiftedBy(t_TimeStampedPVCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedPVCoordinates_toString(t_TimeStampedPVCoordinates *self, PyObject *args);
      static PyObject *t_TimeStampedPVCoordinates_toTaylorProvider(t_TimeStampedPVCoordinates *self, PyObject *arg);
      static PyObject *t_TimeStampedPVCoordinates_get__date(t_TimeStampedPVCoordinates *self, void *data);
      static PyGetSetDef t_TimeStampedPVCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedPVCoordinates, date),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedPVCoordinates__methods_[] = {
        DECLARE_METHOD(t_TimeStampedPVCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, getDate, METH_NOARGS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, toString, METH_VARARGS),
        DECLARE_METHOD(t_TimeStampedPVCoordinates, toTaylorProvider, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedPVCoordinates)[] = {
        { Py_tp_methods, t_TimeStampedPVCoordinates__methods_ },
        { Py_tp_init, (void *) t_TimeStampedPVCoordinates_init_ },
        { Py_tp_getset, t_TimeStampedPVCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedPVCoordinates)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::PVCoordinates),
        NULL
      };

      DEFINE_TYPE(TimeStampedPVCoordinates, t_TimeStampedPVCoordinates, TimeStampedPVCoordinates);

      void t_TimeStampedPVCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedPVCoordinates), &PY_TYPE_DEF(TimeStampedPVCoordinates), module, "TimeStampedPVCoordinates", 0);
      }

      void t_TimeStampedPVCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinates), "class_", make_descriptor(TimeStampedPVCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinates), "wrapfn_", make_descriptor(t_TimeStampedPVCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedPVCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedPVCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedPVCoordinates::initializeClass, 1)))
          return NULL;
        return t_TimeStampedPVCoordinates::wrap_Object(TimeStampedPVCoordinates(((t_TimeStampedPVCoordinates *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedPVCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedPVCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TimeStampedPVCoordinates_init_(t_TimeStampedPVCoordinates *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            jdouble a3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            jdouble a3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            jdouble a5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              break;
            }
          }
          goto err;
         case 9:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            jdouble a1;
            ::org::orekit::utils::PVCoordinates a2((jobject) NULL);
            jdouble a3;
            ::org::orekit::utils::PVCoordinates a4((jobject) NULL);
            jdouble a5;
            ::org::orekit::utils::PVCoordinates a6((jobject) NULL);
            jdouble a7;
            ::org::orekit::utils::PVCoordinates a8((jobject) NULL);
            TimeStampedPVCoordinates object((jobject) NULL);

            if (!parseArgs(args, "kDkDkDkDk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
            {
              INT_CALL(object = TimeStampedPVCoordinates(a0, a1, a2, a3, a4, a5, a6, a7, a8));
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

      static PyObject *t_TimeStampedPVCoordinates_getDate(t_TimeStampedPVCoordinates *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeStampedPVCoordinates_shiftedBy(t_TimeStampedPVCoordinates *self, PyObject *args)
      {
        jdouble a0;
        TimeStampedPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_TimeStampedPVCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(TimeStampedPVCoordinates), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_TimeStampedPVCoordinates_toString(t_TimeStampedPVCoordinates *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }
          break;
         case 1:
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.toString(a0));
              return j2p(result);
            }
          }
        }

        return callSuper(PY_TYPE(TimeStampedPVCoordinates), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_TimeStampedPVCoordinates_toTaylorProvider(t_TimeStampedPVCoordinates *self, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.toTaylorProvider(a0));
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toTaylorProvider", arg);
        return NULL;
      }

      static PyObject *t_TimeStampedPVCoordinates_get__date(t_TimeStampedPVCoordinates *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/stream/DoubleStream.h"
#include "java/util/function/Supplier.h"
#include "java/util/Spliterator$OfDouble.h"
#include "java/util/stream/Stream.h"
#include "java/util/OptionalDouble.h"
#include "java/util/PrimitiveIterator$OfDouble.h"
#include "java/lang/Double.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
#include "java/util/DoubleSummaryStatistics.h"
#include "java/util/stream/DoubleStream.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace stream {

      ::java::lang::Class *DoubleStream::class$ = NULL;
      jmethodID *DoubleStream::mids$ = NULL;
      bool DoubleStream::live$ = false;

      jclass DoubleStream::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/stream/DoubleStream");

          mids$ = new jmethodID[max_mid];
          mids$[mid_average_1edd71440bc9c025] = env->getMethodID(cls, "average", "()Ljava/util/OptionalDouble;");
          mids$[mid_boxed_20f6d2b462aaef4b] = env->getMethodID(cls, "boxed", "()Ljava/util/stream/Stream;");
          mids$[mid_concat_db68c624e3e364f3] = env->getStaticMethodID(cls, "concat", "(Ljava/util/stream/DoubleStream;Ljava/util/stream/DoubleStream;)Ljava/util/stream/DoubleStream;");
          mids$[mid_count_492808a339bfa35f] = env->getMethodID(cls, "count", "()J");
          mids$[mid_distinct_0636ae0567d24d63] = env->getMethodID(cls, "distinct", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_empty_0636ae0567d24d63] = env->getStaticMethodID(cls, "empty", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_findAny_1edd71440bc9c025] = env->getMethodID(cls, "findAny", "()Ljava/util/OptionalDouble;");
          mids$[mid_findFirst_1edd71440bc9c025] = env->getMethodID(cls, "findFirst", "()Ljava/util/OptionalDouble;");
          mids$[mid_forEach_6444b3e27af46e9d] = env->getMethodID(cls, "forEach", "(Ljava/util/function/DoubleConsumer;)V");
          mids$[mid_forEachOrdered_6444b3e27af46e9d] = env->getMethodID(cls, "forEachOrdered", "(Ljava/util/function/DoubleConsumer;)V");
          mids$[mid_iterator_5da49689b5c7efa5] = env->getMethodID(cls, "iterator", "()Ljava/util/PrimitiveIterator$OfDouble;");
          mids$[mid_limit_b87abe13a25ee77e] = env->getMethodID(cls, "limit", "(J)Ljava/util/stream/DoubleStream;");
          mids$[mid_max_1edd71440bc9c025] = env->getMethodID(cls, "max", "()Ljava/util/OptionalDouble;");
          mids$[mid_min_1edd71440bc9c025] = env->getMethodID(cls, "min", "()Ljava/util/OptionalDouble;");
          mids$[mid_of_9158f17504e0009c] = env->getStaticMethodID(cls, "of", "([D)Ljava/util/stream/DoubleStream;");
          mids$[mid_of_67dfbfacb9e9ae1f] = env->getStaticMethodID(cls, "of", "(D)Ljava/util/stream/DoubleStream;");
          mids$[mid_parallel_0636ae0567d24d63] = env->getMethodID(cls, "parallel", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_peek_c46a6a2ed14a2cb8] = env->getMethodID(cls, "peek", "(Ljava/util/function/DoubleConsumer;)Ljava/util/stream/DoubleStream;");
          mids$[mid_sequential_0636ae0567d24d63] = env->getMethodID(cls, "sequential", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_skip_b87abe13a25ee77e] = env->getMethodID(cls, "skip", "(J)Ljava/util/stream/DoubleStream;");
          mids$[mid_sorted_0636ae0567d24d63] = env->getMethodID(cls, "sorted", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_spliterator_801fcadd4b3f4dbb] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator$OfDouble;");
          mids$[mid_sum_dff5885c2c873297] = env->getMethodID(cls, "sum", "()D");
          mids$[mid_summaryStatistics_587562b2d9e0ac9f] = env->getMethodID(cls, "summaryStatistics", "()Ljava/util/DoubleSummaryStatistics;");
          mids$[mid_toArray_60c7040667a7dc5c] = env->getMethodID(cls, "toArray", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::OptionalDouble DoubleStream::average() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_average_1edd71440bc9c025]));
      }

      ::java::util::stream::Stream DoubleStream::boxed() const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_boxed_20f6d2b462aaef4b]));
      }

      DoubleStream DoubleStream::concat(const DoubleStream & a0, const DoubleStream & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_concat_db68c624e3e364f3], a0.this$, a1.this$));
      }

      jlong DoubleStream::count() const
      {
        return env->callLongMethod(this$, mids$[mid_count_492808a339bfa35f]);
      }

      DoubleStream DoubleStream::distinct() const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_distinct_0636ae0567d24d63]));
      }

      DoubleStream DoubleStream::empty()
      {
        jclass cls = env->getClass(initializeClass);
        return DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_empty_0636ae0567d24d63]));
      }

      ::java::util::OptionalDouble DoubleStream::findAny() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_findAny_1edd71440bc9c025]));
      }

      ::java::util::OptionalDouble DoubleStream::findFirst() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_findFirst_1edd71440bc9c025]));
      }

      void DoubleStream::forEach(const ::java::util::function::DoubleConsumer & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_forEach_6444b3e27af46e9d], a0.this$);
      }

      void DoubleStream::forEachOrdered(const ::java::util::function::DoubleConsumer & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_forEachOrdered_6444b3e27af46e9d], a0.this$);
      }

      ::java::util::PrimitiveIterator$OfDouble DoubleStream::iterator() const
      {
        return ::java::util::PrimitiveIterator$OfDouble(env->callObjectMethod(this$, mids$[mid_iterator_5da49689b5c7efa5]));
      }

      DoubleStream DoubleStream::limit(jlong a0) const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_limit_b87abe13a25ee77e], a0));
      }

      ::java::util::OptionalDouble DoubleStream::max$() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_max_1edd71440bc9c025]));
      }

      ::java::util::OptionalDouble DoubleStream::min$() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_min_1edd71440bc9c025]));
      }

      DoubleStream DoubleStream::of(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_of_9158f17504e0009c], a0.this$));
      }

      DoubleStream DoubleStream::of(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_of_67dfbfacb9e9ae1f], a0));
      }

      DoubleStream DoubleStream::parallel() const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_parallel_0636ae0567d24d63]));
      }

      DoubleStream DoubleStream::peek(const ::java::util::function::DoubleConsumer & a0) const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_peek_c46a6a2ed14a2cb8], a0.this$));
      }

      DoubleStream DoubleStream::sequential() const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_sequential_0636ae0567d24d63]));
      }

      DoubleStream DoubleStream::skip(jlong a0) const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_skip_b87abe13a25ee77e], a0));
      }

      DoubleStream DoubleStream::sorted() const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_sorted_0636ae0567d24d63]));
      }

      ::java::util::Spliterator$OfDouble DoubleStream::spliterator() const
      {
        return ::java::util::Spliterator$OfDouble(env->callObjectMethod(this$, mids$[mid_spliterator_801fcadd4b3f4dbb]));
      }

      jdouble DoubleStream::sum() const
      {
        return env->callDoubleMethod(this$, mids$[mid_sum_dff5885c2c873297]);
      }

      ::java::util::DoubleSummaryStatistics DoubleStream::summaryStatistics() const
      {
        return ::java::util::DoubleSummaryStatistics(env->callObjectMethod(this$, mids$[mid_summaryStatistics_587562b2d9e0ac9f]));
      }

      JArray< jdouble > DoubleStream::toArray() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_60c7040667a7dc5c]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace stream {
      static PyObject *t_DoubleStream_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleStream_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleStream_average(t_DoubleStream *self);
      static PyObject *t_DoubleStream_boxed(t_DoubleStream *self);
      static PyObject *t_DoubleStream_concat(PyTypeObject *type, PyObject *args);
      static PyObject *t_DoubleStream_count(t_DoubleStream *self);
      static PyObject *t_DoubleStream_distinct(t_DoubleStream *self);
      static PyObject *t_DoubleStream_empty(PyTypeObject *type);
      static PyObject *t_DoubleStream_findAny(t_DoubleStream *self);
      static PyObject *t_DoubleStream_findFirst(t_DoubleStream *self);
      static PyObject *t_DoubleStream_forEach(t_DoubleStream *self, PyObject *arg);
      static PyObject *t_DoubleStream_forEachOrdered(t_DoubleStream *self, PyObject *arg);
      static PyObject *t_DoubleStream_iterator(t_DoubleStream *self);
      static PyObject *t_DoubleStream_limit(t_DoubleStream *self, PyObject *arg);
      static PyObject *t_DoubleStream_max(t_DoubleStream *self);
      static PyObject *t_DoubleStream_min(t_DoubleStream *self);
      static PyObject *t_DoubleStream_of(PyTypeObject *type, PyObject *args);
      static PyObject *t_DoubleStream_parallel(t_DoubleStream *self);
      static PyObject *t_DoubleStream_peek(t_DoubleStream *self, PyObject *arg);
      static PyObject *t_DoubleStream_sequential(t_DoubleStream *self);
      static PyObject *t_DoubleStream_skip(t_DoubleStream *self, PyObject *arg);
      static PyObject *t_DoubleStream_sorted(t_DoubleStream *self);
      static PyObject *t_DoubleStream_spliterator(t_DoubleStream *self);
      static PyObject *t_DoubleStream_sum(t_DoubleStream *self);
      static PyObject *t_DoubleStream_summaryStatistics(t_DoubleStream *self);
      static PyObject *t_DoubleStream_toArray(t_DoubleStream *self);

      static PyMethodDef t_DoubleStream__methods_[] = {
        DECLARE_METHOD(t_DoubleStream, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleStream, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleStream, average, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, boxed, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, concat, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DoubleStream, count, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, distinct, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, empty, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_DoubleStream, findAny, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, findFirst, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, forEach, METH_O),
        DECLARE_METHOD(t_DoubleStream, forEachOrdered, METH_O),
        DECLARE_METHOD(t_DoubleStream, iterator, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, limit, METH_O),
        DECLARE_METHOD(t_DoubleStream, max, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, min, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, of, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_DoubleStream, parallel, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, peek, METH_O),
        DECLARE_METHOD(t_DoubleStream, sequential, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, skip, METH_O),
        DECLARE_METHOD(t_DoubleStream, sorted, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, spliterator, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, sum, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, summaryStatistics, METH_NOARGS),
        DECLARE_METHOD(t_DoubleStream, toArray, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DoubleStream)[] = {
        { Py_tp_methods, t_DoubleStream__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DoubleStream)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DoubleStream, t_DoubleStream, DoubleStream);

      void t_DoubleStream::install(PyObject *module)
      {
        installType(&PY_TYPE(DoubleStream), &PY_TYPE_DEF(DoubleStream), module, "DoubleStream", 0);
      }

      void t_DoubleStream::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleStream), "class_", make_descriptor(DoubleStream::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleStream), "wrapfn_", make_descriptor(t_DoubleStream::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleStream), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DoubleStream_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DoubleStream::initializeClass, 1)))
          return NULL;
        return t_DoubleStream::wrap_Object(DoubleStream(((t_DoubleStream *) arg)->object.this$));
      }
      static PyObject *t_DoubleStream_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DoubleStream::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DoubleStream_average(t_DoubleStream *self)
      {
        ::java::util::OptionalDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.average());
        return ::java::util::t_OptionalDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_boxed(t_DoubleStream *self)
      {
        ::java::util::stream::Stream result((jobject) NULL);
        OBJ_CALL(result = self->object.boxed());
        return ::java::util::stream::t_Stream::wrap_Object(result, ::java::lang::PY_TYPE(Double));
      }

      static PyObject *t_DoubleStream_concat(PyTypeObject *type, PyObject *args)
      {
        DoubleStream a0((jobject) NULL);
        DoubleStream a1((jobject) NULL);
        DoubleStream result((jobject) NULL);

        if (!parseArgs(args, "kk", DoubleStream::initializeClass, DoubleStream::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::java::util::stream::DoubleStream::concat(a0, a1));
          return t_DoubleStream::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "concat", args);
        return NULL;
      }

      static PyObject *t_DoubleStream_count(t_DoubleStream *self)
      {
        jlong result;
        OBJ_CALL(result = self->object.count());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      static PyObject *t_DoubleStream_distinct(t_DoubleStream *self)
      {
        DoubleStream result((jobject) NULL);
        OBJ_CALL(result = self->object.distinct());
        return t_DoubleStream::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_empty(PyTypeObject *type)
      {
        DoubleStream result((jobject) NULL);
        OBJ_CALL(result = ::java::util::stream::DoubleStream::empty());
        return t_DoubleStream::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_findAny(t_DoubleStream *self)
      {
        ::java::util::OptionalDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.findAny());
        return ::java::util::t_OptionalDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_findFirst(t_DoubleStream *self)
      {
        ::java::util::OptionalDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.findFirst());
        return ::java::util::t_OptionalDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_forEach(t_DoubleStream *self, PyObject *arg)
      {
        ::java::util::function::DoubleConsumer a0((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::function::DoubleConsumer::initializeClass, &a0))
        {
          OBJ_CALL(self->object.forEach(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "forEach", arg);
        return NULL;
      }

      static PyObject *t_DoubleStream_forEachOrdered(t_DoubleStream *self, PyObject *arg)
      {
        ::java::util::function::DoubleConsumer a0((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::function::DoubleConsumer::initializeClass, &a0))
        {
          OBJ_CALL(self->object.forEachOrdered(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "forEachOrdered", arg);
        return NULL;
      }

      static PyObject *t_DoubleStream_iterator(t_DoubleStream *self)
      {
        ::java::util::PrimitiveIterator$OfDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_PrimitiveIterator$OfDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_limit(t_DoubleStream *self, PyObject *arg)
      {
        jlong a0;
        DoubleStream result((jobject) NULL);

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.limit(a0));
          return t_DoubleStream::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "limit", arg);
        return NULL;
      }

      static PyObject *t_DoubleStream_max(t_DoubleStream *self)
      {
        ::java::util::OptionalDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.max$());
        return ::java::util::t_OptionalDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_min(t_DoubleStream *self)
      {
        ::java::util::OptionalDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.min$());
        return ::java::util::t_OptionalDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_of(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);
            DoubleStream result((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(result = ::java::util::stream::DoubleStream::of(a0));
              return t_DoubleStream::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            DoubleStream result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::java::util::stream::DoubleStream::of(a0));
              return t_DoubleStream::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "of", args);
        return NULL;
      }

      static PyObject *t_DoubleStream_parallel(t_DoubleStream *self)
      {
        DoubleStream result((jobject) NULL);
        OBJ_CALL(result = self->object.parallel());
        return t_DoubleStream::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_peek(t_DoubleStream *self, PyObject *arg)
      {
        ::java::util::function::DoubleConsumer a0((jobject) NULL);
        DoubleStream result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::function::DoubleConsumer::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.peek(a0));
          return t_DoubleStream::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "peek", arg);
        return NULL;
      }

      static PyObject *t_DoubleStream_sequential(t_DoubleStream *self)
      {
        DoubleStream result((jobject) NULL);
        OBJ_CALL(result = self->object.sequential());
        return t_DoubleStream::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_skip(t_DoubleStream *self, PyObject *arg)
      {
        jlong a0;
        DoubleStream result((jobject) NULL);

        if (!parseArg(arg, "J", &a0))
        {
          OBJ_CALL(result = self->object.skip(a0));
          return t_DoubleStream::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "skip", arg);
        return NULL;
      }

      static PyObject *t_DoubleStream_sorted(t_DoubleStream *self)
      {
        DoubleStream result((jobject) NULL);
        OBJ_CALL(result = self->object.sorted());
        return t_DoubleStream::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_spliterator(t_DoubleStream *self)
      {
        ::java::util::Spliterator$OfDouble result((jobject) NULL);
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator$OfDouble::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_sum(t_DoubleStream *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.sum());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DoubleStream_summaryStatistics(t_DoubleStream *self)
      {
        ::java::util::DoubleSummaryStatistics result((jobject) NULL);
        OBJ_CALL(result = self->object.summaryStatistics());
        return ::java::util::t_DoubleSummaryStatistics::wrap_Object(result);
      }

      static PyObject *t_DoubleStream_toArray(t_DoubleStream *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.toArray());
        return result.wrap();
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *StationDisplacement::class$ = NULL;
          jmethodID *StationDisplacement::mids$ = NULL;
          bool StationDisplacement::live$ = false;

          jclass StationDisplacement::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/StationDisplacement");

              mids$ = new jmethodID[max_mid];
              mids$[mid_displacement_dc5338a5a1255d1d] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D StationDisplacement::displacement(const ::org::orekit::data::BodiesElements & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_displacement_dc5338a5a1255d1d], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_StationDisplacement_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StationDisplacement_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_StationDisplacement_displacement(t_StationDisplacement *self, PyObject *args);

          static PyMethodDef t_StationDisplacement__methods_[] = {
            DECLARE_METHOD(t_StationDisplacement, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StationDisplacement, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_StationDisplacement, displacement, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(StationDisplacement)[] = {
            { Py_tp_methods, t_StationDisplacement__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(StationDisplacement)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(StationDisplacement, t_StationDisplacement, StationDisplacement);

          void t_StationDisplacement::install(PyObject *module)
          {
            installType(&PY_TYPE(StationDisplacement), &PY_TYPE_DEF(StationDisplacement), module, "StationDisplacement", 0);
          }

          void t_StationDisplacement::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(StationDisplacement), "class_", make_descriptor(StationDisplacement::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StationDisplacement), "wrapfn_", make_descriptor(t_StationDisplacement::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(StationDisplacement), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_StationDisplacement_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, StationDisplacement::initializeClass, 1)))
              return NULL;
            return t_StationDisplacement::wrap_Object(StationDisplacement(((t_StationDisplacement *) arg)->object.this$));
          }
          static PyObject *t_StationDisplacement_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, StationDisplacement::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_StationDisplacement_displacement(t_StationDisplacement *self, PyObject *args)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::data::BodiesElements::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.displacement(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "displacement", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeType.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/RotationOrder.h"
#include "java/lang/Boolean.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemMetadata::class$ = NULL;
              jmethodID *AemMetadata::mids$ = NULL;
              bool AemMetadata::live$ = false;

              jclass AemMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
                  mids$[mid_getAttitudeType_c5e03d4484427bd1] = env->getMethodID(cls, "getAttitudeType", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;");
                  mids$[mid_getEndpoints_35bd4909c56b6915] = env->getMethodID(cls, "getEndpoints", "()Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;");
                  mids$[mid_getEulerRotSeq_5aea028785008a06] = env->getMethodID(cls, "getEulerRotSeq", "()Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;");
                  mids$[mid_getFrameAngvelFrame_5d5dd95b04037824] = env->getMethodID(cls, "getFrameAngvelFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getInterpolationDegree_570ce0828f81a2c1] = env->getMethodID(cls, "getInterpolationDegree", "()I");
                  mids$[mid_getInterpolationMethod_11b109bd155ca898] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
                  mids$[mid_getInterpolationSamples_570ce0828f81a2c1] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStartTime_85703d13e302437e] = env->getMethodID(cls, "getStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStopTime_85703d13e302437e] = env->getMethodID(cls, "getStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStartTime_85703d13e302437e] = env->getMethodID(cls, "getUseableStartTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getUseableStopTime_85703d13e302437e] = env->getMethodID(cls, "getUseableStopTime", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_isFirst_32e0a2327c4a0419] = env->getMethodID(cls, "isFirst", "()Ljava/lang/Boolean;");
                  mids$[mid_isSpacecraftBodyRate_b108b35ef48e27bd] = env->getMethodID(cls, "isSpacecraftBodyRate", "()Z");
                  mids$[mid_rateFrameIsA_b108b35ef48e27bd] = env->getMethodID(cls, "rateFrameIsA", "()Z");
                  mids$[mid_setAngvelFrame_849bc9e3b38b9bcb] = env->getMethodID(cls, "setAngvelFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setAttitudeType_beb598ebb58649c9] = env->getMethodID(cls, "setAttitudeType", "(Lorg/orekit/files/ccsds/ndm/adm/AttitudeType;)V");
                  mids$[mid_setEulerRotSeq_a908138988eb2a50] = env->getMethodID(cls, "setEulerRotSeq", "(Lorg/hipparchus/geometry/euclidean/threed/RotationOrder;)V");
                  mids$[mid_setInterpolationDegree_99803b0791f320ff] = env->getMethodID(cls, "setInterpolationDegree", "(I)V");
                  mids$[mid_setInterpolationMethod_d0bc48d5b00dc40c] = env->getMethodID(cls, "setInterpolationMethod", "(Ljava/lang/String;)V");
                  mids$[mid_setIsFirst_bd04c9335fb9e4cf] = env->getMethodID(cls, "setIsFirst", "(Z)V");
                  mids$[mid_setRateFrameIsA_bd04c9335fb9e4cf] = env->getMethodID(cls, "setRateFrameIsA", "(Z)V");
                  mids$[mid_setStartTime_600a2a61652bc473] = env->getMethodID(cls, "setStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setStopTime_600a2a61652bc473] = env->getMethodID(cls, "setStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStartTime_600a2a61652bc473] = env->getMethodID(cls, "setUseableStartTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setUseableStopTime_600a2a61652bc473] = env->getMethodID(cls, "setUseableStopTime", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemMetadata::AemMetadata(jint a0) : ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

              ::org::orekit::files::ccsds::ndm::adm::AttitudeType AemMetadata::getAttitudeType() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeType(env->callObjectMethod(this$, mids$[mid_getAttitudeType_c5e03d4484427bd1]));
              }

              ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints AemMetadata::getEndpoints() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints(env->callObjectMethod(this$, mids$[mid_getEndpoints_35bd4909c56b6915]));
              }

              ::org::hipparchus::geometry::euclidean::threed::RotationOrder AemMetadata::getEulerRotSeq() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::RotationOrder(env->callObjectMethod(this$, mids$[mid_getEulerRotSeq_5aea028785008a06]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade AemMetadata::getFrameAngvelFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrameAngvelFrame_5d5dd95b04037824]));
              }

              jint AemMetadata::getInterpolationDegree() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationDegree_570ce0828f81a2c1]);
              }

              ::java::lang::String AemMetadata::getInterpolationMethod() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_11b109bd155ca898]));
              }

              jint AemMetadata::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_570ce0828f81a2c1]);
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStartTime_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStopTime_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getUseableStartTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStartTime_85703d13e302437e]));
              }

              ::org::orekit::time::AbsoluteDate AemMetadata::getUseableStopTime() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getUseableStopTime_85703d13e302437e]));
              }

              ::java::lang::Boolean AemMetadata::isFirst() const
              {
                return ::java::lang::Boolean(env->callObjectMethod(this$, mids$[mid_isFirst_32e0a2327c4a0419]));
              }

              jboolean AemMetadata::isSpacecraftBodyRate() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isSpacecraftBodyRate_b108b35ef48e27bd]);
              }

              jboolean AemMetadata::rateFrameIsA() const
              {
                return env->callBooleanMethod(this$, mids$[mid_rateFrameIsA_b108b35ef48e27bd]);
              }

              void AemMetadata::setAngvelFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAngvelFrame_849bc9e3b38b9bcb], a0.this$);
              }

              void AemMetadata::setAttitudeType(const ::org::orekit::files::ccsds::ndm::adm::AttitudeType & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setAttitudeType_beb598ebb58649c9], a0.this$);
              }

              void AemMetadata::setEulerRotSeq(const ::org::hipparchus::geometry::euclidean::threed::RotationOrder & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEulerRotSeq_a908138988eb2a50], a0.this$);
              }

              void AemMetadata::setInterpolationDegree(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationDegree_99803b0791f320ff], a0);
              }

              void AemMetadata::setInterpolationMethod(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setInterpolationMethod_d0bc48d5b00dc40c], a0.this$);
              }

              void AemMetadata::setIsFirst(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setIsFirst_bd04c9335fb9e4cf], a0);
              }

              void AemMetadata::setRateFrameIsA(jboolean a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setRateFrameIsA_bd04c9335fb9e4cf], a0);
              }

              void AemMetadata::setStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStartTime_600a2a61652bc473], a0.this$);
              }

              void AemMetadata::setStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setStopTime_600a2a61652bc473], a0.this$);
              }

              void AemMetadata::setUseableStartTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStartTime_600a2a61652bc473], a0.this$);
              }

              void AemMetadata::setUseableStopTime(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setUseableStopTime_600a2a61652bc473], a0.this$);
              }

              void AemMetadata::validate(jdouble a0) const
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
            namespace aem {
              static PyObject *t_AemMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AemMetadata_init_(t_AemMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemMetadata_getAttitudeType(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getEndpoints(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getEulerRotSeq(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getFrameAngvelFrame(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getInterpolationDegree(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getInterpolationMethod(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getInterpolationSamples(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getStart(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getStartTime(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getStop(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getStopTime(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getUseableStartTime(t_AemMetadata *self);
              static PyObject *t_AemMetadata_getUseableStopTime(t_AemMetadata *self);
              static PyObject *t_AemMetadata_isFirst(t_AemMetadata *self);
              static PyObject *t_AemMetadata_isSpacecraftBodyRate(t_AemMetadata *self);
              static PyObject *t_AemMetadata_rateFrameIsA(t_AemMetadata *self);
              static PyObject *t_AemMetadata_setAngvelFrame(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setAttitudeType(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setEulerRotSeq(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setInterpolationDegree(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setInterpolationMethod(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setIsFirst(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setRateFrameIsA(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setStartTime(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setStopTime(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setUseableStartTime(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_setUseableStopTime(t_AemMetadata *self, PyObject *arg);
              static PyObject *t_AemMetadata_validate(t_AemMetadata *self, PyObject *args);
              static int t_AemMetadata_set__angvelFrame(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__attitudeType(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__attitudeType(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__endpoints(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__eulerRotSeq(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__eulerRotSeq(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__first(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__frameAngvelFrame(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__interpolationDegree(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__interpolationDegree(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__interpolationMethod(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__interpolationMethod(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__interpolationSamples(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__spacecraftBodyRate(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__start(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__startTime(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__startTime(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__stop(t_AemMetadata *self, void *data);
              static PyObject *t_AemMetadata_get__stopTime(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__stopTime(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__useableStartTime(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__useableStartTime(t_AemMetadata *self, PyObject *arg, void *data);
              static PyObject *t_AemMetadata_get__useableStopTime(t_AemMetadata *self, void *data);
              static int t_AemMetadata_set__useableStopTime(t_AemMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_AemMetadata__fields_[] = {
                DECLARE_SET_FIELD(t_AemMetadata, angvelFrame),
                DECLARE_GETSET_FIELD(t_AemMetadata, attitudeType),
                DECLARE_GET_FIELD(t_AemMetadata, endpoints),
                DECLARE_GETSET_FIELD(t_AemMetadata, eulerRotSeq),
                DECLARE_GET_FIELD(t_AemMetadata, first),
                DECLARE_GET_FIELD(t_AemMetadata, frameAngvelFrame),
                DECLARE_GETSET_FIELD(t_AemMetadata, interpolationDegree),
                DECLARE_GETSET_FIELD(t_AemMetadata, interpolationMethod),
                DECLARE_GET_FIELD(t_AemMetadata, interpolationSamples),
                DECLARE_GET_FIELD(t_AemMetadata, spacecraftBodyRate),
                DECLARE_GET_FIELD(t_AemMetadata, start),
                DECLARE_GETSET_FIELD(t_AemMetadata, startTime),
                DECLARE_GET_FIELD(t_AemMetadata, stop),
                DECLARE_GETSET_FIELD(t_AemMetadata, stopTime),
                DECLARE_GETSET_FIELD(t_AemMetadata, useableStartTime),
                DECLARE_GETSET_FIELD(t_AemMetadata, useableStopTime),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemMetadata__methods_[] = {
                DECLARE_METHOD(t_AemMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemMetadata, getAttitudeType, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getEndpoints, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getEulerRotSeq, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getFrameAngvelFrame, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getInterpolationDegree, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getStartTime, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getStop, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getStopTime, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getUseableStartTime, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, getUseableStopTime, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, isFirst, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, isSpacecraftBodyRate, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, rateFrameIsA, METH_NOARGS),
                DECLARE_METHOD(t_AemMetadata, setAngvelFrame, METH_O),
                DECLARE_METHOD(t_AemMetadata, setAttitudeType, METH_O),
                DECLARE_METHOD(t_AemMetadata, setEulerRotSeq, METH_O),
                DECLARE_METHOD(t_AemMetadata, setInterpolationDegree, METH_O),
                DECLARE_METHOD(t_AemMetadata, setInterpolationMethod, METH_O),
                DECLARE_METHOD(t_AemMetadata, setIsFirst, METH_O),
                DECLARE_METHOD(t_AemMetadata, setRateFrameIsA, METH_O),
                DECLARE_METHOD(t_AemMetadata, setStartTime, METH_O),
                DECLARE_METHOD(t_AemMetadata, setStopTime, METH_O),
                DECLARE_METHOD(t_AemMetadata, setUseableStartTime, METH_O),
                DECLARE_METHOD(t_AemMetadata, setUseableStopTime, METH_O),
                DECLARE_METHOD(t_AemMetadata, validate, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemMetadata)[] = {
                { Py_tp_methods, t_AemMetadata__methods_ },
                { Py_tp_init, (void *) t_AemMetadata_init_ },
                { Py_tp_getset, t_AemMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmMetadata),
                NULL
              };

              DEFINE_TYPE(AemMetadata, t_AemMetadata, AemMetadata);

              void t_AemMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(AemMetadata), &PY_TYPE_DEF(AemMetadata), module, "AemMetadata", 0);
              }

              void t_AemMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadata), "class_", make_descriptor(AemMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadata), "wrapfn_", make_descriptor(t_AemMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemMetadata), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemMetadata::initializeClass, 1)))
                  return NULL;
                return t_AemMetadata::wrap_Object(AemMetadata(((t_AemMetadata *) arg)->object.this$));
              }
              static PyObject *t_AemMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AemMetadata_init_(t_AemMetadata *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                AemMetadata object((jobject) NULL);

                if (!parseArgs(args, "I", &a0))
                {
                  INT_CALL(object = AemMetadata(a0));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AemMetadata_getAttitudeType(t_AemMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeType result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeType::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getEndpoints(t_AemMetadata *self)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints result((jobject) NULL);
                OBJ_CALL(result = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getEulerRotSeq(t_AemMetadata *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder result((jobject) NULL);
                OBJ_CALL(result = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getFrameAngvelFrame(t_AemMetadata *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrameAngvelFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getInterpolationDegree(t_AemMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AemMetadata_getInterpolationMethod(t_AemMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return j2p(result);
              }

              static PyObject *t_AemMetadata_getInterpolationSamples(t_AemMetadata *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AemMetadata_getStart(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getStartTime(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getStop(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getStopTime(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getUseableStartTime(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_getUseableStopTime(t_AemMetadata *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_isFirst(t_AemMetadata *self)
              {
                ::java::lang::Boolean result((jobject) NULL);
                OBJ_CALL(result = self->object.isFirst());
                return ::java::lang::t_Boolean::wrap_Object(result);
              }

              static PyObject *t_AemMetadata_isSpacecraftBodyRate(t_AemMetadata *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isSpacecraftBodyRate());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_AemMetadata_rateFrameIsA(t_AemMetadata *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.rateFrameIsA());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_AemMetadata_setAngvelFrame(t_AemMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setAngvelFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAngvelFrame", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setAttitudeType(t_AemMetadata *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeType a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::adm::AttitudeType::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::t_AttitudeType::parameters_))
                {
                  OBJ_CALL(self->object.setAttitudeType(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setAttitudeType", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setEulerRotSeq(t_AemMetadata *self, PyObject *arg)
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

              static PyObject *t_AemMetadata_setInterpolationDegree(t_AemMetadata *self, PyObject *arg)
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

              static PyObject *t_AemMetadata_setInterpolationMethod(t_AemMetadata *self, PyObject *arg)
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

              static PyObject *t_AemMetadata_setIsFirst(t_AemMetadata *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setIsFirst(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setIsFirst", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setRateFrameIsA(t_AemMetadata *self, PyObject *arg)
              {
                jboolean a0;

                if (!parseArg(arg, "Z", &a0))
                {
                  OBJ_CALL(self->object.setRateFrameIsA(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setRateFrameIsA", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setStartTime(t_AemMetadata *self, PyObject *arg)
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

              static PyObject *t_AemMetadata_setStopTime(t_AemMetadata *self, PyObject *arg)
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

              static PyObject *t_AemMetadata_setUseableStartTime(t_AemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStartTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStartTime", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_setUseableStopTime(t_AemMetadata *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setUseableStopTime(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setUseableStopTime", arg);
                return NULL;
              }

              static PyObject *t_AemMetadata_validate(t_AemMetadata *self, PyObject *args)
              {
                jdouble a0;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(self->object.validate(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AemMetadata), (PyObject *) self, "validate", args, 2);
              }

              static int t_AemMetadata_set__angvelFrame(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAngvelFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "angvelFrame", arg);
                return -1;
              }

              static PyObject *t_AemMetadata_get__attitudeType(t_AemMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeType value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeType());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeType::wrap_Object(value);
              }
              static int t_AemMetadata_set__attitudeType(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::ndm::adm::AttitudeType value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::adm::AttitudeType::initializeClass, &value))
                  {
                    INT_CALL(self->object.setAttitudeType(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "attitudeType", arg);
                return -1;
              }

              static PyObject *t_AemMetadata_get__endpoints(t_AemMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AttitudeEndpoints value((jobject) NULL);
                OBJ_CALL(value = self->object.getEndpoints());
                return ::org::orekit::files::ccsds::ndm::adm::t_AttitudeEndpoints::wrap_Object(value);
              }

              static PyObject *t_AemMetadata_get__eulerRotSeq(t_AemMetadata *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::RotationOrder value((jobject) NULL);
                OBJ_CALL(value = self->object.getEulerRotSeq());
                return ::org::hipparchus::geometry::euclidean::threed::t_RotationOrder::wrap_Object(value);
              }
              static int t_AemMetadata_set__eulerRotSeq(t_AemMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AemMetadata_get__first(t_AemMetadata *self, void *data)
              {
                ::java::lang::Boolean value((jobject) NULL);
                OBJ_CALL(value = self->object.isFirst());
                return ::java::lang::t_Boolean::wrap_Object(value);
              }

              static PyObject *t_AemMetadata_get__frameAngvelFrame(t_AemMetadata *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrameAngvelFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }

              static PyObject *t_AemMetadata_get__interpolationDegree(t_AemMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationDegree());
                return PyLong_FromLong((long) value);
              }
              static int t_AemMetadata_set__interpolationDegree(t_AemMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AemMetadata_get__interpolationMethod(t_AemMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return j2p(value);
              }
              static int t_AemMetadata_set__interpolationMethod(t_AemMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AemMetadata_get__interpolationSamples(t_AemMetadata *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_AemMetadata_get__spacecraftBodyRate(t_AemMetadata *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isSpacecraftBodyRate());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_AemMetadata_get__start(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AemMetadata_get__startTime(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AemMetadata_set__startTime(t_AemMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AemMetadata_get__stop(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AemMetadata_get__stopTime(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AemMetadata_set__stopTime(t_AemMetadata *self, PyObject *arg, void *data)
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

              static PyObject *t_AemMetadata_get__useableStartTime(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStartTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AemMetadata_set__useableStartTime(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStartTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStartTime", arg);
                return -1;
              }

              static PyObject *t_AemMetadata_get__useableStopTime(t_AemMetadata *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getUseableStopTime());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_AemMetadata_set__useableStopTime(t_AemMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setUseableStopTime(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "useableStopTime", arg);
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
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/frames/LOF.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *FieldStateCovariance::class$ = NULL;
      jmethodID *FieldStateCovariance::mids$ = NULL;
      bool FieldStateCovariance::live$ = false;

      jclass FieldStateCovariance::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/FieldStateCovariance");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2eeff210f6495c96] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/LOF;)V");
          mids$[mid_init$_f76c0380c93d0193] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)V");
          mids$[mid_changeCovarianceFrame_f4f5b65c95d1a515] = env->getMethodID(cls, "changeCovarianceFrame", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_changeCovarianceFrame_7fc85fab4fb9f757] = env->getMethodID(cls, "changeCovarianceFrame", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/frames/LOF;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_changeCovarianceType_3109b3511c2d70d9] = env->getMethodID(cls, "changeCovarianceType", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/orbits/OrbitType;Lorg/orekit/orbits/PositionAngleType;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_getDate_51da00d5b8a3b5df] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/FieldAbsoluteDate;");
          mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getLOF_d1997b828913f65f] = env->getMethodID(cls, "getLOF", "()Lorg/orekit/frames/LOF;");
          mids$[mid_getMatrix_c992983685c753c5] = env->getMethodID(cls, "getMatrix", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_getPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_shiftedBy_dcaf767057f01ca9] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_toStateCovariance_9114b59f891867ba] = env->getMethodID(cls, "toStateCovariance", "()Lorg/orekit/propagation/StateCovariance;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldStateCovariance::FieldStateCovariance(const ::org::hipparchus::linear::FieldMatrix & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::LOF & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2eeff210f6495c96, a0.this$, a1.this$, a2.this$)) {}

      FieldStateCovariance::FieldStateCovariance(const ::org::hipparchus::linear::FieldMatrix & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::orbits::OrbitType & a3, const ::org::orekit::orbits::PositionAngleType & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f76c0380c93d0193, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      FieldStateCovariance FieldStateCovariance::changeCovarianceFrame(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceFrame_f4f5b65c95d1a515], a0.this$, a1.this$));
      }

      FieldStateCovariance FieldStateCovariance::changeCovarianceFrame(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::frames::LOF & a1) const
      {
        return FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceFrame_7fc85fab4fb9f757], a0.this$, a1.this$));
      }

      FieldStateCovariance FieldStateCovariance::changeCovarianceType(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::orbits::OrbitType & a1, const ::org::orekit::orbits::PositionAngleType & a2) const
      {
        return FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_changeCovarianceType_3109b3511c2d70d9], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::FieldAbsoluteDate FieldStateCovariance::getDate() const
      {
        return ::org::orekit::time::FieldAbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_51da00d5b8a3b5df]));
      }

      ::org::orekit::frames::Frame FieldStateCovariance::getFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_b86f9f61d97a7244]));
      }

      ::org::orekit::frames::LOF FieldStateCovariance::getLOF() const
      {
        return ::org::orekit::frames::LOF(env->callObjectMethod(this$, mids$[mid_getLOF_d1997b828913f65f]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldStateCovariance::getMatrix() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getMatrix_c992983685c753c5]));
      }

      ::org::orekit::orbits::OrbitType FieldStateCovariance::getOrbitType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_e29360d311dc0e20]));
      }

      ::org::orekit::orbits::PositionAngleType FieldStateCovariance::getPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_8f17e83e5a86217c]));
      }

      FieldStateCovariance FieldStateCovariance::shiftedBy(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::FieldOrbit & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
      {
        return FieldStateCovariance(env->callObjectMethod(this$, mids$[mid_shiftedBy_dcaf767057f01ca9], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::propagation::StateCovariance FieldStateCovariance::toStateCovariance() const
      {
        return ::org::orekit::propagation::StateCovariance(env->callObjectMethod(this$, mids$[mid_toStateCovariance_9114b59f891867ba]));
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
      static PyObject *t_FieldStateCovariance_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldStateCovariance_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldStateCovariance_of_(t_FieldStateCovariance *self, PyObject *args);
      static int t_FieldStateCovariance_init_(t_FieldStateCovariance *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldStateCovariance_changeCovarianceFrame(t_FieldStateCovariance *self, PyObject *args);
      static PyObject *t_FieldStateCovariance_changeCovarianceType(t_FieldStateCovariance *self, PyObject *args);
      static PyObject *t_FieldStateCovariance_getDate(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_getFrame(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_getLOF(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_getMatrix(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_getOrbitType(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_getPositionAngleType(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_shiftedBy(t_FieldStateCovariance *self, PyObject *args);
      static PyObject *t_FieldStateCovariance_toStateCovariance(t_FieldStateCovariance *self);
      static PyObject *t_FieldStateCovariance_get__date(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__frame(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__lOF(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__matrix(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__orbitType(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__positionAngleType(t_FieldStateCovariance *self, void *data);
      static PyObject *t_FieldStateCovariance_get__parameters_(t_FieldStateCovariance *self, void *data);
      static PyGetSetDef t_FieldStateCovariance__fields_[] = {
        DECLARE_GET_FIELD(t_FieldStateCovariance, date),
        DECLARE_GET_FIELD(t_FieldStateCovariance, frame),
        DECLARE_GET_FIELD(t_FieldStateCovariance, lOF),
        DECLARE_GET_FIELD(t_FieldStateCovariance, matrix),
        DECLARE_GET_FIELD(t_FieldStateCovariance, orbitType),
        DECLARE_GET_FIELD(t_FieldStateCovariance, positionAngleType),
        DECLARE_GET_FIELD(t_FieldStateCovariance, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldStateCovariance__methods_[] = {
        DECLARE_METHOD(t_FieldStateCovariance, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldStateCovariance, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldStateCovariance, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldStateCovariance, changeCovarianceFrame, METH_VARARGS),
        DECLARE_METHOD(t_FieldStateCovariance, changeCovarianceType, METH_VARARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getDate, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getFrame, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getLOF, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getMatrix, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getOrbitType, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, getPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_FieldStateCovariance, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_FieldStateCovariance, toStateCovariance, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldStateCovariance)[] = {
        { Py_tp_methods, t_FieldStateCovariance__methods_ },
        { Py_tp_init, (void *) t_FieldStateCovariance_init_ },
        { Py_tp_getset, t_FieldStateCovariance__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldStateCovariance)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldStateCovariance, t_FieldStateCovariance, FieldStateCovariance);
      PyObject *t_FieldStateCovariance::wrap_Object(const FieldStateCovariance& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldStateCovariance::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldStateCovariance *self = (t_FieldStateCovariance *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldStateCovariance::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldStateCovariance::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldStateCovariance *self = (t_FieldStateCovariance *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldStateCovariance::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldStateCovariance), &PY_TYPE_DEF(FieldStateCovariance), module, "FieldStateCovariance", 0);
      }

      void t_FieldStateCovariance::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateCovariance), "class_", make_descriptor(FieldStateCovariance::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateCovariance), "wrapfn_", make_descriptor(t_FieldStateCovariance::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStateCovariance), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldStateCovariance_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldStateCovariance::initializeClass, 1)))
          return NULL;
        return t_FieldStateCovariance::wrap_Object(FieldStateCovariance(((t_FieldStateCovariance *) arg)->object.this$));
      }
      static PyObject *t_FieldStateCovariance_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldStateCovariance::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldStateCovariance_of_(t_FieldStateCovariance *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldStateCovariance_init_(t_FieldStateCovariance *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::LOF a2((jobject) NULL);
            FieldStateCovariance object((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::hipparchus::linear::FieldMatrix::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              INT_CALL(object = FieldStateCovariance(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::orbits::OrbitType a3((jobject) NULL);
            PyTypeObject **p3;
            ::org::orekit::orbits::PositionAngleType a4((jobject) NULL);
            PyTypeObject **p4;
            FieldStateCovariance object((jobject) NULL);

            if (!parseArgs(args, "KKkKK", ::org::hipparchus::linear::FieldMatrix::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &a3, &p3, ::org::orekit::orbits::t_OrbitType::parameters_, &a4, &p4, ::org::orekit::orbits::t_PositionAngleType::parameters_))
            {
              INT_CALL(object = FieldStateCovariance(a0, a1, a2, a3, a4));
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

      static PyObject *t_FieldStateCovariance_changeCovarianceFrame(t_FieldStateCovariance *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FieldStateCovariance result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.changeCovarianceFrame(a0, a1));
              return t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::frames::LOF a1((jobject) NULL);
            FieldStateCovariance result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::frames::LOF::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
            {
              OBJ_CALL(result = self->object.changeCovarianceFrame(a0, a1));
              return t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "changeCovarianceFrame", args);
        return NULL;
      }

      static PyObject *t_FieldStateCovariance_changeCovarianceType(t_FieldStateCovariance *self, PyObject *args)
      {
        ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::orbits::OrbitType a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
        PyTypeObject **p2;
        FieldStateCovariance result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::orbits::t_OrbitType::parameters_, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.changeCovarianceType(a0, a1, a2));
          return t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "changeCovarianceType", args);
        return NULL;
      }

      static PyObject *t_FieldStateCovariance_getDate(t_FieldStateCovariance *self)
      {
        ::org::orekit::time::FieldAbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldStateCovariance_getFrame(t_FieldStateCovariance *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }

      static PyObject *t_FieldStateCovariance_getLOF(t_FieldStateCovariance *self)
      {
        ::org::orekit::frames::LOF result((jobject) NULL);
        OBJ_CALL(result = self->object.getLOF());
        return ::org::orekit::frames::t_LOF::wrap_Object(result);
      }

      static PyObject *t_FieldStateCovariance_getMatrix(t_FieldStateCovariance *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getMatrix());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldStateCovariance_getOrbitType(t_FieldStateCovariance *self)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);
        OBJ_CALL(result = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
      }

      static PyObject *t_FieldStateCovariance_getPositionAngleType(t_FieldStateCovariance *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_FieldStateCovariance_shiftedBy(t_FieldStateCovariance *self, PyObject *args)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::orbits::FieldOrbit a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        FieldStateCovariance result((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0, a1, a2));
          return t_FieldStateCovariance::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", args);
        return NULL;
      }

      static PyObject *t_FieldStateCovariance_toStateCovariance(t_FieldStateCovariance *self)
      {
        ::org::orekit::propagation::StateCovariance result((jobject) NULL);
        OBJ_CALL(result = self->object.toStateCovariance());
        return ::org::orekit::propagation::t_StateCovariance::wrap_Object(result);
      }
      static PyObject *t_FieldStateCovariance_get__parameters_(t_FieldStateCovariance *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldStateCovariance_get__date(t_FieldStateCovariance *self, void *data)
      {
        ::org::orekit::time::FieldAbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_FieldStateCovariance_get__frame(t_FieldStateCovariance *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }

      static PyObject *t_FieldStateCovariance_get__lOF(t_FieldStateCovariance *self, void *data)
      {
        ::org::orekit::frames::LOF value((jobject) NULL);
        OBJ_CALL(value = self->object.getLOF());
        return ::org::orekit::frames::t_LOF::wrap_Object(value);
      }

      static PyObject *t_FieldStateCovariance_get__matrix(t_FieldStateCovariance *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getMatrix());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldStateCovariance_get__orbitType(t_FieldStateCovariance *self, void *data)
      {
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        OBJ_CALL(value = self->object.getOrbitType());
        return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
      }

      static PyObject *t_FieldStateCovariance_get__positionAngleType(t_FieldStateCovariance *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/AllowedSolution.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *BracketedUnivariateSolver$Interval::class$ = NULL;
        jmethodID *BracketedUnivariateSolver$Interval::mids$ = NULL;
        bool BracketedUnivariateSolver$Interval::live$ = false;

        jclass BracketedUnivariateSolver$Interval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/BracketedUnivariateSolver$Interval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b0a935b68e41d65a] = env->getMethodID(cls, "<init>", "(DDDD)V");
            mids$[mid_getLeftAbscissa_dff5885c2c873297] = env->getMethodID(cls, "getLeftAbscissa", "()D");
            mids$[mid_getLeftValue_dff5885c2c873297] = env->getMethodID(cls, "getLeftValue", "()D");
            mids$[mid_getRightAbscissa_dff5885c2c873297] = env->getMethodID(cls, "getRightAbscissa", "()D");
            mids$[mid_getRightValue_dff5885c2c873297] = env->getMethodID(cls, "getRightValue", "()D");
            mids$[mid_getSide_e7eb3e3047aa6750] = env->getMethodID(cls, "getSide", "(Lorg/hipparchus/analysis/solvers/AllowedSolution;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BracketedUnivariateSolver$Interval::BracketedUnivariateSolver$Interval(jdouble a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b0a935b68e41d65a, a0, a1, a2, a3)) {}

        jdouble BracketedUnivariateSolver$Interval::getLeftAbscissa() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLeftAbscissa_dff5885c2c873297]);
        }

        jdouble BracketedUnivariateSolver$Interval::getLeftValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLeftValue_dff5885c2c873297]);
        }

        jdouble BracketedUnivariateSolver$Interval::getRightAbscissa() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRightAbscissa_dff5885c2c873297]);
        }

        jdouble BracketedUnivariateSolver$Interval::getRightValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRightValue_dff5885c2c873297]);
        }

        jdouble BracketedUnivariateSolver$Interval::getSide(const ::org::hipparchus::analysis::solvers::AllowedSolution & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSide_e7eb3e3047aa6750], a0.this$);
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
        static PyObject *t_BracketedUnivariateSolver$Interval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver$Interval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver$Interval_of_(t_BracketedUnivariateSolver$Interval *self, PyObject *args);
        static int t_BracketedUnivariateSolver$Interval_init_(t_BracketedUnivariateSolver$Interval *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BracketedUnivariateSolver$Interval_getLeftAbscissa(t_BracketedUnivariateSolver$Interval *self);
        static PyObject *t_BracketedUnivariateSolver$Interval_getLeftValue(t_BracketedUnivariateSolver$Interval *self);
        static PyObject *t_BracketedUnivariateSolver$Interval_getRightAbscissa(t_BracketedUnivariateSolver$Interval *self);
        static PyObject *t_BracketedUnivariateSolver$Interval_getRightValue(t_BracketedUnivariateSolver$Interval *self);
        static PyObject *t_BracketedUnivariateSolver$Interval_getSide(t_BracketedUnivariateSolver$Interval *self, PyObject *arg);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__leftAbscissa(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__leftValue(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__rightAbscissa(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__rightValue(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyObject *t_BracketedUnivariateSolver$Interval_get__parameters_(t_BracketedUnivariateSolver$Interval *self, void *data);
        static PyGetSetDef t_BracketedUnivariateSolver$Interval__fields_[] = {
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, leftAbscissa),
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, leftValue),
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, rightAbscissa),
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, rightValue),
          DECLARE_GET_FIELD(t_BracketedUnivariateSolver$Interval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BracketedUnivariateSolver$Interval__methods_[] = {
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, of_, METH_VARARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getLeftAbscissa, METH_NOARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getLeftValue, METH_NOARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getRightAbscissa, METH_NOARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getRightValue, METH_NOARGS),
          DECLARE_METHOD(t_BracketedUnivariateSolver$Interval, getSide, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BracketedUnivariateSolver$Interval)[] = {
          { Py_tp_methods, t_BracketedUnivariateSolver$Interval__methods_ },
          { Py_tp_init, (void *) t_BracketedUnivariateSolver$Interval_init_ },
          { Py_tp_getset, t_BracketedUnivariateSolver$Interval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BracketedUnivariateSolver$Interval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BracketedUnivariateSolver$Interval, t_BracketedUnivariateSolver$Interval, BracketedUnivariateSolver$Interval);
        PyObject *t_BracketedUnivariateSolver$Interval::wrap_Object(const BracketedUnivariateSolver$Interval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedUnivariateSolver$Interval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedUnivariateSolver$Interval *self = (t_BracketedUnivariateSolver$Interval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BracketedUnivariateSolver$Interval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BracketedUnivariateSolver$Interval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BracketedUnivariateSolver$Interval *self = (t_BracketedUnivariateSolver$Interval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BracketedUnivariateSolver$Interval::install(PyObject *module)
        {
          installType(&PY_TYPE(BracketedUnivariateSolver$Interval), &PY_TYPE_DEF(BracketedUnivariateSolver$Interval), module, "BracketedUnivariateSolver$Interval", 0);
        }

        void t_BracketedUnivariateSolver$Interval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver$Interval), "class_", make_descriptor(BracketedUnivariateSolver$Interval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver$Interval), "wrapfn_", make_descriptor(t_BracketedUnivariateSolver$Interval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BracketedUnivariateSolver$Interval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BracketedUnivariateSolver$Interval::initializeClass, 1)))
            return NULL;
          return t_BracketedUnivariateSolver$Interval::wrap_Object(BracketedUnivariateSolver$Interval(((t_BracketedUnivariateSolver$Interval *) arg)->object.this$));
        }
        static PyObject *t_BracketedUnivariateSolver$Interval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BracketedUnivariateSolver$Interval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_of_(t_BracketedUnivariateSolver$Interval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_BracketedUnivariateSolver$Interval_init_(t_BracketedUnivariateSolver$Interval *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          jdouble a3;
          BracketedUnivariateSolver$Interval object((jobject) NULL);

          if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = BracketedUnivariateSolver$Interval(a0, a1, a2, a3));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getLeftAbscissa(t_BracketedUnivariateSolver$Interval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLeftAbscissa());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getLeftValue(t_BracketedUnivariateSolver$Interval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLeftValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getRightAbscissa(t_BracketedUnivariateSolver$Interval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRightAbscissa());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getRightValue(t_BracketedUnivariateSolver$Interval *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRightValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_getSide(t_BracketedUnivariateSolver$Interval *self, PyObject *arg)
        {
          ::org::hipparchus::analysis::solvers::AllowedSolution a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::org::hipparchus::analysis::solvers::AllowedSolution::initializeClass, &a0, &p0, ::org::hipparchus::analysis::solvers::t_AllowedSolution::parameters_))
          {
            OBJ_CALL(result = self->object.getSide(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getSide", arg);
          return NULL;
        }
        static PyObject *t_BracketedUnivariateSolver$Interval_get__parameters_(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_get__leftAbscissa(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLeftAbscissa());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_get__leftValue(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLeftValue());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_get__rightAbscissa(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRightAbscissa());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BracketedUnivariateSolver$Interval_get__rightValue(t_BracketedUnivariateSolver$Interval *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRightValue());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EOPFittedModel.h"
#include "org/orekit/utils/SecularAndHarmonic.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPFittedModel::class$ = NULL;
      jmethodID *EOPFittedModel::mids$ = NULL;
      bool EOPFittedModel::live$ = false;

      jclass EOPFittedModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPFittedModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4c009f9fb672dfb4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/SecularAndHarmonic;Lorg/orekit/utils/SecularAndHarmonic;Lorg/orekit/utils/SecularAndHarmonic;Lorg/orekit/utils/SecularAndHarmonic;Lorg/orekit/utils/SecularAndHarmonic;)V");
          mids$[mid_getDUT1_06e258f321573d42] = env->getMethodID(cls, "getDUT1", "()Lorg/orekit/utils/SecularAndHarmonic;");
          mids$[mid_getDx_06e258f321573d42] = env->getMethodID(cls, "getDx", "()Lorg/orekit/utils/SecularAndHarmonic;");
          mids$[mid_getDy_06e258f321573d42] = env->getMethodID(cls, "getDy", "()Lorg/orekit/utils/SecularAndHarmonic;");
          mids$[mid_getXp_06e258f321573d42] = env->getMethodID(cls, "getXp", "()Lorg/orekit/utils/SecularAndHarmonic;");
          mids$[mid_getYp_06e258f321573d42] = env->getMethodID(cls, "getYp", "()Lorg/orekit/utils/SecularAndHarmonic;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EOPFittedModel::EOPFittedModel(const ::org::orekit::utils::SecularAndHarmonic & a0, const ::org::orekit::utils::SecularAndHarmonic & a1, const ::org::orekit::utils::SecularAndHarmonic & a2, const ::org::orekit::utils::SecularAndHarmonic & a3, const ::org::orekit::utils::SecularAndHarmonic & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4c009f9fb672dfb4, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getDUT1() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getDUT1_06e258f321573d42]));
      }

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getDx() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getDx_06e258f321573d42]));
      }

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getDy() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getDy_06e258f321573d42]));
      }

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getXp() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getXp_06e258f321573d42]));
      }

      ::org::orekit::utils::SecularAndHarmonic EOPFittedModel::getYp() const
      {
        return ::org::orekit::utils::SecularAndHarmonic(env->callObjectMethod(this$, mids$[mid_getYp_06e258f321573d42]));
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
      static PyObject *t_EOPFittedModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPFittedModel_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EOPFittedModel_init_(t_EOPFittedModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EOPFittedModel_getDUT1(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_getDx(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_getDy(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_getXp(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_getYp(t_EOPFittedModel *self);
      static PyObject *t_EOPFittedModel_get__dUT1(t_EOPFittedModel *self, void *data);
      static PyObject *t_EOPFittedModel_get__dx(t_EOPFittedModel *self, void *data);
      static PyObject *t_EOPFittedModel_get__dy(t_EOPFittedModel *self, void *data);
      static PyObject *t_EOPFittedModel_get__xp(t_EOPFittedModel *self, void *data);
      static PyObject *t_EOPFittedModel_get__yp(t_EOPFittedModel *self, void *data);
      static PyGetSetDef t_EOPFittedModel__fields_[] = {
        DECLARE_GET_FIELD(t_EOPFittedModel, dUT1),
        DECLARE_GET_FIELD(t_EOPFittedModel, dx),
        DECLARE_GET_FIELD(t_EOPFittedModel, dy),
        DECLARE_GET_FIELD(t_EOPFittedModel, xp),
        DECLARE_GET_FIELD(t_EOPFittedModel, yp),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EOPFittedModel__methods_[] = {
        DECLARE_METHOD(t_EOPFittedModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPFittedModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPFittedModel, getDUT1, METH_NOARGS),
        DECLARE_METHOD(t_EOPFittedModel, getDx, METH_NOARGS),
        DECLARE_METHOD(t_EOPFittedModel, getDy, METH_NOARGS),
        DECLARE_METHOD(t_EOPFittedModel, getXp, METH_NOARGS),
        DECLARE_METHOD(t_EOPFittedModel, getYp, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPFittedModel)[] = {
        { Py_tp_methods, t_EOPFittedModel__methods_ },
        { Py_tp_init, (void *) t_EOPFittedModel_init_ },
        { Py_tp_getset, t_EOPFittedModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPFittedModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EOPFittedModel, t_EOPFittedModel, EOPFittedModel);

      void t_EOPFittedModel::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPFittedModel), &PY_TYPE_DEF(EOPFittedModel), module, "EOPFittedModel", 0);
      }

      void t_EOPFittedModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFittedModel), "class_", make_descriptor(EOPFittedModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFittedModel), "wrapfn_", make_descriptor(t_EOPFittedModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPFittedModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EOPFittedModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPFittedModel::initializeClass, 1)))
          return NULL;
        return t_EOPFittedModel::wrap_Object(EOPFittedModel(((t_EOPFittedModel *) arg)->object.this$));
      }
      static PyObject *t_EOPFittedModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPFittedModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EOPFittedModel_init_(t_EOPFittedModel *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::SecularAndHarmonic a0((jobject) NULL);
        ::org::orekit::utils::SecularAndHarmonic a1((jobject) NULL);
        ::org::orekit::utils::SecularAndHarmonic a2((jobject) NULL);
        ::org::orekit::utils::SecularAndHarmonic a3((jobject) NULL);
        ::org::orekit::utils::SecularAndHarmonic a4((jobject) NULL);
        EOPFittedModel object((jobject) NULL);

        if (!parseArgs(args, "kkkkk", ::org::orekit::utils::SecularAndHarmonic::initializeClass, ::org::orekit::utils::SecularAndHarmonic::initializeClass, ::org::orekit::utils::SecularAndHarmonic::initializeClass, ::org::orekit::utils::SecularAndHarmonic::initializeClass, ::org::orekit::utils::SecularAndHarmonic::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = EOPFittedModel(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EOPFittedModel_getDUT1(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getDUT1());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_getDx(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getDx());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_getDy(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getDy());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_getXp(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getXp());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_getYp(t_EOPFittedModel *self)
      {
        ::org::orekit::utils::SecularAndHarmonic result((jobject) NULL);
        OBJ_CALL(result = self->object.getYp());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(result);
      }

      static PyObject *t_EOPFittedModel_get__dUT1(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getDUT1());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }

      static PyObject *t_EOPFittedModel_get__dx(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getDx());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }

      static PyObject *t_EOPFittedModel_get__dy(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getDy());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }

      static PyObject *t_EOPFittedModel_get__xp(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getXp());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }

      static PyObject *t_EOPFittedModel_get__yp(t_EOPFittedModel *self, void *data)
      {
        ::org::orekit::utils::SecularAndHarmonic value((jobject) NULL);
        OBJ_CALL(value = self->object.getYp());
        return ::org::orekit::utils::t_SecularAndHarmonic::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/AkimaSplineInterpolator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/interpolation/FieldUnivariateInterpolator.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction.h"
#include "org/hipparchus/analysis/polynomials/PolynomialSplineFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *AkimaSplineInterpolator::class$ = NULL;
        jmethodID *AkimaSplineInterpolator::mids$ = NULL;
        bool AkimaSplineInterpolator::live$ = false;

        jclass AkimaSplineInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/AkimaSplineInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_bd04c9335fb9e4cf] = env->getMethodID(cls, "<init>", "(Z)V");
            mids$[mid_interpolate_3eacf1659c4c06b1] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/polynomials/PolynomialSplineFunction;");
            mids$[mid_interpolate_84261a97b5ff9d54] = env->getMethodID(cls, "interpolate", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/polynomials/FieldPolynomialSplineFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AkimaSplineInterpolator::AkimaSplineInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        AkimaSplineInterpolator::AkimaSplineInterpolator(jboolean a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bd04c9335fb9e4cf, a0)) {}

        ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction AkimaSplineInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_3eacf1659c4c06b1], a0.this$, a1.this$));
        }

        ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction AkimaSplineInterpolator::interpolate(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction(env->callObjectMethod(this$, mids$[mid_interpolate_84261a97b5ff9d54], a0.this$, a1.this$));
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
        static PyObject *t_AkimaSplineInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AkimaSplineInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AkimaSplineInterpolator_init_(t_AkimaSplineInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AkimaSplineInterpolator_interpolate(t_AkimaSplineInterpolator *self, PyObject *args);

        static PyMethodDef t_AkimaSplineInterpolator__methods_[] = {
          DECLARE_METHOD(t_AkimaSplineInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AkimaSplineInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AkimaSplineInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AkimaSplineInterpolator)[] = {
          { Py_tp_methods, t_AkimaSplineInterpolator__methods_ },
          { Py_tp_init, (void *) t_AkimaSplineInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AkimaSplineInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AkimaSplineInterpolator, t_AkimaSplineInterpolator, AkimaSplineInterpolator);

        void t_AkimaSplineInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(AkimaSplineInterpolator), &PY_TYPE_DEF(AkimaSplineInterpolator), module, "AkimaSplineInterpolator", 0);
        }

        void t_AkimaSplineInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AkimaSplineInterpolator), "class_", make_descriptor(AkimaSplineInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AkimaSplineInterpolator), "wrapfn_", make_descriptor(t_AkimaSplineInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AkimaSplineInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AkimaSplineInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AkimaSplineInterpolator::initializeClass, 1)))
            return NULL;
          return t_AkimaSplineInterpolator::wrap_Object(AkimaSplineInterpolator(((t_AkimaSplineInterpolator *) arg)->object.this$));
        }
        static PyObject *t_AkimaSplineInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AkimaSplineInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AkimaSplineInterpolator_init_(t_AkimaSplineInterpolator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              AkimaSplineInterpolator object((jobject) NULL);

              INT_CALL(object = AkimaSplineInterpolator());
              self->object = object;
              break;
            }
           case 1:
            {
              jboolean a0;
              AkimaSplineInterpolator object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = AkimaSplineInterpolator(a0));
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

        static PyObject *t_AkimaSplineInterpolator_interpolate(t_AkimaSplineInterpolator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::analysis::polynomials::PolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_PolynomialSplineFunction::wrap_Object(result);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::analysis::polynomials::FieldPolynomialSplineFunction result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.interpolate(a0, a1));
                return ::org::hipparchus::analysis::polynomials::t_FieldPolynomialSplineFunction::wrap_Object(result);
              }
            }
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
#include "org/orekit/files/rinex/navigation/IonosphereBaseMessage.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphereBaseMessage::class$ = NULL;
          jmethodID *IonosphereBaseMessage::mids$ = NULL;
          bool IonosphereBaseMessage::live$ = false;

          jclass IonosphereBaseMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphereBaseMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a82ff7a18fa6993f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getTransmitTime_85703d13e302437e] = env->getMethodID(cls, "getTransmitTime", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_setTransmitTime_600a2a61652bc473] = env->getMethodID(cls, "setTransmitTime", "(Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphereBaseMessage::IonosphereBaseMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::TypeSvMessage(env->newObject(initializeClass, &mids$, mid_init$_a82ff7a18fa6993f, a0.this$, a1, a2.this$)) {}

          ::org::orekit::time::AbsoluteDate IonosphereBaseMessage::getTransmitTime() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getTransmitTime_85703d13e302437e]));
          }

          void IonosphereBaseMessage::setTransmitTime(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTransmitTime_600a2a61652bc473], a0.this$);
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
          static PyObject *t_IonosphereBaseMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphereBaseMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_IonosphereBaseMessage_init_(t_IonosphereBaseMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_IonosphereBaseMessage_getTransmitTime(t_IonosphereBaseMessage *self);
          static PyObject *t_IonosphereBaseMessage_setTransmitTime(t_IonosphereBaseMessage *self, PyObject *arg);
          static PyObject *t_IonosphereBaseMessage_get__transmitTime(t_IonosphereBaseMessage *self, void *data);
          static int t_IonosphereBaseMessage_set__transmitTime(t_IonosphereBaseMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_IonosphereBaseMessage__fields_[] = {
            DECLARE_GETSET_FIELD(t_IonosphereBaseMessage, transmitTime),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphereBaseMessage__methods_[] = {
            DECLARE_METHOD(t_IonosphereBaseMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereBaseMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphereBaseMessage, getTransmitTime, METH_NOARGS),
            DECLARE_METHOD(t_IonosphereBaseMessage, setTransmitTime, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphereBaseMessage)[] = {
            { Py_tp_methods, t_IonosphereBaseMessage__methods_ },
            { Py_tp_init, (void *) t_IonosphereBaseMessage_init_ },
            { Py_tp_getset, t_IonosphereBaseMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphereBaseMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::TypeSvMessage),
            NULL
          };

          DEFINE_TYPE(IonosphereBaseMessage, t_IonosphereBaseMessage, IonosphereBaseMessage);

          void t_IonosphereBaseMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphereBaseMessage), &PY_TYPE_DEF(IonosphereBaseMessage), module, "IonosphereBaseMessage", 0);
          }

          void t_IonosphereBaseMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBaseMessage), "class_", make_descriptor(IonosphereBaseMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBaseMessage), "wrapfn_", make_descriptor(t_IonosphereBaseMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphereBaseMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_IonosphereBaseMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphereBaseMessage::initializeClass, 1)))
              return NULL;
            return t_IonosphereBaseMessage::wrap_Object(IonosphereBaseMessage(((t_IonosphereBaseMessage *) arg)->object.this$));
          }
          static PyObject *t_IonosphereBaseMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphereBaseMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_IonosphereBaseMessage_init_(t_IonosphereBaseMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            IonosphereBaseMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = IonosphereBaseMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_IonosphereBaseMessage_getTransmitTime(t_IonosphereBaseMessage *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getTransmitTime());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_IonosphereBaseMessage_setTransmitTime(t_IonosphereBaseMessage *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setTransmitTime(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTransmitTime", arg);
            return NULL;
          }

          static PyObject *t_IonosphereBaseMessage_get__transmitTime(t_IonosphereBaseMessage *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getTransmitTime());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_IonosphereBaseMessage_set__transmitTime(t_IonosphereBaseMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setTransmitTime(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "transmitTime", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/PythonAbstractCycleSlipDetector.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "java/util/Map.h"
#include "java/util/List.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/Frequency.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *PythonAbstractCycleSlipDetector::class$ = NULL;
          jmethodID *PythonAbstractCycleSlipDetector::mids$ = NULL;
          bool PythonAbstractCycleSlipDetector::live$ = false;

          jclass PythonAbstractCycleSlipDetector::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/PythonAbstractCycleSlipDetector");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cycleSlipDataSet_37ef30963779752d] = env->getMethodID(cls, "cycleSlipDataSet", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/gnss/Frequency;)V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getMaxTimeBeetween2Measurement_dff5885c2c873297] = env->getMethodID(cls, "getMaxTimeBeetween2Measurement", "()D");
              mids$[mid_getMinMeasurementNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getMinMeasurementNumber", "()I");
              mids$[mid_getResults_2afa36052df4765d] = env->getMethodID(cls, "getResults", "()Ljava/util/List;");
              mids$[mid_manageData_5e249044f63168db] = env->getMethodID(cls, "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
              mids$[mid_setName_571eb7cd9a331044] = env->getMethodID(cls, "setName", "(ILorg/orekit/gnss/SatelliteSystem;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void PythonAbstractCycleSlipDetector::cycleSlipDataSet(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, const ::org::orekit::gnss::Frequency & a3) const
          {
            env->callVoidMethod(this$, mids$[mid_cycleSlipDataSet_37ef30963779752d], a0.this$, a1.this$, a2, a3.this$);
          }

          void PythonAbstractCycleSlipDetector::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jdouble PythonAbstractCycleSlipDetector::getMaxTimeBeetween2Measurement() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMaxTimeBeetween2Measurement_dff5885c2c873297]);
          }

          jint PythonAbstractCycleSlipDetector::getMinMeasurementNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getMinMeasurementNumber_570ce0828f81a2c1]);
          }

          ::java::util::List PythonAbstractCycleSlipDetector::getResults() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getResults_2afa36052df4765d]));
          }

          jlong PythonAbstractCycleSlipDetector::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonAbstractCycleSlipDetector::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
          }

          ::java::lang::String PythonAbstractCycleSlipDetector::setName(jint a0, const ::org::orekit::gnss::SatelliteSystem & a1) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_setName_571eb7cd9a331044], a0, a1.this$));
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
          static PyObject *t_PythonAbstractCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractCycleSlipDetector_cycleSlipDataSet(t_PythonAbstractCycleSlipDetector *self, PyObject *args);
          static PyObject *t_PythonAbstractCycleSlipDetector_finalize(t_PythonAbstractCycleSlipDetector *self);
          static PyObject *t_PythonAbstractCycleSlipDetector_getMaxTimeBeetween2Measurement(t_PythonAbstractCycleSlipDetector *self);
          static PyObject *t_PythonAbstractCycleSlipDetector_getMinMeasurementNumber(t_PythonAbstractCycleSlipDetector *self);
          static PyObject *t_PythonAbstractCycleSlipDetector_getResults(t_PythonAbstractCycleSlipDetector *self);
          static PyObject *t_PythonAbstractCycleSlipDetector_pythonExtension(t_PythonAbstractCycleSlipDetector *self, PyObject *args);
          static PyObject *t_PythonAbstractCycleSlipDetector_setName(t_PythonAbstractCycleSlipDetector *self, PyObject *args);
          static void JNICALL t_PythonAbstractCycleSlipDetector_manageData0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonAbstractCycleSlipDetector_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractCycleSlipDetector_get__self(t_PythonAbstractCycleSlipDetector *self, void *data);
          static PyObject *t_PythonAbstractCycleSlipDetector_get__maxTimeBeetween2Measurement(t_PythonAbstractCycleSlipDetector *self, void *data);
          static PyObject *t_PythonAbstractCycleSlipDetector_get__minMeasurementNumber(t_PythonAbstractCycleSlipDetector *self, void *data);
          static PyObject *t_PythonAbstractCycleSlipDetector_get__results(t_PythonAbstractCycleSlipDetector *self, void *data);
          static PyGetSetDef t_PythonAbstractCycleSlipDetector__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractCycleSlipDetector, maxTimeBeetween2Measurement),
            DECLARE_GET_FIELD(t_PythonAbstractCycleSlipDetector, minMeasurementNumber),
            DECLARE_GET_FIELD(t_PythonAbstractCycleSlipDetector, results),
            DECLARE_GET_FIELD(t_PythonAbstractCycleSlipDetector, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractCycleSlipDetector__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, cycleSlipDataSet, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, getMaxTimeBeetween2Measurement, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, getMinMeasurementNumber, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, getResults, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, pythonExtension, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractCycleSlipDetector, setName, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractCycleSlipDetector)[] = {
            { Py_tp_methods, t_PythonAbstractCycleSlipDetector__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_PythonAbstractCycleSlipDetector__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractCycleSlipDetector)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractCycleSlipDetector),
            NULL
          };

          DEFINE_TYPE(PythonAbstractCycleSlipDetector, t_PythonAbstractCycleSlipDetector, PythonAbstractCycleSlipDetector);

          void t_PythonAbstractCycleSlipDetector::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractCycleSlipDetector), &PY_TYPE_DEF(PythonAbstractCycleSlipDetector), module, "PythonAbstractCycleSlipDetector", 1);
          }

          void t_PythonAbstractCycleSlipDetector::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCycleSlipDetector), "class_", make_descriptor(PythonAbstractCycleSlipDetector::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCycleSlipDetector), "wrapfn_", make_descriptor(t_PythonAbstractCycleSlipDetector::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractCycleSlipDetector), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractCycleSlipDetector::initializeClass);
            JNINativeMethod methods[] = {
              { "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V", (void *) t_PythonAbstractCycleSlipDetector_manageData0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractCycleSlipDetector_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractCycleSlipDetector::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractCycleSlipDetector::wrap_Object(PythonAbstractCycleSlipDetector(((t_PythonAbstractCycleSlipDetector *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractCycleSlipDetector::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_cycleSlipDataSet(t_PythonAbstractCycleSlipDetector *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jdouble a2;
            ::org::orekit::gnss::Frequency a3((jobject) NULL);
            PyTypeObject **p3;

            if (!parseArgs(args, "skDK", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::gnss::Frequency::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::gnss::t_Frequency::parameters_))
            {
              OBJ_CALL(self->object.cycleSlipDataSet(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "cycleSlipDataSet", args);
            return NULL;
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_finalize(t_PythonAbstractCycleSlipDetector *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_getMaxTimeBeetween2Measurement(t_PythonAbstractCycleSlipDetector *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMaxTimeBeetween2Measurement());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_getMinMeasurementNumber(t_PythonAbstractCycleSlipDetector *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMinMeasurementNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_getResults(t_PythonAbstractCycleSlipDetector *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getResults());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::gnss::PY_TYPE(CycleSlipDetectorResults));
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_pythonExtension(t_PythonAbstractCycleSlipDetector *self, PyObject *args)
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

          static PyObject *t_PythonAbstractCycleSlipDetector_setName(t_PythonAbstractCycleSlipDetector *self, PyObject *args)
          {
            jint a0;
            ::org::orekit::gnss::SatelliteSystem a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, "IK", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.setName(a0, a1));
              return j2p(result);
            }

            PyErr_SetArgsError((PyObject *) self, "setName", args);
            return NULL;
          }

          static void JNICALL t_PythonAbstractCycleSlipDetector_manageData0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractCycleSlipDetector::mids$[PythonAbstractCycleSlipDetector::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            PyObject *o0 = ::org::orekit::files::rinex::observation::t_ObservationDataSet::wrap_Object(::org::orekit::files::rinex::observation::ObservationDataSet(a0));
            PyObject *result = PyObject_CallMethod(obj, "manageData", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else
              Py_DECREF(result);
          }

          static void JNICALL t_PythonAbstractCycleSlipDetector_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractCycleSlipDetector::mids$[PythonAbstractCycleSlipDetector::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractCycleSlipDetector::mids$[PythonAbstractCycleSlipDetector::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_get__self(t_PythonAbstractCycleSlipDetector *self, void *data)
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

          static PyObject *t_PythonAbstractCycleSlipDetector_get__maxTimeBeetween2Measurement(t_PythonAbstractCycleSlipDetector *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMaxTimeBeetween2Measurement());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_get__minMeasurementNumber(t_PythonAbstractCycleSlipDetector *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMinMeasurementNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_PythonAbstractCycleSlipDetector_get__results(t_PythonAbstractCycleSlipDetector *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getResults());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PropagationType::class$ = NULL;
      jmethodID *PropagationType::mids$ = NULL;
      bool PropagationType::live$ = false;
      PropagationType *PropagationType::MEAN = NULL;
      PropagationType *PropagationType::OSCULATING = NULL;

      jclass PropagationType::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PropagationType");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_999942c94052b86d] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/propagation/PropagationType;");
          mids$[mid_values_7b9295acc946d923] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/propagation/PropagationType;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          MEAN = new PropagationType(env->getStaticObjectField(cls, "MEAN", "Lorg/orekit/propagation/PropagationType;"));
          OSCULATING = new PropagationType(env->getStaticObjectField(cls, "OSCULATING", "Lorg/orekit/propagation/PropagationType;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PropagationType PropagationType::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PropagationType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_999942c94052b86d], a0.this$));
      }

      JArray< PropagationType > PropagationType::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< PropagationType >(env->callStaticObjectMethod(cls, mids$[mid_values_7b9295acc946d923]));
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
      static PyObject *t_PropagationType_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PropagationType_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PropagationType_of_(t_PropagationType *self, PyObject *args);
      static PyObject *t_PropagationType_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_PropagationType_values(PyTypeObject *type);
      static PyObject *t_PropagationType_get__parameters_(t_PropagationType *self, void *data);
      static PyGetSetDef t_PropagationType__fields_[] = {
        DECLARE_GET_FIELD(t_PropagationType, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PropagationType__methods_[] = {
        DECLARE_METHOD(t_PropagationType, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PropagationType, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PropagationType, of_, METH_VARARGS),
        DECLARE_METHOD(t_PropagationType, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PropagationType, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PropagationType)[] = {
        { Py_tp_methods, t_PropagationType__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PropagationType__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PropagationType)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(PropagationType, t_PropagationType, PropagationType);
      PyObject *t_PropagationType::wrap_Object(const PropagationType& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PropagationType::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PropagationType *self = (t_PropagationType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PropagationType::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PropagationType::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PropagationType *self = (t_PropagationType *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PropagationType::install(PyObject *module)
      {
        installType(&PY_TYPE(PropagationType), &PY_TYPE_DEF(PropagationType), module, "PropagationType", 0);
      }

      void t_PropagationType::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "class_", make_descriptor(PropagationType::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "wrapfn_", make_descriptor(t_PropagationType::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "boxfn_", make_descriptor(boxObject));
        env->getClass(PropagationType::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "MEAN", make_descriptor(t_PropagationType::wrap_Object(*PropagationType::MEAN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PropagationType), "OSCULATING", make_descriptor(t_PropagationType::wrap_Object(*PropagationType::OSCULATING)));
      }

      static PyObject *t_PropagationType_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PropagationType::initializeClass, 1)))
          return NULL;
        return t_PropagationType::wrap_Object(PropagationType(((t_PropagationType *) arg)->object.this$));
      }
      static PyObject *t_PropagationType_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PropagationType::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PropagationType_of_(t_PropagationType *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_PropagationType_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        PropagationType result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::propagation::PropagationType::valueOf(a0));
          return t_PropagationType::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_PropagationType_values(PyTypeObject *type)
      {
        JArray< PropagationType > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::propagation::PropagationType::values());
        return JArray<jobject>(result.this$).wrap(t_PropagationType::wrap_jobject);
      }
      static PyObject *t_PropagationType_get__parameters_(t_PropagationType *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/DescriptiveStatistics.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/DescriptiveStatistics.h"
#include "java/lang/String.h"
#include "org/hipparchus/stat/descriptive/UnivariateStatistic.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *DescriptiveStatistics::class$ = NULL;
        jmethodID *DescriptiveStatistics::mids$ = NULL;
        bool DescriptiveStatistics::live$ = false;

        jclass DescriptiveStatistics::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/DescriptiveStatistics");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_fa9d415d19f69361] = env->getMethodID(cls, "<init>", "([D)V");
            mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_accept_17db3a65980d3441] = env->getMethodID(cls, "accept", "(D)V");
            mids$[mid_addValue_17db3a65980d3441] = env->getMethodID(cls, "addValue", "(D)V");
            mids$[mid_apply_11f6cd1332ce91d7] = env->getMethodID(cls, "apply", "(Lorg/hipparchus/stat/descriptive/UnivariateStatistic;)D");
            mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_copy_eb8178054e79f61d] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/DescriptiveStatistics;");
            mids$[mid_getElement_46f85b53d9aedd96] = env->getMethodID(cls, "getElement", "(I)D");
            mids$[mid_getGeometricMean_dff5885c2c873297] = env->getMethodID(cls, "getGeometricMean", "()D");
            mids$[mid_getKurtosis_dff5885c2c873297] = env->getMethodID(cls, "getKurtosis", "()D");
            mids$[mid_getMax_dff5885c2c873297] = env->getMethodID(cls, "getMax", "()D");
            mids$[mid_getMean_dff5885c2c873297] = env->getMethodID(cls, "getMean", "()D");
            mids$[mid_getMin_dff5885c2c873297] = env->getMethodID(cls, "getMin", "()D");
            mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getPercentile_dcbc7ce2902fa136] = env->getMethodID(cls, "getPercentile", "(D)D");
            mids$[mid_getPopulationVariance_dff5885c2c873297] = env->getMethodID(cls, "getPopulationVariance", "()D");
            mids$[mid_getQuadraticMean_dff5885c2c873297] = env->getMethodID(cls, "getQuadraticMean", "()D");
            mids$[mid_getSkewness_dff5885c2c873297] = env->getMethodID(cls, "getSkewness", "()D");
            mids$[mid_getSortedValues_60c7040667a7dc5c] = env->getMethodID(cls, "getSortedValues", "()[D");
            mids$[mid_getStandardDeviation_dff5885c2c873297] = env->getMethodID(cls, "getStandardDeviation", "()D");
            mids$[mid_getSum_dff5885c2c873297] = env->getMethodID(cls, "getSum", "()D");
            mids$[mid_getSumOfSquares_dff5885c2c873297] = env->getMethodID(cls, "getSumOfSquares", "()D");
            mids$[mid_getValues_60c7040667a7dc5c] = env->getMethodID(cls, "getValues", "()[D");
            mids$[mid_getVariance_dff5885c2c873297] = env->getMethodID(cls, "getVariance", "()D");
            mids$[mid_getWindowSize_570ce0828f81a2c1] = env->getMethodID(cls, "getWindowSize", "()I");
            mids$[mid_removeMostRecentValue_0fa09c18fee449d5] = env->getMethodID(cls, "removeMostRecentValue", "()V");
            mids$[mid_replaceMostRecentValue_dcbc7ce2902fa136] = env->getMethodID(cls, "replaceMostRecentValue", "(D)D");
            mids$[mid_setWindowSize_99803b0791f320ff] = env->getMethodID(cls, "setWindowSize", "(I)V");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DescriptiveStatistics::DescriptiveStatistics() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        DescriptiveStatistics::DescriptiveStatistics(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa9d415d19f69361, a0.this$)) {}

        DescriptiveStatistics::DescriptiveStatistics(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

        void DescriptiveStatistics::accept(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_accept_17db3a65980d3441], a0);
        }

        void DescriptiveStatistics::addValue(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addValue_17db3a65980d3441], a0);
        }

        jdouble DescriptiveStatistics::apply(const ::org::hipparchus::stat::descriptive::UnivariateStatistic & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_apply_11f6cd1332ce91d7], a0.this$);
        }

        void DescriptiveStatistics::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
        }

        DescriptiveStatistics DescriptiveStatistics::copy() const
        {
          return DescriptiveStatistics(env->callObjectMethod(this$, mids$[mid_copy_eb8178054e79f61d]));
        }

        jdouble DescriptiveStatistics::getElement(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElement_46f85b53d9aedd96], a0);
        }

        jdouble DescriptiveStatistics::getGeometricMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getGeometricMean_dff5885c2c873297]);
        }

        jdouble DescriptiveStatistics::getKurtosis() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getKurtosis_dff5885c2c873297]);
        }

        jdouble DescriptiveStatistics::getMax() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMax_dff5885c2c873297]);
        }

        jdouble DescriptiveStatistics::getMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMean_dff5885c2c873297]);
        }

        jdouble DescriptiveStatistics::getMin() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMin_dff5885c2c873297]);
        }

        jlong DescriptiveStatistics::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
        }

        jdouble DescriptiveStatistics::getPercentile(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPercentile_dcbc7ce2902fa136], a0);
        }

        jdouble DescriptiveStatistics::getPopulationVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPopulationVariance_dff5885c2c873297]);
        }

        jdouble DescriptiveStatistics::getQuadraticMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getQuadraticMean_dff5885c2c873297]);
        }

        jdouble DescriptiveStatistics::getSkewness() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSkewness_dff5885c2c873297]);
        }

        JArray< jdouble > DescriptiveStatistics::getSortedValues() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSortedValues_60c7040667a7dc5c]));
        }

        jdouble DescriptiveStatistics::getStandardDeviation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getStandardDeviation_dff5885c2c873297]);
        }

        jdouble DescriptiveStatistics::getSum() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSum_dff5885c2c873297]);
        }

        jdouble DescriptiveStatistics::getSumOfSquares() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfSquares_dff5885c2c873297]);
        }

        JArray< jdouble > DescriptiveStatistics::getValues() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getValues_60c7040667a7dc5c]));
        }

        jdouble DescriptiveStatistics::getVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getVariance_dff5885c2c873297]);
        }

        jint DescriptiveStatistics::getWindowSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getWindowSize_570ce0828f81a2c1]);
        }

        void DescriptiveStatistics::removeMostRecentValue() const
        {
          env->callVoidMethod(this$, mids$[mid_removeMostRecentValue_0fa09c18fee449d5]);
        }

        jdouble DescriptiveStatistics::replaceMostRecentValue(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_replaceMostRecentValue_dcbc7ce2902fa136], a0);
        }

        void DescriptiveStatistics::setWindowSize(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setWindowSize_99803b0791f320ff], a0);
        }

        ::java::lang::String DescriptiveStatistics::toString() const
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
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        static PyObject *t_DescriptiveStatistics_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DescriptiveStatistics_init_(t_DescriptiveStatistics *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DescriptiveStatistics_accept(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_addValue(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_apply(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_clear(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_copy(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getElement(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_getGeometricMean(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getKurtosis(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getMax(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getMean(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getMin(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getN(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getPercentile(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_getPopulationVariance(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getQuadraticMean(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getSkewness(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getSortedValues(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getStandardDeviation(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getSum(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getSumOfSquares(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getValues(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getVariance(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_getWindowSize(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_removeMostRecentValue(t_DescriptiveStatistics *self);
        static PyObject *t_DescriptiveStatistics_replaceMostRecentValue(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_setWindowSize(t_DescriptiveStatistics *self, PyObject *arg);
        static PyObject *t_DescriptiveStatistics_toString(t_DescriptiveStatistics *self, PyObject *args);
        static PyObject *t_DescriptiveStatistics_get__geometricMean(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__kurtosis(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__max(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__mean(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__min(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__n(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__populationVariance(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__quadraticMean(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__skewness(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__sortedValues(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__standardDeviation(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__sum(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__sumOfSquares(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__values(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__variance(t_DescriptiveStatistics *self, void *data);
        static PyObject *t_DescriptiveStatistics_get__windowSize(t_DescriptiveStatistics *self, void *data);
        static int t_DescriptiveStatistics_set__windowSize(t_DescriptiveStatistics *self, PyObject *arg, void *data);
        static PyGetSetDef t_DescriptiveStatistics__fields_[] = {
          DECLARE_GET_FIELD(t_DescriptiveStatistics, geometricMean),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, kurtosis),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, max),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, mean),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, min),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, n),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, populationVariance),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, quadraticMean),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, skewness),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, sortedValues),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, standardDeviation),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, sum),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, sumOfSquares),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, values),
          DECLARE_GET_FIELD(t_DescriptiveStatistics, variance),
          DECLARE_GETSET_FIELD(t_DescriptiveStatistics, windowSize),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DescriptiveStatistics__methods_[] = {
          DECLARE_METHOD(t_DescriptiveStatistics, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DescriptiveStatistics, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DescriptiveStatistics, accept, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, addValue, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, apply, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, clear, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, copy, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getElement, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, getGeometricMean, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getKurtosis, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getMax, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getMean, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getMin, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getN, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getPercentile, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, getPopulationVariance, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getQuadraticMean, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getSkewness, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getSortedValues, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getStandardDeviation, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getSum, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getSumOfSquares, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getValues, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getVariance, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, getWindowSize, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, removeMostRecentValue, METH_NOARGS),
          DECLARE_METHOD(t_DescriptiveStatistics, replaceMostRecentValue, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, setWindowSize, METH_O),
          DECLARE_METHOD(t_DescriptiveStatistics, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DescriptiveStatistics)[] = {
          { Py_tp_methods, t_DescriptiveStatistics__methods_ },
          { Py_tp_init, (void *) t_DescriptiveStatistics_init_ },
          { Py_tp_getset, t_DescriptiveStatistics__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DescriptiveStatistics)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DescriptiveStatistics, t_DescriptiveStatistics, DescriptiveStatistics);

        void t_DescriptiveStatistics::install(PyObject *module)
        {
          installType(&PY_TYPE(DescriptiveStatistics), &PY_TYPE_DEF(DescriptiveStatistics), module, "DescriptiveStatistics", 0);
        }

        void t_DescriptiveStatistics::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DescriptiveStatistics), "class_", make_descriptor(DescriptiveStatistics::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DescriptiveStatistics), "wrapfn_", make_descriptor(t_DescriptiveStatistics::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DescriptiveStatistics), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DescriptiveStatistics_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DescriptiveStatistics::initializeClass, 1)))
            return NULL;
          return t_DescriptiveStatistics::wrap_Object(DescriptiveStatistics(((t_DescriptiveStatistics *) arg)->object.this$));
        }
        static PyObject *t_DescriptiveStatistics_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DescriptiveStatistics::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DescriptiveStatistics_init_(t_DescriptiveStatistics *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              DescriptiveStatistics object((jobject) NULL);

              INT_CALL(object = DescriptiveStatistics());
              self->object = object;
              break;
            }
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              DescriptiveStatistics object((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                INT_CALL(object = DescriptiveStatistics(a0));
                self->object = object;
                break;
              }
            }
            {
              jint a0;
              DescriptiveStatistics object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = DescriptiveStatistics(a0));
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

        static PyObject *t_DescriptiveStatistics_accept(t_DescriptiveStatistics *self, PyObject *arg)
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

        static PyObject *t_DescriptiveStatistics_addValue(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.addValue(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addValue", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_apply(t_DescriptiveStatistics *self, PyObject *arg)
        {
          ::org::hipparchus::stat::descriptive::UnivariateStatistic a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::hipparchus::stat::descriptive::UnivariateStatistic::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.apply(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "apply", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_clear(t_DescriptiveStatistics *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_DescriptiveStatistics_copy(t_DescriptiveStatistics *self)
        {
          DescriptiveStatistics result((jobject) NULL);
          OBJ_CALL(result = self->object.copy());
          return t_DescriptiveStatistics::wrap_Object(result);
        }

        static PyObject *t_DescriptiveStatistics_getElement(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getElement(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElement", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_getGeometricMean(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getGeometricMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getKurtosis(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getKurtosis());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getMax(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMax());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getMean(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getMin(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMin());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getN(t_DescriptiveStatistics *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_DescriptiveStatistics_getPercentile(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getPercentile(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getPercentile", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_getPopulationVariance(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPopulationVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getQuadraticMean(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getQuadraticMean());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getSkewness(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSkewness());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getSortedValues(t_DescriptiveStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSortedValues());
          return result.wrap();
        }

        static PyObject *t_DescriptiveStatistics_getStandardDeviation(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getSum(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSum());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getSumOfSquares(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfSquares());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getValues(t_DescriptiveStatistics *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getValues());
          return result.wrap();
        }

        static PyObject *t_DescriptiveStatistics_getVariance(t_DescriptiveStatistics *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getVariance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_DescriptiveStatistics_getWindowSize(t_DescriptiveStatistics *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getWindowSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_DescriptiveStatistics_removeMostRecentValue(t_DescriptiveStatistics *self)
        {
          OBJ_CALL(self->object.removeMostRecentValue());
          Py_RETURN_NONE;
        }

        static PyObject *t_DescriptiveStatistics_replaceMostRecentValue(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.replaceMostRecentValue(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "replaceMostRecentValue", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_setWindowSize(t_DescriptiveStatistics *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setWindowSize(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setWindowSize", arg);
          return NULL;
        }

        static PyObject *t_DescriptiveStatistics_toString(t_DescriptiveStatistics *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(DescriptiveStatistics), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_DescriptiveStatistics_get__geometricMean(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getGeometricMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__kurtosis(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getKurtosis());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__max(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMax());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__mean(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__min(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMin());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__n(t_DescriptiveStatistics *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_DescriptiveStatistics_get__populationVariance(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPopulationVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__quadraticMean(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getQuadraticMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__skewness(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSkewness());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__sortedValues(t_DescriptiveStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSortedValues());
          return value.wrap();
        }

        static PyObject *t_DescriptiveStatistics_get__standardDeviation(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getStandardDeviation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__sum(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSum());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__sumOfSquares(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfSquares());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__values(t_DescriptiveStatistics *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getValues());
          return value.wrap();
        }

        static PyObject *t_DescriptiveStatistics_get__variance(t_DescriptiveStatistics *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_DescriptiveStatistics_get__windowSize(t_DescriptiveStatistics *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getWindowSize());
          return PyLong_FromLong((long) value);
        }
        static int t_DescriptiveStatistics_set__windowSize(t_DescriptiveStatistics *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setWindowSize(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "windowSize", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/XmlStructureKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/parsing/AbstractConstituentParser.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/files/ccsds/section/XmlStructureKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *XmlStructureKey::class$ = NULL;
          jmethodID *XmlStructureKey::mids$ = NULL;
          bool XmlStructureKey::live$ = false;
          XmlStructureKey *XmlStructureKey::body = NULL;
          XmlStructureKey *XmlStructureKey::data = NULL;
          XmlStructureKey *XmlStructureKey::header = NULL;
          XmlStructureKey *XmlStructureKey::metadata = NULL;
          XmlStructureKey *XmlStructureKey::segment = NULL;

          jclass XmlStructureKey::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/XmlStructureKey");

              mids$ = new jmethodID[max_mid];
              mids$[mid_process_f1d9f5026ab4c64c] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/parsing/AbstractConstituentParser;)Z");
              mids$[mid_valueOf_5ebeae299069d557] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/section/XmlStructureKey;");
              mids$[mid_values_dacfd4acd321e995] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/section/XmlStructureKey;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              body = new XmlStructureKey(env->getStaticObjectField(cls, "body", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              data = new XmlStructureKey(env->getStaticObjectField(cls, "data", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              header = new XmlStructureKey(env->getStaticObjectField(cls, "header", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              metadata = new XmlStructureKey(env->getStaticObjectField(cls, "metadata", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              segment = new XmlStructureKey(env->getStaticObjectField(cls, "segment", "Lorg/orekit/files/ccsds/section/XmlStructureKey;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean XmlStructureKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser & a1) const
          {
            return env->callBooleanMethod(this$, mids$[mid_process_f1d9f5026ab4c64c], a0.this$, a1.this$);
          }

          XmlStructureKey XmlStructureKey::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return XmlStructureKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5ebeae299069d557], a0.this$));
          }

          JArray< XmlStructureKey > XmlStructureKey::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< XmlStructureKey >(env->callStaticObjectMethod(cls, mids$[mid_values_dacfd4acd321e995]));
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
          static PyObject *t_XmlStructureKey_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_XmlStructureKey_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_XmlStructureKey_of_(t_XmlStructureKey *self, PyObject *args);
          static PyObject *t_XmlStructureKey_process(t_XmlStructureKey *self, PyObject *args);
          static PyObject *t_XmlStructureKey_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_XmlStructureKey_values(PyTypeObject *type);
          static PyObject *t_XmlStructureKey_get__parameters_(t_XmlStructureKey *self, void *data);
          static PyGetSetDef t_XmlStructureKey__fields_[] = {
            DECLARE_GET_FIELD(t_XmlStructureKey, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_XmlStructureKey__methods_[] = {
            DECLARE_METHOD(t_XmlStructureKey, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureKey, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureKey, of_, METH_VARARGS),
            DECLARE_METHOD(t_XmlStructureKey, process, METH_VARARGS),
            DECLARE_METHOD(t_XmlStructureKey, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_XmlStructureKey, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(XmlStructureKey)[] = {
            { Py_tp_methods, t_XmlStructureKey__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_XmlStructureKey__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(XmlStructureKey)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(XmlStructureKey, t_XmlStructureKey, XmlStructureKey);
          PyObject *t_XmlStructureKey::wrap_Object(const XmlStructureKey& object, PyTypeObject *p0)
          {
            PyObject *obj = t_XmlStructureKey::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_XmlStructureKey *self = (t_XmlStructureKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_XmlStructureKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_XmlStructureKey::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_XmlStructureKey *self = (t_XmlStructureKey *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_XmlStructureKey::install(PyObject *module)
          {
            installType(&PY_TYPE(XmlStructureKey), &PY_TYPE_DEF(XmlStructureKey), module, "XmlStructureKey", 0);
          }

          void t_XmlStructureKey::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "class_", make_descriptor(XmlStructureKey::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "wrapfn_", make_descriptor(t_XmlStructureKey::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "boxfn_", make_descriptor(boxObject));
            env->getClass(XmlStructureKey::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "body", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::body)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "data", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::data)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "header", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::header)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "metadata", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::metadata)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(XmlStructureKey), "segment", make_descriptor(t_XmlStructureKey::wrap_Object(*XmlStructureKey::segment)));
          }

          static PyObject *t_XmlStructureKey_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, XmlStructureKey::initializeClass, 1)))
              return NULL;
            return t_XmlStructureKey::wrap_Object(XmlStructureKey(((t_XmlStructureKey *) arg)->object.this$));
          }
          static PyObject *t_XmlStructureKey_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, XmlStructureKey::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_XmlStructureKey_of_(t_XmlStructureKey *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_XmlStructureKey_process(t_XmlStructureKey *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
            ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean result;

            if (!parseArgs(args, "kK", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::utils::parsing::t_AbstractConstituentParser::parameters_))
            {
              OBJ_CALL(result = self->object.process(a0, a1));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "process", args);
            return NULL;
          }

          static PyObject *t_XmlStructureKey_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            XmlStructureKey result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::section::XmlStructureKey::valueOf(a0));
              return t_XmlStructureKey::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_XmlStructureKey_values(PyTypeObject *type)
          {
            JArray< XmlStructureKey > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::section::XmlStructureKey::values());
            return JArray<jobject>(result.this$).wrap(t_XmlStructureKey::wrap_jobject);
          }
          static PyObject *t_XmlStructureKey_get__parameters_(t_XmlStructureKey *self, void *data)
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
#include "org/orekit/data/PythonDataProvider.h"
#include "org/orekit/data/DataProvider.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PythonDataProvider::class$ = NULL;
      jmethodID *PythonDataProvider::mids$ = NULL;
      bool PythonDataProvider::live$ = false;

      jclass PythonDataProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PythonDataProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonDataProvider::PythonDataProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonDataProvider::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonDataProvider::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonDataProvider::pythonExtension(jlong a0) const
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
    namespace data {
      static PyObject *t_PythonDataProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonDataProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonDataProvider_init_(t_PythonDataProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonDataProvider_finalize(t_PythonDataProvider *self);
      static PyObject *t_PythonDataProvider_pythonExtension(t_PythonDataProvider *self, PyObject *args);
      static void JNICALL t_PythonDataProvider_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonDataProvider_get__self(t_PythonDataProvider *self, void *data);
      static PyGetSetDef t_PythonDataProvider__fields_[] = {
        DECLARE_GET_FIELD(t_PythonDataProvider, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonDataProvider__methods_[] = {
        DECLARE_METHOD(t_PythonDataProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonDataProvider, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonDataProvider, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonDataProvider)[] = {
        { Py_tp_methods, t_PythonDataProvider__methods_ },
        { Py_tp_init, (void *) t_PythonDataProvider_init_ },
        { Py_tp_getset, t_PythonDataProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonDataProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonDataProvider, t_PythonDataProvider, PythonDataProvider);

      void t_PythonDataProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonDataProvider), &PY_TYPE_DEF(PythonDataProvider), module, "PythonDataProvider", 1);
      }

      void t_PythonDataProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataProvider), "class_", make_descriptor(PythonDataProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataProvider), "wrapfn_", make_descriptor(t_PythonDataProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonDataProvider), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonDataProvider::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonDataProvider_pythonDecRef0 },
        };
        env->registerNatives(cls, methods, 1);
      }

      static PyObject *t_PythonDataProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonDataProvider::initializeClass, 1)))
          return NULL;
        return t_PythonDataProvider::wrap_Object(PythonDataProvider(((t_PythonDataProvider *) arg)->object.this$));
      }
      static PyObject *t_PythonDataProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonDataProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonDataProvider_init_(t_PythonDataProvider *self, PyObject *args, PyObject *kwds)
      {
        PythonDataProvider object((jobject) NULL);

        INT_CALL(object = PythonDataProvider());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonDataProvider_finalize(t_PythonDataProvider *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonDataProvider_pythonExtension(t_PythonDataProvider *self, PyObject *args)
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

      static void JNICALL t_PythonDataProvider_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonDataProvider::mids$[PythonDataProvider::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonDataProvider::mids$[PythonDataProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonDataProvider_get__self(t_PythonDataProvider *self, void *data)
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
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/Vector.h"
#include "java/text/NumberFormat.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/Space.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          ::java::lang::Class *Vector2D::class$ = NULL;
          jmethodID *Vector2D::mids$ = NULL;
          bool Vector2D::live$ = false;
          Vector2D *Vector2D::MINUS_I = NULL;
          Vector2D *Vector2D::MINUS_J = NULL;
          Vector2D *Vector2D::NEGATIVE_INFINITY = NULL;
          Vector2D *Vector2D::NaN = NULL;
          Vector2D *Vector2D::PLUS_I = NULL;
          Vector2D *Vector2D::PLUS_J = NULL;
          Vector2D *Vector2D::POSITIVE_INFINITY = NULL;
          Vector2D *Vector2D::ZERO = NULL;

          jclass Vector2D::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/Vector2D");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_fa9d415d19f69361] = env->getMethodID(cls, "<init>", "([D)V");
              mids$[mid_init$_43c9ba22c547cbd5] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_init$_168dc3d77e3245ed] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_46062026ee9fbbf5] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_init$_2d0bba3ca271f687] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;DLorg/hipparchus/geometry/euclidean/twod/Vector2D;)V");
              mids$[mid_add_8144ab28b67d94ff] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_add_33b3b958740706ea] = env->getMethodID(cls, "add", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_angle_7e41f0ef8aa2109d] = env->getStaticMethodID(cls, "angle", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_crossProduct_7e41f0ef8aa2109d] = env->getMethodID(cls, "crossProduct", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_distance_07bb97c2794cf6b1] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_7e41f0ef8aa2109d] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_distance1_b4822d5266bca26e] = env->getMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distance1_7e41f0ef8aa2109d] = env->getStaticMethodID(cls, "distance1", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_distanceInf_b4822d5266bca26e] = env->getMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceInf_7e41f0ef8aa2109d] = env->getStaticMethodID(cls, "distanceInf", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_distanceSq_b4822d5266bca26e] = env->getMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_distanceSq_7e41f0ef8aa2109d] = env->getStaticMethodID(cls, "distanceSq", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_dotProduct_b4822d5266bca26e] = env->getMethodID(cls, "dotProduct", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_65c7d273e80d497a] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getNorm_dff5885c2c873297] = env->getMethodID(cls, "getNorm", "()D");
              mids$[mid_getNorm1_dff5885c2c873297] = env->getMethodID(cls, "getNorm1", "()D");
              mids$[mid_getNormInf_dff5885c2c873297] = env->getMethodID(cls, "getNormInf", "()D");
              mids$[mid_getNormSq_dff5885c2c873297] = env->getMethodID(cls, "getNormSq", "()D");
              mids$[mid_getSpace_ebbd6b2d39ab0e4f] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getX_dff5885c2c873297] = env->getMethodID(cls, "getX", "()D");
              mids$[mid_getY_dff5885c2c873297] = env->getMethodID(cls, "getY", "()D");
              mids$[mid_getZero_73f627838730c264] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isInfinite_b108b35ef48e27bd] = env->getMethodID(cls, "isInfinite", "()Z");
              mids$[mid_isNaN_b108b35ef48e27bd] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_73f627838730c264] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_orientation_86e6d5e84ec305f0] = env->getStaticMethodID(cls, "orientation", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;Lorg/hipparchus/geometry/euclidean/twod/Vector2D;)D");
              mids$[mid_scalarMultiply_1d94587a4ec1fe0f] = env->getMethodID(cls, "scalarMultiply", "(D)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_subtract_8144ab28b67d94ff] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_subtract_33b3b958740706ea] = env->getMethodID(cls, "subtract", "(DLorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_toArray_60c7040667a7dc5c] = env->getMethodID(cls, "toArray", "()[D");
              mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
              mids$[mid_toString_7b429db583278c20] = env->getMethodID(cls, "toString", "(Ljava/text/NumberFormat;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MINUS_I = new Vector2D(env->getStaticObjectField(cls, "MINUS_I", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              MINUS_J = new Vector2D(env->getStaticObjectField(cls, "MINUS_J", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              NEGATIVE_INFINITY = new Vector2D(env->getStaticObjectField(cls, "NEGATIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              NaN = new Vector2D(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              PLUS_I = new Vector2D(env->getStaticObjectField(cls, "PLUS_I", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              PLUS_J = new Vector2D(env->getStaticObjectField(cls, "PLUS_J", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              POSITIVE_INFINITY = new Vector2D(env->getStaticObjectField(cls, "POSITIVE_INFINITY", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              ZERO = new Vector2D(env->getStaticObjectField(cls, "ZERO", "Lorg/hipparchus/geometry/euclidean/twod/Vector2D;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Vector2D::Vector2D(const JArray< jdouble > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fa9d415d19f69361, a0.this$)) {}

          Vector2D::Vector2D(jdouble a0, const Vector2D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_43c9ba22c547cbd5, a0, a1.this$)) {}

          Vector2D::Vector2D(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

          Vector2D::Vector2D(jdouble a0, const Vector2D & a1, jdouble a2, const Vector2D & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_168dc3d77e3245ed, a0, a1.this$, a2, a3.this$)) {}

          Vector2D::Vector2D(jdouble a0, const Vector2D & a1, jdouble a2, const Vector2D & a3, jdouble a4, const Vector2D & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_46062026ee9fbbf5, a0, a1.this$, a2, a3.this$, a4, a5.this$)) {}

          Vector2D::Vector2D(jdouble a0, const Vector2D & a1, jdouble a2, const Vector2D & a3, jdouble a4, const Vector2D & a5, jdouble a6, const Vector2D & a7) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2d0bba3ca271f687, a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$)) {}

          Vector2D Vector2D::add(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_add_8144ab28b67d94ff], a0.this$));
          }

          Vector2D Vector2D::add(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_add_33b3b958740706ea], a0, a1.this$));
          }

          jdouble Vector2D::angle(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_angle_7e41f0ef8aa2109d], a0.this$, a1.this$);
          }

          jdouble Vector2D::crossProduct(const Vector2D & a0, const Vector2D & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_crossProduct_7e41f0ef8aa2109d], a0.this$, a1.this$);
          }

          jdouble Vector2D::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_07bb97c2794cf6b1], a0.this$);
          }

          jdouble Vector2D::distance(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_7e41f0ef8aa2109d], a0.this$, a1.this$);
          }

          jdouble Vector2D::distance1(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance1_b4822d5266bca26e], a0.this$);
          }

          jdouble Vector2D::distance1(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance1_7e41f0ef8aa2109d], a0.this$, a1.this$);
          }

          jdouble Vector2D::distanceInf(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceInf_b4822d5266bca26e], a0.this$);
          }

          jdouble Vector2D::distanceInf(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceInf_7e41f0ef8aa2109d], a0.this$, a1.this$);
          }

          jdouble Vector2D::distanceSq(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distanceSq_b4822d5266bca26e], a0.this$);
          }

          jdouble Vector2D::distanceSq(const Vector2D & a0, const Vector2D & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distanceSq_7e41f0ef8aa2109d], a0.this$, a1.this$);
          }

          jdouble Vector2D::dotProduct(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_dotProduct_b4822d5266bca26e], a0.this$);
          }

          jboolean Vector2D::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
          }

          jboolean Vector2D::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_65c7d273e80d497a], a0.this$);
          }

          jdouble Vector2D::getNorm() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm_dff5885c2c873297]);
          }

          jdouble Vector2D::getNorm1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNorm1_dff5885c2c873297]);
          }

          jdouble Vector2D::getNormInf() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormInf_dff5885c2c873297]);
          }

          jdouble Vector2D::getNormSq() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getNormSq_dff5885c2c873297]);
          }

          ::org::hipparchus::geometry::Space Vector2D::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_ebbd6b2d39ab0e4f]));
          }

          jdouble Vector2D::getX() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getX_dff5885c2c873297]);
          }

          jdouble Vector2D::getY() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY_dff5885c2c873297]);
          }

          Vector2D Vector2D::getZero() const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_getZero_73f627838730c264]));
          }

          jint Vector2D::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
          }

          jboolean Vector2D::isInfinite() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isInfinite_b108b35ef48e27bd]);
          }

          jboolean Vector2D::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_b108b35ef48e27bd]);
          }

          Vector2D Vector2D::negate() const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_negate_73f627838730c264]));
          }

          jdouble Vector2D::orientation(const Vector2D & a0, const Vector2D & a1, const Vector2D & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_orientation_86e6d5e84ec305f0], a0.this$, a1.this$, a2.this$);
          }

          Vector2D Vector2D::scalarMultiply(jdouble a0) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_scalarMultiply_1d94587a4ec1fe0f], a0));
          }

          Vector2D Vector2D::subtract(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_subtract_8144ab28b67d94ff], a0.this$));
          }

          Vector2D Vector2D::subtract(jdouble a0, const ::org::hipparchus::geometry::Vector & a1) const
          {
            return Vector2D(env->callObjectMethod(this$, mids$[mid_subtract_33b3b958740706ea], a0, a1.this$));
          }

          JArray< jdouble > Vector2D::toArray() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_60c7040667a7dc5c]));
          }

          ::java::lang::String Vector2D::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
          }

          ::java::lang::String Vector2D::toString(const ::java::text::NumberFormat & a0) const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_7b429db583278c20], a0.this$));
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
        namespace twod {
          static PyObject *t_Vector2D_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Vector2D_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Vector2D_init_(t_Vector2D *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Vector2D_add(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_angle(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_crossProduct(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_distance(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_distance1(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_distance1_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_distanceInf(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_distanceInf_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_distanceSq(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_distanceSq_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_dotProduct(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_equals(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_equalsIeee754(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_getNorm(t_Vector2D *self);
          static PyObject *t_Vector2D_getNorm1(t_Vector2D *self);
          static PyObject *t_Vector2D_getNormInf(t_Vector2D *self);
          static PyObject *t_Vector2D_getNormSq(t_Vector2D *self);
          static PyObject *t_Vector2D_getSpace(t_Vector2D *self);
          static PyObject *t_Vector2D_getX(t_Vector2D *self);
          static PyObject *t_Vector2D_getY(t_Vector2D *self);
          static PyObject *t_Vector2D_getZero(t_Vector2D *self);
          static PyObject *t_Vector2D_hashCode(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_isInfinite(t_Vector2D *self);
          static PyObject *t_Vector2D_isNaN(t_Vector2D *self);
          static PyObject *t_Vector2D_negate(t_Vector2D *self);
          static PyObject *t_Vector2D_orientation(PyTypeObject *type, PyObject *args);
          static PyObject *t_Vector2D_scalarMultiply(t_Vector2D *self, PyObject *arg);
          static PyObject *t_Vector2D_subtract(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_toArray(t_Vector2D *self);
          static PyObject *t_Vector2D_toString(t_Vector2D *self, PyObject *args);
          static PyObject *t_Vector2D_get__infinite(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__naN(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__norm(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__norm1(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__normInf(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__normSq(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__space(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__x(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__y(t_Vector2D *self, void *data);
          static PyObject *t_Vector2D_get__zero(t_Vector2D *self, void *data);
          static PyGetSetDef t_Vector2D__fields_[] = {
            DECLARE_GET_FIELD(t_Vector2D, infinite),
            DECLARE_GET_FIELD(t_Vector2D, naN),
            DECLARE_GET_FIELD(t_Vector2D, norm),
            DECLARE_GET_FIELD(t_Vector2D, norm1),
            DECLARE_GET_FIELD(t_Vector2D, normInf),
            DECLARE_GET_FIELD(t_Vector2D, normSq),
            DECLARE_GET_FIELD(t_Vector2D, space),
            DECLARE_GET_FIELD(t_Vector2D, x),
            DECLARE_GET_FIELD(t_Vector2D, y),
            DECLARE_GET_FIELD(t_Vector2D, zero),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Vector2D__methods_[] = {
            DECLARE_METHOD(t_Vector2D, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, add, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, angle, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, crossProduct, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, distance, METH_O),
            DECLARE_METHOD(t_Vector2D, distance1, METH_O),
            DECLARE_METHOD(t_Vector2D, distance1_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, distanceInf, METH_O),
            DECLARE_METHOD(t_Vector2D, distanceInf_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, distanceSq, METH_O),
            DECLARE_METHOD(t_Vector2D, distanceSq_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, dotProduct, METH_O),
            DECLARE_METHOD(t_Vector2D, equals, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, equalsIeee754, METH_O),
            DECLARE_METHOD(t_Vector2D, getNorm, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getNorm1, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getNormInf, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getNormSq, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getX, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getY, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, getZero, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, isInfinite, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, negate, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, orientation, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Vector2D, scalarMultiply, METH_O),
            DECLARE_METHOD(t_Vector2D, subtract, METH_VARARGS),
            DECLARE_METHOD(t_Vector2D, toArray, METH_NOARGS),
            DECLARE_METHOD(t_Vector2D, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Vector2D)[] = {
            { Py_tp_methods, t_Vector2D__methods_ },
            { Py_tp_init, (void *) t_Vector2D_init_ },
            { Py_tp_getset, t_Vector2D__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Vector2D)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Vector2D, t_Vector2D, Vector2D);

          void t_Vector2D::install(PyObject *module)
          {
            installType(&PY_TYPE(Vector2D), &PY_TYPE_DEF(Vector2D), module, "Vector2D", 0);
          }

          void t_Vector2D::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "class_", make_descriptor(Vector2D::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "wrapfn_", make_descriptor(t_Vector2D::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "boxfn_", make_descriptor(boxObject));
            env->getClass(Vector2D::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "MINUS_I", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::MINUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "MINUS_J", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::MINUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "NEGATIVE_INFINITY", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::NEGATIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "NaN", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::NaN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "PLUS_I", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::PLUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "PLUS_J", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::PLUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "POSITIVE_INFINITY", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::POSITIVE_INFINITY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Vector2D), "ZERO", make_descriptor(t_Vector2D::wrap_Object(*Vector2D::ZERO)));
          }

          static PyObject *t_Vector2D_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Vector2D::initializeClass, 1)))
              return NULL;
            return t_Vector2D::wrap_Object(Vector2D(((t_Vector2D *) arg)->object.this$));
          }
          static PyObject *t_Vector2D_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Vector2D::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Vector2D_init_(t_Vector2D *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                JArray< jdouble > a0((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "[D", &a0))
                {
                  INT_CALL(object = Vector2D(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                Vector2D a1((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "Dk", Vector2D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Vector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              {
                jdouble a0;
                jdouble a1;
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  INT_CALL(object = Vector2D(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                Vector2D a1((jobject) NULL);
                jdouble a2;
                Vector2D a3((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "DkDk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Vector2D(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 6:
              {
                jdouble a0;
                Vector2D a1((jobject) NULL);
                jdouble a2;
                Vector2D a3((jobject) NULL);
                jdouble a4;
                Vector2D a5((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDk", Vector2D::initializeClass, Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                {
                  INT_CALL(object = Vector2D(a0, a1, a2, a3, a4, a5));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 8:
              {
                jdouble a0;
                Vector2D a1((jobject) NULL);
                jdouble a2;
                Vector2D a3((jobject) NULL);
                jdouble a4;
                Vector2D a5((jobject) NULL);
                jdouble a6;
                Vector2D a7((jobject) NULL);
                Vector2D object((jobject) NULL);

                if (!parseArgs(args, "DkDkDkDk", Vector2D::initializeClass, Vector2D::initializeClass, Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
                {
                  INT_CALL(object = Vector2D(a0, a1, a2, a3, a4, a5, a6, a7));
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

          static PyObject *t_Vector2D_add(t_Vector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0));
                  return t_Vector2D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector2D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.add(a0, a1));
                  return t_Vector2D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "add", args);
            return NULL;
          }

          static PyObject *t_Vector2D_angle(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::angle(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "angle", args);
            return NULL;
          }

          static PyObject *t_Vector2D_crossProduct(t_Vector2D *self, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.crossProduct(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "crossProduct", args);
            return NULL;
          }

          static PyObject *t_Vector2D_distance(t_Vector2D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.distance(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_distance1(t_Vector2D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distance1(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distance1", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_distance1_(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::distance1(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance1_", args);
            return NULL;
          }

          static PyObject *t_Vector2D_distanceInf(t_Vector2D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceInf(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceInf", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_distanceInf_(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::distanceInf(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceInf_", args);
            return NULL;
          }

          static PyObject *t_Vector2D_distanceSq(t_Vector2D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.distanceSq(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "distanceSq", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_distanceSq_(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::distanceSq(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distanceSq_", args);
            return NULL;
          }

          static PyObject *t_Vector2D_distance_(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_Vector2D_dotProduct(t_Vector2D *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Vector a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
            {
              OBJ_CALL(result = self->object.dotProduct(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "dotProduct", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_equals(t_Vector2D *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(Vector2D), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_Vector2D_equalsIeee754(t_Vector2D *self, PyObject *arg)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "o", &a0))
            {
              OBJ_CALL(result = self->object.equalsIeee754(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "equalsIeee754", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_getNorm(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getNorm1(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNorm1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getNormInf(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormInf());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getNormSq(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getNormSq());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getSpace(t_Vector2D *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_Vector2D_getX(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getX());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getY(t_Vector2D *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getY());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Vector2D_getZero(t_Vector2D *self)
          {
            Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.getZero());
            return t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_Vector2D_hashCode(t_Vector2D *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(Vector2D), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_Vector2D_isInfinite(t_Vector2D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isInfinite());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector2D_isNaN(t_Vector2D *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_Vector2D_negate(t_Vector2D *self)
          {
            Vector2D result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_Vector2D::wrap_Object(result);
          }

          static PyObject *t_Vector2D_orientation(PyTypeObject *type, PyObject *args)
          {
            Vector2D a0((jobject) NULL);
            Vector2D a1((jobject) NULL);
            Vector2D a2((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kkk", Vector2D::initializeClass, Vector2D::initializeClass, Vector2D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::twod::Vector2D::orientation(a0, a1, a2));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "orientation", args);
            return NULL;
          }

          static PyObject *t_Vector2D_scalarMultiply(t_Vector2D *self, PyObject *arg)
          {
            jdouble a0;
            Vector2D result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.scalarMultiply(a0));
              return t_Vector2D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "scalarMultiply", arg);
            return NULL;
          }

          static PyObject *t_Vector2D_subtract(t_Vector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0));
                  return t_Vector2D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::geometry::Vector a1((jobject) NULL);
                PyTypeObject **p1;
                Vector2D result((jobject) NULL);

                if (!parseArgs(args, "DK", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &a1, &p1, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.subtract(a0, a1));
                  return t_Vector2D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "subtract", args);
            return NULL;
          }

          static PyObject *t_Vector2D_toArray(t_Vector2D *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.toArray());
            return result.wrap();
          }

          static PyObject *t_Vector2D_toString(t_Vector2D *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }
              break;
             case 1:
              {
                ::java::text::NumberFormat a0((jobject) NULL);
                ::java::lang::String result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::text::NumberFormat::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.toString(a0));
                  return j2p(result);
                }
              }
            }

            return callSuper(PY_TYPE(Vector2D), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_Vector2D_get__infinite(t_Vector2D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isInfinite());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector2D_get__naN(t_Vector2D *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_Vector2D_get__norm(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__norm1(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNorm1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__normInf(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormInf());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__normSq(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getNormSq());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__space(t_Vector2D *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_Vector2D_get__x(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getX());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__y(t_Vector2D *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getY());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Vector2D_get__zero(t_Vector2D *self, void *data)
          {
            Vector2D value((jobject) NULL);
            OBJ_CALL(value = self->object.getZero());
            return t_Vector2D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *FieldSinCos::class$ = NULL;
      jmethodID *FieldSinCos::mids$ = NULL;
      bool FieldSinCos::live$ = false;

      jclass FieldSinCos::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/FieldSinCos");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ea69641e3fe74dd6] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;Ljava/lang/Object;)V");
          mids$[mid_cos_4d26fd885228c716] = env->getMethodID(cls, "cos", "()Ljava/lang/Object;");
          mids$[mid_difference_2e2927a46e3fad3f] = env->getStaticMethodID(cls, "difference", "(Lorg/hipparchus/util/FieldSinCos;Lorg/hipparchus/util/FieldSinCos;)Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sin_4d26fd885228c716] = env->getMethodID(cls, "sin", "()Ljava/lang/Object;");
          mids$[mid_sum_2e2927a46e3fad3f] = env->getStaticMethodID(cls, "sum", "(Lorg/hipparchus/util/FieldSinCos;Lorg/hipparchus/util/FieldSinCos;)Lorg/hipparchus/util/FieldSinCos;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldSinCos::FieldSinCos(const ::java::lang::Object & a0, const ::java::lang::Object & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ea69641e3fe74dd6, a0.this$, a1.this$)) {}

      ::java::lang::Object FieldSinCos::cos() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_cos_4d26fd885228c716]));
      }

      FieldSinCos FieldSinCos::difference(const FieldSinCos & a0, const FieldSinCos & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldSinCos(env->callStaticObjectMethod(cls, mids$[mid_difference_2e2927a46e3fad3f], a0.this$, a1.this$));
      }

      ::java::lang::Object FieldSinCos::sin() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_sin_4d26fd885228c716]));
      }

      FieldSinCos FieldSinCos::sum(const FieldSinCos & a0, const FieldSinCos & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldSinCos(env->callStaticObjectMethod(cls, mids$[mid_sum_2e2927a46e3fad3f], a0.this$, a1.this$));
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
      static PyObject *t_FieldSinCos_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSinCos_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldSinCos_of_(t_FieldSinCos *self, PyObject *args);
      static int t_FieldSinCos_init_(t_FieldSinCos *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldSinCos_cos(t_FieldSinCos *self);
      static PyObject *t_FieldSinCos_difference(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldSinCos_sin(t_FieldSinCos *self);
      static PyObject *t_FieldSinCos_sum(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldSinCos_get__parameters_(t_FieldSinCos *self, void *data);
      static PyGetSetDef t_FieldSinCos__fields_[] = {
        DECLARE_GET_FIELD(t_FieldSinCos, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldSinCos__methods_[] = {
        DECLARE_METHOD(t_FieldSinCos, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSinCos, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldSinCos, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldSinCos, cos, METH_NOARGS),
        DECLARE_METHOD(t_FieldSinCos, difference, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldSinCos, sin, METH_NOARGS),
        DECLARE_METHOD(t_FieldSinCos, sum, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldSinCos)[] = {
        { Py_tp_methods, t_FieldSinCos__methods_ },
        { Py_tp_init, (void *) t_FieldSinCos_init_ },
        { Py_tp_getset, t_FieldSinCos__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldSinCos)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldSinCos, t_FieldSinCos, FieldSinCos);
      PyObject *t_FieldSinCos::wrap_Object(const FieldSinCos& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSinCos::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSinCos *self = (t_FieldSinCos *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldSinCos::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldSinCos::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldSinCos *self = (t_FieldSinCos *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldSinCos::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldSinCos), &PY_TYPE_DEF(FieldSinCos), module, "FieldSinCos", 0);
      }

      void t_FieldSinCos::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinCos), "class_", make_descriptor(FieldSinCos::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinCos), "wrapfn_", make_descriptor(t_FieldSinCos::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSinCos), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldSinCos_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldSinCos::initializeClass, 1)))
          return NULL;
        return t_FieldSinCos::wrap_Object(FieldSinCos(((t_FieldSinCos *) arg)->object.this$));
      }
      static PyObject *t_FieldSinCos_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldSinCos::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldSinCos_of_(t_FieldSinCos *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldSinCos_init_(t_FieldSinCos *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::java::lang::Object a1((jobject) NULL);
        FieldSinCos object((jobject) NULL);

        if (!parseArgs(args, "oo", &a0, &a1))
        {
          INT_CALL(object = FieldSinCos(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldSinCos_cos(t_FieldSinCos *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldSinCos_difference(PyTypeObject *type, PyObject *args)
      {
        FieldSinCos a0((jobject) NULL);
        PyTypeObject **p0;
        FieldSinCos a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSinCos result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldSinCos::initializeClass, FieldSinCos::initializeClass, &a0, &p0, t_FieldSinCos::parameters_, &a1, &p1, t_FieldSinCos::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FieldSinCos::difference(a0, a1));
          return t_FieldSinCos::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "difference", args);
        return NULL;
      }

      static PyObject *t_FieldSinCos_sin(t_FieldSinCos *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_FieldSinCos_sum(PyTypeObject *type, PyObject *args)
      {
        FieldSinCos a0((jobject) NULL);
        PyTypeObject **p0;
        FieldSinCos a1((jobject) NULL);
        PyTypeObject **p1;
        FieldSinCos result((jobject) NULL);

        if (!parseArgs(args, "KK", FieldSinCos::initializeClass, FieldSinCos::initializeClass, &a0, &p0, t_FieldSinCos::parameters_, &a1, &p1, t_FieldSinCos::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::util::FieldSinCos::sum(a0, a1));
          return t_FieldSinCos::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "sum", args);
        return NULL;
      }
      static PyObject *t_FieldSinCos_get__parameters_(t_FieldSinCos *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenTesseralLinear.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {

              ::java::lang::Class *HansenTesseralLinear::class$ = NULL;
              jmethodID *HansenTesseralLinear::mids$ = NULL;
              bool HansenTesseralLinear::live$ = false;

              jclass HansenTesseralLinear::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/hansen/HansenTesseralLinear");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_602d537927d23d46] = env->getMethodID(cls, "<init>", "(IIIII)V");
                  mids$[mid_computeInitValues_2c56b6dd4d4b1dec] = env->getMethodID(cls, "computeInitValues", "(DDD)V");
                  mids$[mid_getDerivative_60d7624725a52590] = env->getMethodID(cls, "getDerivative", "(ID)D");
                  mids$[mid_getValue_60d7624725a52590] = env->getMethodID(cls, "getValue", "(ID)D");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              HansenTesseralLinear::HansenTesseralLinear(jint a0, jint a1, jint a2, jint a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_602d537927d23d46, a0, a1, a2, a3, a4)) {}

              void HansenTesseralLinear::computeInitValues(jdouble a0, jdouble a1, jdouble a2) const
              {
                env->callVoidMethod(this$, mids$[mid_computeInitValues_2c56b6dd4d4b1dec], a0, a1, a2);
              }

              jdouble HansenTesseralLinear::getDerivative(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDerivative_60d7624725a52590], a0, a1);
              }

              jdouble HansenTesseralLinear::getValue(jint a0, jdouble a1) const
              {
                return env->callDoubleMethod(this$, mids$[mid_getValue_60d7624725a52590], a0, a1);
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            namespace hansen {
              static PyObject *t_HansenTesseralLinear_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_HansenTesseralLinear_instance_(PyTypeObject *type, PyObject *arg);
              static int t_HansenTesseralLinear_init_(t_HansenTesseralLinear *self, PyObject *args, PyObject *kwds);
              static PyObject *t_HansenTesseralLinear_computeInitValues(t_HansenTesseralLinear *self, PyObject *args);
              static PyObject *t_HansenTesseralLinear_getDerivative(t_HansenTesseralLinear *self, PyObject *args);
              static PyObject *t_HansenTesseralLinear_getValue(t_HansenTesseralLinear *self, PyObject *args);

              static PyMethodDef t_HansenTesseralLinear__methods_[] = {
                DECLARE_METHOD(t_HansenTesseralLinear, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenTesseralLinear, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_HansenTesseralLinear, computeInitValues, METH_VARARGS),
                DECLARE_METHOD(t_HansenTesseralLinear, getDerivative, METH_VARARGS),
                DECLARE_METHOD(t_HansenTesseralLinear, getValue, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(HansenTesseralLinear)[] = {
                { Py_tp_methods, t_HansenTesseralLinear__methods_ },
                { Py_tp_init, (void *) t_HansenTesseralLinear_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(HansenTesseralLinear)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(HansenTesseralLinear, t_HansenTesseralLinear, HansenTesseralLinear);

              void t_HansenTesseralLinear::install(PyObject *module)
              {
                installType(&PY_TYPE(HansenTesseralLinear), &PY_TYPE_DEF(HansenTesseralLinear), module, "HansenTesseralLinear", 0);
              }

              void t_HansenTesseralLinear::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenTesseralLinear), "class_", make_descriptor(HansenTesseralLinear::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenTesseralLinear), "wrapfn_", make_descriptor(t_HansenTesseralLinear::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(HansenTesseralLinear), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_HansenTesseralLinear_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, HansenTesseralLinear::initializeClass, 1)))
                  return NULL;
                return t_HansenTesseralLinear::wrap_Object(HansenTesseralLinear(((t_HansenTesseralLinear *) arg)->object.this$));
              }
              static PyObject *t_HansenTesseralLinear_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, HansenTesseralLinear::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_HansenTesseralLinear_init_(t_HansenTesseralLinear *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                jint a1;
                jint a2;
                jint a3;
                jint a4;
                HansenTesseralLinear object((jobject) NULL);

                if (!parseArgs(args, "IIIII", &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = HansenTesseralLinear(a0, a1, a2, a3, a4));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_HansenTesseralLinear_computeInitValues(t_HansenTesseralLinear *self, PyObject *args)
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.computeInitValues(a0, a1, a2));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "computeInitValues", args);
                return NULL;
              }

              static PyObject *t_HansenTesseralLinear_getDerivative(t_HansenTesseralLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getDerivative(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
                return NULL;
              }

              static PyObject *t_HansenTesseralLinear_getValue(t_HansenTesseralLinear *self, PyObject *args)
              {
                jint a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getValue(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }

                PyErr_SetArgsError((PyObject *) self, "getValue", args);
                return NULL;
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
#include "org/hipparchus/random/CorrelatedRandomVectorGenerator.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/random/NormalizedRandomGenerator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *CorrelatedRandomVectorGenerator::class$ = NULL;
      jmethodID *CorrelatedRandomVectorGenerator::mids$ = NULL;
      bool CorrelatedRandomVectorGenerator::live$ = false;

      jclass CorrelatedRandomVectorGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/CorrelatedRandomVectorGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_fb090446522c63e2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DLorg/hipparchus/random/NormalizedRandomGenerator;)V");
          mids$[mid_init$_2c160632cdf05391] = env->getMethodID(cls, "<init>", "([DLorg/hipparchus/linear/RealMatrix;DLorg/hipparchus/random/NormalizedRandomGenerator;)V");
          mids$[mid_getGenerator_8b247f8f2020e9d0] = env->getMethodID(cls, "getGenerator", "()Lorg/hipparchus/random/NormalizedRandomGenerator;");
          mids$[mid_getRank_570ce0828f81a2c1] = env->getMethodID(cls, "getRank", "()I");
          mids$[mid_getRootMatrix_688b496048ff947b] = env->getMethodID(cls, "getRootMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_nextVector_60c7040667a7dc5c] = env->getMethodID(cls, "nextVector", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CorrelatedRandomVectorGenerator::CorrelatedRandomVectorGenerator(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, const ::org::hipparchus::random::NormalizedRandomGenerator & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fb090446522c63e2, a0.this$, a1, a2.this$)) {}

      CorrelatedRandomVectorGenerator::CorrelatedRandomVectorGenerator(const JArray< jdouble > & a0, const ::org::hipparchus::linear::RealMatrix & a1, jdouble a2, const ::org::hipparchus::random::NormalizedRandomGenerator & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2c160632cdf05391, a0.this$, a1.this$, a2, a3.this$)) {}

      ::org::hipparchus::random::NormalizedRandomGenerator CorrelatedRandomVectorGenerator::getGenerator() const
      {
        return ::org::hipparchus::random::NormalizedRandomGenerator(env->callObjectMethod(this$, mids$[mid_getGenerator_8b247f8f2020e9d0]));
      }

      jint CorrelatedRandomVectorGenerator::getRank() const
      {
        return env->callIntMethod(this$, mids$[mid_getRank_570ce0828f81a2c1]);
      }

      ::org::hipparchus::linear::RealMatrix CorrelatedRandomVectorGenerator::getRootMatrix() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getRootMatrix_688b496048ff947b]));
      }

      JArray< jdouble > CorrelatedRandomVectorGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_60c7040667a7dc5c]));
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
      static PyObject *t_CorrelatedRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CorrelatedRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CorrelatedRandomVectorGenerator_init_(t_CorrelatedRandomVectorGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CorrelatedRandomVectorGenerator_getGenerator(t_CorrelatedRandomVectorGenerator *self);
      static PyObject *t_CorrelatedRandomVectorGenerator_getRank(t_CorrelatedRandomVectorGenerator *self);
      static PyObject *t_CorrelatedRandomVectorGenerator_getRootMatrix(t_CorrelatedRandomVectorGenerator *self);
      static PyObject *t_CorrelatedRandomVectorGenerator_nextVector(t_CorrelatedRandomVectorGenerator *self);
      static PyObject *t_CorrelatedRandomVectorGenerator_get__generator(t_CorrelatedRandomVectorGenerator *self, void *data);
      static PyObject *t_CorrelatedRandomVectorGenerator_get__rank(t_CorrelatedRandomVectorGenerator *self, void *data);
      static PyObject *t_CorrelatedRandomVectorGenerator_get__rootMatrix(t_CorrelatedRandomVectorGenerator *self, void *data);
      static PyGetSetDef t_CorrelatedRandomVectorGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_CorrelatedRandomVectorGenerator, generator),
        DECLARE_GET_FIELD(t_CorrelatedRandomVectorGenerator, rank),
        DECLARE_GET_FIELD(t_CorrelatedRandomVectorGenerator, rootMatrix),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CorrelatedRandomVectorGenerator__methods_[] = {
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, getGenerator, METH_NOARGS),
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, getRank, METH_NOARGS),
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, getRootMatrix, METH_NOARGS),
        DECLARE_METHOD(t_CorrelatedRandomVectorGenerator, nextVector, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CorrelatedRandomVectorGenerator)[] = {
        { Py_tp_methods, t_CorrelatedRandomVectorGenerator__methods_ },
        { Py_tp_init, (void *) t_CorrelatedRandomVectorGenerator_init_ },
        { Py_tp_getset, t_CorrelatedRandomVectorGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CorrelatedRandomVectorGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CorrelatedRandomVectorGenerator, t_CorrelatedRandomVectorGenerator, CorrelatedRandomVectorGenerator);

      void t_CorrelatedRandomVectorGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(CorrelatedRandomVectorGenerator), &PY_TYPE_DEF(CorrelatedRandomVectorGenerator), module, "CorrelatedRandomVectorGenerator", 0);
      }

      void t_CorrelatedRandomVectorGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CorrelatedRandomVectorGenerator), "class_", make_descriptor(CorrelatedRandomVectorGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CorrelatedRandomVectorGenerator), "wrapfn_", make_descriptor(t_CorrelatedRandomVectorGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CorrelatedRandomVectorGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CorrelatedRandomVectorGenerator::initializeClass, 1)))
          return NULL;
        return t_CorrelatedRandomVectorGenerator::wrap_Object(CorrelatedRandomVectorGenerator(((t_CorrelatedRandomVectorGenerator *) arg)->object.this$));
      }
      static PyObject *t_CorrelatedRandomVectorGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CorrelatedRandomVectorGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CorrelatedRandomVectorGenerator_init_(t_CorrelatedRandomVectorGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::random::NormalizedRandomGenerator a2((jobject) NULL);
            CorrelatedRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "kDk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::random::NormalizedRandomGenerator::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CorrelatedRandomVectorGenerator(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
            jdouble a2;
            ::org::hipparchus::random::NormalizedRandomGenerator a3((jobject) NULL);
            CorrelatedRandomVectorGenerator object((jobject) NULL);

            if (!parseArgs(args, "[DkDk", ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::random::NormalizedRandomGenerator::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = CorrelatedRandomVectorGenerator(a0, a1, a2, a3));
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

      static PyObject *t_CorrelatedRandomVectorGenerator_getGenerator(t_CorrelatedRandomVectorGenerator *self)
      {
        ::org::hipparchus::random::NormalizedRandomGenerator result((jobject) NULL);
        OBJ_CALL(result = self->object.getGenerator());
        return ::org::hipparchus::random::t_NormalizedRandomGenerator::wrap_Object(result);
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_getRank(t_CorrelatedRandomVectorGenerator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRank());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_getRootMatrix(t_CorrelatedRandomVectorGenerator *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getRootMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_nextVector(t_CorrelatedRandomVectorGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_get__generator(t_CorrelatedRandomVectorGenerator *self, void *data)
      {
        ::org::hipparchus::random::NormalizedRandomGenerator value((jobject) NULL);
        OBJ_CALL(value = self->object.getGenerator());
        return ::org::hipparchus::random::t_NormalizedRandomGenerator::wrap_Object(value);
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_get__rank(t_CorrelatedRandomVectorGenerator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRank());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_CorrelatedRandomVectorGenerator_get__rootMatrix(t_CorrelatedRandomVectorGenerator *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getRootMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "java/util/Map.h"
#include "org/orekit/files/general/AttitudeEphemerisFileParser.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/Acm.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmParser::class$ = NULL;
              jmethodID *AcmParser::mids$ = NULL;
              bool AcmParser::live$ = false;

              jclass AcmParser::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmParser");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_build_4d6b6e7f45764684] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/adm/acm/Acm;");
                  mids$[mid_finalizeData_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeData", "()Z");
                  mids$[mid_finalizeHeader_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeHeader", "()Z");
                  mids$[mid_finalizeMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                  mids$[mid_getHeader_58c0f76fc10a27f5] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;");
                  mids$[mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
                  mids$[mid_inData_b108b35ef48e27bd] = env->getMethodID(cls, "inData", "()Z");
                  mids$[mid_inHeader_b108b35ef48e27bd] = env->getMethodID(cls, "inHeader", "()Z");
                  mids$[mid_inMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "inMetadata", "()Z");
                  mids$[mid_parse_bcb26436586f3489] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ccsds/ndm/adm/acm/Acm;");
                  mids$[mid_prepareData_b108b35ef48e27bd] = env->getMethodID(cls, "prepareData", "()Z");
                  mids$[mid_prepareHeader_b108b35ef48e27bd] = env->getMethodID(cls, "prepareHeader", "()Z");
                  mids$[mid_prepareMetadata_b108b35ef48e27bd] = env->getMethodID(cls, "prepareMetadata", "()Z");
                  mids$[mid_reset_e250621f009e45db] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::Acm AcmParser::build() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::Acm(env->callObjectMethod(this$, mids$[mid_build_4d6b6e7f45764684]));
              }

              jboolean AcmParser::finalizeData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeData_b108b35ef48e27bd]);
              }

              jboolean AcmParser::finalizeHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeHeader_b108b35ef48e27bd]);
              }

              jboolean AcmParser::finalizeMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_finalizeMetadata_b108b35ef48e27bd]);
              }

              ::org::orekit::files::ccsds::ndm::adm::AdmHeader AcmParser::getHeader() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AdmHeader(env->callObjectMethod(this$, mids$[mid_getHeader_58c0f76fc10a27f5]));
              }

              ::java::util::Map AcmParser::getSpecialXmlElementsBuilders() const
              {
                return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_6f5a75ccd8c04465]));
              }

              jboolean AcmParser::inData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inData_b108b35ef48e27bd]);
              }

              jboolean AcmParser::inHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inHeader_b108b35ef48e27bd]);
              }

              jboolean AcmParser::inMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_inMetadata_b108b35ef48e27bd]);
              }

              ::org::orekit::files::ccsds::ndm::adm::acm::Acm AcmParser::parse(const ::org::orekit::data::DataSource & a0) const
              {
                return ::org::orekit::files::ccsds::ndm::adm::acm::Acm(env->callObjectMethod(this$, mids$[mid_parse_bcb26436586f3489], a0.this$));
              }

              jboolean AcmParser::prepareData() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareData_b108b35ef48e27bd]);
              }

              jboolean AcmParser::prepareHeader() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareHeader_b108b35ef48e27bd]);
              }

              jboolean AcmParser::prepareMetadata() const
              {
                return env->callBooleanMethod(this$, mids$[mid_prepareMetadata_b108b35ef48e27bd]);
              }

              void AcmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_reset_e250621f009e45db], a0.this$);
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
              static PyObject *t_AcmParser_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmParser_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmParser_of_(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_build(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_finalizeData(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_finalizeHeader(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_finalizeMetadata(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_getHeader(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_getSpecialXmlElementsBuilders(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_inData(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_inHeader(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_inMetadata(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_parse(t_AcmParser *self, PyObject *arg);
              static PyObject *t_AcmParser_prepareData(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_prepareHeader(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_prepareMetadata(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_reset(t_AcmParser *self, PyObject *args);
              static PyObject *t_AcmParser_get__header(t_AcmParser *self, void *data);
              static PyObject *t_AcmParser_get__specialXmlElementsBuilders(t_AcmParser *self, void *data);
              static PyObject *t_AcmParser_get__parameters_(t_AcmParser *self, void *data);
              static PyGetSetDef t_AcmParser__fields_[] = {
                DECLARE_GET_FIELD(t_AcmParser, header),
                DECLARE_GET_FIELD(t_AcmParser, specialXmlElementsBuilders),
                DECLARE_GET_FIELD(t_AcmParser, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmParser__methods_[] = {
                DECLARE_METHOD(t_AcmParser, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmParser, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmParser, of_, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, build, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, finalizeData, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, finalizeHeader, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, finalizeMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, getHeader, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, inData, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, inHeader, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, inMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, parse, METH_O),
                DECLARE_METHOD(t_AcmParser, prepareData, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, prepareHeader, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, prepareMetadata, METH_VARARGS),
                DECLARE_METHOD(t_AcmParser, reset, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmParser)[] = {
                { Py_tp_methods, t_AcmParser__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AcmParser__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmParser)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::adm::AdmParser),
                NULL
              };

              DEFINE_TYPE(AcmParser, t_AcmParser, AcmParser);
              PyObject *t_AcmParser::wrap_Object(const AcmParser& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AcmParser::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmParser *self = (t_AcmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_AcmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AcmParser::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmParser *self = (t_AcmParser *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_AcmParser::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmParser), &PY_TYPE_DEF(AcmParser), module, "AcmParser", 0);
              }

              void t_AcmParser::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmParser), "class_", make_descriptor(AcmParser::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmParser), "wrapfn_", make_descriptor(t_AcmParser::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmParser), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AcmParser_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmParser::initializeClass, 1)))
                  return NULL;
                return t_AcmParser::wrap_Object(AcmParser(((t_AcmParser *) arg)->object.this$));
              }
              static PyObject *t_AcmParser_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmParser::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmParser_of_(t_AcmParser *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AcmParser_build(t_AcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::acm::Acm result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.build());
                  return ::org::orekit::files::ccsds::ndm::adm::acm::t_Acm::wrap_Object(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "build", args, 2);
              }

              static PyObject *t_AcmParser_finalizeData(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "finalizeData", args, 2);
              }

              static PyObject *t_AcmParser_finalizeHeader(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "finalizeHeader", args, 2);
              }

              static PyObject *t_AcmParser_finalizeMetadata(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.finalizeMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "finalizeMetadata", args, 2);
              }

              static PyObject *t_AcmParser_getHeader(t_AcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getHeader());
                  return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "getHeader", args, 2);
              }

              static PyObject *t_AcmParser_getSpecialXmlElementsBuilders(t_AcmParser *self, PyObject *args)
              {
                ::java::util::Map result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
                  return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
              }

              static PyObject *t_AcmParser_inData(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "inData", args, 2);
              }

              static PyObject *t_AcmParser_inHeader(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "inHeader", args, 2);
              }

              static PyObject *t_AcmParser_inMetadata(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.inMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "inMetadata", args, 2);
              }

              static PyObject *t_AcmParser_parse(t_AcmParser *self, PyObject *arg)
              {
                ::org::orekit::data::DataSource a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::Acm result((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::ccsds::ndm::adm::acm::t_Acm::wrap_Object(result);
                }

                PyErr_SetArgsError((PyObject *) self, "parse", arg);
                return NULL;
              }

              static PyObject *t_AcmParser_prepareData(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareData());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "prepareData", args, 2);
              }

              static PyObject *t_AcmParser_prepareHeader(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareHeader());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "prepareHeader", args, 2);
              }

              static PyObject *t_AcmParser_prepareMetadata(t_AcmParser *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.prepareMetadata());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "prepareMetadata", args, 2);
              }

              static PyObject *t_AcmParser_reset(t_AcmParser *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
                PyTypeObject **p0;

                if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }

                return callSuper(PY_TYPE(AcmParser), (PyObject *) self, "reset", args, 2);
              }
              static PyObject *t_AcmParser_get__parameters_(t_AcmParser *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AcmParser_get__header(t_AcmParser *self, void *data)
              {
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader value((jobject) NULL);
                OBJ_CALL(value = self->object.getHeader());
                return ::org::orekit::files::ccsds::ndm::adm::t_AdmHeader::wrap_Object(value);
              }

              static PyObject *t_AcmParser_get__specialXmlElementsBuilders(t_AcmParser *self, void *data)
              {
                ::java::util::Map value((jobject) NULL);
                OBJ_CALL(value = self->object.getSpecialXmlElementsBuilders());
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
#include "org/hipparchus/distribution/discrete/BinomialDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *BinomialDistribution::class$ = NULL;
        jmethodID *BinomialDistribution::mids$ = NULL;
        bool BinomialDistribution::live$ = false;

        jclass BinomialDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/BinomialDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bb79ca80d85d0a66] = env->getMethodID(cls, "<init>", "(ID)V");
            mids$[mid_cumulativeProbability_46f85b53d9aedd96] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumberOfTrials_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfTrials", "()I");
            mids$[mid_getNumericalMean_dff5885c2c873297] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_dff5885c2c873297] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getProbabilityOfSuccess_dff5885c2c873297] = env->getMethodID(cls, "getProbabilityOfSuccess", "()D");
            mids$[mid_getSupportLowerBound_570ce0828f81a2c1] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_570ce0828f81a2c1] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_b108b35ef48e27bd] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_46f85b53d9aedd96] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_46f85b53d9aedd96] = env->getMethodID(cls, "probability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BinomialDistribution::BinomialDistribution(jint a0, jdouble a1) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_bb79ca80d85d0a66, a0, a1)) {}

        jdouble BinomialDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_46f85b53d9aedd96], a0);
        }

        jint BinomialDistribution::getNumberOfTrials() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfTrials_570ce0828f81a2c1]);
        }

        jdouble BinomialDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_dff5885c2c873297]);
        }

        jdouble BinomialDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_dff5885c2c873297]);
        }

        jdouble BinomialDistribution::getProbabilityOfSuccess() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getProbabilityOfSuccess_dff5885c2c873297]);
        }

        jint BinomialDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_570ce0828f81a2c1]);
        }

        jint BinomialDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_570ce0828f81a2c1]);
        }

        jboolean BinomialDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_b108b35ef48e27bd]);
        }

        jdouble BinomialDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_46f85b53d9aedd96], a0);
        }

        jdouble BinomialDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_46f85b53d9aedd96], a0);
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
      namespace discrete {
        static PyObject *t_BinomialDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BinomialDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BinomialDistribution_init_(t_BinomialDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_BinomialDistribution_cumulativeProbability(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_getNumberOfTrials(t_BinomialDistribution *self);
        static PyObject *t_BinomialDistribution_getNumericalMean(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_getNumericalVariance(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_getProbabilityOfSuccess(t_BinomialDistribution *self);
        static PyObject *t_BinomialDistribution_getSupportLowerBound(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_getSupportUpperBound(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_isSupportConnected(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_logProbability(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_probability(t_BinomialDistribution *self, PyObject *args);
        static PyObject *t_BinomialDistribution_get__numberOfTrials(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__numericalMean(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__numericalVariance(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__probabilityOfSuccess(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__supportConnected(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__supportLowerBound(t_BinomialDistribution *self, void *data);
        static PyObject *t_BinomialDistribution_get__supportUpperBound(t_BinomialDistribution *self, void *data);
        static PyGetSetDef t_BinomialDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_BinomialDistribution, numberOfTrials),
          DECLARE_GET_FIELD(t_BinomialDistribution, numericalMean),
          DECLARE_GET_FIELD(t_BinomialDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_BinomialDistribution, probabilityOfSuccess),
          DECLARE_GET_FIELD(t_BinomialDistribution, supportConnected),
          DECLARE_GET_FIELD(t_BinomialDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_BinomialDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BinomialDistribution__methods_[] = {
          DECLARE_METHOD(t_BinomialDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BinomialDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, getNumberOfTrials, METH_NOARGS),
          DECLARE_METHOD(t_BinomialDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, getProbabilityOfSuccess, METH_NOARGS),
          DECLARE_METHOD(t_BinomialDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_BinomialDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BinomialDistribution)[] = {
          { Py_tp_methods, t_BinomialDistribution__methods_ },
          { Py_tp_init, (void *) t_BinomialDistribution_init_ },
          { Py_tp_getset, t_BinomialDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BinomialDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(BinomialDistribution, t_BinomialDistribution, BinomialDistribution);

        void t_BinomialDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(BinomialDistribution), &PY_TYPE_DEF(BinomialDistribution), module, "BinomialDistribution", 0);
        }

        void t_BinomialDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialDistribution), "class_", make_descriptor(BinomialDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialDistribution), "wrapfn_", make_descriptor(t_BinomialDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BinomialDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BinomialDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BinomialDistribution::initializeClass, 1)))
            return NULL;
          return t_BinomialDistribution::wrap_Object(BinomialDistribution(((t_BinomialDistribution *) arg)->object.this$));
        }
        static PyObject *t_BinomialDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BinomialDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BinomialDistribution_init_(t_BinomialDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          BinomialDistribution object((jobject) NULL);

          if (!parseArgs(args, "ID", &a0, &a1))
          {
            INT_CALL(object = BinomialDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_BinomialDistribution_cumulativeProbability(t_BinomialDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_BinomialDistribution_getNumberOfTrials(t_BinomialDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfTrials());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BinomialDistribution_getNumericalMean(t_BinomialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_BinomialDistribution_getNumericalVariance(t_BinomialDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_BinomialDistribution_getProbabilityOfSuccess(t_BinomialDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BinomialDistribution_getSupportLowerBound(t_BinomialDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_BinomialDistribution_getSupportUpperBound(t_BinomialDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_BinomialDistribution_isSupportConnected(t_BinomialDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_BinomialDistribution_logProbability(t_BinomialDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_BinomialDistribution_probability(t_BinomialDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(BinomialDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_BinomialDistribution_get__numberOfTrials(t_BinomialDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfTrials());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BinomialDistribution_get__numericalMean(t_BinomialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BinomialDistribution_get__numericalVariance(t_BinomialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BinomialDistribution_get__probabilityOfSuccess(t_BinomialDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getProbabilityOfSuccess());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BinomialDistribution_get__supportConnected(t_BinomialDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_BinomialDistribution_get__supportLowerBound(t_BinomialDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BinomialDistribution_get__supportUpperBound(t_BinomialDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/PythonInterpolationGrid.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/InterpolationGrid.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *PythonInterpolationGrid::class$ = NULL;
            jmethodID *PythonInterpolationGrid::mids$ = NULL;
            bool PythonInterpolationGrid::live$ = false;

            jclass PythonInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/PythonInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_getGridPoints_432c7f020b618085] = env->getMethodID(cls, "getGridPoints", "(DD)[D");
                mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonInterpolationGrid::PythonInterpolationGrid() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            void PythonInterpolationGrid::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
            }

            jlong PythonInterpolationGrid::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
            }

            void PythonInterpolationGrid::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
            static PyObject *t_PythonInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonInterpolationGrid_init_(t_PythonInterpolationGrid *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonInterpolationGrid_finalize(t_PythonInterpolationGrid *self);
            static PyObject *t_PythonInterpolationGrid_pythonExtension(t_PythonInterpolationGrid *self, PyObject *args);
            static jobject JNICALL t_PythonInterpolationGrid_getGridPoints0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1);
            static void JNICALL t_PythonInterpolationGrid_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonInterpolationGrid_get__self(t_PythonInterpolationGrid *self, void *data);
            static PyGetSetDef t_PythonInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_PythonInterpolationGrid, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_PythonInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonInterpolationGrid, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonInterpolationGrid, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonInterpolationGrid)[] = {
              { Py_tp_methods, t_PythonInterpolationGrid__methods_ },
              { Py_tp_init, (void *) t_PythonInterpolationGrid_init_ },
              { Py_tp_getset, t_PythonInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonInterpolationGrid, t_PythonInterpolationGrid, PythonInterpolationGrid);

            void t_PythonInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonInterpolationGrid), &PY_TYPE_DEF(PythonInterpolationGrid), module, "PythonInterpolationGrid", 1);
            }

            void t_PythonInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonInterpolationGrid), "class_", make_descriptor(PythonInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonInterpolationGrid), "wrapfn_", make_descriptor(t_PythonInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonInterpolationGrid), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonInterpolationGrid::initializeClass);
              JNINativeMethod methods[] = {
                { "getGridPoints", "(DD)[D", (void *) t_PythonInterpolationGrid_getGridPoints0 },
                { "pythonDecRef", "()V", (void *) t_PythonInterpolationGrid_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_PythonInterpolationGrid::wrap_Object(PythonInterpolationGrid(((t_PythonInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_PythonInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonInterpolationGrid_init_(t_PythonInterpolationGrid *self, PyObject *args, PyObject *kwds)
            {
              PythonInterpolationGrid object((jobject) NULL);

              INT_CALL(object = PythonInterpolationGrid());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonInterpolationGrid_finalize(t_PythonInterpolationGrid *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonInterpolationGrid_pythonExtension(t_PythonInterpolationGrid *self, PyObject *args)
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

            static jobject JNICALL t_PythonInterpolationGrid_getGridPoints0(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonInterpolationGrid::mids$[PythonInterpolationGrid::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              JArray< jdouble > value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getGridPoints", "dd", (double) a0, (double) a1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "[D", &value))
              {
                throwTypeError("getGridPoints", result);
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

            static void JNICALL t_PythonInterpolationGrid_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonInterpolationGrid::mids$[PythonInterpolationGrid::mid_pythonExtension_492808a339bfa35f]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonInterpolationGrid::mids$[PythonInterpolationGrid::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonInterpolationGrid_get__self(t_PythonInterpolationGrid *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/PythonUnivariateFunction.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *PythonUnivariateFunction::class$ = NULL;
      jmethodID *PythonUnivariateFunction::mids$ = NULL;
      bool PythonUnivariateFunction::live$ = false;

      jclass PythonUnivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/PythonUnivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonUnivariateFunction::PythonUnivariateFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonUnivariateFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonUnivariateFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonUnivariateFunction::pythonExtension(jlong a0) const
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
  namespace hipparchus {
    namespace analysis {
      static PyObject *t_PythonUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonUnivariateFunction_init_(t_PythonUnivariateFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonUnivariateFunction_finalize(t_PythonUnivariateFunction *self);
      static PyObject *t_PythonUnivariateFunction_pythonExtension(t_PythonUnivariateFunction *self, PyObject *args);
      static void JNICALL t_PythonUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0);
      static PyObject *t_PythonUnivariateFunction_get__self(t_PythonUnivariateFunction *self, void *data);
      static PyGetSetDef t_PythonUnivariateFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonUnivariateFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonUnivariateFunction__methods_[] = {
        DECLARE_METHOD(t_PythonUnivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUnivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonUnivariateFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonUnivariateFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonUnivariateFunction)[] = {
        { Py_tp_methods, t_PythonUnivariateFunction__methods_ },
        { Py_tp_init, (void *) t_PythonUnivariateFunction_init_ },
        { Py_tp_getset, t_PythonUnivariateFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonUnivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonUnivariateFunction, t_PythonUnivariateFunction, PythonUnivariateFunction);

      void t_PythonUnivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonUnivariateFunction), &PY_TYPE_DEF(PythonUnivariateFunction), module, "PythonUnivariateFunction", 1);
      }

      void t_PythonUnivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "class_", make_descriptor(PythonUnivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "wrapfn_", make_descriptor(t_PythonUnivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonUnivariateFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonUnivariateFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonUnivariateFunction_pythonDecRef0 },
          { "value", "(D)D", (void *) t_PythonUnivariateFunction_value1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonUnivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonUnivariateFunction::initializeClass, 1)))
          return NULL;
        return t_PythonUnivariateFunction::wrap_Object(PythonUnivariateFunction(((t_PythonUnivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonUnivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonUnivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonUnivariateFunction_init_(t_PythonUnivariateFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonUnivariateFunction object((jobject) NULL);

        INT_CALL(object = PythonUnivariateFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonUnivariateFunction_finalize(t_PythonUnivariateFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonUnivariateFunction_pythonExtension(t_PythonUnivariateFunction *self, PyObject *args)
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

      static void JNICALL t_PythonUnivariateFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jdouble JNICALL t_PythonUnivariateFunction_value1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonUnivariateFunction::mids$[PythonUnivariateFunction::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "value", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("value", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static PyObject *t_PythonUnivariateFunction_get__self(t_PythonUnivariateFunction *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/apm/Apm.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "java/util/List.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/files/ccsds/ndm/adm/apm/ApmData.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/Segment.h"
#include "java/lang/String.h"
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
                  mids$[mid_init$_61c8f32249f88749] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Ljava/util/List;Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;)V");
                  mids$[mid_getAttitude_d44cfca563ece87b] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;)Lorg/orekit/attitudes/Attitude;");
                  mids$[mid_getData_eb93dea23401621c] = env->getMethodID(cls, "getData", "()Lorg/orekit/files/ccsds/ndm/adm/apm/ApmData;");
                  mids$[mid_getMetadata_6c023c2093b21be8] = env->getMethodID(cls, "getMetadata", "()Lorg/orekit/files/ccsds/ndm/adm/AdmMetadata;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  FORMAT_VERSION_KEY = new ::java::lang::String(env->getStaticObjectField(cls, "FORMAT_VERSION_KEY", "Ljava/lang/String;"));
                  ROOT = new ::java::lang::String(env->getStaticObjectField(cls, "ROOT", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Apm::Apm(const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a0, const ::java::util::List & a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::data::DataContext & a3) : ::org::orekit::files::ccsds::ndm::NdmConstituent(env->newObject(initializeClass, &mids$, mid_init$_61c8f32249f88749, a0.this$, a1.this$, a2.this$, a3.this$)) {}

              ::org::orekit::attitudes::Attitude Apm::getAttitude(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1) const
              {
                return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_d44cfca563ece87b], a0.this$, a1.this$));
              }

              ::org::orekit::files::ccsds::ndm::adm::apm::ApmData Apm::getData() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::apm::ApmData(env->callObjectMethod(this$, mids$[mid_getData_eb93dea23401621c]));
              }

              ::org::orekit::files::ccsds::ndm::adm::AdmMetadata Apm::getMetadata() const
              {
                return ::org::orekit::files::ccsds::ndm::adm::AdmMetadata(env->callObjectMethod(this$, mids$[mid_getMetadata_6c023c2093b21be8]));
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
#include "org/hipparchus/analysis/differentiation/FieldGradientField.h"
#include "org/hipparchus/analysis/differentiation/FieldGradient.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldGradientField.h"
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
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getField_6babc4e7c033c788] = env->getStaticMethodID(cls, "getField", "(Lorg/hipparchus/Field;I)Lorg/hipparchus/analysis/differentiation/FieldGradientField;");
            mids$[mid_getOne_fd13058f823056bf] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_getRuntimeClass_7c16c5008b34b3db] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_fd13058f823056bf] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/FieldGradient;");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FieldGradientField::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        FieldGradientField FieldGradientField::getField(const ::org::hipparchus::Field & a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldGradientField(env->callStaticObjectMethod(cls, mids$[mid_getField_6babc4e7c033c788], a0.this$, a1));
        }

        ::org::hipparchus::analysis::differentiation::FieldGradient FieldGradientField::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldGradient(env->callObjectMethod(this$, mids$[mid_getOne_fd13058f823056bf]));
        }

        ::java::lang::Class FieldGradientField::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_7c16c5008b34b3db]));
        }

        ::org::hipparchus::analysis::differentiation::FieldGradient FieldGradientField::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldGradient(env->callObjectMethod(this$, mids$[mid_getZero_fd13058f823056bf]));
        }

        jint FieldGradientField::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
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
#include "org/hipparchus/random/Well44497b.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *Well44497b::class$ = NULL;
      jmethodID *Well44497b::mids$ = NULL;
      bool Well44497b::live$ = false;

      jclass Well44497b::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/Well44497b");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_d147d7ce001e2d45] = env->getMethodID(cls, "<init>", "([I)V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_3a8e7649f31fdb20] = env->getMethodID(cls, "<init>", "(J)V");
          mids$[mid_nextInt_570ce0828f81a2c1] = env->getMethodID(cls, "nextInt", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Well44497b::Well44497b() : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      Well44497b::Well44497b(const JArray< jint > & a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_d147d7ce001e2d45, a0.this$)) {}

      Well44497b::Well44497b(jint a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      Well44497b::Well44497b(jlong a0) : ::org::hipparchus::random::AbstractWell(env->newObject(initializeClass, &mids$, mid_init$_3a8e7649f31fdb20, a0)) {}

      jint Well44497b::nextInt() const
      {
        return env->callIntMethod(this$, mids$[mid_nextInt_570ce0828f81a2c1]);
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
      static PyObject *t_Well44497b_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Well44497b_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Well44497b_init_(t_Well44497b *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Well44497b_nextInt(t_Well44497b *self, PyObject *args);

      static PyMethodDef t_Well44497b__methods_[] = {
        DECLARE_METHOD(t_Well44497b, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well44497b, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Well44497b, nextInt, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Well44497b)[] = {
        { Py_tp_methods, t_Well44497b__methods_ },
        { Py_tp_init, (void *) t_Well44497b_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Well44497b)[] = {
        &PY_TYPE_DEF(::org::hipparchus::random::AbstractWell),
        NULL
      };

      DEFINE_TYPE(Well44497b, t_Well44497b, Well44497b);

      void t_Well44497b::install(PyObject *module)
      {
        installType(&PY_TYPE(Well44497b), &PY_TYPE_DEF(Well44497b), module, "Well44497b", 0);
      }

      void t_Well44497b::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497b), "class_", make_descriptor(Well44497b::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497b), "wrapfn_", make_descriptor(t_Well44497b::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Well44497b), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Well44497b_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Well44497b::initializeClass, 1)))
          return NULL;
        return t_Well44497b::wrap_Object(Well44497b(((t_Well44497b *) arg)->object.this$));
      }
      static PyObject *t_Well44497b_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Well44497b::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Well44497b_init_(t_Well44497b *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Well44497b object((jobject) NULL);

            INT_CALL(object = Well44497b());
            self->object = object;
            break;
          }
         case 1:
          {
            JArray< jint > a0((jobject) NULL);
            Well44497b object((jobject) NULL);

            if (!parseArgs(args, "[I", &a0))
            {
              INT_CALL(object = Well44497b(a0));
              self->object = object;
              break;
            }
          }
          {
            jint a0;
            Well44497b object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Well44497b(a0));
              self->object = object;
              break;
            }
          }
          {
            jlong a0;
            Well44497b object((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              INT_CALL(object = Well44497b(a0));
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

      static PyObject *t_Well44497b_nextInt(t_Well44497b *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.nextInt());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Well44497b), (PyObject *) self, "nextInt", args, 2);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonShortTermEncounter2DPOCMethod.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "java/lang/String.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *PythonShortTermEncounter2DPOCMethod::class$ = NULL;
              jmethodID *PythonShortTermEncounter2DPOCMethod::mids$ = NULL;
              bool PythonShortTermEncounter2DPOCMethod::live$ = false;

              jclass PythonShortTermEncounter2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/PythonShortTermEncounter2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_compute_7ed362902ba10174] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_4d249761aa92e117] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_091f0943f3979390] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_44d723598fb6a077] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_184c2f4ec5889c74] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_0ed38e7bbee7fafc] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_77dbe9f2fcda2496] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_1c26d4a5b9c10569] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
                  mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
                  mids$[mid_getType_5d7ecb27bb5e3bc3] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_b108b35ef48e27bd] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");
                  mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
                  mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
                  mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              PythonShortTermEncounter2DPOCMethod::PythonShortTermEncounter2DPOCMethod() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              void PythonShortTermEncounter2DPOCMethod::finalize() const
              {
                env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
              }

              jlong PythonShortTermEncounter2DPOCMethod::pythonExtension() const
              {
                return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
              }

              void PythonShortTermEncounter2DPOCMethod::pythonExtension(jlong a0) const
              {
                env->callVoidMethod(this$, mids$[mid_pythonExtension_3a8e7649f31fdb20], a0);
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
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static int t_PythonShortTermEncounter2DPOCMethod_init_(t_PythonShortTermEncounter2DPOCMethod *self, PyObject *args, PyObject *kwds);
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_finalize(t_PythonShortTermEncounter2DPOCMethod *self);
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_pythonExtension(t_PythonShortTermEncounter2DPOCMethod *self, PyObject *args);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute4(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jdouble a5);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jdouble a4, jdouble a5);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_getName8(JNIEnv *jenv, jobject jobj);
              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_getType9(JNIEnv *jenv, jobject jobj);
              static jboolean JNICALL t_PythonShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod10(JNIEnv *jenv, jobject jobj);
              static void JNICALL t_PythonShortTermEncounter2DPOCMethod_pythonDecRef11(JNIEnv *jenv, jobject jobj);
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_get__self(t_PythonShortTermEncounter2DPOCMethod *self, void *data);
              static PyGetSetDef t_PythonShortTermEncounter2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_PythonShortTermEncounter2DPOCMethod, self),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_PythonShortTermEncounter2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_PythonShortTermEncounter2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonShortTermEncounter2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_PythonShortTermEncounter2DPOCMethod, finalize, METH_NOARGS),
                DECLARE_METHOD(t_PythonShortTermEncounter2DPOCMethod, pythonExtension, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(PythonShortTermEncounter2DPOCMethod)[] = {
                { Py_tp_methods, t_PythonShortTermEncounter2DPOCMethod__methods_ },
                { Py_tp_init, (void *) t_PythonShortTermEncounter2DPOCMethod_init_ },
                { Py_tp_getset, t_PythonShortTermEncounter2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(PythonShortTermEncounter2DPOCMethod)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(PythonShortTermEncounter2DPOCMethod, t_PythonShortTermEncounter2DPOCMethod, PythonShortTermEncounter2DPOCMethod);

              void t_PythonShortTermEncounter2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(PythonShortTermEncounter2DPOCMethod), &PY_TYPE_DEF(PythonShortTermEncounter2DPOCMethod), module, "PythonShortTermEncounter2DPOCMethod", 1);
              }

              void t_PythonShortTermEncounter2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortTermEncounter2DPOCMethod), "class_", make_descriptor(PythonShortTermEncounter2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortTermEncounter2DPOCMethod), "wrapfn_", make_descriptor(t_PythonShortTermEncounter2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(PythonShortTermEncounter2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                jclass cls = env->getClass(PythonShortTermEncounter2DPOCMethod::initializeClass);
                JNINativeMethod methods[] = {
                  { "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute0 },
                  { "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute1 },
                  { "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute2 },
                  { "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute3 },
                  { "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute4 },
                  { "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute5 },
                  { "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute6 },
                  { "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;", (void *) t_PythonShortTermEncounter2DPOCMethod_compute7 },
                  { "getName", "()Ljava/lang/String;", (void *) t_PythonShortTermEncounter2DPOCMethod_getName8 },
                  { "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;", (void *) t_PythonShortTermEncounter2DPOCMethod_getType9 },
                  { "isAMaximumProbabilityOfCollisionMethod", "()Z", (void *) t_PythonShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod10 },
                  { "pythonDecRef", "()V", (void *) t_PythonShortTermEncounter2DPOCMethod_pythonDecRef11 },
                };
                env->registerNatives(cls, methods, 12);
              }

              static PyObject *t_PythonShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, PythonShortTermEncounter2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_PythonShortTermEncounter2DPOCMethod::wrap_Object(PythonShortTermEncounter2DPOCMethod(((t_PythonShortTermEncounter2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_PythonShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, PythonShortTermEncounter2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_PythonShortTermEncounter2DPOCMethod_init_(t_PythonShortTermEncounter2DPOCMethod *self, PyObject *args, PyObject *kwds)
              {
                PythonShortTermEncounter2DPOCMethod object((jobject) NULL);

                INT_CALL(object = PythonShortTermEncounter2DPOCMethod());
                self->object = object;

                Py_INCREF((PyObject *) self);
                self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

                return 0;
              }

              static PyObject *t_PythonShortTermEncounter2DPOCMethod_finalize(t_PythonShortTermEncounter2DPOCMethod *self)
              {
                OBJ_CALL(self->object.finalize());
                Py_RETURN_NONE;
              }

              static PyObject *t_PythonShortTermEncounter2DPOCMethod_pythonExtension(t_PythonShortTermEncounter2DPOCMethod *self, PyObject *args)
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::wrap_Object(::org::orekit::files::ccsds::ndm::cdm::Cdm(a0));
                PyObject *result = PyObject_CallMethod(obj, "compute", "Od", o0, (double) a1);
                Py_DECREF(o0);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute1(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::wrap_Object(::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition(a0));
                PyObject *result = PyObject_CallMethod(obj, "compute", "Od", o0, (double) a1);
                Py_DECREF(o0);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DDefinition::wrap_Object(::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition(a0));
                PyObject *result = PyObject_CallMethod(obj, "compute", "Od", o0, (double) a1);
                Py_DECREF(o0);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute3(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::wrap_Object(::org::orekit::files::ccsds::ndm::cdm::Cdm(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOd", o0, o1, (double) a2);
                Py_DECREF(o0);
                Py_DECREF(o1);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute4(JNIEnv *jenv, jobject jobj, jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "compute", "ddddd", (double) a0, (double) a1, (double) a2, (double) a3, (double) a4);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute5(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
                PyObject *o1 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a1));
                PyObject *o2 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a2));
                PyObject *o3 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a3));
                PyObject *o4 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a4));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOO", o0, o1, o2, o3, o4);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                Py_DECREF(o4);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jobject a4, jdouble a5)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::FieldProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::orbits::t_FieldOrbit::wrap_Object(::org::orekit::orbits::FieldOrbit(a0));
                PyObject *o1 = ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(::org::orekit::propagation::FieldStateCovariance(a1));
                PyObject *o2 = ::org::orekit::orbits::t_FieldOrbit::wrap_Object(::org::orekit::orbits::FieldOrbit(a2));
                PyObject *o3 = ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(::org::orekit::propagation::FieldStateCovariance(a3));
                PyObject *o4 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a4));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOOd", o0, o1, o2, o3, o4, (double) a5);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                Py_DECREF(o4);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::FieldProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_compute7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3, jdouble a4, jdouble a5)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::metrics::ProbabilityOfCollision value((jobject) NULL);
                PyObject *o0 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a0));
                PyObject *o1 = ::org::orekit::propagation::t_StateCovariance::wrap_Object(::org::orekit::propagation::StateCovariance(a1));
                PyObject *o2 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a2));
                PyObject *o3 = ::org::orekit::propagation::t_StateCovariance::wrap_Object(::org::orekit::propagation::StateCovariance(a3));
                PyObject *result = PyObject_CallMethod(obj, "compute", "OOOOdd", o0, o1, o2, o3, (double) a4, (double) a5);
                Py_DECREF(o0);
                Py_DECREF(o1);
                Py_DECREF(o2);
                Py_DECREF(o3);
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::metrics::ProbabilityOfCollision::initializeClass, &value))
                {
                  throwTypeError("compute", result);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_getName8(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_492808a339bfa35f]);
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

              static jobject JNICALL t_PythonShortTermEncounter2DPOCMethod_getType9(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                PyObject *result = PyObject_CallMethod(obj, "getType", "");
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "k", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType::initializeClass, &value))
                {
                  throwTypeError("getType", result);
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

              static jboolean JNICALL t_PythonShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod10(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
                PythonGIL gil(jenv);
                jboolean value;
                PyObject *result = PyObject_CallMethod(obj, "isAMaximumProbabilityOfCollisionMethod", "");
                if (!result)
                  throwPythonError();
                else if (parseArg(result, "Z", &value))
                {
                  throwTypeError("isAMaximumProbabilityOfCollisionMethod", result);
                  Py_DECREF(result);
                }
                else
                {
                  Py_DECREF(result);
                  return value;
                }

                return (jboolean) 0;
              }

              static void JNICALL t_PythonShortTermEncounter2DPOCMethod_pythonDecRef11(JNIEnv *jenv, jobject jobj)
              {
                jlong ptr = jenv->CallLongMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_492808a339bfa35f]);
                PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

                if (obj != NULL)
                {
                  jenv->CallVoidMethod(jobj, PythonShortTermEncounter2DPOCMethod::mids$[PythonShortTermEncounter2DPOCMethod::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
                  env->finalizeObject(jenv, obj);
                }
              }

              static PyObject *t_PythonShortTermEncounter2DPOCMethod_get__self(t_PythonShortTermEncounter2DPOCMethod *self, void *data)
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
}
