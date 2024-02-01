#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/JacobiElliptic.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarD.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarC.h"
#include "java/lang/Class.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarN.h"
#include "org/hipparchus/special/elliptic/jacobi/CopolarS.h"
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
              mids$[mid_arccd_bf28ed64d6e8576b] = env->getMethodID(cls, "arccd", "(D)D");
              mids$[mid_arccn_bf28ed64d6e8576b] = env->getMethodID(cls, "arccn", "(D)D");
              mids$[mid_arccs_bf28ed64d6e8576b] = env->getMethodID(cls, "arccs", "(D)D");
              mids$[mid_arcdc_bf28ed64d6e8576b] = env->getMethodID(cls, "arcdc", "(D)D");
              mids$[mid_arcdn_bf28ed64d6e8576b] = env->getMethodID(cls, "arcdn", "(D)D");
              mids$[mid_arcds_bf28ed64d6e8576b] = env->getMethodID(cls, "arcds", "(D)D");
              mids$[mid_arcnc_bf28ed64d6e8576b] = env->getMethodID(cls, "arcnc", "(D)D");
              mids$[mid_arcnd_bf28ed64d6e8576b] = env->getMethodID(cls, "arcnd", "(D)D");
              mids$[mid_arcns_bf28ed64d6e8576b] = env->getMethodID(cls, "arcns", "(D)D");
              mids$[mid_arcsc_bf28ed64d6e8576b] = env->getMethodID(cls, "arcsc", "(D)D");
              mids$[mid_arcsd_bf28ed64d6e8576b] = env->getMethodID(cls, "arcsd", "(D)D");
              mids$[mid_arcsn_bf28ed64d6e8576b] = env->getMethodID(cls, "arcsn", "(D)D");
              mids$[mid_getM_9981f74b2d109da6] = env->getMethodID(cls, "getM", "()D");
              mids$[mid_valuesC_04a71476e23a9ed4] = env->getMethodID(cls, "valuesC", "(D)Lorg/hipparchus/special/elliptic/jacobi/CopolarC;");
              mids$[mid_valuesD_c92a1fed04a91eb5] = env->getMethodID(cls, "valuesD", "(D)Lorg/hipparchus/special/elliptic/jacobi/CopolarD;");
              mids$[mid_valuesN_58ac1b21fa8d5fcc] = env->getMethodID(cls, "valuesN", "(D)Lorg/hipparchus/special/elliptic/jacobi/CopolarN;");
              mids$[mid_valuesS_7818b0c4a030c1fd] = env->getMethodID(cls, "valuesS", "(D)Lorg/hipparchus/special/elliptic/jacobi/CopolarS;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble JacobiElliptic::arccd(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arccd_bf28ed64d6e8576b], a0);
          }

          jdouble JacobiElliptic::arccn(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arccn_bf28ed64d6e8576b], a0);
          }

          jdouble JacobiElliptic::arccs(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arccs_bf28ed64d6e8576b], a0);
          }

          jdouble JacobiElliptic::arcdc(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcdc_bf28ed64d6e8576b], a0);
          }

          jdouble JacobiElliptic::arcdn(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcdn_bf28ed64d6e8576b], a0);
          }

          jdouble JacobiElliptic::arcds(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcds_bf28ed64d6e8576b], a0);
          }

          jdouble JacobiElliptic::arcnc(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcnc_bf28ed64d6e8576b], a0);
          }

          jdouble JacobiElliptic::arcnd(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcnd_bf28ed64d6e8576b], a0);
          }

          jdouble JacobiElliptic::arcns(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcns_bf28ed64d6e8576b], a0);
          }

          jdouble JacobiElliptic::arcsc(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcsc_bf28ed64d6e8576b], a0);
          }

          jdouble JacobiElliptic::arcsd(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcsd_bf28ed64d6e8576b], a0);
          }

          jdouble JacobiElliptic::arcsn(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_arcsn_bf28ed64d6e8576b], a0);
          }

          jdouble JacobiElliptic::getM() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getM_9981f74b2d109da6]);
          }

          ::org::hipparchus::special::elliptic::jacobi::CopolarC JacobiElliptic::valuesC(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::CopolarC(env->callObjectMethod(this$, mids$[mid_valuesC_04a71476e23a9ed4], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::CopolarD JacobiElliptic::valuesD(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::CopolarD(env->callObjectMethod(this$, mids$[mid_valuesD_c92a1fed04a91eb5], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::CopolarN JacobiElliptic::valuesN(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::CopolarN(env->callObjectMethod(this$, mids$[mid_valuesN_58ac1b21fa8d5fcc], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::CopolarS JacobiElliptic::valuesS(jdouble a0) const
          {
            return ::org::hipparchus::special::elliptic::jacobi::CopolarS(env->callObjectMethod(this$, mids$[mid_valuesS_7818b0c4a030c1fd], a0));
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
#include "org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolator.h"
#include "org/hipparchus/analysis/interpolation/BivariateGridInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolatingFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *PiecewiseBicubicSplineInterpolator::class$ = NULL;
        jmethodID *PiecewiseBicubicSplineInterpolator::mids$ = NULL;
        bool PiecewiseBicubicSplineInterpolator::live$ = false;

        jclass PiecewiseBicubicSplineInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_interpolate_777e7c93313c9e9a] = env->getMethodID(cls, "interpolate", "([D[D[[D)Lorg/hipparchus/analysis/interpolation/PiecewiseBicubicSplineInterpolatingFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PiecewiseBicubicSplineInterpolator::PiecewiseBicubicSplineInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        ::org::hipparchus::analysis::interpolation::PiecewiseBicubicSplineInterpolatingFunction PiecewiseBicubicSplineInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::hipparchus::analysis::interpolation::PiecewiseBicubicSplineInterpolatingFunction(env->callObjectMethod(this$, mids$[mid_interpolate_777e7c93313c9e9a], a0.this$, a1.this$, a2.this$));
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
        static PyObject *t_PiecewiseBicubicSplineInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PiecewiseBicubicSplineInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PiecewiseBicubicSplineInterpolator_init_(t_PiecewiseBicubicSplineInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PiecewiseBicubicSplineInterpolator_interpolate(t_PiecewiseBicubicSplineInterpolator *self, PyObject *args);

        static PyMethodDef t_PiecewiseBicubicSplineInterpolator__methods_[] = {
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PiecewiseBicubicSplineInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PiecewiseBicubicSplineInterpolator)[] = {
          { Py_tp_methods, t_PiecewiseBicubicSplineInterpolator__methods_ },
          { Py_tp_init, (void *) t_PiecewiseBicubicSplineInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PiecewiseBicubicSplineInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PiecewiseBicubicSplineInterpolator, t_PiecewiseBicubicSplineInterpolator, PiecewiseBicubicSplineInterpolator);

        void t_PiecewiseBicubicSplineInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(PiecewiseBicubicSplineInterpolator), &PY_TYPE_DEF(PiecewiseBicubicSplineInterpolator), module, "PiecewiseBicubicSplineInterpolator", 0);
        }

        void t_PiecewiseBicubicSplineInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolator), "class_", make_descriptor(PiecewiseBicubicSplineInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolator), "wrapfn_", make_descriptor(t_PiecewiseBicubicSplineInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PiecewiseBicubicSplineInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PiecewiseBicubicSplineInterpolator::initializeClass, 1)))
            return NULL;
          return t_PiecewiseBicubicSplineInterpolator::wrap_Object(PiecewiseBicubicSplineInterpolator(((t_PiecewiseBicubicSplineInterpolator *) arg)->object.this$));
        }
        static PyObject *t_PiecewiseBicubicSplineInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PiecewiseBicubicSplineInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PiecewiseBicubicSplineInterpolator_init_(t_PiecewiseBicubicSplineInterpolator *self, PyObject *args, PyObject *kwds)
        {
          PiecewiseBicubicSplineInterpolator object((jobject) NULL);

          INT_CALL(object = PiecewiseBicubicSplineInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_PiecewiseBicubicSplineInterpolator_interpolate(t_PiecewiseBicubicSplineInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          ::org::hipparchus::analysis::interpolation::PiecewiseBicubicSplineInterpolatingFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D[[D", &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1, a2));
            return ::org::hipparchus::analysis::interpolation::t_PiecewiseBicubicSplineInterpolatingFunction::wrap_Object(result);
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
#include "org/orekit/estimation/measurements/modifiers/BistaticRangeIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/BistaticRange.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BistaticRangeIonosphericDelayModifier::class$ = NULL;
          jmethodID *BistaticRangeIonosphericDelayModifier::mids$ = NULL;
          bool BistaticRangeIonosphericDelayModifier::live$ = false;

          jclass BistaticRangeIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BistaticRangeIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b73781b754e339ce] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_modify_0f0ae9411e47b72e] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          BistaticRangeIonosphericDelayModifier::BistaticRangeIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier(env->newObject(initializeClass, &mids$, mid_init$_b73781b754e339ce, a0.this$, a1)) {}

          void BistaticRangeIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_0f0ae9411e47b72e], a0.this$);
          }

          void BistaticRangeIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_BistaticRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BistaticRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_BistaticRangeIonosphericDelayModifier_init_(t_BistaticRangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_BistaticRangeIonosphericDelayModifier_modify(t_BistaticRangeIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_BistaticRangeIonosphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeIonosphericDelayModifier *self, PyObject *arg);

          static PyMethodDef t_BistaticRangeIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BistaticRangeIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BistaticRangeIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_BistaticRangeIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BistaticRangeIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_BistaticRangeIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_BistaticRangeIonosphericDelayModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BistaticRangeIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::BaseRangeIonosphericDelayModifier),
            NULL
          };

          DEFINE_TYPE(BistaticRangeIonosphericDelayModifier, t_BistaticRangeIonosphericDelayModifier, BistaticRangeIonosphericDelayModifier);

          void t_BistaticRangeIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BistaticRangeIonosphericDelayModifier), &PY_TYPE_DEF(BistaticRangeIonosphericDelayModifier), module, "BistaticRangeIonosphericDelayModifier", 0);
          }

          void t_BistaticRangeIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeIonosphericDelayModifier), "class_", make_descriptor(BistaticRangeIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeIonosphericDelayModifier), "wrapfn_", make_descriptor(t_BistaticRangeIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BistaticRangeIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BistaticRangeIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BistaticRangeIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BistaticRangeIonosphericDelayModifier::wrap_Object(BistaticRangeIonosphericDelayModifier(((t_BistaticRangeIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BistaticRangeIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BistaticRangeIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_BistaticRangeIonosphericDelayModifier_init_(t_BistaticRangeIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            BistaticRangeIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = BistaticRangeIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_BistaticRangeIonosphericDelayModifier_modify(t_BistaticRangeIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_BistaticRangeIonosphericDelayModifier_modifyWithoutDerivatives(t_BistaticRangeIonosphericDelayModifier *self, PyObject *arg)
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
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/integration/PythonAbstractGradientConverter.h"
#include "org/hipparchus/analysis/differentiation/Gradient.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace integration {

        ::java::lang::Class *PythonAbstractGradientConverter::class$ = NULL;
        jmethodID *PythonAbstractGradientConverter::mids$ = NULL;
        bool PythonAbstractGradientConverter::live$ = false;

        jclass PythonAbstractGradientConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/integration/PythonAbstractGradientConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
            mids$[mid_extend_4e682d3d3cf0cde9] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/analysis/differentiation/Gradient;I)Lorg/hipparchus/analysis/differentiation/Gradient;");
            mids$[mid_extend_ace76047bba91127] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;I)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
            mids$[mid_extend_b792b7e3fa72c7c6] = env->getMethodID(cls, "extend", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;I)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getFreeStateParameters_d6ab429752e7c267] = env->getMethodID(cls, "getFreeStateParameters", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractGradientConverter::PythonAbstractGradientConverter(jint a0) : ::org::orekit::propagation::integration::AbstractGradientConverter(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

        ::org::hipparchus::analysis::differentiation::Gradient PythonAbstractGradientConverter::extend(const ::org::hipparchus::analysis::differentiation::Gradient & a0, jint a1) const
        {
          return ::org::hipparchus::analysis::differentiation::Gradient(env->callObjectMethod(this$, mids$[mid_extend_4e682d3d3cf0cde9], a0.this$, a1));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation PythonAbstractGradientConverter::extend(const ::org::hipparchus::geometry::euclidean::threed::FieldRotation & a0, jint a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_extend_ace76047bba91127], a0.this$, a1));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PythonAbstractGradientConverter::extend(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, jint a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_extend_b792b7e3fa72c7c6], a0.this$, a1));
        }

        jint PythonAbstractGradientConverter::getFreeStateParameters() const
        {
          return env->callIntMethod(this$, mids$[mid_getFreeStateParameters_d6ab429752e7c267]);
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
        static PyObject *t_PythonAbstractGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractGradientConverter_init_(t_PythonAbstractGradientConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractGradientConverter_extend(t_PythonAbstractGradientConverter *self, PyObject *args);
        static PyObject *t_PythonAbstractGradientConverter_getFreeStateParameters(t_PythonAbstractGradientConverter *self, PyObject *args);
        static PyObject *t_PythonAbstractGradientConverter_get__freeStateParameters(t_PythonAbstractGradientConverter *self, void *data);
        static PyGetSetDef t_PythonAbstractGradientConverter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractGradientConverter, freeStateParameters),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractGradientConverter__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractGradientConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractGradientConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractGradientConverter, extend, METH_VARARGS),
          DECLARE_METHOD(t_PythonAbstractGradientConverter, getFreeStateParameters, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractGradientConverter)[] = {
          { Py_tp_methods, t_PythonAbstractGradientConverter__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractGradientConverter_init_ },
          { Py_tp_getset, t_PythonAbstractGradientConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractGradientConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractGradientConverter),
          NULL
        };

        DEFINE_TYPE(PythonAbstractGradientConverter, t_PythonAbstractGradientConverter, PythonAbstractGradientConverter);

        void t_PythonAbstractGradientConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractGradientConverter), &PY_TYPE_DEF(PythonAbstractGradientConverter), module, "PythonAbstractGradientConverter", 0);
        }

        void t_PythonAbstractGradientConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGradientConverter), "class_", make_descriptor(PythonAbstractGradientConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGradientConverter), "wrapfn_", make_descriptor(t_PythonAbstractGradientConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractGradientConverter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PythonAbstractGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractGradientConverter::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractGradientConverter::wrap_Object(PythonAbstractGradientConverter(((t_PythonAbstractGradientConverter *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractGradientConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractGradientConverter_init_(t_PythonAbstractGradientConverter *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          PythonAbstractGradientConverter object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = PythonAbstractGradientConverter(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PythonAbstractGradientConverter_extend(t_PythonAbstractGradientConverter *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::analysis::differentiation::Gradient a0((jobject) NULL);
              jint a1;
              ::org::hipparchus::analysis::differentiation::Gradient result((jobject) NULL);

              if (!parseArgs(args, "kI", ::org::hipparchus::analysis::differentiation::Gradient::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.extend(a0, a1));
                return ::org::hipparchus::analysis::differentiation::t_Gradient::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KI", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.extend(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
            {
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "KI", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.extend(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(Gradient));
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "extend", args);
          return NULL;
        }

        static PyObject *t_PythonAbstractGradientConverter_getFreeStateParameters(t_PythonAbstractGradientConverter *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getFreeStateParameters());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(PythonAbstractGradientConverter), (PyObject *) self, "getFreeStateParameters", args, 2);
        }

        static PyObject *t_PythonAbstractGradientConverter_get__freeStateParameters(t_PythonAbstractGradientConverter *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFreeStateParameters());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVectorWriter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *StateVectorWriter::class$ = NULL;
            jmethodID *StateVectorWriter::mids$ = NULL;
            bool StateVectorWriter::live$ = false;

            jclass StateVectorWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/StateVectorWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_writeContent_05c6d36d73082fa6] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

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
            static PyObject *t_StateVectorWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorWriter_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_StateVectorWriter__methods_[] = {
              DECLARE_METHOD(t_StateVectorWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVectorWriter)[] = {
              { Py_tp_methods, t_StateVectorWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVectorWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(StateVectorWriter, t_StateVectorWriter, StateVectorWriter);

            void t_StateVectorWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVectorWriter), &PY_TYPE_DEF(StateVectorWriter), module, "StateVectorWriter", 0);
            }

            void t_StateVectorWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "class_", make_descriptor(StateVectorWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "wrapfn_", make_descriptor(t_StateVectorWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_StateVectorWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVectorWriter::initializeClass, 1)))
                return NULL;
              return t_StateVectorWriter::wrap_Object(StateVectorWriter(((t_StateVectorWriter *) arg)->object.this$));
            }
            static PyObject *t_StateVectorWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVectorWriter::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/PythonOrbit.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *PythonOrbit::class$ = NULL;
      jmethodID *PythonOrbit::mids$ = NULL;
      bool PythonOrbit::live$ = false;

      jclass PythonOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/PythonOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a8e6ee721e0d6799] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_ed4aba3b2cba7971] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_3ef35668c0b1580f] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_computeJacobianEccentricWrtCartesian_eda3f19b8225f78f] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianMeanWrtCartesian_eda3f19b8225f78f] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_eda3f19b8225f78f] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getA_9981f74b2d109da6] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_9981f74b2d109da6] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getE_9981f74b2d109da6] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_9981f74b2d109da6] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_9981f74b2d109da6] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_9981f74b2d109da6] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_9981f74b2d109da6] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_9981f74b2d109da6] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_9981f74b2d109da6] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_9981f74b2d109da6] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getLE_9981f74b2d109da6] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_9981f74b2d109da6] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_9981f74b2d109da6] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_9981f74b2d109da6] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_9981f74b2d109da6] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_9981f74b2d109da6] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getType_495f818d3570b7f5] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_initPVCoordinates_674031698a428ce8] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_initPosition_032312bdeb3f2f93] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_shiftedBy_d1516833b1f81441] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/Orbit;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonOrbit::PythonOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_a8e6ee721e0d6799, a0.this$, a1.this$, a2)) {}

      PythonOrbit::PythonOrbit(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_ed4aba3b2cba7971, a0.this$, a1.this$, a2)) {}

      void PythonOrbit::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonOrbit::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonOrbit::pythonExtension(jlong a0) const
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
    namespace orbits {
      static PyObject *t_PythonOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonOrbit_init_(t_PythonOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonOrbit_finalize(t_PythonOrbit *self);
      static PyObject *t_PythonOrbit_pythonExtension(t_PythonOrbit *self, PyObject *args);
      static void JNICALL t_PythonOrbit_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
      static jobject JNICALL t_PythonOrbit_computeJacobianEccentricWrtCartesian1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_computeJacobianMeanWrtCartesian2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_computeJacobianTrueWrtCartesian3(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getA4(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getADot5(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getE6(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEDot7(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEquinoctialEx8(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEquinoctialExDot9(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEquinoctialEy10(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getEquinoctialEyDot11(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getHx12(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getHxDot13(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getHy14(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getHyDot15(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getI16(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getIDot17(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLE18(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLEDot19(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLM20(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLMDot21(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLv22(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonOrbit_getLvDot23(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_getType24(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_initPVCoordinates25(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_initPosition26(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonOrbit_pythonDecRef27(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonOrbit_shiftedBy28(JNIEnv *jenv, jobject jobj, jdouble a0);
      static PyObject *t_PythonOrbit_get__self(t_PythonOrbit *self, void *data);
      static PyGetSetDef t_PythonOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_PythonOrbit, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonOrbit__methods_[] = {
        DECLARE_METHOD(t_PythonOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonOrbit, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonOrbit, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonOrbit)[] = {
        { Py_tp_methods, t_PythonOrbit__methods_ },
        { Py_tp_init, (void *) t_PythonOrbit_init_ },
        { Py_tp_getset, t_PythonOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(PythonOrbit, t_PythonOrbit, PythonOrbit);

      void t_PythonOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonOrbit), &PY_TYPE_DEF(PythonOrbit), module, "PythonOrbit", 1);
      }

      void t_PythonOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrbit), "class_", make_descriptor(PythonOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrbit), "wrapfn_", make_descriptor(t_PythonOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOrbit), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonOrbit::initializeClass);
        JNINativeMethod methods[] = {
          { "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V", (void *) t_PythonOrbit_addKeplerContribution0 },
          { "computeJacobianEccentricWrtCartesian", "()[[D", (void *) t_PythonOrbit_computeJacobianEccentricWrtCartesian1 },
          { "computeJacobianMeanWrtCartesian", "()[[D", (void *) t_PythonOrbit_computeJacobianMeanWrtCartesian2 },
          { "computeJacobianTrueWrtCartesian", "()[[D", (void *) t_PythonOrbit_computeJacobianTrueWrtCartesian3 },
          { "getA", "()D", (void *) t_PythonOrbit_getA4 },
          { "getADot", "()D", (void *) t_PythonOrbit_getADot5 },
          { "getE", "()D", (void *) t_PythonOrbit_getE6 },
          { "getEDot", "()D", (void *) t_PythonOrbit_getEDot7 },
          { "getEquinoctialEx", "()D", (void *) t_PythonOrbit_getEquinoctialEx8 },
          { "getEquinoctialExDot", "()D", (void *) t_PythonOrbit_getEquinoctialExDot9 },
          { "getEquinoctialEy", "()D", (void *) t_PythonOrbit_getEquinoctialEy10 },
          { "getEquinoctialEyDot", "()D", (void *) t_PythonOrbit_getEquinoctialEyDot11 },
          { "getHx", "()D", (void *) t_PythonOrbit_getHx12 },
          { "getHxDot", "()D", (void *) t_PythonOrbit_getHxDot13 },
          { "getHy", "()D", (void *) t_PythonOrbit_getHy14 },
          { "getHyDot", "()D", (void *) t_PythonOrbit_getHyDot15 },
          { "getI", "()D", (void *) t_PythonOrbit_getI16 },
          { "getIDot", "()D", (void *) t_PythonOrbit_getIDot17 },
          { "getLE", "()D", (void *) t_PythonOrbit_getLE18 },
          { "getLEDot", "()D", (void *) t_PythonOrbit_getLEDot19 },
          { "getLM", "()D", (void *) t_PythonOrbit_getLM20 },
          { "getLMDot", "()D", (void *) t_PythonOrbit_getLMDot21 },
          { "getLv", "()D", (void *) t_PythonOrbit_getLv22 },
          { "getLvDot", "()D", (void *) t_PythonOrbit_getLvDot23 },
          { "getType", "()Lorg/orekit/orbits/OrbitType;", (void *) t_PythonOrbit_getType24 },
          { "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonOrbit_initPVCoordinates25 },
          { "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonOrbit_initPosition26 },
          { "pythonDecRef", "()V", (void *) t_PythonOrbit_pythonDecRef27 },
          { "shiftedBy", "(D)Lorg/orekit/orbits/Orbit;", (void *) t_PythonOrbit_shiftedBy28 },
        };
        env->registerNatives(cls, methods, 29);
      }

      static PyObject *t_PythonOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonOrbit::initializeClass, 1)))
          return NULL;
        return t_PythonOrbit::wrap_Object(PythonOrbit(((t_PythonOrbit *) arg)->object.this$));
      }
      static PyObject *t_PythonOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonOrbit_init_(t_PythonOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            jdouble a2;
            PythonOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = PythonOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            jdouble a2;
            PythonOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = PythonOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
         default:
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonOrbit_finalize(t_PythonOrbit *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonOrbit_pythonExtension(t_PythonOrbit *self, PyObject *args)
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

      static void JNICALL t_PythonOrbit_addKeplerContribution0(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::orbits::t_PositionAngleType::wrap_Object(::org::orekit::orbits::PositionAngleType(a0));
        PyObject *o2 = JArray<jdouble>(a2).wrap();
        PyObject *result = PyObject_CallMethod(obj, "addKeplerContribution", "OdO", o0, (double) a1, o2);
        Py_DECREF(o0);
        Py_DECREF(o2);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonOrbit_computeJacobianEccentricWrtCartesian1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "computeJacobianEccentricWrtCartesian", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("computeJacobianEccentricWrtCartesian", result);
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

      static jobject JNICALL t_PythonOrbit_computeJacobianMeanWrtCartesian2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "computeJacobianMeanWrtCartesian", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("computeJacobianMeanWrtCartesian", result);
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

      static jobject JNICALL t_PythonOrbit_computeJacobianTrueWrtCartesian3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< JArray< jdouble > > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "computeJacobianTrueWrtCartesian", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[[D", &value))
        {
          throwTypeError("computeJacobianTrueWrtCartesian", result);
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

      static jdouble JNICALL t_PythonOrbit_getA4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getA", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getA", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getADot5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getADot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getADot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getE6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getE", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getE", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEDot7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEquinoctialEx8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEquinoctialEx", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEquinoctialEx", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEquinoctialExDot9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEquinoctialExDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEquinoctialExDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEquinoctialEy10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEquinoctialEy", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEquinoctialEy", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getEquinoctialEyDot11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getEquinoctialEyDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getEquinoctialEyDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getHx12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getHx", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getHx", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getHxDot13(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getHxDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getHxDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getHy14(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getHy", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getHy", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getHyDot15(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getHyDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getHyDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getI16(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getI", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getI", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getIDot17(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getIDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getIDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLE18(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLE", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLE", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLEDot19(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLEDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLEDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLM20(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLM", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLM", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLMDot21(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLMDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLMDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLv22(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLv", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLv", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jdouble JNICALL t_PythonOrbit_getLvDot23(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *result = PyObject_CallMethod(obj, "getLvDot", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("getLvDot", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonOrbit_getType24(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::OrbitType value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getType", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
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

      static jobject JNICALL t_PythonOrbit_initPVCoordinates25(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "initPVCoordinates", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("initPVCoordinates", result);
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

      static jobject JNICALL t_PythonOrbit_initPosition26(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "initPosition", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("initPosition", result);
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

      static void JNICALL t_PythonOrbit_pythonDecRef27(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonOrbit_shiftedBy28(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonOrbit::mids$[PythonOrbit::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::orbits::Orbit value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "shiftedBy", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::orbits::Orbit::initializeClass, &value))
        {
          throwTypeError("shiftedBy", result);
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

      static PyObject *t_PythonOrbit_get__self(t_PythonOrbit *self, void *data)
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
#include "org/orekit/propagation/analytical/tle/FieldTLEPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/propagation/analytical/tle/FieldTLEPropagator.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldTLEPropagator::class$ = NULL;
          jmethodID *FieldTLEPropagator::mids$ = NULL;
          bool FieldTLEPropagator::live$ = false;

          jclass FieldTLEPropagator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldTLEPropagator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMU_9981f74b2d109da6] = env->getStaticMethodID(cls, "getMU", "()D");
              mids$[mid_getPVCoordinates_4ef316d943d48c55] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldPVCoordinates;");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getTLE_f2ca7288b87b2f7c] = env->getMethodID(cls, "getTLE", "()Lorg/orekit/propagation/analytical/tle/FieldTLE;");
              mids$[mid_propagateOrbit_78985b34baac5c8e] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
              mids$[mid_resetInitialState_8062511934471166] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
              mids$[mid_selectExtrapolator_2f7a1e2c44d03382] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/analytical/tle/FieldTLEPropagator;");
              mids$[mid_selectExtrapolator_b0f4204af1b344f4] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/analytical/tle/FieldTLEPropagator;");
              mids$[mid_selectExtrapolator_56cd94c915049917] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/analytical/tle/FieldTLEPropagator;");
              mids$[mid_selectExtrapolator_910643d05d65b410] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/analytical/tle/FieldTLEPropagator;");
              mids$[mid_getMass_cf010978f3c5a913] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_resetIntermediateState_e90aea08a7a0ab5e] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
              mids$[mid_sxpInitialize_77e61a645c496adc] = env->getMethodID(cls, "sxpInitialize", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpPropagate_8556964e7b03aae6] = env->getMethodID(cls, "sxpPropagate", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame FieldTLEPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
          }

          jdouble FieldTLEPropagator::getMU()
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getMU_9981f74b2d109da6]);
          }

          ::org::orekit::utils::FieldPVCoordinates FieldTLEPropagator::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_4ef316d943d48c55], a0.this$, a1.this$));
          }

          ::java::util::List FieldTLEPropagator::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          ::org::orekit::propagation::analytical::tle::FieldTLE FieldTLEPropagator::getTLE() const
          {
            return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callObjectMethod(this$, mids$[mid_getTLE_f2ca7288b87b2f7c]));
          }

          ::org::orekit::orbits::FieldOrbit FieldTLEPropagator::propagateOrbit(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_78985b34baac5c8e], a0.this$, a1.this$));
          }

          void FieldTLEPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_8062511934471166], a0.this$);
          }

          FieldTLEPropagator FieldTLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_2f7a1e2c44d03382], a0.this$, a1.this$));
          }

          FieldTLEPropagator FieldTLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::frames::Frame & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_b0f4204af1b344f4], a0.this$, a1.this$, a2.this$));
          }

          FieldTLEPropagator FieldTLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_56cd94c915049917], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          FieldTLEPropagator FieldTLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::frames::Frame & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_910643d05d65b410], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
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
          static PyObject *t_FieldTLEPropagator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTLEPropagator_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldTLEPropagator_of_(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_getFrame(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_getMU(PyTypeObject *type);
          static PyObject *t_FieldTLEPropagator_getPVCoordinates(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_getParametersDrivers(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_getTLE(t_FieldTLEPropagator *self);
          static PyObject *t_FieldTLEPropagator_propagateOrbit(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_resetInitialState(t_FieldTLEPropagator *self, PyObject *args);
          static PyObject *t_FieldTLEPropagator_selectExtrapolator(PyTypeObject *type, PyObject *args);
          static PyObject *t_FieldTLEPropagator_get__frame(t_FieldTLEPropagator *self, void *data);
          static PyObject *t_FieldTLEPropagator_get__mU(t_FieldTLEPropagator *self, void *data);
          static PyObject *t_FieldTLEPropagator_get__parametersDrivers(t_FieldTLEPropagator *self, void *data);
          static PyObject *t_FieldTLEPropagator_get__tLE(t_FieldTLEPropagator *self, void *data);
          static PyObject *t_FieldTLEPropagator_get__parameters_(t_FieldTLEPropagator *self, void *data);
          static PyGetSetDef t_FieldTLEPropagator__fields_[] = {
            DECLARE_GET_FIELD(t_FieldTLEPropagator, frame),
            DECLARE_GET_FIELD(t_FieldTLEPropagator, mU),
            DECLARE_GET_FIELD(t_FieldTLEPropagator, parametersDrivers),
            DECLARE_GET_FIELD(t_FieldTLEPropagator, tLE),
            DECLARE_GET_FIELD(t_FieldTLEPropagator, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldTLEPropagator__methods_[] = {
            DECLARE_METHOD(t_FieldTLEPropagator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTLEPropagator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldTLEPropagator, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, getFrame, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, getMU, METH_NOARGS | METH_CLASS),
            DECLARE_METHOD(t_FieldTLEPropagator, getPVCoordinates, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, getParametersDrivers, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, getTLE, METH_NOARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, propagateOrbit, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, resetInitialState, METH_VARARGS),
            DECLARE_METHOD(t_FieldTLEPropagator, selectExtrapolator, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldTLEPropagator)[] = {
            { Py_tp_methods, t_FieldTLEPropagator__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldTLEPropagator__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldTLEPropagator)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
            NULL
          };

          DEFINE_TYPE(FieldTLEPropagator, t_FieldTLEPropagator, FieldTLEPropagator);
          PyObject *t_FieldTLEPropagator::wrap_Object(const FieldTLEPropagator& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTLEPropagator::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTLEPropagator *self = (t_FieldTLEPropagator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldTLEPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldTLEPropagator::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldTLEPropagator *self = (t_FieldTLEPropagator *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldTLEPropagator::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldTLEPropagator), &PY_TYPE_DEF(FieldTLEPropagator), module, "FieldTLEPropagator", 0);
          }

          void t_FieldTLEPropagator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLEPropagator), "class_", make_descriptor(FieldTLEPropagator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLEPropagator), "wrapfn_", make_descriptor(t_FieldTLEPropagator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTLEPropagator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldTLEPropagator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldTLEPropagator::initializeClass, 1)))
              return NULL;
            return t_FieldTLEPropagator::wrap_Object(FieldTLEPropagator(((t_FieldTLEPropagator *) arg)->object.this$));
          }
          static PyObject *t_FieldTLEPropagator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldTLEPropagator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldTLEPropagator_of_(t_FieldTLEPropagator *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldTLEPropagator_getFrame(t_FieldTLEPropagator *self, PyObject *args)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getFrame());
              return ::org::orekit::frames::t_Frame::wrap_Object(result);
            }

            return callSuper(PY_TYPE(FieldTLEPropagator), (PyObject *) self, "getFrame", args, 2);
          }

          static PyObject *t_FieldTLEPropagator_getMU(PyTypeObject *type)
          {
            jdouble result;
            OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLEPropagator::getMU());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_FieldTLEPropagator_getPVCoordinates(t_FieldTLEPropagator *self, PyObject *args)
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::utils::FieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
              return ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(result, self->parameters[0]);
            }

            return callSuper(PY_TYPE(FieldTLEPropagator), (PyObject *) self, "getPVCoordinates", args, 2);
          }

          static PyObject *t_FieldTLEPropagator_getParametersDrivers(t_FieldTLEPropagator *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            return callSuper(PY_TYPE(FieldTLEPropagator), (PyObject *) self, "getParametersDrivers", args, 2);
          }

          static PyObject *t_FieldTLEPropagator_getTLE(t_FieldTLEPropagator *self)
          {
            ::org::orekit::propagation::analytical::tle::FieldTLE result((jobject) NULL);
            OBJ_CALL(result = self->object.getTLE());
            return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldTLEPropagator_propagateOrbit(t_FieldTLEPropagator *self, PyObject *args)
          {
            ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.propagateOrbit(a0, a1));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "propagateOrbit", args);
            return NULL;
          }

          static PyObject *t_FieldTLEPropagator_resetInitialState(t_FieldTLEPropagator *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(self->object.resetInitialState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(FieldTLEPropagator), (PyObject *) self, "resetInitialState", args, 2);
          }

          static PyObject *t_FieldTLEPropagator_selectExtrapolator(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                FieldTLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLEPropagator::selectExtrapolator(a0, a1));
                  return t_FieldTLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::frames::Frame a1((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                FieldTLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "Kk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLEPropagator::selectExtrapolator(a0, a1, a2));
                  return t_FieldTLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                JArray< ::org::hipparchus::CalculusFieldElement > a3((jobject) NULL);
                PyTypeObject **p3;
                FieldTLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "KkK[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLEPropagator::selectExtrapolator(a0, a1, a2, a3));
                  return t_FieldTLEPropagator::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::orekit::propagation::analytical::tle::FieldTLE a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::orekit::frames::Frame a3((jobject) NULL);
                JArray< ::org::hipparchus::CalculusFieldElement > a4((jobject) NULL);
                PyTypeObject **p4;
                FieldTLEPropagator result((jobject) NULL);

                if (!parseArgs(args, "KkKk[K", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::analytical::tle::t_FieldTLE::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::propagation::analytical::tle::FieldTLEPropagator::selectExtrapolator(a0, a1, a2, a3, a4));
                  return t_FieldTLEPropagator::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "selectExtrapolator", args);
            return NULL;
          }
          static PyObject *t_FieldTLEPropagator_get__parameters_(t_FieldTLEPropagator *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldTLEPropagator_get__frame(t_FieldTLEPropagator *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_FieldTLEPropagator_get__mU(t_FieldTLEPropagator *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMU());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_FieldTLEPropagator_get__parametersDrivers(t_FieldTLEPropagator *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_FieldTLEPropagator_get__tLE(t_FieldTLEPropagator *self, void *data)
          {
            ::org::orekit::propagation::analytical::tle::FieldTLE value((jobject) NULL);
            OBJ_CALL(value = self->object.getTLE());
            return ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldTimeSpanMap.h"
#include "org/orekit/utils/FieldTimeSpanMap$Transition.h"
#include "java/util/SortedSet.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
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
          mids$[mid_init$_3c8da9512f6f1dce] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;Lorg/hipparchus/Field;)V");
          mids$[mid_addValidAfter_e6f20b3cd53c33f7] = env->getMethodID(cls, "addValidAfter", "(Ljava/lang/Object;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_addValidBefore_e6f20b3cd53c33f7] = env->getMethodID(cls, "addValidBefore", "(Ljava/lang/Object;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_get_a8583e77f3e41420] = env->getMethodID(cls, "get", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/lang/Object;");
          mids$[mid_getTransitions_815c7115fae241c1] = env->getMethodID(cls, "getTransitions", "()Ljava/util/SortedSet;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTimeSpanMap::FieldTimeSpanMap(const ::java::lang::Object & a0, const ::org::hipparchus::Field & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3c8da9512f6f1dce, a0.this$, a1.this$)) {}

      void FieldTimeSpanMap::addValidAfter(const ::java::lang::Object & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addValidAfter_e6f20b3cd53c33f7], a0.this$, a1.this$);
      }

      void FieldTimeSpanMap::addValidBefore(const ::java::lang::Object & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addValidBefore_e6f20b3cd53c33f7], a0.this$, a1.this$);
      }

      ::java::lang::Object FieldTimeSpanMap::get$(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_a8583e77f3e41420], a0.this$));
      }

      ::java::util::SortedSet FieldTimeSpanMap::getTransitions() const
      {
        return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getTransitions_815c7115fae241c1]));
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
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataLine.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/files/rinex/clock/RinexClock.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock$ClockDataLine::class$ = NULL;
          jmethodID *RinexClock$ClockDataLine::mids$ = NULL;
          bool RinexClock$ClockDataLine::live$ = false;

          jclass RinexClock$ClockDataLine::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock$ClockDataLine");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_62e94e4dcbafc902] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/rinex/clock/RinexClock;Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;Ljava/lang/String;Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;IDDDDDD)V");
              mids$[mid_getClockAcceleration_9981f74b2d109da6] = env->getMethodID(cls, "getClockAcceleration", "()D");
              mids$[mid_getClockAccelerationSigma_9981f74b2d109da6] = env->getMethodID(cls, "getClockAccelerationSigma", "()D");
              mids$[mid_getClockBias_9981f74b2d109da6] = env->getMethodID(cls, "getClockBias", "()D");
              mids$[mid_getClockBiasSigma_9981f74b2d109da6] = env->getMethodID(cls, "getClockBiasSigma", "()D");
              mids$[mid_getClockRate_9981f74b2d109da6] = env->getMethodID(cls, "getClockRate", "()D");
              mids$[mid_getClockRateSigma_9981f74b2d109da6] = env->getMethodID(cls, "getClockRateSigma", "()D");
              mids$[mid_getDataType_2b7e271a1085d20c] = env->getMethodID(cls, "getDataType", "()Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;");
              mids$[mid_getEpoch_80e11148db499dda] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getEpoch_d97c2c83a90981c7] = env->getMethodID(cls, "getEpoch", "(Lorg/orekit/time/TimeScale;)Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getNumberOfValues_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfValues", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexClock$ClockDataLine::RinexClock$ClockDataLine(const ::org::orekit::files::rinex::clock::RinexClock & a0, const ::org::orekit::files::rinex::clock::RinexClock$ClockDataType & a1, const ::java::lang::String & a2, const ::org::orekit::time::DateComponents & a3, const ::org::orekit::time::TimeComponents & a4, jint a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_62e94e4dcbafc902, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6, a7, a8, a9, a10, a11)) {}

          jdouble RinexClock$ClockDataLine::getClockAcceleration() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockAcceleration_9981f74b2d109da6]);
          }

          jdouble RinexClock$ClockDataLine::getClockAccelerationSigma() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockAccelerationSigma_9981f74b2d109da6]);
          }

          jdouble RinexClock$ClockDataLine::getClockBias() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockBias_9981f74b2d109da6]);
          }

          jdouble RinexClock$ClockDataLine::getClockBiasSigma() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockBiasSigma_9981f74b2d109da6]);
          }

          jdouble RinexClock$ClockDataLine::getClockRate() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockRate_9981f74b2d109da6]);
          }

          jdouble RinexClock$ClockDataLine::getClockRateSigma() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getClockRateSigma_9981f74b2d109da6]);
          }

          ::org::orekit::files::rinex::clock::RinexClock$ClockDataType RinexClock$ClockDataLine::getDataType() const
          {
            return ::org::orekit::files::rinex::clock::RinexClock$ClockDataType(env->callObjectMethod(this$, mids$[mid_getDataType_2b7e271a1085d20c]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock$ClockDataLine::getEpoch() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_80e11148db499dda]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock$ClockDataLine::getEpoch(const ::org::orekit::time::TimeScale & a0) const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_d97c2c83a90981c7], a0.this$));
          }

          ::java::lang::String RinexClock$ClockDataLine::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
          }

          jint RinexClock$ClockDataLine::getNumberOfValues() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfValues_d6ab429752e7c267]);
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
        namespace clock {
          static PyObject *t_RinexClock$ClockDataLine_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ClockDataLine_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexClock$ClockDataLine_init_(t_RinexClock$ClockDataLine *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexClock$ClockDataLine_getClockAcceleration(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockAccelerationSigma(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockBias(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockBiasSigma(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockRate(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getClockRateSigma(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getDataType(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getEpoch(t_RinexClock$ClockDataLine *self, PyObject *args);
          static PyObject *t_RinexClock$ClockDataLine_getName(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_getNumberOfValues(t_RinexClock$ClockDataLine *self);
          static PyObject *t_RinexClock$ClockDataLine_get__clockAcceleration(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockAccelerationSigma(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockBias(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockBiasSigma(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockRate(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__clockRateSigma(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__dataType(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__epoch(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__name(t_RinexClock$ClockDataLine *self, void *data);
          static PyObject *t_RinexClock$ClockDataLine_get__numberOfValues(t_RinexClock$ClockDataLine *self, void *data);
          static PyGetSetDef t_RinexClock$ClockDataLine__fields_[] = {
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockAcceleration),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockAccelerationSigma),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockBias),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockBiasSigma),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockRate),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, clockRateSigma),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, dataType),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, epoch),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, name),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataLine, numberOfValues),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock$ClockDataLine__methods_[] = {
            DECLARE_METHOD(t_RinexClock$ClockDataLine, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockAcceleration, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockAccelerationSigma, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockBias, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockBiasSigma, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockRate, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getClockRateSigma, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getDataType, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getEpoch, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataLine, getNumberOfValues, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock$ClockDataLine)[] = {
            { Py_tp_methods, t_RinexClock$ClockDataLine__methods_ },
            { Py_tp_init, (void *) t_RinexClock$ClockDataLine_init_ },
            { Py_tp_getset, t_RinexClock$ClockDataLine__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock$ClockDataLine)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClock$ClockDataLine, t_RinexClock$ClockDataLine, RinexClock$ClockDataLine);

          void t_RinexClock$ClockDataLine::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock$ClockDataLine), &PY_TYPE_DEF(RinexClock$ClockDataLine), module, "RinexClock$ClockDataLine", 0);
          }

          void t_RinexClock$ClockDataLine::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataLine), "class_", make_descriptor(RinexClock$ClockDataLine::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataLine), "wrapfn_", make_descriptor(t_RinexClock$ClockDataLine::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataLine), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClock$ClockDataLine_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock$ClockDataLine::initializeClass, 1)))
              return NULL;
            return t_RinexClock$ClockDataLine::wrap_Object(RinexClock$ClockDataLine(((t_RinexClock$ClockDataLine *) arg)->object.this$));
          }
          static PyObject *t_RinexClock$ClockDataLine_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock$ClockDataLine::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexClock$ClockDataLine_init_(t_RinexClock$ClockDataLine *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::files::rinex::clock::RinexClock a0((jobject) NULL);
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType a1((jobject) NULL);
            PyTypeObject **p1;
            ::java::lang::String a2((jobject) NULL);
            ::org::orekit::time::DateComponents a3((jobject) NULL);
            ::org::orekit::time::TimeComponents a4((jobject) NULL);
            jint a5;
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            jdouble a10;
            jdouble a11;
            RinexClock$ClockDataLine object((jobject) NULL);

            if (!parseArgs(args, "kKskkIDDDDDD", ::org::orekit::files::rinex::clock::RinexClock::initializeClass, ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::initializeClass, ::org::orekit::time::DateComponents::initializeClass, ::org::orekit::time::TimeComponents::initializeClass, &a0, &a1, &p1, ::org::orekit::files::rinex::clock::t_RinexClock$ClockDataType::parameters_, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
            {
              INT_CALL(object = RinexClock$ClockDataLine(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockAcceleration(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockAcceleration());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockAccelerationSigma(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockAccelerationSigma());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockBias(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockBias());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockBiasSigma(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockBiasSigma());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockRate(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockRate());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getClockRateSigma(t_RinexClock$ClockDataLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getClockRateSigma());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getDataType(t_RinexClock$ClockDataLine *self)
          {
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataType());
            return ::org::orekit::files::rinex::clock::t_RinexClock$ClockDataType::wrap_Object(result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getEpoch(t_RinexClock$ClockDataLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpoch());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
              break;
             case 1:
              {
                ::org::orekit::time::TimeScale a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getEpoch(a0));
                  return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getEpoch", args);
            return NULL;
          }

          static PyObject *t_RinexClock$ClockDataLine_getName(t_RinexClock$ClockDataLine *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_RinexClock$ClockDataLine_getNumberOfValues(t_RinexClock$ClockDataLine *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfValues());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockAcceleration(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockAcceleration());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockAccelerationSigma(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockAccelerationSigma());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockBias(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockBias());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockBiasSigma(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockBiasSigma());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockRate(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockRate());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__clockRateSigma(t_RinexClock$ClockDataLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getClockRateSigma());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__dataType(t_RinexClock$ClockDataLine *self, void *data)
          {
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataType());
            return ::org::orekit::files::rinex::clock::t_RinexClock$ClockDataType::wrap_Object(value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__epoch(t_RinexClock$ClockDataLine *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__name(t_RinexClock$ClockDataLine *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_RinexClock$ClockDataLine_get__numberOfValues(t_RinexClock$ClockDataLine *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfValues());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/stream/DoubleStream.h"
#include "java/util/stream/Stream.h"
#include "java/util/Spliterator$OfDouble.h"
#include "java/util/function/Supplier.h"
#include "java/util/DoubleSummaryStatistics.h"
#include "java/lang/Double.h"
#include "java/util/stream/DoubleStream.h"
#include "java/util/OptionalDouble.h"
#include "java/util/PrimitiveIterator$OfDouble.h"
#include "java/lang/Class.h"
#include "java/util/function/DoubleConsumer.h"
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
          mids$[mid_average_04dba3560d5bf527] = env->getMethodID(cls, "average", "()Ljava/util/OptionalDouble;");
          mids$[mid_boxed_11e4ca8182c1933d] = env->getMethodID(cls, "boxed", "()Ljava/util/stream/Stream;");
          mids$[mid_concat_0167487baf7210c4] = env->getStaticMethodID(cls, "concat", "(Ljava/util/stream/DoubleStream;Ljava/util/stream/DoubleStream;)Ljava/util/stream/DoubleStream;");
          mids$[mid_count_42c72b98e3c2e08a] = env->getMethodID(cls, "count", "()J");
          mids$[mid_distinct_98f7f3ef9d3d1b57] = env->getMethodID(cls, "distinct", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_empty_98f7f3ef9d3d1b57] = env->getStaticMethodID(cls, "empty", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_findAny_04dba3560d5bf527] = env->getMethodID(cls, "findAny", "()Ljava/util/OptionalDouble;");
          mids$[mid_findFirst_04dba3560d5bf527] = env->getMethodID(cls, "findFirst", "()Ljava/util/OptionalDouble;");
          mids$[mid_forEach_a4d506ef5f26a2aa] = env->getMethodID(cls, "forEach", "(Ljava/util/function/DoubleConsumer;)V");
          mids$[mid_forEachOrdered_a4d506ef5f26a2aa] = env->getMethodID(cls, "forEachOrdered", "(Ljava/util/function/DoubleConsumer;)V");
          mids$[mid_iterator_a28dcb58dfaadd89] = env->getMethodID(cls, "iterator", "()Ljava/util/PrimitiveIterator$OfDouble;");
          mids$[mid_limit_0b951659a4ffdc52] = env->getMethodID(cls, "limit", "(J)Ljava/util/stream/DoubleStream;");
          mids$[mid_max_04dba3560d5bf527] = env->getMethodID(cls, "max", "()Ljava/util/OptionalDouble;");
          mids$[mid_min_04dba3560d5bf527] = env->getMethodID(cls, "min", "()Ljava/util/OptionalDouble;");
          mids$[mid_of_6c41db567343fc7b] = env->getStaticMethodID(cls, "of", "([D)Ljava/util/stream/DoubleStream;");
          mids$[mid_of_848ddad4f9b27f1e] = env->getStaticMethodID(cls, "of", "(D)Ljava/util/stream/DoubleStream;");
          mids$[mid_parallel_98f7f3ef9d3d1b57] = env->getMethodID(cls, "parallel", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_peek_35f6a3acef2e38ef] = env->getMethodID(cls, "peek", "(Ljava/util/function/DoubleConsumer;)Ljava/util/stream/DoubleStream;");
          mids$[mid_sequential_98f7f3ef9d3d1b57] = env->getMethodID(cls, "sequential", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_skip_0b951659a4ffdc52] = env->getMethodID(cls, "skip", "(J)Ljava/util/stream/DoubleStream;");
          mids$[mid_sorted_98f7f3ef9d3d1b57] = env->getMethodID(cls, "sorted", "()Ljava/util/stream/DoubleStream;");
          mids$[mid_spliterator_2d06752ec2b10dcc] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator$OfDouble;");
          mids$[mid_sum_9981f74b2d109da6] = env->getMethodID(cls, "sum", "()D");
          mids$[mid_summaryStatistics_199cb26abe5fb0e1] = env->getMethodID(cls, "summaryStatistics", "()Ljava/util/DoubleSummaryStatistics;");
          mids$[mid_toArray_be783177b060994b] = env->getMethodID(cls, "toArray", "()[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::OptionalDouble DoubleStream::average() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_average_04dba3560d5bf527]));
      }

      ::java::util::stream::Stream DoubleStream::boxed() const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_boxed_11e4ca8182c1933d]));
      }

      DoubleStream DoubleStream::concat(const DoubleStream & a0, const DoubleStream & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_concat_0167487baf7210c4], a0.this$, a1.this$));
      }

      jlong DoubleStream::count() const
      {
        return env->callLongMethod(this$, mids$[mid_count_42c72b98e3c2e08a]);
      }

      DoubleStream DoubleStream::distinct() const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_distinct_98f7f3ef9d3d1b57]));
      }

      DoubleStream DoubleStream::empty()
      {
        jclass cls = env->getClass(initializeClass);
        return DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_empty_98f7f3ef9d3d1b57]));
      }

      ::java::util::OptionalDouble DoubleStream::findAny() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_findAny_04dba3560d5bf527]));
      }

      ::java::util::OptionalDouble DoubleStream::findFirst() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_findFirst_04dba3560d5bf527]));
      }

      void DoubleStream::forEach(const ::java::util::function::DoubleConsumer & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_forEach_a4d506ef5f26a2aa], a0.this$);
      }

      void DoubleStream::forEachOrdered(const ::java::util::function::DoubleConsumer & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_forEachOrdered_a4d506ef5f26a2aa], a0.this$);
      }

      ::java::util::PrimitiveIterator$OfDouble DoubleStream::iterator() const
      {
        return ::java::util::PrimitiveIterator$OfDouble(env->callObjectMethod(this$, mids$[mid_iterator_a28dcb58dfaadd89]));
      }

      DoubleStream DoubleStream::limit(jlong a0) const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_limit_0b951659a4ffdc52], a0));
      }

      ::java::util::OptionalDouble DoubleStream::max$() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_max_04dba3560d5bf527]));
      }

      ::java::util::OptionalDouble DoubleStream::min$() const
      {
        return ::java::util::OptionalDouble(env->callObjectMethod(this$, mids$[mid_min_04dba3560d5bf527]));
      }

      DoubleStream DoubleStream::of(const JArray< jdouble > & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_of_6c41db567343fc7b], a0.this$));
      }

      DoubleStream DoubleStream::of(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return DoubleStream(env->callStaticObjectMethod(cls, mids$[mid_of_848ddad4f9b27f1e], a0));
      }

      DoubleStream DoubleStream::parallel() const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_parallel_98f7f3ef9d3d1b57]));
      }

      DoubleStream DoubleStream::peek(const ::java::util::function::DoubleConsumer & a0) const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_peek_35f6a3acef2e38ef], a0.this$));
      }

      DoubleStream DoubleStream::sequential() const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_sequential_98f7f3ef9d3d1b57]));
      }

      DoubleStream DoubleStream::skip(jlong a0) const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_skip_0b951659a4ffdc52], a0));
      }

      DoubleStream DoubleStream::sorted() const
      {
        return DoubleStream(env->callObjectMethod(this$, mids$[mid_sorted_98f7f3ef9d3d1b57]));
      }

      ::java::util::Spliterator$OfDouble DoubleStream::spliterator() const
      {
        return ::java::util::Spliterator$OfDouble(env->callObjectMethod(this$, mids$[mid_spliterator_2d06752ec2b10dcc]));
      }

      jdouble DoubleStream::sum() const
      {
        return env->callDoubleMethod(this$, mids$[mid_sum_9981f74b2d109da6]);
      }

      ::java::util::DoubleSummaryStatistics DoubleStream::summaryStatistics() const
      {
        return ::java::util::DoubleSummaryStatistics(env->callObjectMethod(this$, mids$[mid_summaryStatistics_199cb26abe5fb0e1]));
      }

      JArray< jdouble > DoubleStream::toArray() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toArray_be783177b060994b]));
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
#include "org/hipparchus/ode/FieldDenseOutputModel.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/FieldDenseOutputModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/sampling/FieldODEStepHandler.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldDenseOutputModel::class$ = NULL;
      jmethodID *FieldDenseOutputModel::mids$ = NULL;
      bool FieldDenseOutputModel::live$ = false;

      jclass FieldDenseOutputModel::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldDenseOutputModel");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_append_3bf65271b4e628fe] = env->getMethodID(cls, "append", "(Lorg/hipparchus/ode/FieldDenseOutputModel;)V");
          mids$[mid_finish_380a9edd05c82300] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)V");
          mids$[mid_getFinalTime_08d37e3f77b7239d] = env->getMethodID(cls, "getFinalTime", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getInitialTime_08d37e3f77b7239d] = env->getMethodID(cls, "getInitialTime", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getInterpolatedState_7a35201efb2d5095] = env->getMethodID(cls, "getInterpolatedState", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
          mids$[mid_handleStep_d5c9193ad6d936b3] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)V");
          mids$[mid_init_2a077928ff78cfcb] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldDenseOutputModel::FieldDenseOutputModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void FieldDenseOutputModel::append(const FieldDenseOutputModel & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_append_3bf65271b4e628fe], a0.this$);
      }

      void FieldDenseOutputModel::finish(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_finish_380a9edd05c82300], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement FieldDenseOutputModel::getFinalTime() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFinalTime_08d37e3f77b7239d]));
      }

      ::org::hipparchus::CalculusFieldElement FieldDenseOutputModel::getInitialTime() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getInitialTime_08d37e3f77b7239d]));
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative FieldDenseOutputModel::getInterpolatedState(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_getInterpolatedState_7a35201efb2d5095], a0.this$));
      }

      void FieldDenseOutputModel::handleStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_handleStep_d5c9193ad6d936b3], a0.this$);
      }

      void FieldDenseOutputModel::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_init_2a077928ff78cfcb], a0.this$, a1.this$);
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
      static PyObject *t_FieldDenseOutputModel_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_of_(t_FieldDenseOutputModel *self, PyObject *args);
      static int t_FieldDenseOutputModel_init_(t_FieldDenseOutputModel *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldDenseOutputModel_append(t_FieldDenseOutputModel *self, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_finish(t_FieldDenseOutputModel *self, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_getFinalTime(t_FieldDenseOutputModel *self);
      static PyObject *t_FieldDenseOutputModel_getInitialTime(t_FieldDenseOutputModel *self);
      static PyObject *t_FieldDenseOutputModel_getInterpolatedState(t_FieldDenseOutputModel *self, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_handleStep(t_FieldDenseOutputModel *self, PyObject *arg);
      static PyObject *t_FieldDenseOutputModel_init(t_FieldDenseOutputModel *self, PyObject *args);
      static PyObject *t_FieldDenseOutputModel_get__finalTime(t_FieldDenseOutputModel *self, void *data);
      static PyObject *t_FieldDenseOutputModel_get__initialTime(t_FieldDenseOutputModel *self, void *data);
      static PyObject *t_FieldDenseOutputModel_get__parameters_(t_FieldDenseOutputModel *self, void *data);
      static PyGetSetDef t_FieldDenseOutputModel__fields_[] = {
        DECLARE_GET_FIELD(t_FieldDenseOutputModel, finalTime),
        DECLARE_GET_FIELD(t_FieldDenseOutputModel, initialTime),
        DECLARE_GET_FIELD(t_FieldDenseOutputModel, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldDenseOutputModel__methods_[] = {
        DECLARE_METHOD(t_FieldDenseOutputModel, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDenseOutputModel, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDenseOutputModel, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldDenseOutputModel, append, METH_O),
        DECLARE_METHOD(t_FieldDenseOutputModel, finish, METH_O),
        DECLARE_METHOD(t_FieldDenseOutputModel, getFinalTime, METH_NOARGS),
        DECLARE_METHOD(t_FieldDenseOutputModel, getInitialTime, METH_NOARGS),
        DECLARE_METHOD(t_FieldDenseOutputModel, getInterpolatedState, METH_O),
        DECLARE_METHOD(t_FieldDenseOutputModel, handleStep, METH_O),
        DECLARE_METHOD(t_FieldDenseOutputModel, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldDenseOutputModel)[] = {
        { Py_tp_methods, t_FieldDenseOutputModel__methods_ },
        { Py_tp_init, (void *) t_FieldDenseOutputModel_init_ },
        { Py_tp_getset, t_FieldDenseOutputModel__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldDenseOutputModel)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldDenseOutputModel, t_FieldDenseOutputModel, FieldDenseOutputModel);
      PyObject *t_FieldDenseOutputModel::wrap_Object(const FieldDenseOutputModel& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDenseOutputModel::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDenseOutputModel *self = (t_FieldDenseOutputModel *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldDenseOutputModel::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDenseOutputModel::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDenseOutputModel *self = (t_FieldDenseOutputModel *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldDenseOutputModel::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldDenseOutputModel), &PY_TYPE_DEF(FieldDenseOutputModel), module, "FieldDenseOutputModel", 0);
      }

      void t_FieldDenseOutputModel::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDenseOutputModel), "class_", make_descriptor(FieldDenseOutputModel::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDenseOutputModel), "wrapfn_", make_descriptor(t_FieldDenseOutputModel::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDenseOutputModel), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldDenseOutputModel_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldDenseOutputModel::initializeClass, 1)))
          return NULL;
        return t_FieldDenseOutputModel::wrap_Object(FieldDenseOutputModel(((t_FieldDenseOutputModel *) arg)->object.this$));
      }
      static PyObject *t_FieldDenseOutputModel_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldDenseOutputModel::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldDenseOutputModel_of_(t_FieldDenseOutputModel *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldDenseOutputModel_init_(t_FieldDenseOutputModel *self, PyObject *args, PyObject *kwds)
      {
        FieldDenseOutputModel object((jobject) NULL);

        INT_CALL(object = FieldDenseOutputModel());
        self->object = object;

        return 0;
      }

      static PyObject *t_FieldDenseOutputModel_append(t_FieldDenseOutputModel *self, PyObject *arg)
      {
        FieldDenseOutputModel a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", FieldDenseOutputModel::initializeClass, &a0, &p0, t_FieldDenseOutputModel::parameters_))
        {
          OBJ_CALL(self->object.append(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "append", arg);
        return NULL;
      }

      static PyObject *t_FieldDenseOutputModel_finish(t_FieldDenseOutputModel *self, PyObject *arg)
      {
        ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_))
        {
          OBJ_CALL(self->object.finish(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "finish", arg);
        return NULL;
      }

      static PyObject *t_FieldDenseOutputModel_getFinalTime(t_FieldDenseOutputModel *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getFinalTime());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDenseOutputModel_getInitialTime(t_FieldDenseOutputModel *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialTime());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldDenseOutputModel_getInterpolatedState(t_FieldDenseOutputModel *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.getInterpolatedState(a0));
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getInterpolatedState", arg);
        return NULL;
      }

      static PyObject *t_FieldDenseOutputModel_handleStep(t_FieldDenseOutputModel *self, PyObject *arg)
      {
        ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
        PyTypeObject **p0;

        if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
        {
          OBJ_CALL(self->object.handleStep(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
        return NULL;
      }

      static PyObject *t_FieldDenseOutputModel_init(t_FieldDenseOutputModel *self, PyObject *args)
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
      static PyObject *t_FieldDenseOutputModel_get__parameters_(t_FieldDenseOutputModel *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldDenseOutputModel_get__finalTime(t_FieldDenseOutputModel *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getFinalTime());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldDenseOutputModel_get__initialTime(t_FieldDenseOutputModel *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialTime());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseCentersOffsetComputer.h"
#include "org/orekit/frames/StaticTransform.h"
#include "org/orekit/gnss/antenna/FrequencyPattern.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseCentersOffsetComputer::class$ = NULL;
          jmethodID *PhaseCentersOffsetComputer::mids$ = NULL;
          bool PhaseCentersOffsetComputer::live$ = false;

          jclass PhaseCentersOffsetComputer::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseCentersOffsetComputer");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_4f6a2e827b6dec38] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/antenna/FrequencyPattern;Lorg/orekit/gnss/antenna/FrequencyPattern;)V");
              mids$[mid_offset_0fe15e9c1fe4d257] = env->getMethodID(cls, "offset", "(Lorg/orekit/frames/StaticTransform;Lorg/orekit/frames/StaticTransform;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseCentersOffsetComputer::PhaseCentersOffsetComputer(const ::org::orekit::gnss::antenna::FrequencyPattern & a0, const ::org::orekit::gnss::antenna::FrequencyPattern & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4f6a2e827b6dec38, a0.this$, a1.this$)) {}

          jdouble PhaseCentersOffsetComputer::offset(const ::org::orekit::frames::StaticTransform & a0, const ::org::orekit::frames::StaticTransform & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_offset_0fe15e9c1fe4d257], a0.this$, a1.this$);
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
          static PyObject *t_PhaseCentersOffsetComputer_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseCentersOffsetComputer_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseCentersOffsetComputer_init_(t_PhaseCentersOffsetComputer *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseCentersOffsetComputer_offset(t_PhaseCentersOffsetComputer *self, PyObject *args);

          static PyMethodDef t_PhaseCentersOffsetComputer__methods_[] = {
            DECLARE_METHOD(t_PhaseCentersOffsetComputer, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersOffsetComputer, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseCentersOffsetComputer, offset, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseCentersOffsetComputer)[] = {
            { Py_tp_methods, t_PhaseCentersOffsetComputer__methods_ },
            { Py_tp_init, (void *) t_PhaseCentersOffsetComputer_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseCentersOffsetComputer)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseCentersOffsetComputer, t_PhaseCentersOffsetComputer, PhaseCentersOffsetComputer);

          void t_PhaseCentersOffsetComputer::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseCentersOffsetComputer), &PY_TYPE_DEF(PhaseCentersOffsetComputer), module, "PhaseCentersOffsetComputer", 0);
          }

          void t_PhaseCentersOffsetComputer::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersOffsetComputer), "class_", make_descriptor(PhaseCentersOffsetComputer::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersOffsetComputer), "wrapfn_", make_descriptor(t_PhaseCentersOffsetComputer::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseCentersOffsetComputer), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseCentersOffsetComputer_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseCentersOffsetComputer::initializeClass, 1)))
              return NULL;
            return t_PhaseCentersOffsetComputer::wrap_Object(PhaseCentersOffsetComputer(((t_PhaseCentersOffsetComputer *) arg)->object.this$));
          }
          static PyObject *t_PhaseCentersOffsetComputer_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseCentersOffsetComputer::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseCentersOffsetComputer_init_(t_PhaseCentersOffsetComputer *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::antenna::FrequencyPattern a0((jobject) NULL);
            ::org::orekit::gnss::antenna::FrequencyPattern a1((jobject) NULL);
            PhaseCentersOffsetComputer object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, ::org::orekit::gnss::antenna::FrequencyPattern::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseCentersOffsetComputer(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseCentersOffsetComputer_offset(t_PhaseCentersOffsetComputer *self, PyObject *args)
          {
            ::org::orekit::frames::StaticTransform a0((jobject) NULL);
            ::org::orekit::frames::StaticTransform a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::frames::StaticTransform::initializeClass, ::org::orekit::frames::StaticTransform::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.offset(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "offset", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/MessageType.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ParsedMessage.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *MessageType::class$ = NULL;
          jmethodID *MessageType::mids$ = NULL;
          bool MessageType::live$ = false;

          jclass MessageType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/MessageType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_parse_923958375e872406] = env->getMethodID(cls, "parse", "(Lorg/orekit/gnss/metric/parser/EncodedMessage;I)Lorg/orekit/gnss/metric/messages/ParsedMessage;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::gnss::metric::messages::ParsedMessage MessageType::parse(const ::org::orekit::gnss::metric::parser::EncodedMessage & a0, jint a1) const
          {
            return ::org::orekit::gnss::metric::messages::ParsedMessage(env->callObjectMethod(this$, mids$[mid_parse_923958375e872406], a0.this$, a1));
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
        namespace parser {
          static PyObject *t_MessageType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessageType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MessageType_parse(t_MessageType *self, PyObject *args);

          static PyMethodDef t_MessageType__methods_[] = {
            DECLARE_METHOD(t_MessageType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessageType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MessageType, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MessageType)[] = {
            { Py_tp_methods, t_MessageType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MessageType)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MessageType, t_MessageType, MessageType);

          void t_MessageType::install(PyObject *module)
          {
            installType(&PY_TYPE(MessageType), &PY_TYPE_DEF(MessageType), module, "MessageType", 0);
          }

          void t_MessageType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageType), "class_", make_descriptor(MessageType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageType), "wrapfn_", make_descriptor(t_MessageType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MessageType), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MessageType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MessageType::initializeClass, 1)))
              return NULL;
            return t_MessageType::wrap_Object(MessageType(((t_MessageType *) arg)->object.this$));
          }
          static PyObject *t_MessageType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MessageType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MessageType_parse(t_MessageType *self, PyObject *args)
          {
            ::org::orekit::gnss::metric::parser::EncodedMessage a0((jobject) NULL);
            jint a1;
            ::org::orekit::gnss::metric::messages::ParsedMessage result((jobject) NULL);

            if (!parseArgs(args, "kI", ::org::orekit::gnss::metric::parser::EncodedMessage::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.parse(a0, a1));
              return ::org::orekit::gnss::metric::messages::t_ParsedMessage::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/OrderedComplexEigenDecomposition.h"
#include "java/util/Comparator.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *OrderedComplexEigenDecomposition::class$ = NULL;
      jmethodID *OrderedComplexEigenDecomposition::mids$ = NULL;
      bool OrderedComplexEigenDecomposition::live$ = false;

      jclass OrderedComplexEigenDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/OrderedComplexEigenDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f5364c9a9d9cbd53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_e834f27fc5021cbd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DDD)V");
          mids$[mid_init$_afce1c5c6e44e1cc] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DDDLjava/util/Comparator;)V");
          mids$[mid_getVT_02883dbbe5db44ac] = env->getMethodID(cls, "getVT", "()Lorg/hipparchus/linear/FieldMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrderedComplexEigenDecomposition::OrderedComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::org::hipparchus::linear::ComplexEigenDecomposition(env->newObject(initializeClass, &mids$, mid_init$_f5364c9a9d9cbd53, a0.this$)) {}

      OrderedComplexEigenDecomposition::OrderedComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jdouble a2, jdouble a3) : ::org::hipparchus::linear::ComplexEigenDecomposition(env->newObject(initializeClass, &mids$, mid_init$_e834f27fc5021cbd, a0.this$, a1, a2, a3)) {}

      OrderedComplexEigenDecomposition::OrderedComplexEigenDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jdouble a2, jdouble a3, const ::java::util::Comparator & a4) : ::org::hipparchus::linear::ComplexEigenDecomposition(env->newObject(initializeClass, &mids$, mid_init$_afce1c5c6e44e1cc, a0.this$, a1, a2, a3, a4.this$)) {}

      ::org::hipparchus::linear::FieldMatrix OrderedComplexEigenDecomposition::getVT() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getVT_02883dbbe5db44ac]));
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
      static PyObject *t_OrderedComplexEigenDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrderedComplexEigenDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrderedComplexEigenDecomposition_init_(t_OrderedComplexEigenDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrderedComplexEigenDecomposition_getVT(t_OrderedComplexEigenDecomposition *self, PyObject *args);
      static PyObject *t_OrderedComplexEigenDecomposition_get__vT(t_OrderedComplexEigenDecomposition *self, void *data);
      static PyGetSetDef t_OrderedComplexEigenDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_OrderedComplexEigenDecomposition, vT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrderedComplexEigenDecomposition__methods_[] = {
        DECLARE_METHOD(t_OrderedComplexEigenDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrderedComplexEigenDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrderedComplexEigenDecomposition, getVT, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrderedComplexEigenDecomposition)[] = {
        { Py_tp_methods, t_OrderedComplexEigenDecomposition__methods_ },
        { Py_tp_init, (void *) t_OrderedComplexEigenDecomposition_init_ },
        { Py_tp_getset, t_OrderedComplexEigenDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrderedComplexEigenDecomposition)[] = {
        &PY_TYPE_DEF(::org::hipparchus::linear::ComplexEigenDecomposition),
        NULL
      };

      DEFINE_TYPE(OrderedComplexEigenDecomposition, t_OrderedComplexEigenDecomposition, OrderedComplexEigenDecomposition);

      void t_OrderedComplexEigenDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(OrderedComplexEigenDecomposition), &PY_TYPE_DEF(OrderedComplexEigenDecomposition), module, "OrderedComplexEigenDecomposition", 0);
      }

      void t_OrderedComplexEigenDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrderedComplexEigenDecomposition), "class_", make_descriptor(OrderedComplexEigenDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrderedComplexEigenDecomposition), "wrapfn_", make_descriptor(t_OrderedComplexEigenDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrderedComplexEigenDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrderedComplexEigenDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrderedComplexEigenDecomposition::initializeClass, 1)))
          return NULL;
        return t_OrderedComplexEigenDecomposition::wrap_Object(OrderedComplexEigenDecomposition(((t_OrderedComplexEigenDecomposition *) arg)->object.this$));
      }
      static PyObject *t_OrderedComplexEigenDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrderedComplexEigenDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrderedComplexEigenDecomposition_init_(t_OrderedComplexEigenDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            OrderedComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = OrderedComplexEigenDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            OrderedComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kDDD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = OrderedComplexEigenDecomposition(a0, a1, a2, a3));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jdouble a2;
            jdouble a3;
            ::java::util::Comparator a4((jobject) NULL);
            PyTypeObject **p4;
            OrderedComplexEigenDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kDDDK", ::org::hipparchus::linear::RealMatrix::initializeClass, ::java::util::Comparator::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::java::util::t_Comparator::parameters_))
            {
              INT_CALL(object = OrderedComplexEigenDecomposition(a0, a1, a2, a3, a4));
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

      static PyObject *t_OrderedComplexEigenDecomposition_getVT(t_OrderedComplexEigenDecomposition *self, PyObject *args)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getVT());
          return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
        }

        return callSuper(PY_TYPE(OrderedComplexEigenDecomposition), (PyObject *) self, "getVT", args, 2);
      }

      static PyObject *t_OrderedComplexEigenDecomposition_get__vT(t_OrderedComplexEigenDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVT());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Set.h"
#include "java/util/Iterator.h"
#include "java/util/Spliterator.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Set::class$ = NULL;
    jmethodID *Set::mids$ = NULL;
    bool Set::live$ = false;

    jclass Set::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Set");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_72faff9b05f5ed5e] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_61d64368c58b84f3] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_contains_72faff9b05f5ed5e] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_containsAll_61d64368c58b84f3] = env->getMethodID(cls, "containsAll", "(Ljava/util/Collection;)Z");
        mids$[mid_copyOf_c08b85fb6cea561c] = env->getStaticMethodID(cls, "copyOf", "(Ljava/util/Collection;)Ljava/util/Set;");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_isEmpty_eee3de00fe971136] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_4f613ccd2f803b4b] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_of_6b191a9b12c1004b] = env->getStaticMethodID(cls, "of", "()Ljava/util/Set;");
        mids$[mid_of_0a425ed7b931c546] = env->getStaticMethodID(cls, "of", "([Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_dd7b1a28b924e386] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_5dea77d830943608] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_0004910f2eb08231] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_eedc3fa773150619] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_d68918d63bc49421] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_bd904d363a04741d] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_1e7a5470eb41ba81] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_1361ecfda280067e] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_61c014cebcbf507f] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_of_b7fe627f0b0b8f43] = env->getStaticMethodID(cls, "of", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/Set;");
        mids$[mid_remove_72faff9b05f5ed5e] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_61d64368c58b84f3] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_retainAll_61d64368c58b84f3] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_size_d6ab429752e7c267] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_74c84c40cacaa7be] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_toArray_2ab86268ef7a6631] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_f4767af6a3829fbc] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean Set::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_72faff9b05f5ed5e], a0.this$);
    }

    jboolean Set::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_61d64368c58b84f3], a0.this$);
    }

    void Set::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
    }

    jboolean Set::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_72faff9b05f5ed5e], a0.this$);
    }

    jboolean Set::containsAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_containsAll_61d64368c58b84f3], a0.this$);
    }

    Set Set::copyOf(const ::java::util::Collection & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_copyOf_c08b85fb6cea561c], a0.this$));
    }

    jboolean Set::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    jint Set::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jboolean Set::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_eee3de00fe971136]);
    }

    ::java::util::Iterator Set::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4f613ccd2f803b4b]));
    }

    Set Set::of()
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_6b191a9b12c1004b]));
    }

    Set Set::of(const JArray< ::java::lang::Object > & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_0a425ed7b931c546], a0.this$));
    }

    Set Set::of(const ::java::lang::Object & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_dd7b1a28b924e386], a0.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_5dea77d830943608], a0.this$, a1.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_0004910f2eb08231], a0.this$, a1.this$, a2.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_eedc3fa773150619], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_d68918d63bc49421], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_bd904d363a04741d], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_1e7a5470eb41ba81], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_1361ecfda280067e], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_61c014cebcbf507f], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$));
    }

    Set Set::of(const ::java::lang::Object & a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2, const ::java::lang::Object & a3, const ::java::lang::Object & a4, const ::java::lang::Object & a5, const ::java::lang::Object & a6, const ::java::lang::Object & a7, const ::java::lang::Object & a8, const ::java::lang::Object & a9)
    {
      jclass cls = env->getClass(initializeClass);
      return Set(env->callStaticObjectMethod(cls, mids$[mid_of_b7fe627f0b0b8f43], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$));
    }

    jboolean Set::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_72faff9b05f5ed5e], a0.this$);
    }

    jboolean Set::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_61d64368c58b84f3], a0.this$);
    }

    jboolean Set::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_61d64368c58b84f3], a0.this$);
    }

    jint Set::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_d6ab429752e7c267]);
    }

    ::java::util::Spliterator Set::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_74c84c40cacaa7be]));
    }

    JArray< ::java::lang::Object > Set::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_2ab86268ef7a6631]));
    }

    JArray< ::java::lang::Object > Set::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_f4767af6a3829fbc], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Set_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Set_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Set_of_(t_Set *self, PyObject *args);
    static PyObject *t_Set_add(t_Set *self, PyObject *args);
    static PyObject *t_Set_addAll(t_Set *self, PyObject *args);
    static PyObject *t_Set_clear(t_Set *self, PyObject *args);
    static PyObject *t_Set_contains(t_Set *self, PyObject *args);
    static PyObject *t_Set_containsAll(t_Set *self, PyObject *args);
    static PyObject *t_Set_copyOf(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Set_equals(t_Set *self, PyObject *args);
    static PyObject *t_Set_hashCode(t_Set *self, PyObject *args);
    static PyObject *t_Set_isEmpty(t_Set *self, PyObject *args);
    static PyObject *t_Set_iterator(t_Set *self, PyObject *args);
    static PyObject *t_Set_of(PyTypeObject *type, PyObject *args);
    static PyObject *t_Set_remove(t_Set *self, PyObject *args);
    static PyObject *t_Set_removeAll(t_Set *self, PyObject *args);
    static PyObject *t_Set_retainAll(t_Set *self, PyObject *args);
    static PyObject *t_Set_size(t_Set *self, PyObject *args);
    static PyObject *t_Set_spliterator(t_Set *self, PyObject *args);
    static PyObject *t_Set_toArray(t_Set *self, PyObject *args);
    static PyObject *t_Set_get__empty(t_Set *self, void *data);
    static PyObject *t_Set_get__parameters_(t_Set *self, void *data);
    static PyGetSetDef t_Set__fields_[] = {
      DECLARE_GET_FIELD(t_Set, empty),
      DECLARE_GET_FIELD(t_Set, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Set__methods_[] = {
      DECLARE_METHOD(t_Set, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Set, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Set, of_, METH_VARARGS),
      DECLARE_METHOD(t_Set, add, METH_VARARGS),
      DECLARE_METHOD(t_Set, addAll, METH_VARARGS),
      DECLARE_METHOD(t_Set, clear, METH_VARARGS),
      DECLARE_METHOD(t_Set, contains, METH_VARARGS),
      DECLARE_METHOD(t_Set, containsAll, METH_VARARGS),
      DECLARE_METHOD(t_Set, copyOf, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Set, equals, METH_VARARGS),
      DECLARE_METHOD(t_Set, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Set, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_Set, iterator, METH_VARARGS),
      DECLARE_METHOD(t_Set, of, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Set, remove, METH_VARARGS),
      DECLARE_METHOD(t_Set, removeAll, METH_VARARGS),
      DECLARE_METHOD(t_Set, retainAll, METH_VARARGS),
      DECLARE_METHOD(t_Set, size, METH_VARARGS),
      DECLARE_METHOD(t_Set, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_Set, toArray, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Set)[] = {
      { Py_tp_methods, t_Set__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Set__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_Set *)) get_generic_iterator< t_Set >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Set)[] = {
      &PY_TYPE_DEF(::java::util::Collection),
      NULL
    };

    DEFINE_TYPE(Set, t_Set, Set);
    PyObject *t_Set::wrap_Object(const Set& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Set::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Set *self = (t_Set *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Set::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Set::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Set *self = (t_Set *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Set::install(PyObject *module)
    {
      installType(&PY_TYPE(Set), &PY_TYPE_DEF(Set), module, "Set", 0);
    }

    void t_Set::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Set), "class_", make_descriptor(Set::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Set), "wrapfn_", make_descriptor(t_Set::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Set), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Set_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Set::initializeClass, 1)))
        return NULL;
      return t_Set::wrap_Object(Set(((t_Set *) arg)->object.this$));
    }
    static PyObject *t_Set_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Set::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Set_of_(t_Set *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Set_add(t_Set *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_Set_addAll(t_Set *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_Set_clear(t_Set *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_Set_contains(t_Set *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_Set_containsAll(t_Set *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.containsAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "containsAll", args, 2);
    }

    static PyObject *t_Set_copyOf(PyTypeObject *type, PyObject *arg)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      Set result((jobject) NULL);

      if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = ::java::util::Set::copyOf(a0));
        return t_Set::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "copyOf", arg);
      return NULL;
    }

    static PyObject *t_Set_equals(t_Set *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Set_hashCode(t_Set *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Set_isEmpty(t_Set *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_Set_iterator(t_Set *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_Set_of(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          Set result((jobject) NULL);
          OBJ_CALL(result = ::java::util::Set::of());
          return t_Set::wrap_Object(result);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0));
            return t_Set::wrap_Object(result);
          }
        }
        {
          ::java::lang::Object a0((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "oo", &a0, &a1))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 3:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "ooo", &a0, &a1, &a2))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "oooo", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 5:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "ooooo", &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 6:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "oooooo", &a0, &a1, &a2, &a3, &a4, &a5))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4, a5));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 7:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "ooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4, a5, a6));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 8:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "oooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4, a5, a6, a7));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 9:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "ooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4, a5, a6, a7, a8));
            return t_Set::wrap_Object(result);
          }
        }
        break;
       case 10:
        {
          ::java::lang::Object a0((jobject) NULL);
          ::java::lang::Object a1((jobject) NULL);
          ::java::lang::Object a2((jobject) NULL);
          ::java::lang::Object a3((jobject) NULL);
          ::java::lang::Object a4((jobject) NULL);
          ::java::lang::Object a5((jobject) NULL);
          ::java::lang::Object a6((jobject) NULL);
          ::java::lang::Object a7((jobject) NULL);
          ::java::lang::Object a8((jobject) NULL);
          ::java::lang::Object a9((jobject) NULL);
          Set result((jobject) NULL);

          if (!parseArgs(args, "oooooooooo", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
          {
            OBJ_CALL(result = ::java::util::Set::of(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
            return t_Set::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "of", args);
      return NULL;
    }

    static PyObject *t_Set_remove(t_Set *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_Set_removeAll(t_Set *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "removeAll", args, 2);
    }

    static PyObject *t_Set_retainAll(t_Set *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "retainAll", args, 2);
    }

    static PyObject *t_Set_size(t_Set *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_Set_spliterator(t_Set *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_Set_toArray(t_Set *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.toArray());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = self->object.toArray(a0));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      return callSuper(PY_TYPE(Set), (PyObject *) self, "toArray", args, 2);
    }
    static PyObject *t_Set_get__parameters_(t_Set *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_Set_get__empty(t_Set *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/lang/Long.h"
#include "java/lang/CharSequence.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/Long.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Long::class$ = NULL;
    jmethodID *Long::mids$ = NULL;
    bool Long::live$ = false;
    jint Long::BYTES = (jint) 0;
    jlong Long::MAX_VALUE = (jlong) 0;
    jlong Long::MIN_VALUE = (jlong) 0;
    jint Long::SIZE = (jint) 0;
    ::java::lang::Class *Long::TYPE = NULL;

    jclass Long::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Long");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_f5bbab7e97879358] = env->getMethodID(cls, "<init>", "(J)V");
        mids$[mid_bitCount_e9d351dcffb1a696] = env->getStaticMethodID(cls, "bitCount", "(J)I");
        mids$[mid_byteValue_5bc9c54e4a4e6e3f] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_2af9b60fca5827c1] = env->getStaticMethodID(cls, "compare", "(JJ)I");
        mids$[mid_compareTo_f2e241e4dbd7de0d] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Long;)I");
        mids$[mid_compareUnsigned_2af9b60fca5827c1] = env->getStaticMethodID(cls, "compareUnsigned", "(JJ)I");
        mids$[mid_decode_78aed590324603c7] = env->getStaticMethodID(cls, "decode", "(Ljava/lang/String;)Ljava/lang/Long;");
        mids$[mid_divideUnsigned_7912418dc9bc44e3] = env->getStaticMethodID(cls, "divideUnsigned", "(JJ)J");
        mids$[mid_doubleValue_9981f74b2d109da6] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatValue_0e3b995f823d65ff] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_getLong_78aed590324603c7] = env->getStaticMethodID(cls, "getLong", "(Ljava/lang/String;)Ljava/lang/Long;");
        mids$[mid_getLong_8656493c79feeba1] = env->getStaticMethodID(cls, "getLong", "(Ljava/lang/String;Ljava/lang/Long;)Ljava/lang/Long;");
        mids$[mid_getLong_7863c3e0f2de4aa4] = env->getStaticMethodID(cls, "getLong", "(Ljava/lang/String;J)Ljava/lang/Long;");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_e9d351dcffb1a696] = env->getStaticMethodID(cls, "hashCode", "(J)I");
        mids$[mid_highestOneBit_1eaf6eb0a3f3163f] = env->getStaticMethodID(cls, "highestOneBit", "(J)J");
        mids$[mid_intValue_d6ab429752e7c267] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_longValue_42c72b98e3c2e08a] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_lowestOneBit_1eaf6eb0a3f3163f] = env->getStaticMethodID(cls, "lowestOneBit", "(J)J");
        mids$[mid_max_7912418dc9bc44e3] = env->getStaticMethodID(cls, "max", "(JJ)J");
        mids$[mid_min_7912418dc9bc44e3] = env->getStaticMethodID(cls, "min", "(JJ)J");
        mids$[mid_numberOfLeadingZeros_e9d351dcffb1a696] = env->getStaticMethodID(cls, "numberOfLeadingZeros", "(J)I");
        mids$[mid_numberOfTrailingZeros_e9d351dcffb1a696] = env->getStaticMethodID(cls, "numberOfTrailingZeros", "(J)I");
        mids$[mid_parseLong_bd9949f7787fa510] = env->getStaticMethodID(cls, "parseLong", "(Ljava/lang/String;)J");
        mids$[mid_parseLong_2968fe53e241ed68] = env->getStaticMethodID(cls, "parseLong", "(Ljava/lang/String;I)J");
        mids$[mid_parseLong_1a09d72cf99eec11] = env->getStaticMethodID(cls, "parseLong", "(Ljava/lang/CharSequence;III)J");
        mids$[mid_parseUnsignedLong_bd9949f7787fa510] = env->getStaticMethodID(cls, "parseUnsignedLong", "(Ljava/lang/String;)J");
        mids$[mid_parseUnsignedLong_2968fe53e241ed68] = env->getStaticMethodID(cls, "parseUnsignedLong", "(Ljava/lang/String;I)J");
        mids$[mid_parseUnsignedLong_1a09d72cf99eec11] = env->getStaticMethodID(cls, "parseUnsignedLong", "(Ljava/lang/CharSequence;III)J");
        mids$[mid_remainderUnsigned_7912418dc9bc44e3] = env->getStaticMethodID(cls, "remainderUnsigned", "(JJ)J");
        mids$[mid_reverse_1eaf6eb0a3f3163f] = env->getStaticMethodID(cls, "reverse", "(J)J");
        mids$[mid_reverseBytes_1eaf6eb0a3f3163f] = env->getStaticMethodID(cls, "reverseBytes", "(J)J");
        mids$[mid_rotateLeft_e7e8a55529a0db0c] = env->getStaticMethodID(cls, "rotateLeft", "(JI)J");
        mids$[mid_rotateRight_e7e8a55529a0db0c] = env->getStaticMethodID(cls, "rotateRight", "(JI)J");
        mids$[mid_shortValue_5067fec74ceda473] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_signum_e9d351dcffb1a696] = env->getStaticMethodID(cls, "signum", "(J)I");
        mids$[mid_sum_7912418dc9bc44e3] = env->getStaticMethodID(cls, "sum", "(JJ)J");
        mids$[mid_toBinaryString_7fdd1777495672ef] = env->getStaticMethodID(cls, "toBinaryString", "(J)Ljava/lang/String;");
        mids$[mid_toHexString_7fdd1777495672ef] = env->getStaticMethodID(cls, "toHexString", "(J)Ljava/lang/String;");
        mids$[mid_toOctalString_7fdd1777495672ef] = env->getStaticMethodID(cls, "toOctalString", "(J)Ljava/lang/String;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_7fdd1777495672ef] = env->getStaticMethodID(cls, "toString", "(J)Ljava/lang/String;");
        mids$[mid_toString_123bb49509da7a54] = env->getStaticMethodID(cls, "toString", "(JI)Ljava/lang/String;");
        mids$[mid_toUnsignedString_7fdd1777495672ef] = env->getStaticMethodID(cls, "toUnsignedString", "(J)Ljava/lang/String;");
        mids$[mid_toUnsignedString_123bb49509da7a54] = env->getStaticMethodID(cls, "toUnsignedString", "(JI)Ljava/lang/String;");
        mids$[mid_valueOf_78aed590324603c7] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Long;");
        mids$[mid_valueOf_9a3d0ba82664bd00] = env->getStaticMethodID(cls, "valueOf", "(J)Ljava/lang/Long;");
        mids$[mid_valueOf_2c65ad6e7a85515b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;I)Ljava/lang/Long;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_VALUE = env->getStaticLongField(cls, "MAX_VALUE");
        MIN_VALUE = env->getStaticLongField(cls, "MIN_VALUE");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Long::Long(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    Long::Long(jlong a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_f5bbab7e97879358, a0)) {}

    jint Long::bitCount(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_bitCount_e9d351dcffb1a696], a0);
    }

    jbyte Long::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_5bc9c54e4a4e6e3f]);
    }

    jint Long::compare(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_2af9b60fca5827c1], a0, a1);
    }

    jint Long::compareTo(const Long & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_f2e241e4dbd7de0d], a0.this$);
    }

    jint Long::compareUnsigned(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compareUnsigned_2af9b60fca5827c1], a0, a1);
    }

    Long Long::decode(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_decode_78aed590324603c7], a0.this$));
    }

    jlong Long::divideUnsigned(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_divideUnsigned_7912418dc9bc44e3], a0, a1);
    }

    jdouble Long::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_9981f74b2d109da6]);
    }

    jboolean Long::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    jfloat Long::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_0e3b995f823d65ff]);
    }

    Long Long::getLong(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_getLong_78aed590324603c7], a0.this$));
    }

    Long Long::getLong(const ::java::lang::String & a0, const Long & a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_getLong_8656493c79feeba1], a0.this$, a1.this$));
    }

    Long Long::getLong(const ::java::lang::String & a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_getLong_7863c3e0f2de4aa4], a0.this$, a1));
    }

    jint Long::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jint Long::hashCode(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_e9d351dcffb1a696], a0);
    }

    jlong Long::highestOneBit(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_highestOneBit_1eaf6eb0a3f3163f], a0);
    }

    jint Long::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_d6ab429752e7c267]);
    }

    jlong Long::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_42c72b98e3c2e08a]);
    }

    jlong Long::lowestOneBit(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_lowestOneBit_1eaf6eb0a3f3163f], a0);
    }

    jlong Long::max$(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_max_7912418dc9bc44e3], a0, a1);
    }

    jlong Long::min$(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_min_7912418dc9bc44e3], a0, a1);
    }

    jint Long::numberOfLeadingZeros(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_numberOfLeadingZeros_e9d351dcffb1a696], a0);
    }

    jint Long::numberOfTrailingZeros(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_numberOfTrailingZeros_e9d351dcffb1a696], a0);
    }

    jlong Long::parseLong(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseLong_bd9949f7787fa510], a0.this$);
    }

    jlong Long::parseLong(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseLong_2968fe53e241ed68], a0.this$, a1);
    }

    jlong Long::parseLong(const ::java::lang::CharSequence & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseLong_1a09d72cf99eec11], a0.this$, a1, a2, a3);
    }

    jlong Long::parseUnsignedLong(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseUnsignedLong_bd9949f7787fa510], a0.this$);
    }

    jlong Long::parseUnsignedLong(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseUnsignedLong_2968fe53e241ed68], a0.this$, a1);
    }

    jlong Long::parseUnsignedLong(const ::java::lang::CharSequence & a0, jint a1, jint a2, jint a3)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_parseUnsignedLong_1a09d72cf99eec11], a0.this$, a1, a2, a3);
    }

    jlong Long::remainderUnsigned(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_remainderUnsigned_7912418dc9bc44e3], a0, a1);
    }

    jlong Long::reverse(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_reverse_1eaf6eb0a3f3163f], a0);
    }

    jlong Long::reverseBytes(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_reverseBytes_1eaf6eb0a3f3163f], a0);
    }

    jlong Long::rotateLeft(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_rotateLeft_e7e8a55529a0db0c], a0, a1);
    }

    jlong Long::rotateRight(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_rotateRight_e7e8a55529a0db0c], a0, a1);
    }

    jshort Long::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_5067fec74ceda473]);
    }

    jint Long::signum(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_signum_e9d351dcffb1a696], a0);
    }

    jlong Long::sum(jlong a0, jlong a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticLongMethod(cls, mids$[mid_sum_7912418dc9bc44e3], a0, a1);
    }

    ::java::lang::String Long::toBinaryString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toBinaryString_7fdd1777495672ef], a0));
    }

    ::java::lang::String Long::toHexString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toHexString_7fdd1777495672ef], a0));
    }

    ::java::lang::String Long::toOctalString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toOctalString_7fdd1777495672ef], a0));
    }

    ::java::lang::String Long::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }

    ::java::lang::String Long::toString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_7fdd1777495672ef], a0));
    }

    ::java::lang::String Long::toString(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_123bb49509da7a54], a0, a1));
    }

    ::java::lang::String Long::toUnsignedString(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toUnsignedString_7fdd1777495672ef], a0));
    }

    ::java::lang::String Long::toUnsignedString(jlong a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toUnsignedString_123bb49509da7a54], a0, a1));
    }

    Long Long::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_valueOf_78aed590324603c7], a0.this$));
    }

    Long Long::valueOf(jlong a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9a3d0ba82664bd00], a0));
    }

    Long Long::valueOf(const ::java::lang::String & a0, jint a1)
    {
      jclass cls = env->getClass(initializeClass);
      return Long(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2c65ad6e7a85515b], a0.this$, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Long_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Long_init_(t_Long *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Long_bitCount(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_byteValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_compareTo(t_Long *self, PyObject *arg);
    static PyObject *t_Long_compareUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_decode(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_divideUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_doubleValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_equals(t_Long *self, PyObject *args);
    static PyObject *t_Long_floatValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_getLong(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_hashCode(t_Long *self, PyObject *args);
    static PyObject *t_Long_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_highestOneBit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_intValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_longValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_lowestOneBit(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_numberOfLeadingZeros(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_numberOfTrailingZeros(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_parseLong(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_parseUnsignedLong(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_remainderUnsigned(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_reverse(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_reverseBytes(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_rotateLeft(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_rotateRight(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_shortValue(t_Long *self, PyObject *args);
    static PyObject *t_Long_signum(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_sum(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_toBinaryString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_toHexString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_toOctalString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Long_toString(t_Long *self, PyObject *args);
    static PyObject *t_Long_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_toUnsignedString(PyTypeObject *type, PyObject *args);
    static PyObject *t_Long_valueOf(PyTypeObject *type, PyObject *args);

    static PyMethodDef t_Long__methods_[] = {
      DECLARE_METHOD(t_Long, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, bitCount, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, compareTo, METH_O),
      DECLARE_METHOD(t_Long, compareUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, decode, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, divideUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, equals, METH_VARARGS),
      DECLARE_METHOD(t_Long, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, getLong, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Long, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, highestOneBit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, lowestOneBit, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, numberOfLeadingZeros, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, numberOfTrailingZeros, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, parseLong, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, parseUnsignedLong, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, remainderUnsigned, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, reverse, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, reverseBytes, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, rotateLeft, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, rotateRight, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Long, signum, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, sum, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, toBinaryString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, toHexString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, toOctalString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Long, toString, METH_VARARGS),
      DECLARE_METHOD(t_Long, toString_, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, toUnsignedString, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Long, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Long)[] = {
      { Py_tp_methods, t_Long__methods_ },
      { Py_tp_init, (void *) t_Long_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Long)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Long, t_Long, Long);

    void t_Long::install(PyObject *module)
    {
      installType(&PY_TYPE(Long), &PY_TYPE_DEF(Long), module, "Long", 0);
    }

    void t_Long::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "class_", make_descriptor(Long::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "wrapfn_", make_descriptor(unboxLong));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "boxfn_", make_descriptor(boxLong));
      env->getClass(Long::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "BYTES", make_descriptor(Long::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "MAX_VALUE", make_descriptor(Long::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "MIN_VALUE", make_descriptor(Long::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "SIZE", make_descriptor(Long::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Long), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Long::TYPE)));
    }

    static PyObject *t_Long_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Long::initializeClass, 1)))
        return NULL;
      return t_Long::wrap_Object(Long(((t_Long *) arg)->object.this$));
    }
    static PyObject *t_Long_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Long::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Long_init_(t_Long *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Long object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Long(a0));
            self->object = object;
            break;
          }
        }
        {
          jlong a0;
          Long object((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            INT_CALL(object = Long(a0));
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

    static PyObject *t_Long_bitCount(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jint result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::bitCount(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "bitCount", arg);
      return NULL;
    }

    static PyObject *t_Long_byteValue(t_Long *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Long_compare(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jint result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Long_compareTo(t_Long *self, PyObject *arg)
    {
      Long a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Long), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Long_compareUnsigned(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jint result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::compareUnsigned(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compareUnsigned", args);
      return NULL;
    }

    static PyObject *t_Long_decode(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      Long result((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::decode(a0));
        return t_Long::wrap_Object(result);
      }

      PyErr_SetArgsError(type, "decode", arg);
      return NULL;
    }

    static PyObject *t_Long_divideUnsigned(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::divideUnsigned(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "divideUnsigned", args);
      return NULL;
    }

    static PyObject *t_Long_doubleValue(t_Long *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Long_equals(t_Long *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Long_floatValue(t_Long *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Long_getLong(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Long result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::getLong(a0));
            return t_Long::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          Long a1((jobject) NULL);
          Long result((jobject) NULL);

          if (!parseArgs(args, "sO", ::java::lang::PY_TYPE(Long), &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::getLong(a0, a1));
            return t_Long::wrap_Object(result);
          }
        }
        {
          ::java::lang::String a0((jobject) NULL);
          jlong a1;
          Long result((jobject) NULL);

          if (!parseArgs(args, "sJ", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::getLong(a0, a1));
            return t_Long::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getLong", args);
      return NULL;
    }

    static PyObject *t_Long_hashCode(t_Long *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Long_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jint result;

      if (!parseArgs(args, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Long_highestOneBit(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::highestOneBit(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "highestOneBit", arg);
      return NULL;
    }

    static PyObject *t_Long_intValue(t_Long *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Long_longValue(t_Long *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Long_lowestOneBit(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::lowestOneBit(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "lowestOneBit", arg);
      return NULL;
    }

    static PyObject *t_Long_max(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::max$(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Long_min(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::min$(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Long_numberOfLeadingZeros(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jint result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::numberOfLeadingZeros(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "numberOfLeadingZeros", arg);
      return NULL;
    }

    static PyObject *t_Long_numberOfTrailingZeros(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jint result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::numberOfTrailingZeros(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "numberOfTrailingZeros", arg);
      return NULL;
    }

    static PyObject *t_Long_parseLong(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jlong result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::parseLong(a0));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jlong result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::parseLong(a0, a1));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jlong result;

          if (!parseArgs(args, "OIII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::lang::Long::parseLong(a0, a1, a2, a3));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseLong", args);
      return NULL;
    }

    static PyObject *t_Long_parseUnsignedLong(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          jlong result;

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::parseUnsignedLong(a0));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          jlong result;

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::parseUnsignedLong(a0, a1));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
        break;
       case 4:
        {
          ::java::lang::CharSequence a0((jobject) NULL);
          jint a1;
          jint a2;
          jint a3;
          jlong result;

          if (!parseArgs(args, "OIII", ::java::lang::PY_TYPE(CharSequence), &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = ::java::lang::Long::parseUnsignedLong(a0, a1, a2, a3));
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
        }
      }

      PyErr_SetArgsError(type, "parseUnsignedLong", args);
      return NULL;
    }

    static PyObject *t_Long_remainderUnsigned(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::remainderUnsigned(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "remainderUnsigned", args);
      return NULL;
    }

    static PyObject *t_Long_reverse(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::reverse(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "reverse", arg);
      return NULL;
    }

    static PyObject *t_Long_reverseBytes(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jlong result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::reverseBytes(a0));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "reverseBytes", arg);
      return NULL;
    }

    static PyObject *t_Long_rotateLeft(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jint a1;
      jlong result;

      if (!parseArgs(args, "JI", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::rotateLeft(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "rotateLeft", args);
      return NULL;
    }

    static PyObject *t_Long_rotateRight(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jint a1;
      jlong result;

      if (!parseArgs(args, "JI", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::rotateRight(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "rotateRight", args);
      return NULL;
    }

    static PyObject *t_Long_shortValue(t_Long *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Long_signum(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      jint result;

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::signum(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "signum", arg);
      return NULL;
    }

    static PyObject *t_Long_sum(PyTypeObject *type, PyObject *args)
    {
      jlong a0;
      jlong a1;
      jlong result;

      if (!parseArgs(args, "JJ", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Long::sum(a0, a1));
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      PyErr_SetArgsError(type, "sum", args);
      return NULL;
    }

    static PyObject *t_Long_toBinaryString(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::toBinaryString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toBinaryString", arg);
      return NULL;
    }

    static PyObject *t_Long_toHexString(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::toHexString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toHexString", arg);
      return NULL;
    }

    static PyObject *t_Long_toOctalString(PyTypeObject *type, PyObject *arg)
    {
      jlong a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "J", &a0))
      {
        OBJ_CALL(result = ::java::lang::Long::toOctalString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toOctalString", arg);
      return NULL;
    }

    static PyObject *t_Long_toString(t_Long *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Long), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Long_toString_(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jlong a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::toString(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jlong a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "JI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::toString(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Long_toUnsignedString(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jlong a0;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::toUnsignedString(a0));
            return j2p(result);
          }
        }
        break;
       case 2:
        {
          jlong a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "JI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::toUnsignedString(a0, a1));
            return j2p(result);
          }
        }
      }

      PyErr_SetArgsError(type, "toUnsignedString", args);
      return NULL;
    }

    static PyObject *t_Long_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Long result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::valueOf(a0));
            return t_Long::wrap_Object(result);
          }
        }
        {
          jlong a0;
          Long result((jobject) NULL);

          if (!parseArgs(args, "J", &a0))
          {
            OBJ_CALL(result = ::java::lang::Long::valueOf(a0));
            return t_Long::wrap_Object(result);
          }
        }
        break;
       case 2:
        {
          ::java::lang::String a0((jobject) NULL);
          jint a1;
          Long result((jobject) NULL);

          if (!parseArgs(args, "sI", &a0, &a1))
          {
            OBJ_CALL(result = ::java::lang::Long::valueOf(a0, a1));
            return t_Long::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer.h"
#include "org/orekit/files/ccsds/ndm/cdm/Maneuvrable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$ManeuvrableConsumer::class$ = NULL;
            jmethodID *ParseToken$ManeuvrableConsumer::mids$ = NULL;
            bool ParseToken$ManeuvrableConsumer::live$ = false;

            jclass ParseToken$ManeuvrableConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$ManeuvrableConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_62776a7b9220fcf1] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/ndm/cdm/Maneuvrable;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$ManeuvrableConsumer::accept(const ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_62776a7b9220fcf1], a0.this$);
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
            static PyObject *t_ParseToken$ManeuvrableConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$ManeuvrableConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$ManeuvrableConsumer_accept(t_ParseToken$ManeuvrableConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$ManeuvrableConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$ManeuvrableConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$ManeuvrableConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$ManeuvrableConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$ManeuvrableConsumer)[] = {
              { Py_tp_methods, t_ParseToken$ManeuvrableConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$ManeuvrableConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$ManeuvrableConsumer, t_ParseToken$ManeuvrableConsumer, ParseToken$ManeuvrableConsumer);

            void t_ParseToken$ManeuvrableConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$ManeuvrableConsumer), &PY_TYPE_DEF(ParseToken$ManeuvrableConsumer), module, "ParseToken$ManeuvrableConsumer", 0);
            }

            void t_ParseToken$ManeuvrableConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$ManeuvrableConsumer), "class_", make_descriptor(ParseToken$ManeuvrableConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$ManeuvrableConsumer), "wrapfn_", make_descriptor(t_ParseToken$ManeuvrableConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$ManeuvrableConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$ManeuvrableConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$ManeuvrableConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$ManeuvrableConsumer::wrap_Object(ParseToken$ManeuvrableConsumer(((t_ParseToken$ManeuvrableConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$ManeuvrableConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$ManeuvrableConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$ManeuvrableConsumer_accept(t_ParseToken$ManeuvrableConsumer *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::files::ccsds::ndm::cdm::Maneuvrable::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Maneuvrable::parameters_))
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
#include "org/orekit/estimation/measurements/generation/PythonAbstractScheduler.h"
#include "java/lang/Throwable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DatesSelector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *PythonAbstractScheduler::class$ = NULL;
          jmethodID *PythonAbstractScheduler::mids$ = NULL;
          bool PythonAbstractScheduler::live$ = false;

          jclass PythonAbstractScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/PythonAbstractScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3ea802fb076b80a8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;Lorg/orekit/time/DatesSelector;)V");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_measurementIsFeasible_b16e79ba1b2830a1] = env->getMethodID(cls, "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractScheduler::PythonAbstractScheduler(const ::org::orekit::estimation::measurements::generation::MeasurementBuilder & a0, const ::org::orekit::time::DatesSelector & a1) : ::org::orekit::estimation::measurements::generation::AbstractScheduler(env->newObject(initializeClass, &mids$, mid_init$_3ea802fb076b80a8, a0.this$, a1.this$)) {}

          void PythonAbstractScheduler::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonAbstractScheduler::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonAbstractScheduler::pythonExtension(jlong a0) const
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
        namespace generation {
          static PyObject *t_PythonAbstractScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractScheduler_of_(t_PythonAbstractScheduler *self, PyObject *args);
          static int t_PythonAbstractScheduler_init_(t_PythonAbstractScheduler *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractScheduler_finalize(t_PythonAbstractScheduler *self);
          static PyObject *t_PythonAbstractScheduler_pythonExtension(t_PythonAbstractScheduler *self, PyObject *args);
          static jboolean JNICALL t_PythonAbstractScheduler_measurementIsFeasible0(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonAbstractScheduler_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractScheduler_get__self(t_PythonAbstractScheduler *self, void *data);
          static PyObject *t_PythonAbstractScheduler_get__parameters_(t_PythonAbstractScheduler *self, void *data);
          static PyGetSetDef t_PythonAbstractScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractScheduler, self),
            DECLARE_GET_FIELD(t_PythonAbstractScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractScheduler__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonAbstractScheduler, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractScheduler, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractScheduler)[] = {
            { Py_tp_methods, t_PythonAbstractScheduler__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractScheduler_init_ },
            { Py_tp_getset, t_PythonAbstractScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractScheduler)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::generation::AbstractScheduler),
            NULL
          };

          DEFINE_TYPE(PythonAbstractScheduler, t_PythonAbstractScheduler, PythonAbstractScheduler);
          PyObject *t_PythonAbstractScheduler::wrap_Object(const PythonAbstractScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractScheduler *self = (t_PythonAbstractScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonAbstractScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonAbstractScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonAbstractScheduler *self = (t_PythonAbstractScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonAbstractScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractScheduler), &PY_TYPE_DEF(PythonAbstractScheduler), module, "PythonAbstractScheduler", 1);
          }

          void t_PythonAbstractScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractScheduler), "class_", make_descriptor(PythonAbstractScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractScheduler), "wrapfn_", make_descriptor(t_PythonAbstractScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractScheduler), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractScheduler::initializeClass);
            JNINativeMethod methods[] = {
              { "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z", (void *) t_PythonAbstractScheduler_measurementIsFeasible0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractScheduler_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractScheduler::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractScheduler::wrap_Object(PythonAbstractScheduler(((t_PythonAbstractScheduler *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonAbstractScheduler_of_(t_PythonAbstractScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonAbstractScheduler_init_(t_PythonAbstractScheduler *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::DatesSelector a1((jobject) NULL);
            PythonAbstractScheduler object((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::generation::MeasurementBuilder::initializeClass, ::org::orekit::time::DatesSelector::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::parameters_, &a1))
            {
              INT_CALL(object = PythonAbstractScheduler(a0, a1));
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

          static PyObject *t_PythonAbstractScheduler_finalize(t_PythonAbstractScheduler *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractScheduler_pythonExtension(t_PythonAbstractScheduler *self, PyObject *args)
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

          static jboolean JNICALL t_PythonAbstractScheduler_measurementIsFeasible0(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractScheduler::mids$[PythonAbstractScheduler::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jboolean value;
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "measurementIsFeasible", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "Z", &value))
            {
              throwTypeError("measurementIsFeasible", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jboolean) 0;
          }

          static void JNICALL t_PythonAbstractScheduler_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractScheduler::mids$[PythonAbstractScheduler::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractScheduler::mids$[PythonAbstractScheduler::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractScheduler_get__self(t_PythonAbstractScheduler *self, void *data)
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
          static PyObject *t_PythonAbstractScheduler_get__parameters_(t_PythonAbstractScheduler *self, void *data)
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
#include "org/orekit/files/ilrs/CRDHeader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRDHeader$RangeType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDHeader::class$ = NULL;
        jmethodID *CRDHeader::mids$ = NULL;
        bool CRDHeader::live$ = false;

        jclass CRDHeader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDHeader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getDataReleaseFlag_d6ab429752e7c267] = env->getMethodID(cls, "getDataReleaseFlag", "()I");
            mids$[mid_getDataType_d6ab429752e7c267] = env->getMethodID(cls, "getDataType", "()I");
            mids$[mid_getDateAndTime_d2c8eb4129821f0e] = env->getMethodID(cls, "getDateAndTime", "()Ljava/lang/String;");
            mids$[mid_getEpochIdentifier_d6ab429752e7c267] = env->getMethodID(cls, "getEpochIdentifier", "()I");
            mids$[mid_getH1CrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "getH1CrdString", "()Ljava/lang/String;");
            mids$[mid_getH2CrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "getH2CrdString", "()Ljava/lang/String;");
            mids$[mid_getH3CrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "getH3CrdString", "()Ljava/lang/String;");
            mids$[mid_getH4CrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "getH4CrdString", "()Ljava/lang/String;");
            mids$[mid_getH5CrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "getH5CrdString", "()Ljava/lang/String;");
            mids$[mid_getPredictionProvider_d2c8eb4129821f0e] = env->getMethodID(cls, "getPredictionProvider", "()Ljava/lang/String;");
            mids$[mid_getPredictionType_d6ab429752e7c267] = env->getMethodID(cls, "getPredictionType", "()I");
            mids$[mid_getQualityIndicator_d6ab429752e7c267] = env->getMethodID(cls, "getQualityIndicator", "()I");
            mids$[mid_getRangeType_c43c7378c09765af] = env->getMethodID(cls, "getRangeType", "()Lorg/orekit/files/ilrs/CRDHeader$RangeType;");
            mids$[mid_getSpacecraftEpochTimeScale_d6ab429752e7c267] = env->getMethodID(cls, "getSpacecraftEpochTimeScale", "()I");
            mids$[mid_getStationName_d2c8eb4129821f0e] = env->getMethodID(cls, "getStationName", "()Ljava/lang/String;");
            mids$[mid_getStationNetword_d2c8eb4129821f0e] = env->getMethodID(cls, "getStationNetword", "()Ljava/lang/String;");
            mids$[mid_getSystemIdentifier_d6ab429752e7c267] = env->getMethodID(cls, "getSystemIdentifier", "()I");
            mids$[mid_getSystemNumber_d6ab429752e7c267] = env->getMethodID(cls, "getSystemNumber", "()I");
            mids$[mid_getSystemOccupancy_d6ab429752e7c267] = env->getMethodID(cls, "getSystemOccupancy", "()I");
            mids$[mid_getYearOfCentury_d6ab429752e7c267] = env->getMethodID(cls, "getYearOfCentury", "()I");
            mids$[mid_isCenterOfMassCorrectionApplied_eee3de00fe971136] = env->getMethodID(cls, "isCenterOfMassCorrectionApplied", "()Z");
            mids$[mid_isReceiveAmplitudeCorrectionApplied_eee3de00fe971136] = env->getMethodID(cls, "isReceiveAmplitudeCorrectionApplied", "()Z");
            mids$[mid_isStationSystemDelayApplied_eee3de00fe971136] = env->getMethodID(cls, "isStationSystemDelayApplied", "()Z");
            mids$[mid_isTransponderDelayApplied_eee3de00fe971136] = env->getMethodID(cls, "isTransponderDelayApplied", "()Z");
            mids$[mid_isTroposphericRefractionApplied_eee3de00fe971136] = env->getMethodID(cls, "isTroposphericRefractionApplied", "()Z");
            mids$[mid_setDataReleaseFlag_8fd427ab23829bf5] = env->getMethodID(cls, "setDataReleaseFlag", "(I)V");
            mids$[mid_setDataType_8fd427ab23829bf5] = env->getMethodID(cls, "setDataType", "(I)V");
            mids$[mid_setDateAndTime_105e1eadb709d9ac] = env->getMethodID(cls, "setDateAndTime", "(Ljava/lang/String;)V");
            mids$[mid_setEpochIdentifier_8fd427ab23829bf5] = env->getMethodID(cls, "setEpochIdentifier", "(I)V");
            mids$[mid_setIsCenterOfMassCorrectionApplied_b35db77cae58639e] = env->getMethodID(cls, "setIsCenterOfMassCorrectionApplied", "(Z)V");
            mids$[mid_setIsReceiveAmplitudeCorrectionApplied_b35db77cae58639e] = env->getMethodID(cls, "setIsReceiveAmplitudeCorrectionApplied", "(Z)V");
            mids$[mid_setIsStationSystemDelayApplied_b35db77cae58639e] = env->getMethodID(cls, "setIsStationSystemDelayApplied", "(Z)V");
            mids$[mid_setIsTransponderDelayApplied_b35db77cae58639e] = env->getMethodID(cls, "setIsTransponderDelayApplied", "(Z)V");
            mids$[mid_setIsTroposphericRefractionApplied_b35db77cae58639e] = env->getMethodID(cls, "setIsTroposphericRefractionApplied", "(Z)V");
            mids$[mid_setPredictionProvider_105e1eadb709d9ac] = env->getMethodID(cls, "setPredictionProvider", "(Ljava/lang/String;)V");
            mids$[mid_setPredictionType_8fd427ab23829bf5] = env->getMethodID(cls, "setPredictionType", "(I)V");
            mids$[mid_setQualityIndicator_8fd427ab23829bf5] = env->getMethodID(cls, "setQualityIndicator", "(I)V");
            mids$[mid_setRangeType_8fd427ab23829bf5] = env->getMethodID(cls, "setRangeType", "(I)V");
            mids$[mid_setSpacecraftEpochTimeScale_8fd427ab23829bf5] = env->getMethodID(cls, "setSpacecraftEpochTimeScale", "(I)V");
            mids$[mid_setStationName_105e1eadb709d9ac] = env->getMethodID(cls, "setStationName", "(Ljava/lang/String;)V");
            mids$[mid_setStationNetword_105e1eadb709d9ac] = env->getMethodID(cls, "setStationNetword", "(Ljava/lang/String;)V");
            mids$[mid_setSystemIdentifier_8fd427ab23829bf5] = env->getMethodID(cls, "setSystemIdentifier", "(I)V");
            mids$[mid_setSystemNumber_8fd427ab23829bf5] = env->getMethodID(cls, "setSystemNumber", "(I)V");
            mids$[mid_setSystemOccupancy_8fd427ab23829bf5] = env->getMethodID(cls, "setSystemOccupancy", "(I)V");
            mids$[mid_setYearOfCentury_8fd427ab23829bf5] = env->getMethodID(cls, "setYearOfCentury", "(I)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDHeader::CRDHeader() : ::org::orekit::files::ilrs::ILRSHeader(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jint CRDHeader::getDataReleaseFlag() const
        {
          return env->callIntMethod(this$, mids$[mid_getDataReleaseFlag_d6ab429752e7c267]);
        }

        jint CRDHeader::getDataType() const
        {
          return env->callIntMethod(this$, mids$[mid_getDataType_d6ab429752e7c267]);
        }

        ::java::lang::String CRDHeader::getDateAndTime() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDateAndTime_d2c8eb4129821f0e]));
        }

        jint CRDHeader::getEpochIdentifier() const
        {
          return env->callIntMethod(this$, mids$[mid_getEpochIdentifier_d6ab429752e7c267]);
        }

        ::java::lang::String CRDHeader::getH1CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH1CrdString_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDHeader::getH2CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH2CrdString_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDHeader::getH3CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH3CrdString_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDHeader::getH4CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH4CrdString_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDHeader::getH5CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH5CrdString_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDHeader::getPredictionProvider() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPredictionProvider_d2c8eb4129821f0e]));
        }

        jint CRDHeader::getPredictionType() const
        {
          return env->callIntMethod(this$, mids$[mid_getPredictionType_d6ab429752e7c267]);
        }

        jint CRDHeader::getQualityIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getQualityIndicator_d6ab429752e7c267]);
        }

        ::org::orekit::files::ilrs::CRDHeader$RangeType CRDHeader::getRangeType() const
        {
          return ::org::orekit::files::ilrs::CRDHeader$RangeType(env->callObjectMethod(this$, mids$[mid_getRangeType_c43c7378c09765af]));
        }

        jint CRDHeader::getSpacecraftEpochTimeScale() const
        {
          return env->callIntMethod(this$, mids$[mid_getSpacecraftEpochTimeScale_d6ab429752e7c267]);
        }

        ::java::lang::String CRDHeader::getStationName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationName_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRDHeader::getStationNetword() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationNetword_d2c8eb4129821f0e]));
        }

        jint CRDHeader::getSystemIdentifier() const
        {
          return env->callIntMethod(this$, mids$[mid_getSystemIdentifier_d6ab429752e7c267]);
        }

        jint CRDHeader::getSystemNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getSystemNumber_d6ab429752e7c267]);
        }

        jint CRDHeader::getSystemOccupancy() const
        {
          return env->callIntMethod(this$, mids$[mid_getSystemOccupancy_d6ab429752e7c267]);
        }

        jint CRDHeader::getYearOfCentury() const
        {
          return env->callIntMethod(this$, mids$[mid_getYearOfCentury_d6ab429752e7c267]);
        }

        jboolean CRDHeader::isCenterOfMassCorrectionApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCenterOfMassCorrectionApplied_eee3de00fe971136]);
        }

        jboolean CRDHeader::isReceiveAmplitudeCorrectionApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isReceiveAmplitudeCorrectionApplied_eee3de00fe971136]);
        }

        jboolean CRDHeader::isStationSystemDelayApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isStationSystemDelayApplied_eee3de00fe971136]);
        }

        jboolean CRDHeader::isTransponderDelayApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isTransponderDelayApplied_eee3de00fe971136]);
        }

        jboolean CRDHeader::isTroposphericRefractionApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isTroposphericRefractionApplied_eee3de00fe971136]);
        }

        void CRDHeader::setDataReleaseFlag(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDataReleaseFlag_8fd427ab23829bf5], a0);
        }

        void CRDHeader::setDataType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDataType_8fd427ab23829bf5], a0);
        }

        void CRDHeader::setDateAndTime(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDateAndTime_105e1eadb709d9ac], a0.this$);
        }

        void CRDHeader::setEpochIdentifier(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpochIdentifier_8fd427ab23829bf5], a0);
        }

        void CRDHeader::setIsCenterOfMassCorrectionApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsCenterOfMassCorrectionApplied_b35db77cae58639e], a0);
        }

        void CRDHeader::setIsReceiveAmplitudeCorrectionApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsReceiveAmplitudeCorrectionApplied_b35db77cae58639e], a0);
        }

        void CRDHeader::setIsStationSystemDelayApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsStationSystemDelayApplied_b35db77cae58639e], a0);
        }

        void CRDHeader::setIsTransponderDelayApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsTransponderDelayApplied_b35db77cae58639e], a0);
        }

        void CRDHeader::setIsTroposphericRefractionApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsTroposphericRefractionApplied_b35db77cae58639e], a0);
        }

        void CRDHeader::setPredictionProvider(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPredictionProvider_105e1eadb709d9ac], a0.this$);
        }

        void CRDHeader::setPredictionType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPredictionType_8fd427ab23829bf5], a0);
        }

        void CRDHeader::setQualityIndicator(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setQualityIndicator_8fd427ab23829bf5], a0);
        }

        void CRDHeader::setRangeType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setRangeType_8fd427ab23829bf5], a0);
        }

        void CRDHeader::setSpacecraftEpochTimeScale(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSpacecraftEpochTimeScale_8fd427ab23829bf5], a0);
        }

        void CRDHeader::setStationName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationName_105e1eadb709d9ac], a0.this$);
        }

        void CRDHeader::setStationNetword(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationNetword_105e1eadb709d9ac], a0.this$);
        }

        void CRDHeader::setSystemIdentifier(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSystemIdentifier_8fd427ab23829bf5], a0);
        }

        void CRDHeader::setSystemNumber(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSystemNumber_8fd427ab23829bf5], a0);
        }

        void CRDHeader::setSystemOccupancy(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSystemOccupancy_8fd427ab23829bf5], a0);
        }

        void CRDHeader::setYearOfCentury(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setYearOfCentury_8fd427ab23829bf5], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/ilrs/CRDHeader$DataType.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRDHeader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDHeader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDHeader_init_(t_CRDHeader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDHeader_getDataReleaseFlag(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getDataType(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getDateAndTime(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getEpochIdentifier(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getH1CrdString(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getH2CrdString(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getH3CrdString(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getH4CrdString(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getH5CrdString(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getPredictionProvider(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getPredictionType(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getQualityIndicator(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getRangeType(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getSpacecraftEpochTimeScale(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getStationName(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getStationNetword(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getSystemIdentifier(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getSystemNumber(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getSystemOccupancy(t_CRDHeader *self);
        static PyObject *t_CRDHeader_getYearOfCentury(t_CRDHeader *self);
        static PyObject *t_CRDHeader_isCenterOfMassCorrectionApplied(t_CRDHeader *self);
        static PyObject *t_CRDHeader_isReceiveAmplitudeCorrectionApplied(t_CRDHeader *self);
        static PyObject *t_CRDHeader_isStationSystemDelayApplied(t_CRDHeader *self);
        static PyObject *t_CRDHeader_isTransponderDelayApplied(t_CRDHeader *self);
        static PyObject *t_CRDHeader_isTroposphericRefractionApplied(t_CRDHeader *self);
        static PyObject *t_CRDHeader_setDataReleaseFlag(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setDataType(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setDateAndTime(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setEpochIdentifier(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setIsCenterOfMassCorrectionApplied(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setIsReceiveAmplitudeCorrectionApplied(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setIsStationSystemDelayApplied(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setIsTransponderDelayApplied(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setIsTroposphericRefractionApplied(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setPredictionProvider(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setPredictionType(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setQualityIndicator(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setRangeType(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setSpacecraftEpochTimeScale(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setStationName(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setStationNetword(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setSystemIdentifier(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setSystemNumber(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setSystemOccupancy(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_setYearOfCentury(t_CRDHeader *self, PyObject *arg);
        static PyObject *t_CRDHeader_get__centerOfMassCorrectionApplied(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__dataReleaseFlag(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__dataReleaseFlag(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__dataType(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__dataType(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__dateAndTime(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__dateAndTime(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__epochIdentifier(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__epochIdentifier(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__h1CrdString(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__h2CrdString(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__h3CrdString(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__h4CrdString(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__h5CrdString(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__predictionProvider(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__predictionProvider(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__predictionType(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__predictionType(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__qualityIndicator(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__qualityIndicator(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__rangeType(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__rangeType(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__receiveAmplitudeCorrectionApplied(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__spacecraftEpochTimeScale(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__spacecraftEpochTimeScale(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__stationName(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__stationName(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__stationNetword(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__stationNetword(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__stationSystemDelayApplied(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__systemIdentifier(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__systemIdentifier(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__systemNumber(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__systemNumber(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__systemOccupancy(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__systemOccupancy(t_CRDHeader *self, PyObject *arg, void *data);
        static PyObject *t_CRDHeader_get__transponderDelayApplied(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__troposphericRefractionApplied(t_CRDHeader *self, void *data);
        static PyObject *t_CRDHeader_get__yearOfCentury(t_CRDHeader *self, void *data);
        static int t_CRDHeader_set__yearOfCentury(t_CRDHeader *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDHeader__fields_[] = {
          DECLARE_GET_FIELD(t_CRDHeader, centerOfMassCorrectionApplied),
          DECLARE_GETSET_FIELD(t_CRDHeader, dataReleaseFlag),
          DECLARE_GETSET_FIELD(t_CRDHeader, dataType),
          DECLARE_GETSET_FIELD(t_CRDHeader, dateAndTime),
          DECLARE_GETSET_FIELD(t_CRDHeader, epochIdentifier),
          DECLARE_GET_FIELD(t_CRDHeader, h1CrdString),
          DECLARE_GET_FIELD(t_CRDHeader, h2CrdString),
          DECLARE_GET_FIELD(t_CRDHeader, h3CrdString),
          DECLARE_GET_FIELD(t_CRDHeader, h4CrdString),
          DECLARE_GET_FIELD(t_CRDHeader, h5CrdString),
          DECLARE_GETSET_FIELD(t_CRDHeader, predictionProvider),
          DECLARE_GETSET_FIELD(t_CRDHeader, predictionType),
          DECLARE_GETSET_FIELD(t_CRDHeader, qualityIndicator),
          DECLARE_GETSET_FIELD(t_CRDHeader, rangeType),
          DECLARE_GET_FIELD(t_CRDHeader, receiveAmplitudeCorrectionApplied),
          DECLARE_GETSET_FIELD(t_CRDHeader, spacecraftEpochTimeScale),
          DECLARE_GETSET_FIELD(t_CRDHeader, stationName),
          DECLARE_GETSET_FIELD(t_CRDHeader, stationNetword),
          DECLARE_GET_FIELD(t_CRDHeader, stationSystemDelayApplied),
          DECLARE_GETSET_FIELD(t_CRDHeader, systemIdentifier),
          DECLARE_GETSET_FIELD(t_CRDHeader, systemNumber),
          DECLARE_GETSET_FIELD(t_CRDHeader, systemOccupancy),
          DECLARE_GET_FIELD(t_CRDHeader, transponderDelayApplied),
          DECLARE_GET_FIELD(t_CRDHeader, troposphericRefractionApplied),
          DECLARE_GETSET_FIELD(t_CRDHeader, yearOfCentury),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDHeader__methods_[] = {
          DECLARE_METHOD(t_CRDHeader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDHeader, getDataReleaseFlag, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getDataType, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getDateAndTime, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getEpochIdentifier, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getH1CrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getH2CrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getH3CrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getH4CrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getH5CrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getPredictionProvider, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getPredictionType, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getQualityIndicator, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getRangeType, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getSpacecraftEpochTimeScale, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getStationName, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getStationNetword, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getSystemIdentifier, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getSystemNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getSystemOccupancy, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, getYearOfCentury, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, isCenterOfMassCorrectionApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, isReceiveAmplitudeCorrectionApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, isStationSystemDelayApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, isTransponderDelayApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, isTroposphericRefractionApplied, METH_NOARGS),
          DECLARE_METHOD(t_CRDHeader, setDataReleaseFlag, METH_O),
          DECLARE_METHOD(t_CRDHeader, setDataType, METH_O),
          DECLARE_METHOD(t_CRDHeader, setDateAndTime, METH_O),
          DECLARE_METHOD(t_CRDHeader, setEpochIdentifier, METH_O),
          DECLARE_METHOD(t_CRDHeader, setIsCenterOfMassCorrectionApplied, METH_O),
          DECLARE_METHOD(t_CRDHeader, setIsReceiveAmplitudeCorrectionApplied, METH_O),
          DECLARE_METHOD(t_CRDHeader, setIsStationSystemDelayApplied, METH_O),
          DECLARE_METHOD(t_CRDHeader, setIsTransponderDelayApplied, METH_O),
          DECLARE_METHOD(t_CRDHeader, setIsTroposphericRefractionApplied, METH_O),
          DECLARE_METHOD(t_CRDHeader, setPredictionProvider, METH_O),
          DECLARE_METHOD(t_CRDHeader, setPredictionType, METH_O),
          DECLARE_METHOD(t_CRDHeader, setQualityIndicator, METH_O),
          DECLARE_METHOD(t_CRDHeader, setRangeType, METH_O),
          DECLARE_METHOD(t_CRDHeader, setSpacecraftEpochTimeScale, METH_O),
          DECLARE_METHOD(t_CRDHeader, setStationName, METH_O),
          DECLARE_METHOD(t_CRDHeader, setStationNetword, METH_O),
          DECLARE_METHOD(t_CRDHeader, setSystemIdentifier, METH_O),
          DECLARE_METHOD(t_CRDHeader, setSystemNumber, METH_O),
          DECLARE_METHOD(t_CRDHeader, setSystemOccupancy, METH_O),
          DECLARE_METHOD(t_CRDHeader, setYearOfCentury, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDHeader)[] = {
          { Py_tp_methods, t_CRDHeader__methods_ },
          { Py_tp_init, (void *) t_CRDHeader_init_ },
          { Py_tp_getset, t_CRDHeader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDHeader)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::ILRSHeader),
          NULL
        };

        DEFINE_TYPE(CRDHeader, t_CRDHeader, CRDHeader);

        void t_CRDHeader::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDHeader), &PY_TYPE_DEF(CRDHeader), module, "CRDHeader", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader), "DataType", make_descriptor(&PY_TYPE_DEF(CRDHeader$DataType)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader), "RangeType", make_descriptor(&PY_TYPE_DEF(CRDHeader$RangeType)));
        }

        void t_CRDHeader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader), "class_", make_descriptor(CRDHeader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader), "wrapfn_", make_descriptor(t_CRDHeader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDHeader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDHeader::initializeClass, 1)))
            return NULL;
          return t_CRDHeader::wrap_Object(CRDHeader(((t_CRDHeader *) arg)->object.this$));
        }
        static PyObject *t_CRDHeader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDHeader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDHeader_init_(t_CRDHeader *self, PyObject *args, PyObject *kwds)
        {
          CRDHeader object((jobject) NULL);

          INT_CALL(object = CRDHeader());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDHeader_getDataReleaseFlag(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDataReleaseFlag());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getDataType(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDataType());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getDateAndTime(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getDateAndTime());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getEpochIdentifier(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEpochIdentifier());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getH1CrdString(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getH1CrdString());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getH2CrdString(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getH2CrdString());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getH3CrdString(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getH3CrdString());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getH4CrdString(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getH4CrdString());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getH5CrdString(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getH5CrdString());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getPredictionProvider(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictionProvider());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getPredictionType(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPredictionType());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getQualityIndicator(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getQualityIndicator());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getRangeType(t_CRDHeader *self)
        {
          ::org::orekit::files::ilrs::CRDHeader$RangeType result((jobject) NULL);
          OBJ_CALL(result = self->object.getRangeType());
          return ::org::orekit::files::ilrs::t_CRDHeader$RangeType::wrap_Object(result);
        }

        static PyObject *t_CRDHeader_getSpacecraftEpochTimeScale(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSpacecraftEpochTimeScale());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getStationName(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getStationName());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getStationNetword(t_CRDHeader *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getStationNetword());
          return j2p(result);
        }

        static PyObject *t_CRDHeader_getSystemIdentifier(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSystemIdentifier());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getSystemNumber(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSystemNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getSystemOccupancy(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSystemOccupancy());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_getYearOfCentury(t_CRDHeader *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getYearOfCentury());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRDHeader_isCenterOfMassCorrectionApplied(t_CRDHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isCenterOfMassCorrectionApplied());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRDHeader_isReceiveAmplitudeCorrectionApplied(t_CRDHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isReceiveAmplitudeCorrectionApplied());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRDHeader_isStationSystemDelayApplied(t_CRDHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isStationSystemDelayApplied());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRDHeader_isTransponderDelayApplied(t_CRDHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isTransponderDelayApplied());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRDHeader_isTroposphericRefractionApplied(t_CRDHeader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isTroposphericRefractionApplied());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_CRDHeader_setDataReleaseFlag(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setDataReleaseFlag(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDataReleaseFlag", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setDataType(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setDataType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDataType", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setDateAndTime(t_CRDHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setDateAndTime(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDateAndTime", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setEpochIdentifier(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setEpochIdentifier(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setEpochIdentifier", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setIsCenterOfMassCorrectionApplied(t_CRDHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsCenterOfMassCorrectionApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsCenterOfMassCorrectionApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setIsReceiveAmplitudeCorrectionApplied(t_CRDHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsReceiveAmplitudeCorrectionApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsReceiveAmplitudeCorrectionApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setIsStationSystemDelayApplied(t_CRDHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsStationSystemDelayApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsStationSystemDelayApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setIsTransponderDelayApplied(t_CRDHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsTransponderDelayApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsTransponderDelayApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setIsTroposphericRefractionApplied(t_CRDHeader *self, PyObject *arg)
        {
          jboolean a0;

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(self->object.setIsTroposphericRefractionApplied(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setIsTroposphericRefractionApplied", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setPredictionProvider(t_CRDHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setPredictionProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPredictionProvider", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setPredictionType(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setPredictionType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPredictionType", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setQualityIndicator(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setQualityIndicator(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setQualityIndicator", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setRangeType(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setRangeType(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setRangeType", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setSpacecraftEpochTimeScale(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSpacecraftEpochTimeScale(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSpacecraftEpochTimeScale", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setStationName(t_CRDHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setStationName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStationName", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setStationNetword(t_CRDHeader *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setStationNetword(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setStationNetword", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setSystemIdentifier(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSystemIdentifier(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSystemIdentifier", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setSystemNumber(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSystemNumber(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSystemNumber", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setSystemOccupancy(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setSystemOccupancy(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSystemOccupancy", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_setYearOfCentury(t_CRDHeader *self, PyObject *arg)
        {
          jint a0;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(self->object.setYearOfCentury(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setYearOfCentury", arg);
          return NULL;
        }

        static PyObject *t_CRDHeader_get__centerOfMassCorrectionApplied(t_CRDHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isCenterOfMassCorrectionApplied());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CRDHeader_get__dataReleaseFlag(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDataReleaseFlag());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__dataReleaseFlag(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setDataReleaseFlag(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "dataReleaseFlag", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__dataType(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDataType());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__dataType(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setDataType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "dataType", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__dateAndTime(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getDateAndTime());
          return j2p(value);
        }
        static int t_CRDHeader_set__dateAndTime(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setDateAndTime(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "dateAndTime", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__epochIdentifier(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEpochIdentifier());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__epochIdentifier(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setEpochIdentifier(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "epochIdentifier", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__h1CrdString(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getH1CrdString());
          return j2p(value);
        }

        static PyObject *t_CRDHeader_get__h2CrdString(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getH2CrdString());
          return j2p(value);
        }

        static PyObject *t_CRDHeader_get__h3CrdString(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getH3CrdString());
          return j2p(value);
        }

        static PyObject *t_CRDHeader_get__h4CrdString(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getH4CrdString());
          return j2p(value);
        }

        static PyObject *t_CRDHeader_get__h5CrdString(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getH5CrdString());
          return j2p(value);
        }

        static PyObject *t_CRDHeader_get__predictionProvider(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictionProvider());
          return j2p(value);
        }
        static int t_CRDHeader_set__predictionProvider(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setPredictionProvider(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "predictionProvider", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__predictionType(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPredictionType());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__predictionType(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setPredictionType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "predictionType", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__qualityIndicator(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getQualityIndicator());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__qualityIndicator(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setQualityIndicator(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "qualityIndicator", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__rangeType(t_CRDHeader *self, void *data)
        {
          ::org::orekit::files::ilrs::CRDHeader$RangeType value((jobject) NULL);
          OBJ_CALL(value = self->object.getRangeType());
          return ::org::orekit::files::ilrs::t_CRDHeader$RangeType::wrap_Object(value);
        }
        static int t_CRDHeader_set__rangeType(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setRangeType(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "rangeType", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__receiveAmplitudeCorrectionApplied(t_CRDHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isReceiveAmplitudeCorrectionApplied());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CRDHeader_get__spacecraftEpochTimeScale(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSpacecraftEpochTimeScale());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__spacecraftEpochTimeScale(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSpacecraftEpochTimeScale(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "spacecraftEpochTimeScale", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__stationName(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getStationName());
          return j2p(value);
        }
        static int t_CRDHeader_set__stationName(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setStationName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stationName", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__stationNetword(t_CRDHeader *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getStationNetword());
          return j2p(value);
        }
        static int t_CRDHeader_set__stationNetword(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setStationNetword(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "stationNetword", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__stationSystemDelayApplied(t_CRDHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isStationSystemDelayApplied());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CRDHeader_get__systemIdentifier(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSystemIdentifier());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__systemIdentifier(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSystemIdentifier(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "systemIdentifier", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__systemNumber(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSystemNumber());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__systemNumber(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSystemNumber(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "systemNumber", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__systemOccupancy(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSystemOccupancy());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__systemOccupancy(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setSystemOccupancy(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "systemOccupancy", arg);
          return -1;
        }

        static PyObject *t_CRDHeader_get__transponderDelayApplied(t_CRDHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isTransponderDelayApplied());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CRDHeader_get__troposphericRefractionApplied(t_CRDHeader *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isTroposphericRefractionApplied());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_CRDHeader_get__yearOfCentury(t_CRDHeader *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getYearOfCentury());
          return PyLong_FromLong((long) value);
        }
        static int t_CRDHeader_set__yearOfCentury(t_CRDHeader *self, PyObject *arg, void *data)
        {
          {
            jint value;
            if (!parseArg(arg, "I", &value))
            {
              INT_CALL(self->object.setYearOfCentury(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "yearOfCentury", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/CircularOrbit.h"
#include "org/orekit/orbits/CircularOrbit.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/PositionAngleBased.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *CircularOrbit::class$ = NULL;
      jmethodID *CircularOrbit::mids$ = NULL;
      bool CircularOrbit::live$ = false;

      jclass CircularOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/CircularOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_17534ef58ef3aaef] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;)V");
          mids$[mid_init$_a8e6ee721e0d6799] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeStampedPVCoordinates;Lorg/orekit/frames/Frame;D)V");
          mids$[mid_init$_78122b2ba50ff4ac] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_b2d612c221d7654c] = env->getMethodID(cls, "<init>", "(DDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_init$_5192e636016a7ffa] = env->getMethodID(cls, "<init>", "(DDDDDDDDDDDDLorg/orekit/orbits/PositionAngleType;Lorg/orekit/frames/Frame;Lorg/orekit/time/AbsoluteDate;D)V");
          mids$[mid_addKeplerContribution_3ef35668c0b1580f] = env->getMethodID(cls, "addKeplerContribution", "(Lorg/orekit/orbits/PositionAngleType;D[D)V");
          mids$[mid_eccentricToMean_db06d8c3fc3d9670] = env->getStaticMethodID(cls, "eccentricToMean", "(DDD)D");
          mids$[mid_eccentricToTrue_db06d8c3fc3d9670] = env->getStaticMethodID(cls, "eccentricToTrue", "(DDD)D");
          mids$[mid_getA_9981f74b2d109da6] = env->getMethodID(cls, "getA", "()D");
          mids$[mid_getADot_9981f74b2d109da6] = env->getMethodID(cls, "getADot", "()D");
          mids$[mid_getAlpha_d70fe653db6c6bd3] = env->getMethodID(cls, "getAlpha", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getAlphaDot_d70fe653db6c6bd3] = env->getMethodID(cls, "getAlphaDot", "(Lorg/orekit/orbits/PositionAngleType;)D");
          mids$[mid_getAlphaE_9981f74b2d109da6] = env->getMethodID(cls, "getAlphaE", "()D");
          mids$[mid_getAlphaEDot_9981f74b2d109da6] = env->getMethodID(cls, "getAlphaEDot", "()D");
          mids$[mid_getAlphaM_9981f74b2d109da6] = env->getMethodID(cls, "getAlphaM", "()D");
          mids$[mid_getAlphaMDot_9981f74b2d109da6] = env->getMethodID(cls, "getAlphaMDot", "()D");
          mids$[mid_getAlphaV_9981f74b2d109da6] = env->getMethodID(cls, "getAlphaV", "()D");
          mids$[mid_getAlphaVDot_9981f74b2d109da6] = env->getMethodID(cls, "getAlphaVDot", "()D");
          mids$[mid_getCachedPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getCachedPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
          mids$[mid_getCircularEx_9981f74b2d109da6] = env->getMethodID(cls, "getCircularEx", "()D");
          mids$[mid_getCircularExDot_9981f74b2d109da6] = env->getMethodID(cls, "getCircularExDot", "()D");
          mids$[mid_getCircularEy_9981f74b2d109da6] = env->getMethodID(cls, "getCircularEy", "()D");
          mids$[mid_getCircularEyDot_9981f74b2d109da6] = env->getMethodID(cls, "getCircularEyDot", "()D");
          mids$[mid_getE_9981f74b2d109da6] = env->getMethodID(cls, "getE", "()D");
          mids$[mid_getEDot_9981f74b2d109da6] = env->getMethodID(cls, "getEDot", "()D");
          mids$[mid_getEquinoctialEx_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialEx", "()D");
          mids$[mid_getEquinoctialExDot_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialExDot", "()D");
          mids$[mid_getEquinoctialEy_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialEy", "()D");
          mids$[mid_getEquinoctialEyDot_9981f74b2d109da6] = env->getMethodID(cls, "getEquinoctialEyDot", "()D");
          mids$[mid_getHx_9981f74b2d109da6] = env->getMethodID(cls, "getHx", "()D");
          mids$[mid_getHxDot_9981f74b2d109da6] = env->getMethodID(cls, "getHxDot", "()D");
          mids$[mid_getHy_9981f74b2d109da6] = env->getMethodID(cls, "getHy", "()D");
          mids$[mid_getHyDot_9981f74b2d109da6] = env->getMethodID(cls, "getHyDot", "()D");
          mids$[mid_getI_9981f74b2d109da6] = env->getMethodID(cls, "getI", "()D");
          mids$[mid_getIDot_9981f74b2d109da6] = env->getMethodID(cls, "getIDot", "()D");
          mids$[mid_getLE_9981f74b2d109da6] = env->getMethodID(cls, "getLE", "()D");
          mids$[mid_getLEDot_9981f74b2d109da6] = env->getMethodID(cls, "getLEDot", "()D");
          mids$[mid_getLM_9981f74b2d109da6] = env->getMethodID(cls, "getLM", "()D");
          mids$[mid_getLMDot_9981f74b2d109da6] = env->getMethodID(cls, "getLMDot", "()D");
          mids$[mid_getLv_9981f74b2d109da6] = env->getMethodID(cls, "getLv", "()D");
          mids$[mid_getLvDot_9981f74b2d109da6] = env->getMethodID(cls, "getLvDot", "()D");
          mids$[mid_getRightAscensionOfAscendingNode_9981f74b2d109da6] = env->getMethodID(cls, "getRightAscensionOfAscendingNode", "()D");
          mids$[mid_getRightAscensionOfAscendingNodeDot_9981f74b2d109da6] = env->getMethodID(cls, "getRightAscensionOfAscendingNodeDot", "()D");
          mids$[mid_getType_495f818d3570b7f5] = env->getMethodID(cls, "getType", "()Lorg/orekit/orbits/OrbitType;");
          mids$[mid_hasRates_eee3de00fe971136] = env->getMethodID(cls, "hasRates", "()Z");
          mids$[mid_meanToEccentric_db06d8c3fc3d9670] = env->getStaticMethodID(cls, "meanToEccentric", "(DDD)D");
          mids$[mid_removeRates_3c88d8f1cf664f96] = env->getMethodID(cls, "removeRates", "()Lorg/orekit/orbits/CircularOrbit;");
          mids$[mid_shiftedBy_e6740214f1528ce1] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/orbits/CircularOrbit;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_trueToEccentric_db06d8c3fc3d9670] = env->getStaticMethodID(cls, "trueToEccentric", "(DDD)D");
          mids$[mid_initPosition_032312bdeb3f2f93] = env->getMethodID(cls, "initPosition", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_initPVCoordinates_674031698a428ce8] = env->getMethodID(cls, "initPVCoordinates", "()Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_computeJacobianMeanWrtCartesian_eda3f19b8225f78f] = env->getMethodID(cls, "computeJacobianMeanWrtCartesian", "()[[D");
          mids$[mid_computeJacobianEccentricWrtCartesian_eda3f19b8225f78f] = env->getMethodID(cls, "computeJacobianEccentricWrtCartesian", "()[[D");
          mids$[mid_computeJacobianTrueWrtCartesian_eda3f19b8225f78f] = env->getMethodID(cls, "computeJacobianTrueWrtCartesian", "()[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CircularOrbit::CircularOrbit(const ::org::orekit::orbits::Orbit & a0) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_17534ef58ef3aaef, a0.this$)) {}

      CircularOrbit::CircularOrbit(const ::org::orekit::utils::TimeStampedPVCoordinates & a0, const ::org::orekit::frames::Frame & a1, jdouble a2) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_a8e6ee721e0d6799, a0.this$, a1.this$, a2)) {}

      CircularOrbit::CircularOrbit(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_78122b2ba50ff4ac, a0.this$, a1.this$, a2.this$, a3)) {}

      CircularOrbit::CircularOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::orbits::PositionAngleType & a6, const ::org::orekit::frames::Frame & a7, const ::org::orekit::time::AbsoluteDate & a8, jdouble a9) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_b2d612c221d7654c, a0, a1, a2, a3, a4, a5, a6.this$, a7.this$, a8.this$, a9)) {}

      CircularOrbit::CircularOrbit(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, const ::org::orekit::orbits::PositionAngleType & a12, const ::org::orekit::frames::Frame & a13, const ::org::orekit::time::AbsoluteDate & a14, jdouble a15) : ::org::orekit::orbits::Orbit(env->newObject(initializeClass, &mids$, mid_init$_5192e636016a7ffa, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12.this$, a13.this$, a14.this$, a15)) {}

      void CircularOrbit::addKeplerContribution(const ::org::orekit::orbits::PositionAngleType & a0, jdouble a1, const JArray< jdouble > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_addKeplerContribution_3ef35668c0b1580f], a0.this$, a1, a2.this$);
      }

      jdouble CircularOrbit::eccentricToMean(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_eccentricToMean_db06d8c3fc3d9670], a0, a1, a2);
      }

      jdouble CircularOrbit::eccentricToTrue(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_eccentricToTrue_db06d8c3fc3d9670], a0, a1, a2);
      }

      jdouble CircularOrbit::getA() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getA_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getADot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getADot_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getAlpha(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlpha_d70fe653db6c6bd3], a0.this$);
      }

      jdouble CircularOrbit::getAlphaDot(const ::org::orekit::orbits::PositionAngleType & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaDot_d70fe653db6c6bd3], a0.this$);
      }

      jdouble CircularOrbit::getAlphaE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaE_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getAlphaEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaEDot_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getAlphaM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaM_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getAlphaMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaMDot_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getAlphaV() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaV_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getAlphaVDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getAlphaVDot_9981f74b2d109da6]);
      }

      ::org::orekit::orbits::PositionAngleType CircularOrbit::getCachedPositionAngleType() const
      {
        return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getCachedPositionAngleType_a6db4e6edefda4be]));
      }

      jdouble CircularOrbit::getCircularEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCircularEx_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getCircularExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCircularExDot_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getCircularEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCircularEy_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getCircularEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getCircularEyDot_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getE_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEDot_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getEquinoctialEx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEx_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getEquinoctialExDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialExDot_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getEquinoctialEy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEy_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getEquinoctialEyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEquinoctialEyDot_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getHx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHx_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getHxDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHxDot_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getHy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHy_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getHyDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getHyDot_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getI() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getI_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getIDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getIDot_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getLE() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLE_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getLEDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLEDot_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getLM() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLM_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getLMDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLMDot_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getLv() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLv_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getLvDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLvDot_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getRightAscensionOfAscendingNode() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRightAscensionOfAscendingNode_9981f74b2d109da6]);
      }

      jdouble CircularOrbit::getRightAscensionOfAscendingNodeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getRightAscensionOfAscendingNodeDot_9981f74b2d109da6]);
      }

      ::org::orekit::orbits::OrbitType CircularOrbit::getType() const
      {
        return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getType_495f818d3570b7f5]));
      }

      jboolean CircularOrbit::hasRates() const
      {
        return env->callBooleanMethod(this$, mids$[mid_hasRates_eee3de00fe971136]);
      }

      jdouble CircularOrbit::meanToEccentric(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_meanToEccentric_db06d8c3fc3d9670], a0, a1, a2);
      }

      CircularOrbit CircularOrbit::removeRates() const
      {
        return CircularOrbit(env->callObjectMethod(this$, mids$[mid_removeRates_3c88d8f1cf664f96]));
      }

      CircularOrbit CircularOrbit::shiftedBy(jdouble a0) const
      {
        return CircularOrbit(env->callObjectMethod(this$, mids$[mid_shiftedBy_e6740214f1528ce1], a0));
      }

      ::java::lang::String CircularOrbit::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
      }

      jdouble CircularOrbit::trueToEccentric(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_trueToEccentric_db06d8c3fc3d9670], a0, a1, a2);
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
      static PyObject *t_CircularOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CircularOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CircularOrbit_init_(t_CircularOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CircularOrbit_addKeplerContribution(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_eccentricToMean(PyTypeObject *type, PyObject *args);
      static PyObject *t_CircularOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args);
      static PyObject *t_CircularOrbit_getA(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getADot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getAlpha(t_CircularOrbit *self, PyObject *arg);
      static PyObject *t_CircularOrbit_getAlphaDot(t_CircularOrbit *self, PyObject *arg);
      static PyObject *t_CircularOrbit_getAlphaE(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaEDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaM(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaMDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaV(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getAlphaVDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCachedPositionAngleType(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCircularEx(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCircularExDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCircularEy(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getCircularEyDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getE(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEquinoctialEx(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEquinoctialExDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEquinoctialEy(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getEquinoctialEyDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getHx(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getHxDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getHy(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getHyDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getI(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getIDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLE(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLEDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLM(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLMDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLv(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getLvDot(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_getRightAscensionOfAscendingNode(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getRightAscensionOfAscendingNodeDot(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_getType(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_hasRates(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_meanToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_CircularOrbit_removeRates(t_CircularOrbit *self);
      static PyObject *t_CircularOrbit_shiftedBy(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_toString(t_CircularOrbit *self, PyObject *args);
      static PyObject *t_CircularOrbit_trueToEccentric(PyTypeObject *type, PyObject *args);
      static PyObject *t_CircularOrbit_get__a(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__aDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaE(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaEDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaM(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaMDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaV(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__alphaVDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__cachedPositionAngleType(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__circularEx(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__circularExDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__circularEy(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__circularEyDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__e(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__eDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__equinoctialEx(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__equinoctialExDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__equinoctialEy(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__equinoctialEyDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__hx(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__hxDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__hy(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__hyDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__i(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__iDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lE(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lEDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lM(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lMDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lv(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__lvDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__rightAscensionOfAscendingNode(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__rightAscensionOfAscendingNodeDot(t_CircularOrbit *self, void *data);
      static PyObject *t_CircularOrbit_get__type(t_CircularOrbit *self, void *data);
      static PyGetSetDef t_CircularOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_CircularOrbit, a),
        DECLARE_GET_FIELD(t_CircularOrbit, aDot),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaE),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaEDot),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaM),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaMDot),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaV),
        DECLARE_GET_FIELD(t_CircularOrbit, alphaVDot),
        DECLARE_GET_FIELD(t_CircularOrbit, cachedPositionAngleType),
        DECLARE_GET_FIELD(t_CircularOrbit, circularEx),
        DECLARE_GET_FIELD(t_CircularOrbit, circularExDot),
        DECLARE_GET_FIELD(t_CircularOrbit, circularEy),
        DECLARE_GET_FIELD(t_CircularOrbit, circularEyDot),
        DECLARE_GET_FIELD(t_CircularOrbit, e),
        DECLARE_GET_FIELD(t_CircularOrbit, eDot),
        DECLARE_GET_FIELD(t_CircularOrbit, equinoctialEx),
        DECLARE_GET_FIELD(t_CircularOrbit, equinoctialExDot),
        DECLARE_GET_FIELD(t_CircularOrbit, equinoctialEy),
        DECLARE_GET_FIELD(t_CircularOrbit, equinoctialEyDot),
        DECLARE_GET_FIELD(t_CircularOrbit, hx),
        DECLARE_GET_FIELD(t_CircularOrbit, hxDot),
        DECLARE_GET_FIELD(t_CircularOrbit, hy),
        DECLARE_GET_FIELD(t_CircularOrbit, hyDot),
        DECLARE_GET_FIELD(t_CircularOrbit, i),
        DECLARE_GET_FIELD(t_CircularOrbit, iDot),
        DECLARE_GET_FIELD(t_CircularOrbit, lE),
        DECLARE_GET_FIELD(t_CircularOrbit, lEDot),
        DECLARE_GET_FIELD(t_CircularOrbit, lM),
        DECLARE_GET_FIELD(t_CircularOrbit, lMDot),
        DECLARE_GET_FIELD(t_CircularOrbit, lv),
        DECLARE_GET_FIELD(t_CircularOrbit, lvDot),
        DECLARE_GET_FIELD(t_CircularOrbit, rightAscensionOfAscendingNode),
        DECLARE_GET_FIELD(t_CircularOrbit, rightAscensionOfAscendingNodeDot),
        DECLARE_GET_FIELD(t_CircularOrbit, type),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CircularOrbit__methods_[] = {
        DECLARE_METHOD(t_CircularOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, addKeplerContribution, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, eccentricToMean, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, eccentricToTrue, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, getA, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getADot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlpha, METH_O),
        DECLARE_METHOD(t_CircularOrbit, getAlphaDot, METH_O),
        DECLARE_METHOD(t_CircularOrbit, getAlphaE, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaEDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaM, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaMDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaV, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getAlphaVDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCachedPositionAngleType, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCircularEx, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCircularExDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCircularEy, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getCircularEyDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getE, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEquinoctialEx, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEquinoctialExDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEquinoctialEy, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getEquinoctialEyDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getHx, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getHxDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getHy, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getHyDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getI, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getIDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLE, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLEDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLM, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLMDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLv, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getLvDot, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, getRightAscensionOfAscendingNode, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getRightAscensionOfAscendingNodeDot, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, getType, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, hasRates, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, meanToEccentric, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_CircularOrbit, removeRates, METH_NOARGS),
        DECLARE_METHOD(t_CircularOrbit, shiftedBy, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, toString, METH_VARARGS),
        DECLARE_METHOD(t_CircularOrbit, trueToEccentric, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CircularOrbit)[] = {
        { Py_tp_methods, t_CircularOrbit__methods_ },
        { Py_tp_init, (void *) t_CircularOrbit_init_ },
        { Py_tp_getset, t_CircularOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CircularOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::Orbit),
        NULL
      };

      DEFINE_TYPE(CircularOrbit, t_CircularOrbit, CircularOrbit);

      void t_CircularOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(CircularOrbit), &PY_TYPE_DEF(CircularOrbit), module, "CircularOrbit", 0);
      }

      void t_CircularOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CircularOrbit), "class_", make_descriptor(CircularOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CircularOrbit), "wrapfn_", make_descriptor(t_CircularOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CircularOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CircularOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CircularOrbit::initializeClass, 1)))
          return NULL;
        return t_CircularOrbit::wrap_Object(CircularOrbit(((t_CircularOrbit *) arg)->object.this$));
      }
      static PyObject *t_CircularOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CircularOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CircularOrbit_init_(t_CircularOrbit *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::orbits::Orbit a0((jobject) NULL);
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
            {
              INT_CALL(object = CircularOrbit(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::orekit::utils::TimeStampedPVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            jdouble a2;
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkD", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = CircularOrbit(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = CircularOrbit(a0, a1, a2, a3));
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
            jdouble a3;
            jdouble a4;
            jdouble a5;
            ::org::orekit::orbits::PositionAngleType a6((jobject) NULL);
            PyTypeObject **p6;
            ::org::orekit::frames::Frame a7((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a8((jobject) NULL);
            jdouble a9;
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &p6, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a7, &a8, &a9))
            {
              INT_CALL(object = CircularOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
              self->object = object;
              break;
            }
          }
          goto err;
         case 16:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            jdouble a7;
            jdouble a8;
            jdouble a9;
            jdouble a10;
            jdouble a11;
            ::org::orekit::orbits::PositionAngleType a12((jobject) NULL);
            PyTypeObject **p12;
            ::org::orekit::frames::Frame a13((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a14((jobject) NULL);
            jdouble a15;
            CircularOrbit object((jobject) NULL);

            if (!parseArgs(args, "DDDDDDDDDDDDKkkD", ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &p12, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a13, &a14, &a15))
            {
              INT_CALL(object = CircularOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15));
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

      static PyObject *t_CircularOrbit_addKeplerContribution(t_CircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble a1;
        JArray< jdouble > a2((jobject) NULL);

        if (!parseArgs(args, "KD[D", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a1, &a2))
        {
          OBJ_CALL(self->object.addKeplerContribution(a0, a1, a2));
          Py_RETURN_NONE;
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "addKeplerContribution", args, 2);
      }

      static PyObject *t_CircularOrbit_eccentricToMean(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::CircularOrbit::eccentricToMean(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "eccentricToMean", args);
        return NULL;
      }

      static PyObject *t_CircularOrbit_eccentricToTrue(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::CircularOrbit::eccentricToTrue(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "eccentricToTrue", args);
        return NULL;
      }

      static PyObject *t_CircularOrbit_getA(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getA());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getA", args, 2);
      }

      static PyObject *t_CircularOrbit_getADot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getADot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getADot", args, 2);
      }

      static PyObject *t_CircularOrbit_getAlpha(t_CircularOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAlpha(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAlpha", arg);
        return NULL;
      }

      static PyObject *t_CircularOrbit_getAlphaDot(t_CircularOrbit *self, PyObject *arg)
      {
        ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
        PyTypeObject **p0;
        jdouble result;

        if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
        {
          OBJ_CALL(result = self->object.getAlphaDot(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getAlphaDot", arg);
        return NULL;
      }

      static PyObject *t_CircularOrbit_getAlphaE(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaE());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaEDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaEDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaM(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaM());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaMDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaMDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaV(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaV());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getAlphaVDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getAlphaVDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getCachedPositionAngleType(t_CircularOrbit *self)
      {
        ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
        OBJ_CALL(result = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
      }

      static PyObject *t_CircularOrbit_getCircularEx(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCircularEx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getCircularExDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCircularExDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getCircularEy(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCircularEy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getCircularEyDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getCircularEyDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getE(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getE", args, 2);
      }

      static PyObject *t_CircularOrbit_getEDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getEquinoctialEx(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEquinoctialEx", args, 2);
      }

      static PyObject *t_CircularOrbit_getEquinoctialExDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialExDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEquinoctialExDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getEquinoctialEy(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEquinoctialEy", args, 2);
      }

      static PyObject *t_CircularOrbit_getEquinoctialEyDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getEquinoctialEyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getEquinoctialEyDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getHx(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHx());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getHx", args, 2);
      }

      static PyObject *t_CircularOrbit_getHxDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHxDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getHxDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getHy(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHy());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getHy", args, 2);
      }

      static PyObject *t_CircularOrbit_getHyDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getHyDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getHyDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getI(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getI());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getI", args, 2);
      }

      static PyObject *t_CircularOrbit_getIDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getIDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getIDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getLE(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLE());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLE", args, 2);
      }

      static PyObject *t_CircularOrbit_getLEDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLEDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLEDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getLM(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLM());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLM", args, 2);
      }

      static PyObject *t_CircularOrbit_getLMDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLMDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLMDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getLv(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLv());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLv", args, 2);
      }

      static PyObject *t_CircularOrbit_getLvDot(t_CircularOrbit *self, PyObject *args)
      {
        jdouble result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLvDot());
          return PyFloat_FromDouble((double) result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getLvDot", args, 2);
      }

      static PyObject *t_CircularOrbit_getRightAscensionOfAscendingNode(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNode());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getRightAscensionOfAscendingNodeDot(t_CircularOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getRightAscensionOfAscendingNodeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CircularOrbit_getType(t_CircularOrbit *self, PyObject *args)
      {
        ::org::orekit::orbits::OrbitType result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "getType", args, 2);
      }

      static PyObject *t_CircularOrbit_hasRates(t_CircularOrbit *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.hasRates());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_CircularOrbit_meanToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::CircularOrbit::meanToEccentric(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "meanToEccentric", args);
        return NULL;
      }

      static PyObject *t_CircularOrbit_removeRates(t_CircularOrbit *self)
      {
        CircularOrbit result((jobject) NULL);
        OBJ_CALL(result = self->object.removeRates());
        return t_CircularOrbit::wrap_Object(result);
      }

      static PyObject *t_CircularOrbit_shiftedBy(t_CircularOrbit *self, PyObject *args)
      {
        jdouble a0;
        CircularOrbit result((jobject) NULL);

        if (!parseArgs(args, "D", &a0))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return t_CircularOrbit::wrap_Object(result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "shiftedBy", args, 2);
      }

      static PyObject *t_CircularOrbit_toString(t_CircularOrbit *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(CircularOrbit), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_CircularOrbit_trueToEccentric(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::orekit::orbits::CircularOrbit::trueToEccentric(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "trueToEccentric", args);
        return NULL;
      }

      static PyObject *t_CircularOrbit_get__a(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getA());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__aDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getADot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaE(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaEDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaM(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaMDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaV(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaV());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__alphaVDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getAlphaVDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__cachedPositionAngleType(t_CircularOrbit *self, void *data)
      {
        ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
        OBJ_CALL(value = self->object.getCachedPositionAngleType());
        return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
      }

      static PyObject *t_CircularOrbit_get__circularEx(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCircularEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__circularExDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCircularExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__circularEy(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCircularEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__circularEyDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getCircularEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__e(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__eDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__equinoctialEx(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__equinoctialExDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialExDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__equinoctialEy(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__equinoctialEyDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEquinoctialEyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__hx(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__hxDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHxDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__hy(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__hyDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getHyDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__i(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getI());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__iDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getIDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lE(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLE());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lEDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLEDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lM(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLM());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lMDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLMDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lv(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLv());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__lvDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLvDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__rightAscensionOfAscendingNode(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNode());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__rightAscensionOfAscendingNodeDot(t_CircularOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getRightAscensionOfAscendingNodeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_CircularOrbit_get__type(t_CircularOrbit *self, void *data)
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
#include "java/lang/Float.h"
#include "java/lang/Float.h"
#include "java/lang/Class.h"
#include "java/lang/NumberFormatException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Comparable.h"
#include "JArray.h"

namespace java {
  namespace lang {

    ::java::lang::Class *Float::class$ = NULL;
    jmethodID *Float::mids$ = NULL;
    bool Float::live$ = false;
    jint Float::BYTES = (jint) 0;
    jint Float::MAX_EXPONENT = (jint) 0;
    jfloat Float::MAX_VALUE = (jfloat) 0;
    jint Float::MIN_EXPONENT = (jint) 0;
    jfloat Float::MIN_NORMAL = (jfloat) 0;
    jfloat Float::MIN_VALUE = (jfloat) 0;
    jfloat Float::NEGATIVE_INFINITY = (jfloat) 0;
    jfloat Float::NaN = (jfloat) 0;
    jfloat Float::POSITIVE_INFINITY = (jfloat) 0;
    jint Float::SIZE = (jint) 0;
    ::java::lang::Class *Float::TYPE = NULL;

    jclass Float::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/lang/Float");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
        mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
        mids$[mid_init$_11c95dcd1c301708] = env->getMethodID(cls, "<init>", "(F)V");
        mids$[mid_byteValue_5bc9c54e4a4e6e3f] = env->getMethodID(cls, "byteValue", "()B");
        mids$[mid_compare_6d23ba887d7bc699] = env->getStaticMethodID(cls, "compare", "(FF)I");
        mids$[mid_compareTo_0fd21b0f141a0083] = env->getMethodID(cls, "compareTo", "(Ljava/lang/Float;)I");
        mids$[mid_doubleValue_9981f74b2d109da6] = env->getMethodID(cls, "doubleValue", "()D");
        mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_floatToIntBits_d5ac1630ba9f4935] = env->getStaticMethodID(cls, "floatToIntBits", "(F)I");
        mids$[mid_floatToRawIntBits_d5ac1630ba9f4935] = env->getStaticMethodID(cls, "floatToRawIntBits", "(F)I");
        mids$[mid_floatValue_0e3b995f823d65ff] = env->getMethodID(cls, "floatValue", "()F");
        mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_hashCode_d5ac1630ba9f4935] = env->getStaticMethodID(cls, "hashCode", "(F)I");
        mids$[mid_intBitsToFloat_59a210c7132aa185] = env->getStaticMethodID(cls, "intBitsToFloat", "(I)F");
        mids$[mid_intValue_d6ab429752e7c267] = env->getMethodID(cls, "intValue", "()I");
        mids$[mid_isFinite_b6aee6d092d77be8] = env->getStaticMethodID(cls, "isFinite", "(F)Z");
        mids$[mid_isInfinite_eee3de00fe971136] = env->getMethodID(cls, "isInfinite", "()Z");
        mids$[mid_isInfinite_b6aee6d092d77be8] = env->getStaticMethodID(cls, "isInfinite", "(F)Z");
        mids$[mid_isNaN_eee3de00fe971136] = env->getMethodID(cls, "isNaN", "()Z");
        mids$[mid_isNaN_b6aee6d092d77be8] = env->getStaticMethodID(cls, "isNaN", "(F)Z");
        mids$[mid_longValue_42c72b98e3c2e08a] = env->getMethodID(cls, "longValue", "()J");
        mids$[mid_max_376a3c0184df58e2] = env->getStaticMethodID(cls, "max", "(FF)F");
        mids$[mid_min_376a3c0184df58e2] = env->getStaticMethodID(cls, "min", "(FF)F");
        mids$[mid_parseFloat_c3939e4dc4489413] = env->getStaticMethodID(cls, "parseFloat", "(Ljava/lang/String;)F");
        mids$[mid_shortValue_5067fec74ceda473] = env->getMethodID(cls, "shortValue", "()S");
        mids$[mid_sum_376a3c0184df58e2] = env->getStaticMethodID(cls, "sum", "(FF)F");
        mids$[mid_toHexString_7e1d4f43ec30f721] = env->getStaticMethodID(cls, "toHexString", "(F)Ljava/lang/String;");
        mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
        mids$[mid_toString_7e1d4f43ec30f721] = env->getStaticMethodID(cls, "toString", "(F)Ljava/lang/String;");
        mids$[mid_valueOf_ea11f708afa49297] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Ljava/lang/Float;");
        mids$[mid_valueOf_5f3d14c66eeca77d] = env->getStaticMethodID(cls, "valueOf", "(F)Ljava/lang/Float;");

        class$ = new ::java::lang::Class(cls);
        cls = (jclass) class$->this$;

        BYTES = env->getStaticIntField(cls, "BYTES");
        MAX_EXPONENT = env->getStaticIntField(cls, "MAX_EXPONENT");
        MAX_VALUE = env->getStaticFloatField(cls, "MAX_VALUE");
        MIN_EXPONENT = env->getStaticIntField(cls, "MIN_EXPONENT");
        MIN_NORMAL = env->getStaticFloatField(cls, "MIN_NORMAL");
        MIN_VALUE = env->getStaticFloatField(cls, "MIN_VALUE");
        NEGATIVE_INFINITY = env->getStaticFloatField(cls, "NEGATIVE_INFINITY");
        NaN = env->getStaticFloatField(cls, "NaN");
        POSITIVE_INFINITY = env->getStaticFloatField(cls, "POSITIVE_INFINITY");
        SIZE = env->getStaticIntField(cls, "SIZE");
        TYPE = new ::java::lang::Class(env->getStaticObjectField(cls, "TYPE", "Ljava/lang/Class;"));
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    Float::Float(const ::java::lang::String & a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

    Float::Float(jdouble a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

    Float::Float(jfloat a0) : ::java::lang::Number(env->newObject(initializeClass, &mids$, mid_init$_11c95dcd1c301708, a0)) {}

    jbyte Float::byteValue() const
    {
      return env->callByteMethod(this$, mids$[mid_byteValue_5bc9c54e4a4e6e3f]);
    }

    jint Float::compare(jfloat a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_compare_6d23ba887d7bc699], a0, a1);
    }

    jint Float::compareTo(const Float & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_compareTo_0fd21b0f141a0083], a0.this$);
    }

    jdouble Float::doubleValue() const
    {
      return env->callDoubleMethod(this$, mids$[mid_doubleValue_9981f74b2d109da6]);
    }

    jboolean Float::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
    }

    jint Float::floatToIntBits(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_floatToIntBits_d5ac1630ba9f4935], a0);
    }

    jint Float::floatToRawIntBits(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_floatToRawIntBits_d5ac1630ba9f4935], a0);
    }

    jfloat Float::floatValue() const
    {
      return env->callFloatMethod(this$, mids$[mid_floatValue_0e3b995f823d65ff]);
    }

    jint Float::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
    }

    jint Float::hashCode(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticIntMethod(cls, mids$[mid_hashCode_d5ac1630ba9f4935], a0);
    }

    jfloat Float::intBitsToFloat(jint a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_intBitsToFloat_59a210c7132aa185], a0);
    }

    jint Float::intValue() const
    {
      return env->callIntMethod(this$, mids$[mid_intValue_d6ab429752e7c267]);
    }

    jboolean Float::isFinite(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isFinite_b6aee6d092d77be8], a0);
    }

    jboolean Float::isInfinite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInfinite_eee3de00fe971136]);
    }

    jboolean Float::isInfinite(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isInfinite_b6aee6d092d77be8], a0);
    }

    jboolean Float::isNaN() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNaN_eee3de00fe971136]);
    }

    jboolean Float::isNaN(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticBooleanMethod(cls, mids$[mid_isNaN_b6aee6d092d77be8], a0);
    }

    jlong Float::longValue() const
    {
      return env->callLongMethod(this$, mids$[mid_longValue_42c72b98e3c2e08a]);
    }

    jfloat Float::max$(jfloat a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_max_376a3c0184df58e2], a0, a1);
    }

    jfloat Float::min$(jfloat a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_min_376a3c0184df58e2], a0, a1);
    }

    jfloat Float::parseFloat(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_parseFloat_c3939e4dc4489413], a0.this$);
    }

    jshort Float::shortValue() const
    {
      return env->callShortMethod(this$, mids$[mid_shortValue_5067fec74ceda473]);
    }

    jfloat Float::sum(jfloat a0, jfloat a1)
    {
      jclass cls = env->getClass(initializeClass);
      return env->callStaticFloatMethod(cls, mids$[mid_sum_376a3c0184df58e2], a0, a1);
    }

    ::java::lang::String Float::toHexString(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toHexString_7e1d4f43ec30f721], a0));
    }

    ::java::lang::String Float::toString() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
    }

    ::java::lang::String Float::toString(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_toString_7e1d4f43ec30f721], a0));
    }

    Float Float::valueOf(const ::java::lang::String & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Float(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ea11f708afa49297], a0.this$));
    }

    Float Float::valueOf(jfloat a0)
    {
      jclass cls = env->getClass(initializeClass);
      return Float(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5f3d14c66eeca77d], a0));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace lang {
    static PyObject *t_Float_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_instance_(PyTypeObject *type, PyObject *arg);
    static int t_Float_init_(t_Float *self, PyObject *args, PyObject *kwds);
    static PyObject *t_Float_byteValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_compare(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_compareTo(t_Float *self, PyObject *arg);
    static PyObject *t_Float_doubleValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_equals(t_Float *self, PyObject *args);
    static PyObject *t_Float_floatToIntBits(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_floatToRawIntBits(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_floatValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_hashCode(t_Float *self, PyObject *args);
    static PyObject *t_Float_hashCode_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_intBitsToFloat(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_intValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_isFinite(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_isInfinite(t_Float *self);
    static PyObject *t_Float_isInfinite_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_isNaN(t_Float *self);
    static PyObject *t_Float_isNaN_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_longValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_max(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_min(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_parseFloat(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_shortValue(t_Float *self, PyObject *args);
    static PyObject *t_Float_sum(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_toHexString(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Float_toString(t_Float *self, PyObject *args);
    static PyObject *t_Float_toString_(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_valueOf(PyTypeObject *type, PyObject *args);
    static PyObject *t_Float_get__infinite(t_Float *self, void *data);
    static PyObject *t_Float_get__naN(t_Float *self, void *data);
    static PyGetSetDef t_Float__fields_[] = {
      DECLARE_GET_FIELD(t_Float, infinite),
      DECLARE_GET_FIELD(t_Float, naN),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Float__methods_[] = {
      DECLARE_METHOD(t_Float, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, byteValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, compare, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Float, compareTo, METH_O),
      DECLARE_METHOD(t_Float, doubleValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, equals, METH_VARARGS),
      DECLARE_METHOD(t_Float, floatToIntBits, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, floatToRawIntBits, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, floatValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_Float, hashCode_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, intBitsToFloat, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, intValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, isFinite, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, isInfinite, METH_NOARGS),
      DECLARE_METHOD(t_Float, isInfinite_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, isNaN, METH_NOARGS),
      DECLARE_METHOD(t_Float, isNaN_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, longValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, max, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Float, min, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Float, parseFloat, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, shortValue, METH_VARARGS),
      DECLARE_METHOD(t_Float, sum, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_Float, toHexString, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, toString, METH_VARARGS),
      DECLARE_METHOD(t_Float, toString_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Float, valueOf, METH_VARARGS | METH_CLASS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Float)[] = {
      { Py_tp_methods, t_Float__methods_ },
      { Py_tp_init, (void *) t_Float_init_ },
      { Py_tp_getset, t_Float__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Float)[] = {
      &PY_TYPE_DEF(::java::lang::Number),
      NULL
    };

    DEFINE_TYPE(Float, t_Float, Float);

    void t_Float::install(PyObject *module)
    {
      installType(&PY_TYPE(Float), &PY_TYPE_DEF(Float), module, "Float", 0);
    }

    void t_Float::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "class_", make_descriptor(Float::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "wrapfn_", make_descriptor(unboxFloat));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "boxfn_", make_descriptor(boxFloat));
      env->getClass(Float::initializeClass);
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "BYTES", make_descriptor(Float::BYTES));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "MAX_EXPONENT", make_descriptor(Float::MAX_EXPONENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "MAX_VALUE", make_descriptor(Float::MAX_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "MIN_EXPONENT", make_descriptor(Float::MIN_EXPONENT));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "MIN_NORMAL", make_descriptor(Float::MIN_NORMAL));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "MIN_VALUE", make_descriptor(Float::MIN_VALUE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "NEGATIVE_INFINITY", make_descriptor(Float::NEGATIVE_INFINITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "NaN", make_descriptor(Float::NaN));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "POSITIVE_INFINITY", make_descriptor(Float::POSITIVE_INFINITY));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "SIZE", make_descriptor(Float::SIZE));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Float), "TYPE", make_descriptor(::java::lang::t_Class::wrap_Object(*Float::TYPE)));
    }

    static PyObject *t_Float_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Float::initializeClass, 1)))
        return NULL;
      return t_Float::wrap_Object(Float(((t_Float *) arg)->object.this$));
    }
    static PyObject *t_Float_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Float::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_Float_init_(t_Float *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Float object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = Float(a0));
            self->object = object;
            break;
          }
        }
        {
          jdouble a0;
          Float object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Float(a0));
            self->object = object;
            break;
          }
        }
        {
          jfloat a0;
          Float object((jobject) NULL);

          if (!parseArgs(args, "F", &a0))
          {
            INT_CALL(object = Float(a0));
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

    static PyObject *t_Float_byteValue(t_Float *self, PyObject *args)
    {
      jbyte result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.byteValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "byteValue", args, 2);
    }

    static PyObject *t_Float_compare(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      jfloat a1;
      jint result;

      if (!parseArgs(args, "FF", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Float::compare(a0, a1));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "compare", args);
      return NULL;
    }

    static PyObject *t_Float_compareTo(t_Float *self, PyObject *arg)
    {
      Float a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "O", ::java::lang::PY_TYPE(Float), &a0))
      {
        OBJ_CALL(result = self->object.compareTo(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "compareTo", arg);
      return NULL;
    }

    static PyObject *t_Float_doubleValue(t_Float *self, PyObject *args)
    {
      jdouble result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.doubleValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "doubleValue", args, 2);
    }

    static PyObject *t_Float_equals(t_Float *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_Float_floatToIntBits(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      jint result;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::floatToIntBits(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "floatToIntBits", arg);
      return NULL;
    }

    static PyObject *t_Float_floatToRawIntBits(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      jint result;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::floatToRawIntBits(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "floatToRawIntBits", arg);
      return NULL;
    }

    static PyObject *t_Float_floatValue(t_Float *self, PyObject *args)
    {
      jfloat result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.floatValue());
        return PyFloat_FromDouble((double) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "floatValue", args, 2);
    }

    static PyObject *t_Float_hashCode(t_Float *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_Float_hashCode_(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      jint result;

      if (!parseArgs(args, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::hashCode(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError(type, "hashCode_", args);
      return NULL;
    }

    static PyObject *t_Float_intBitsToFloat(PyTypeObject *type, PyObject *arg)
    {
      jint a0;
      jfloat result;

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::intBitsToFloat(a0));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "intBitsToFloat", arg);
      return NULL;
    }

    static PyObject *t_Float_intValue(t_Float *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "intValue", args, 2);
    }

    static PyObject *t_Float_isFinite(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      jboolean result;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::isFinite(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isFinite", arg);
      return NULL;
    }

    static PyObject *t_Float_isInfinite(t_Float *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInfinite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Float_isInfinite_(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      jboolean result;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::isInfinite(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isInfinite_", arg);
      return NULL;
    }

    static PyObject *t_Float_isNaN(t_Float *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isNaN());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Float_isNaN_(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      jboolean result;

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::isNaN(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError(type, "isNaN_", arg);
      return NULL;
    }

    static PyObject *t_Float_longValue(t_Float *self, PyObject *args)
    {
      jlong result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.longValue());
        return PyLong_FromLongLong((PY_LONG_LONG) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "longValue", args, 2);
    }

    static PyObject *t_Float_max(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      jfloat a1;
      jfloat result;

      if (!parseArgs(args, "FF", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Float::max$(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "max", args);
      return NULL;
    }

    static PyObject *t_Float_min(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      jfloat a1;
      jfloat result;

      if (!parseArgs(args, "FF", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Float::min$(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "min", args);
      return NULL;
    }

    static PyObject *t_Float_parseFloat(PyTypeObject *type, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);
      jfloat result;

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::parseFloat(a0));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "parseFloat", arg);
      return NULL;
    }

    static PyObject *t_Float_shortValue(t_Float *self, PyObject *args)
    {
      jshort result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.shortValue());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "shortValue", args, 2);
    }

    static PyObject *t_Float_sum(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      jfloat a1;
      jfloat result;

      if (!parseArgs(args, "FF", &a0, &a1))
      {
        OBJ_CALL(result = ::java::lang::Float::sum(a0, a1));
        return PyFloat_FromDouble((double) result);
      }

      PyErr_SetArgsError(type, "sum", args);
      return NULL;
    }

    static PyObject *t_Float_toHexString(PyTypeObject *type, PyObject *arg)
    {
      jfloat a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArg(arg, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::toHexString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toHexString", arg);
      return NULL;
    }

    static PyObject *t_Float_toString(t_Float *self, PyObject *args)
    {
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.toString());
        return j2p(result);
      }

      return callSuper(PY_TYPE(Float), (PyObject *) self, "toString", args, 2);
    }

    static PyObject *t_Float_toString_(PyTypeObject *type, PyObject *args)
    {
      jfloat a0;
      ::java::lang::String result((jobject) NULL);

      if (!parseArgs(args, "F", &a0))
      {
        OBJ_CALL(result = ::java::lang::Float::toString(a0));
        return j2p(result);
      }

      PyErr_SetArgsError(type, "toString_", args);
      return NULL;
    }

    static PyObject *t_Float_valueOf(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::String a0((jobject) NULL);
          Float result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::java::lang::Float::valueOf(a0));
            return t_Float::wrap_Object(result);
          }
        }
        {
          jfloat a0;
          Float result((jobject) NULL);

          if (!parseArgs(args, "F", &a0))
          {
            OBJ_CALL(result = ::java::lang::Float::valueOf(a0));
            return t_Float::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "valueOf", args);
      return NULL;
    }

    static PyObject *t_Float_get__infinite(t_Float *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isInfinite());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_Float_get__naN(t_Float *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isNaN());
      Py_RETURN_BOOL(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/FieldEcksteinHechlerPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/orbits/FieldCartesianOrbit.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/orbits/FieldCircularOrbit.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *FieldEcksteinHechlerPropagator::class$ = NULL;
        jmethodID *FieldEcksteinHechlerPropagator::mids$ = NULL;
        bool FieldEcksteinHechlerPropagator::live$ = false;

        jclass FieldEcksteinHechlerPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/FieldEcksteinHechlerPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_314c820a1e7c1663] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_00b0f0fb56ada103] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_5d73c911c6505852] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_81dd29e3f76becc4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_667cf325ea473d95] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
            mids$[mid_init$_cc10f06afbe3845e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_7f9085f23fe2ce31] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;)V");
            mids$[mid_init$_93d4e17fc1c6322f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_516817cd6ce61a98] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_73d8738a0663d568] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_13e083b192b89480] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_a687bf3ab3b85a69] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDD)V");
            mids$[mid_init$_50bc4fb32621f1b9] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDDLorg/orekit/propagation/PropagationType;)V");
            mids$[mid_init$_e4ba29684db311f5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;DLorg/hipparchus/CalculusFieldElement;DDDDDLorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_computeMeanOrbit_ec0388255b81801d] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;)Lorg/orekit/orbits/FieldCircularOrbit;");
            mids$[mid_computeMeanOrbit_4c0a7cd91e5cf959] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics;DI)Lorg/orekit/orbits/FieldCircularOrbit;");
            mids$[mid_computeMeanOrbit_d5a538763ec8a70f] = env->getStaticMethodID(cls, "computeMeanOrbit", "(Lorg/orekit/orbits/FieldOrbit;DDDDDDDDI)Lorg/orekit/orbits/FieldCircularOrbit;");
            mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_propagateOrbit_046039a02b0078e7] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldCartesianOrbit;");
            mids$[mid_resetInitialState_8062511934471166] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_resetInitialState_b193ef1b0d3797c6] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;)V");
            mids$[mid_resetInitialState_ef341cfbe40e092e] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/PropagationType;DI)V");
            mids$[mid_getMass_cf010978f3c5a913] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_resetIntermediateState_66f0dc53586b0de6] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;ZDI)V");
            mids$[mid_resetIntermediateState_e90aea08a7a0ab5e] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_314c820a1e7c1663, a0.this$, a1.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::propagation::PropagationType & a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_00b0f0fb56ada103, a0.this$, a1.this$, a2.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_5d73c911c6505852, a0.this$, a1.this$, a2.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a2) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_81dd29e3f76becc4, a0.this$, a1.this$, a2.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_667cf325ea473d95, a0.this$, a1.this$, a2.this$, a3.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::propagation::PropagationType & a4) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_cc10f06afbe3845e, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_7f9085f23fe2ce31, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a3, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a4, const ::org::orekit::propagation::PropagationType & a5) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_93d4e17fc1c6322f, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, jdouble a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_516817cd6ce61a98, a0.this$, a1, a2.this$, a3, a4, a5, a6, a7)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_73d8738a0663d568, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::hipparchus::CalculusFieldElement & a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_13e083b192b89480, a0.this$, a1.this$, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_a687bf3ab3b85a69, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, const ::org::orekit::propagation::PropagationType & a10) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_50bc4fb32621f1b9, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9, a10.this$)) {}

        FieldEcksteinHechlerPropagator::FieldEcksteinHechlerPropagator(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, jdouble a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, const ::org::orekit::propagation::PropagationType & a10, jdouble a11, jint a12) : ::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_e4ba29684db311f5, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5, a6, a7, a8, a9, a10.this$, a11, a12)) {}

        ::org::orekit::orbits::FieldCircularOrbit FieldEcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldCircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_ec0388255b81801d], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::orbits::FieldCircularOrbit FieldEcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics & a2, jdouble a3, jint a4)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldCircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_4c0a7cd91e5cf959], a0.this$, a1.this$, a2.this$, a3, a4));
        }

        ::org::orekit::orbits::FieldCircularOrbit FieldEcksteinHechlerPropagator::computeMeanOrbit(const ::org::orekit::orbits::FieldOrbit & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jint a9)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::orekit::orbits::FieldCircularOrbit(env->callStaticObjectMethod(cls, mids$[mid_computeMeanOrbit_d5a538763ec8a70f], a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9));
        }

        ::java::util::List FieldEcksteinHechlerPropagator::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
        }

        ::org::orekit::orbits::FieldCartesianOrbit FieldEcksteinHechlerPropagator::propagateOrbit(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::orekit::orbits::FieldCartesianOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_046039a02b0078e7], a0.this$, a1.this$));
        }

        void FieldEcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_8062511934471166], a0.this$);
        }

        void FieldEcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_b193ef1b0d3797c6], a0.this$, a1.this$);
        }

        void FieldEcksteinHechlerPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::PropagationType & a1, jdouble a2, jint a3) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_ef341cfbe40e092e], a0.this$, a1.this$, a2, a3);
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
        static PyObject *t_FieldEcksteinHechlerPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEcksteinHechlerPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEcksteinHechlerPropagator_of_(t_FieldEcksteinHechlerPropagator *self, PyObject *args);
        static int t_FieldEcksteinHechlerPropagator_init_(t_FieldEcksteinHechlerPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEcksteinHechlerPropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldEcksteinHechlerPropagator_getParametersDrivers(t_FieldEcksteinHechlerPropagator *self, PyObject *args);
        static PyObject *t_FieldEcksteinHechlerPropagator_propagateOrbit(t_FieldEcksteinHechlerPropagator *self, PyObject *args);
        static PyObject *t_FieldEcksteinHechlerPropagator_resetInitialState(t_FieldEcksteinHechlerPropagator *self, PyObject *args);
        static PyObject *t_FieldEcksteinHechlerPropagator_get__parametersDrivers(t_FieldEcksteinHechlerPropagator *self, void *data);
        static PyObject *t_FieldEcksteinHechlerPropagator_get__parameters_(t_FieldEcksteinHechlerPropagator *self, void *data);
        static PyGetSetDef t_FieldEcksteinHechlerPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEcksteinHechlerPropagator, parametersDrivers),
          DECLARE_GET_FIELD(t_FieldEcksteinHechlerPropagator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEcksteinHechlerPropagator__methods_[] = {
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, computeMeanOrbit, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, getParametersDrivers, METH_VARARGS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, propagateOrbit, METH_VARARGS),
          DECLARE_METHOD(t_FieldEcksteinHechlerPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEcksteinHechlerPropagator)[] = {
          { Py_tp_methods, t_FieldEcksteinHechlerPropagator__methods_ },
          { Py_tp_init, (void *) t_FieldEcksteinHechlerPropagator_init_ },
          { Py_tp_getset, t_FieldEcksteinHechlerPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEcksteinHechlerPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::FieldAbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(FieldEcksteinHechlerPropagator, t_FieldEcksteinHechlerPropagator, FieldEcksteinHechlerPropagator);
        PyObject *t_FieldEcksteinHechlerPropagator::wrap_Object(const FieldEcksteinHechlerPropagator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEcksteinHechlerPropagator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEcksteinHechlerPropagator *self = (t_FieldEcksteinHechlerPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEcksteinHechlerPropagator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEcksteinHechlerPropagator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEcksteinHechlerPropagator *self = (t_FieldEcksteinHechlerPropagator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEcksteinHechlerPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEcksteinHechlerPropagator), &PY_TYPE_DEF(FieldEcksteinHechlerPropagator), module, "FieldEcksteinHechlerPropagator", 0);
        }

        void t_FieldEcksteinHechlerPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEcksteinHechlerPropagator), "class_", make_descriptor(FieldEcksteinHechlerPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEcksteinHechlerPropagator), "wrapfn_", make_descriptor(t_FieldEcksteinHechlerPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEcksteinHechlerPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEcksteinHechlerPropagator::initializeClass, 1)))
            return NULL;
          return t_FieldEcksteinHechlerPropagator::wrap_Object(FieldEcksteinHechlerPropagator(((t_FieldEcksteinHechlerPropagator *) arg)->object.this$));
        }
        static PyObject *t_FieldEcksteinHechlerPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEcksteinHechlerPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_of_(t_FieldEcksteinHechlerPropagator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEcksteinHechlerPropagator_init_(t_FieldEcksteinHechlerPropagator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "Kk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::propagation::PropagationType a2((jobject) NULL);
              PyTypeObject **p2;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KKk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a2((jobject) NULL);
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "Kkk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::propagation::PropagationType a4((jobject) NULL);
              PyTypeObject **p4;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            goto err;
           case 6:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a3((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a4((jobject) NULL);
              ::org::orekit::propagation::PropagationType a5((jobject) NULL);
              PyTypeObject **p5;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKkkK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &a5, &p5, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5));
                self->object = object;
                break;
              }
            }
            goto err;
           case 8:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            goto err;
           case 9:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KKDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              jdouble a2;
              ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &a5, &a6, &a7, &a8))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8));
                self->object = object;
                break;
              }
            }
            goto err;
           case 10:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                self->object = object;
                break;
              }
            }
            goto err;
           case 11:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              ::org::orekit::propagation::PropagationType a10((jobject) NULL);
              PyTypeObject **p10;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDDK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9, &a10, &p10, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10));
                self->object = object;
                break;
              }
            }
            goto err;
           case 13:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jdouble a9;
              ::org::orekit::propagation::PropagationType a10((jobject) NULL);
              PyTypeObject **p10;
              jdouble a11;
              jint a12;
              FieldEcksteinHechlerPropagator object((jobject) NULL);

              if (!parseArgs(args, "KkKDKDDDDDKDI", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &a6, &a7, &a8, &a9, &a10, &p10, ::org::orekit::propagation::t_PropagationType::parameters_, &a11, &a12))
              {
                INT_CALL(object = FieldEcksteinHechlerPropagator(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
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

        static PyObject *t_FieldEcksteinHechlerPropagator_computeMeanOrbit(PyTypeObject *type, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              ::org::orekit::orbits::FieldCircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "Kkk", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldEcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2));
                return ::org::orekit::orbits::t_FieldCircularOrbit::wrap_Object(result);
              }
            }
            break;
           case 5:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics a2((jobject) NULL);
              jdouble a3;
              jint a4;
              ::org::orekit::orbits::FieldCircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "KkkDI", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider$UnnormalizedSphericalHarmonics::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &a4))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldEcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2, a3, a4));
                return ::org::orekit::orbits::t_FieldCircularOrbit::wrap_Object(result);
              }
            }
            break;
           case 10:
            {
              ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
              PyTypeObject **p0;
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              jdouble a8;
              jint a9;
              ::org::orekit::orbits::FieldCircularOrbit result((jobject) NULL);

              if (!parseArgs(args, "KDDDDDDDDI", ::org::orekit::orbits::FieldOrbit::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9))
              {
                OBJ_CALL(result = ::org::orekit::propagation::analytical::FieldEcksteinHechlerPropagator::computeMeanOrbit(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9));
                return ::org::orekit::orbits::t_FieldCircularOrbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError(type, "computeMeanOrbit", args);
          return NULL;
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_getParametersDrivers(t_FieldEcksteinHechlerPropagator *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          return callSuper(PY_TYPE(FieldEcksteinHechlerPropagator), (PyObject *) self, "getParametersDrivers", args, 2);
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_propagateOrbit(t_FieldEcksteinHechlerPropagator *self, PyObject *args)
        {
          ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::orbits::FieldCartesianOrbit result((jobject) NULL);

          if (!parseArgs(args, "K[K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.propagateOrbit(a0, a1));
            return ::org::orekit::orbits::t_FieldCartesianOrbit::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "propagateOrbit", args);
          return NULL;
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_resetInitialState(t_FieldEcksteinHechlerPropagator *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
              {
                OBJ_CALL(self->object.resetInitialState(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1));
                Py_RETURN_NONE;
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::PropagationType a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              jint a3;

              if (!parseArgs(args, "KKDI", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &a3))
              {
                OBJ_CALL(self->object.resetInitialState(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          return callSuper(PY_TYPE(FieldEcksteinHechlerPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }
        static PyObject *t_FieldEcksteinHechlerPropagator_get__parameters_(t_FieldEcksteinHechlerPropagator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEcksteinHechlerPropagator_get__parametersDrivers(t_FieldEcksteinHechlerPropagator *self, void *data)
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
#include "org/orekit/time/UTCTAIBulletinAFilesLoader.h"
#include "java/util/List.h"
#include "org/orekit/time/UTCTAIOffsetsLoader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "org/orekit/time/OffsetModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UTCTAIBulletinAFilesLoader::class$ = NULL;
      jmethodID *UTCTAIBulletinAFilesLoader::mids$ = NULL;
      bool UTCTAIBulletinAFilesLoader::live$ = false;

      jclass UTCTAIBulletinAFilesLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UTCTAIBulletinAFilesLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_4c16e57d19ddaa09] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;)V");
          mids$[mid_loadOffsets_d751c1a57012b438] = env->getMethodID(cls, "loadOffsets", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      UTCTAIBulletinAFilesLoader::UTCTAIBulletinAFilesLoader(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

      UTCTAIBulletinAFilesLoader::UTCTAIBulletinAFilesLoader(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_4c16e57d19ddaa09, a0.this$, a1.this$)) {}

      ::java::util::List UTCTAIBulletinAFilesLoader::loadOffsets() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_loadOffsets_d751c1a57012b438]));
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
      static PyObject *t_UTCTAIBulletinAFilesLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UTCTAIBulletinAFilesLoader_instance_(PyTypeObject *type, PyObject *arg);
      static int t_UTCTAIBulletinAFilesLoader_init_(t_UTCTAIBulletinAFilesLoader *self, PyObject *args, PyObject *kwds);
      static PyObject *t_UTCTAIBulletinAFilesLoader_loadOffsets(t_UTCTAIBulletinAFilesLoader *self);

      static PyMethodDef t_UTCTAIBulletinAFilesLoader__methods_[] = {
        DECLARE_METHOD(t_UTCTAIBulletinAFilesLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIBulletinAFilesLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UTCTAIBulletinAFilesLoader, loadOffsets, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UTCTAIBulletinAFilesLoader)[] = {
        { Py_tp_methods, t_UTCTAIBulletinAFilesLoader__methods_ },
        { Py_tp_init, (void *) t_UTCTAIBulletinAFilesLoader_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UTCTAIBulletinAFilesLoader)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(UTCTAIBulletinAFilesLoader, t_UTCTAIBulletinAFilesLoader, UTCTAIBulletinAFilesLoader);

      void t_UTCTAIBulletinAFilesLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(UTCTAIBulletinAFilesLoader), &PY_TYPE_DEF(UTCTAIBulletinAFilesLoader), module, "UTCTAIBulletinAFilesLoader", 0);
      }

      void t_UTCTAIBulletinAFilesLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIBulletinAFilesLoader), "class_", make_descriptor(UTCTAIBulletinAFilesLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIBulletinAFilesLoader), "wrapfn_", make_descriptor(t_UTCTAIBulletinAFilesLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UTCTAIBulletinAFilesLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UTCTAIBulletinAFilesLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UTCTAIBulletinAFilesLoader::initializeClass, 1)))
          return NULL;
        return t_UTCTAIBulletinAFilesLoader::wrap_Object(UTCTAIBulletinAFilesLoader(((t_UTCTAIBulletinAFilesLoader *) arg)->object.this$));
      }
      static PyObject *t_UTCTAIBulletinAFilesLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UTCTAIBulletinAFilesLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_UTCTAIBulletinAFilesLoader_init_(t_UTCTAIBulletinAFilesLoader *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            UTCTAIBulletinAFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = UTCTAIBulletinAFilesLoader(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            UTCTAIBulletinAFilesLoader object((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::data::DataProvidersManager::initializeClass, &a0, &a1))
            {
              INT_CALL(object = UTCTAIBulletinAFilesLoader(a0, a1));
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

      static PyObject *t_UTCTAIBulletinAFilesLoader_loadOffsets(t_UTCTAIBulletinAFilesLoader *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.loadOffsets());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::time::PY_TYPE(OffsetModel));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPFParser.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/ilrs/CPF.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPFParser::class$ = NULL;
        jmethodID *CPFParser::mids$ = NULL;
        bool CPFParser::live$ = false;

        jclass CPFParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPFParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_bcab07fbf8b8473d] = env->getMethodID(cls, "<init>", "(DILorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Lorg/orekit/frames/Frames;)V");
            mids$[mid_parse_185cd140231d0a14] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ilrs/CPF;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPFParser::CPFParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        CPFParser::CPFParser(jdouble a0, jint a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::time::TimeScale & a3, const ::org::orekit::frames::Frames & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bcab07fbf8b8473d, a0, a1, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::files::ilrs::CPF CPFParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::ilrs::CPF(env->callObjectMethod(this$, mids$[mid_parse_185cd140231d0a14], a0.this$));
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
        static PyObject *t_CPFParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPFParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPFParser_init_(t_CPFParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPFParser_parse(t_CPFParser *self, PyObject *arg);

        static PyMethodDef t_CPFParser__methods_[] = {
          DECLARE_METHOD(t_CPFParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPFParser)[] = {
          { Py_tp_methods, t_CPFParser__methods_ },
          { Py_tp_init, (void *) t_CPFParser_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPFParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CPFParser, t_CPFParser, CPFParser);

        void t_CPFParser::install(PyObject *module)
        {
          installType(&PY_TYPE(CPFParser), &PY_TYPE_DEF(CPFParser), module, "CPFParser", 0);
        }

        void t_CPFParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFParser), "class_", make_descriptor(CPFParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFParser), "wrapfn_", make_descriptor(t_CPFParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFParser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPFParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPFParser::initializeClass, 1)))
            return NULL;
          return t_CPFParser::wrap_Object(CPFParser(((t_CPFParser *) arg)->object.this$));
        }
        static PyObject *t_CPFParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPFParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPFParser_init_(t_CPFParser *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              CPFParser object((jobject) NULL);

              INT_CALL(object = CPFParser());
              self->object = object;
              break;
            }
           case 5:
            {
              jdouble a0;
              jint a1;
              ::org::orekit::utils::IERSConventions a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeScale a3((jobject) NULL);
              ::org::orekit::frames::Frames a4((jobject) NULL);
              CPFParser object((jobject) NULL);

              if (!parseArgs(args, "DIKkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::Frames::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3, &a4))
              {
                INT_CALL(object = CPFParser(a0, a1, a2, a3, a4));
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

        static PyObject *t_CPFParser_parse(t_CPFParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::ilrs::CPF result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::org::orekit::files::ilrs::t_CPF::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AbstractDualFrequencyCombination.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationData.h"
#include "org/orekit/files/rinex/observation/ObservationData.h"
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

          ::java::lang::Class *AbstractDualFrequencyCombination::class$ = NULL;
          jmethodID *AbstractDualFrequencyCombination::mids$ = NULL;
          bool AbstractDualFrequencyCombination::live$ = false;
          jdouble AbstractDualFrequencyCombination::MHZ_TO_HZ = (jdouble) 0;

          jclass AbstractDualFrequencyCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractDualFrequencyCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_combine_34f94a0e1855db7e] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_combine_221f3e8aea4f942e] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationData;Lorg/orekit/files/rinex/observation/ObservationData;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationData;");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getCombinedValue_ac28f5c378fae636] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_9364fb0b7015b098] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MHZ_TO_HZ = env->getStaticDoubleField(cls, "MHZ_TO_HZ");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet AbstractDualFrequencyCombination::combine(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet(env->callObjectMethod(this$, mids$[mid_combine_34f94a0e1855db7e], a0.this$));
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationData AbstractDualFrequencyCombination::combine(const ::org::orekit::files::rinex::observation::ObservationData & a0, const ::org::orekit::files::rinex::observation::ObservationData & a1) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationData(env->callObjectMethod(this$, mids$[mid_combine_221f3e8aea4f942e], a0.this$, a1.this$));
          }

          ::java::lang::String AbstractDualFrequencyCombination::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
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
          static PyObject *t_AbstractDualFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractDualFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractDualFrequencyCombination_combine(t_AbstractDualFrequencyCombination *self, PyObject *args);
          static PyObject *t_AbstractDualFrequencyCombination_getName(t_AbstractDualFrequencyCombination *self);
          static PyObject *t_AbstractDualFrequencyCombination_get__name(t_AbstractDualFrequencyCombination *self, void *data);
          static PyGetSetDef t_AbstractDualFrequencyCombination__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractDualFrequencyCombination, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractDualFrequencyCombination__methods_[] = {
            DECLARE_METHOD(t_AbstractDualFrequencyCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractDualFrequencyCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractDualFrequencyCombination, combine, METH_VARARGS),
            DECLARE_METHOD(t_AbstractDualFrequencyCombination, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractDualFrequencyCombination)[] = {
            { Py_tp_methods, t_AbstractDualFrequencyCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractDualFrequencyCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractDualFrequencyCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractDualFrequencyCombination, t_AbstractDualFrequencyCombination, AbstractDualFrequencyCombination);

          void t_AbstractDualFrequencyCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractDualFrequencyCombination), &PY_TYPE_DEF(AbstractDualFrequencyCombination), module, "AbstractDualFrequencyCombination", 0);
          }

          void t_AbstractDualFrequencyCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDualFrequencyCombination), "class_", make_descriptor(AbstractDualFrequencyCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDualFrequencyCombination), "wrapfn_", make_descriptor(t_AbstractDualFrequencyCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDualFrequencyCombination), "boxfn_", make_descriptor(boxObject));
            env->getClass(AbstractDualFrequencyCombination::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDualFrequencyCombination), "MHZ_TO_HZ", make_descriptor(AbstractDualFrequencyCombination::MHZ_TO_HZ));
          }

          static PyObject *t_AbstractDualFrequencyCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractDualFrequencyCombination::initializeClass, 1)))
              return NULL;
            return t_AbstractDualFrequencyCombination::wrap_Object(AbstractDualFrequencyCombination(((t_AbstractDualFrequencyCombination *) arg)->object.this$));
          }
          static PyObject *t_AbstractDualFrequencyCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractDualFrequencyCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractDualFrequencyCombination_combine(t_AbstractDualFrequencyCombination *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);
                ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.combine(a0));
                  return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationDataSet::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::files::rinex::observation::ObservationData a0((jobject) NULL);
                ::org::orekit::files::rinex::observation::ObservationData a1((jobject) NULL);
                ::org::orekit::estimation::measurements::gnss::CombinedObservationData result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::files::rinex::observation::ObservationData::initializeClass, ::org::orekit::files::rinex::observation::ObservationData::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.combine(a0, a1));
                  return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationData::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "combine", args);
            return NULL;
          }

          static PyObject *t_AbstractDualFrequencyCombination_getName(t_AbstractDualFrequencyCombination *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_AbstractDualFrequencyCombination_get__name(t_AbstractDualFrequencyCombination *self, void *data)
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
#include "org/orekit/data/DelaunayArguments.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DelaunayArguments::class$ = NULL;
      jmethodID *DelaunayArguments::mids$ = NULL;
      bool DelaunayArguments::live$ = false;

      jclass DelaunayArguments::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DelaunayArguments");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_33f31e67f32dc013] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDDDDDDDDDDD)V");
          mids$[mid_getD_9981f74b2d109da6] = env->getMethodID(cls, "getD", "()D");
          mids$[mid_getDDot_9981f74b2d109da6] = env->getMethodID(cls, "getDDot", "()D");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getF_9981f74b2d109da6] = env->getMethodID(cls, "getF", "()D");
          mids$[mid_getFDot_9981f74b2d109da6] = env->getMethodID(cls, "getFDot", "()D");
          mids$[mid_getGamma_9981f74b2d109da6] = env->getMethodID(cls, "getGamma", "()D");
          mids$[mid_getGammaDot_9981f74b2d109da6] = env->getMethodID(cls, "getGammaDot", "()D");
          mids$[mid_getL_9981f74b2d109da6] = env->getMethodID(cls, "getL", "()D");
          mids$[mid_getLDot_9981f74b2d109da6] = env->getMethodID(cls, "getLDot", "()D");
          mids$[mid_getLPrime_9981f74b2d109da6] = env->getMethodID(cls, "getLPrime", "()D");
          mids$[mid_getLPrimeDot_9981f74b2d109da6] = env->getMethodID(cls, "getLPrimeDot", "()D");
          mids$[mid_getOmega_9981f74b2d109da6] = env->getMethodID(cls, "getOmega", "()D");
          mids$[mid_getOmegaDot_9981f74b2d109da6] = env->getMethodID(cls, "getOmegaDot", "()D");
          mids$[mid_getTC_9981f74b2d109da6] = env->getMethodID(cls, "getTC", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DelaunayArguments::DelaunayArguments(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, jdouble a11, jdouble a12, jdouble a13) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_33f31e67f32dc013, a0.this$, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13)) {}

      jdouble DelaunayArguments::getD() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getD_9981f74b2d109da6]);
      }

      jdouble DelaunayArguments::getDDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDDot_9981f74b2d109da6]);
      }

      ::org::orekit::time::AbsoluteDate DelaunayArguments::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
      }

      jdouble DelaunayArguments::getF() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getF_9981f74b2d109da6]);
      }

      jdouble DelaunayArguments::getFDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getFDot_9981f74b2d109da6]);
      }

      jdouble DelaunayArguments::getGamma() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGamma_9981f74b2d109da6]);
      }

      jdouble DelaunayArguments::getGammaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getGammaDot_9981f74b2d109da6]);
      }

      jdouble DelaunayArguments::getL() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getL_9981f74b2d109da6]);
      }

      jdouble DelaunayArguments::getLDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLDot_9981f74b2d109da6]);
      }

      jdouble DelaunayArguments::getLPrime() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLPrime_9981f74b2d109da6]);
      }

      jdouble DelaunayArguments::getLPrimeDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLPrimeDot_9981f74b2d109da6]);
      }

      jdouble DelaunayArguments::getOmega() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOmega_9981f74b2d109da6]);
      }

      jdouble DelaunayArguments::getOmegaDot() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_9981f74b2d109da6]);
      }

      jdouble DelaunayArguments::getTC() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getTC_9981f74b2d109da6]);
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
      static PyObject *t_DelaunayArguments_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DelaunayArguments_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DelaunayArguments_init_(t_DelaunayArguments *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DelaunayArguments_getD(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getDDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getDate(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getF(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getFDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getGamma(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getGammaDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getL(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getLDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getLPrime(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getLPrimeDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getOmega(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getOmegaDot(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_getTC(t_DelaunayArguments *self);
      static PyObject *t_DelaunayArguments_get__d(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__dDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__date(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__f(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__fDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__gamma(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__gammaDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__l(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__lDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__lPrime(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__lPrimeDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__omega(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__omegaDot(t_DelaunayArguments *self, void *data);
      static PyObject *t_DelaunayArguments_get__tC(t_DelaunayArguments *self, void *data);
      static PyGetSetDef t_DelaunayArguments__fields_[] = {
        DECLARE_GET_FIELD(t_DelaunayArguments, d),
        DECLARE_GET_FIELD(t_DelaunayArguments, dDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, date),
        DECLARE_GET_FIELD(t_DelaunayArguments, f),
        DECLARE_GET_FIELD(t_DelaunayArguments, fDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, gamma),
        DECLARE_GET_FIELD(t_DelaunayArguments, gammaDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, l),
        DECLARE_GET_FIELD(t_DelaunayArguments, lDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, lPrime),
        DECLARE_GET_FIELD(t_DelaunayArguments, lPrimeDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, omega),
        DECLARE_GET_FIELD(t_DelaunayArguments, omegaDot),
        DECLARE_GET_FIELD(t_DelaunayArguments, tC),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DelaunayArguments__methods_[] = {
        DECLARE_METHOD(t_DelaunayArguments, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DelaunayArguments, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DelaunayArguments, getD, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getDDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getDate, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getF, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getFDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getGamma, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getGammaDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getL, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getLDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getLPrime, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getLPrimeDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getOmega, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getOmegaDot, METH_NOARGS),
        DECLARE_METHOD(t_DelaunayArguments, getTC, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DelaunayArguments)[] = {
        { Py_tp_methods, t_DelaunayArguments__methods_ },
        { Py_tp_init, (void *) t_DelaunayArguments_init_ },
        { Py_tp_getset, t_DelaunayArguments__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DelaunayArguments)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DelaunayArguments, t_DelaunayArguments, DelaunayArguments);

      void t_DelaunayArguments::install(PyObject *module)
      {
        installType(&PY_TYPE(DelaunayArguments), &PY_TYPE_DEF(DelaunayArguments), module, "DelaunayArguments", 0);
      }

      void t_DelaunayArguments::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DelaunayArguments), "class_", make_descriptor(DelaunayArguments::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DelaunayArguments), "wrapfn_", make_descriptor(t_DelaunayArguments::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DelaunayArguments), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DelaunayArguments_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DelaunayArguments::initializeClass, 1)))
          return NULL;
        return t_DelaunayArguments::wrap_Object(DelaunayArguments(((t_DelaunayArguments *) arg)->object.this$));
      }
      static PyObject *t_DelaunayArguments_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DelaunayArguments::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DelaunayArguments_init_(t_DelaunayArguments *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble a1;
        jdouble a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        jdouble a7;
        jdouble a8;
        jdouble a9;
        jdouble a10;
        jdouble a11;
        jdouble a12;
        jdouble a13;
        DelaunayArguments object((jobject) NULL);

        if (!parseArgs(args, "kDDDDDDDDDDDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13))
        {
          INT_CALL(object = DelaunayArguments(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DelaunayArguments_getD(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getD());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getDDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getDate(t_DelaunayArguments *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_DelaunayArguments_getF(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getF());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getFDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getFDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getGamma(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGamma());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getGammaDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getGammaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getL(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getL());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getLDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getLPrime(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLPrime());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getLPrimeDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLPrimeDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getOmega(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOmega());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getOmegaDot(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOmegaDot());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_getTC(t_DelaunayArguments *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getTC());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DelaunayArguments_get__d(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getD());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__dDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__date(t_DelaunayArguments *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_DelaunayArguments_get__f(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getF());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__fDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getFDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__gamma(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGamma());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__gammaDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getGammaDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__l(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getL());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__lDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__lPrime(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLPrime());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__lPrimeDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLPrimeDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__omega(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOmega());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__omegaDot(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOmegaDot());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_DelaunayArguments_get__tC(t_DelaunayArguments *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getTC());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/TTest.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/StatisticalSummary.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *TTest::class$ = NULL;
        jmethodID *TTest::mids$ = NULL;
        bool TTest::live$ = false;

        jclass TTest::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/TTest");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_homoscedasticT_b01af8a77d4df96f] = env->getMethodID(cls, "homoscedasticT", "([D[D)D");
            mids$[mid_homoscedasticT_f5214cbd47f47c82] = env->getMethodID(cls, "homoscedasticT", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_homoscedasticTTest_b01af8a77d4df96f] = env->getMethodID(cls, "homoscedasticTTest", "([D[D)D");
            mids$[mid_homoscedasticTTest_f5214cbd47f47c82] = env->getMethodID(cls, "homoscedasticTTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_homoscedasticTTest_9813d7ac14cb2486] = env->getMethodID(cls, "homoscedasticTTest", "([D[DD)Z");
            mids$[mid_pairedT_b01af8a77d4df96f] = env->getMethodID(cls, "pairedT", "([D[D)D");
            mids$[mid_pairedTTest_b01af8a77d4df96f] = env->getMethodID(cls, "pairedTTest", "([D[D)D");
            mids$[mid_pairedTTest_9813d7ac14cb2486] = env->getMethodID(cls, "pairedTTest", "([D[DD)Z");
            mids$[mid_t_b01af8a77d4df96f] = env->getMethodID(cls, "t", "([D[D)D");
            mids$[mid_t_4f42c7a8793320e4] = env->getMethodID(cls, "t", "(D[D)D");
            mids$[mid_t_903f0d6f6e0dac90] = env->getMethodID(cls, "t", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_t_f5214cbd47f47c82] = env->getMethodID(cls, "t", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_b01af8a77d4df96f] = env->getMethodID(cls, "tTest", "([D[D)D");
            mids$[mid_tTest_4f42c7a8793320e4] = env->getMethodID(cls, "tTest", "(D[D)D");
            mids$[mid_tTest_903f0d6f6e0dac90] = env->getMethodID(cls, "tTest", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_f5214cbd47f47c82] = env->getMethodID(cls, "tTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;)D");
            mids$[mid_tTest_9813d7ac14cb2486] = env->getMethodID(cls, "tTest", "([D[DD)Z");
            mids$[mid_tTest_b1cf28637d6920a8] = env->getMethodID(cls, "tTest", "(D[DD)Z");
            mids$[mid_tTest_fe55a42774f43357] = env->getMethodID(cls, "tTest", "(DLorg/hipparchus/stat/descriptive/StatisticalSummary;D)Z");
            mids$[mid_tTest_d0fcfd116c4adb72] = env->getMethodID(cls, "tTest", "(Lorg/hipparchus/stat/descriptive/StatisticalSummary;Lorg/hipparchus/stat/descriptive/StatisticalSummary;D)Z");
            mids$[mid_df_45d926aea7231320] = env->getMethodID(cls, "df", "(DDDD)D");
            mids$[mid_homoscedasticT_79d84db2e9af7a7b] = env->getMethodID(cls, "homoscedasticT", "(DDDDDD)D");
            mids$[mid_tTest_79d84db2e9af7a7b] = env->getMethodID(cls, "tTest", "(DDDDDD)D");
            mids$[mid_tTest_45d926aea7231320] = env->getMethodID(cls, "tTest", "(DDDD)D");
            mids$[mid_homoscedasticTTest_79d84db2e9af7a7b] = env->getMethodID(cls, "homoscedasticTTest", "(DDDDDD)D");
            mids$[mid_t_45d926aea7231320] = env->getMethodID(cls, "t", "(DDDD)D");
            mids$[mid_t_79d84db2e9af7a7b] = env->getMethodID(cls, "t", "(DDDDDD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TTest::TTest() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        jdouble TTest::homoscedasticT(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_homoscedasticT_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jdouble TTest::homoscedasticT(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_homoscedasticT_f5214cbd47f47c82], a0.this$, a1.this$);
        }

        jdouble TTest::homoscedasticTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_homoscedasticTTest_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jdouble TTest::homoscedasticTTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_homoscedasticTTest_f5214cbd47f47c82], a0.this$, a1.this$);
        }

        jboolean TTest::homoscedasticTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_homoscedasticTTest_9813d7ac14cb2486], a0.this$, a1.this$, a2);
        }

        jdouble TTest::pairedT(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_pairedT_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jdouble TTest::pairedTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_pairedTTest_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jboolean TTest::pairedTTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_pairedTTest_9813d7ac14cb2486], a0.this$, a1.this$, a2);
        }

        jdouble TTest::t(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_t_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jdouble TTest::t(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_t_4f42c7a8793320e4], a0, a1.this$);
        }

        jdouble TTest::t(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_t_903f0d6f6e0dac90], a0, a1.this$);
        }

        jdouble TTest::t(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_t_f5214cbd47f47c82], a0.this$, a1.this$);
        }

        jdouble TTest::tTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_tTest_b01af8a77d4df96f], a0.this$, a1.this$);
        }

        jdouble TTest::tTest(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_tTest_4f42c7a8793320e4], a0, a1.this$);
        }

        jdouble TTest::tTest(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_tTest_903f0d6f6e0dac90], a0, a1.this$);
        }

        jdouble TTest::tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_tTest_f5214cbd47f47c82], a0.this$, a1.this$);
        }

        jboolean TTest::tTest(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tTest_9813d7ac14cb2486], a0.this$, a1.this$, a2);
        }

        jboolean TTest::tTest(jdouble a0, const JArray< jdouble > & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tTest_b1cf28637d6920a8], a0, a1.this$, a2);
        }

        jboolean TTest::tTest(jdouble a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tTest_fe55a42774f43357], a0, a1.this$, a2);
        }

        jboolean TTest::tTest(const ::org::hipparchus::stat::descriptive::StatisticalSummary & a0, const ::org::hipparchus::stat::descriptive::StatisticalSummary & a1, jdouble a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tTest_d0fcfd116c4adb72], a0.this$, a1.this$, a2);
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
      namespace inference {
        static PyObject *t_TTest_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TTest_instance_(PyTypeObject *type, PyObject *arg);
        static int t_TTest_init_(t_TTest *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TTest_homoscedasticT(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_homoscedasticTTest(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_pairedT(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_pairedTTest(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_t(t_TTest *self, PyObject *args);
        static PyObject *t_TTest_tTest(t_TTest *self, PyObject *args);

        static PyMethodDef t_TTest__methods_[] = {
          DECLARE_METHOD(t_TTest, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TTest, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TTest, homoscedasticT, METH_VARARGS),
          DECLARE_METHOD(t_TTest, homoscedasticTTest, METH_VARARGS),
          DECLARE_METHOD(t_TTest, pairedT, METH_VARARGS),
          DECLARE_METHOD(t_TTest, pairedTTest, METH_VARARGS),
          DECLARE_METHOD(t_TTest, t, METH_VARARGS),
          DECLARE_METHOD(t_TTest, tTest, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TTest)[] = {
          { Py_tp_methods, t_TTest__methods_ },
          { Py_tp_init, (void *) t_TTest_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TTest)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(TTest, t_TTest, TTest);

        void t_TTest::install(PyObject *module)
        {
          installType(&PY_TYPE(TTest), &PY_TYPE_DEF(TTest), module, "TTest", 0);
        }

        void t_TTest::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TTest), "class_", make_descriptor(TTest::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TTest), "wrapfn_", make_descriptor(t_TTest::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TTest), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_TTest_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TTest::initializeClass, 1)))
            return NULL;
          return t_TTest::wrap_Object(TTest(((t_TTest *) arg)->object.this$));
        }
        static PyObject *t_TTest_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TTest::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_TTest_init_(t_TTest *self, PyObject *args, PyObject *kwds)
        {
          TTest object((jobject) NULL);

          INT_CALL(object = TTest());
          self->object = object;

          return 0;
        }

        static PyObject *t_TTest_homoscedasticT(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.homoscedasticT(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.homoscedasticT(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "homoscedasticT", args);
          return NULL;
        }

        static PyObject *t_TTest_homoscedasticTTest(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.homoscedasticTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.homoscedasticTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.homoscedasticTTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "homoscedasticTTest", args);
          return NULL;
        }

        static PyObject *t_TTest_pairedT(t_TTest *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.pairedT(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "pairedT", args);
          return NULL;
        }

        static PyObject *t_TTest_pairedTTest(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.pairedTTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.pairedTTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "pairedTTest", args);
          return NULL;
        }

        static PyObject *t_TTest_t(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "Dk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.t(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "t", args);
          return NULL;
        }

        static PyObject *t_TTest_tTest(t_TTest *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "Dk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "kk", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "[D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              jdouble a0;
              JArray< jdouble > a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "D[DD", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "DkD", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
            {
              ::org::hipparchus::stat::descriptive::StatisticalSummary a0((jobject) NULL);
              ::org::hipparchus::stat::descriptive::StatisticalSummary a1((jobject) NULL);
              jdouble a2;
              jboolean result;

              if (!parseArgs(args, "kkD", ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, ::org::hipparchus::stat::descriptive::StatisticalSummary::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.tTest(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "tTest", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBody.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTThirdBody::class$ = NULL;
            jmethodID *DSSTThirdBody::mids$ = NULL;
            bool DSSTThirdBody::live$ = false;
            ::java::lang::String *DSSTThirdBody::ATTRACTION_COEFFICIENT = NULL;
            jdouble DSSTThirdBody::BIG_TRUNCATION_TOLERANCE = (jdouble) 0;
            jint DSSTThirdBody::MAX_POWER = (jint) 0;
            ::java::lang::String *DSSTThirdBody::SHORT_PERIOD_PREFIX = NULL;
            jdouble DSSTThirdBody::SMALL_TRUNCATION_TOLERANCE = (jdouble) 0;

            jclass DSSTThirdBody::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBody");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_3f064820e25fd3a0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;D)V");
                mids$[mid_getBody_a1474f5cfab89b5e] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/CelestialBody;");
                mids$[mid_getMeanElementRate_43ba9f5eaba95dbb] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMeanElementRate_3eb9526d5d611f82] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_1d563346dd4410fc] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_29410e2fe048cdd6] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_49390f5c28b648db] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_61d4f27408b30d56] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ATTRACTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT", "Ljava/lang/String;"));
                BIG_TRUNCATION_TOLERANCE = env->getStaticDoubleField(cls, "BIG_TRUNCATION_TOLERANCE");
                MAX_POWER = env->getStaticIntField(cls, "MAX_POWER");
                SHORT_PERIOD_PREFIX = new ::java::lang::String(env->getStaticObjectField(cls, "SHORT_PERIOD_PREFIX", "Ljava/lang/String;"));
                SMALL_TRUNCATION_TOLERANCE = env->getStaticDoubleField(cls, "SMALL_TRUNCATION_TOLERANCE");
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTThirdBody::DSSTThirdBody(const ::org::orekit::bodies::CelestialBody & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3f064820e25fd3a0, a0.this$, a1)) {}

            ::org::orekit::bodies::CelestialBody DSSTThirdBody::getBody() const
            {
              return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getBody_a1474f5cfab89b5e]));
            }

            JArray< jdouble > DSSTThirdBody::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_43ba9f5eaba95dbb], a0.this$, a1.this$, a2.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTThirdBody::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3eb9526d5d611f82], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTThirdBody::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
            }

            ::java::util::List DSSTThirdBody::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_1d563346dd4410fc], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTThirdBody::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_29410e2fe048cdd6], a0.this$, a1.this$, a2.this$));
            }

            void DSSTThirdBody::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_fddd0a7d9f33bafa], a0.this$);
            }

            void DSSTThirdBody::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_49390f5c28b648db], a0.this$, a1.this$);
            }

            void DSSTThirdBody::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_61d4f27408b30d56], a0.this$, a1.this$);
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
            static PyObject *t_DSSTThirdBody_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTThirdBody_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTThirdBody_init_(t_DSSTThirdBody *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTThirdBody_getBody(t_DSSTThirdBody *self);
            static PyObject *t_DSSTThirdBody_getMeanElementRate(t_DSSTThirdBody *self, PyObject *args);
            static PyObject *t_DSSTThirdBody_getParametersDrivers(t_DSSTThirdBody *self);
            static PyObject *t_DSSTThirdBody_initializeShortPeriodTerms(t_DSSTThirdBody *self, PyObject *args);
            static PyObject *t_DSSTThirdBody_registerAttitudeProvider(t_DSSTThirdBody *self, PyObject *arg);
            static PyObject *t_DSSTThirdBody_updateShortPeriodTerms(t_DSSTThirdBody *self, PyObject *args);
            static PyObject *t_DSSTThirdBody_get__body(t_DSSTThirdBody *self, void *data);
            static PyObject *t_DSSTThirdBody_get__parametersDrivers(t_DSSTThirdBody *self, void *data);
            static PyGetSetDef t_DSSTThirdBody__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTThirdBody, body),
              DECLARE_GET_FIELD(t_DSSTThirdBody, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTThirdBody__methods_[] = {
              DECLARE_METHOD(t_DSSTThirdBody, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBody, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTThirdBody, getBody, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBody, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTThirdBody, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTThirdBody, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTThirdBody, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTThirdBody, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTThirdBody)[] = {
              { Py_tp_methods, t_DSSTThirdBody__methods_ },
              { Py_tp_init, (void *) t_DSSTThirdBody_init_ },
              { Py_tp_getset, t_DSSTThirdBody__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTThirdBody)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTThirdBody, t_DSSTThirdBody, DSSTThirdBody);

            void t_DSSTThirdBody::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTThirdBody), &PY_TYPE_DEF(DSSTThirdBody), module, "DSSTThirdBody", 0);
            }

            void t_DSSTThirdBody::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "class_", make_descriptor(DSSTThirdBody::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "wrapfn_", make_descriptor(t_DSSTThirdBody::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "boxfn_", make_descriptor(boxObject));
              env->getClass(DSSTThirdBody::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "ATTRACTION_COEFFICIENT", make_descriptor(j2p(*DSSTThirdBody::ATTRACTION_COEFFICIENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "BIG_TRUNCATION_TOLERANCE", make_descriptor(DSSTThirdBody::BIG_TRUNCATION_TOLERANCE));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "MAX_POWER", make_descriptor(DSSTThirdBody::MAX_POWER));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "SHORT_PERIOD_PREFIX", make_descriptor(j2p(*DSSTThirdBody::SHORT_PERIOD_PREFIX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTThirdBody), "SMALL_TRUNCATION_TOLERANCE", make_descriptor(DSSTThirdBody::SMALL_TRUNCATION_TOLERANCE));
            }

            static PyObject *t_DSSTThirdBody_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTThirdBody::initializeClass, 1)))
                return NULL;
              return t_DSSTThirdBody::wrap_Object(DSSTThirdBody(((t_DSSTThirdBody *) arg)->object.this$));
            }
            static PyObject *t_DSSTThirdBody_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTThirdBody::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTThirdBody_init_(t_DSSTThirdBody *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
              jdouble a1;
              DSSTThirdBody object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DSSTThirdBody(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTThirdBody_getBody(t_DSSTThirdBody *self)
            {
              ::org::orekit::bodies::CelestialBody result((jobject) NULL);
              OBJ_CALL(result = self->object.getBody());
              return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
            }

            static PyObject *t_DSSTThirdBody_getMeanElementRate(t_DSSTThirdBody *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
                  }
                }
                {
                  ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a1((jobject) NULL);
                  JArray< jdouble > a2((jobject) NULL);
                  JArray< jdouble > result((jobject) NULL);

                  if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.getMeanElementRate(a0, a1, a2));
                    return result.wrap();
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "getMeanElementRate", args);
              return NULL;
            }

            static PyObject *t_DSSTThirdBody_getParametersDrivers(t_DSSTThirdBody *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTThirdBody_initializeShortPeriodTerms(t_DSSTThirdBody *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements a0((jobject) NULL);
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< jdouble > a2((jobject) NULL);
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "kK[D", ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::semianalytical::dsst::forces::PY_TYPE(ShortPeriodTerms));
                  }
                }
                {
                  ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::propagation::PropagationType a1((jobject) NULL);
                  PyTypeObject **p1;
                  JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::java::util::List result((jobject) NULL);

                  if (!parseArgs(args, "KK[K", ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements::initializeClass, ::org::orekit::propagation::PropagationType::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::semianalytical::dsst::utilities::t_FieldAuxiliaryElements::parameters_, &a1, &p1, ::org::orekit::propagation::t_PropagationType::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                  {
                    OBJ_CALL(result = self->object.initializeShortPeriodTerms(a0, a1, a2));
                    return ::java::util::t_List::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTThirdBody_registerAttitudeProvider(t_DSSTThirdBody *self, PyObject *arg)
            {
              ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
              {
                OBJ_CALL(self->object.registerAttitudeProvider(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "registerAttitudeProvider", arg);
              return NULL;
            }

            static PyObject *t_DSSTThirdBody_updateShortPeriodTerms(t_DSSTThirdBody *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 2:
                {
                  JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
                  PyTypeObject **p0;
                  JArray< ::org::orekit::propagation::FieldSpacecraftState > a1((jobject) NULL);
                  PyTypeObject **p1;

                  if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
                {
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "updateShortPeriodTerms", args);
              return NULL;
            }

            static PyObject *t_DSSTThirdBody_get__body(t_DSSTThirdBody *self, void *data)
            {
              ::org::orekit::bodies::CelestialBody value((jobject) NULL);
              OBJ_CALL(value = self->object.getBody());
              return ::org::orekit::bodies::t_CelestialBody::wrap_Object(value);
            }

            static PyObject *t_DSSTThirdBody_get__parametersDrivers(t_DSSTThirdBody *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/enclosing/WelzlEncloser.h"
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "java/lang/Iterable.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/enclosing/Encloser.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
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
            mids$[mid_init$_4679422c92ac5620] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/geometry/enclosing/SupportBallGenerator;)V");
            mids$[mid_enclose_fc71bba104f0320f] = env->getMethodID(cls, "enclose", "(Ljava/lang/Iterable;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");
            mids$[mid_selectFarthest_077faae7be41ab87] = env->getMethodID(cls, "selectFarthest", "(Ljava/lang/Iterable;Lorg/hipparchus/geometry/enclosing/EnclosingBall;)Lorg/hipparchus/geometry/Point;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        WelzlEncloser::WelzlEncloser(jdouble a0, const ::org::hipparchus::geometry::enclosing::SupportBallGenerator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4679422c92ac5620, a0, a1.this$)) {}

        ::org::hipparchus::geometry::enclosing::EnclosingBall WelzlEncloser::enclose(const ::java::lang::Iterable & a0) const
        {
          return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_enclose_fc71bba104f0320f], a0.this$));
        }

        ::org::hipparchus::geometry::Point WelzlEncloser::selectFarthest(const ::java::lang::Iterable & a0, const ::org::hipparchus::geometry::enclosing::EnclosingBall & a1) const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_selectFarthest_077faae7be41ab87], a0.this$, a1.this$));
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
#include "org/hipparchus/util/IterationListener.h"
#include "org/hipparchus/util/IterationEvent.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *IterationListener::class$ = NULL;
      jmethodID *IterationListener::mids$ = NULL;
      bool IterationListener::live$ = false;

      jclass IterationListener::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/IterationListener");

          mids$ = new jmethodID[max_mid];
          mids$[mid_initializationPerformed_8c87cb407ca6cefb] = env->getMethodID(cls, "initializationPerformed", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_iterationPerformed_8c87cb407ca6cefb] = env->getMethodID(cls, "iterationPerformed", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_iterationStarted_8c87cb407ca6cefb] = env->getMethodID(cls, "iterationStarted", "(Lorg/hipparchus/util/IterationEvent;)V");
          mids$[mid_terminationPerformed_8c87cb407ca6cefb] = env->getMethodID(cls, "terminationPerformed", "(Lorg/hipparchus/util/IterationEvent;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void IterationListener::initializationPerformed(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_initializationPerformed_8c87cb407ca6cefb], a0.this$);
      }

      void IterationListener::iterationPerformed(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_iterationPerformed_8c87cb407ca6cefb], a0.this$);
      }

      void IterationListener::iterationStarted(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_iterationStarted_8c87cb407ca6cefb], a0.this$);
      }

      void IterationListener::terminationPerformed(const ::org::hipparchus::util::IterationEvent & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_terminationPerformed_8c87cb407ca6cefb], a0.this$);
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
      static PyObject *t_IterationListener_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterationListener_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterationListener_initializationPerformed(t_IterationListener *self, PyObject *arg);
      static PyObject *t_IterationListener_iterationPerformed(t_IterationListener *self, PyObject *arg);
      static PyObject *t_IterationListener_iterationStarted(t_IterationListener *self, PyObject *arg);
      static PyObject *t_IterationListener_terminationPerformed(t_IterationListener *self, PyObject *arg);

      static PyMethodDef t_IterationListener__methods_[] = {
        DECLARE_METHOD(t_IterationListener, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationListener, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterationListener, initializationPerformed, METH_O),
        DECLARE_METHOD(t_IterationListener, iterationPerformed, METH_O),
        DECLARE_METHOD(t_IterationListener, iterationStarted, METH_O),
        DECLARE_METHOD(t_IterationListener, terminationPerformed, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterationListener)[] = {
        { Py_tp_methods, t_IterationListener__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterationListener)[] = {
        &PY_TYPE_DEF(::java::util::EventListener),
        NULL
      };

      DEFINE_TYPE(IterationListener, t_IterationListener, IterationListener);

      void t_IterationListener::install(PyObject *module)
      {
        installType(&PY_TYPE(IterationListener), &PY_TYPE_DEF(IterationListener), module, "IterationListener", 0);
      }

      void t_IterationListener::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationListener), "class_", make_descriptor(IterationListener::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationListener), "wrapfn_", make_descriptor(t_IterationListener::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterationListener), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterationListener_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterationListener::initializeClass, 1)))
          return NULL;
        return t_IterationListener::wrap_Object(IterationListener(((t_IterationListener *) arg)->object.this$));
      }
      static PyObject *t_IterationListener_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterationListener::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IterationListener_initializationPerformed(t_IterationListener *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.initializationPerformed(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "initializationPerformed", arg);
        return NULL;
      }

      static PyObject *t_IterationListener_iterationPerformed(t_IterationListener *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.iterationPerformed(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "iterationPerformed", arg);
        return NULL;
      }

      static PyObject *t_IterationListener_iterationStarted(t_IterationListener *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.iterationStarted(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "iterationStarted", arg);
        return NULL;
      }

      static PyObject *t_IterationListener_terminationPerformed(t_IterationListener *self, PyObject *arg)
      {
        ::org::hipparchus::util::IterationEvent a0((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::IterationEvent::initializeClass, &a0))
        {
          OBJ_CALL(self->object.terminationPerformed(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "terminationPerformed", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/SignalCode.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/SignalCode.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *SignalCode::class$ = NULL;
      jmethodID *SignalCode::mids$ = NULL;
      bool SignalCode::live$ = false;
      SignalCode *SignalCode::A = NULL;
      SignalCode *SignalCode::B = NULL;
      SignalCode *SignalCode::C = NULL;
      SignalCode *SignalCode::CODELESS = NULL;
      SignalCode *SignalCode::D = NULL;
      SignalCode *SignalCode::E = NULL;
      SignalCode *SignalCode::I = NULL;
      SignalCode *SignalCode::L = NULL;
      SignalCode *SignalCode::M = NULL;
      SignalCode *SignalCode::N = NULL;
      SignalCode *SignalCode::P = NULL;
      SignalCode *SignalCode::Q = NULL;
      SignalCode *SignalCode::S = NULL;
      SignalCode *SignalCode::W = NULL;
      SignalCode *SignalCode::X = NULL;
      SignalCode *SignalCode::Y = NULL;
      SignalCode *SignalCode::Z = NULL;

      jclass SignalCode::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/SignalCode");

          mids$ = new jmethodID[max_mid];
          mids$[mid_valueOf_5de96916d4d6653f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/SignalCode;");
          mids$[mid_values_20d284d4073d5f19] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/SignalCode;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          A = new SignalCode(env->getStaticObjectField(cls, "A", "Lorg/orekit/gnss/SignalCode;"));
          B = new SignalCode(env->getStaticObjectField(cls, "B", "Lorg/orekit/gnss/SignalCode;"));
          C = new SignalCode(env->getStaticObjectField(cls, "C", "Lorg/orekit/gnss/SignalCode;"));
          CODELESS = new SignalCode(env->getStaticObjectField(cls, "CODELESS", "Lorg/orekit/gnss/SignalCode;"));
          D = new SignalCode(env->getStaticObjectField(cls, "D", "Lorg/orekit/gnss/SignalCode;"));
          E = new SignalCode(env->getStaticObjectField(cls, "E", "Lorg/orekit/gnss/SignalCode;"));
          I = new SignalCode(env->getStaticObjectField(cls, "I", "Lorg/orekit/gnss/SignalCode;"));
          L = new SignalCode(env->getStaticObjectField(cls, "L", "Lorg/orekit/gnss/SignalCode;"));
          M = new SignalCode(env->getStaticObjectField(cls, "M", "Lorg/orekit/gnss/SignalCode;"));
          N = new SignalCode(env->getStaticObjectField(cls, "N", "Lorg/orekit/gnss/SignalCode;"));
          P = new SignalCode(env->getStaticObjectField(cls, "P", "Lorg/orekit/gnss/SignalCode;"));
          Q = new SignalCode(env->getStaticObjectField(cls, "Q", "Lorg/orekit/gnss/SignalCode;"));
          S = new SignalCode(env->getStaticObjectField(cls, "S", "Lorg/orekit/gnss/SignalCode;"));
          W = new SignalCode(env->getStaticObjectField(cls, "W", "Lorg/orekit/gnss/SignalCode;"));
          X = new SignalCode(env->getStaticObjectField(cls, "X", "Lorg/orekit/gnss/SignalCode;"));
          Y = new SignalCode(env->getStaticObjectField(cls, "Y", "Lorg/orekit/gnss/SignalCode;"));
          Z = new SignalCode(env->getStaticObjectField(cls, "Z", "Lorg/orekit/gnss/SignalCode;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SignalCode SignalCode::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return SignalCode(env->callStaticObjectMethod(cls, mids$[mid_valueOf_5de96916d4d6653f], a0.this$));
      }

      JArray< SignalCode > SignalCode::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< SignalCode >(env->callStaticObjectMethod(cls, mids$[mid_values_20d284d4073d5f19]));
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
      static PyObject *t_SignalCode_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SignalCode_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SignalCode_of_(t_SignalCode *self, PyObject *args);
      static PyObject *t_SignalCode_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_SignalCode_values(PyTypeObject *type);
      static PyObject *t_SignalCode_get__parameters_(t_SignalCode *self, void *data);
      static PyGetSetDef t_SignalCode__fields_[] = {
        DECLARE_GET_FIELD(t_SignalCode, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SignalCode__methods_[] = {
        DECLARE_METHOD(t_SignalCode, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SignalCode, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SignalCode, of_, METH_VARARGS),
        DECLARE_METHOD(t_SignalCode, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_SignalCode, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SignalCode)[] = {
        { Py_tp_methods, t_SignalCode__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SignalCode__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SignalCode)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(SignalCode, t_SignalCode, SignalCode);
      PyObject *t_SignalCode::wrap_Object(const SignalCode& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SignalCode::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SignalCode *self = (t_SignalCode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SignalCode::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SignalCode::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SignalCode *self = (t_SignalCode *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SignalCode::install(PyObject *module)
      {
        installType(&PY_TYPE(SignalCode), &PY_TYPE_DEF(SignalCode), module, "SignalCode", 0);
      }

      void t_SignalCode::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "class_", make_descriptor(SignalCode::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "wrapfn_", make_descriptor(t_SignalCode::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "boxfn_", make_descriptor(boxObject));
        env->getClass(SignalCode::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "A", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::A)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "B", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::B)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "C", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::C)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "CODELESS", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::CODELESS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "D", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::D)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "E", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::E)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "I", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::I)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "L", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::L)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "M", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::M)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "N", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "P", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::P)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "Q", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::Q)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "S", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::S)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "W", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::W)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "X", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::X)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "Y", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::Y)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SignalCode), "Z", make_descriptor(t_SignalCode::wrap_Object(*SignalCode::Z)));
      }

      static PyObject *t_SignalCode_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SignalCode::initializeClass, 1)))
          return NULL;
        return t_SignalCode::wrap_Object(SignalCode(((t_SignalCode *) arg)->object.this$));
      }
      static PyObject *t_SignalCode_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SignalCode::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SignalCode_of_(t_SignalCode *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_SignalCode_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        SignalCode result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::gnss::SignalCode::valueOf(a0));
          return t_SignalCode::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_SignalCode_values(PyTypeObject *type)
      {
        JArray< SignalCode > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::gnss::SignalCode::values());
        return JArray<jobject>(result.this$).wrap(t_SignalCode::wrap_jobject);
      }
      static PyObject *t_SignalCode_get__parameters_(t_SignalCode *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeStampedFieldHermiteInterpolator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeStampedFieldHermiteInterpolator::class$ = NULL;
      jmethodID *TimeStampedFieldHermiteInterpolator::mids$ = NULL;
      bool TimeStampedFieldHermiteInterpolator::live$ = false;

      jclass TimeStampedFieldHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeStampedFieldHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_4320462275d66e78] = env->getMethodID(cls, "<init>", "(ID)V");
          mids$[mid_interpolate_96187d4ccdb9204c] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/time/TimeStampedField;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeStampedFieldHermiteInterpolator::TimeStampedFieldHermiteInterpolator() : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      TimeStampedFieldHermiteInterpolator::TimeStampedFieldHermiteInterpolator(jint a0) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      TimeStampedFieldHermiteInterpolator::TimeStampedFieldHermiteInterpolator(jint a0, jdouble a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_4320462275d66e78, a0, a1)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_TimeStampedFieldHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeStampedFieldHermiteInterpolator_of_(t_TimeStampedFieldHermiteInterpolator *self, PyObject *args);
      static int t_TimeStampedFieldHermiteInterpolator_init_(t_TimeStampedFieldHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeStampedFieldHermiteInterpolator_get__parameters_(t_TimeStampedFieldHermiteInterpolator *self, void *data);
      static PyGetSetDef t_TimeStampedFieldHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeStampedFieldHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeStampedFieldHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeStampedFieldHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeStampedFieldHermiteInterpolator, of_, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeStampedFieldHermiteInterpolator)[] = {
        { Py_tp_methods, t_TimeStampedFieldHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_TimeStampedFieldHermiteInterpolator_init_ },
        { Py_tp_getset, t_TimeStampedFieldHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeStampedFieldHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(TimeStampedFieldHermiteInterpolator, t_TimeStampedFieldHermiteInterpolator, TimeStampedFieldHermiteInterpolator);
      PyObject *t_TimeStampedFieldHermiteInterpolator::wrap_Object(const TimeStampedFieldHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldHermiteInterpolator *self = (t_TimeStampedFieldHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeStampedFieldHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeStampedFieldHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeStampedFieldHermiteInterpolator *self = (t_TimeStampedFieldHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeStampedFieldHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeStampedFieldHermiteInterpolator), &PY_TYPE_DEF(TimeStampedFieldHermiteInterpolator), module, "TimeStampedFieldHermiteInterpolator", 0);
      }

      void t_TimeStampedFieldHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldHermiteInterpolator), "class_", make_descriptor(TimeStampedFieldHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldHermiteInterpolator), "wrapfn_", make_descriptor(t_TimeStampedFieldHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeStampedFieldHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeStampedFieldHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeStampedFieldHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeStampedFieldHermiteInterpolator::wrap_Object(TimeStampedFieldHermiteInterpolator(((t_TimeStampedFieldHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeStampedFieldHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeStampedFieldHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeStampedFieldHermiteInterpolator_of_(t_TimeStampedFieldHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeStampedFieldHermiteInterpolator_init_(t_TimeStampedFieldHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            TimeStampedFieldHermiteInterpolator object((jobject) NULL);

            INT_CALL(object = TimeStampedFieldHermiteInterpolator());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            TimeStampedFieldHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = TimeStampedFieldHermiteInterpolator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            jdouble a1;
            TimeStampedFieldHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "ID", &a0, &a1))
            {
              INT_CALL(object = TimeStampedFieldHermiteInterpolator(a0, a1));
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
      static PyObject *t_TimeStampedFieldHermiteInterpolator_get__parameters_(t_TimeStampedFieldHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
