#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Minus.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Minus::class$ = NULL;
        jmethodID *Minus::mids$ = NULL;
        bool Minus::live$ = false;

        jclass Minus::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Minus");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_dcbc7ce2902fa136] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_73d6acaa8ebd2b7d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Minus::Minus() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jdouble Minus::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_dcbc7ce2902fa136], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Minus::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
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
        static PyObject *t_Minus_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Minus_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Minus_init_(t_Minus *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Minus_value(t_Minus *self, PyObject *args);

        static PyMethodDef t_Minus__methods_[] = {
          DECLARE_METHOD(t_Minus, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Minus, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Minus, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Minus)[] = {
          { Py_tp_methods, t_Minus__methods_ },
          { Py_tp_init, (void *) t_Minus_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Minus)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Minus, t_Minus, Minus);

        void t_Minus::install(PyObject *module)
        {
          installType(&PY_TYPE(Minus), &PY_TYPE_DEF(Minus), module, "Minus", 0);
        }

        void t_Minus::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Minus), "class_", make_descriptor(Minus::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Minus), "wrapfn_", make_descriptor(t_Minus::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Minus), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Minus_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Minus::initializeClass, 1)))
            return NULL;
          return t_Minus::wrap_Object(Minus(((t_Minus *) arg)->object.this$));
        }
        static PyObject *t_Minus_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Minus::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Minus_init_(t_Minus *self, PyObject *args, PyObject *kwds)
        {
          Minus object((jobject) NULL);

          INT_CALL(object = Minus());
          self->object = object;

          return 0;
        }

        static PyObject *t_Minus_value(t_Minus *self, PyObject *args)
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
#include "org/orekit/gnss/rflink/gps/SubFrame4A.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4A::class$ = NULL;
          jmethodID *SubFrame4A::mids$ = NULL;
          bool SubFrame4A::live$ = false;

          jclass SubFrame4A::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4A");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getReserved03_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved03", "()I");
              mids$[mid_getReserved04_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved04", "()I");
              mids$[mid_getReserved05_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved05", "()I");
              mids$[mid_getReserved06_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved06", "()I");
              mids$[mid_getReserved07_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved07", "()I");
              mids$[mid_getReserved08_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved08", "()I");
              mids$[mid_getReserved10_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved10", "()I");
              mids$[mid_getReservedA09_570ce0828f81a2c1] = env->getMethodID(cls, "getReservedA09", "()I");
              mids$[mid_getReservedB09_570ce0828f81a2c1] = env->getMethodID(cls, "getReservedB09", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame4A::getReserved03() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved03_570ce0828f81a2c1]);
          }

          jint SubFrame4A::getReserved04() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved04_570ce0828f81a2c1]);
          }

          jint SubFrame4A::getReserved05() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved05_570ce0828f81a2c1]);
          }

          jint SubFrame4A::getReserved06() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved06_570ce0828f81a2c1]);
          }

          jint SubFrame4A::getReserved07() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved07_570ce0828f81a2c1]);
          }

          jint SubFrame4A::getReserved08() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved08_570ce0828f81a2c1]);
          }

          jint SubFrame4A::getReserved10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved10_570ce0828f81a2c1]);
          }

          jint SubFrame4A::getReservedA09() const
          {
            return env->callIntMethod(this$, mids$[mid_getReservedA09_570ce0828f81a2c1]);
          }

          jint SubFrame4A::getReservedB09() const
          {
            return env->callIntMethod(this$, mids$[mid_getReservedB09_570ce0828f81a2c1]);
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
          static PyObject *t_SubFrame4A_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4A_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4A_getReserved03(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved04(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved05(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved06(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved07(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved08(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReserved10(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReservedA09(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_getReservedB09(t_SubFrame4A *self);
          static PyObject *t_SubFrame4A_get__reserved03(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved04(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved05(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved06(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved07(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved08(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reserved10(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reservedA09(t_SubFrame4A *self, void *data);
          static PyObject *t_SubFrame4A_get__reservedB09(t_SubFrame4A *self, void *data);
          static PyGetSetDef t_SubFrame4A__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame4A, reserved03),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved04),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved05),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved06),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved07),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved08),
            DECLARE_GET_FIELD(t_SubFrame4A, reserved10),
            DECLARE_GET_FIELD(t_SubFrame4A, reservedA09),
            DECLARE_GET_FIELD(t_SubFrame4A, reservedB09),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame4A__methods_[] = {
            DECLARE_METHOD(t_SubFrame4A, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4A, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4A, getReserved03, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved04, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved05, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved06, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved07, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved08, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReserved10, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReservedA09, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4A, getReservedB09, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4A)[] = {
            { Py_tp_methods, t_SubFrame4A__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame4A__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4A)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4A, t_SubFrame4A, SubFrame4A);

          void t_SubFrame4A::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4A), &PY_TYPE_DEF(SubFrame4A), module, "SubFrame4A", 0);
          }

          void t_SubFrame4A::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A), "class_", make_descriptor(SubFrame4A::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A), "wrapfn_", make_descriptor(t_SubFrame4A::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4A), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4A_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4A::initializeClass, 1)))
              return NULL;
            return t_SubFrame4A::wrap_Object(SubFrame4A(((t_SubFrame4A *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4A_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4A::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4A_getReserved03(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved03());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved04(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved04());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved05(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved05());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved06(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved06());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved07(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved07());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved08(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved08());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReserved10(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReservedA09(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReservedA09());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_getReservedB09(t_SubFrame4A *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReservedB09());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4A_get__reserved03(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved03());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved04(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved04());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved05(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved05());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved06(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved06());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved07(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved07());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved08(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved08());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reserved10(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved10());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reservedA09(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReservedA09());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4A_get__reservedB09(t_SubFrame4A *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReservedB09());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonPropagatorBuilder.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/util/List.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/estimation/leastsquares/AbstractBatchLSModel.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonPropagatorBuilder::class$ = NULL;
        jmethodID *PythonPropagatorBuilder::mids$ = NULL;
        bool PythonPropagatorBuilder::live$ = false;

        jclass PythonPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_buildLeastSquaresModel_2eb3122719704f90] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;");
            mids$[mid_buildPropagator_0c183831cad84280] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;");
            mids$[mid_copy_7c39c5f4719b16a0] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialOrbitDate_85703d13e302437e] = env->getMethodID(cls, "getInitialOrbitDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getOrbitType_e29360d311dc0e20] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getOrbitalParametersDrivers_bd51074bfd9d41da] = env->getMethodID(cls, "getOrbitalParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPositionAngleType_8f17e83e5a86217c] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getPropagationParametersDrivers_bd51074bfd9d41da] = env->getMethodID(cls, "getPropagationParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getSelectedNormalizedParameters_60c7040667a7dc5c] = env->getMethodID(cls, "getSelectedNormalizedParameters", "()[D");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_resetOrbit_6219f6b430651d68] = env->getMethodID(cls, "resetOrbit", "(Lorg/orekit/orbits/Orbit;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonPropagatorBuilder::PythonPropagatorBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonPropagatorBuilder::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonPropagatorBuilder::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonPropagatorBuilder::pythonExtension(jlong a0) const
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
      namespace conversion {
        static PyObject *t_PythonPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonPropagatorBuilder_init_(t_PythonPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonPropagatorBuilder_finalize(t_PythonPropagatorBuilder *self);
        static PyObject *t_PythonPropagatorBuilder_pythonExtension(t_PythonPropagatorBuilder *self, PyObject *args);
        static jobject JNICALL t_PythonPropagatorBuilder_buildLeastSquaresModel0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3);
        static jobject JNICALL t_PythonPropagatorBuilder_buildPropagator1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonPropagatorBuilder_copy2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getFrame3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getInitialOrbitDate4(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonPropagatorBuilder_getMu5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getOrbitType6(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getOrbitalParametersDrivers7(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getPositionAngleType8(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getPropagationParametersDrivers9(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonPropagatorBuilder_getSelectedNormalizedParameters10(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonPropagatorBuilder_pythonDecRef11(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonPropagatorBuilder_resetOrbit12(JNIEnv *jenv, jobject jobj, jobject a0);
        static PyObject *t_PythonPropagatorBuilder_get__self(t_PythonPropagatorBuilder *self, void *data);
        static PyGetSetDef t_PythonPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_PythonPropagatorBuilder, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_PythonPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonPropagatorBuilder, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonPropagatorBuilder, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonPropagatorBuilder)[] = {
          { Py_tp_methods, t_PythonPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_PythonPropagatorBuilder_init_ },
          { Py_tp_getset, t_PythonPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonPropagatorBuilder, t_PythonPropagatorBuilder, PythonPropagatorBuilder);

        void t_PythonPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonPropagatorBuilder), &PY_TYPE_DEF(PythonPropagatorBuilder), module, "PythonPropagatorBuilder", 1);
        }

        void t_PythonPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorBuilder), "class_", make_descriptor(PythonPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorBuilder), "wrapfn_", make_descriptor(t_PythonPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonPropagatorBuilder::initializeClass);
          JNINativeMethod methods[] = {
            { "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/AbstractBatchLSModel;", (void *) t_PythonPropagatorBuilder_buildLeastSquaresModel0 },
            { "buildPropagator", "([D)Lorg/orekit/propagation/Propagator;", (void *) t_PythonPropagatorBuilder_buildPropagator1 },
            { "copy", "()Lorg/orekit/propagation/conversion/PropagatorBuilder;", (void *) t_PythonPropagatorBuilder_copy2 },
            { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonPropagatorBuilder_getFrame3 },
            { "getInitialOrbitDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonPropagatorBuilder_getInitialOrbitDate4 },
            { "getMu", "()D", (void *) t_PythonPropagatorBuilder_getMu5 },
            { "getOrbitType", "()Lorg/orekit/orbits/OrbitType;", (void *) t_PythonPropagatorBuilder_getOrbitType6 },
            { "getOrbitalParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonPropagatorBuilder_getOrbitalParametersDrivers7 },
            { "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;", (void *) t_PythonPropagatorBuilder_getPositionAngleType8 },
            { "getPropagationParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;", (void *) t_PythonPropagatorBuilder_getPropagationParametersDrivers9 },
            { "getSelectedNormalizedParameters", "()[D", (void *) t_PythonPropagatorBuilder_getSelectedNormalizedParameters10 },
            { "pythonDecRef", "()V", (void *) t_PythonPropagatorBuilder_pythonDecRef11 },
            { "resetOrbit", "(Lorg/orekit/orbits/Orbit;)V", (void *) t_PythonPropagatorBuilder_resetOrbit12 },
          };
          env->registerNatives(cls, methods, 13);
        }

        static PyObject *t_PythonPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_PythonPropagatorBuilder::wrap_Object(PythonPropagatorBuilder(((t_PythonPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_PythonPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonPropagatorBuilder_init_(t_PythonPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          PythonPropagatorBuilder object((jobject) NULL);

          INT_CALL(object = PythonPropagatorBuilder());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonPropagatorBuilder_finalize(t_PythonPropagatorBuilder *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonPropagatorBuilder_pythonExtension(t_PythonPropagatorBuilder *self, PyObject *args)
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

        static jobject JNICALL t_PythonPropagatorBuilder_buildLeastSquaresModel0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2, jobject a3)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::estimation::leastsquares::AbstractBatchLSModel value((jobject) NULL);
          PyObject *o0 = JArray<jobject>(a0).wrap(::org::orekit::propagation::conversion::t_PropagatorBuilder::wrap_jobject);
          PyObject *o1 = ::java::util::t_List::wrap_Object(::java::util::List(a1));
          PyObject *o2 = ::org::orekit::utils::t_ParameterDriversList::wrap_Object(::org::orekit::utils::ParameterDriversList(a2));
          PyObject *o3 = ::org::orekit::estimation::leastsquares::t_ModelObserver::wrap_Object(::org::orekit::estimation::leastsquares::ModelObserver(a3));
          PyObject *result = PyObject_CallMethod(obj, "buildLeastSquaresModel", "OOOO", o0, o1, o2, o3);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          Py_DECREF(o3);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::estimation::leastsquares::AbstractBatchLSModel::initializeClass, &value))
          {
            throwTypeError("buildLeastSquaresModel", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_buildPropagator1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          PyObject *o0 = JArray<jdouble>(a0).wrap();
          PyObject *result = PyObject_CallMethod(obj, "buildPropagator", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::Propagator::initializeClass, &value))
          {
            throwTypeError("buildPropagator", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_copy2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::propagation::conversion::PropagatorBuilder value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "copy", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &value))
          {
            throwTypeError("copy", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getFrame3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_492808a339bfa35f]);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getInitialOrbitDate4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getInitialOrbitDate", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getInitialOrbitDate", result);
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

        static jdouble JNICALL t_PythonPropagatorBuilder_getMu5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getMu", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getMu", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jobject JNICALL t_PythonPropagatorBuilder_getOrbitType6(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getOrbitType", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::OrbitType::initializeClass, &value))
          {
            throwTypeError("getOrbitType", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getOrbitalParametersDrivers7(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getOrbitalParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getOrbitalParametersDrivers", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getPositionAngleType8(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPositionAngleType", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
          {
            throwTypeError("getPositionAngleType", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getPropagationParametersDrivers9(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getPropagationParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::ParameterDriversList::initializeClass, &value))
          {
            throwTypeError("getPropagationParametersDrivers", result);
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

        static jobject JNICALL t_PythonPropagatorBuilder_getSelectedNormalizedParameters10(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getSelectedNormalizedParameters", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getSelectedNormalizedParameters", result);
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

        static void JNICALL t_PythonPropagatorBuilder_pythonDecRef11(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static void JNICALL t_PythonPropagatorBuilder_resetOrbit12(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonPropagatorBuilder::mids$[PythonPropagatorBuilder::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          PyObject *o0 = ::org::orekit::orbits::t_Orbit::wrap_Object(::org::orekit::orbits::Orbit(a0));
          PyObject *result = PyObject_CallMethod(obj, "resetOrbit", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else
            Py_DECREF(result);
        }

        static PyObject *t_PythonPropagatorBuilder_get__self(t_PythonPropagatorBuilder *self, void *data)
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
#include "org/orekit/gnss/rflink/gps/SubFrame4B.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrame4B::class$ = NULL;
          jmethodID *SubFrame4B::mids$ = NULL;
          bool SubFrame4B::live$ = false;

          jclass SubFrame4B::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrame4B");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getReserved03_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved03", "()I");
              mids$[mid_getReserved04_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved04", "()I");
              mids$[mid_getReserved05_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved05", "()I");
              mids$[mid_getReserved06_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved06", "()I");
              mids$[mid_getReserved07_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved07", "()I");
              mids$[mid_getReserved08_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved08", "()I");
              mids$[mid_getReserved09_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved09", "()I");
              mids$[mid_getReserved10_570ce0828f81a2c1] = env->getMethodID(cls, "getReserved10", "()I");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jint SubFrame4B::getReserved03() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved03_570ce0828f81a2c1]);
          }

          jint SubFrame4B::getReserved04() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved04_570ce0828f81a2c1]);
          }

          jint SubFrame4B::getReserved05() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved05_570ce0828f81a2c1]);
          }

          jint SubFrame4B::getReserved06() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved06_570ce0828f81a2c1]);
          }

          jint SubFrame4B::getReserved07() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved07_570ce0828f81a2c1]);
          }

          jint SubFrame4B::getReserved08() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved08_570ce0828f81a2c1]);
          }

          jint SubFrame4B::getReserved09() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved09_570ce0828f81a2c1]);
          }

          jint SubFrame4B::getReserved10() const
          {
            return env->callIntMethod(this$, mids$[mid_getReserved10_570ce0828f81a2c1]);
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
          static PyObject *t_SubFrame4B_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4B_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrame4B_getReserved03(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved04(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved05(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved06(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved07(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved08(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved09(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_getReserved10(t_SubFrame4B *self);
          static PyObject *t_SubFrame4B_get__reserved03(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved04(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved05(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved06(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved07(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved08(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved09(t_SubFrame4B *self, void *data);
          static PyObject *t_SubFrame4B_get__reserved10(t_SubFrame4B *self, void *data);
          static PyGetSetDef t_SubFrame4B__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrame4B, reserved03),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved04),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved05),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved06),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved07),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved08),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved09),
            DECLARE_GET_FIELD(t_SubFrame4B, reserved10),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrame4B__methods_[] = {
            DECLARE_METHOD(t_SubFrame4B, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4B, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrame4B, getReserved03, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved04, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved05, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved06, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved07, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved08, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved09, METH_NOARGS),
            DECLARE_METHOD(t_SubFrame4B, getReserved10, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrame4B)[] = {
            { Py_tp_methods, t_SubFrame4B__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrame4B__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrame4B)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrame4B, t_SubFrame4B, SubFrame4B);

          void t_SubFrame4B::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrame4B), &PY_TYPE_DEF(SubFrame4B), module, "SubFrame4B", 0);
          }

          void t_SubFrame4B::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4B), "class_", make_descriptor(SubFrame4B::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4B), "wrapfn_", make_descriptor(t_SubFrame4B::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrame4B), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrame4B_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrame4B::initializeClass, 1)))
              return NULL;
            return t_SubFrame4B::wrap_Object(SubFrame4B(((t_SubFrame4B *) arg)->object.this$));
          }
          static PyObject *t_SubFrame4B_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrame4B::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrame4B_getReserved03(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved03());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved04(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved04());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved05(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved05());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved06(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved06());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved07(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved07());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved08(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved08());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved09(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved09());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_getReserved10(t_SubFrame4B *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getReserved10());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrame4B_get__reserved03(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved03());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved04(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved04());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved05(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved05());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved06(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved06());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved07(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved07());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved08(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved08());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved09(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved09());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrame4B_get__reserved10(t_SubFrame4B *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getReserved10());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/SEMParser.h"
#include "java/util/List.h"
#include "java/io/IOException.h"
#include "java/lang/Integer.h"
#include "org/orekit/data/DataProvidersManager.h"
#include "java/io/InputStream.h"
#include "org/orekit/propagation/analytical/gnss/data/GPSAlmanac.h"
#include "java/text/ParseException.h"
#include "org/orekit/time/TimeScales.h"
#include "org/orekit/data/DataLoader.h"
#include "org/orekit/errors/OrekitException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {

      ::java::lang::Class *SEMParser::class$ = NULL;
      jmethodID *SEMParser::mids$ = NULL;
      bool SEMParser::live$ = false;

      jclass SEMParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/gnss/SEMParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
          mids$[mid_init$_4449ecb3aa08e27f] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/data/DataProvidersManager;Lorg/orekit/time/TimeScales;)V");
          mids$[mid_getAlmanacs_2afa36052df4765d] = env->getMethodID(cls, "getAlmanacs", "()Ljava/util/List;");
          mids$[mid_getPRNNumbers_2afa36052df4765d] = env->getMethodID(cls, "getPRNNumbers", "()Ljava/util/List;");
          mids$[mid_getSupportedNames_11b109bd155ca898] = env->getMethodID(cls, "getSupportedNames", "()Ljava/lang/String;");
          mids$[mid_loadData_0fa09c18fee449d5] = env->getMethodID(cls, "loadData", "()V");
          mids$[mid_loadData_1815f85c118161ad] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
          mids$[mid_stillAcceptsData_b108b35ef48e27bd] = env->getMethodID(cls, "stillAcceptsData", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SEMParser::SEMParser(const ::java::lang::String & a0) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

      SEMParser::SEMParser(const ::java::lang::String & a0, const ::org::orekit::data::DataProvidersManager & a1, const ::org::orekit::time::TimeScales & a2) : ::org::orekit::data::AbstractSelfFeedingLoader(env->newObject(initializeClass, &mids$, mid_init$_4449ecb3aa08e27f, a0.this$, a1.this$, a2.this$)) {}

      ::java::util::List SEMParser::getAlmanacs() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAlmanacs_2afa36052df4765d]));
      }

      ::java::util::List SEMParser::getPRNNumbers() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPRNNumbers_2afa36052df4765d]));
      }

      ::java::lang::String SEMParser::getSupportedNames() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSupportedNames_11b109bd155ca898]));
      }

      void SEMParser::loadData() const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_0fa09c18fee449d5]);
      }

      void SEMParser::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_loadData_1815f85c118161ad], a0.this$, a1.this$);
      }

      jboolean SEMParser::stillAcceptsData() const
      {
        return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_b108b35ef48e27bd]);
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
      static PyObject *t_SEMParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SEMParser_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SEMParser_init_(t_SEMParser *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SEMParser_getAlmanacs(t_SEMParser *self);
      static PyObject *t_SEMParser_getPRNNumbers(t_SEMParser *self);
      static PyObject *t_SEMParser_getSupportedNames(t_SEMParser *self);
      static PyObject *t_SEMParser_loadData(t_SEMParser *self, PyObject *args);
      static PyObject *t_SEMParser_stillAcceptsData(t_SEMParser *self);
      static PyObject *t_SEMParser_get__almanacs(t_SEMParser *self, void *data);
      static PyObject *t_SEMParser_get__pRNNumbers(t_SEMParser *self, void *data);
      static PyObject *t_SEMParser_get__supportedNames(t_SEMParser *self, void *data);
      static PyGetSetDef t_SEMParser__fields_[] = {
        DECLARE_GET_FIELD(t_SEMParser, almanacs),
        DECLARE_GET_FIELD(t_SEMParser, pRNNumbers),
        DECLARE_GET_FIELD(t_SEMParser, supportedNames),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SEMParser__methods_[] = {
        DECLARE_METHOD(t_SEMParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SEMParser, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SEMParser, getAlmanacs, METH_NOARGS),
        DECLARE_METHOD(t_SEMParser, getPRNNumbers, METH_NOARGS),
        DECLARE_METHOD(t_SEMParser, getSupportedNames, METH_NOARGS),
        DECLARE_METHOD(t_SEMParser, loadData, METH_VARARGS),
        DECLARE_METHOD(t_SEMParser, stillAcceptsData, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SEMParser)[] = {
        { Py_tp_methods, t_SEMParser__methods_ },
        { Py_tp_init, (void *) t_SEMParser_init_ },
        { Py_tp_getset, t_SEMParser__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SEMParser)[] = {
        &PY_TYPE_DEF(::org::orekit::data::AbstractSelfFeedingLoader),
        NULL
      };

      DEFINE_TYPE(SEMParser, t_SEMParser, SEMParser);

      void t_SEMParser::install(PyObject *module)
      {
        installType(&PY_TYPE(SEMParser), &PY_TYPE_DEF(SEMParser), module, "SEMParser", 0);
      }

      void t_SEMParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SEMParser), "class_", make_descriptor(SEMParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SEMParser), "wrapfn_", make_descriptor(t_SEMParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SEMParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SEMParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SEMParser::initializeClass, 1)))
          return NULL;
        return t_SEMParser::wrap_Object(SEMParser(((t_SEMParser *) arg)->object.this$));
      }
      static PyObject *t_SEMParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SEMParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SEMParser_init_(t_SEMParser *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            SEMParser object((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              INT_CALL(object = SEMParser(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::data::DataProvidersManager a1((jobject) NULL);
            ::org::orekit::time::TimeScales a2((jobject) NULL);
            SEMParser object((jobject) NULL);

            if (!parseArgs(args, "skk", ::org::orekit::data::DataProvidersManager::initializeClass, ::org::orekit::time::TimeScales::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = SEMParser(a0, a1, a2));
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

      static PyObject *t_SEMParser_getAlmanacs(t_SEMParser *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getAlmanacs());
        return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::gnss::data::PY_TYPE(GPSAlmanac));
      }

      static PyObject *t_SEMParser_getPRNNumbers(t_SEMParser *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getPRNNumbers());
        return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Integer));
      }

      static PyObject *t_SEMParser_getSupportedNames(t_SEMParser *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSupportedNames());
        return j2p(result);
      }

      static PyObject *t_SEMParser_loadData(t_SEMParser *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.loadData());
            Py_RETURN_NONE;
          }
          break;
         case 2:
          {
            ::java::io::InputStream a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);

            if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.loadData(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "loadData", args);
        return NULL;
      }

      static PyObject *t_SEMParser_stillAcceptsData(t_SEMParser *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.stillAcceptsData());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_SEMParser_get__almanacs(t_SEMParser *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getAlmanacs());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_SEMParser_get__pRNNumbers(t_SEMParser *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getPRNNumbers());
        return ::java::util::t_List::wrap_Object(value);
      }

      static PyObject *t_SEMParser_get__supportedNames(t_SEMParser *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSupportedNames());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/geometry/fov/PythonFieldOfView.h"
#include "org/orekit/propagation/events/VisibilityTrigger.h"
#include "java/util/List.h"
#include "org/orekit/geometry/fov/FieldOfView.h"
#include "java/lang/Throwable.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/frames/Transform.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace geometry {
      namespace fov {

        ::java::lang::Class *PythonFieldOfView::class$ = NULL;
        jmethodID *PythonFieldOfView::mids$ = NULL;
        bool PythonFieldOfView::live$ = false;

        jclass PythonFieldOfView::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/geometry/fov/PythonFieldOfView");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getFootprint_d179f90e70a637c1] = env->getMethodID(cls, "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;");
            mids$[mid_getMargin_dff5885c2c873297] = env->getMethodID(cls, "getMargin", "()D");
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

        PythonFieldOfView::PythonFieldOfView() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void PythonFieldOfView::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonFieldOfView::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonFieldOfView::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonFieldOfView_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonFieldOfView_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonFieldOfView_init_(t_PythonFieldOfView *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonFieldOfView_finalize(t_PythonFieldOfView *self);
        static PyObject *t_PythonFieldOfView_pythonExtension(t_PythonFieldOfView *self, PyObject *args);
        static jobject JNICALL t_PythonFieldOfView_getFootprint0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2);
        static jdouble JNICALL t_PythonFieldOfView_getMargin1(JNIEnv *jenv, jobject jobj);
        static jdouble JNICALL t_PythonFieldOfView_offsetFromBoundary2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2);
        static jobject JNICALL t_PythonFieldOfView_projectToBoundary3(JNIEnv *jenv, jobject jobj, jobject a0);
        static void JNICALL t_PythonFieldOfView_pythonDecRef4(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonFieldOfView_get__self(t_PythonFieldOfView *self, void *data);
        static PyGetSetDef t_PythonFieldOfView__fields_[] = {
          DECLARE_GET_FIELD(t_PythonFieldOfView, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonFieldOfView__methods_[] = {
          DECLARE_METHOD(t_PythonFieldOfView, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOfView, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonFieldOfView, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonFieldOfView, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonFieldOfView)[] = {
          { Py_tp_methods, t_PythonFieldOfView__methods_ },
          { Py_tp_init, (void *) t_PythonFieldOfView_init_ },
          { Py_tp_getset, t_PythonFieldOfView__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonFieldOfView)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonFieldOfView, t_PythonFieldOfView, PythonFieldOfView);

        void t_PythonFieldOfView::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonFieldOfView), &PY_TYPE_DEF(PythonFieldOfView), module, "PythonFieldOfView", 1);
        }

        void t_PythonFieldOfView::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOfView), "class_", make_descriptor(PythonFieldOfView::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOfView), "wrapfn_", make_descriptor(t_PythonFieldOfView::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldOfView), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonFieldOfView::initializeClass);
          JNINativeMethod methods[] = {
            { "getFootprint", "(Lorg/orekit/frames/Transform;Lorg/orekit/bodies/OneAxisEllipsoid;D)Ljava/util/List;", (void *) t_PythonFieldOfView_getFootprint0 },
            { "getMargin", "()D", (void *) t_PythonFieldOfView_getMargin1 },
            { "offsetFromBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DLorg/orekit/propagation/events/VisibilityTrigger;)D", (void *) t_PythonFieldOfView_offsetFromBoundary2 },
            { "projectToBoundary", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonFieldOfView_projectToBoundary3 },
            { "pythonDecRef", "()V", (void *) t_PythonFieldOfView_pythonDecRef4 },
          };
          env->registerNatives(cls, methods, 5);
        }

        static PyObject *t_PythonFieldOfView_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonFieldOfView::initializeClass, 1)))
            return NULL;
          return t_PythonFieldOfView::wrap_Object(PythonFieldOfView(((t_PythonFieldOfView *) arg)->object.this$));
        }
        static PyObject *t_PythonFieldOfView_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonFieldOfView::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonFieldOfView_init_(t_PythonFieldOfView *self, PyObject *args, PyObject *kwds)
        {
          PythonFieldOfView object((jobject) NULL);

          INT_CALL(object = PythonFieldOfView());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonFieldOfView_finalize(t_PythonFieldOfView *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonFieldOfView_pythonExtension(t_PythonFieldOfView *self, PyObject *args)
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

        static jobject JNICALL t_PythonFieldOfView_getFootprint0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jdouble a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *o0 = ::org::orekit::frames::t_Transform::wrap_Object(::org::orekit::frames::Transform(a0));
          PyObject *o1 = ::org::orekit::bodies::t_OneAxisEllipsoid::wrap_Object(::org::orekit::bodies::OneAxisEllipsoid(a1));
          PyObject *result = PyObject_CallMethod(obj, "getFootprint", "OOd", o0, o1, (double) a2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getFootprint", result);
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

        static jdouble JNICALL t_PythonFieldOfView_getMargin1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jdouble value;
          PyObject *result = PyObject_CallMethod(obj, "getMargin", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "D", &value))
          {
            throwTypeError("getMargin", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jdouble) 0;
        }

        static jdouble JNICALL t_PythonFieldOfView_offsetFromBoundary2(JNIEnv *jenv, jobject jobj, jobject a0, jdouble a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_492808a339bfa35f]);
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

        static jobject JNICALL t_PythonFieldOfView_projectToBoundary3(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_492808a339bfa35f]);
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

        static void JNICALL t_PythonFieldOfView_pythonDecRef4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonFieldOfView::mids$[PythonFieldOfView::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonFieldOfView_get__self(t_PythonFieldOfView *self, void *data)
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
#include "org/hipparchus/distribution/MultivariateRealDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {

      ::java::lang::Class *MultivariateRealDistribution::class$ = NULL;
      jmethodID *MultivariateRealDistribution::mids$ = NULL;
      bool MultivariateRealDistribution::live$ = false;

      jclass MultivariateRealDistribution::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/distribution/MultivariateRealDistribution");

          mids$ = new jmethodID[max_mid];
          mids$[mid_density_9dc1ec0bcc0a9a29] = env->getMethodID(cls, "density", "([D)D");
          mids$[mid_getDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getDimension", "()I");
          mids$[mid_reseedRandomGenerator_3a8e7649f31fdb20] = env->getMethodID(cls, "reseedRandomGenerator", "(J)V");
          mids$[mid_sample_60c7040667a7dc5c] = env->getMethodID(cls, "sample", "()[D");
          mids$[mid_sample_d3e8f395184a4338] = env->getMethodID(cls, "sample", "(I)[[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MultivariateRealDistribution::density(const JArray< jdouble > & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_density_9dc1ec0bcc0a9a29], a0.this$);
      }

      jint MultivariateRealDistribution::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_570ce0828f81a2c1]);
      }

      void MultivariateRealDistribution::reseedRandomGenerator(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_reseedRandomGenerator_3a8e7649f31fdb20], a0);
      }

      JArray< jdouble > MultivariateRealDistribution::sample() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_sample_60c7040667a7dc5c]));
      }

      JArray< JArray< jdouble > > MultivariateRealDistribution::sample(jint a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_sample_d3e8f395184a4338], a0));
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
      static PyObject *t_MultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateRealDistribution_density(t_MultivariateRealDistribution *self, PyObject *arg);
      static PyObject *t_MultivariateRealDistribution_getDimension(t_MultivariateRealDistribution *self);
      static PyObject *t_MultivariateRealDistribution_reseedRandomGenerator(t_MultivariateRealDistribution *self, PyObject *arg);
      static PyObject *t_MultivariateRealDistribution_sample(t_MultivariateRealDistribution *self, PyObject *args);
      static PyObject *t_MultivariateRealDistribution_get__dimension(t_MultivariateRealDistribution *self, void *data);
      static PyGetSetDef t_MultivariateRealDistribution__fields_[] = {
        DECLARE_GET_FIELD(t_MultivariateRealDistribution, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_MultivariateRealDistribution__methods_[] = {
        DECLARE_METHOD(t_MultivariateRealDistribution, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateRealDistribution, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateRealDistribution, density, METH_O),
        DECLARE_METHOD(t_MultivariateRealDistribution, getDimension, METH_NOARGS),
        DECLARE_METHOD(t_MultivariateRealDistribution, reseedRandomGenerator, METH_O),
        DECLARE_METHOD(t_MultivariateRealDistribution, sample, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultivariateRealDistribution)[] = {
        { Py_tp_methods, t_MultivariateRealDistribution__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_MultivariateRealDistribution__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultivariateRealDistribution)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultivariateRealDistribution, t_MultivariateRealDistribution, MultivariateRealDistribution);

      void t_MultivariateRealDistribution::install(PyObject *module)
      {
        installType(&PY_TYPE(MultivariateRealDistribution), &PY_TYPE_DEF(MultivariateRealDistribution), module, "MultivariateRealDistribution", 0);
      }

      void t_MultivariateRealDistribution::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateRealDistribution), "class_", make_descriptor(MultivariateRealDistribution::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateRealDistribution), "wrapfn_", make_descriptor(t_MultivariateRealDistribution::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateRealDistribution), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultivariateRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultivariateRealDistribution::initializeClass, 1)))
          return NULL;
        return t_MultivariateRealDistribution::wrap_Object(MultivariateRealDistribution(((t_MultivariateRealDistribution *) arg)->object.this$));
      }
      static PyObject *t_MultivariateRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultivariateRealDistribution::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultivariateRealDistribution_density(t_MultivariateRealDistribution *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.density(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "density", arg);
        return NULL;
      }

      static PyObject *t_MultivariateRealDistribution_getDimension(t_MultivariateRealDistribution *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_MultivariateRealDistribution_reseedRandomGenerator(t_MultivariateRealDistribution *self, PyObject *arg)
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

      static PyObject *t_MultivariateRealDistribution_sample(t_MultivariateRealDistribution *self, PyObject *args)
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

      static PyObject *t_MultivariateRealDistribution_get__dimension(t_MultivariateRealDistribution *self, void *data)
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
#include "org/hipparchus/stat/descriptive/rank/RandomPercentile.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/util/Collection.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/rank/RandomPercentile.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *RandomPercentile::class$ = NULL;
          jmethodID *RandomPercentile::mids$ = NULL;
          bool RandomPercentile::live$ = false;
          jdouble RandomPercentile::DEFAULT_EPSILON = (jdouble) 0;

          jclass RandomPercentile::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/RandomPercentile");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_init$_a351c1fd6920cdee] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;)V");
              mids$[mid_init$_a73757db4170dc00] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/random/RandomGenerator;)V");
              mids$[mid_aggregate_9cce984294960975] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/rank/RandomPercentile;)V");
              mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_d7fd0b60788b1919] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/RandomPercentile;");
              mids$[mid_evaluate_19285de97bbc7eea] = env->getMethodID(cls, "evaluate", "(D[D)D");
              mids$[mid_evaluate_556bede10daac330] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_b1f392c723f21637] = env->getMethodID(cls, "evaluate", "(D[DII)D");
              mids$[mid_getAggregateN_7076a671f4259cfe] = env->getMethodID(cls, "getAggregateN", "(Ljava/util/Collection;)D");
              mids$[mid_getAggregateQuantileRank_ac445c2196a57bd4] = env->getMethodID(cls, "getAggregateQuantileRank", "(DLjava/util/Collection;)D");
              mids$[mid_getAggregateRank_ac445c2196a57bd4] = env->getMethodID(cls, "getAggregateRank", "(DLjava/util/Collection;)D");
              mids$[mid_getN_492808a339bfa35f] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getQuantileRank_dcbc7ce2902fa136] = env->getMethodID(cls, "getQuantileRank", "(D)D");
              mids$[mid_getRank_dcbc7ce2902fa136] = env->getMethodID(cls, "getRank", "(D)D");
              mids$[mid_getResult_dff5885c2c873297] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_getResult_dcbc7ce2902fa136] = env->getMethodID(cls, "getResult", "(D)D");
              mids$[mid_increment_17db3a65980d3441] = env->getMethodID(cls, "increment", "(D)V");
              mids$[mid_maxValuesRetained_cebf7dc9be03a93c] = env->getStaticMethodID(cls, "maxValuesRetained", "(D)J");
              mids$[mid_reduce_ac445c2196a57bd4] = env->getMethodID(cls, "reduce", "(DLjava/util/Collection;)D");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RandomPercentile::RandomPercentile() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          RandomPercentile::RandomPercentile(jdouble a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

          RandomPercentile::RandomPercentile(const ::org::hipparchus::random::RandomGenerator & a0) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_a351c1fd6920cdee, a0.this$)) {}

          RandomPercentile::RandomPercentile(jdouble a0, const ::org::hipparchus::random::RandomGenerator & a1) : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_a73757db4170dc00, a0, a1.this$)) {}

          void RandomPercentile::aggregate(const RandomPercentile & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_9cce984294960975], a0.this$);
          }

          void RandomPercentile::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
          }

          RandomPercentile RandomPercentile::copy() const
          {
            return RandomPercentile(env->callObjectMethod(this$, mids$[mid_copy_d7fd0b60788b1919]));
          }

          jdouble RandomPercentile::evaluate(jdouble a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_19285de97bbc7eea], a0, a1.this$);
          }

          jdouble RandomPercentile::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_556bede10daac330], a0.this$, a1, a2);
          }

          jdouble RandomPercentile::evaluate(jdouble a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_b1f392c723f21637], a0, a1.this$, a2, a3);
          }

          jdouble RandomPercentile::getAggregateN(const ::java::util::Collection & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAggregateN_7076a671f4259cfe], a0.this$);
          }

          jdouble RandomPercentile::getAggregateQuantileRank(jdouble a0, const ::java::util::Collection & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAggregateQuantileRank_ac445c2196a57bd4], a0, a1.this$);
          }

          jdouble RandomPercentile::getAggregateRank(jdouble a0, const ::java::util::Collection & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAggregateRank_ac445c2196a57bd4], a0, a1.this$);
          }

          jlong RandomPercentile::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_492808a339bfa35f]);
          }

          jdouble RandomPercentile::getQuantileRank(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getQuantileRank_dcbc7ce2902fa136], a0);
          }

          jdouble RandomPercentile::getRank(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getRank_dcbc7ce2902fa136], a0);
          }

          jdouble RandomPercentile::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_dff5885c2c873297]);
          }

          jdouble RandomPercentile::getResult(jdouble a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_dcbc7ce2902fa136], a0);
          }

          void RandomPercentile::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_17db3a65980d3441], a0);
          }

          jlong RandomPercentile::maxValuesRetained(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticLongMethod(cls, mids$[mid_maxValuesRetained_cebf7dc9be03a93c], a0);
          }

          jdouble RandomPercentile::reduce(jdouble a0, const ::java::util::Collection & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_reduce_ac445c2196a57bd4], a0, a1.this$);
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
        namespace rank {
          static PyObject *t_RandomPercentile_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RandomPercentile_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RandomPercentile_init_(t_RandomPercentile *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RandomPercentile_aggregate(t_RandomPercentile *self, PyObject *arg);
          static PyObject *t_RandomPercentile_clear(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_copy(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_evaluate(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_getAggregateN(t_RandomPercentile *self, PyObject *arg);
          static PyObject *t_RandomPercentile_getAggregateQuantileRank(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_getAggregateRank(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_getN(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_getQuantileRank(t_RandomPercentile *self, PyObject *arg);
          static PyObject *t_RandomPercentile_getRank(t_RandomPercentile *self, PyObject *arg);
          static PyObject *t_RandomPercentile_getResult(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_increment(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_maxValuesRetained(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RandomPercentile_reduce(t_RandomPercentile *self, PyObject *args);
          static PyObject *t_RandomPercentile_get__n(t_RandomPercentile *self, void *data);
          static PyObject *t_RandomPercentile_get__result(t_RandomPercentile *self, void *data);
          static PyGetSetDef t_RandomPercentile__fields_[] = {
            DECLARE_GET_FIELD(t_RandomPercentile, n),
            DECLARE_GET_FIELD(t_RandomPercentile, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RandomPercentile__methods_[] = {
            DECLARE_METHOD(t_RandomPercentile, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RandomPercentile, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RandomPercentile, aggregate, METH_O),
            DECLARE_METHOD(t_RandomPercentile, clear, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, copy, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, getAggregateN, METH_O),
            DECLARE_METHOD(t_RandomPercentile, getAggregateQuantileRank, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, getAggregateRank, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, getN, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, getQuantileRank, METH_O),
            DECLARE_METHOD(t_RandomPercentile, getRank, METH_O),
            DECLARE_METHOD(t_RandomPercentile, getResult, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, increment, METH_VARARGS),
            DECLARE_METHOD(t_RandomPercentile, maxValuesRetained, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RandomPercentile, reduce, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RandomPercentile)[] = {
            { Py_tp_methods, t_RandomPercentile__methods_ },
            { Py_tp_init, (void *) t_RandomPercentile_init_ },
            { Py_tp_getset, t_RandomPercentile__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RandomPercentile)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(RandomPercentile, t_RandomPercentile, RandomPercentile);

          void t_RandomPercentile::install(PyObject *module)
          {
            installType(&PY_TYPE(RandomPercentile), &PY_TYPE_DEF(RandomPercentile), module, "RandomPercentile", 0);
          }

          void t_RandomPercentile::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RandomPercentile), "class_", make_descriptor(RandomPercentile::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RandomPercentile), "wrapfn_", make_descriptor(t_RandomPercentile::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RandomPercentile), "boxfn_", make_descriptor(boxObject));
            env->getClass(RandomPercentile::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RandomPercentile), "DEFAULT_EPSILON", make_descriptor(RandomPercentile::DEFAULT_EPSILON));
          }

          static PyObject *t_RandomPercentile_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RandomPercentile::initializeClass, 1)))
              return NULL;
            return t_RandomPercentile::wrap_Object(RandomPercentile(((t_RandomPercentile *) arg)->object.this$));
          }
          static PyObject *t_RandomPercentile_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RandomPercentile::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RandomPercentile_init_(t_RandomPercentile *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                RandomPercentile object((jobject) NULL);

                INT_CALL(object = RandomPercentile());
                self->object = object;
                break;
              }
             case 1:
              {
                jdouble a0;
                RandomPercentile object((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  INT_CALL(object = RandomPercentile(a0));
                  self->object = object;
                  break;
                }
              }
              {
                ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
                RandomPercentile object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0))
                {
                  INT_CALL(object = RandomPercentile(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                ::org::hipparchus::random::RandomGenerator a1((jobject) NULL);
                RandomPercentile object((jobject) NULL);

                if (!parseArgs(args, "Dk", ::org::hipparchus::random::RandomGenerator::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = RandomPercentile(a0, a1));
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

          static PyObject *t_RandomPercentile_aggregate(t_RandomPercentile *self, PyObject *arg)
          {
            RandomPercentile a0((jobject) NULL);

            if (!parseArg(arg, "k", RandomPercentile::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_clear(t_RandomPercentile *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_RandomPercentile_copy(t_RandomPercentile *self, PyObject *args)
          {
            RandomPercentile result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_RandomPercentile::wrap_Object(result);
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_RandomPercentile_evaluate(t_RandomPercentile *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                jdouble a0;
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "D[D", &a0, &a1))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
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
                jdouble a0;
                JArray< jdouble > a1((jobject) NULL);
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "D[DII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_RandomPercentile_getAggregateN(t_RandomPercentile *self, PyObject *arg)
          {
            ::java::util::Collection a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble result;

            if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.getAggregateN(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAggregateN", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getAggregateQuantileRank(t_RandomPercentile *self, PyObject *args)
          {
            jdouble a0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble result;

            if (!parseArgs(args, "DK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.getAggregateQuantileRank(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAggregateQuantileRank", args);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getAggregateRank(t_RandomPercentile *self, PyObject *args)
          {
            jdouble a0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble result;

            if (!parseArgs(args, "DK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.getAggregateRank(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getAggregateRank", args);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getN(t_RandomPercentile *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_RandomPercentile_getQuantileRank(t_RandomPercentile *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.getQuantileRank(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getQuantileRank", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getRank(t_RandomPercentile *self, PyObject *arg)
          {
            jdouble a0;
            jdouble result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.getRank(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getRank", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_getResult(t_RandomPercentile *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                jdouble result;
                OBJ_CALL(result = self->object.getResult());
                return PyFloat_FromDouble((double) result);
              }
              break;
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.getResult(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_RandomPercentile_increment(t_RandomPercentile *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(RandomPercentile), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_RandomPercentile_maxValuesRetained(PyTypeObject *type, PyObject *arg)
          {
            jdouble a0;
            jlong result;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::stat::descriptive::rank::RandomPercentile::maxValuesRetained(a0));
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            PyErr_SetArgsError(type, "maxValuesRetained", arg);
            return NULL;
          }

          static PyObject *t_RandomPercentile_reduce(t_RandomPercentile *self, PyObject *args)
          {
            jdouble a0;
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble result;

            if (!parseArgs(args, "DK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.reduce(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "reduce", args);
            return NULL;
          }

          static PyObject *t_RandomPercentile_get__n(t_RandomPercentile *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_RandomPercentile_get__result(t_RandomPercentile *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/Units.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace definitions {

          ::java::lang::Class *Units::class$ = NULL;
          jmethodID *Units::mids$ = NULL;
          bool Units::live$ = false;
          ::org::orekit::utils::units::Unit *Units::DEG_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::DEG_PER_S_1_2 = NULL;
          ::org::orekit::utils::units::Unit *Units::DEG_PER_S_3_2 = NULL;
          ::org::orekit::utils::units::Unit *Units::HECTO_PASCAL = NULL;
          ::org::orekit::utils::units::Unit *Units::HZ_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::KG_M2 = NULL;
          ::org::orekit::utils::units::Unit *Units::KM2 = NULL;
          ::org::orekit::utils::units::Unit *Units::KM2_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::KM2_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::KM3_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::KM_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::KM_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_KG = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_S3 = NULL;
          ::org::orekit::utils::units::Unit *Units::M2_PER_S4 = NULL;
          ::org::orekit::utils::units::Unit *Units::M3_PER_KG = NULL;
          ::org::orekit::utils::units::Unit *Units::M3_PER_KGS = NULL;
          ::org::orekit::utils::units::Unit *Units::M3_PER_KGS2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M4 = NULL;
          ::org::orekit::utils::units::Unit *Units::M4_PER_KG = NULL;
          ::org::orekit::utils::units::Unit *Units::M4_PER_KG2 = NULL;
          ::org::orekit::utils::units::Unit *Units::M_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::M_PER_S2 = NULL;
          ::org::orekit::utils::units::Unit *Units::NANO_TESLA = NULL;
          ::org::orekit::utils::units::Unit *Units::NB_PER_Y = NULL;
          ::org::orekit::utils::units::Unit *Units::N_M = NULL;
          ::org::orekit::utils::units::Unit *Units::N_M_S = NULL;
          ::org::orekit::utils::units::Unit *Units::ONE_PER_ER = NULL;
          ::org::orekit::utils::units::Unit *Units::ONE_PER_S = NULL;
          ::org::orekit::utils::units::Unit *Units::REV_PER_DAY = NULL;
          ::org::orekit::utils::units::Unit *Units::REV_PER_DAY2_SCALED = NULL;
          ::org::orekit::utils::units::Unit *Units::REV_PER_DAY3_SCALED = NULL;
          ::org::orekit::utils::units::Unit *Units::W_PER_KG = NULL;

          jclass Units::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/definitions/Units");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEG_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "DEG_PER_S", "Lorg/orekit/utils/units/Unit;"));
              DEG_PER_S_1_2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "DEG_PER_S_1_2", "Lorg/orekit/utils/units/Unit;"));
              DEG_PER_S_3_2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "DEG_PER_S_3_2", "Lorg/orekit/utils/units/Unit;"));
              HECTO_PASCAL = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "HECTO_PASCAL", "Lorg/orekit/utils/units/Unit;"));
              HZ_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "HZ_PER_S", "Lorg/orekit/utils/units/Unit;"));
              KG_M2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KG_M2", "Lorg/orekit/utils/units/Unit;"));
              KM2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM2", "Lorg/orekit/utils/units/Unit;"));
              KM2_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM2_PER_S", "Lorg/orekit/utils/units/Unit;"));
              KM2_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM2_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              KM3_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM3_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              KM_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM_PER_S", "Lorg/orekit/utils/units/Unit;"));
              KM_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "KM_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              M2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_KG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_KG", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_S", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_S3 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_S3", "Lorg/orekit/utils/units/Unit;"));
              M2_PER_S4 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M2_PER_S4", "Lorg/orekit/utils/units/Unit;"));
              M3_PER_KG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M3_PER_KG", "Lorg/orekit/utils/units/Unit;"));
              M3_PER_KGS = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M3_PER_KGS", "Lorg/orekit/utils/units/Unit;"));
              M3_PER_KGS2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M3_PER_KGS2", "Lorg/orekit/utils/units/Unit;"));
              M4 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M4", "Lorg/orekit/utils/units/Unit;"));
              M4_PER_KG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M4_PER_KG", "Lorg/orekit/utils/units/Unit;"));
              M4_PER_KG2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M4_PER_KG2", "Lorg/orekit/utils/units/Unit;"));
              M_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M_PER_S", "Lorg/orekit/utils/units/Unit;"));
              M_PER_S2 = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "M_PER_S2", "Lorg/orekit/utils/units/Unit;"));
              NANO_TESLA = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "NANO_TESLA", "Lorg/orekit/utils/units/Unit;"));
              NB_PER_Y = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "NB_PER_Y", "Lorg/orekit/utils/units/Unit;"));
              N_M = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "N_M", "Lorg/orekit/utils/units/Unit;"));
              N_M_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "N_M_S", "Lorg/orekit/utils/units/Unit;"));
              ONE_PER_ER = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "ONE_PER_ER", "Lorg/orekit/utils/units/Unit;"));
              ONE_PER_S = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "ONE_PER_S", "Lorg/orekit/utils/units/Unit;"));
              REV_PER_DAY = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "REV_PER_DAY", "Lorg/orekit/utils/units/Unit;"));
              REV_PER_DAY2_SCALED = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "REV_PER_DAY2_SCALED", "Lorg/orekit/utils/units/Unit;"));
              REV_PER_DAY3_SCALED = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "REV_PER_DAY3_SCALED", "Lorg/orekit/utils/units/Unit;"));
              W_PER_KG = new ::org::orekit::utils::units::Unit(env->getStaticObjectField(cls, "W_PER_KG", "Lorg/orekit/utils/units/Unit;"));
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
    namespace files {
      namespace ccsds {
        namespace definitions {
          static PyObject *t_Units_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Units_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_Units__methods_[] = {
            DECLARE_METHOD(t_Units, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Units, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Units)[] = {
            { Py_tp_methods, t_Units__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Units)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Units, t_Units, Units);

          void t_Units::install(PyObject *module)
          {
            installType(&PY_TYPE(Units), &PY_TYPE_DEF(Units), module, "Units", 0);
          }

          void t_Units::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "class_", make_descriptor(Units::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "wrapfn_", make_descriptor(t_Units::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "boxfn_", make_descriptor(boxObject));
            env->getClass(Units::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "DEG_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::DEG_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "DEG_PER_S_1_2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::DEG_PER_S_1_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "DEG_PER_S_3_2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::DEG_PER_S_3_2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "HECTO_PASCAL", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::HECTO_PASCAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "HZ_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::HZ_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KG_M2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KG_M2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM2_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM2_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM2_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM2_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM3_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM3_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "KM_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::KM_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_KG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_KG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_S3", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_S3)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M2_PER_S4", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M2_PER_S4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M3_PER_KG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M3_PER_KG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M3_PER_KGS", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M3_PER_KGS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M3_PER_KGS2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M3_PER_KGS2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M4", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M4)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M4_PER_KG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M4_PER_KG)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M4_PER_KG2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M4_PER_KG2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "M_PER_S2", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::M_PER_S2)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "NANO_TESLA", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::NANO_TESLA)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "NB_PER_Y", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::NB_PER_Y)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "N_M", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::N_M)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "N_M_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::N_M_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "ONE_PER_ER", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::ONE_PER_ER)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "ONE_PER_S", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::ONE_PER_S)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "REV_PER_DAY", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::REV_PER_DAY)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "REV_PER_DAY2_SCALED", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::REV_PER_DAY2_SCALED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "REV_PER_DAY3_SCALED", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::REV_PER_DAY3_SCALED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Units), "W_PER_KG", make_descriptor(::org::orekit::utils::units::t_Unit::wrap_Object(*Units::W_PER_KG)));
          }

          static PyObject *t_Units_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Units::initializeClass, 1)))
              return NULL;
            return t_Units::wrap_Object(Units(((t_Units *) arg)->object.this$));
          }
          static PyObject *t_Units_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Units::initializeClass, 0))
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
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader$LineParameters.h"
#include "java/text/ParseException.h"
#include "java/io/IOException.h"
#include "java/io/InputStream.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel.h"
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

            ::java::lang::Class *MarshallSolarActivityFutureEstimationLoader::class$ = NULL;
            jmethodID *MarshallSolarActivityFutureEstimationLoader::mids$ = NULL;
            bool MarshallSolarActivityFutureEstimationLoader::live$ = false;

            jclass MarshallSolarActivityFutureEstimationLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimationLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_edd21ff166ccb749] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;)V");
                mids$[mid_init$_5623a4dd4748fa7b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/data/MarshallSolarActivityFutureEstimation$StrengthLevel;Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDataSet_917725130bbb61f1] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_loadData_1815f85c118161ad] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            MarshallSolarActivityFutureEstimationLoader::MarshallSolarActivityFutureEstimationLoader(const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a0) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader(env->newObject(initializeClass, &mids$, mid_init$_edd21ff166ccb749, a0.this$)) {}

            MarshallSolarActivityFutureEstimationLoader::MarshallSolarActivityFutureEstimationLoader(const ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel & a0, const ::org::orekit::time::TimeScale & a1) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader(env->newObject(initializeClass, &mids$, mid_init$_5623a4dd4748fa7b, a0.this$, a1.this$)) {}

            ::java::util::SortedSet MarshallSolarActivityFutureEstimationLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_917725130bbb61f1]));
            }

            void MarshallSolarActivityFutureEstimationLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
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
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_of_(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args);
            static int t_MarshallSolarActivityFutureEstimationLoader_init_(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_getDataSet(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_loadData(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_get__dataSet(t_MarshallSolarActivityFutureEstimationLoader *self, void *data);
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_get__parameters_(t_MarshallSolarActivityFutureEstimationLoader *self, void *data);
            static PyGetSetDef t_MarshallSolarActivityFutureEstimationLoader__fields_[] = {
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader, dataSet),
              DECLARE_GET_FIELD(t_MarshallSolarActivityFutureEstimationLoader, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_MarshallSolarActivityFutureEstimationLoader__methods_[] = {
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, of_, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, getDataSet, METH_VARARGS),
              DECLARE_METHOD(t_MarshallSolarActivityFutureEstimationLoader, loadData, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(MarshallSolarActivityFutureEstimationLoader)[] = {
              { Py_tp_methods, t_MarshallSolarActivityFutureEstimationLoader__methods_ },
              { Py_tp_init, (void *) t_MarshallSolarActivityFutureEstimationLoader_init_ },
              { Py_tp_getset, t_MarshallSolarActivityFutureEstimationLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(MarshallSolarActivityFutureEstimationLoader)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader),
              NULL
            };

            DEFINE_TYPE(MarshallSolarActivityFutureEstimationLoader, t_MarshallSolarActivityFutureEstimationLoader, MarshallSolarActivityFutureEstimationLoader);
            PyObject *t_MarshallSolarActivityFutureEstimationLoader::wrap_Object(const MarshallSolarActivityFutureEstimationLoader& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimationLoader::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimationLoader *self = (t_MarshallSolarActivityFutureEstimationLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_MarshallSolarActivityFutureEstimationLoader::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_MarshallSolarActivityFutureEstimationLoader::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_MarshallSolarActivityFutureEstimationLoader *self = (t_MarshallSolarActivityFutureEstimationLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_MarshallSolarActivityFutureEstimationLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(MarshallSolarActivityFutureEstimationLoader), &PY_TYPE_DEF(MarshallSolarActivityFutureEstimationLoader), module, "MarshallSolarActivityFutureEstimationLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(MarshallSolarActivityFutureEstimationLoader$LineParameters)));
            }

            void t_MarshallSolarActivityFutureEstimationLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader), "class_", make_descriptor(MarshallSolarActivityFutureEstimationLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader), "wrapfn_", make_descriptor(t_MarshallSolarActivityFutureEstimationLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(MarshallSolarActivityFutureEstimationLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, MarshallSolarActivityFutureEstimationLoader::initializeClass, 1)))
                return NULL;
              return t_MarshallSolarActivityFutureEstimationLoader::wrap_Object(MarshallSolarActivityFutureEstimationLoader(((t_MarshallSolarActivityFutureEstimationLoader *) arg)->object.this$));
            }
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, MarshallSolarActivityFutureEstimationLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_of_(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_MarshallSolarActivityFutureEstimationLoader_init_(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 1:
                {
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a0((jobject) NULL);
                  PyTypeObject **p0;
                  MarshallSolarActivityFutureEstimationLoader object((jobject) NULL);

                  if (!parseArgs(args, "K", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, &a0, &p0, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimationLoader(a0));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
                    break;
                  }
                }
                goto err;
               case 2:
                {
                  ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel a0((jobject) NULL);
                  PyTypeObject **p0;
                  ::org::orekit::time::TimeScale a1((jobject) NULL);
                  MarshallSolarActivityFutureEstimationLoader object((jobject) NULL);

                  if (!parseArgs(args, "Kk", ::org::orekit::models::earth::atmosphere::data::MarshallSolarActivityFutureEstimation$StrengthLevel::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::org::orekit::models::earth::atmosphere::data::t_MarshallSolarActivityFutureEstimation$StrengthLevel::parameters_, &a1))
                  {
                    INT_CALL(object = MarshallSolarActivityFutureEstimationLoader(a0, a1));
                    self->object = object;
                    self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters);
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

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_getDataSet(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args)
            {
              ::java::util::SortedSet result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getDataSet());
                return ::java::util::t_SortedSet::wrap_Object(result, ::org::orekit::models::earth::atmosphere::data::PY_TYPE(MarshallSolarActivityFutureEstimationLoader$LineParameters));
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader), (PyObject *) self, "getDataSet", args, 2);
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_loadData(t_MarshallSolarActivityFutureEstimationLoader *self, PyObject *args)
            {
              ::java::io::InputStream a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.loadData(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(MarshallSolarActivityFutureEstimationLoader), (PyObject *) self, "loadData", args, 2);
            }
            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_get__parameters_(t_MarshallSolarActivityFutureEstimationLoader *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_MarshallSolarActivityFutureEstimationLoader_get__dataSet(t_MarshallSolarActivityFutureEstimationLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonFrames.h"
#include "org/orekit/frames/EOPHistory.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/FactoryManagedFrame.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/frames/Frames.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/VersionedITRF.h"
#include "org/orekit/frames/Predefined.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonFrames::class$ = NULL;
      jmethodID *PythonFrames::mids$ = NULL;
      bool PythonFrames::live$ = false;

      jclass PythonFrames::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonFrames");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_buildUncachedITRF_f52b182126778ef0] = env->getMethodID(cls, "buildUncachedITRF", "(Lorg/orekit/time/UT1Scale;)Lorg/orekit/frames/Frame;");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getCIRF_0567c110431f823b] = env->getMethodID(cls, "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEME2000_5337b4e40b3fd7b7] = env->getMethodID(cls, "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getEOPHistory_f7b9f8d7c24d861d] = env->getMethodID(cls, "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getEcliptic_18c303577f427d2c] = env->getMethodID(cls, "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;");
          mids$[mid_getFrame_a045cc44324e9b37] = env->getMethodID(cls, "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;");
          mids$[mid_getGCRF_b86f9f61d97a7244] = env->getMethodID(cls, "getGCRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getGTOD_af0cfaf732e2f76f] = env->getMethodID(cls, "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getGTOD_0567c110431f823b] = env->getMethodID(cls, "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getICRF_b86f9f61d97a7244] = env->getMethodID(cls, "getICRF", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getITRF_0567c110431f823b] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getITRF_ebe8ec05e13e16d0] = env->getMethodID(cls, "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;");
          mids$[mid_getITRFEquinox_0567c110431f823b] = env->getMethodID(cls, "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_ab9f051c99cfdab5] = env->getMethodID(cls, "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getMOD_af0cfaf732e2f76f] = env->getMethodID(cls, "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getPZ9011_0567c110431f823b] = env->getMethodID(cls, "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTEME_5337b4e40b3fd7b7] = env->getMethodID(cls, "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_ab9f051c99cfdab5] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTIRF_0567c110431f823b] = env->getMethodID(cls, "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_af0cfaf732e2f76f] = env->getMethodID(cls, "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getTOD_0567c110431f823b] = env->getMethodID(cls, "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_getVeis1950_5337b4e40b3fd7b7] = env->getMethodID(cls, "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFrames::PythonFrames() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonFrames::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonFrames::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonFrames::pythonExtension(jlong a0) const
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
    namespace frames {
      static PyObject *t_PythonFrames_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFrames_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonFrames_init_(t_PythonFrames *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFrames_finalize(t_PythonFrames *self);
      static PyObject *t_PythonFrames_pythonExtension(t_PythonFrames *self, PyObject *args);
      static jobject JNICALL t_PythonFrames_buildUncachedITRF0(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFrames_getCIRF1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getEME20002(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFrames_getEOPHistory3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getEcliptic4(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFrames_getFrame5(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFrames_getGCRF6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFrames_getGTOD7(JNIEnv *jenv, jobject jobj, jboolean a0);
      static jobject JNICALL t_PythonFrames_getGTOD8(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getICRF9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFrames_getITRF10(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getITRF11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2);
      static jobject JNICALL t_PythonFrames_getITRFEquinox12(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getMOD13(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFrames_getMOD14(JNIEnv *jenv, jobject jobj, jboolean a0);
      static jobject JNICALL t_PythonFrames_getPZ901115(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getTEME16(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFrames_getTIRF17(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonFrames_getTIRF18(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getTOD19(JNIEnv *jenv, jobject jobj, jboolean a0);
      static jobject JNICALL t_PythonFrames_getTOD20(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1);
      static jobject JNICALL t_PythonFrames_getVeis195021(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFrames_pythonDecRef22(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFrames_get__self(t_PythonFrames *self, void *data);
      static PyGetSetDef t_PythonFrames__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFrames, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFrames__methods_[] = {
        DECLARE_METHOD(t_PythonFrames, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFrames, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFrames, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFrames, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFrames)[] = {
        { Py_tp_methods, t_PythonFrames__methods_ },
        { Py_tp_init, (void *) t_PythonFrames_init_ },
        { Py_tp_getset, t_PythonFrames__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFrames)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFrames, t_PythonFrames, PythonFrames);

      void t_PythonFrames::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFrames), &PY_TYPE_DEF(PythonFrames), module, "PythonFrames", 1);
      }

      void t_PythonFrames::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFrames), "class_", make_descriptor(PythonFrames::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFrames), "wrapfn_", make_descriptor(t_PythonFrames::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFrames), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFrames::initializeClass);
        JNINativeMethod methods[] = {
          { "buildUncachedITRF", "(Lorg/orekit/time/UT1Scale;)Lorg/orekit/frames/Frame;", (void *) t_PythonFrames_buildUncachedITRF0 },
          { "getCIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getCIRF1 },
          { "getEME2000", "()Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getEME20002 },
          { "getEOPHistory", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/EOPHistory;", (void *) t_PythonFrames_getEOPHistory3 },
          { "getEcliptic", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/Frame;", (void *) t_PythonFrames_getEcliptic4 },
          { "getFrame", "(Lorg/orekit/frames/Predefined;)Lorg/orekit/frames/Frame;", (void *) t_PythonFrames_getFrame5 },
          { "getGCRF", "()Lorg/orekit/frames/Frame;", (void *) t_PythonFrames_getGCRF6 },
          { "getGTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getGTOD7 },
          { "getGTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getGTOD8 },
          { "getICRF", "()Lorg/orekit/frames/Frame;", (void *) t_PythonFrames_getICRF9 },
          { "getITRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getITRF10 },
          { "getITRF", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/VersionedITRF;", (void *) t_PythonFrames_getITRF11 },
          { "getITRFEquinox", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getITRFEquinox12 },
          { "getMOD", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getMOD13 },
          { "getMOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getMOD14 },
          { "getPZ9011", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getPZ901115 },
          { "getTEME", "()Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getTEME16 },
          { "getTIRF", "(Lorg/orekit/utils/IERSConventions;)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getTIRF17 },
          { "getTIRF", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getTIRF18 },
          { "getTOD", "(Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getTOD19 },
          { "getTOD", "(Lorg/orekit/utils/IERSConventions;Z)Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getTOD20 },
          { "getVeis1950", "()Lorg/orekit/frames/FactoryManagedFrame;", (void *) t_PythonFrames_getVeis195021 },
          { "pythonDecRef", "()V", (void *) t_PythonFrames_pythonDecRef22 },
        };
        env->registerNatives(cls, methods, 23);
      }

      static PyObject *t_PythonFrames_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFrames::initializeClass, 1)))
          return NULL;
        return t_PythonFrames::wrap_Object(PythonFrames(((t_PythonFrames *) arg)->object.this$));
      }
      static PyObject *t_PythonFrames_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFrames::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonFrames_init_(t_PythonFrames *self, PyObject *args, PyObject *kwds)
      {
        PythonFrames object((jobject) NULL);

        INT_CALL(object = PythonFrames());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFrames_finalize(t_PythonFrames *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFrames_pythonExtension(t_PythonFrames *self, PyObject *args)
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

      static jobject JNICALL t_PythonFrames_buildUncachedITRF0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_UT1Scale::wrap_Object(::org::orekit::time::UT1Scale(a0));
        PyObject *result = PyObject_CallMethod(obj, "buildUncachedITRF", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("buildUncachedITRF", result);
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

      static jobject JNICALL t_PythonFrames_getCIRF1(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getCIRF", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getCIRF", result);
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

      static jobject JNICALL t_PythonFrames_getEME20002(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEME2000", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getEME2000", result);
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

      static jobject JNICALL t_PythonFrames_getEOPHistory3(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getEOPHistory", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::EOPHistory::initializeClass, &value))
        {
          throwTypeError("getEOPHistory", result);
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

      static jobject JNICALL t_PythonFrames_getEcliptic4(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *result = PyObject_CallMethod(obj, "getEcliptic", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getEcliptic", result);
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

      static jobject JNICALL t_PythonFrames_getFrame5(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::frames::t_Predefined::wrap_Object(::org::orekit::frames::Predefined(a0));
        PyObject *result = PyObject_CallMethod(obj, "getFrame", "O", o0);
        Py_DECREF(o0);
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

      static jobject JNICALL t_PythonFrames_getGCRF6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGCRF", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getGCRF", result);
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

      static jobject JNICALL t_PythonFrames_getGTOD7(JNIEnv *jenv, jobject jobj, jboolean a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = (a0 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getGTOD", "O", o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getGTOD", result);
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

      static jobject JNICALL t_PythonFrames_getGTOD8(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getGTOD", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getGTOD", result);
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

      static jobject JNICALL t_PythonFrames_getICRF9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getICRF", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getICRF", result);
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

      static jobject JNICALL t_PythonFrames_getITRF10(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getITRF", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getITRF", result);
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

      static jobject JNICALL t_PythonFrames_getITRF11(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jboolean a2)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::VersionedITRF value((jobject) NULL);
        PyObject *o0 = ::org::orekit::frames::t_ITRFVersion::wrap_Object(::org::orekit::frames::ITRFVersion(a0));
        PyObject *o1 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a1));
        PyObject *o2 = (a2 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getITRF", "OOO", o0, o1, o2);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::VersionedITRF::initializeClass, &value))
        {
          throwTypeError("getITRF", result);
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

      static jobject JNICALL t_PythonFrames_getITRFEquinox12(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getITRFEquinox", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getITRFEquinox", result);
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

      static jobject JNICALL t_PythonFrames_getMOD13(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *result = PyObject_CallMethod(obj, "getMOD", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getMOD", result);
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

      static jobject JNICALL t_PythonFrames_getMOD14(JNIEnv *jenv, jobject jobj, jboolean a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = (a0 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getMOD", "O", o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getMOD", result);
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

      static jobject JNICALL t_PythonFrames_getPZ901115(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getPZ9011", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getPZ9011", result);
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

      static jobject JNICALL t_PythonFrames_getTEME16(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTEME", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getTEME", result);
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

      static jobject JNICALL t_PythonFrames_getTIRF17(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *result = PyObject_CallMethod(obj, "getTIRF", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getTIRF", result);
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

      static jobject JNICALL t_PythonFrames_getTIRF18(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getTIRF", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getTIRF", result);
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

      static jobject JNICALL t_PythonFrames_getTOD19(JNIEnv *jenv, jobject jobj, jboolean a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = (a0 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getTOD", "O", o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getTOD", result);
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

      static jobject JNICALL t_PythonFrames_getTOD20(JNIEnv *jenv, jobject jobj, jobject a0, jboolean a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *o0 = ::org::orekit::utils::t_IERSConventions::wrap_Object(::org::orekit::utils::IERSConventions(a0));
        PyObject *o1 = (a1 ? Py_True : Py_False);
        PyObject *result = PyObject_CallMethod(obj, "getTOD", "OO", o0, o1);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getTOD", result);
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

      static jobject JNICALL t_PythonFrames_getVeis195021(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::FactoryManagedFrame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getVeis1950", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::FactoryManagedFrame::initializeClass, &value))
        {
          throwTypeError("getVeis1950", result);
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

      static void JNICALL t_PythonFrames_pythonDecRef22(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFrames::mids$[PythonFrames::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFrames_get__self(t_PythonFrames *self, void *data)
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
#include "org/orekit/propagation/PythonEphemerisGenerator.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonEphemerisGenerator::class$ = NULL;
      jmethodID *PythonEphemerisGenerator::mids$ = NULL;
      bool PythonEphemerisGenerator::live$ = false;

      jclass PythonEphemerisGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonEphemerisGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getGeneratedEphemeris_08b52de56e2dfa9a] = env->getMethodID(cls, "getGeneratedEphemeris", "()Lorg/orekit/propagation/BoundedPropagator;");
          mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonEphemerisGenerator::PythonEphemerisGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      void PythonEphemerisGenerator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
      }

      jlong PythonEphemerisGenerator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
      }

      void PythonEphemerisGenerator::pythonExtension(jlong a0) const
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
      static PyObject *t_PythonEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonEphemerisGenerator_init_(t_PythonEphemerisGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonEphemerisGenerator_finalize(t_PythonEphemerisGenerator *self);
      static PyObject *t_PythonEphemerisGenerator_pythonExtension(t_PythonEphemerisGenerator *self, PyObject *args);
      static jobject JNICALL t_PythonEphemerisGenerator_getGeneratedEphemeris0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonEphemerisGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonEphemerisGenerator_get__self(t_PythonEphemerisGenerator *self, void *data);
      static PyGetSetDef t_PythonEphemerisGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonEphemerisGenerator, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonEphemerisGenerator__methods_[] = {
        DECLARE_METHOD(t_PythonEphemerisGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEphemerisGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonEphemerisGenerator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonEphemerisGenerator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonEphemerisGenerator)[] = {
        { Py_tp_methods, t_PythonEphemerisGenerator__methods_ },
        { Py_tp_init, (void *) t_PythonEphemerisGenerator_init_ },
        { Py_tp_getset, t_PythonEphemerisGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonEphemerisGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonEphemerisGenerator, t_PythonEphemerisGenerator, PythonEphemerisGenerator);

      void t_PythonEphemerisGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonEphemerisGenerator), &PY_TYPE_DEF(PythonEphemerisGenerator), module, "PythonEphemerisGenerator", 1);
      }

      void t_PythonEphemerisGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisGenerator), "class_", make_descriptor(PythonEphemerisGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisGenerator), "wrapfn_", make_descriptor(t_PythonEphemerisGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEphemerisGenerator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonEphemerisGenerator::initializeClass);
        JNINativeMethod methods[] = {
          { "getGeneratedEphemeris", "()Lorg/orekit/propagation/BoundedPropagator;", (void *) t_PythonEphemerisGenerator_getGeneratedEphemeris0 },
          { "pythonDecRef", "()V", (void *) t_PythonEphemerisGenerator_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonEphemerisGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonEphemerisGenerator::initializeClass, 1)))
          return NULL;
        return t_PythonEphemerisGenerator::wrap_Object(PythonEphemerisGenerator(((t_PythonEphemerisGenerator *) arg)->object.this$));
      }
      static PyObject *t_PythonEphemerisGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonEphemerisGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonEphemerisGenerator_init_(t_PythonEphemerisGenerator *self, PyObject *args, PyObject *kwds)
      {
        PythonEphemerisGenerator object((jobject) NULL);

        INT_CALL(object = PythonEphemerisGenerator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonEphemerisGenerator_finalize(t_PythonEphemerisGenerator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonEphemerisGenerator_pythonExtension(t_PythonEphemerisGenerator *self, PyObject *args)
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

      static jobject JNICALL t_PythonEphemerisGenerator_getGeneratedEphemeris0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisGenerator::mids$[PythonEphemerisGenerator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::BoundedPropagator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getGeneratedEphemeris", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::BoundedPropagator::initializeClass, &value))
        {
          throwTypeError("getGeneratedEphemeris", result);
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

      static void JNICALL t_PythonEphemerisGenerator_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonEphemerisGenerator::mids$[PythonEphemerisGenerator::mid_pythonExtension_492808a339bfa35f]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonEphemerisGenerator::mids$[PythonEphemerisGenerator::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonEphemerisGenerator_get__self(t_PythonEphemerisGenerator *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/tdm/TdmDataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/tdm/ObservationsBlock.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/tdm/TdmDataKey.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *TdmDataKey::class$ = NULL;
            jmethodID *TdmDataKey::mids$ = NULL;
            bool TdmDataKey::live$ = false;
            TdmDataKey *TdmDataKey::COMMENT = NULL;
            TdmDataKey *TdmDataKey::EPOCH = NULL;
            TdmDataKey *TdmDataKey::observation = NULL;

            jclass TdmDataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/TdmDataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_d71bbb8f25abd65b] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/tdm/ObservationsBlock;)Z");
                mids$[mid_valueOf_8e77ee4d72a34d2f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;");
                mids$[mid_values_750f4b17f840aeb2] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new TdmDataKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;"));
                EPOCH = new TdmDataKey(env->getStaticObjectField(cls, "EPOCH", "Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;"));
                observation = new TdmDataKey(env->getStaticObjectField(cls, "observation", "Lorg/orekit/files/ccsds/ndm/tdm/TdmDataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean TdmDataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_d71bbb8f25abd65b], a0.this$, a1.this$, a2.this$);
            }

            TdmDataKey TdmDataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return TdmDataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_8e77ee4d72a34d2f], a0.this$));
            }

            JArray< TdmDataKey > TdmDataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< TdmDataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_750f4b17f840aeb2]));
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
          namespace tdm {
            static PyObject *t_TdmDataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmDataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_TdmDataKey_of_(t_TdmDataKey *self, PyObject *args);
            static PyObject *t_TdmDataKey_process(t_TdmDataKey *self, PyObject *args);
            static PyObject *t_TdmDataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_TdmDataKey_values(PyTypeObject *type);
            static PyObject *t_TdmDataKey_get__parameters_(t_TdmDataKey *self, void *data);
            static PyGetSetDef t_TdmDataKey__fields_[] = {
              DECLARE_GET_FIELD(t_TdmDataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_TdmDataKey__methods_[] = {
              DECLARE_METHOD(t_TdmDataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmDataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_TdmDataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_TdmDataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_TdmDataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_TdmDataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(TdmDataKey)[] = {
              { Py_tp_methods, t_TdmDataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_TdmDataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(TdmDataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(TdmDataKey, t_TdmDataKey, TdmDataKey);
            PyObject *t_TdmDataKey::wrap_Object(const TdmDataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TdmDataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmDataKey *self = (t_TdmDataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_TdmDataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_TdmDataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_TdmDataKey *self = (t_TdmDataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_TdmDataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(TdmDataKey), &PY_TYPE_DEF(TdmDataKey), module, "TdmDataKey", 0);
            }

            void t_TdmDataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "class_", make_descriptor(TdmDataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "wrapfn_", make_descriptor(t_TdmDataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(TdmDataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "COMMENT", make_descriptor(t_TdmDataKey::wrap_Object(*TdmDataKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "EPOCH", make_descriptor(t_TdmDataKey::wrap_Object(*TdmDataKey::EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(TdmDataKey), "observation", make_descriptor(t_TdmDataKey::wrap_Object(*TdmDataKey::observation)));
            }

            static PyObject *t_TdmDataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, TdmDataKey::initializeClass, 1)))
                return NULL;
              return t_TdmDataKey::wrap_Object(TdmDataKey(((t_TdmDataKey *) arg)->object.this$));
            }
            static PyObject *t_TdmDataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, TdmDataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_TdmDataKey_of_(t_TdmDataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_TdmDataKey_process(t_TdmDataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::tdm::ObservationsBlock::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_TdmDataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              TdmDataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TdmDataKey::valueOf(a0));
                return t_TdmDataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_TdmDataKey_values(PyTypeObject *type)
            {
              JArray< TdmDataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::TdmDataKey::values());
              return JArray<jobject>(result.this$).wrap(t_TdmDataKey::wrap_jobject);
            }
            static PyObject *t_TdmDataKey_get__parameters_(t_TdmDataKey *self, void *data)
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
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Alfriend1999::class$ = NULL;
              jmethodID *Alfriend1999::mids$ = NULL;
              bool Alfriend1999::live$ = false;

              jclass Alfriend1999::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfriend1999");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getType_5d7ecb27bb5e3bc3] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_b108b35ef48e27bd] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Alfriend1999::Alfriend1999() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Alfriend1999::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_5d7ecb27bb5e3bc3]));
              }

              jboolean Alfriend1999::isAMaximumProbabilityOfCollisionMethod() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isAMaximumProbabilityOfCollisionMethod_b108b35ef48e27bd]);
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
              static PyObject *t_Alfriend1999_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Alfriend1999_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Alfriend1999_init_(t_Alfriend1999 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Alfriend1999_getType(t_Alfriend1999 *self, PyObject *args);
              static PyObject *t_Alfriend1999_isAMaximumProbabilityOfCollisionMethod(t_Alfriend1999 *self, PyObject *args);
              static PyObject *t_Alfriend1999_get__aMaximumProbabilityOfCollisionMethod(t_Alfriend1999 *self, void *data);
              static PyObject *t_Alfriend1999_get__type(t_Alfriend1999 *self, void *data);
              static PyGetSetDef t_Alfriend1999__fields_[] = {
                DECLARE_GET_FIELD(t_Alfriend1999, aMaximumProbabilityOfCollisionMethod),
                DECLARE_GET_FIELD(t_Alfriend1999, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Alfriend1999__methods_[] = {
                DECLARE_METHOD(t_Alfriend1999, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfriend1999, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfriend1999, getType, METH_VARARGS),
                DECLARE_METHOD(t_Alfriend1999, isAMaximumProbabilityOfCollisionMethod, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Alfriend1999)[] = {
                { Py_tp_methods, t_Alfriend1999__methods_ },
                { Py_tp_init, (void *) t_Alfriend1999_init_ },
                { Py_tp_getset, t_Alfriend1999__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Alfriend1999)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractAlfriend1999),
                NULL
              };

              DEFINE_TYPE(Alfriend1999, t_Alfriend1999, Alfriend1999);

              void t_Alfriend1999::install(PyObject *module)
              {
                installType(&PY_TYPE(Alfriend1999), &PY_TYPE_DEF(Alfriend1999), module, "Alfriend1999", 0);
              }

              void t_Alfriend1999::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999), "class_", make_descriptor(Alfriend1999::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999), "wrapfn_", make_descriptor(t_Alfriend1999::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfriend1999), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Alfriend1999_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Alfriend1999::initializeClass, 1)))
                  return NULL;
                return t_Alfriend1999::wrap_Object(Alfriend1999(((t_Alfriend1999 *) arg)->object.this$));
              }
              static PyObject *t_Alfriend1999_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Alfriend1999::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Alfriend1999_init_(t_Alfriend1999 *self, PyObject *args, PyObject *kwds)
              {
                Alfriend1999 object((jobject) NULL);

                INT_CALL(object = Alfriend1999());
                self->object = object;

                return 0;
              }

              static PyObject *t_Alfriend1999_getType(t_Alfriend1999 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Alfriend1999), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Alfriend1999_isAMaximumProbabilityOfCollisionMethod(t_Alfriend1999 *self, PyObject *args)
              {
                jboolean result;

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.isAMaximumProbabilityOfCollisionMethod());
                  Py_RETURN_BOOL(result);
                }

                return callSuper(PY_TYPE(Alfriend1999), (PyObject *) self, "isAMaximumProbabilityOfCollisionMethod", args, 2);
              }

              static PyObject *t_Alfriend1999_get__aMaximumProbabilityOfCollisionMethod(t_Alfriend1999 *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_Alfriend1999_get__type(t_Alfriend1999 *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$IntegerArrayConsumer::class$ = NULL;
            jmethodID *ParseToken$IntegerArrayConsumer::mids$ = NULL;
            bool ParseToken$IntegerArrayConsumer::live$ = false;

            jclass ParseToken$IntegerArrayConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$IntegerArrayConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_d147d7ce001e2d45] = env->getMethodID(cls, "accept", "([I)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$IntegerArrayConsumer::accept(const JArray< jint > & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_d147d7ce001e2d45], a0.this$);
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
            static PyObject *t_ParseToken$IntegerArrayConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IntegerArrayConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$IntegerArrayConsumer_accept(t_ParseToken$IntegerArrayConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$IntegerArrayConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$IntegerArrayConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IntegerArrayConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$IntegerArrayConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$IntegerArrayConsumer)[] = {
              { Py_tp_methods, t_ParseToken$IntegerArrayConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$IntegerArrayConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$IntegerArrayConsumer, t_ParseToken$IntegerArrayConsumer, ParseToken$IntegerArrayConsumer);

            void t_ParseToken$IntegerArrayConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$IntegerArrayConsumer), &PY_TYPE_DEF(ParseToken$IntegerArrayConsumer), module, "ParseToken$IntegerArrayConsumer", 0);
            }

            void t_ParseToken$IntegerArrayConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntegerArrayConsumer), "class_", make_descriptor(ParseToken$IntegerArrayConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntegerArrayConsumer), "wrapfn_", make_descriptor(t_ParseToken$IntegerArrayConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$IntegerArrayConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$IntegerArrayConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$IntegerArrayConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$IntegerArrayConsumer::wrap_Object(ParseToken$IntegerArrayConsumer(((t_ParseToken$IntegerArrayConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$IntegerArrayConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$IntegerArrayConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$IntegerArrayConsumer_accept(t_ParseToken$IntegerArrayConsumer *self, PyObject *arg)
            {
              JArray< jint > a0((jobject) NULL);

              if (!parseArg(arg, "[I", &a0))
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
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *OrekitEphemerisFile$OrekitSatelliteEphemeris::class$ = NULL;
        jmethodID *OrekitEphemerisFile$OrekitSatelliteEphemeris::mids$ = NULL;
        bool OrekitEphemerisFile$OrekitSatelliteEphemeris::live$ = false;
        jint OrekitEphemerisFile$OrekitSatelliteEphemeris::DEFAULT_INTERPOLATION_SIZE = (jint) 0;

        jclass OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/OrekitEphemerisFile$OrekitSatelliteEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d0bc48d5b00dc40c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_addNewSegment_ffb7d7dc5ac6f8f1] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment;");
            mids$[mid_addNewSegment_a13ddf4dbc57f848] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;I)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment;");
            mids$[mid_addNewSegment_3b01723d1f6d701d] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;Lorg/orekit/bodies/CelestialBody;I)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment;");
            mids$[mid_addNewSegment_c352de3deb2c5ebb] = env->getMethodID(cls, "addNewSegment", "(Ljava/util/List;Lorg/orekit/bodies/CelestialBody;ILorg/orekit/time/TimeScale;)Lorg/orekit/files/general/OrekitEphemerisFile$OrekitEphemerisSegment;");
            mids$[mid_getId_11b109bd155ca898] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getSegments_2afa36052df4765d] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_85703d13e302437e] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_INTERPOLATION_SIZE = env->getStaticIntField(cls, "DEFAULT_INTERPOLATION_SIZE");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OrekitEphemerisFile$OrekitSatelliteEphemeris::OrekitEphemerisFile$OrekitSatelliteEphemeris(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d0bc48d5b00dc40c, a0.this$)) {}

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment OrekitEphemerisFile$OrekitSatelliteEphemeris::addNewSegment(const ::java::util::List & a0) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_ffb7d7dc5ac6f8f1], a0.this$));
        }

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment OrekitEphemerisFile$OrekitSatelliteEphemeris::addNewSegment(const ::java::util::List & a0, jint a1) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_a13ddf4dbc57f848], a0.this$, a1));
        }

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment OrekitEphemerisFile$OrekitSatelliteEphemeris::addNewSegment(const ::java::util::List & a0, const ::org::orekit::bodies::CelestialBody & a1, jint a2) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_3b01723d1f6d701d], a0.this$, a1.this$, a2));
        }

        ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment OrekitEphemerisFile$OrekitSatelliteEphemeris::addNewSegment(const ::java::util::List & a0, const ::org::orekit::bodies::CelestialBody & a1, jint a2, const ::org::orekit::time::TimeScale & a3) const
        {
          return ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment(env->callObjectMethod(this$, mids$[mid_addNewSegment_c352de3deb2c5ebb], a0.this$, a1.this$, a2, a3.this$));
        }

        ::java::lang::String OrekitEphemerisFile$OrekitSatelliteEphemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_11b109bd155ca898]));
        }

        jdouble OrekitEphemerisFile$OrekitSatelliteEphemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
        }

        ::java::util::List OrekitEphemerisFile$OrekitSatelliteEphemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_2afa36052df4765d]));
        }

        ::org::orekit::time::AbsoluteDate OrekitEphemerisFile$OrekitSatelliteEphemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
        }

        ::org::orekit::time::AbsoluteDate OrekitEphemerisFile$OrekitSatelliteEphemeris::getStop() const
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
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OrekitEphemerisFile$OrekitSatelliteEphemeris_init_(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_addNewSegment(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, PyObject *args);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getId(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getMu(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getSegments(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getStart(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getStop(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__id(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__mu(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__segments(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__start(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__stop(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data);
        static PyGetSetDef t_OrekitEphemerisFile$OrekitSatelliteEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, id),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, mu),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, segments),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, start),
          DECLARE_GET_FIELD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_OrekitEphemerisFile$OrekitSatelliteEphemeris__methods_[] = {
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, addNewSegment, METH_VARARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_OrekitEphemerisFile$OrekitSatelliteEphemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitEphemerisFile$OrekitSatelliteEphemeris)[] = {
          { Py_tp_methods, t_OrekitEphemerisFile$OrekitSatelliteEphemeris__methods_ },
          { Py_tp_init, (void *) t_OrekitEphemerisFile$OrekitSatelliteEphemeris_init_ },
          { Py_tp_getset, t_OrekitEphemerisFile$OrekitSatelliteEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitEphemerisFile$OrekitSatelliteEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris, t_OrekitEphemerisFile$OrekitSatelliteEphemeris, OrekitEphemerisFile$OrekitSatelliteEphemeris);

        void t_OrekitEphemerisFile$OrekitSatelliteEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), &PY_TYPE_DEF(OrekitEphemerisFile$OrekitSatelliteEphemeris), module, "OrekitEphemerisFile$OrekitSatelliteEphemeris", 0);
        }

        void t_OrekitEphemerisFile$OrekitSatelliteEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), "class_", make_descriptor(OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), "wrapfn_", make_descriptor(t_OrekitEphemerisFile$OrekitSatelliteEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
          env->getClass(OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitEphemerisFile$OrekitSatelliteEphemeris), "DEFAULT_INTERPOLATION_SIZE", make_descriptor(OrekitEphemerisFile$OrekitSatelliteEphemeris::DEFAULT_INTERPOLATION_SIZE));
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass, 1)))
            return NULL;
          return t_OrekitEphemerisFile$OrekitSatelliteEphemeris::wrap_Object(OrekitEphemerisFile$OrekitSatelliteEphemeris(((t_OrekitEphemerisFile$OrekitSatelliteEphemeris *) arg)->object.this$));
        }
        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitEphemerisFile$OrekitSatelliteEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OrekitEphemerisFile$OrekitSatelliteEphemeris_init_(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          OrekitEphemerisFile$OrekitSatelliteEphemeris object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = OrekitEphemerisFile$OrekitSatelliteEphemeris(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_addNewSegment(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment result((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                OBJ_CALL(result = self->object.addNewSegment(a0));
                return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment result((jobject) NULL);

              if (!parseArgs(args, "KI", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
              {
                OBJ_CALL(result = self->object.addNewSegment(a0, a1));
                return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              jint a2;
              ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment result((jobject) NULL);

              if (!parseArgs(args, "KkI", ::java::util::List::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2))
              {
                OBJ_CALL(result = self->object.addNewSegment(a0, a1, a2));
                return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
              jint a2;
              ::org::orekit::time::TimeScale a3((jobject) NULL);
              ::org::orekit::files::general::OrekitEphemerisFile$OrekitEphemerisSegment result((jobject) NULL);

              if (!parseArgs(args, "KkIk", ::java::util::List::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &a2, &a3))
              {
                OBJ_CALL(result = self->object.addNewSegment(a0, a1, a2, a3));
                return ::org::orekit::files::general::t_OrekitEphemerisFile$OrekitEphemerisSegment::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addNewSegment", args);
          return NULL;
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getId(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getMu(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getSegments(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::general::PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment));
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getStart(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_getStop(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__id(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__mu(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__segments(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__start(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_OrekitEphemerisFile$OrekitSatelliteEphemeris_get__stop(t_OrekitEphemerisFile$OrekitSatelliteEphemeris *self, void *data)
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
#include "org/orekit/bodies/CelestialBodyLoader.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *CelestialBodyLoader::class$ = NULL;
      jmethodID *CelestialBodyLoader::mids$ = NULL;
      bool CelestialBodyLoader::live$ = false;

      jclass CelestialBodyLoader::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/CelestialBodyLoader");

          mids$ = new jmethodID[max_mid];
          mids$[mid_loadCelestialBody_68e48076ef831536] = env->getMethodID(cls, "loadCelestialBody", "(Ljava/lang/String;)Lorg/orekit/bodies/CelestialBody;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::bodies::CelestialBody CelestialBodyLoader::loadCelestialBody(const ::java::lang::String & a0) const
      {
        return ::org::orekit::bodies::CelestialBody(env->callObjectMethod(this$, mids$[mid_loadCelestialBody_68e48076ef831536], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace bodies {
      static PyObject *t_CelestialBodyLoader_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyLoader_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CelestialBodyLoader_loadCelestialBody(t_CelestialBodyLoader *self, PyObject *arg);

      static PyMethodDef t_CelestialBodyLoader__methods_[] = {
        DECLARE_METHOD(t_CelestialBodyLoader, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyLoader, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CelestialBodyLoader, loadCelestialBody, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CelestialBodyLoader)[] = {
        { Py_tp_methods, t_CelestialBodyLoader__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CelestialBodyLoader)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CelestialBodyLoader, t_CelestialBodyLoader, CelestialBodyLoader);

      void t_CelestialBodyLoader::install(PyObject *module)
      {
        installType(&PY_TYPE(CelestialBodyLoader), &PY_TYPE_DEF(CelestialBodyLoader), module, "CelestialBodyLoader", 0);
      }

      void t_CelestialBodyLoader::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyLoader), "class_", make_descriptor(CelestialBodyLoader::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyLoader), "wrapfn_", make_descriptor(t_CelestialBodyLoader::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CelestialBodyLoader), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CelestialBodyLoader_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CelestialBodyLoader::initializeClass, 1)))
          return NULL;
        return t_CelestialBodyLoader::wrap_Object(CelestialBodyLoader(((t_CelestialBodyLoader *) arg)->object.this$));
      }
      static PyObject *t_CelestialBodyLoader_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CelestialBodyLoader::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CelestialBodyLoader_loadCelestialBody(t_CelestialBodyLoader *self, PyObject *arg)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody result((jobject) NULL);

        if (!parseArg(arg, "s", &a0))
        {
          OBJ_CALL(result = self->object.loadCelestialBody(a0));
          return ::org::orekit::bodies::t_CelestialBody::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "loadCelestialBody", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/PropulsionModel.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/propagation/events/EventDetectorsProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *PropulsionModel::class$ = NULL;
          jmethodID *PropulsionModel::mids$ = NULL;
          bool PropulsionModel::live$ = false;

          jclass PropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/PropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAcceleration_19f36cd1a0a8b9bf] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/FieldAttitude;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getAcceleration_a6c71e83efaf48d0] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/Attitude;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getControl3DVectorCostType_67739b20d9566a8c] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getEventDetectors_20f6d2b462aaef4b] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_361313cd1a9c693a] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getMassDerivatives_0b7191d207b9680f] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getMassDerivatives_8bdf60d5551eceaf] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_init_8e8de2be1664674a] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_init_826b4eda94da4e78] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D PropulsionModel::getAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_19f36cd1a0a8b9bf], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D PropulsionModel::getAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::Attitude & a1, const JArray< jdouble > & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_a6c71e83efaf48d0], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::forces::maneuvers::Control3DVectorCostType PropulsionModel::getControl3DVectorCostType() const
          {
            return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_67739b20d9566a8c]));
          }

          ::java::util::stream::Stream PropulsionModel::getEventDetectors() const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_20f6d2b462aaef4b]));
          }

          ::java::util::stream::Stream PropulsionModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_361313cd1a9c693a], a0.this$));
          }

          jdouble PropulsionModel::getMassDerivatives(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMassDerivatives_0b7191d207b9680f], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement PropulsionModel::getMassDerivatives(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMassDerivatives_8bdf60d5551eceaf], a0.this$, a1.this$));
          }

          ::java::lang::String PropulsionModel::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
          }

          void PropulsionModel::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_8e8de2be1664674a], a0.this$, a1.this$);
          }

          void PropulsionModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_826b4eda94da4e78], a0.this$, a1.this$);
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
          static PyObject *t_PropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PropulsionModel_getAcceleration(t_PropulsionModel *self, PyObject *args);
          static PyObject *t_PropulsionModel_getControl3DVectorCostType(t_PropulsionModel *self);
          static PyObject *t_PropulsionModel_getEventDetectors(t_PropulsionModel *self);
          static PyObject *t_PropulsionModel_getFieldEventDetectors(t_PropulsionModel *self, PyObject *arg);
          static PyObject *t_PropulsionModel_getMassDerivatives(t_PropulsionModel *self, PyObject *args);
          static PyObject *t_PropulsionModel_getName(t_PropulsionModel *self);
          static PyObject *t_PropulsionModel_init(t_PropulsionModel *self, PyObject *args);
          static PyObject *t_PropulsionModel_get__control3DVectorCostType(t_PropulsionModel *self, void *data);
          static PyObject *t_PropulsionModel_get__eventDetectors(t_PropulsionModel *self, void *data);
          static PyObject *t_PropulsionModel_get__name(t_PropulsionModel *self, void *data);
          static PyGetSetDef t_PropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_PropulsionModel, control3DVectorCostType),
            DECLARE_GET_FIELD(t_PropulsionModel, eventDetectors),
            DECLARE_GET_FIELD(t_PropulsionModel, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PropulsionModel__methods_[] = {
            DECLARE_METHOD(t_PropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PropulsionModel, getAcceleration, METH_VARARGS),
            DECLARE_METHOD(t_PropulsionModel, getControl3DVectorCostType, METH_NOARGS),
            DECLARE_METHOD(t_PropulsionModel, getEventDetectors, METH_NOARGS),
            DECLARE_METHOD(t_PropulsionModel, getFieldEventDetectors, METH_O),
            DECLARE_METHOD(t_PropulsionModel, getMassDerivatives, METH_VARARGS),
            DECLARE_METHOD(t_PropulsionModel, getName, METH_NOARGS),
            DECLARE_METHOD(t_PropulsionModel, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PropulsionModel)[] = {
            { Py_tp_methods, t_PropulsionModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_PropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::utils::ParameterDriversProvider),
            NULL
          };

          DEFINE_TYPE(PropulsionModel, t_PropulsionModel, PropulsionModel);

          void t_PropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(PropulsionModel), &PY_TYPE_DEF(PropulsionModel), module, "PropulsionModel", 0);
          }

          void t_PropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PropulsionModel), "class_", make_descriptor(PropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PropulsionModel), "wrapfn_", make_descriptor(t_PropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PropulsionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PropulsionModel::initializeClass, 1)))
              return NULL;
            return t_PropulsionModel::wrap_Object(PropulsionModel(((t_PropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_PropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PropulsionModel_getAcceleration(t_PropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::attitudes::Attitude a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getAcceleration(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getAcceleration(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getAcceleration", args);
            return NULL;
          }

          static PyObject *t_PropulsionModel_getControl3DVectorCostType(t_PropulsionModel *self)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
            OBJ_CALL(result = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
          }

          static PyObject *t_PropulsionModel_getEventDetectors(t_PropulsionModel *self)
          {
            ::java::util::stream::Stream result((jobject) NULL);
            OBJ_CALL(result = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          static PyObject *t_PropulsionModel_getFieldEventDetectors(t_PropulsionModel *self, PyObject *arg)
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::stream::Stream result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
            {
              OBJ_CALL(result = self->object.getFieldEventDetectors(a0));
              return ::java::util::stream::t_Stream::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getFieldEventDetectors", arg);
            return NULL;
          }

          static PyObject *t_PropulsionModel_getMassDerivatives(t_PropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getMassDerivatives(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getMassDerivatives(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getMassDerivatives", args);
            return NULL;
          }

          static PyObject *t_PropulsionModel_getName(t_PropulsionModel *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_PropulsionModel_init(t_PropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.init(a0, a1));
                  Py_RETURN_NONE;
                }
              }
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
              }
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_PropulsionModel_get__control3DVectorCostType(t_PropulsionModel *self, void *data)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            OBJ_CALL(value = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
          }

          static PyObject *t_PropulsionModel_get__eventDetectors(t_PropulsionModel *self, void *data)
          {
            ::java::util::stream::Stream value((jobject) NULL);
            OBJ_CALL(value = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(value);
          }

          static PyObject *t_PropulsionModel_get__name(t_PropulsionModel *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/adm/aem/AttitudeWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "java/io/IOException.h"
#include "org/orekit/files/general/AttitudeEphemerisFileWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/AttitudeEphemerisFile.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AttitudeWriter::class$ = NULL;
              jmethodID *AttitudeWriter::mids$ = NULL;
              bool AttitudeWriter::live$ = false;

              jclass AttitudeWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AttitudeWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_7ab38667c66f9189] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/aem/AemWriter;Lorg/orekit/files/ccsds/ndm/adm/AdmHeader;Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadata;Lorg/orekit/files/ccsds/utils/FileFormat;Ljava/lang/String;DI)V");
                  mids$[mid_write_9b09ecef0da8f461] = env->getMethodID(cls, "write", "(Ljava/lang/Appendable;Lorg/orekit/files/general/AttitudeEphemerisFile;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AttitudeWriter::AttitudeWriter(const ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter & a0, const ::org::orekit::files::ccsds::ndm::adm::AdmHeader & a1, const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata & a2, const ::org::orekit::files::ccsds::utils::FileFormat & a3, const ::java::lang::String & a4, jdouble a5, jint a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ab38667c66f9189, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6)) {}

              void AttitudeWriter::write(const ::java::lang::Appendable & a0, const ::org::orekit::files::general::AttitudeEphemerisFile & a1) const
              {
                env->callVoidMethod(this$, mids$[mid_write_9b09ecef0da8f461], a0.this$, a1.this$);
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
              static PyObject *t_AttitudeWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeWriter_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AttitudeWriter_init_(t_AttitudeWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AttitudeWriter_write(t_AttitudeWriter *self, PyObject *args);

              static PyMethodDef t_AttitudeWriter__methods_[] = {
                DECLARE_METHOD(t_AttitudeWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeWriter, write, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeWriter)[] = {
                { Py_tp_methods, t_AttitudeWriter__methods_ },
                { Py_tp_init, (void *) t_AttitudeWriter_init_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeWriter)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AttitudeWriter, t_AttitudeWriter, AttitudeWriter);

              void t_AttitudeWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeWriter), &PY_TYPE_DEF(AttitudeWriter), module, "AttitudeWriter", 0);
              }

              void t_AttitudeWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeWriter), "class_", make_descriptor(AttitudeWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeWriter), "wrapfn_", make_descriptor(t_AttitudeWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeWriter), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AttitudeWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeWriter::initializeClass, 1)))
                  return NULL;
                return t_AttitudeWriter::wrap_Object(AttitudeWriter(((t_AttitudeWriter *) arg)->object.this$));
              }
              static PyObject *t_AttitudeWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AttitudeWriter_init_(t_AttitudeWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::files::ccsds::ndm::adm::AdmHeader a1((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata a2((jobject) NULL);
                ::org::orekit::files::ccsds::utils::FileFormat a3((jobject) NULL);
                PyTypeObject **p3;
                ::java::lang::String a4((jobject) NULL);
                jdouble a5;
                jint a6;
                AttitudeWriter object((jobject) NULL);

                if (!parseArgs(args, "KkkKsDI", ::org::orekit::files::ccsds::ndm::adm::aem::AemWriter::initializeClass, ::org::orekit::files::ccsds::ndm::adm::AdmHeader::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata::initializeClass, ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::adm::aem::t_AemWriter::parameters_, &a1, &a2, &a3, &p3, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_, &a4, &a5, &a6))
                {
                  INT_CALL(object = AttitudeWriter(a0, a1, a2, a3, a4, a5, a6));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AttitudeWriter_write(t_AttitudeWriter *self, PyObject *args)
              {
                ::java::lang::Appendable a0((jobject) NULL);
                ::org::orekit::files::general::AttitudeEphemerisFile a1((jobject) NULL);
                PyTypeObject **p1;

                if (!parseArgs(args, "kK", ::java::lang::Appendable::initializeClass, ::org::orekit::files::general::AttitudeEphemerisFile::initializeClass, &a0, &a1, &p1, ::org::orekit::files::general::t_AttitudeEphemerisFile::parameters_))
                {
                  OBJ_CALL(self->object.write(a0, a1));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "write", args);
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
#include "org/orekit/files/ilrs/CRD.h"
#include "java/util/List.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CRD$CRDDataBlock.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD::class$ = NULL;
        jmethodID *CRD::mids$ = NULL;
        bool CRD::live$ = false;
        ::java::lang::String *CRD::STR_NAN = NULL;
        ::java::lang::String *CRD::STR_VALUE_NOT_AVAILABLE = NULL;

        jclass CRD::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addDataBlock_7dfaf1e050a296a0] = env->getMethodID(cls, "addDataBlock", "(Lorg/orekit/files/ilrs/CRD$CRDDataBlock;)V");
            mids$[mid_formatIntegerOrNaN_5d51f1f447446760] = env->getStaticMethodID(cls, "formatIntegerOrNaN", "(II)Ljava/lang/String;");
            mids$[mid_getComments_2afa36052df4765d] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
            mids$[mid_getDataBlocks_2afa36052df4765d] = env->getMethodID(cls, "getDataBlocks", "()Ljava/util/List;");
            mids$[mid_handleNaN_92807efd57acb082] = env->getStaticMethodID(cls, "handleNaN", "(Ljava/lang/String;)Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            STR_NAN = new ::java::lang::String(env->getStaticObjectField(cls, "STR_NAN", "Ljava/lang/String;"));
            STR_VALUE_NOT_AVAILABLE = new ::java::lang::String(env->getStaticObjectField(cls, "STR_VALUE_NOT_AVAILABLE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD::CRD() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void CRD::addDataBlock(const ::org::orekit::files::ilrs::CRD$CRDDataBlock & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addDataBlock_7dfaf1e050a296a0], a0.this$);
        }

        ::java::lang::String CRD::formatIntegerOrNaN(jint a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_formatIntegerOrNaN_5d51f1f447446760], a0, a1));
        }

        ::java::util::List CRD::getComments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_2afa36052df4765d]));
        }

        ::java::util::List CRD::getDataBlocks() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getDataBlocks_2afa36052df4765d]));
        }

        ::java::lang::String CRD::handleNaN(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return ::java::lang::String(env->callStaticObjectMethod(cls, mids$[mid_handleNaN_92807efd57acb082], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/orekit/files/ilrs/CRD$SessionStatistics.h"
#include "org/orekit/files/ilrs/CRD$CalibrationDetail.h"
#include "org/orekit/files/ilrs/CRD$Calibration.h"
#include "org/orekit/files/ilrs/CRD$Meteo.h"
#include "org/orekit/files/ilrs/CRD$AnglesMeasurement.h"
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
#include "org/orekit/files/ilrs/CRD$RangeSupplement.h"
#include "org/orekit/files/ilrs/CRD$NptRangeMeasurement.h"
#include "org/orekit/files/ilrs/CRD$FrRangeMeasurement.h"
#include "org/orekit/files/ilrs/CRD$RangeMeasurement.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CRD_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD_init_(t_CRD *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD_addDataBlock(t_CRD *self, PyObject *arg);
        static PyObject *t_CRD_formatIntegerOrNaN(PyTypeObject *type, PyObject *args);
        static PyObject *t_CRD_getComments(t_CRD *self);
        static PyObject *t_CRD_getDataBlocks(t_CRD *self);
        static PyObject *t_CRD_handleNaN(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD_get__comments(t_CRD *self, void *data);
        static PyObject *t_CRD_get__dataBlocks(t_CRD *self, void *data);
        static PyGetSetDef t_CRD__fields_[] = {
          DECLARE_GET_FIELD(t_CRD, comments),
          DECLARE_GET_FIELD(t_CRD, dataBlocks),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD__methods_[] = {
          DECLARE_METHOD(t_CRD, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD, addDataBlock, METH_O),
          DECLARE_METHOD(t_CRD, formatIntegerOrNaN, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_CRD, getComments, METH_NOARGS),
          DECLARE_METHOD(t_CRD, getDataBlocks, METH_NOARGS),
          DECLARE_METHOD(t_CRD, handleNaN, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD)[] = {
          { Py_tp_methods, t_CRD__methods_ },
          { Py_tp_init, (void *) t_CRD_init_ },
          { Py_tp_getset, t_CRD__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD, t_CRD, CRD);

        void t_CRD::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD), &PY_TYPE_DEF(CRD), module, "CRD", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "SessionStatistics", make_descriptor(&PY_TYPE_DEF(CRD$SessionStatistics)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "CalibrationDetail", make_descriptor(&PY_TYPE_DEF(CRD$CalibrationDetail)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "Calibration", make_descriptor(&PY_TYPE_DEF(CRD$Calibration)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "Meteo", make_descriptor(&PY_TYPE_DEF(CRD$Meteo)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "AnglesMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$AnglesMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "MeteorologicalMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$MeteorologicalMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "RangeSupplement", make_descriptor(&PY_TYPE_DEF(CRD$RangeSupplement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "NptRangeMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$NptRangeMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "FrRangeMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$FrRangeMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "RangeMeasurement", make_descriptor(&PY_TYPE_DEF(CRD$RangeMeasurement)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "CRDDataBlock", make_descriptor(&PY_TYPE_DEF(CRD$CRDDataBlock)));
        }

        void t_CRD::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "class_", make_descriptor(CRD::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "wrapfn_", make_descriptor(t_CRD::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "boxfn_", make_descriptor(boxObject));
          env->getClass(CRD::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "STR_NAN", make_descriptor(j2p(*CRD::STR_NAN)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD), "STR_VALUE_NOT_AVAILABLE", make_descriptor(j2p(*CRD::STR_VALUE_NOT_AVAILABLE)));
        }

        static PyObject *t_CRD_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD::initializeClass, 1)))
            return NULL;
          return t_CRD::wrap_Object(CRD(((t_CRD *) arg)->object.this$));
        }
        static PyObject *t_CRD_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD_init_(t_CRD *self, PyObject *args, PyObject *kwds)
        {
          CRD object((jobject) NULL);

          INT_CALL(object = CRD());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRD_addDataBlock(t_CRD *self, PyObject *arg)
        {
          ::org::orekit::files::ilrs::CRD$CRDDataBlock a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::ilrs::CRD$CRDDataBlock::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addDataBlock(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDataBlock", arg);
          return NULL;
        }

        static PyObject *t_CRD_formatIntegerOrNaN(PyTypeObject *type, PyObject *args)
        {
          jint a0;
          jint a1;
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRD::formatIntegerOrNaN(a0, a1));
            return j2p(result);
          }

          PyErr_SetArgsError(type, "formatIntegerOrNaN", args);
          return NULL;
        }

        static PyObject *t_CRD_getComments(t_CRD *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getComments());
          return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
        }

        static PyObject *t_CRD_getDataBlocks(t_CRD *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getDataBlocks());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ilrs::PY_TYPE(CRD$CRDDataBlock));
        }

        static PyObject *t_CRD_handleNaN(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          ::java::lang::String result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::CRD::handleNaN(a0));
            return j2p(result);
          }

          PyErr_SetArgsError(type, "handleNaN", arg);
          return NULL;
        }

        static PyObject *t_CRD_get__comments(t_CRD *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getComments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_CRD_get__dataBlocks(t_CRD *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getDataBlocks());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/PhaseIonosphericDelayModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/Phase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/models/earth/ionosphere/IonosphericModel.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *PhaseIonosphericDelayModifier::class$ = NULL;
          jmethodID *PhaseIonosphericDelayModifier::mids$ = NULL;
          bool PhaseIonosphericDelayModifier::live$ = false;

          jclass PhaseIonosphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/PhaseIonosphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_88af61602f29e4c4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/ionosphere/IonosphericModel;D)V");
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modify_e4935e9a55e01fd8] = env->getMethodID(cls, "modify", "(Lorg/orekit/estimation/measurements/EstimatedMeasurement;)V");
              mids$[mid_modifyWithoutDerivatives_d1815d998cba71e9] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PhaseIonosphericDelayModifier::PhaseIonosphericDelayModifier(const ::org::orekit::models::earth::ionosphere::IonosphericModel & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_88af61602f29e4c4, a0.this$, a1)) {}

          ::java::util::List PhaseIonosphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          void PhaseIonosphericDelayModifier::modify(const ::org::orekit::estimation::measurements::EstimatedMeasurement & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modify_e4935e9a55e01fd8], a0.this$);
          }

          void PhaseIonosphericDelayModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_PhaseIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PhaseIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PhaseIonosphericDelayModifier_init_(t_PhaseIonosphericDelayModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PhaseIonosphericDelayModifier_getParametersDrivers(t_PhaseIonosphericDelayModifier *self);
          static PyObject *t_PhaseIonosphericDelayModifier_modify(t_PhaseIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_PhaseIonosphericDelayModifier_modifyWithoutDerivatives(t_PhaseIonosphericDelayModifier *self, PyObject *arg);
          static PyObject *t_PhaseIonosphericDelayModifier_get__parametersDrivers(t_PhaseIonosphericDelayModifier *self, void *data);
          static PyGetSetDef t_PhaseIonosphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_PhaseIonosphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PhaseIonosphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_PhaseIonosphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseIonosphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PhaseIonosphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_PhaseIonosphericDelayModifier, modify, METH_O),
            DECLARE_METHOD(t_PhaseIonosphericDelayModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PhaseIonosphericDelayModifier)[] = {
            { Py_tp_methods, t_PhaseIonosphericDelayModifier__methods_ },
            { Py_tp_init, (void *) t_PhaseIonosphericDelayModifier_init_ },
            { Py_tp_getset, t_PhaseIonosphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PhaseIonosphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PhaseIonosphericDelayModifier, t_PhaseIonosphericDelayModifier, PhaseIonosphericDelayModifier);

          void t_PhaseIonosphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(PhaseIonosphericDelayModifier), &PY_TYPE_DEF(PhaseIonosphericDelayModifier), module, "PhaseIonosphericDelayModifier", 0);
          }

          void t_PhaseIonosphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseIonosphericDelayModifier), "class_", make_descriptor(PhaseIonosphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseIonosphericDelayModifier), "wrapfn_", make_descriptor(t_PhaseIonosphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PhaseIonosphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_PhaseIonosphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PhaseIonosphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_PhaseIonosphericDelayModifier::wrap_Object(PhaseIonosphericDelayModifier(((t_PhaseIonosphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_PhaseIonosphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PhaseIonosphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PhaseIonosphericDelayModifier_init_(t_PhaseIonosphericDelayModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::models::earth::ionosphere::IonosphericModel a0((jobject) NULL);
            jdouble a1;
            PhaseIonosphericDelayModifier object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::orekit::models::earth::ionosphere::IonosphericModel::initializeClass, &a0, &a1))
            {
              INT_CALL(object = PhaseIonosphericDelayModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_PhaseIonosphericDelayModifier_getParametersDrivers(t_PhaseIonosphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_PhaseIonosphericDelayModifier_modify(t_PhaseIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseIonosphericDelayModifier_modifyWithoutDerivatives(t_PhaseIonosphericDelayModifier *self, PyObject *arg)
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

          static PyObject *t_PhaseIonosphericDelayModifier_get__parametersDrivers(t_PhaseIonosphericDelayModifier *self, void *data)
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
#include "org/hipparchus/distribution/discrete/AbstractIntegerDistribution.h"
#include "org/hipparchus/distribution/IntegerDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *AbstractIntegerDistribution::class$ = NULL;
        jmethodID *AbstractIntegerDistribution::mids$ = NULL;
        bool AbstractIntegerDistribution::live$ = false;

        jclass AbstractIntegerDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/AbstractIntegerDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_inverseCumulativeProbability_4508852644846c83] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)I");
            mids$[mid_logProbability_46f85b53d9aedd96] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_dbbe5f05149dbf73] = env->getMethodID(cls, "probability", "(II)D");
            mids$[mid_solveInverseCumulativeProbability_5f5c98d9d6068625] = env->getMethodID(cls, "solveInverseCumulativeProbability", "(DII)I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractIntegerDistribution::AbstractIntegerDistribution() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        jint AbstractIntegerDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_inverseCumulativeProbability_4508852644846c83], a0);
        }

        jdouble AbstractIntegerDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_46f85b53d9aedd96], a0);
        }

        jdouble AbstractIntegerDistribution::probability(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_dbbe5f05149dbf73], a0, a1);
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
        static PyObject *t_AbstractIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AbstractIntegerDistribution_init_(t_AbstractIntegerDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AbstractIntegerDistribution_inverseCumulativeProbability(t_AbstractIntegerDistribution *self, PyObject *arg);
        static PyObject *t_AbstractIntegerDistribution_logProbability(t_AbstractIntegerDistribution *self, PyObject *arg);
        static PyObject *t_AbstractIntegerDistribution_probability(t_AbstractIntegerDistribution *self, PyObject *args);

        static PyMethodDef t_AbstractIntegerDistribution__methods_[] = {
          DECLARE_METHOD(t_AbstractIntegerDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegerDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractIntegerDistribution, inverseCumulativeProbability, METH_O),
          DECLARE_METHOD(t_AbstractIntegerDistribution, logProbability, METH_O),
          DECLARE_METHOD(t_AbstractIntegerDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractIntegerDistribution)[] = {
          { Py_tp_methods, t_AbstractIntegerDistribution__methods_ },
          { Py_tp_init, (void *) t_AbstractIntegerDistribution_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractIntegerDistribution)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractIntegerDistribution, t_AbstractIntegerDistribution, AbstractIntegerDistribution);

        void t_AbstractIntegerDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractIntegerDistribution), &PY_TYPE_DEF(AbstractIntegerDistribution), module, "AbstractIntegerDistribution", 0);
        }

        void t_AbstractIntegerDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegerDistribution), "class_", make_descriptor(AbstractIntegerDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegerDistribution), "wrapfn_", make_descriptor(t_AbstractIntegerDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractIntegerDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractIntegerDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractIntegerDistribution::initializeClass, 1)))
            return NULL;
          return t_AbstractIntegerDistribution::wrap_Object(AbstractIntegerDistribution(((t_AbstractIntegerDistribution *) arg)->object.this$));
        }
        static PyObject *t_AbstractIntegerDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractIntegerDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AbstractIntegerDistribution_init_(t_AbstractIntegerDistribution *self, PyObject *args, PyObject *kwds)
        {
          AbstractIntegerDistribution object((jobject) NULL);

          INT_CALL(object = AbstractIntegerDistribution());
          self->object = object;

          return 0;
        }

        static PyObject *t_AbstractIntegerDistribution_inverseCumulativeProbability(t_AbstractIntegerDistribution *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "inverseCumulativeProbability", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegerDistribution_logProbability(t_AbstractIntegerDistribution *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "logProbability", arg);
          return NULL;
        }

        static PyObject *t_AbstractIntegerDistribution_probability(t_AbstractIntegerDistribution *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.probability(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "probability", args);
          return NULL;
        }
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
          mids$[mid_init$_478adfd86c184534] = env->getMethodID(cls, "<init>", "(IDDLorg/orekit/time/TimeScale;)V");
          mids$[mid_selectDates_8060cef9318d72e3] = env->getMethodID(cls, "selectDates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BurstSelector::BurstSelector(jint a0, jdouble a1, jdouble a2, const ::org::orekit::time::TimeScale & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_478adfd86c184534, a0, a1, a2, a3.this$)) {}

      ::java::util::List BurstSelector::selectDates(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_selectDates_8060cef9318d72e3], a0.this$, a1.this$));
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
#include "org/hipparchus/analysis/interpolation/FieldHermiteInterpolator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *FieldHermiteInterpolator::class$ = NULL;
        jmethodID *FieldHermiteInterpolator::mids$ = NULL;
        bool FieldHermiteInterpolator::live$ = false;

        jclass FieldHermiteInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/FieldHermiteInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addSamplePoint_5867299ca30b4511] = env->getMethodID(cls, "addSamplePoint", "(Lorg/hipparchus/FieldElement;[[Lorg/hipparchus/FieldElement;)V");
            mids$[mid_derivatives_e337ebc29ccab05d] = env->getMethodID(cls, "derivatives", "(Lorg/hipparchus/FieldElement;I)[[Lorg/hipparchus/FieldElement;");
            mids$[mid_value_2b0562a1b7a1f4bd] = env->getMethodID(cls, "value", "(Lorg/hipparchus/FieldElement;)[Lorg/hipparchus/FieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldHermiteInterpolator::FieldHermiteInterpolator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void FieldHermiteInterpolator::addSamplePoint(const ::org::hipparchus::FieldElement & a0, const JArray< JArray< ::org::hipparchus::FieldElement > > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addSamplePoint_5867299ca30b4511], a0.this$, a1.this$);
        }

        JArray< JArray< ::org::hipparchus::FieldElement > > FieldHermiteInterpolator::derivatives(const ::org::hipparchus::FieldElement & a0, jint a1) const
        {
          return JArray< JArray< ::org::hipparchus::FieldElement > >(env->callObjectMethod(this$, mids$[mid_derivatives_e337ebc29ccab05d], a0.this$, a1));
        }

        JArray< ::org::hipparchus::FieldElement > FieldHermiteInterpolator::value(const ::org::hipparchus::FieldElement & a0) const
        {
          return JArray< ::org::hipparchus::FieldElement >(env->callObjectMethod(this$, mids$[mid_value_2b0562a1b7a1f4bd], a0.this$));
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
        static PyObject *t_FieldHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldHermiteInterpolator_of_(t_FieldHermiteInterpolator *self, PyObject *args);
        static int t_FieldHermiteInterpolator_init_(t_FieldHermiteInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldHermiteInterpolator_addSamplePoint(t_FieldHermiteInterpolator *self, PyObject *args);
        static PyObject *t_FieldHermiteInterpolator_derivatives(t_FieldHermiteInterpolator *self, PyObject *args);
        static PyObject *t_FieldHermiteInterpolator_value(t_FieldHermiteInterpolator *self, PyObject *arg);
        static PyObject *t_FieldHermiteInterpolator_get__parameters_(t_FieldHermiteInterpolator *self, void *data);
        static PyGetSetDef t_FieldHermiteInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldHermiteInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldHermiteInterpolator__methods_[] = {
          DECLARE_METHOD(t_FieldHermiteInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, addSamplePoint, METH_VARARGS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, derivatives, METH_VARARGS),
          DECLARE_METHOD(t_FieldHermiteInterpolator, value, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldHermiteInterpolator)[] = {
          { Py_tp_methods, t_FieldHermiteInterpolator__methods_ },
          { Py_tp_init, (void *) t_FieldHermiteInterpolator_init_ },
          { Py_tp_getset, t_FieldHermiteInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldHermiteInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldHermiteInterpolator, t_FieldHermiteInterpolator, FieldHermiteInterpolator);
        PyObject *t_FieldHermiteInterpolator::wrap_Object(const FieldHermiteInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldHermiteInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldHermiteInterpolator *self = (t_FieldHermiteInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldHermiteInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldHermiteInterpolator *self = (t_FieldHermiteInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldHermiteInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldHermiteInterpolator), &PY_TYPE_DEF(FieldHermiteInterpolator), module, "FieldHermiteInterpolator", 0);
        }

        void t_FieldHermiteInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteInterpolator), "class_", make_descriptor(FieldHermiteInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteInterpolator), "wrapfn_", make_descriptor(t_FieldHermiteInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldHermiteInterpolator::initializeClass, 1)))
            return NULL;
          return t_FieldHermiteInterpolator::wrap_Object(FieldHermiteInterpolator(((t_FieldHermiteInterpolator *) arg)->object.this$));
        }
        static PyObject *t_FieldHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldHermiteInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldHermiteInterpolator_of_(t_FieldHermiteInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldHermiteInterpolator_init_(t_FieldHermiteInterpolator *self, PyObject *args, PyObject *kwds)
        {
          FieldHermiteInterpolator object((jobject) NULL);

          INT_CALL(object = FieldHermiteInterpolator());
          self->object = object;

          return 0;
        }

        static PyObject *t_FieldHermiteInterpolator_addSamplePoint(t_FieldHermiteInterpolator *self, PyObject *args)
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< JArray< ::org::hipparchus::FieldElement > > a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "K[[K", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(self->object.addSamplePoint(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addSamplePoint", args);
          return NULL;
        }

        static PyObject *t_FieldHermiteInterpolator_derivatives(t_FieldHermiteInterpolator *self, PyObject *args)
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          JArray< JArray< ::org::hipparchus::FieldElement > > result((jobject) NULL);

          if (!parseArgs(args, "KI", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1))
          {
            OBJ_CALL(result = self->object.derivatives(a0, a1));
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          PyErr_SetArgsError((PyObject *) self, "derivatives", args);
          return NULL;
        }

        static PyObject *t_FieldHermiteInterpolator_value(t_FieldHermiteInterpolator *self, PyObject *arg)
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::FieldElement > result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_FieldElement::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "value", arg);
          return NULL;
        }
        static PyObject *t_FieldHermiteInterpolator_get__parameters_(t_FieldHermiteInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/MultiSatStepHandler.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *MultiSatStepHandler::class$ = NULL;
        jmethodID *MultiSatStepHandler::mids$ = NULL;
        bool MultiSatStepHandler::live$ = false;

        jclass MultiSatStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/MultiSatStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_de3e021e7266b71e] = env->getMethodID(cls, "finish", "(Ljava/util/List;)V");
            mids$[mid_handleStep_de3e021e7266b71e] = env->getMethodID(cls, "handleStep", "(Ljava/util/List;)V");
            mids$[mid_init_741f4d97cd6d356c] = env->getMethodID(cls, "init", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void MultiSatStepHandler::finish(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_de3e021e7266b71e], a0.this$);
        }

        void MultiSatStepHandler::handleStep(const ::java::util::List & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_de3e021e7266b71e], a0.this$);
        }

        void MultiSatStepHandler::init(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_741f4d97cd6d356c], a0.this$, a1.this$);
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
        static PyObject *t_MultiSatStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiSatStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultiSatStepHandler_finish(t_MultiSatStepHandler *self, PyObject *arg);
        static PyObject *t_MultiSatStepHandler_handleStep(t_MultiSatStepHandler *self, PyObject *arg);
        static PyObject *t_MultiSatStepHandler_init(t_MultiSatStepHandler *self, PyObject *args);

        static PyMethodDef t_MultiSatStepHandler__methods_[] = {
          DECLARE_METHOD(t_MultiSatStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiSatStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultiSatStepHandler, finish, METH_O),
          DECLARE_METHOD(t_MultiSatStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_MultiSatStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultiSatStepHandler)[] = {
          { Py_tp_methods, t_MultiSatStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultiSatStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultiSatStepHandler, t_MultiSatStepHandler, MultiSatStepHandler);

        void t_MultiSatStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(MultiSatStepHandler), &PY_TYPE_DEF(MultiSatStepHandler), module, "MultiSatStepHandler", 0);
        }

        void t_MultiSatStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatStepHandler), "class_", make_descriptor(MultiSatStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatStepHandler), "wrapfn_", make_descriptor(t_MultiSatStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultiSatStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultiSatStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultiSatStepHandler::initializeClass, 1)))
            return NULL;
          return t_MultiSatStepHandler::wrap_Object(MultiSatStepHandler(((t_MultiSatStepHandler *) arg)->object.this$));
        }
        static PyObject *t_MultiSatStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultiSatStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultiSatStepHandler_finish(t_MultiSatStepHandler *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_MultiSatStepHandler_handleStep(t_MultiSatStepHandler *self, PyObject *arg)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_MultiSatStepHandler_init(t_MultiSatStepHandler *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
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
#include "org/hipparchus/optim/linear/LinearConstraint.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/optim/linear/Relationship.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {

        ::java::lang::Class *LinearConstraint::class$ = NULL;
        jmethodID *LinearConstraint::mids$ = NULL;
        bool LinearConstraint::live$ = false;

        jclass LinearConstraint::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/linear/LinearConstraint");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ed1196772defbeae] = env->getMethodID(cls, "<init>", "([DLorg/hipparchus/optim/linear/Relationship;D)V");
            mids$[mid_init$_5f338ccbbc248a13] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/optim/linear/Relationship;D)V");
            mids$[mid_init$_176ddfa61621172c] = env->getMethodID(cls, "<init>", "([DDLorg/hipparchus/optim/linear/Relationship;[DD)V");
            mids$[mid_init$_815a0a1da754191e] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealVector;DLorg/hipparchus/optim/linear/Relationship;Lorg/hipparchus/linear/RealVector;D)V");
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getCoefficients_aab4fbf77867daa8] = env->getMethodID(cls, "getCoefficients", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getRelationship_90960c2c386c2df2] = env->getMethodID(cls, "getRelationship", "()Lorg/hipparchus/optim/linear/Relationship;");
            mids$[mid_getValue_dff5885c2c873297] = env->getMethodID(cls, "getValue", "()D");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearConstraint::LinearConstraint(const JArray< jdouble > & a0, const ::org::hipparchus::optim::linear::Relationship & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ed1196772defbeae, a0.this$, a1.this$, a2)) {}

        LinearConstraint::LinearConstraint(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::optim::linear::Relationship & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5f338ccbbc248a13, a0.this$, a1.this$, a2)) {}

        LinearConstraint::LinearConstraint(const JArray< jdouble > & a0, jdouble a1, const ::org::hipparchus::optim::linear::Relationship & a2, const JArray< jdouble > & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_176ddfa61621172c, a0.this$, a1, a2.this$, a3.this$, a4)) {}

        LinearConstraint::LinearConstraint(const ::org::hipparchus::linear::RealVector & a0, jdouble a1, const ::org::hipparchus::optim::linear::Relationship & a2, const ::org::hipparchus::linear::RealVector & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_815a0a1da754191e, a0.this$, a1, a2.this$, a3.this$, a4)) {}

        jboolean LinearConstraint::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        ::org::hipparchus::linear::RealVector LinearConstraint::getCoefficients() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getCoefficients_aab4fbf77867daa8]));
        }

        ::org::hipparchus::optim::linear::Relationship LinearConstraint::getRelationship() const
        {
          return ::org::hipparchus::optim::linear::Relationship(env->callObjectMethod(this$, mids$[mid_getRelationship_90960c2c386c2df2]));
        }

        jdouble LinearConstraint::getValue() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getValue_dff5885c2c873297]);
        }

        jint LinearConstraint::hashCode() const
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
    namespace optim {
      namespace linear {
        static PyObject *t_LinearConstraint_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearConstraint_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearConstraint_init_(t_LinearConstraint *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearConstraint_equals(t_LinearConstraint *self, PyObject *args);
        static PyObject *t_LinearConstraint_getCoefficients(t_LinearConstraint *self);
        static PyObject *t_LinearConstraint_getRelationship(t_LinearConstraint *self);
        static PyObject *t_LinearConstraint_getValue(t_LinearConstraint *self);
        static PyObject *t_LinearConstraint_hashCode(t_LinearConstraint *self, PyObject *args);
        static PyObject *t_LinearConstraint_get__coefficients(t_LinearConstraint *self, void *data);
        static PyObject *t_LinearConstraint_get__relationship(t_LinearConstraint *self, void *data);
        static PyObject *t_LinearConstraint_get__value(t_LinearConstraint *self, void *data);
        static PyGetSetDef t_LinearConstraint__fields_[] = {
          DECLARE_GET_FIELD(t_LinearConstraint, coefficients),
          DECLARE_GET_FIELD(t_LinearConstraint, relationship),
          DECLARE_GET_FIELD(t_LinearConstraint, value),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LinearConstraint__methods_[] = {
          DECLARE_METHOD(t_LinearConstraint, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearConstraint, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearConstraint, equals, METH_VARARGS),
          DECLARE_METHOD(t_LinearConstraint, getCoefficients, METH_NOARGS),
          DECLARE_METHOD(t_LinearConstraint, getRelationship, METH_NOARGS),
          DECLARE_METHOD(t_LinearConstraint, getValue, METH_NOARGS),
          DECLARE_METHOD(t_LinearConstraint, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearConstraint)[] = {
          { Py_tp_methods, t_LinearConstraint__methods_ },
          { Py_tp_init, (void *) t_LinearConstraint_init_ },
          { Py_tp_getset, t_LinearConstraint__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearConstraint)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearConstraint, t_LinearConstraint, LinearConstraint);

        void t_LinearConstraint::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearConstraint), &PY_TYPE_DEF(LinearConstraint), module, "LinearConstraint", 0);
        }

        void t_LinearConstraint::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraint), "class_", make_descriptor(LinearConstraint::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraint), "wrapfn_", make_descriptor(t_LinearConstraint::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearConstraint), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearConstraint_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearConstraint::initializeClass, 1)))
            return NULL;
          return t_LinearConstraint::wrap_Object(LinearConstraint(((t_LinearConstraint *) arg)->object.this$));
        }
        static PyObject *t_LinearConstraint_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearConstraint::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearConstraint_init_(t_LinearConstraint *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::optim::linear::Relationship a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              LinearConstraint object((jobject) NULL);

              if (!parseArgs(args, "[DKD", ::org::hipparchus::optim::linear::Relationship::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::linear::t_Relationship::parameters_, &a2))
              {
                INT_CALL(object = LinearConstraint(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              ::org::hipparchus::optim::linear::Relationship a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              LinearConstraint object((jobject) NULL);

              if (!parseArgs(args, "kKD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::optim::linear::Relationship::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::linear::t_Relationship::parameters_, &a2))
              {
                INT_CALL(object = LinearConstraint(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              JArray< jdouble > a0((jobject) NULL);
              jdouble a1;
              ::org::hipparchus::optim::linear::Relationship a2((jobject) NULL);
              PyTypeObject **p2;
              JArray< jdouble > a3((jobject) NULL);
              jdouble a4;
              LinearConstraint object((jobject) NULL);

              if (!parseArgs(args, "[DDK[DD", ::org::hipparchus::optim::linear::Relationship::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::optim::linear::t_Relationship::parameters_, &a3, &a4))
              {
                INT_CALL(object = LinearConstraint(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::linear::RealVector a0((jobject) NULL);
              jdouble a1;
              ::org::hipparchus::optim::linear::Relationship a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::linear::RealVector a3((jobject) NULL);
              jdouble a4;
              LinearConstraint object((jobject) NULL);

              if (!parseArgs(args, "kDKkD", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::optim::linear::Relationship::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::optim::linear::t_Relationship::parameters_, &a3, &a4))
              {
                INT_CALL(object = LinearConstraint(a0, a1, a2, a3, a4));
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

        static PyObject *t_LinearConstraint_equals(t_LinearConstraint *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LinearConstraint), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_LinearConstraint_getCoefficients(t_LinearConstraint *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoefficients());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_LinearConstraint_getRelationship(t_LinearConstraint *self)
        {
          ::org::hipparchus::optim::linear::Relationship result((jobject) NULL);
          OBJ_CALL(result = self->object.getRelationship());
          return ::org::hipparchus::optim::linear::t_Relationship::wrap_Object(result);
        }

        static PyObject *t_LinearConstraint_getValue(t_LinearConstraint *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getValue());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LinearConstraint_hashCode(t_LinearConstraint *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(LinearConstraint), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_LinearConstraint_get__coefficients(t_LinearConstraint *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoefficients());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_LinearConstraint_get__relationship(t_LinearConstraint *self, void *data)
        {
          ::org::hipparchus::optim::linear::Relationship value((jobject) NULL);
          OBJ_CALL(value = self->object.getRelationship());
          return ::org::hipparchus::optim::linear::t_Relationship::wrap_Object(value);
        }

        static PyObject *t_LinearConstraint_get__value(t_LinearConstraint *self, void *data)
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
#include "org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace gradient {

            ::java::lang::Class *Preconditioner::class$ = NULL;
            jmethodID *Preconditioner::mids$ = NULL;
            bool Preconditioner::live$ = false;

            jclass Preconditioner::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/gradient/Preconditioner");

                mids$ = new jmethodID[max_mid];
                mids$[mid_precondition_96bbba26ca51c0d1] = env->getMethodID(cls, "precondition", "([D[D)[D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            JArray< jdouble > Preconditioner::precondition(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_precondition_96bbba26ca51c0d1], a0.this$, a1.this$));
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
        namespace scalar {
          namespace gradient {
            static PyObject *t_Preconditioner_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Preconditioner_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_Preconditioner_precondition(t_Preconditioner *self, PyObject *args);

            static PyMethodDef t_Preconditioner__methods_[] = {
              DECLARE_METHOD(t_Preconditioner, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Preconditioner, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_Preconditioner, precondition, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(Preconditioner)[] = {
              { Py_tp_methods, t_Preconditioner__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(Preconditioner)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(Preconditioner, t_Preconditioner, Preconditioner);

            void t_Preconditioner::install(PyObject *module)
            {
              installType(&PY_TYPE(Preconditioner), &PY_TYPE_DEF(Preconditioner), module, "Preconditioner", 0);
            }

            void t_Preconditioner::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(Preconditioner), "class_", make_descriptor(Preconditioner::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Preconditioner), "wrapfn_", make_descriptor(t_Preconditioner::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(Preconditioner), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_Preconditioner_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, Preconditioner::initializeClass, 1)))
                return NULL;
              return t_Preconditioner::wrap_Object(Preconditioner(((t_Preconditioner *) arg)->object.this$));
            }
            static PyObject *t_Preconditioner_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, Preconditioner::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_Preconditioner_precondition(t_Preconditioner *self, PyObject *args)
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              JArray< jdouble > result((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                OBJ_CALL(result = self->object.precondition(a0, a1));
                return result.wrap();
              }

              PyErr_SetArgsError((PyObject *) self, "precondition", args);
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
#include "org/orekit/estimation/measurements/modifiers/BaseRangeTroposphericDelayModifier.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *BaseRangeTroposphericDelayModifier::class$ = NULL;
          jmethodID *BaseRangeTroposphericDelayModifier::mids$ = NULL;
          bool BaseRangeTroposphericDelayModifier::live$ = false;

          jclass BaseRangeTroposphericDelayModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/BaseRangeTroposphericDelayModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_rangeErrorTroposphericModel_08d2a35aee39232b] = env->getMethodID(cls, "rangeErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_rangeErrorTroposphericModel_03cd5a2e88a0f0f6] = env->getMethodID(cls, "rangeErrorTroposphericModel", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getTropoModel_4b77a751a52d683d] = env->getMethodID(cls, "getTropoModel", "()Lorg/orekit/models/earth/troposphere/DiscreteTroposphericModel;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List BaseRangeTroposphericDelayModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
          }

          jdouble BaseRangeTroposphericDelayModifier::rangeErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::SpacecraftState & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_rangeErrorTroposphericModel_08d2a35aee39232b], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement BaseRangeTroposphericDelayModifier::rangeErrorTroposphericModel(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_rangeErrorTroposphericModel_03cd5a2e88a0f0f6], a0.this$, a1.this$, a2.this$));
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
          static PyObject *t_BaseRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_BaseRangeTroposphericDelayModifier_getParametersDrivers(t_BaseRangeTroposphericDelayModifier *self);
          static PyObject *t_BaseRangeTroposphericDelayModifier_rangeErrorTroposphericModel(t_BaseRangeTroposphericDelayModifier *self, PyObject *args);
          static PyObject *t_BaseRangeTroposphericDelayModifier_get__parametersDrivers(t_BaseRangeTroposphericDelayModifier *self, void *data);
          static PyGetSetDef t_BaseRangeTroposphericDelayModifier__fields_[] = {
            DECLARE_GET_FIELD(t_BaseRangeTroposphericDelayModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_BaseRangeTroposphericDelayModifier__methods_[] = {
            DECLARE_METHOD(t_BaseRangeTroposphericDelayModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeTroposphericDelayModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_BaseRangeTroposphericDelayModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_BaseRangeTroposphericDelayModifier, rangeErrorTroposphericModel, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(BaseRangeTroposphericDelayModifier)[] = {
            { Py_tp_methods, t_BaseRangeTroposphericDelayModifier__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_BaseRangeTroposphericDelayModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(BaseRangeTroposphericDelayModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(BaseRangeTroposphericDelayModifier, t_BaseRangeTroposphericDelayModifier, BaseRangeTroposphericDelayModifier);

          void t_BaseRangeTroposphericDelayModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(BaseRangeTroposphericDelayModifier), &PY_TYPE_DEF(BaseRangeTroposphericDelayModifier), module, "BaseRangeTroposphericDelayModifier", 0);
          }

          void t_BaseRangeTroposphericDelayModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeTroposphericDelayModifier), "class_", make_descriptor(BaseRangeTroposphericDelayModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeTroposphericDelayModifier), "wrapfn_", make_descriptor(t_BaseRangeTroposphericDelayModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(BaseRangeTroposphericDelayModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_BaseRangeTroposphericDelayModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, BaseRangeTroposphericDelayModifier::initializeClass, 1)))
              return NULL;
            return t_BaseRangeTroposphericDelayModifier::wrap_Object(BaseRangeTroposphericDelayModifier(((t_BaseRangeTroposphericDelayModifier *) arg)->object.this$));
          }
          static PyObject *t_BaseRangeTroposphericDelayModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, BaseRangeTroposphericDelayModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_BaseRangeTroposphericDelayModifier_getParametersDrivers(t_BaseRangeTroposphericDelayModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_BaseRangeTroposphericDelayModifier_rangeErrorTroposphericModel(t_BaseRangeTroposphericDelayModifier *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::SpacecraftState a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "kk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.rangeErrorTroposphericModel(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
                ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "kK[K", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.rangeErrorTroposphericModel(a0, a1, a2));
                  return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "rangeErrorTroposphericModel", args);
            return NULL;
          }

          static PyObject *t_BaseRangeTroposphericDelayModifier_get__parametersDrivers(t_BaseRangeTroposphericDelayModifier *self, void *data)
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
#include "org/hipparchus/linear/DefaultRealMatrixChangingVisitor.h"
#include "org/hipparchus/linear/RealMatrixChangingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultRealMatrixChangingVisitor::class$ = NULL;
      jmethodID *DefaultRealMatrixChangingVisitor::mids$ = NULL;
      bool DefaultRealMatrixChangingVisitor::live$ = false;

      jclass DefaultRealMatrixChangingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultRealMatrixChangingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_end_dff5885c2c873297] = env->getMethodID(cls, "end", "()D");
          mids$[mid_start_5aa4d40be6f39408] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_3a88ef0e755558fa] = env->getMethodID(cls, "visit", "(IID)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultRealMatrixChangingVisitor::DefaultRealMatrixChangingVisitor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      jdouble DefaultRealMatrixChangingVisitor::end() const
      {
        return env->callDoubleMethod(this$, mids$[mid_end_dff5885c2c873297]);
      }

      void DefaultRealMatrixChangingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_5aa4d40be6f39408], a0, a1, a2, a3, a4, a5);
      }

      jdouble DefaultRealMatrixChangingVisitor::visit(jint a0, jint a1, jdouble a2) const
      {
        return env->callDoubleMethod(this$, mids$[mid_visit_3a88ef0e755558fa], a0, a1, a2);
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
      static PyObject *t_DefaultRealMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultRealMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DefaultRealMatrixChangingVisitor_init_(t_DefaultRealMatrixChangingVisitor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultRealMatrixChangingVisitor_end(t_DefaultRealMatrixChangingVisitor *self);
      static PyObject *t_DefaultRealMatrixChangingVisitor_start(t_DefaultRealMatrixChangingVisitor *self, PyObject *args);
      static PyObject *t_DefaultRealMatrixChangingVisitor_visit(t_DefaultRealMatrixChangingVisitor *self, PyObject *args);

      static PyMethodDef t_DefaultRealMatrixChangingVisitor__methods_[] = {
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_DefaultRealMatrixChangingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultRealMatrixChangingVisitor)[] = {
        { Py_tp_methods, t_DefaultRealMatrixChangingVisitor__methods_ },
        { Py_tp_init, (void *) t_DefaultRealMatrixChangingVisitor_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultRealMatrixChangingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultRealMatrixChangingVisitor, t_DefaultRealMatrixChangingVisitor, DefaultRealMatrixChangingVisitor);

      void t_DefaultRealMatrixChangingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultRealMatrixChangingVisitor), &PY_TYPE_DEF(DefaultRealMatrixChangingVisitor), module, "DefaultRealMatrixChangingVisitor", 0);
      }

      void t_DefaultRealMatrixChangingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixChangingVisitor), "class_", make_descriptor(DefaultRealMatrixChangingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixChangingVisitor), "wrapfn_", make_descriptor(t_DefaultRealMatrixChangingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultRealMatrixChangingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultRealMatrixChangingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultRealMatrixChangingVisitor::initializeClass, 1)))
          return NULL;
        return t_DefaultRealMatrixChangingVisitor::wrap_Object(DefaultRealMatrixChangingVisitor(((t_DefaultRealMatrixChangingVisitor *) arg)->object.this$));
      }
      static PyObject *t_DefaultRealMatrixChangingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultRealMatrixChangingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DefaultRealMatrixChangingVisitor_init_(t_DefaultRealMatrixChangingVisitor *self, PyObject *args, PyObject *kwds)
      {
        DefaultRealMatrixChangingVisitor object((jobject) NULL);

        INT_CALL(object = DefaultRealMatrixChangingVisitor());
        self->object = object;

        return 0;
      }

      static PyObject *t_DefaultRealMatrixChangingVisitor_end(t_DefaultRealMatrixChangingVisitor *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.end());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_DefaultRealMatrixChangingVisitor_start(t_DefaultRealMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_DefaultRealMatrixChangingVisitor_visit(t_DefaultRealMatrixChangingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jdouble a2;
        jdouble result;

        if (!parseArgs(args, "IID", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.visit(a0, a1, a2));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
    }
  }
}
