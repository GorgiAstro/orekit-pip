#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldLUDecomposition.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldLUDecomposition::class$ = NULL;
      jmethodID *FieldLUDecomposition::mids$ = NULL;
      bool FieldLUDecomposition::live$ = false;

      jclass FieldLUDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldLUDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_33e6ddbf6bb140a5] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_getDeterminant_ce0470d468f80a56] = env->getMethodID(cls, "getDeterminant", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_getL_1d6b27621d7bea96] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getP_1d6b27621d7bea96] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getPivot_1b41cf9ebf653611] = env->getMethodID(cls, "getPivot", "()[I");
          mids$[mid_getSolver_a465c42b6ee7c97a] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/FieldDecompositionSolver;");
          mids$[mid_getU_1d6b27621d7bea96] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/linear/FieldMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldLUDecomposition::FieldLUDecomposition(const ::org::hipparchus::linear::FieldMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_33e6ddbf6bb140a5, a0.this$)) {}

      ::org::hipparchus::FieldElement FieldLUDecomposition::getDeterminant() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getDeterminant_ce0470d468f80a56]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldLUDecomposition::getL() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getL_1d6b27621d7bea96]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldLUDecomposition::getP() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getP_1d6b27621d7bea96]));
      }

      JArray< jint > FieldLUDecomposition::getPivot() const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPivot_1b41cf9ebf653611]));
      }

      ::org::hipparchus::linear::FieldDecompositionSolver FieldLUDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_a465c42b6ee7c97a]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldLUDecomposition::getU() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getU_1d6b27621d7bea96]));
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
      static PyObject *t_FieldLUDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLUDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLUDecomposition_of_(t_FieldLUDecomposition *self, PyObject *args);
      static int t_FieldLUDecomposition_init_(t_FieldLUDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldLUDecomposition_getDeterminant(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_getL(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_getP(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_getPivot(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_getSolver(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_getU(t_FieldLUDecomposition *self);
      static PyObject *t_FieldLUDecomposition_get__determinant(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__l(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__p(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__pivot(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__solver(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__u(t_FieldLUDecomposition *self, void *data);
      static PyObject *t_FieldLUDecomposition_get__parameters_(t_FieldLUDecomposition *self, void *data);
      static PyGetSetDef t_FieldLUDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_FieldLUDecomposition, determinant),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, l),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, p),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, pivot),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, solver),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, u),
        DECLARE_GET_FIELD(t_FieldLUDecomposition, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldLUDecomposition__methods_[] = {
        DECLARE_METHOD(t_FieldLUDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLUDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLUDecomposition, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getL, METH_NOARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getP, METH_NOARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getPivot, METH_NOARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getSolver, METH_NOARGS),
        DECLARE_METHOD(t_FieldLUDecomposition, getU, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldLUDecomposition)[] = {
        { Py_tp_methods, t_FieldLUDecomposition__methods_ },
        { Py_tp_init, (void *) t_FieldLUDecomposition_init_ },
        { Py_tp_getset, t_FieldLUDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldLUDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldLUDecomposition, t_FieldLUDecomposition, FieldLUDecomposition);
      PyObject *t_FieldLUDecomposition::wrap_Object(const FieldLUDecomposition& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLUDecomposition::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLUDecomposition *self = (t_FieldLUDecomposition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldLUDecomposition::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLUDecomposition::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLUDecomposition *self = (t_FieldLUDecomposition *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldLUDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldLUDecomposition), &PY_TYPE_DEF(FieldLUDecomposition), module, "FieldLUDecomposition", 0);
      }

      void t_FieldLUDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposition), "class_", make_descriptor(FieldLUDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposition), "wrapfn_", make_descriptor(t_FieldLUDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldLUDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldLUDecomposition::initializeClass, 1)))
          return NULL;
        return t_FieldLUDecomposition::wrap_Object(FieldLUDecomposition(((t_FieldLUDecomposition *) arg)->object.this$));
      }
      static PyObject *t_FieldLUDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldLUDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldLUDecomposition_of_(t_FieldLUDecomposition *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldLUDecomposition_init_(t_FieldLUDecomposition *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        FieldLUDecomposition object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          INT_CALL(object = FieldLUDecomposition(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldLUDecomposition_getDeterminant(t_FieldLUDecomposition *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getDeterminant());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldLUDecomposition_getL(t_FieldLUDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldLUDecomposition_getP(t_FieldLUDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldLUDecomposition_getPivot(t_FieldLUDecomposition *self)
      {
        JArray< jint > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPivot());
        return result.wrap();
      }

      static PyObject *t_FieldLUDecomposition_getSolver(t_FieldLUDecomposition *self)
      {
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldLUDecomposition_getU(t_FieldLUDecomposition *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_FieldLUDecomposition_get__parameters_(t_FieldLUDecomposition *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldLUDecomposition_get__determinant(t_FieldLUDecomposition *self, void *data)
      {
        ::org::hipparchus::FieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getDeterminant());
        return ::org::hipparchus::t_FieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldLUDecomposition_get__l(t_FieldLUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldLUDecomposition_get__p(t_FieldLUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldLUDecomposition_get__pivot(t_FieldLUDecomposition *self, void *data)
      {
        JArray< jint > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPivot());
        return value.wrap();
      }

      static PyObject *t_FieldLUDecomposition_get__solver(t_FieldLUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldDecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(value);
      }

      static PyObject *t_FieldLUDecomposition_get__u(t_FieldLUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/FieldTLEPropagator.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/analytical/tle/FieldTLEPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/FieldOrbit.h"
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
              mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getMU_557b8123390d8d0c] = env->getStaticMethodID(cls, "getMU", "()D");
              mids$[mid_getPVCoordinates_bbdf40688b91577a] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/utils/FieldPVCoordinates;");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getTLE_8561c1b354d95eb2] = env->getMethodID(cls, "getTLE", "()Lorg/orekit/propagation/analytical/tle/FieldTLE;");
              mids$[mid_propagateOrbit_ec5b52b8a8c77d72] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/FieldAbsoluteDate;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/orbits/FieldOrbit;");
              mids$[mid_resetInitialState_b66c84a5711243d5] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
              mids$[mid_selectExtrapolator_461e9e7bc90c878c] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/analytical/tle/FieldTLEPropagator;");
              mids$[mid_selectExtrapolator_9e5610c6d756262c] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/analytical/tle/FieldTLEPropagator;");
              mids$[mid_selectExtrapolator_d1ae87a7216a745b] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/analytical/tle/FieldTLEPropagator;");
              mids$[mid_selectExtrapolator_cb040962839e03a8] = env->getStaticMethodID(cls, "selectExtrapolator", "(Lorg/orekit/propagation/analytical/tle/FieldTLE;Lorg/orekit/attitudes/AttitudeProvider;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/frames/Frame;[Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/analytical/tle/FieldTLEPropagator;");
              mids$[mid_sxpInitialize_5d9c9afaca2e497c] = env->getMethodID(cls, "sxpInitialize", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpPropagate_960efa47e0a8eec2] = env->getMethodID(cls, "sxpPropagate", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_resetIntermediateState_585702d5a402c590] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
              mids$[mid_getMass_b884068a2c99f6ca] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::frames::Frame FieldTLEPropagator::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
          }

          jdouble FieldTLEPropagator::getMU()
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getMU_557b8123390d8d0c]);
          }

          ::org::orekit::utils::FieldPVCoordinates FieldTLEPropagator::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::orekit::utils::FieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_bbdf40688b91577a], a0.this$, a1.this$));
          }

          ::java::util::List FieldTLEPropagator::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          ::org::orekit::propagation::analytical::tle::FieldTLE FieldTLEPropagator::getTLE() const
          {
            return ::org::orekit::propagation::analytical::tle::FieldTLE(env->callObjectMethod(this$, mids$[mid_getTLE_8561c1b354d95eb2]));
          }

          ::org::orekit::orbits::FieldOrbit FieldTLEPropagator::propagateOrbit(const ::org::orekit::time::FieldAbsoluteDate & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::orekit::orbits::FieldOrbit(env->callObjectMethod(this$, mids$[mid_propagateOrbit_ec5b52b8a8c77d72], a0.this$, a1.this$));
          }

          void FieldTLEPropagator::resetInitialState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_resetInitialState_b66c84a5711243d5], a0.this$);
          }

          FieldTLEPropagator FieldTLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_461e9e7bc90c878c], a0.this$, a1.this$));
          }

          FieldTLEPropagator FieldTLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::frames::Frame & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_9e5610c6d756262c], a0.this$, a1.this$, a2.this$));
          }

          FieldTLEPropagator FieldTLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const JArray< ::org::hipparchus::CalculusFieldElement > & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_d1ae87a7216a745b], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          FieldTLEPropagator FieldTLEPropagator::selectExtrapolator(const ::org::orekit::propagation::analytical::tle::FieldTLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::frames::Frame & a3, const JArray< ::org::hipparchus::CalculusFieldElement > & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return FieldTLEPropagator(env->callStaticObjectMethod(cls, mids$[mid_selectExtrapolator_cb040962839e03a8], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
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
#include "org/orekit/time/IRNSSScale.h"
#include "org/orekit/time/DateComponents.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *IRNSSScale::class$ = NULL;
      jmethodID *IRNSSScale::mids$ = NULL;
      bool IRNSSScale::live$ = false;

      jclass IRNSSScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/IRNSSScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_b0b988f941da47d8] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_b884068a2c99f6ca] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_e4171ab80e571373] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String IRNSSScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      jdouble IRNSSScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_b0b988f941da47d8], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement IRNSSScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_b884068a2c99f6ca], a0.this$));
      }

      jdouble IRNSSScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_e4171ab80e571373], a0.this$, a1.this$);
      }

      ::java::lang::String IRNSSScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
      static PyObject *t_IRNSSScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IRNSSScale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IRNSSScale_getName(t_IRNSSScale *self);
      static PyObject *t_IRNSSScale_offsetFromTAI(t_IRNSSScale *self, PyObject *args);
      static PyObject *t_IRNSSScale_offsetToTAI(t_IRNSSScale *self, PyObject *args);
      static PyObject *t_IRNSSScale_toString(t_IRNSSScale *self, PyObject *args);
      static PyObject *t_IRNSSScale_get__name(t_IRNSSScale *self, void *data);
      static PyGetSetDef t_IRNSSScale__fields_[] = {
        DECLARE_GET_FIELD(t_IRNSSScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IRNSSScale__methods_[] = {
        DECLARE_METHOD(t_IRNSSScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IRNSSScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IRNSSScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_IRNSSScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_IRNSSScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_IRNSSScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IRNSSScale)[] = {
        { Py_tp_methods, t_IRNSSScale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_IRNSSScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IRNSSScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(IRNSSScale, t_IRNSSScale, IRNSSScale);

      void t_IRNSSScale::install(PyObject *module)
      {
        installType(&PY_TYPE(IRNSSScale), &PY_TYPE_DEF(IRNSSScale), module, "IRNSSScale", 0);
      }

      void t_IRNSSScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSScale), "class_", make_descriptor(IRNSSScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSScale), "wrapfn_", make_descriptor(t_IRNSSScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IRNSSScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IRNSSScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IRNSSScale::initializeClass, 1)))
          return NULL;
        return t_IRNSSScale::wrap_Object(IRNSSScale(((t_IRNSSScale *) arg)->object.this$));
      }
      static PyObject *t_IRNSSScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IRNSSScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_IRNSSScale_getName(t_IRNSSScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_IRNSSScale_offsetFromTAI(t_IRNSSScale *self, PyObject *args)
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

      static PyObject *t_IRNSSScale_offsetToTAI(t_IRNSSScale *self, PyObject *args)
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

      static PyObject *t_IRNSSScale_toString(t_IRNSSScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(IRNSSScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_IRNSSScale_get__name(t_IRNSSScale *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/apm/Maneuver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace apm {

              ::java::lang::Class *Maneuver::class$ = NULL;
              jmethodID *Maneuver::mids$ = NULL;
              bool Maneuver::live$ = false;

              jclass Maneuver::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/apm/Maneuver");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getDeltaMass_557b8123390d8d0c] = env->getMethodID(cls, "getDeltaMass", "()D");
                  mids$[mid_getDuration_557b8123390d8d0c] = env->getMethodID(cls, "getDuration", "()D");
                  mids$[mid_getEpochStart_7a97f7e149e79afb] = env->getMethodID(cls, "getEpochStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getFrame_98f5fcaff3e3f9d2] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_getTorque_f88961cca75a2c0a] = env->getMethodID(cls, "getTorque", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_setDeltaMass_10f281d777284cea] = env->getMethodID(cls, "setDeltaMass", "(D)V");
                  mids$[mid_setDuration_10f281d777284cea] = env->getMethodID(cls, "setDuration", "(D)V");
                  mids$[mid_setEpochStart_20affcbd28542333] = env->getMethodID(cls, "setEpochStart", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setFrame_f55eee1236275bb1] = env->getMethodID(cls, "setFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_setTorque_89aad365fb0ed8da] = env->getMethodID(cls, "setTorque", "(ID)V");
                  mids$[mid_validate_10f281d777284cea] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Maneuver::Maneuver() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jdouble Maneuver::getDeltaMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeltaMass_557b8123390d8d0c]);
              }

              jdouble Maneuver::getDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDuration_557b8123390d8d0c]);
              }

              ::org::orekit::time::AbsoluteDate Maneuver::getEpochStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochStart_7a97f7e149e79afb]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade Maneuver::getFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrame_98f5fcaff3e3f9d2]));
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D Maneuver::getTorque() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getTorque_f88961cca75a2c0a]));
              }

              void Maneuver::setDeltaMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeltaMass_10f281d777284cea], a0);
              }

              void Maneuver::setDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDuration_10f281d777284cea], a0);
              }

              void Maneuver::setEpochStart(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochStart_20affcbd28542333], a0.this$);
              }

              void Maneuver::setFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setFrame_f55eee1236275bb1], a0.this$);
              }

              void Maneuver::setTorque(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setTorque_89aad365fb0ed8da], a0, a1);
              }

              void Maneuver::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_10f281d777284cea], a0);
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
              static PyObject *t_Maneuver_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Maneuver_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Maneuver_init_(t_Maneuver *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Maneuver_getDeltaMass(t_Maneuver *self);
              static PyObject *t_Maneuver_getDuration(t_Maneuver *self);
              static PyObject *t_Maneuver_getEpochStart(t_Maneuver *self);
              static PyObject *t_Maneuver_getFrame(t_Maneuver *self);
              static PyObject *t_Maneuver_getTorque(t_Maneuver *self);
              static PyObject *t_Maneuver_setDeltaMass(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setDuration(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setEpochStart(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setFrame(t_Maneuver *self, PyObject *arg);
              static PyObject *t_Maneuver_setTorque(t_Maneuver *self, PyObject *args);
              static PyObject *t_Maneuver_validate(t_Maneuver *self, PyObject *args);
              static PyObject *t_Maneuver_get__deltaMass(t_Maneuver *self, void *data);
              static int t_Maneuver_set__deltaMass(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__duration(t_Maneuver *self, void *data);
              static int t_Maneuver_set__duration(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__epochStart(t_Maneuver *self, void *data);
              static int t_Maneuver_set__epochStart(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__frame(t_Maneuver *self, void *data);
              static int t_Maneuver_set__frame(t_Maneuver *self, PyObject *arg, void *data);
              static PyObject *t_Maneuver_get__torque(t_Maneuver *self, void *data);
              static PyGetSetDef t_Maneuver__fields_[] = {
                DECLARE_GETSET_FIELD(t_Maneuver, deltaMass),
                DECLARE_GETSET_FIELD(t_Maneuver, duration),
                DECLARE_GETSET_FIELD(t_Maneuver, epochStart),
                DECLARE_GETSET_FIELD(t_Maneuver, frame),
                DECLARE_GET_FIELD(t_Maneuver, torque),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Maneuver__methods_[] = {
                DECLARE_METHOD(t_Maneuver, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Maneuver, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Maneuver, getDeltaMass, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getDuration, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getEpochStart, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getFrame, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, getTorque, METH_NOARGS),
                DECLARE_METHOD(t_Maneuver, setDeltaMass, METH_O),
                DECLARE_METHOD(t_Maneuver, setDuration, METH_O),
                DECLARE_METHOD(t_Maneuver, setEpochStart, METH_O),
                DECLARE_METHOD(t_Maneuver, setFrame, METH_O),
                DECLARE_METHOD(t_Maneuver, setTorque, METH_VARARGS),
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

              static PyObject *t_Maneuver_getEpochStart(t_Maneuver *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getEpochStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_Maneuver_getFrame(t_Maneuver *self)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
                OBJ_CALL(result = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
              }

              static PyObject *t_Maneuver_getTorque(t_Maneuver *self)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
                OBJ_CALL(result = self->object.getTorque());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
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

              static PyObject *t_Maneuver_setEpochStart(t_Maneuver *self, PyObject *arg)
              {
                ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setEpochStart(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setEpochStart", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setFrame(t_Maneuver *self, PyObject *arg)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.setFrame(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setFrame", arg);
                return NULL;
              }

              static PyObject *t_Maneuver_setTorque(t_Maneuver *self, PyObject *args)
              {
                jint a0;
                jdouble a1;

                if (!parseArgs(args, "ID", &a0, &a1))
                {
                  OBJ_CALL(self->object.setTorque(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setTorque", args);
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

              static PyObject *t_Maneuver_get__epochStart(t_Maneuver *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getEpochStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
              static int t_Maneuver_set__epochStart(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                  {
                    INT_CALL(self->object.setEpochStart(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "epochStart", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__frame(t_Maneuver *self, void *data)
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                OBJ_CALL(value = self->object.getFrame());
                return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
              }
              static int t_Maneuver_set__frame(t_Maneuver *self, PyObject *arg, void *data)
              {
                {
                  ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                  if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                  {
                    INT_CALL(self->object.setFrame(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "frame", arg);
                return -1;
              }

              static PyObject *t_Maneuver_get__torque(t_Maneuver *self, void *data)
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
                OBJ_CALL(value = self->object.getTorque());
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
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
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTThirdBody.h"
#include "org/orekit/propagation/PropagationType.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
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
                mids$[mid_init$_84a7f17548600b39] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;D)V");
                mids$[mid_getBody_40e74583267ad550] = env->getMethodID(cls, "getBody", "()Lorg/orekit/bodies/CelestialBody;");
                mids$[mid_getMeanElementRate_3573019cca22a7a6] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getMeanElementRate_6930c150caff50e0] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_57b295149dcd4abd] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_0791dbeb06a23554] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_114c99ef73dfde56] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_a9be3da5be85857d] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");

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

            DSSTThirdBody::DSSTThirdBody(const ::org::orekit::bodies::CelestialBody & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_84a7f17548600b39, a0.this$, a1)) {}

            ::org::orekit::bodies::CelestialBody DSSTThirdBody::getBody() const
            {
              return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_getBody_40e74583267ad550]));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTThirdBody::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_3573019cca22a7a6], a0.this$, a1.this$, a2.this$));
            }

            JArray< jdouble > DSSTThirdBody::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_6930c150caff50e0], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTThirdBody::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
            }

            ::java::util::List DSSTThirdBody::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_57b295149dcd4abd], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTThirdBody::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_0791dbeb06a23554], a0.this$, a1.this$, a2.this$));
            }

            void DSSTThirdBody::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_8fa6c0c067ead7b2], a0.this$);
            }

            void DSSTThirdBody::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_114c99ef73dfde56], a0.this$, a1.this$);
            }

            void DSSTThirdBody::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_a9be3da5be85857d], a0.this$, a1.this$);
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
                  JArray< jdouble > a0((jobject) NULL);
                  JArray< ::org::orekit::propagation::SpacecraftState > a1((jobject) NULL);

                  if (!parseArgs(args, "[D[k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                  {
                    OBJ_CALL(self->object.updateShortPeriodTerms(a0, a1));
                    Py_RETURN_NONE;
                  }
                }
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
#include "org/hipparchus/ode/ComplexOrdinaryDifferentialEquation.h"
#include "org/hipparchus/complex/Complex.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *ComplexOrdinaryDifferentialEquation::class$ = NULL;
      jmethodID *ComplexOrdinaryDifferentialEquation::mids$ = NULL;
      bool ComplexOrdinaryDifferentialEquation::live$ = false;

      jclass ComplexOrdinaryDifferentialEquation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/ComplexOrdinaryDifferentialEquation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeDerivatives_c9ff5d1adec2e866] = env->getMethodID(cls, "computeDerivatives", "(D[Lorg/hipparchus/complex/Complex;)[Lorg/hipparchus/complex/Complex;");
          mids$[mid_getDimension_412668abc8d889e9] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_init_258a505202ccd7d6] = env->getMethodID(cls, "init", "(D[Lorg/hipparchus/complex/Complex;D)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::complex::Complex > ComplexOrdinaryDifferentialEquation::computeDerivatives(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1) const
      {
        return JArray< ::org::hipparchus::complex::Complex >(env->callObjectMethod(this$, mids$[mid_computeDerivatives_c9ff5d1adec2e866], a0, a1.this$));
      }

      jint ComplexOrdinaryDifferentialEquation::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_412668abc8d889e9]);
      }

      void ComplexOrdinaryDifferentialEquation::init(jdouble a0, const JArray< ::org::hipparchus::complex::Complex > & a1, jdouble a2) const
      {
        env->callVoidMethod(this$, mids$[mid_init_258a505202ccd7d6], a0, a1.this$, a2);
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
      static PyObject *t_ComplexOrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_computeDerivatives(t_ComplexOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_getDimension(t_ComplexOrdinaryDifferentialEquation *self);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_init(t_ComplexOrdinaryDifferentialEquation *self, PyObject *args);
      static PyObject *t_ComplexOrdinaryDifferentialEquation_get__dimension(t_ComplexOrdinaryDifferentialEquation *self, void *data);
      static PyGetSetDef t_ComplexOrdinaryDifferentialEquation__fields_[] = {
        DECLARE_GET_FIELD(t_ComplexOrdinaryDifferentialEquation, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ComplexOrdinaryDifferentialEquation__methods_[] = {
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, computeDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_ComplexOrdinaryDifferentialEquation, init, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ComplexOrdinaryDifferentialEquation)[] = {
        { Py_tp_methods, t_ComplexOrdinaryDifferentialEquation__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ComplexOrdinaryDifferentialEquation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ComplexOrdinaryDifferentialEquation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ComplexOrdinaryDifferentialEquation, t_ComplexOrdinaryDifferentialEquation, ComplexOrdinaryDifferentialEquation);

      void t_ComplexOrdinaryDifferentialEquation::install(PyObject *module)
      {
        installType(&PY_TYPE(ComplexOrdinaryDifferentialEquation), &PY_TYPE_DEF(ComplexOrdinaryDifferentialEquation), module, "ComplexOrdinaryDifferentialEquation", 0);
      }

      void t_ComplexOrdinaryDifferentialEquation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexOrdinaryDifferentialEquation), "class_", make_descriptor(ComplexOrdinaryDifferentialEquation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexOrdinaryDifferentialEquation), "wrapfn_", make_descriptor(t_ComplexOrdinaryDifferentialEquation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ComplexOrdinaryDifferentialEquation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ComplexOrdinaryDifferentialEquation::initializeClass, 1)))
          return NULL;
        return t_ComplexOrdinaryDifferentialEquation::wrap_Object(ComplexOrdinaryDifferentialEquation(((t_ComplexOrdinaryDifferentialEquation *) arg)->object.this$));
      }
      static PyObject *t_ComplexOrdinaryDifferentialEquation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ComplexOrdinaryDifferentialEquation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_computeDerivatives(t_ComplexOrdinaryDifferentialEquation *self, PyObject *args)
      {
        jdouble a0;
        JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
        JArray< ::org::hipparchus::complex::Complex > result((jobject) NULL);

        if (!parseArgs(args, "D[k", ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.computeDerivatives(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::complex::t_Complex::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "computeDerivatives", args);
        return NULL;
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_getDimension(t_ComplexOrdinaryDifferentialEquation *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_init(t_ComplexOrdinaryDifferentialEquation *self, PyObject *args)
      {
        jdouble a0;
        JArray< ::org::hipparchus::complex::Complex > a1((jobject) NULL);
        jdouble a2;

        if (!parseArgs(args, "D[kD", ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(self->object.init(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "init", args);
        return NULL;
      }

      static PyObject *t_ComplexOrdinaryDifferentialEquation_get__dimension(t_ComplexOrdinaryDifferentialEquation *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmCorrectionData::class$ = NULL;
              jmethodID *RtcmCorrectionData::mids$ = NULL;
              bool RtcmCorrectionData::live$ = false;

              jclass RtcmCorrectionData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getSatelliteID_412668abc8d889e9] = env->getMethodID(cls, "getSatelliteID", "()I");
                  mids$[mid_setSatelliteID_a3da1a935cb37f7b] = env->getMethodID(cls, "setSatelliteID", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmCorrectionData::RtcmCorrectionData() : ::org::orekit::gnss::metric::messages::rtcm::RtcmData(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              jint RtcmCorrectionData::getSatelliteID() const
              {
                return env->callIntMethod(this$, mids$[mid_getSatelliteID_412668abc8d889e9]);
              }

              void RtcmCorrectionData::setSatelliteID(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSatelliteID_a3da1a935cb37f7b], a0);
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
              static PyObject *t_RtcmCorrectionData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCorrectionData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmCorrectionData_init_(t_RtcmCorrectionData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmCorrectionData_getSatelliteID(t_RtcmCorrectionData *self);
              static PyObject *t_RtcmCorrectionData_setSatelliteID(t_RtcmCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionData_get__satelliteID(t_RtcmCorrectionData *self, void *data);
              static int t_RtcmCorrectionData_set__satelliteID(t_RtcmCorrectionData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmCorrectionData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmCorrectionData, satelliteID),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmCorrectionData__methods_[] = {
                DECLARE_METHOD(t_RtcmCorrectionData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionData, getSatelliteID, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionData, setSatelliteID, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmCorrectionData)[] = {
                { Py_tp_methods, t_RtcmCorrectionData__methods_ },
                { Py_tp_init, (void *) t_RtcmCorrectionData_init_ },
                { Py_tp_getset, t_RtcmCorrectionData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmCorrectionData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::RtcmData),
                NULL
              };

              DEFINE_TYPE(RtcmCorrectionData, t_RtcmCorrectionData, RtcmCorrectionData);

              void t_RtcmCorrectionData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmCorrectionData), &PY_TYPE_DEF(RtcmCorrectionData), module, "RtcmCorrectionData", 0);
              }

              void t_RtcmCorrectionData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionData), "class_", make_descriptor(RtcmCorrectionData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionData), "wrapfn_", make_descriptor(t_RtcmCorrectionData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmCorrectionData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmCorrectionData::initializeClass, 1)))
                  return NULL;
                return t_RtcmCorrectionData::wrap_Object(RtcmCorrectionData(((t_RtcmCorrectionData *) arg)->object.this$));
              }
              static PyObject *t_RtcmCorrectionData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmCorrectionData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmCorrectionData_init_(t_RtcmCorrectionData *self, PyObject *args, PyObject *kwds)
              {
                RtcmCorrectionData object((jobject) NULL);

                INT_CALL(object = RtcmCorrectionData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmCorrectionData_getSatelliteID(t_RtcmCorrectionData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSatelliteID());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionData_setSatelliteID(t_RtcmCorrectionData *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSatelliteID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSatelliteID", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionData_get__satelliteID(t_RtcmCorrectionData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSatelliteID());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionData_set__satelliteID(t_RtcmCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSatelliteID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "satelliteID", arg);
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
#include "org/orekit/estimation/iod/IodLambert.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/estimation/measurements/PV.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/Position.h"
#include "org/orekit/orbits/Orbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodLambert::class$ = NULL;
        jmethodID *IodLambert::mids$ = NULL;
        bool IodLambert::live$ = false;

        jclass IodLambert::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodLambert");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_97d585120c036b5c] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;ZILorg/orekit/estimation/measurements/PV;Lorg/orekit/estimation/measurements/PV;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_a8ed81a24acd9429] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;ZILorg/orekit/estimation/measurements/Position;Lorg/orekit/estimation/measurements/Position;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_e55c506cadfed3ee] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;ZILorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodLambert::IodLambert(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        ::org::orekit::orbits::Orbit IodLambert::estimate(const ::org::orekit::frames::Frame & a0, jboolean a1, jint a2, const ::org::orekit::estimation::measurements::PV & a3, const ::org::orekit::estimation::measurements::PV & a4) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_97d585120c036b5c], a0.this$, a1, a2, a3.this$, a4.this$));
        }

        ::org::orekit::orbits::Orbit IodLambert::estimate(const ::org::orekit::frames::Frame & a0, jboolean a1, jint a2, const ::org::orekit::estimation::measurements::Position & a3, const ::org::orekit::estimation::measurements::Position & a4) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_a8ed81a24acd9429], a0.this$, a1, a2, a3.this$, a4.this$));
        }

        ::org::orekit::orbits::Orbit IodLambert::estimate(const ::org::orekit::frames::Frame & a0, jboolean a1, jint a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::orekit::time::AbsoluteDate & a4, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a5, const ::org::orekit::time::AbsoluteDate & a6) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_e55c506cadfed3ee], a0.this$, a1, a2, a3.this$, a4.this$, a5.this$, a6.this$));
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
      namespace iod {
        static PyObject *t_IodLambert_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodLambert_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodLambert_init_(t_IodLambert *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodLambert_estimate(t_IodLambert *self, PyObject *args);

        static PyMethodDef t_IodLambert__methods_[] = {
          DECLARE_METHOD(t_IodLambert, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodLambert, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodLambert, estimate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodLambert)[] = {
          { Py_tp_methods, t_IodLambert__methods_ },
          { Py_tp_init, (void *) t_IodLambert_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodLambert)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodLambert, t_IodLambert, IodLambert);

        void t_IodLambert::install(PyObject *module)
        {
          installType(&PY_TYPE(IodLambert), &PY_TYPE_DEF(IodLambert), module, "IodLambert", 0);
        }

        void t_IodLambert::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLambert), "class_", make_descriptor(IodLambert::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLambert), "wrapfn_", make_descriptor(t_IodLambert::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodLambert), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodLambert_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodLambert::initializeClass, 1)))
            return NULL;
          return t_IodLambert::wrap_Object(IodLambert(((t_IodLambert *) arg)->object.this$));
        }
        static PyObject *t_IodLambert_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodLambert::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodLambert_init_(t_IodLambert *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodLambert object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodLambert(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodLambert_estimate(t_IodLambert *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jboolean a1;
              jint a2;
              ::org::orekit::estimation::measurements::PV a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::estimation::measurements::PV a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kZIKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, ::org::orekit::estimation::measurements::PV::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::estimation::measurements::t_PV::parameters_, &a4, &p4, ::org::orekit::estimation::measurements::t_PV::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jboolean a1;
              jint a2;
              ::org::orekit::estimation::measurements::Position a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::estimation::measurements::Position a4((jobject) NULL);
              PyTypeObject **p4;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kZIKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, ::org::orekit::estimation::measurements::Position::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::estimation::measurements::t_Position::parameters_, &a4, &p4, ::org::orekit::estimation::measurements::t_Position::parameters_))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 7:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              jboolean a1;
              jint a2;
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a4((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a5((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a6((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kZIkkkk", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldInterpolationGrid::class$ = NULL;
            jmethodID *FieldInterpolationGrid::mids$ = NULL;
            bool FieldInterpolationGrid::live$ = false;

            jclass FieldInterpolationGrid::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldInterpolationGrid");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getGridPoints_4a8c729a6fb08a74] = env->getMethodID(cls, "getGridPoints", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< ::org::hipparchus::CalculusFieldElement > FieldInterpolationGrid::getGridPoints(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getGridPoints_4a8c729a6fb08a74], a0.this$, a1.this$));
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
            static PyObject *t_FieldInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldInterpolationGrid_of_(t_FieldInterpolationGrid *self, PyObject *args);
            static PyObject *t_FieldInterpolationGrid_getGridPoints(t_FieldInterpolationGrid *self, PyObject *args);
            static PyObject *t_FieldInterpolationGrid_get__parameters_(t_FieldInterpolationGrid *self, void *data);
            static PyGetSetDef t_FieldInterpolationGrid__fields_[] = {
              DECLARE_GET_FIELD(t_FieldInterpolationGrid, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldInterpolationGrid__methods_[] = {
              DECLARE_METHOD(t_FieldInterpolationGrid, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldInterpolationGrid, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldInterpolationGrid, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldInterpolationGrid, getGridPoints, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldInterpolationGrid)[] = {
              { Py_tp_methods, t_FieldInterpolationGrid__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_FieldInterpolationGrid__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldInterpolationGrid)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldInterpolationGrid, t_FieldInterpolationGrid, FieldInterpolationGrid);
            PyObject *t_FieldInterpolationGrid::wrap_Object(const FieldInterpolationGrid& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldInterpolationGrid::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldInterpolationGrid *self = (t_FieldInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldInterpolationGrid::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldInterpolationGrid::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldInterpolationGrid *self = (t_FieldInterpolationGrid *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldInterpolationGrid::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldInterpolationGrid), &PY_TYPE_DEF(FieldInterpolationGrid), module, "FieldInterpolationGrid", 0);
            }

            void t_FieldInterpolationGrid::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInterpolationGrid), "class_", make_descriptor(FieldInterpolationGrid::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInterpolationGrid), "wrapfn_", make_descriptor(t_FieldInterpolationGrid::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldInterpolationGrid), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldInterpolationGrid_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldInterpolationGrid::initializeClass, 1)))
                return NULL;
              return t_FieldInterpolationGrid::wrap_Object(FieldInterpolationGrid(((t_FieldInterpolationGrid *) arg)->object.this$));
            }
            static PyObject *t_FieldInterpolationGrid_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldInterpolationGrid::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldInterpolationGrid_of_(t_FieldInterpolationGrid *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_FieldInterpolationGrid_getGridPoints(t_FieldInterpolationGrid *self, PyObject *args)
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.getGridPoints(a0, a1));
                return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
              }

              PyErr_SetArgsError((PyObject *) self, "getGridPoints", args);
              return NULL;
            }
            static PyObject *t_FieldInterpolationGrid_get__parameters_(t_FieldInterpolationGrid *self, void *data)
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
#include "org/orekit/forces/gravity/potential/CachedNormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *CachedNormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *CachedNormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool CachedNormalizedSphericalHarmonicsProvider::live$ = false;

          jclass CachedNormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/CachedNormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_dcf1d2fe729142df] = env->getMethodID(cls, "<init>", "(Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider;DIIDD)V");
              mids$[mid_getAe_557b8123390d8d0c] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_412668abc8d889e9] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_412668abc8d889e9] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_7a97f7e149e79afb] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_7d9a2a298dcb49fa] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_onDate_efafd161e8b9f542] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          CachedNormalizedSphericalHarmonicsProvider::CachedNormalizedSphericalHarmonicsProvider(const ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider & a0, jdouble a1, jint a2, jint a3, jdouble a4, jdouble a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dcf1d2fe729142df, a0.this$, a1, a2, a3, a4, a5)) {}

          jdouble CachedNormalizedSphericalHarmonicsProvider::getAe() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAe_557b8123390d8d0c]);
          }

          jint CachedNormalizedSphericalHarmonicsProvider::getMaxDegree() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxDegree_412668abc8d889e9]);
          }

          jint CachedNormalizedSphericalHarmonicsProvider::getMaxOrder() const
          {
            return env->callIntMethod(this$, mids$[mid_getMaxOrder_412668abc8d889e9]);
          }

          jdouble CachedNormalizedSphericalHarmonicsProvider::getMu() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
          }

          ::org::orekit::time::AbsoluteDate CachedNormalizedSphericalHarmonicsProvider::getReferenceDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceDate_7a97f7e149e79afb]));
          }

          ::org::orekit::forces::gravity::potential::TideSystem CachedNormalizedSphericalHarmonicsProvider::getTideSystem() const
          {
            return ::org::orekit::forces::gravity::potential::TideSystem(env->callObjectMethod(this$, mids$[mid_getTideSystem_7d9a2a298dcb49fa]));
          }

          ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics CachedNormalizedSphericalHarmonicsProvider::onDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            return ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics(env->callObjectMethod(this$, mids$[mid_onDate_efafd161e8b9f542], a0.this$));
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
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_CachedNormalizedSphericalHarmonicsProvider_init_(t_CachedNormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getAe(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMaxDegree(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMaxOrder(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMu(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getReferenceDate(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getTideSystem(t_CachedNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_onDate(t_CachedNormalizedSphericalHarmonicsProvider *self, PyObject *arg);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__ae(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__maxDegree(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__maxOrder(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__mu(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__referenceDate(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__tideSystem(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_CachedNormalizedSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, ae),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, maxDegree),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, maxOrder),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, mu),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, referenceDate),
            DECLARE_GET_FIELD(t_CachedNormalizedSphericalHarmonicsProvider, tideSystem),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CachedNormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getAe, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getMaxDegree, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getMaxOrder, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getMu, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getReferenceDate, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, getTideSystem, METH_NOARGS),
            DECLARE_METHOD(t_CachedNormalizedSphericalHarmonicsProvider, onDate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CachedNormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_CachedNormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_CachedNormalizedSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_CachedNormalizedSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CachedNormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CachedNormalizedSphericalHarmonicsProvider, t_CachedNormalizedSphericalHarmonicsProvider, CachedNormalizedSphericalHarmonicsProvider);

          void t_CachedNormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(CachedNormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(CachedNormalizedSphericalHarmonicsProvider), module, "CachedNormalizedSphericalHarmonicsProvider", 0);
          }

          void t_CachedNormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CachedNormalizedSphericalHarmonicsProvider), "class_", make_descriptor(CachedNormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CachedNormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_CachedNormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CachedNormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CachedNormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_CachedNormalizedSphericalHarmonicsProvider::wrap_Object(CachedNormalizedSphericalHarmonicsProvider(((t_CachedNormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CachedNormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_CachedNormalizedSphericalHarmonicsProvider_init_(t_CachedNormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider a0((jobject) NULL);
            jdouble a1;
            jint a2;
            jint a3;
            jdouble a4;
            jdouble a5;
            CachedNormalizedSphericalHarmonicsProvider object((jobject) NULL);

            if (!parseArgs(args, "kDIIDD", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              INT_CALL(object = CachedNormalizedSphericalHarmonicsProvider(a0, a1, a2, a3, a4, a5));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getAe(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAe());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMaxDegree(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxDegree());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMaxOrder(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getMaxOrder());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getMu(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getMu());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getReferenceDate(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_getTideSystem(t_CachedNormalizedSphericalHarmonicsProvider *self)
          {
            ::org::orekit::forces::gravity::potential::TideSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTideSystem());
            return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(result);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_onDate(t_CachedNormalizedSphericalHarmonicsProvider *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.onDate(a0));
              return ::org::orekit::forces::gravity::potential::t_NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "onDate", arg);
            return NULL;
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__ae(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAe());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__maxDegree(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxDegree());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__maxOrder(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getMaxOrder());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__mu(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMu());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__referenceDate(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }

          static PyObject *t_CachedNormalizedSphericalHarmonicsProvider_get__tideSystem(t_CachedNormalizedSphericalHarmonicsProvider *self, void *data)
          {
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTideSystem());
            return ::org::orekit::forces::gravity::potential::t_TideSystem::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/hull/ConvexHullGenerator.h"
#include "java/util/Collection.h"
#include "org/hipparchus/geometry/hull/ConvexHull.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace hull {

        ::java::lang::Class *ConvexHullGenerator::class$ = NULL;
        jmethodID *ConvexHullGenerator::mids$ = NULL;
        bool ConvexHullGenerator::live$ = false;

        jclass ConvexHullGenerator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/hull/ConvexHullGenerator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_generate_d844e4c56610f659] = env->getMethodID(cls, "generate", "(Ljava/util/Collection;)Lorg/hipparchus/geometry/hull/ConvexHull;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::geometry::hull::ConvexHull ConvexHullGenerator::generate(const ::java::util::Collection & a0) const
        {
          return ::org::hipparchus::geometry::hull::ConvexHull(env->callObjectMethod(this$, mids$[mid_generate_d844e4c56610f659], a0.this$));
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
      namespace hull {
        static PyObject *t_ConvexHullGenerator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConvexHullGenerator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ConvexHullGenerator_of_(t_ConvexHullGenerator *self, PyObject *args);
        static PyObject *t_ConvexHullGenerator_generate(t_ConvexHullGenerator *self, PyObject *arg);
        static PyObject *t_ConvexHullGenerator_get__parameters_(t_ConvexHullGenerator *self, void *data);
        static PyGetSetDef t_ConvexHullGenerator__fields_[] = {
          DECLARE_GET_FIELD(t_ConvexHullGenerator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ConvexHullGenerator__methods_[] = {
          DECLARE_METHOD(t_ConvexHullGenerator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConvexHullGenerator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ConvexHullGenerator, of_, METH_VARARGS),
          DECLARE_METHOD(t_ConvexHullGenerator, generate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ConvexHullGenerator)[] = {
          { Py_tp_methods, t_ConvexHullGenerator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_ConvexHullGenerator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ConvexHullGenerator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ConvexHullGenerator, t_ConvexHullGenerator, ConvexHullGenerator);
        PyObject *t_ConvexHullGenerator::wrap_Object(const ConvexHullGenerator& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_ConvexHullGenerator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ConvexHullGenerator *self = (t_ConvexHullGenerator *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_ConvexHullGenerator::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_ConvexHullGenerator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ConvexHullGenerator *self = (t_ConvexHullGenerator *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_ConvexHullGenerator::install(PyObject *module)
        {
          installType(&PY_TYPE(ConvexHullGenerator), &PY_TYPE_DEF(ConvexHullGenerator), module, "ConvexHullGenerator", 0);
        }

        void t_ConvexHullGenerator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator), "class_", make_descriptor(ConvexHullGenerator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator), "wrapfn_", make_descriptor(t_ConvexHullGenerator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ConvexHullGenerator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ConvexHullGenerator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ConvexHullGenerator::initializeClass, 1)))
            return NULL;
          return t_ConvexHullGenerator::wrap_Object(ConvexHullGenerator(((t_ConvexHullGenerator *) arg)->object.this$));
        }
        static PyObject *t_ConvexHullGenerator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ConvexHullGenerator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ConvexHullGenerator_of_(t_ConvexHullGenerator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_ConvexHullGenerator_generate(t_ConvexHullGenerator *self, PyObject *arg)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::hull::ConvexHull result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            OBJ_CALL(result = self->object.generate(a0));
            return ::org::hipparchus::geometry::hull::t_ConvexHull::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "generate", arg);
          return NULL;
        }
        static PyObject *t_ConvexHullGenerator_get__parameters_(t_ConvexHullGenerator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/troposphere/NiellMappingFunctionModel.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/bodies/FieldGeodeticPoint.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/models/earth/troposphere/MappingFunction.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *NiellMappingFunctionModel::class$ = NULL;
          jmethodID *NiellMappingFunctionModel::mids$ = NULL;
          bool NiellMappingFunctionModel::live$ = false;

          jclass NiellMappingFunctionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/NiellMappingFunctionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_3e3301925c0131d4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
              mids$[mid_mappingFactors_e6ce6b157ff98280] = env->getMethodID(cls, "mappingFactors", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/bodies/FieldGeodeticPoint;Lorg/orekit/time/FieldAbsoluteDate;)[Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFactors_964dc353437b5da2] = env->getMethodID(cls, "mappingFactors", "(DLorg/orekit/bodies/GeodeticPoint;Lorg/orekit/time/AbsoluteDate;)[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NiellMappingFunctionModel::NiellMappingFunctionModel() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          NiellMappingFunctionModel::NiellMappingFunctionModel(const ::org::orekit::time::TimeScale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3e3301925c0131d4, a0.this$)) {}

          JArray< ::org::hipparchus::CalculusFieldElement > NiellMappingFunctionModel::mappingFactors(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::bodies::FieldGeodeticPoint & a1, const ::org::orekit::time::FieldAbsoluteDate & a2) const
          {
            return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_mappingFactors_e6ce6b157ff98280], a0.this$, a1.this$, a2.this$));
          }

          JArray< jdouble > NiellMappingFunctionModel::mappingFactors(jdouble a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::time::AbsoluteDate & a2) const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_mappingFactors_964dc353437b5da2], a0, a1.this$, a2.this$));
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
          static PyObject *t_NiellMappingFunctionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NiellMappingFunctionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NiellMappingFunctionModel_init_(t_NiellMappingFunctionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NiellMappingFunctionModel_mappingFactors(t_NiellMappingFunctionModel *self, PyObject *args);

          static PyMethodDef t_NiellMappingFunctionModel__methods_[] = {
            DECLARE_METHOD(t_NiellMappingFunctionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NiellMappingFunctionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NiellMappingFunctionModel, mappingFactors, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NiellMappingFunctionModel)[] = {
            { Py_tp_methods, t_NiellMappingFunctionModel__methods_ },
            { Py_tp_init, (void *) t_NiellMappingFunctionModel_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NiellMappingFunctionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NiellMappingFunctionModel, t_NiellMappingFunctionModel, NiellMappingFunctionModel);

          void t_NiellMappingFunctionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(NiellMappingFunctionModel), &PY_TYPE_DEF(NiellMappingFunctionModel), module, "NiellMappingFunctionModel", 0);
          }

          void t_NiellMappingFunctionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NiellMappingFunctionModel), "class_", make_descriptor(NiellMappingFunctionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NiellMappingFunctionModel), "wrapfn_", make_descriptor(t_NiellMappingFunctionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NiellMappingFunctionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NiellMappingFunctionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NiellMappingFunctionModel::initializeClass, 1)))
              return NULL;
            return t_NiellMappingFunctionModel::wrap_Object(NiellMappingFunctionModel(((t_NiellMappingFunctionModel *) arg)->object.this$));
          }
          static PyObject *t_NiellMappingFunctionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NiellMappingFunctionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NiellMappingFunctionModel_init_(t_NiellMappingFunctionModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                NiellMappingFunctionModel object((jobject) NULL);

                INT_CALL(object = NiellMappingFunctionModel());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::orekit::time::TimeScale a0((jobject) NULL);
                NiellMappingFunctionModel object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
                {
                  INT_CALL(object = NiellMappingFunctionModel(a0));
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

          static PyObject *t_NiellMappingFunctionModel_mappingFactors(t_NiellMappingFunctionModel *self, PyObject *args)
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
#include "org/orekit/orbits/LibrationOrbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *LibrationOrbit::class$ = NULL;
      jmethodID *LibrationOrbit::mids$ = NULL;
      bool LibrationOrbit::live$ = false;

      jclass LibrationOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/LibrationOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_applyDifferentialCorrection_0640e6acf969ed28] = env->getMethodID(cls, "applyDifferentialCorrection", "()V");
          mids$[mid_getInitialPV_77bd7b3cdab2713e] = env->getMethodID(cls, "getInitialPV", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getManifolds_9f3a2589cd3feaf4] = env->getMethodID(cls, "getManifolds", "(Lorg/orekit/propagation/SpacecraftState;Z)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getOrbitalPeriod_557b8123390d8d0c] = env->getMethodID(cls, "getOrbitalPeriod", "()D");
          mids$[mid_applyCorrectionOnPV_0f6106070ec4ffe8] = env->getMethodID(cls, "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void LibrationOrbit::applyDifferentialCorrection() const
      {
        env->callVoidMethod(this$, mids$[mid_applyDifferentialCorrection_0640e6acf969ed28]);
      }

      ::org::orekit::utils::PVCoordinates LibrationOrbit::getInitialPV() const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getInitialPV_77bd7b3cdab2713e]));
      }

      ::org::orekit::utils::PVCoordinates LibrationOrbit::getManifolds(const ::org::orekit::propagation::SpacecraftState & a0, jboolean a1) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_getManifolds_9f3a2589cd3feaf4], a0.this$, a1));
      }

      jdouble LibrationOrbit::getOrbitalPeriod() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOrbitalPeriod_557b8123390d8d0c]);
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
      static PyObject *t_LibrationOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LibrationOrbit_applyDifferentialCorrection(t_LibrationOrbit *self);
      static PyObject *t_LibrationOrbit_getInitialPV(t_LibrationOrbit *self);
      static PyObject *t_LibrationOrbit_getManifolds(t_LibrationOrbit *self, PyObject *args);
      static PyObject *t_LibrationOrbit_getOrbitalPeriod(t_LibrationOrbit *self);
      static PyObject *t_LibrationOrbit_get__initialPV(t_LibrationOrbit *self, void *data);
      static PyObject *t_LibrationOrbit_get__orbitalPeriod(t_LibrationOrbit *self, void *data);
      static PyGetSetDef t_LibrationOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_LibrationOrbit, initialPV),
        DECLARE_GET_FIELD(t_LibrationOrbit, orbitalPeriod),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LibrationOrbit__methods_[] = {
        DECLARE_METHOD(t_LibrationOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LibrationOrbit, applyDifferentialCorrection, METH_NOARGS),
        DECLARE_METHOD(t_LibrationOrbit, getInitialPV, METH_NOARGS),
        DECLARE_METHOD(t_LibrationOrbit, getManifolds, METH_VARARGS),
        DECLARE_METHOD(t_LibrationOrbit, getOrbitalPeriod, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LibrationOrbit)[] = {
        { Py_tp_methods, t_LibrationOrbit__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LibrationOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LibrationOrbit)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LibrationOrbit, t_LibrationOrbit, LibrationOrbit);

      void t_LibrationOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(LibrationOrbit), &PY_TYPE_DEF(LibrationOrbit), module, "LibrationOrbit", 0);
      }

      void t_LibrationOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbit), "class_", make_descriptor(LibrationOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbit), "wrapfn_", make_descriptor(t_LibrationOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LibrationOrbit), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LibrationOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LibrationOrbit::initializeClass, 1)))
          return NULL;
        return t_LibrationOrbit::wrap_Object(LibrationOrbit(((t_LibrationOrbit *) arg)->object.this$));
      }
      static PyObject *t_LibrationOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LibrationOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LibrationOrbit_applyDifferentialCorrection(t_LibrationOrbit *self)
      {
        OBJ_CALL(self->object.applyDifferentialCorrection());
        Py_RETURN_NONE;
      }

      static PyObject *t_LibrationOrbit_getInitialPV(t_LibrationOrbit *self)
      {
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.getInitialPV());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_LibrationOrbit_getManifolds(t_LibrationOrbit *self, PyObject *args)
      {
        ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
        jboolean a1;
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "kZ", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.getManifolds(a0, a1));
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getManifolds", args);
        return NULL;
      }

      static PyObject *t_LibrationOrbit_getOrbitalPeriod(t_LibrationOrbit *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOrbitalPeriod());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_LibrationOrbit_get__initialPV(t_LibrationOrbit *self, void *data)
      {
        ::org::orekit::utils::PVCoordinates value((jobject) NULL);
        OBJ_CALL(value = self->object.getInitialPV());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(value);
      }

      static PyObject *t_LibrationOrbit_get__orbitalPeriod(t_LibrationOrbit *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getOrbitalPeriod());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldAdaptableInterval::class$ = NULL;
        jmethodID *FieldAdaptableInterval::mids$ = NULL;
        bool FieldAdaptableInterval::live$ = false;

        jclass FieldAdaptableInterval::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldAdaptableInterval");

            mids$ = new jmethodID[max_mid];
            mids$[mid_currentInterval_2bf27f945aefc85c] = env->getMethodID(cls, "currentInterval", "(Lorg/orekit/propagation/FieldSpacecraftState;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble FieldAdaptableInterval::currentInterval(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_currentInterval_2bf27f945aefc85c], a0.this$);
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
        static PyObject *t_FieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_of_(t_FieldAdaptableInterval *self, PyObject *args);
        static PyObject *t_FieldAdaptableInterval_currentInterval(t_FieldAdaptableInterval *self, PyObject *arg);
        static PyObject *t_FieldAdaptableInterval_get__parameters_(t_FieldAdaptableInterval *self, void *data);
        static PyGetSetDef t_FieldAdaptableInterval__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAdaptableInterval, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAdaptableInterval__methods_[] = {
          DECLARE_METHOD(t_FieldAdaptableInterval, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdaptableInterval, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAdaptableInterval, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAdaptableInterval, currentInterval, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAdaptableInterval)[] = {
          { Py_tp_methods, t_FieldAdaptableInterval__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAdaptableInterval__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAdaptableInterval)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAdaptableInterval, t_FieldAdaptableInterval, FieldAdaptableInterval);
        PyObject *t_FieldAdaptableInterval::wrap_Object(const FieldAdaptableInterval& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdaptableInterval::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdaptableInterval *self = (t_FieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldAdaptableInterval::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldAdaptableInterval::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAdaptableInterval *self = (t_FieldAdaptableInterval *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldAdaptableInterval::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAdaptableInterval), &PY_TYPE_DEF(FieldAdaptableInterval), module, "FieldAdaptableInterval", 0);
        }

        void t_FieldAdaptableInterval::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "class_", make_descriptor(FieldAdaptableInterval::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "wrapfn_", make_descriptor(t_FieldAdaptableInterval::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAdaptableInterval), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldAdaptableInterval_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAdaptableInterval::initializeClass, 1)))
            return NULL;
          return t_FieldAdaptableInterval::wrap_Object(FieldAdaptableInterval(((t_FieldAdaptableInterval *) arg)->object.this$));
        }
        static PyObject *t_FieldAdaptableInterval_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAdaptableInterval::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAdaptableInterval_of_(t_FieldAdaptableInterval *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAdaptableInterval_currentInterval(t_FieldAdaptableInterval *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          jdouble result;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.currentInterval(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "currentInterval", arg);
          return NULL;
        }
        static PyObject *t_FieldAdaptableInterval_get__parameters_(t_FieldAdaptableInterval *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RangeModifierUtil.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/propagation/integration/AbstractGradientConverter.h"
#include "org/orekit/utils/ParameterDriversProvider.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RangeModifierUtil::class$ = NULL;
          jmethodID *RangeModifierUtil::mids$ = NULL;
          bool RangeModifierUtil::live$ = false;

          jclass RangeModifierUtil::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RangeModifierUtil");

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
        namespace modifiers {
          static PyObject *t_RangeModifierUtil_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RangeModifierUtil_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_RangeModifierUtil__methods_[] = {
            DECLARE_METHOD(t_RangeModifierUtil, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RangeModifierUtil, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RangeModifierUtil)[] = {
            { Py_tp_methods, t_RangeModifierUtil__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RangeModifierUtil)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RangeModifierUtil, t_RangeModifierUtil, RangeModifierUtil);

          void t_RangeModifierUtil::install(PyObject *module)
          {
            installType(&PY_TYPE(RangeModifierUtil), &PY_TYPE_DEF(RangeModifierUtil), module, "RangeModifierUtil", 0);
          }

          void t_RangeModifierUtil::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeModifierUtil), "class_", make_descriptor(RangeModifierUtil::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeModifierUtil), "wrapfn_", make_descriptor(t_RangeModifierUtil::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RangeModifierUtil), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RangeModifierUtil_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RangeModifierUtil::initializeClass, 1)))
              return NULL;
            return t_RangeModifierUtil::wrap_Object(RangeModifierUtil(((t_RangeModifierUtil *) arg)->object.this$));
          }
          static PyObject *t_RangeModifierUtil_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RangeModifierUtil::initializeClass, 0))
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
#include "org/orekit/estimation/measurements/gnss/LambdaMethod.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *LambdaMethod::class$ = NULL;
          jmethodID *LambdaMethod::mids$ = NULL;
          bool LambdaMethod::live$ = false;

          jclass LambdaMethod::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/LambdaMethod");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_discreteSearch_0640e6acf969ed28] = env->getMethodID(cls, "discreteSearch", "()V");
              mids$[mid_ltdlDecomposition_0640e6acf969ed28] = env->getMethodID(cls, "ltdlDecomposition", "()V");
              mids$[mid_reduction_0640e6acf969ed28] = env->getMethodID(cls, "reduction", "()V");
              mids$[mid_inverseDecomposition_0640e6acf969ed28] = env->getMethodID(cls, "inverseDecomposition", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          LambdaMethod::LambdaMethod() : ::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
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
          static PyObject *t_LambdaMethod_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LambdaMethod_instance_(PyTypeObject *type, PyObject *arg);
          static int t_LambdaMethod_init_(t_LambdaMethod *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_LambdaMethod__methods_[] = {
            DECLARE_METHOD(t_LambdaMethod, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LambdaMethod, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LambdaMethod)[] = {
            { Py_tp_methods, t_LambdaMethod__methods_ },
            { Py_tp_init, (void *) t_LambdaMethod_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LambdaMethod)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractLambdaMethod),
            NULL
          };

          DEFINE_TYPE(LambdaMethod, t_LambdaMethod, LambdaMethod);

          void t_LambdaMethod::install(PyObject *module)
          {
            installType(&PY_TYPE(LambdaMethod), &PY_TYPE_DEF(LambdaMethod), module, "LambdaMethod", 0);
          }

          void t_LambdaMethod::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LambdaMethod), "class_", make_descriptor(LambdaMethod::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LambdaMethod), "wrapfn_", make_descriptor(t_LambdaMethod::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LambdaMethod), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LambdaMethod_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LambdaMethod::initializeClass, 1)))
              return NULL;
            return t_LambdaMethod::wrap_Object(LambdaMethod(((t_LambdaMethod *) arg)->object.this$));
          }
          static PyObject *t_LambdaMethod_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LambdaMethod::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_LambdaMethod_init_(t_LambdaMethod *self, PyObject *args, PyObject *kwds)
          {
            LambdaMethod object((jobject) NULL);

            INT_CALL(object = LambdaMethod());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/AbstractWindUp.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractWindUp::class$ = NULL;
          jmethodID *AbstractWindUp::mids$ = NULL;
          bool AbstractWindUp::live$ = false;

          jclass AbstractWindUp::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractWindUp");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");
              mids$[mid_receiverToInert_d9b98e1ca49f6e0d] = env->getMethodID(cls, "receiverToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
              mids$[mid_emitterToInert_d9b98e1ca49f6e0d] = env->getMethodID(cls, "emitterToInert", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List AbstractWindUp::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void AbstractWindUp::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
        namespace gnss {
          static PyObject *t_AbstractWindUp_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractWindUp_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractWindUp_of_(t_AbstractWindUp *self, PyObject *args);
          static PyObject *t_AbstractWindUp_getParametersDrivers(t_AbstractWindUp *self);
          static PyObject *t_AbstractWindUp_modifyWithoutDerivatives(t_AbstractWindUp *self, PyObject *arg);
          static PyObject *t_AbstractWindUp_get__parametersDrivers(t_AbstractWindUp *self, void *data);
          static PyObject *t_AbstractWindUp_get__parameters_(t_AbstractWindUp *self, void *data);
          static PyGetSetDef t_AbstractWindUp__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractWindUp, parametersDrivers),
            DECLARE_GET_FIELD(t_AbstractWindUp, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractWindUp__methods_[] = {
            DECLARE_METHOD(t_AbstractWindUp, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractWindUp, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractWindUp, of_, METH_VARARGS),
            DECLARE_METHOD(t_AbstractWindUp, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_AbstractWindUp, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractWindUp)[] = {
            { Py_tp_methods, t_AbstractWindUp__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractWindUp__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractWindUp)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractWindUp, t_AbstractWindUp, AbstractWindUp);
          PyObject *t_AbstractWindUp::wrap_Object(const AbstractWindUp& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractWindUp::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractWindUp *self = (t_AbstractWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AbstractWindUp::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractWindUp::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractWindUp *self = (t_AbstractWindUp *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AbstractWindUp::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractWindUp), &PY_TYPE_DEF(AbstractWindUp), module, "AbstractWindUp", 0);
          }

          void t_AbstractWindUp::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWindUp), "class_", make_descriptor(AbstractWindUp::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWindUp), "wrapfn_", make_descriptor(t_AbstractWindUp::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractWindUp), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractWindUp_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractWindUp::initializeClass, 1)))
              return NULL;
            return t_AbstractWindUp::wrap_Object(AbstractWindUp(((t_AbstractWindUp *) arg)->object.this$));
          }
          static PyObject *t_AbstractWindUp_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractWindUp::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractWindUp_of_(t_AbstractWindUp *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AbstractWindUp_getParametersDrivers(t_AbstractWindUp *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_AbstractWindUp_modifyWithoutDerivatives(t_AbstractWindUp *self, PyObject *arg)
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
          static PyObject *t_AbstractWindUp_get__parameters_(t_AbstractWindUp *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_AbstractWindUp_get__parametersDrivers(t_AbstractWindUp *self, void *data)
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
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
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
          mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::AbsoluteDate BoundedPropagator::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_7a97f7e149e79afb]));
      }

      ::org::orekit::time::AbsoluteDate BoundedPropagator::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_7a97f7e149e79afb]));
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
#include "org/orekit/orbits/PythonLibrationOrbit.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "org/orekit/orbits/CR3BPDifferentialCorrection.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *PythonLibrationOrbit::class$ = NULL;
      jmethodID *PythonLibrationOrbit::mids$ = NULL;
      bool PythonLibrationOrbit::live$ = false;

      jclass PythonLibrationOrbit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/PythonLibrationOrbit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_cba003a7418c96ab] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CR3BPSystem;Lorg/orekit/utils/PVCoordinates;D)V");
          mids$[mid_applyCorrectionOnPV_0f6106070ec4ffe8] = env->getMethodID(cls, "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonLibrationOrbit::PythonLibrationOrbit(const ::org::orekit::bodies::CR3BPSystem & a0, const ::org::orekit::utils::PVCoordinates & a1, jdouble a2) : ::org::orekit::orbits::LibrationOrbit(env->newObject(initializeClass, &mids$, mid_init$_cba003a7418c96ab, a0.this$, a1.this$, a2)) {}

      void PythonLibrationOrbit::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonLibrationOrbit::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonLibrationOrbit::pythonExtension(jlong a0) const
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
    namespace orbits {
      static PyObject *t_PythonLibrationOrbit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonLibrationOrbit_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonLibrationOrbit_init_(t_PythonLibrationOrbit *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonLibrationOrbit_finalize(t_PythonLibrationOrbit *self);
      static PyObject *t_PythonLibrationOrbit_pythonExtension(t_PythonLibrationOrbit *self, PyObject *args);
      static jobject JNICALL t_PythonLibrationOrbit_applyCorrectionOnPV0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonLibrationOrbit_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonLibrationOrbit_get__self(t_PythonLibrationOrbit *self, void *data);
      static PyGetSetDef t_PythonLibrationOrbit__fields_[] = {
        DECLARE_GET_FIELD(t_PythonLibrationOrbit, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonLibrationOrbit__methods_[] = {
        DECLARE_METHOD(t_PythonLibrationOrbit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLibrationOrbit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonLibrationOrbit, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonLibrationOrbit, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonLibrationOrbit)[] = {
        { Py_tp_methods, t_PythonLibrationOrbit__methods_ },
        { Py_tp_init, (void *) t_PythonLibrationOrbit_init_ },
        { Py_tp_getset, t_PythonLibrationOrbit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonLibrationOrbit)[] = {
        &PY_TYPE_DEF(::org::orekit::orbits::LibrationOrbit),
        NULL
      };

      DEFINE_TYPE(PythonLibrationOrbit, t_PythonLibrationOrbit, PythonLibrationOrbit);

      void t_PythonLibrationOrbit::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonLibrationOrbit), &PY_TYPE_DEF(PythonLibrationOrbit), module, "PythonLibrationOrbit", 1);
      }

      void t_PythonLibrationOrbit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLibrationOrbit), "class_", make_descriptor(PythonLibrationOrbit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLibrationOrbit), "wrapfn_", make_descriptor(t_PythonLibrationOrbit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLibrationOrbit), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonLibrationOrbit::initializeClass);
        JNINativeMethod methods[] = {
          { "applyCorrectionOnPV", "(Lorg/orekit/orbits/CR3BPDifferentialCorrection;)Lorg/orekit/utils/PVCoordinates;", (void *) t_PythonLibrationOrbit_applyCorrectionOnPV0 },
          { "pythonDecRef", "()V", (void *) t_PythonLibrationOrbit_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonLibrationOrbit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonLibrationOrbit::initializeClass, 1)))
          return NULL;
        return t_PythonLibrationOrbit::wrap_Object(PythonLibrationOrbit(((t_PythonLibrationOrbit *) arg)->object.this$));
      }
      static PyObject *t_PythonLibrationOrbit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonLibrationOrbit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonLibrationOrbit_init_(t_PythonLibrationOrbit *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CR3BPSystem a0((jobject) NULL);
        ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
        jdouble a2;
        PythonLibrationOrbit object((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::orekit::bodies::CR3BPSystem::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = PythonLibrationOrbit(a0, a1, a2));
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

      static PyObject *t_PythonLibrationOrbit_finalize(t_PythonLibrationOrbit *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonLibrationOrbit_pythonExtension(t_PythonLibrationOrbit *self, PyObject *args)
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

      static jobject JNICALL t_PythonLibrationOrbit_applyCorrectionOnPV0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLibrationOrbit::mids$[PythonLibrationOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::PVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::orbits::t_CR3BPDifferentialCorrection::wrap_Object(::org::orekit::orbits::CR3BPDifferentialCorrection(a0));
        PyObject *result = PyObject_CallMethod(obj, "applyCorrectionOnPV", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &value))
        {
          throwTypeError("applyCorrectionOnPV", result);
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

      static void JNICALL t_PythonLibrationOrbit_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonLibrationOrbit::mids$[PythonLibrationOrbit::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonLibrationOrbit::mids$[PythonLibrationOrbit::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonLibrationOrbit_get__self(t_PythonLibrationOrbit *self, void *data)
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
#include "org/hipparchus/analysis/solvers/AbstractPolynomialSolver.h"
#include "org/hipparchus/analysis/solvers/PolynomialSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *AbstractPolynomialSolver::class$ = NULL;
        jmethodID *AbstractPolynomialSolver::mids$ = NULL;
        bool AbstractPolynomialSolver::live$ = false;

        jclass AbstractPolynomialSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/AbstractPolynomialSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCoefficients_a53a7513ecedada2] = env->getMethodID(cls, "getCoefficients", "()[D");
            mids$[mid_setup_b62111a68f502a63] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/polynomials/PolynomialFunction;DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
        static PyObject *t_AbstractPolynomialSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPolynomialSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPolynomialSolver_of_(t_AbstractPolynomialSolver *self, PyObject *args);
        static PyObject *t_AbstractPolynomialSolver_get__parameters_(t_AbstractPolynomialSolver *self, void *data);
        static PyGetSetDef t_AbstractPolynomialSolver__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractPolynomialSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractPolynomialSolver__methods_[] = {
          DECLARE_METHOD(t_AbstractPolynomialSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPolynomialSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPolynomialSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractPolynomialSolver)[] = {
          { Py_tp_methods, t_AbstractPolynomialSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractPolynomialSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractPolynomialSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(AbstractPolynomialSolver, t_AbstractPolynomialSolver, AbstractPolynomialSolver);
        PyObject *t_AbstractPolynomialSolver::wrap_Object(const AbstractPolynomialSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractPolynomialSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractPolynomialSolver *self = (t_AbstractPolynomialSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractPolynomialSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractPolynomialSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractPolynomialSolver *self = (t_AbstractPolynomialSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractPolynomialSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractPolynomialSolver), &PY_TYPE_DEF(AbstractPolynomialSolver), module, "AbstractPolynomialSolver", 0);
        }

        void t_AbstractPolynomialSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPolynomialSolver), "class_", make_descriptor(AbstractPolynomialSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPolynomialSolver), "wrapfn_", make_descriptor(t_AbstractPolynomialSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPolynomialSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractPolynomialSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractPolynomialSolver::initializeClass, 1)))
            return NULL;
          return t_AbstractPolynomialSolver::wrap_Object(AbstractPolynomialSolver(((t_AbstractPolynomialSolver *) arg)->object.this$));
        }
        static PyObject *t_AbstractPolynomialSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractPolynomialSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractPolynomialSolver_of_(t_AbstractPolynomialSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractPolynomialSolver_get__parameters_(t_AbstractPolynomialSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/RecordAndContinue$Event.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *RecordAndContinue$Event::class$ = NULL;
          jmethodID *RecordAndContinue$Event::mids$ = NULL;
          bool RecordAndContinue$Event::live$ = false;

          jclass RecordAndContinue$Event::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/RecordAndContinue$Event");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getDetector_0701b00b25822fff] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
              mids$[mid_getState_15e85d5301b90ef8] = env->getMethodID(cls, "getState", "()Lorg/orekit/propagation/SpacecraftState;");
              mids$[mid_isIncreasing_89b302893bdbe1f1] = env->getMethodID(cls, "isIncreasing", "()Z");
              mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::propagation::events::EventDetector RecordAndContinue$Event::getDetector() const
          {
            return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_0701b00b25822fff]));
          }

          ::org::orekit::propagation::SpacecraftState RecordAndContinue$Event::getState() const
          {
            return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getState_15e85d5301b90ef8]));
          }

          jboolean RecordAndContinue$Event::isIncreasing() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isIncreasing_89b302893bdbe1f1]);
          }

          ::java::lang::String RecordAndContinue$Event::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
          static PyObject *t_RecordAndContinue$Event_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordAndContinue$Event_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RecordAndContinue$Event_getDetector(t_RecordAndContinue$Event *self);
          static PyObject *t_RecordAndContinue$Event_getState(t_RecordAndContinue$Event *self);
          static PyObject *t_RecordAndContinue$Event_isIncreasing(t_RecordAndContinue$Event *self);
          static PyObject *t_RecordAndContinue$Event_toString(t_RecordAndContinue$Event *self, PyObject *args);
          static PyObject *t_RecordAndContinue$Event_get__detector(t_RecordAndContinue$Event *self, void *data);
          static PyObject *t_RecordAndContinue$Event_get__increasing(t_RecordAndContinue$Event *self, void *data);
          static PyObject *t_RecordAndContinue$Event_get__state(t_RecordAndContinue$Event *self, void *data);
          static PyGetSetDef t_RecordAndContinue$Event__fields_[] = {
            DECLARE_GET_FIELD(t_RecordAndContinue$Event, detector),
            DECLARE_GET_FIELD(t_RecordAndContinue$Event, increasing),
            DECLARE_GET_FIELD(t_RecordAndContinue$Event, state),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RecordAndContinue$Event__methods_[] = {
            DECLARE_METHOD(t_RecordAndContinue$Event, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordAndContinue$Event, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RecordAndContinue$Event, getDetector, METH_NOARGS),
            DECLARE_METHOD(t_RecordAndContinue$Event, getState, METH_NOARGS),
            DECLARE_METHOD(t_RecordAndContinue$Event, isIncreasing, METH_NOARGS),
            DECLARE_METHOD(t_RecordAndContinue$Event, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RecordAndContinue$Event)[] = {
            { Py_tp_methods, t_RecordAndContinue$Event__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RecordAndContinue$Event__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RecordAndContinue$Event)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RecordAndContinue$Event, t_RecordAndContinue$Event, RecordAndContinue$Event);

          void t_RecordAndContinue$Event::install(PyObject *module)
          {
            installType(&PY_TYPE(RecordAndContinue$Event), &PY_TYPE_DEF(RecordAndContinue$Event), module, "RecordAndContinue$Event", 0);
          }

          void t_RecordAndContinue$Event::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue$Event), "class_", make_descriptor(RecordAndContinue$Event::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue$Event), "wrapfn_", make_descriptor(t_RecordAndContinue$Event::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RecordAndContinue$Event), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RecordAndContinue$Event_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RecordAndContinue$Event::initializeClass, 1)))
              return NULL;
            return t_RecordAndContinue$Event::wrap_Object(RecordAndContinue$Event(((t_RecordAndContinue$Event *) arg)->object.this$));
          }
          static PyObject *t_RecordAndContinue$Event_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RecordAndContinue$Event::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RecordAndContinue$Event_getDetector(t_RecordAndContinue$Event *self)
          {
            ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
            OBJ_CALL(result = self->object.getDetector());
            return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
          }

          static PyObject *t_RecordAndContinue$Event_getState(t_RecordAndContinue$Event *self)
          {
            ::org::orekit::propagation::SpacecraftState result((jobject) NULL);
            OBJ_CALL(result = self->object.getState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          static PyObject *t_RecordAndContinue$Event_isIncreasing(t_RecordAndContinue$Event *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isIncreasing());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_RecordAndContinue$Event_toString(t_RecordAndContinue$Event *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(RecordAndContinue$Event), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_RecordAndContinue$Event_get__detector(t_RecordAndContinue$Event *self, void *data)
          {
            ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
            OBJ_CALL(value = self->object.getDetector());
            return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
          }

          static PyObject *t_RecordAndContinue$Event_get__increasing(t_RecordAndContinue$Event *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isIncreasing());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_RecordAndContinue$Event_get__state(t_RecordAndContinue$Event *self, void *data)
          {
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            OBJ_CALL(value = self->object.getState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/GammaMnsFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *GammaMnsFunction::class$ = NULL;
            jmethodID *GammaMnsFunction::mids$ = NULL;
            bool GammaMnsFunction::live$ = false;

            jclass GammaMnsFunction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/GammaMnsFunction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_894aca411c1a443a] = env->getMethodID(cls, "<init>", "(IDI)V");
                mids$[mid_getDerivative_093995dc5657c18c] = env->getMethodID(cls, "getDerivative", "(III)D");
                mids$[mid_getValue_093995dc5657c18c] = env->getMethodID(cls, "getValue", "(III)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GammaMnsFunction::GammaMnsFunction(jint a0, jdouble a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_894aca411c1a443a, a0, a1, a2)) {}

            jdouble GammaMnsFunction::getDerivative(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDerivative_093995dc5657c18c], a0, a1, a2);
            }

            jdouble GammaMnsFunction::getValue(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getValue_093995dc5657c18c], a0, a1, a2);
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
            static PyObject *t_GammaMnsFunction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GammaMnsFunction_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GammaMnsFunction_init_(t_GammaMnsFunction *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GammaMnsFunction_getDerivative(t_GammaMnsFunction *self, PyObject *args);
            static PyObject *t_GammaMnsFunction_getValue(t_GammaMnsFunction *self, PyObject *args);

            static PyMethodDef t_GammaMnsFunction__methods_[] = {
              DECLARE_METHOD(t_GammaMnsFunction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GammaMnsFunction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GammaMnsFunction, getDerivative, METH_VARARGS),
              DECLARE_METHOD(t_GammaMnsFunction, getValue, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GammaMnsFunction)[] = {
              { Py_tp_methods, t_GammaMnsFunction__methods_ },
              { Py_tp_init, (void *) t_GammaMnsFunction_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GammaMnsFunction)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GammaMnsFunction, t_GammaMnsFunction, GammaMnsFunction);

            void t_GammaMnsFunction::install(PyObject *module)
            {
              installType(&PY_TYPE(GammaMnsFunction), &PY_TYPE_DEF(GammaMnsFunction), module, "GammaMnsFunction", 0);
            }

            void t_GammaMnsFunction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GammaMnsFunction), "class_", make_descriptor(GammaMnsFunction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GammaMnsFunction), "wrapfn_", make_descriptor(t_GammaMnsFunction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GammaMnsFunction), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GammaMnsFunction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GammaMnsFunction::initializeClass, 1)))
                return NULL;
              return t_GammaMnsFunction::wrap_Object(GammaMnsFunction(((t_GammaMnsFunction *) arg)->object.this$));
            }
            static PyObject *t_GammaMnsFunction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GammaMnsFunction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GammaMnsFunction_init_(t_GammaMnsFunction *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jdouble a1;
              jint a2;
              GammaMnsFunction object((jobject) NULL);

              if (!parseArgs(args, "IDI", &a0, &a1, &a2))
              {
                INT_CALL(object = GammaMnsFunction(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GammaMnsFunction_getDerivative(t_GammaMnsFunction *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getDerivative(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
              return NULL;
            }

            static PyObject *t_GammaMnsFunction_getValue(t_GammaMnsFunction *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getValue(a0, a1, a2));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ExtendedPVCoordinatesProvider::class$ = NULL;
      jmethodID *ExtendedPVCoordinatesProvider::mids$ = NULL;
      bool ExtendedPVCoordinatesProvider::live$ = false;

      jclass ExtendedPVCoordinatesProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ExtendedPVCoordinatesProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getPVCoordinates_4ac52e75113a03db] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getPosition_8fac774a8fbb3d99] = env->getMethodID(cls, "getPosition", "(Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
          mids$[mid_toFieldPVCoordinatesProvider_cdcdbddb8a8cc591] = env->getMethodID(cls, "toFieldPVCoordinatesProvider", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinatesProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::utils::TimeStampedFieldPVCoordinates ExtendedPVCoordinatesProvider::getPVCoordinates(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getPVCoordinates_4ac52e75113a03db], a0.this$, a1.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ExtendedPVCoordinatesProvider::getPosition(const ::org::orekit::time::FieldAbsoluteDate & a0, const ::org::orekit::frames::Frame & a1) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getPosition_8fac774a8fbb3d99], a0.this$, a1.this$));
      }

      ::org::orekit::utils::FieldPVCoordinatesProvider ExtendedPVCoordinatesProvider::toFieldPVCoordinatesProvider(const ::org::hipparchus::Field & a0) const
      {
        return ::org::orekit::utils::FieldPVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_toFieldPVCoordinatesProvider_cdcdbddb8a8cc591], a0.this$));
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
      static PyObject *t_ExtendedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExtendedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ExtendedPVCoordinatesProvider_getPVCoordinates(t_ExtendedPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_ExtendedPVCoordinatesProvider_getPosition(t_ExtendedPVCoordinatesProvider *self, PyObject *args);
      static PyObject *t_ExtendedPVCoordinatesProvider_toFieldPVCoordinatesProvider(t_ExtendedPVCoordinatesProvider *self, PyObject *arg);

      static PyMethodDef t_ExtendedPVCoordinatesProvider__methods_[] = {
        DECLARE_METHOD(t_ExtendedPVCoordinatesProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExtendedPVCoordinatesProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ExtendedPVCoordinatesProvider, getPVCoordinates, METH_VARARGS),
        DECLARE_METHOD(t_ExtendedPVCoordinatesProvider, getPosition, METH_VARARGS),
        DECLARE_METHOD(t_ExtendedPVCoordinatesProvider, toFieldPVCoordinatesProvider, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ExtendedPVCoordinatesProvider)[] = {
        { Py_tp_methods, t_ExtendedPVCoordinatesProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ExtendedPVCoordinatesProvider)[] = {
        &PY_TYPE_DEF(::org::orekit::utils::PVCoordinatesProvider),
        NULL
      };

      DEFINE_TYPE(ExtendedPVCoordinatesProvider, t_ExtendedPVCoordinatesProvider, ExtendedPVCoordinatesProvider);

      void t_ExtendedPVCoordinatesProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(ExtendedPVCoordinatesProvider), &PY_TYPE_DEF(ExtendedPVCoordinatesProvider), module, "ExtendedPVCoordinatesProvider", 0);
      }

      void t_ExtendedPVCoordinatesProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProvider), "class_", make_descriptor(ExtendedPVCoordinatesProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProvider), "wrapfn_", make_descriptor(t_ExtendedPVCoordinatesProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ExtendedPVCoordinatesProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ExtendedPVCoordinatesProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ExtendedPVCoordinatesProvider::initializeClass, 1)))
          return NULL;
        return t_ExtendedPVCoordinatesProvider::wrap_Object(ExtendedPVCoordinatesProvider(((t_ExtendedPVCoordinatesProvider *) arg)->object.this$));
      }
      static PyObject *t_ExtendedPVCoordinatesProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ExtendedPVCoordinatesProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ExtendedPVCoordinatesProvider_getPVCoordinates(t_ExtendedPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPVCoordinates(a0, a1));
          return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExtendedPVCoordinatesProvider), (PyObject *) self, "getPVCoordinates", args, 2);
      }

      static PyObject *t_ExtendedPVCoordinatesProvider_getPosition(t_ExtendedPVCoordinatesProvider *self, PyObject *args)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::frames::Frame a1((jobject) NULL);
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

        if (!parseArgs(args, "Kk", ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a1))
        {
          OBJ_CALL(result = self->object.getPosition(a0, a1));
          return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
        }

        return callSuper(PY_TYPE(ExtendedPVCoordinatesProvider), (PyObject *) self, "getPosition", args, 2);
      }

      static PyObject *t_ExtendedPVCoordinatesProvider_toFieldPVCoordinatesProvider(t_ExtendedPVCoordinatesProvider *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::utils::FieldPVCoordinatesProvider result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toFieldPVCoordinatesProvider(a0));
          return ::org::orekit::utils::t_FieldPVCoordinatesProvider::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toFieldPVCoordinatesProvider", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesWindUpFactory.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesWindUp.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/Dipole.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *InterSatellitesWindUpFactory::class$ = NULL;
          jmethodID *InterSatellitesWindUpFactory::mids$ = NULL;
          bool InterSatellitesWindUpFactory::live$ = false;

          jclass InterSatellitesWindUpFactory::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/InterSatellitesWindUpFactory");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getWindUp_8cbc5ddb9df3a024] = env->getMethodID(cls, "getWindUp", "(Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/estimation/measurements/gnss/Dipole;Lorg/orekit/gnss/SatelliteSystem;ILorg/orekit/estimation/measurements/gnss/Dipole;)Lorg/orekit/estimation/measurements/gnss/InterSatellitesWindUp;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesWindUpFactory::InterSatellitesWindUpFactory() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::org::orekit::estimation::measurements::gnss::InterSatellitesWindUp InterSatellitesWindUpFactory::getWindUp(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::org::orekit::estimation::measurements::gnss::Dipole & a2, const ::org::orekit::gnss::SatelliteSystem & a3, jint a4, const ::org::orekit::estimation::measurements::gnss::Dipole & a5) const
          {
            return ::org::orekit::estimation::measurements::gnss::InterSatellitesWindUp(env->callObjectMethod(this$, mids$[mid_getWindUp_8cbc5ddb9df3a024], a0.this$, a1, a2.this$, a3.this$, a4, a5.this$));
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
          static PyObject *t_InterSatellitesWindUpFactory_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesWindUpFactory_instance_(PyTypeObject *type, PyObject *arg);
          static int t_InterSatellitesWindUpFactory_init_(t_InterSatellitesWindUpFactory *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesWindUpFactory_getWindUp(t_InterSatellitesWindUpFactory *self, PyObject *args);

          static PyMethodDef t_InterSatellitesWindUpFactory__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesWindUpFactory, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesWindUpFactory, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesWindUpFactory, getWindUp, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesWindUpFactory)[] = {
            { Py_tp_methods, t_InterSatellitesWindUpFactory__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesWindUpFactory_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesWindUpFactory)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(InterSatellitesWindUpFactory, t_InterSatellitesWindUpFactory, InterSatellitesWindUpFactory);

          void t_InterSatellitesWindUpFactory::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesWindUpFactory), &PY_TYPE_DEF(InterSatellitesWindUpFactory), module, "InterSatellitesWindUpFactory", 0);
          }

          void t_InterSatellitesWindUpFactory::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUpFactory), "class_", make_descriptor(InterSatellitesWindUpFactory::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUpFactory), "wrapfn_", make_descriptor(t_InterSatellitesWindUpFactory::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesWindUpFactory), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_InterSatellitesWindUpFactory_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesWindUpFactory::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesWindUpFactory::wrap_Object(InterSatellitesWindUpFactory(((t_InterSatellitesWindUpFactory *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesWindUpFactory_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesWindUpFactory::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_InterSatellitesWindUpFactory_init_(t_InterSatellitesWindUpFactory *self, PyObject *args, PyObject *kwds)
          {
            InterSatellitesWindUpFactory object((jobject) NULL);

            INT_CALL(object = InterSatellitesWindUpFactory());
            self->object = object;

            return 0;
          }

          static PyObject *t_InterSatellitesWindUpFactory_getWindUp(t_InterSatellitesWindUpFactory *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::org::orekit::estimation::measurements::gnss::Dipole a2((jobject) NULL);
            ::org::orekit::gnss::SatelliteSystem a3((jobject) NULL);
            PyTypeObject **p3;
            jint a4;
            ::org::orekit::estimation::measurements::gnss::Dipole a5((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::InterSatellitesWindUp result((jobject) NULL);

            if (!parseArgs(args, "KIkKIk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::estimation::measurements::gnss::Dipole::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a4, &a5))
            {
              OBJ_CALL(result = self->object.getWindUp(a0, a1, a2, a3, a4, a5));
              return ::org::orekit::estimation::measurements::gnss::t_InterSatellitesWindUp::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getWindUp", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/filtering/ElevationFilter.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/estimation/measurements/filtering/MeasurementFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace filtering {

          ::java::lang::Class *ElevationFilter::class$ = NULL;
          jmethodID *ElevationFilter::mids$ = NULL;
          bool ElevationFilter::live$ = false;

          jclass ElevationFilter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/filtering/ElevationFilter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_41e1db373f7bd180] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;D)V");
              mids$[mid_filter_87933cc299a70778] = env->getMethodID(cls, "filter", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/orekit/propagation/SpacecraftState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ElevationFilter::ElevationFilter(const ::org::orekit::estimation::measurements::GroundStation & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_41e1db373f7bd180, a0.this$, a1)) {}

          void ElevationFilter::filter(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_filter_87933cc299a70778], a0.this$, a1.this$);
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
          static PyObject *t_ElevationFilter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ElevationFilter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ElevationFilter_of_(t_ElevationFilter *self, PyObject *args);
          static int t_ElevationFilter_init_(t_ElevationFilter *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ElevationFilter_filter(t_ElevationFilter *self, PyObject *args);
          static PyObject *t_ElevationFilter_get__parameters_(t_ElevationFilter *self, void *data);
          static PyGetSetDef t_ElevationFilter__fields_[] = {
            DECLARE_GET_FIELD(t_ElevationFilter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ElevationFilter__methods_[] = {
            DECLARE_METHOD(t_ElevationFilter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ElevationFilter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ElevationFilter, of_, METH_VARARGS),
            DECLARE_METHOD(t_ElevationFilter, filter, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ElevationFilter)[] = {
            { Py_tp_methods, t_ElevationFilter__methods_ },
            { Py_tp_init, (void *) t_ElevationFilter_init_ },
            { Py_tp_getset, t_ElevationFilter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ElevationFilter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ElevationFilter, t_ElevationFilter, ElevationFilter);
          PyObject *t_ElevationFilter::wrap_Object(const ElevationFilter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ElevationFilter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ElevationFilter *self = (t_ElevationFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ElevationFilter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ElevationFilter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ElevationFilter *self = (t_ElevationFilter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ElevationFilter::install(PyObject *module)
          {
            installType(&PY_TYPE(ElevationFilter), &PY_TYPE_DEF(ElevationFilter), module, "ElevationFilter", 0);
          }

          void t_ElevationFilter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationFilter), "class_", make_descriptor(ElevationFilter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationFilter), "wrapfn_", make_descriptor(t_ElevationFilter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationFilter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ElevationFilter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ElevationFilter::initializeClass, 1)))
              return NULL;
            return t_ElevationFilter::wrap_Object(ElevationFilter(((t_ElevationFilter *) arg)->object.this$));
          }
          static PyObject *t_ElevationFilter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ElevationFilter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ElevationFilter_of_(t_ElevationFilter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ElevationFilter_init_(t_ElevationFilter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
            jdouble a1;
            ElevationFilter object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::estimation::measurements::GroundStation::initializeClass, &a0, &a1))
            {
              INT_CALL(object = ElevationFilter(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ElevationFilter_filter(t_ElevationFilter *self, PyObject *args)
          {
            ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
            {
              OBJ_CALL(self->object.filter(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "filter", args);
            return NULL;
          }
          static PyObject *t_ElevationFilter_get__parameters_(t_ElevationFilter *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/AdamsIntegrator.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsIntegrator::class$ = NULL;
        jmethodID *AdamsIntegrator::mids$ = NULL;
        bool AdamsIntegrator::live$ = false;

        jclass AdamsIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4ea662c2602fc64a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;IIDD[D[D)V");
            mids$[mid_init$_3bb19a1b8982e276] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;IIDDDD)V");
            mids$[mid_integrate_7b1e7ccc98e27149] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_updateHighOrderDerivativesPhase1_f317c35d7d377fcb] = env->getMethodID(cls, "updateHighOrderDerivativesPhase1", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase2_8366e8011d6ccc43] = env->getMethodID(cls, "updateHighOrderDerivativesPhase2", "([D[DLorg/hipparchus/linear/Array2DRowRealMatrix;)V");
            mids$[mid_initializeHighOrderDerivatives_a72bdebc8d5fa5c2] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(D[D[[D[[D)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
            mids$[mid_errorEstimation_e7930007697328a4] = env->getMethodID(cls, "errorEstimation", "([DD[D[DLorg/hipparchus/linear/RealMatrix;)D");
            mids$[mid_finalizeStep_04cf5a46fd40d06d] = env->getMethodID(cls, "finalizeStep", "(D[D[DLorg/hipparchus/linear/Array2DRowRealMatrix;ZLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsIntegrator::AdamsIntegrator(const ::java::lang::String & a0, jint a1, jint a2, jdouble a3, jdouble a4, const JArray< jdouble > & a5, const JArray< jdouble > & a6) : ::org::hipparchus::ode::MultistepIntegrator(env->newObject(initializeClass, &mids$, mid_init$_4ea662c2602fc64a, a0.this$, a1, a2, a3, a4, a5.this$, a6.this$)) {}

        AdamsIntegrator::AdamsIntegrator(const ::java::lang::String & a0, jint a1, jint a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::hipparchus::ode::MultistepIntegrator(env->newObject(initializeClass, &mids$, mid_init$_3bb19a1b8982e276, a0.this$, a1, a2, a3, a4, a5, a6)) {}

        ::org::hipparchus::ode::ODEStateAndDerivative AdamsIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_7b1e7ccc98e27149], a0.this$, a1.this$, a2));
        }

        ::org::hipparchus::linear::Array2DRowRealMatrix AdamsIntegrator::updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowRealMatrix & a0) const
        {
          return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_updateHighOrderDerivativesPhase1_f317c35d7d377fcb], a0.this$));
        }

        void AdamsIntegrator::updateHighOrderDerivativesPhase2(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::hipparchus::linear::Array2DRowRealMatrix & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateHighOrderDerivativesPhase2_8366e8011d6ccc43], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AdamsIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdamsIntegrator_init_(t_AdamsIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsIntegrator_integrate(t_AdamsIntegrator *self, PyObject *args);
        static PyObject *t_AdamsIntegrator_updateHighOrderDerivativesPhase1(t_AdamsIntegrator *self, PyObject *arg);
        static PyObject *t_AdamsIntegrator_updateHighOrderDerivativesPhase2(t_AdamsIntegrator *self, PyObject *args);

        static PyMethodDef t_AdamsIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_AdamsIntegrator, updateHighOrderDerivativesPhase1, METH_O),
          DECLARE_METHOD(t_AdamsIntegrator, updateHighOrderDerivativesPhase2, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsIntegrator)[] = {
          { Py_tp_methods, t_AdamsIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsIntegrator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::MultistepIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsIntegrator, t_AdamsIntegrator, AdamsIntegrator);

        void t_AdamsIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsIntegrator), &PY_TYPE_DEF(AdamsIntegrator), module, "AdamsIntegrator", 0);
        }

        void t_AdamsIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsIntegrator), "class_", make_descriptor(AdamsIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsIntegrator), "wrapfn_", make_descriptor(t_AdamsIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsIntegrator::wrap_Object(AdamsIntegrator(((t_AdamsIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdamsIntegrator_init_(t_AdamsIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 7:
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              jdouble a3;
              jdouble a4;
              JArray< jdouble > a5((jobject) NULL);
              JArray< jdouble > a6((jobject) NULL);
              AdamsIntegrator object((jobject) NULL);

              if (!parseArgs(args, "sIIDD[D[D", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = AdamsIntegrator(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
            {
              ::java::lang::String a0((jobject) NULL);
              jint a1;
              jint a2;
              jdouble a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              AdamsIntegrator object((jobject) NULL);

              if (!parseArgs(args, "sIIDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = AdamsIntegrator(a0, a1, a2, a3, a4, a5, a6));
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

        static PyObject *t_AdamsIntegrator_integrate(t_AdamsIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
          ::org::hipparchus::ode::ODEState a1((jobject) NULL);
          jdouble a2;
          ::org::hipparchus::ode::ODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "kkD", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_ODEStateAndDerivative::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AdamsIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_AdamsIntegrator_updateHighOrderDerivativesPhase1(t_AdamsIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::linear::Array2DRowRealMatrix a0((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::Array2DRowRealMatrix::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.updateHighOrderDerivativesPhase1(a0));
            return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase1", arg);
          return NULL;
        }

        static PyObject *t_AdamsIntegrator_updateHighOrderDerivativesPhase2(t_AdamsIntegrator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix a2((jobject) NULL);

          if (!parseArgs(args, "[D[Dk", ::org::hipparchus::linear::Array2DRowRealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.updateHighOrderDerivativesPhase2(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase2", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/AbstractRelativisticClockModifier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *AbstractRelativisticClockModifier::class$ = NULL;
          jmethodID *AbstractRelativisticClockModifier::mids$ = NULL;
          bool AbstractRelativisticClockModifier::live$ = false;

          jclass AbstractRelativisticClockModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/AbstractRelativisticClockModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_getScaleFactor_557b8123390d8d0c] = env->getMethodID(cls, "getScaleFactor", "()D");
              mids$[mid_relativisticCorrection_af5b76ca8791af38] = env->getMethodID(cls, "relativisticCorrection", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AbstractRelativisticClockModifier::AbstractRelativisticClockModifier() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
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
          static PyObject *t_AbstractRelativisticClockModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractRelativisticClockModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AbstractRelativisticClockModifier_init_(t_AbstractRelativisticClockModifier *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_AbstractRelativisticClockModifier__methods_[] = {
            DECLARE_METHOD(t_AbstractRelativisticClockModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractRelativisticClockModifier, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractRelativisticClockModifier)[] = {
            { Py_tp_methods, t_AbstractRelativisticClockModifier__methods_ },
            { Py_tp_init, (void *) t_AbstractRelativisticClockModifier_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractRelativisticClockModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractRelativisticClockModifier, t_AbstractRelativisticClockModifier, AbstractRelativisticClockModifier);

          void t_AbstractRelativisticClockModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractRelativisticClockModifier), &PY_TYPE_DEF(AbstractRelativisticClockModifier), module, "AbstractRelativisticClockModifier", 0);
          }

          void t_AbstractRelativisticClockModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticClockModifier), "class_", make_descriptor(AbstractRelativisticClockModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticClockModifier), "wrapfn_", make_descriptor(t_AbstractRelativisticClockModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractRelativisticClockModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractRelativisticClockModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractRelativisticClockModifier::initializeClass, 1)))
              return NULL;
            return t_AbstractRelativisticClockModifier::wrap_Object(AbstractRelativisticClockModifier(((t_AbstractRelativisticClockModifier *) arg)->object.this$));
          }
          static PyObject *t_AbstractRelativisticClockModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractRelativisticClockModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AbstractRelativisticClockModifier_init_(t_AbstractRelativisticClockModifier *self, PyObject *args, PyObject *kwds)
          {
            AbstractRelativisticClockModifier object((jobject) NULL);

            INT_CALL(object = AbstractRelativisticClockModifier());
            self->object = object;

            return 0;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/PythonOdmParser.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *PythonOdmParser::class$ = NULL;
            jmethodID *PythonOdmParser::mids$ = NULL;
            bool PythonOdmParser::live$ = false;

            jclass PythonOdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/PythonOdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_303f51e33561a967] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_finalizeData_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeData", "()Z");
                mids$[mid_finalizeHeader_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeHeader", "()Z");
                mids$[mid_finalizeMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "finalizeMetadata", "()Z");
                mids$[mid_getFileFormat_c3a4c5f37e67a25e] = env->getMethodID(cls, "getFileFormat", "()Lorg/orekit/files/ccsds/utils/FileFormat;");
                mids$[mid_getHeader_d7722dc369ae0874] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;");
                mids$[mid_getMuSet_557b8123390d8d0c] = env->getMethodID(cls, "getMuSet", "()D");
                mids$[mid_inData_89b302893bdbe1f1] = env->getMethodID(cls, "inData", "()Z");
                mids$[mid_inHeader_89b302893bdbe1f1] = env->getMethodID(cls, "inHeader", "()Z");
                mids$[mid_inMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "inMetadata", "()Z");
                mids$[mid_prepareData_89b302893bdbe1f1] = env->getMethodID(cls, "prepareData", "()Z");
                mids$[mid_prepareHeader_89b302893bdbe1f1] = env->getMethodID(cls, "prepareHeader", "()Z");
                mids$[mid_prepareMetadata_89b302893bdbe1f1] = env->getMethodID(cls, "prepareMetadata", "()Z");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_a580586827f4ec13] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");
                mids$[mid_setMuCreated_10f281d777284cea] = env->getMethodID(cls, "setMuCreated", "(D)V");
                mids$[mid_setMuParsed_10f281d777284cea] = env->getMethodID(cls, "setMuParsed", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void PythonOdmParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            ::org::orekit::files::ccsds::utils::FileFormat PythonOdmParser::getFileFormat() const
            {
              return ::org::orekit::files::ccsds::utils::FileFormat(env->callObjectMethod(this$, mids$[mid_getFileFormat_c3a4c5f37e67a25e]));
            }

            jdouble PythonOdmParser::getMuSet() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMuSet_557b8123390d8d0c]);
            }

            jlong PythonOdmParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonOdmParser::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
            }

            void PythonOdmParser::setMuCreated(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMuCreated_10f281d777284cea], a0);
            }

            void PythonOdmParser::setMuParsed(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMuParsed_10f281d777284cea], a0);
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
            static PyObject *t_PythonOdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonOdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonOdmParser_of_(t_PythonOdmParser *self, PyObject *args);
            static PyObject *t_PythonOdmParser_finalize(t_PythonOdmParser *self);
            static PyObject *t_PythonOdmParser_getFileFormat(t_PythonOdmParser *self, PyObject *args);
            static PyObject *t_PythonOdmParser_getMuSet(t_PythonOdmParser *self);
            static PyObject *t_PythonOdmParser_pythonExtension(t_PythonOdmParser *self, PyObject *args);
            static PyObject *t_PythonOdmParser_setMuCreated(t_PythonOdmParser *self, PyObject *arg);
            static PyObject *t_PythonOdmParser_setMuParsed(t_PythonOdmParser *self, PyObject *arg);
            static jobject JNICALL t_PythonOdmParser_build0(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_finalizeData1(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_finalizeHeader2(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj);
            static jobject JNICALL t_PythonOdmParser_getHeader4(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_inData5(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_inHeader6(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_inMetadata7(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_prepareData8(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_prepareHeader9(JNIEnv *jenv, jobject jobj);
            static jboolean JNICALL t_PythonOdmParser_prepareMetadata10(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonOdmParser_pythonDecRef11(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonOdmParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonOdmParser_get__self(t_PythonOdmParser *self, void *data);
            static PyObject *t_PythonOdmParser_get__fileFormat(t_PythonOdmParser *self, void *data);
            static int t_PythonOdmParser_set__muCreated(t_PythonOdmParser *self, PyObject *arg, void *data);
            static int t_PythonOdmParser_set__muParsed(t_PythonOdmParser *self, PyObject *arg, void *data);
            static PyObject *t_PythonOdmParser_get__muSet(t_PythonOdmParser *self, void *data);
            static PyObject *t_PythonOdmParser_get__parameters_(t_PythonOdmParser *self, void *data);
            static PyGetSetDef t_PythonOdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonOdmParser, fileFormat),
              DECLARE_SET_FIELD(t_PythonOdmParser, muCreated),
              DECLARE_SET_FIELD(t_PythonOdmParser, muParsed),
              DECLARE_GET_FIELD(t_PythonOdmParser, muSet),
              DECLARE_GET_FIELD(t_PythonOdmParser, self),
              DECLARE_GET_FIELD(t_PythonOdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonOdmParser__methods_[] = {
              DECLARE_METHOD(t_PythonOdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonOdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonOdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonOdmParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonOdmParser, getFileFormat, METH_VARARGS),
              DECLARE_METHOD(t_PythonOdmParser, getMuSet, METH_NOARGS),
              DECLARE_METHOD(t_PythonOdmParser, pythonExtension, METH_VARARGS),
              DECLARE_METHOD(t_PythonOdmParser, setMuCreated, METH_O),
              DECLARE_METHOD(t_PythonOdmParser, setMuParsed, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonOdmParser)[] = {
              { Py_tp_methods, t_PythonOdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_PythonOdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonOdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmParser),
              NULL
            };

            DEFINE_TYPE(PythonOdmParser, t_PythonOdmParser, PythonOdmParser);
            PyObject *t_PythonOdmParser::wrap_Object(const PythonOdmParser& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonOdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonOdmParser *self = (t_PythonOdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_PythonOdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_PythonOdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonOdmParser *self = (t_PythonOdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_PythonOdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonOdmParser), &PY_TYPE_DEF(PythonOdmParser), module, "PythonOdmParser", 1);
            }

            void t_PythonOdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOdmParser), "class_", make_descriptor(PythonOdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOdmParser), "wrapfn_", make_descriptor(t_PythonOdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonOdmParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonOdmParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Lorg/orekit/files/ccsds/ndm/NdmConstituent;", (void *) t_PythonOdmParser_build0 },
                { "finalizeData", "()Z", (void *) t_PythonOdmParser_finalizeData1 },
                { "finalizeHeader", "()Z", (void *) t_PythonOdmParser_finalizeHeader2 },
                { "finalizeMetadata", "()Z", (void *) t_PythonOdmParser_finalizeMetadata3 },
                { "getHeader", "()Lorg/orekit/files/ccsds/ndm/odm/OdmHeader;", (void *) t_PythonOdmParser_getHeader4 },
                { "inData", "()Z", (void *) t_PythonOdmParser_inData5 },
                { "inHeader", "()Z", (void *) t_PythonOdmParser_inHeader6 },
                { "inMetadata", "()Z", (void *) t_PythonOdmParser_inMetadata7 },
                { "prepareData", "()Z", (void *) t_PythonOdmParser_prepareData8 },
                { "prepareHeader", "()Z", (void *) t_PythonOdmParser_prepareHeader9 },
                { "prepareMetadata", "()Z", (void *) t_PythonOdmParser_prepareMetadata10 },
                { "pythonDecRef", "()V", (void *) t_PythonOdmParser_pythonDecRef11 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonOdmParser_reset12 },
              };
              env->registerNatives(cls, methods, 13);
            }

            static PyObject *t_PythonOdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonOdmParser::initializeClass, 1)))
                return NULL;
              return t_PythonOdmParser::wrap_Object(PythonOdmParser(((t_PythonOdmParser *) arg)->object.this$));
            }
            static PyObject *t_PythonOdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonOdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonOdmParser_of_(t_PythonOdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_PythonOdmParser_finalize(t_PythonOdmParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonOdmParser_getFileFormat(t_PythonOdmParser *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::FileFormat result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getFileFormat());
                return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(result);
              }

              return callSuper(PY_TYPE(PythonOdmParser), (PyObject *) self, "getFileFormat", args, 2);
            }

            static PyObject *t_PythonOdmParser_getMuSet(t_PythonOdmParser *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMuSet());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_PythonOdmParser_pythonExtension(t_PythonOdmParser *self, PyObject *args)
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

            static PyObject *t_PythonOdmParser_setMuCreated(t_PythonOdmParser *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMuCreated(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMuCreated", arg);
              return NULL;
            }

            static PyObject *t_PythonOdmParser_setMuParsed(t_PythonOdmParser *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMuParsed(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMuParsed", arg);
              return NULL;
            }

            static jobject JNICALL t_PythonOdmParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::NdmConstituent value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::NdmConstituent::initializeClass, &value))
              {
                throwTypeError("build", result);
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

            static jboolean JNICALL t_PythonOdmParser_finalizeData1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_finalizeHeader2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_finalizeMetadata3(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "finalizeMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("finalizeMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jobject JNICALL t_PythonOdmParser_getHeader4(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::files::ccsds::ndm::odm::OdmHeader value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "getHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::files::ccsds::ndm::odm::OdmHeader::initializeClass, &value))
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

            static jboolean JNICALL t_PythonOdmParser_inData5(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_inHeader6(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_inMetadata7(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "inMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("inMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_prepareData8(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareData", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareData", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_prepareHeader9(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareHeader", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareHeader", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static jboolean JNICALL t_PythonOdmParser_prepareMetadata10(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              jboolean value;
              PyObject *result = PyObject_CallMethod(obj, "prepareMetadata", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "Z", &value))
              {
                throwTypeError("prepareMetadata", result);
                Py_DECREF(result);
              }
              else
              {
                Py_DECREF(result);
                return value;
              }

              return (jboolean) 0;
            }

            static void JNICALL t_PythonOdmParser_pythonDecRef11(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonOdmParser_reset12(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonOdmParser::mids$[PythonOdmParser::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(::org::orekit::files::ccsds::utils::FileFormat(a0));
              PyObject *result = PyObject_CallMethod(obj, "reset", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else
                Py_DECREF(result);
            }

            static PyObject *t_PythonOdmParser_get__self(t_PythonOdmParser *self, void *data)
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
            static PyObject *t_PythonOdmParser_get__parameters_(t_PythonOdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_PythonOdmParser_get__fileFormat(t_PythonOdmParser *self, void *data)
            {
              ::org::orekit::files::ccsds::utils::FileFormat value((jobject) NULL);
              OBJ_CALL(value = self->object.getFileFormat());
              return ::org::orekit::files::ccsds::utils::t_FileFormat::wrap_Object(value);
            }

            static int t_PythonOdmParser_set__muCreated(t_PythonOdmParser *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMuCreated(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "muCreated", arg);
              return -1;
            }

            static int t_PythonOdmParser_set__muParsed(t_PythonOdmParser *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMuParsed(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "muParsed", arg);
              return -1;
            }

            static PyObject *t_PythonOdmParser_get__muSet(t_PythonOdmParser *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMuSet());
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
#include "org/orekit/files/ccsds/ndm/odm/StateVectorKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVectorKey.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *StateVectorKey::class$ = NULL;
            jmethodID *StateVectorKey::mids$ = NULL;
            bool StateVectorKey::live$ = false;
            StateVectorKey *StateVectorKey::COMMENT = NULL;
            StateVectorKey *StateVectorKey::EPOCH = NULL;
            StateVectorKey *StateVectorKey::X = NULL;
            StateVectorKey *StateVectorKey::X_DDOT = NULL;
            StateVectorKey *StateVectorKey::X_DOT = NULL;
            StateVectorKey *StateVectorKey::Y = NULL;
            StateVectorKey *StateVectorKey::Y_DDOT = NULL;
            StateVectorKey *StateVectorKey::Y_DOT = NULL;
            StateVectorKey *StateVectorKey::Z = NULL;
            StateVectorKey *StateVectorKey::Z_DDOT = NULL;
            StateVectorKey *StateVectorKey::Z_DOT = NULL;

            jclass StateVectorKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/StateVectorKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_aab33168dd69d950] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/StateVector;)Z");
                mids$[mid_valueOf_571ff0834a17d364] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;");
                mids$[mid_values_854b5f3a9e62a4a3] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new StateVectorKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                EPOCH = new StateVectorKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                X = new StateVectorKey(env->getStaticObjectField(cls, "X", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                X_DDOT = new StateVectorKey(env->getStaticObjectField(cls, "X_DDOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                X_DOT = new StateVectorKey(env->getStaticObjectField(cls, "X_DOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Y = new StateVectorKey(env->getStaticObjectField(cls, "Y", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Y_DDOT = new StateVectorKey(env->getStaticObjectField(cls, "Y_DDOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Y_DOT = new StateVectorKey(env->getStaticObjectField(cls, "Y_DOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Z = new StateVectorKey(env->getStaticObjectField(cls, "Z", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Z_DDOT = new StateVectorKey(env->getStaticObjectField(cls, "Z_DDOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                Z_DOT = new StateVectorKey(env->getStaticObjectField(cls, "Z_DOT", "Lorg/orekit/files/ccsds/ndm/odm/StateVectorKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean StateVectorKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::StateVector & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_aab33168dd69d950], a0.this$, a1.this$, a2.this$);
            }

            StateVectorKey StateVectorKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return StateVectorKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_571ff0834a17d364], a0.this$));
            }

            JArray< StateVectorKey > StateVectorKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< StateVectorKey >(env->callStaticObjectMethod(cls, mids$[mid_values_854b5f3a9e62a4a3]));
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
            static PyObject *t_StateVectorKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorKey_of_(t_StateVectorKey *self, PyObject *args);
            static PyObject *t_StateVectorKey_process(t_StateVectorKey *self, PyObject *args);
            static PyObject *t_StateVectorKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_StateVectorKey_values(PyTypeObject *type);
            static PyObject *t_StateVectorKey_get__parameters_(t_StateVectorKey *self, void *data);
            static PyGetSetDef t_StateVectorKey__fields_[] = {
              DECLARE_GET_FIELD(t_StateVectorKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_StateVectorKey__methods_[] = {
              DECLARE_METHOD(t_StateVectorKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_StateVectorKey, process, METH_VARARGS),
              DECLARE_METHOD(t_StateVectorKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_StateVectorKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVectorKey)[] = {
              { Py_tp_methods, t_StateVectorKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_StateVectorKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(StateVectorKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(StateVectorKey, t_StateVectorKey, StateVectorKey);
            PyObject *t_StateVectorKey::wrap_Object(const StateVectorKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_StateVectorKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_StateVectorKey *self = (t_StateVectorKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_StateVectorKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_StateVectorKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_StateVectorKey *self = (t_StateVectorKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_StateVectorKey::install(PyObject *module)
            {
              installType(&PY_TYPE(StateVectorKey), &PY_TYPE_DEF(StateVectorKey), module, "StateVectorKey", 0);
            }

            void t_StateVectorKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "class_", make_descriptor(StateVectorKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "wrapfn_", make_descriptor(t_StateVectorKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(StateVectorKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "COMMENT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "EPOCH", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X_DDOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X_DDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "X_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::X_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y_DDOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y_DDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Y_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Y_DOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z_DDOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z_DDOT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(StateVectorKey), "Z_DOT", make_descriptor(t_StateVectorKey::wrap_Object(*StateVectorKey::Z_DOT)));
            }

            static PyObject *t_StateVectorKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, StateVectorKey::initializeClass, 1)))
                return NULL;
              return t_StateVectorKey::wrap_Object(StateVectorKey(((t_StateVectorKey *) arg)->object.this$));
            }
            static PyObject *t_StateVectorKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, StateVectorKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_StateVectorKey_of_(t_StateVectorKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_StateVectorKey_process(t_StateVectorKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::StateVector a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::StateVector::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_StateVectorKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              StateVectorKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::StateVectorKey::valueOf(a0));
                return t_StateVectorKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_StateVectorKey_values(PyTypeObject *type)
            {
              JArray< StateVectorKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::StateVectorKey::values());
              return JArray<jobject>(result.this$).wrap(t_StateVectorKey::wrap_jobject);
            }
            static PyObject *t_StateVectorKey_get__parameters_(t_StateVectorKey *self, void *data)
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
#include "org/orekit/data/PolynomialParser$Unit.h"
#include "java/lang/String.h"
#include "org/orekit/data/PolynomialParser$Unit.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *PolynomialParser$Unit::class$ = NULL;
      jmethodID *PolynomialParser$Unit::mids$ = NULL;
      bool PolynomialParser$Unit::live$ = false;
      PolynomialParser$Unit *PolynomialParser$Unit::ARC_SECONDS = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::DEGREES = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::MICRO_ARC_SECONDS = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::MILLI_ARC_SECONDS = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::NO_UNITS = NULL;
      PolynomialParser$Unit *PolynomialParser$Unit::RADIANS = NULL;

      jclass PolynomialParser$Unit::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/PolynomialParser$Unit");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toSI_7e960cd6eee376d8] = env->getMethodID(cls, "toSI", "(D)D");
          mids$[mid_valueOf_73c8890fd976f211] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/data/PolynomialParser$Unit;");
          mids$[mid_values_72b4fa0a744ad31d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/data/PolynomialParser$Unit;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ARC_SECONDS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "ARC_SECONDS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          DEGREES = new PolynomialParser$Unit(env->getStaticObjectField(cls, "DEGREES", "Lorg/orekit/data/PolynomialParser$Unit;"));
          MICRO_ARC_SECONDS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "MICRO_ARC_SECONDS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          MILLI_ARC_SECONDS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "MILLI_ARC_SECONDS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          NO_UNITS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "NO_UNITS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          RADIANS = new PolynomialParser$Unit(env->getStaticObjectField(cls, "RADIANS", "Lorg/orekit/data/PolynomialParser$Unit;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble PolynomialParser$Unit::toSI(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_toSI_7e960cd6eee376d8], a0);
      }

      PolynomialParser$Unit PolynomialParser$Unit::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return PolynomialParser$Unit(env->callStaticObjectMethod(cls, mids$[mid_valueOf_73c8890fd976f211], a0.this$));
      }

      JArray< PolynomialParser$Unit > PolynomialParser$Unit::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< PolynomialParser$Unit >(env->callStaticObjectMethod(cls, mids$[mid_values_72b4fa0a744ad31d]));
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
      static PyObject *t_PolynomialParser$Unit_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialParser$Unit_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PolynomialParser$Unit_of_(t_PolynomialParser$Unit *self, PyObject *args);
      static PyObject *t_PolynomialParser$Unit_toSI(t_PolynomialParser$Unit *self, PyObject *arg);
      static PyObject *t_PolynomialParser$Unit_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_PolynomialParser$Unit_values(PyTypeObject *type);
      static PyObject *t_PolynomialParser$Unit_get__parameters_(t_PolynomialParser$Unit *self, void *data);
      static PyGetSetDef t_PolynomialParser$Unit__fields_[] = {
        DECLARE_GET_FIELD(t_PolynomialParser$Unit, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PolynomialParser$Unit__methods_[] = {
        DECLARE_METHOD(t_PolynomialParser$Unit, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser$Unit, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser$Unit, of_, METH_VARARGS),
        DECLARE_METHOD(t_PolynomialParser$Unit, toSI, METH_O),
        DECLARE_METHOD(t_PolynomialParser$Unit, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_PolynomialParser$Unit, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PolynomialParser$Unit)[] = {
        { Py_tp_methods, t_PolynomialParser$Unit__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_PolynomialParser$Unit__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PolynomialParser$Unit)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(PolynomialParser$Unit, t_PolynomialParser$Unit, PolynomialParser$Unit);
      PyObject *t_PolynomialParser$Unit::wrap_Object(const PolynomialParser$Unit& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PolynomialParser$Unit::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PolynomialParser$Unit *self = (t_PolynomialParser$Unit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_PolynomialParser$Unit::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_PolynomialParser$Unit::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PolynomialParser$Unit *self = (t_PolynomialParser$Unit *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_PolynomialParser$Unit::install(PyObject *module)
      {
        installType(&PY_TYPE(PolynomialParser$Unit), &PY_TYPE_DEF(PolynomialParser$Unit), module, "PolynomialParser$Unit", 0);
      }

      void t_PolynomialParser$Unit::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "class_", make_descriptor(PolynomialParser$Unit::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "wrapfn_", make_descriptor(t_PolynomialParser$Unit::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "boxfn_", make_descriptor(boxObject));
        env->getClass(PolynomialParser$Unit::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "ARC_SECONDS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::ARC_SECONDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "DEGREES", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::DEGREES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "MICRO_ARC_SECONDS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::MICRO_ARC_SECONDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "MILLI_ARC_SECONDS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::MILLI_ARC_SECONDS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "NO_UNITS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::NO_UNITS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialParser$Unit), "RADIANS", make_descriptor(t_PolynomialParser$Unit::wrap_Object(*PolynomialParser$Unit::RADIANS)));
      }

      static PyObject *t_PolynomialParser$Unit_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PolynomialParser$Unit::initializeClass, 1)))
          return NULL;
        return t_PolynomialParser$Unit::wrap_Object(PolynomialParser$Unit(((t_PolynomialParser$Unit *) arg)->object.this$));
      }
      static PyObject *t_PolynomialParser$Unit_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PolynomialParser$Unit::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PolynomialParser$Unit_of_(t_PolynomialParser$Unit *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_PolynomialParser$Unit_toSI(t_PolynomialParser$Unit *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.toSI(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "toSI", arg);
        return NULL;
      }

      static PyObject *t_PolynomialParser$Unit_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        PolynomialParser$Unit result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::data::PolynomialParser$Unit::valueOf(a0));
          return t_PolynomialParser$Unit::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_PolynomialParser$Unit_values(PyTypeObject *type)
      {
        JArray< PolynomialParser$Unit > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::data::PolynomialParser$Unit::values());
        return JArray<jobject>(result.this$).wrap(t_PolynomialParser$Unit::wrap_jobject);
      }
      static PyObject *t_PolynomialParser$Unit_get__parameters_(t_PolynomialParser$Unit *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/SourceTable.h"
#include "org/orekit/gnss/metric/ntrip/CasterRecord.h"
#include "java/util/List.h"
#include "org/orekit/gnss/metric/ntrip/NetworkRecord.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/metric/ntrip/DataStreamRecord.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *SourceTable::class$ = NULL;
          jmethodID *SourceTable::mids$ = NULL;
          bool SourceTable::live$ = false;

          jclass SourceTable::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/SourceTable");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCasters_0d9551367f7ecdef] = env->getMethodID(cls, "getCasters", "()Ljava/util/List;");
              mids$[mid_getDataStreams_0d9551367f7ecdef] = env->getMethodID(cls, "getDataStreams", "()Ljava/util/List;");
              mids$[mid_getNetworks_0d9551367f7ecdef] = env->getMethodID(cls, "getNetworks", "()Ljava/util/List;");
              mids$[mid_getNtripFlags_3cffd47377eca18a] = env->getMethodID(cls, "getNtripFlags", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List SourceTable::getCasters() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCasters_0d9551367f7ecdef]));
          }

          ::java::util::List SourceTable::getDataStreams() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataStreams_0d9551367f7ecdef]));
          }

          ::java::util::List SourceTable::getNetworks() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getNetworks_0d9551367f7ecdef]));
          }

          ::java::lang::String SourceTable::getNtripFlags() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNtripFlags_3cffd47377eca18a]));
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
        namespace ntrip {
          static PyObject *t_SourceTable_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SourceTable_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SourceTable_getCasters(t_SourceTable *self);
          static PyObject *t_SourceTable_getDataStreams(t_SourceTable *self);
          static PyObject *t_SourceTable_getNetworks(t_SourceTable *self);
          static PyObject *t_SourceTable_getNtripFlags(t_SourceTable *self);
          static PyObject *t_SourceTable_get__casters(t_SourceTable *self, void *data);
          static PyObject *t_SourceTable_get__dataStreams(t_SourceTable *self, void *data);
          static PyObject *t_SourceTable_get__networks(t_SourceTable *self, void *data);
          static PyObject *t_SourceTable_get__ntripFlags(t_SourceTable *self, void *data);
          static PyGetSetDef t_SourceTable__fields_[] = {
            DECLARE_GET_FIELD(t_SourceTable, casters),
            DECLARE_GET_FIELD(t_SourceTable, dataStreams),
            DECLARE_GET_FIELD(t_SourceTable, networks),
            DECLARE_GET_FIELD(t_SourceTable, ntripFlags),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SourceTable__methods_[] = {
            DECLARE_METHOD(t_SourceTable, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SourceTable, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SourceTable, getCasters, METH_NOARGS),
            DECLARE_METHOD(t_SourceTable, getDataStreams, METH_NOARGS),
            DECLARE_METHOD(t_SourceTable, getNetworks, METH_NOARGS),
            DECLARE_METHOD(t_SourceTable, getNtripFlags, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SourceTable)[] = {
            { Py_tp_methods, t_SourceTable__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SourceTable__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SourceTable)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SourceTable, t_SourceTable, SourceTable);

          void t_SourceTable::install(PyObject *module)
          {
            installType(&PY_TYPE(SourceTable), &PY_TYPE_DEF(SourceTable), module, "SourceTable", 0);
          }

          void t_SourceTable::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SourceTable), "class_", make_descriptor(SourceTable::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SourceTable), "wrapfn_", make_descriptor(t_SourceTable::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SourceTable), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SourceTable_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SourceTable::initializeClass, 1)))
              return NULL;
            return t_SourceTable::wrap_Object(SourceTable(((t_SourceTable *) arg)->object.this$));
          }
          static PyObject *t_SourceTable_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SourceTable::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SourceTable_getCasters(t_SourceTable *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getCasters());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(CasterRecord));
          }

          static PyObject *t_SourceTable_getDataStreams(t_SourceTable *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataStreams());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(DataStreamRecord));
          }

          static PyObject *t_SourceTable_getNetworks(t_SourceTable *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getNetworks());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::gnss::metric::ntrip::PY_TYPE(NetworkRecord));
          }

          static PyObject *t_SourceTable_getNtripFlags(t_SourceTable *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getNtripFlags());
            return j2p(result);
          }

          static PyObject *t_SourceTable_get__casters(t_SourceTable *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getCasters());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SourceTable_get__dataStreams(t_SourceTable *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataStreams());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SourceTable_get__networks(t_SourceTable *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getNetworks());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SourceTable_get__ntripFlags(t_SourceTable *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getNtripFlags());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/GnssData.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *GnssData::class$ = NULL;
          jmethodID *GnssData::mids$ = NULL;
          bool GnssData::live$ = false;

          jclass GnssData::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/GnssData");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_06927c633a4e39a9] = env->getMethodID(cls, "<init>", "([BI)V");
              mids$[mid_toString_3cffd47377eca18a] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GnssData::GnssData(const JArray< jbyte > & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_06927c633a4e39a9, a0.this$, a1)) {}

          ::java::lang::String GnssData::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_3cffd47377eca18a]));
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
        namespace ntrip {
          static PyObject *t_GnssData_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GnssData_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GnssData_init_(t_GnssData *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GnssData_toString(t_GnssData *self, PyObject *args);

          static PyMethodDef t_GnssData__methods_[] = {
            DECLARE_METHOD(t_GnssData, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GnssData, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GnssData, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GnssData)[] = {
            { Py_tp_methods, t_GnssData__methods_ },
            { Py_tp_init, (void *) t_GnssData_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GnssData)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GnssData, t_GnssData, GnssData);

          void t_GnssData::install(PyObject *module)
          {
            installType(&PY_TYPE(GnssData), &PY_TYPE_DEF(GnssData), module, "GnssData", 0);
          }

          void t_GnssData::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GnssData), "class_", make_descriptor(GnssData::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GnssData), "wrapfn_", make_descriptor(t_GnssData::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GnssData), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GnssData_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GnssData::initializeClass, 1)))
              return NULL;
            return t_GnssData::wrap_Object(GnssData(((t_GnssData *) arg)->object.this$));
          }
          static PyObject *t_GnssData_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GnssData::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GnssData_init_(t_GnssData *self, PyObject *args, PyObject *kwds)
          {
            JArray< jbyte > a0((jobject) NULL);
            jint a1;
            GnssData object((jobject) NULL);

            if (!parseArgs(args, "[BI", &a0, &a1))
            {
              INT_CALL(object = GnssData(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_GnssData_toString(t_GnssData *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(GnssData), (PyObject *) self, "toString", args, 2);
          }
        }
      }
    }
  }
}
