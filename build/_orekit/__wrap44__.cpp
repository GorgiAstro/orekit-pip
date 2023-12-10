#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTHarvester.h"
#include "java/util/List.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {

          ::java::lang::Class *DSSTHarvester::class$ = NULL;
          jmethodID *DSSTHarvester::mids$ = NULL;
          bool DSSTHarvester::live$ = false;

          jclass DSSTHarvester::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/DSSTHarvester");

              mids$ = new jmethodID[max_mid];
              mids$[mid_freezeColumnsNames_7ae3461a92a43152] = env->getMethodID(cls, "freezeColumnsNames", "()V");
              mids$[mid_getB1_7116bbecdd8ceb21] = env->getMethodID(cls, "getB1", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getB2_63aee3ce1e412e46] = env->getMethodID(cls, "getB2", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getB3_63aee3ce1e412e46] = env->getMethodID(cls, "getB3", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getB4_7116bbecdd8ceb21] = env->getMethodID(cls, "getB4", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getJacobiansColumnsNames_a6156df500549a58] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
              mids$[mid_getOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
              mids$[mid_getParametersJacobian_63aee3ce1e412e46] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
              mids$[mid_getStateTransitionMatrix_63aee3ce1e412e46] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_initializeFieldShortPeriodTerms_2b88003f931f70a7] = env->getMethodID(cls, "initializeFieldShortPeriodTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_setReferenceState_2b88003f931f70a7] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_updateFieldShortPeriodTerms_2b88003f931f70a7] = env->getMethodID(cls, "updateFieldShortPeriodTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void DSSTHarvester::freezeColumnsNames() const
          {
            env->callVoidMethod(this$, mids$[mid_freezeColumnsNames_7ae3461a92a43152]);
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getB1() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getB1_7116bbecdd8ceb21]));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getB2(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getB2_63aee3ce1e412e46], a0.this$));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getB3(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getB3_63aee3ce1e412e46], a0.this$));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getB4() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getB4_7116bbecdd8ceb21]));
          }

          ::java::util::List DSSTHarvester::getJacobiansColumnsNames() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getJacobiansColumnsNames_a6156df500549a58]));
          }

          ::org::orekit::orbits::OrbitType DSSTHarvester::getOrbitType() const
          {
            return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_63ea5cd020bf7bf1]));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getParametersJacobian(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getParametersJacobian_63aee3ce1e412e46], a0.this$));
          }

          ::org::orekit::orbits::PositionAngleType DSSTHarvester::getPositionAngleType() const
          {
            return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_2571e8fe1cede425]));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_63aee3ce1e412e46], a0.this$));
          }

          void DSSTHarvester::initializeFieldShortPeriodTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_initializeFieldShortPeriodTerms_2b88003f931f70a7], a0.this$);
          }

          void DSSTHarvester::setReferenceState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReferenceState_2b88003f931f70a7], a0.this$);
          }

          void DSSTHarvester::updateFieldShortPeriodTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_updateFieldShortPeriodTerms_2b88003f931f70a7], a0.this$);
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
          static PyObject *t_DSSTHarvester_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTHarvester_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DSSTHarvester_freezeColumnsNames(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_getB1(t_DSSTHarvester *self);
          static PyObject *t_DSSTHarvester_getB2(t_DSSTHarvester *self, PyObject *arg);
          static PyObject *t_DSSTHarvester_getB3(t_DSSTHarvester *self, PyObject *arg);
          static PyObject *t_DSSTHarvester_getB4(t_DSSTHarvester *self);
          static PyObject *t_DSSTHarvester_getJacobiansColumnsNames(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_getOrbitType(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_getParametersJacobian(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_getPositionAngleType(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_getStateTransitionMatrix(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_initializeFieldShortPeriodTerms(t_DSSTHarvester *self, PyObject *arg);
          static PyObject *t_DSSTHarvester_setReferenceState(t_DSSTHarvester *self, PyObject *args);
          static PyObject *t_DSSTHarvester_updateFieldShortPeriodTerms(t_DSSTHarvester *self, PyObject *arg);
          static PyObject *t_DSSTHarvester_get__b1(t_DSSTHarvester *self, void *data);
          static PyObject *t_DSSTHarvester_get__b4(t_DSSTHarvester *self, void *data);
          static PyObject *t_DSSTHarvester_get__jacobiansColumnsNames(t_DSSTHarvester *self, void *data);
          static PyObject *t_DSSTHarvester_get__orbitType(t_DSSTHarvester *self, void *data);
          static PyObject *t_DSSTHarvester_get__positionAngleType(t_DSSTHarvester *self, void *data);
          static int t_DSSTHarvester_set__referenceState(t_DSSTHarvester *self, PyObject *arg, void *data);
          static PyGetSetDef t_DSSTHarvester__fields_[] = {
            DECLARE_GET_FIELD(t_DSSTHarvester, b1),
            DECLARE_GET_FIELD(t_DSSTHarvester, b4),
            DECLARE_GET_FIELD(t_DSSTHarvester, jacobiansColumnsNames),
            DECLARE_GET_FIELD(t_DSSTHarvester, orbitType),
            DECLARE_GET_FIELD(t_DSSTHarvester, positionAngleType),
            DECLARE_SET_FIELD(t_DSSTHarvester, referenceState),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DSSTHarvester__methods_[] = {
            DECLARE_METHOD(t_DSSTHarvester, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTHarvester, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DSSTHarvester, freezeColumnsNames, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, getB1, METH_NOARGS),
            DECLARE_METHOD(t_DSSTHarvester, getB2, METH_O),
            DECLARE_METHOD(t_DSSTHarvester, getB3, METH_O),
            DECLARE_METHOD(t_DSSTHarvester, getB4, METH_NOARGS),
            DECLARE_METHOD(t_DSSTHarvester, getJacobiansColumnsNames, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, getOrbitType, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, getParametersJacobian, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, getPositionAngleType, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, getStateTransitionMatrix, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, initializeFieldShortPeriodTerms, METH_O),
            DECLARE_METHOD(t_DSSTHarvester, setReferenceState, METH_VARARGS),
            DECLARE_METHOD(t_DSSTHarvester, updateFieldShortPeriodTerms, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DSSTHarvester)[] = {
            { Py_tp_methods, t_DSSTHarvester__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_DSSTHarvester__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DSSTHarvester)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::AbstractMatricesHarvester),
            NULL
          };

          DEFINE_TYPE(DSSTHarvester, t_DSSTHarvester, DSSTHarvester);

          void t_DSSTHarvester::install(PyObject *module)
          {
            installType(&PY_TYPE(DSSTHarvester), &PY_TYPE_DEF(DSSTHarvester), module, "DSSTHarvester", 0);
          }

          void t_DSSTHarvester::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTHarvester), "class_", make_descriptor(DSSTHarvester::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTHarvester), "wrapfn_", make_descriptor(t_DSSTHarvester::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTHarvester), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DSSTHarvester_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DSSTHarvester::initializeClass, 1)))
              return NULL;
            return t_DSSTHarvester::wrap_Object(DSSTHarvester(((t_DSSTHarvester *) arg)->object.this$));
          }
          static PyObject *t_DSSTHarvester_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DSSTHarvester::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_DSSTHarvester_freezeColumnsNames(t_DSSTHarvester *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.freezeColumnsNames());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "freezeColumnsNames", args, 2);
          }

          static PyObject *t_DSSTHarvester_getB1(t_DSSTHarvester *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getB1());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_DSSTHarvester_getB2(t_DSSTHarvester *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getB2(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getB2", arg);
            return NULL;
          }

          static PyObject *t_DSSTHarvester_getB3(t_DSSTHarvester *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getB3(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getB3", arg);
            return NULL;
          }

          static PyObject *t_DSSTHarvester_getB4(t_DSSTHarvester *self)
          {
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
            OBJ_CALL(result = self->object.getB4());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          static PyObject *t_DSSTHarvester_getJacobiansColumnsNames(t_DSSTHarvester *self, PyObject *args)
          {
            ::java::util::List result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getJacobiansColumnsNames());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "getJacobiansColumnsNames", args, 2);
          }

          static PyObject *t_DSSTHarvester_getOrbitType(t_DSSTHarvester *self, PyObject *args)
          {
            ::org::orekit::orbits::OrbitType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getOrbitType());
              return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "getOrbitType", args, 2);
          }

          static PyObject *t_DSSTHarvester_getParametersJacobian(t_DSSTHarvester *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getParametersJacobian(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "getParametersJacobian", args, 2);
          }

          static PyObject *t_DSSTHarvester_getPositionAngleType(t_DSSTHarvester *self, PyObject *args)
          {
            ::org::orekit::orbits::PositionAngleType result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getPositionAngleType());
              return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "getPositionAngleType", args, 2);
          }

          static PyObject *t_DSSTHarvester_getStateTransitionMatrix(t_DSSTHarvester *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getStateTransitionMatrix(a0));
              return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "getStateTransitionMatrix", args, 2);
          }

          static PyObject *t_DSSTHarvester_initializeFieldShortPeriodTerms(t_DSSTHarvester *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.initializeFieldShortPeriodTerms(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "initializeFieldShortPeriodTerms", arg);
            return NULL;
          }

          static PyObject *t_DSSTHarvester_setReferenceState(t_DSSTHarvester *self, PyObject *args)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setReferenceState(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(DSSTHarvester), (PyObject *) self, "setReferenceState", args, 2);
          }

          static PyObject *t_DSSTHarvester_updateFieldShortPeriodTerms(t_DSSTHarvester *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(self->object.updateFieldShortPeriodTerms(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "updateFieldShortPeriodTerms", arg);
            return NULL;
          }

          static PyObject *t_DSSTHarvester_get__b1(t_DSSTHarvester *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getB1());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_DSSTHarvester_get__b4(t_DSSTHarvester *self, void *data)
          {
            ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
            OBJ_CALL(value = self->object.getB4());
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
          }

          static PyObject *t_DSSTHarvester_get__jacobiansColumnsNames(t_DSSTHarvester *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getJacobiansColumnsNames());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_DSSTHarvester_get__orbitType(t_DSSTHarvester *self, void *data)
          {
            ::org::orekit::orbits::OrbitType value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
          }

          static PyObject *t_DSSTHarvester_get__positionAngleType(t_DSSTHarvester *self, void *data)
          {
            ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
            OBJ_CALL(value = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
          }

          static int t_DSSTHarvester_set__referenceState(t_DSSTHarvester *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
              {
                INT_CALL(self->object.setReferenceState(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "referenceState", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/PythonComparableMeasurement.h"
#include "org/orekit/estimation/measurements/ComparableMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *PythonComparableMeasurement::class$ = NULL;
        jmethodID *PythonComparableMeasurement::mids$ = NULL;
        bool PythonComparableMeasurement::live$ = false;

        jclass PythonComparableMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/PythonComparableMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_compareTo_5d68114462a4e82e] = env->getMethodID(cls, "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getObservedValue_7cdc325af0834901] = env->getMethodID(cls, "getObservedValue", "()[D");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonComparableMeasurement::PythonComparableMeasurement() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonComparableMeasurement::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonComparableMeasurement::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonComparableMeasurement::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        static PyObject *t_PythonComparableMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonComparableMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonComparableMeasurement_init_(t_PythonComparableMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonComparableMeasurement_finalize(t_PythonComparableMeasurement *self);
        static PyObject *t_PythonComparableMeasurement_pythonExtension(t_PythonComparableMeasurement *self, PyObject *args);
        static jint JNICALL t_PythonComparableMeasurement_compareTo0(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonComparableMeasurement_getDate1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonComparableMeasurement_getObservedValue2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonComparableMeasurement_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonComparableMeasurement_get__self(t_PythonComparableMeasurement *self, void *data);
        static PyGetSetDef t_PythonComparableMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_PythonComparableMeasurement, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonComparableMeasurement__methods_[] = {
          DECLARE_METHOD(t_PythonComparableMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonComparableMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonComparableMeasurement, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonComparableMeasurement, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonComparableMeasurement)[] = {
          { Py_tp_methods, t_PythonComparableMeasurement__methods_ },
          { Py_tp_init, (void *) t_PythonComparableMeasurement_init_ },
          { Py_tp_getset, t_PythonComparableMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonComparableMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonComparableMeasurement, t_PythonComparableMeasurement, PythonComparableMeasurement);

        void t_PythonComparableMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonComparableMeasurement), &PY_TYPE_DEF(PythonComparableMeasurement), module, "PythonComparableMeasurement", 1);
        }

        void t_PythonComparableMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonComparableMeasurement), "class_", make_descriptor(PythonComparableMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonComparableMeasurement), "wrapfn_", make_descriptor(t_PythonComparableMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonComparableMeasurement), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonComparableMeasurement::initializeClass);
          JNINativeMethod methods[] = {
            { "compareTo", "(Lorg/orekit/estimation/measurements/ComparableMeasurement;)I", (void *) t_PythonComparableMeasurement_compareTo0 },
            { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonComparableMeasurement_getDate1 },
            { "getObservedValue", "()[D", (void *) t_PythonComparableMeasurement_getObservedValue2 },
            { "pythonDecRef", "()V", (void *) t_PythonComparableMeasurement_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonComparableMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonComparableMeasurement::initializeClass, 1)))
            return NULL;
          return t_PythonComparableMeasurement::wrap_Object(PythonComparableMeasurement(((t_PythonComparableMeasurement *) arg)->object.this$));
        }
        static PyObject *t_PythonComparableMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonComparableMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonComparableMeasurement_init_(t_PythonComparableMeasurement *self, PyObject *args, PyObject *kwds)
        {
          PythonComparableMeasurement object((jobject) NULL);

          INT_CALL(object = PythonComparableMeasurement());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonComparableMeasurement_finalize(t_PythonComparableMeasurement *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonComparableMeasurement_pythonExtension(t_PythonComparableMeasurement *self, PyObject *args)
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

        static jint JNICALL t_PythonComparableMeasurement_compareTo0(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          jint value;
          PyObject *o0 = ::org::orekit::estimation::measurements::t_ComparableMeasurement::wrap_Object(::org::orekit::estimation::measurements::ComparableMeasurement(a0));
          PyObject *result = PyObject_CallMethod(obj, "compareTo", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "I", &value))
          {
            throwTypeError("compareTo", result);
            Py_DECREF(result);
          }
          else
          {
            Py_DECREF(result);
            return value;
          }

          return (jint) 0;
        }

        static jobject JNICALL t_PythonComparableMeasurement_getDate1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getDate", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getDate", result);
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

        static jobject JNICALL t_PythonComparableMeasurement_getObservedValue2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          JArray< jdouble > value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getObservedValue", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "[D", &value))
          {
            throwTypeError("getObservedValue", result);
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

        static void JNICALL t_PythonComparableMeasurement_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonComparableMeasurement::mids$[PythonComparableMeasurement::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonComparableMeasurement_get__self(t_PythonComparableMeasurement *self, void *data)
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
#include "org/hipparchus/analysis/CalculusFieldUnivariateMatrixFunction.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldUnivariateMatrixFunction::class$ = NULL;
      jmethodID *CalculusFieldUnivariateMatrixFunction::mids$ = NULL;
      bool CalculusFieldUnivariateMatrixFunction::live$ = false;

      jclass CalculusFieldUnivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldUnivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_452b3a4b4c579cdb] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > CalculusFieldUnivariateMatrixFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_value_452b3a4b4c579cdb], a0.this$));
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
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_of_(t_CalculusFieldUnivariateMatrixFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_value(t_CalculusFieldUnivariateMatrixFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_get__parameters_(t_CalculusFieldUnivariateMatrixFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldUnivariateMatrixFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldUnivariateMatrixFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldUnivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldUnivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldUnivariateMatrixFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldUnivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldUnivariateMatrixFunction)[] = {
        { Py_tp_methods, t_CalculusFieldUnivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldUnivariateMatrixFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldUnivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldUnivariateMatrixFunction, t_CalculusFieldUnivariateMatrixFunction, CalculusFieldUnivariateMatrixFunction);
      PyObject *t_CalculusFieldUnivariateMatrixFunction::wrap_Object(const CalculusFieldUnivariateMatrixFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateMatrixFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateMatrixFunction *self = (t_CalculusFieldUnivariateMatrixFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldUnivariateMatrixFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldUnivariateMatrixFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldUnivariateMatrixFunction *self = (t_CalculusFieldUnivariateMatrixFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldUnivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldUnivariateMatrixFunction), &PY_TYPE_DEF(CalculusFieldUnivariateMatrixFunction), module, "CalculusFieldUnivariateMatrixFunction", 0);
      }

      void t_CalculusFieldUnivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateMatrixFunction), "class_", make_descriptor(CalculusFieldUnivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateMatrixFunction), "wrapfn_", make_descriptor(t_CalculusFieldUnivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldUnivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldUnivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldUnivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldUnivariateMatrixFunction::wrap_Object(CalculusFieldUnivariateMatrixFunction(((t_CalculusFieldUnivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldUnivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldUnivariateMatrixFunction_of_(t_CalculusFieldUnivariateMatrixFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldUnivariateMatrixFunction_value(t_CalculusFieldUnivariateMatrixFunction *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldUnivariateMatrixFunction_get__parameters_(t_CalculusFieldUnivariateMatrixFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/function/Supplier.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace function {

      ::java::lang::Class *Supplier::class$ = NULL;
      jmethodID *Supplier::mids$ = NULL;
      bool Supplier::live$ = false;

      jclass Supplier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/function/Supplier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_get_dfd7647d9110ac9f] = env->getMethodID(cls, "get", "()Ljava/lang/Object;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object Supplier::get$() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_dfd7647d9110ac9f]));
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
      static PyObject *t_Supplier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Supplier_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Supplier_of_(t_Supplier *self, PyObject *args);
      static PyObject *t_Supplier_get(t_Supplier *self);
      static PyObject *t_Supplier_get__parameters_(t_Supplier *self, void *data);
      static PyGetSetDef t_Supplier__fields_[] = {
        DECLARE_GET_FIELD(t_Supplier, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Supplier__methods_[] = {
        DECLARE_METHOD(t_Supplier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Supplier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Supplier, of_, METH_VARARGS),
        DECLARE_METHOD(t_Supplier, get, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Supplier)[] = {
        { Py_tp_methods, t_Supplier__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Supplier__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Supplier)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Supplier, t_Supplier, Supplier);
      PyObject *t_Supplier::wrap_Object(const Supplier& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Supplier::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Supplier *self = (t_Supplier *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_Supplier::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_Supplier::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_Supplier *self = (t_Supplier *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_Supplier::install(PyObject *module)
      {
        installType(&PY_TYPE(Supplier), &PY_TYPE_DEF(Supplier), module, "Supplier", 0);
      }

      void t_Supplier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Supplier), "class_", make_descriptor(Supplier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Supplier), "wrapfn_", make_descriptor(t_Supplier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Supplier), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Supplier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Supplier::initializeClass, 1)))
          return NULL;
        return t_Supplier::wrap_Object(Supplier(((t_Supplier *) arg)->object.this$));
      }
      static PyObject *t_Supplier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Supplier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Supplier_of_(t_Supplier *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_Supplier_get(t_Supplier *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.get$());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }
      static PyObject *t_Supplier_get__parameters_(t_Supplier *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/Ndm.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *Ndm::class$ = NULL;
          jmethodID *Ndm::mids$ = NULL;
          bool Ndm::live$ = false;

          jclass Ndm::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/Ndm");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_694ad53d6db8f702] = env->getMethodID(cls, "<init>", "(Ljava/util/List;Ljava/util/List;)V");
              mids$[mid_getComments_a6156df500549a58] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
              mids$[mid_getConstituents_a6156df500549a58] = env->getMethodID(cls, "getConstituents", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Ndm::Ndm(const ::java::util::List & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_694ad53d6db8f702, a0.this$, a1.this$)) {}

          ::java::util::List Ndm::getComments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_a6156df500549a58]));
          }

          ::java::util::List Ndm::getConstituents() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getConstituents_a6156df500549a58]));
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
          static PyObject *t_Ndm_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Ndm_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Ndm_init_(t_Ndm *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Ndm_getComments(t_Ndm *self);
          static PyObject *t_Ndm_getConstituents(t_Ndm *self);
          static PyObject *t_Ndm_get__comments(t_Ndm *self, void *data);
          static PyObject *t_Ndm_get__constituents(t_Ndm *self, void *data);
          static PyGetSetDef t_Ndm__fields_[] = {
            DECLARE_GET_FIELD(t_Ndm, comments),
            DECLARE_GET_FIELD(t_Ndm, constituents),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Ndm__methods_[] = {
            DECLARE_METHOD(t_Ndm, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Ndm, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Ndm, getComments, METH_NOARGS),
            DECLARE_METHOD(t_Ndm, getConstituents, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Ndm)[] = {
            { Py_tp_methods, t_Ndm__methods_ },
            { Py_tp_init, (void *) t_Ndm_init_ },
            { Py_tp_getset, t_Ndm__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Ndm)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Ndm, t_Ndm, Ndm);

          void t_Ndm::install(PyObject *module)
          {
            installType(&PY_TYPE(Ndm), &PY_TYPE_DEF(Ndm), module, "Ndm", 0);
          }

          void t_Ndm::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Ndm), "class_", make_descriptor(Ndm::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Ndm), "wrapfn_", make_descriptor(t_Ndm::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Ndm), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Ndm_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Ndm::initializeClass, 1)))
              return NULL;
            return t_Ndm::wrap_Object(Ndm(((t_Ndm *) arg)->object.this$));
          }
          static PyObject *t_Ndm_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Ndm::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Ndm_init_(t_Ndm *self, PyObject *args, PyObject *kwds)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List a1((jobject) NULL);
            PyTypeObject **p1;
            Ndm object((jobject) NULL);

            if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::java::util::t_List::parameters_))
            {
              INT_CALL(object = Ndm(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_Ndm_getComments(t_Ndm *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getComments());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_Ndm_getConstituents(t_Ndm *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getConstituents());
            return ::java::util::t_List::wrap_Object(result);
          }

          static PyObject *t_Ndm_get__comments(t_Ndm *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getComments());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_Ndm_get__constituents(t_Ndm *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getConstituents());
            return ::java::util::t_List::wrap_Object(value);
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
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/spherical/twod/SphericalPolygonsSet.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "java/lang/Class.h"
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
              mids$[mid_init$_babed981d6ef92a1] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/spherical/twod/SphericalPolygonsSet;)V");
              mids$[mid_alongTileDirection_c57b22dac91cacbc] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSingularPoints_a6156df500549a58] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DivertedSingularityAiming::DivertedSingularityAiming(const ::org::hipparchus::geometry::spherical::twod::SphericalPolygonsSet & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_babed981d6ef92a1, a0.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D DivertedSingularityAiming::alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_alongTileDirection_c57b22dac91cacbc], a0.this$, a1.this$));
          }

          ::java::util::List DivertedSingularityAiming::getSingularPoints() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSingularPoints_a6156df500549a58]));
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
#include "org/orekit/estimation/measurements/generation/AbstractMeasurementBuilder.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *AbstractMeasurementBuilder::class$ = NULL;
          jmethodID *AbstractMeasurementBuilder::mids$ = NULL;
          bool AbstractMeasurementBuilder::live$ = false;

          jclass AbstractMeasurementBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/AbstractMeasurementBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addModifier_fc816f44bfa3d437] = env->getMethodID(cls, "addModifier", "(Lorg/orekit/estimation/measurements/EstimationModifier;)V");
              mids$[mid_getModifiers_a6156df500549a58] = env->getMethodID(cls, "getModifiers", "()Ljava/util/List;");
              mids$[mid_getSatellites_ff20f279f9ba9f9e] = env->getMethodID(cls, "getSatellites", "()[Lorg/orekit/estimation/measurements/ObservableSatellite;");
              mids$[mid_init_d958a9bfde45c759] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getEnd_aaa854c403487cf3] = env->getMethodID(cls, "getEnd", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTheoreticalStandardDeviation_7cdc325af0834901] = env->getMethodID(cls, "getTheoreticalStandardDeviation", "()[D");
              mids$[mid_getBaseWeight_7cdc325af0834901] = env->getMethodID(cls, "getBaseWeight", "()[D");
              mids$[mid_getNoise_7cdc325af0834901] = env->getMethodID(cls, "getNoise", "()[D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void AbstractMeasurementBuilder::addModifier(const ::org::orekit::estimation::measurements::EstimationModifier & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addModifier_fc816f44bfa3d437], a0.this$);
          }

          ::java::util::List AbstractMeasurementBuilder::getModifiers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getModifiers_a6156df500549a58]));
          }

          JArray< ::org::orekit::estimation::measurements::ObservableSatellite > AbstractMeasurementBuilder::getSatellites() const
          {
            return JArray< ::org::orekit::estimation::measurements::ObservableSatellite >(env->callObjectMethod(this$, mids$[mid_getSatellites_ff20f279f9ba9f9e]));
          }

          void AbstractMeasurementBuilder::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_d958a9bfde45c759], a0.this$, a1.this$);
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
          static PyObject *t_AbstractMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractMeasurementBuilder_of_(t_AbstractMeasurementBuilder *self, PyObject *args);
          static PyObject *t_AbstractMeasurementBuilder_addModifier(t_AbstractMeasurementBuilder *self, PyObject *arg);
          static PyObject *t_AbstractMeasurementBuilder_getModifiers(t_AbstractMeasurementBuilder *self);
          static PyObject *t_AbstractMeasurementBuilder_getSatellites(t_AbstractMeasurementBuilder *self);
          static PyObject *t_AbstractMeasurementBuilder_init(t_AbstractMeasurementBuilder *self, PyObject *args);
          static PyObject *t_AbstractMeasurementBuilder_get__modifiers(t_AbstractMeasurementBuilder *self, void *data);
          static PyObject *t_AbstractMeasurementBuilder_get__satellites(t_AbstractMeasurementBuilder *self, void *data);
          static PyObject *t_AbstractMeasurementBuilder_get__parameters_(t_AbstractMeasurementBuilder *self, void *data);
          static PyGetSetDef t_AbstractMeasurementBuilder__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractMeasurementBuilder, modifiers),
            DECLARE_GET_FIELD(t_AbstractMeasurementBuilder, satellites),
            DECLARE_GET_FIELD(t_AbstractMeasurementBuilder, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractMeasurementBuilder__methods_[] = {
            DECLARE_METHOD(t_AbstractMeasurementBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, of_, METH_VARARGS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, addModifier, METH_O),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, getModifiers, METH_NOARGS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, getSatellites, METH_NOARGS),
            DECLARE_METHOD(t_AbstractMeasurementBuilder, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractMeasurementBuilder)[] = {
            { Py_tp_methods, t_AbstractMeasurementBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractMeasurementBuilder__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractMeasurementBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractMeasurementBuilder, t_AbstractMeasurementBuilder, AbstractMeasurementBuilder);
          PyObject *t_AbstractMeasurementBuilder::wrap_Object(const AbstractMeasurementBuilder& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractMeasurementBuilder::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractMeasurementBuilder *self = (t_AbstractMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AbstractMeasurementBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractMeasurementBuilder::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractMeasurementBuilder *self = (t_AbstractMeasurementBuilder *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AbstractMeasurementBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractMeasurementBuilder), &PY_TYPE_DEF(AbstractMeasurementBuilder), module, "AbstractMeasurementBuilder", 0);
          }

          void t_AbstractMeasurementBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurementBuilder), "class_", make_descriptor(AbstractMeasurementBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurementBuilder), "wrapfn_", make_descriptor(t_AbstractMeasurementBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractMeasurementBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractMeasurementBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractMeasurementBuilder::initializeClass, 1)))
              return NULL;
            return t_AbstractMeasurementBuilder::wrap_Object(AbstractMeasurementBuilder(((t_AbstractMeasurementBuilder *) arg)->object.this$));
          }
          static PyObject *t_AbstractMeasurementBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractMeasurementBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractMeasurementBuilder_of_(t_AbstractMeasurementBuilder *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AbstractMeasurementBuilder_addModifier(t_AbstractMeasurementBuilder *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimationModifier a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimationModifier::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimationModifier::parameters_))
            {
              OBJ_CALL(self->object.addModifier(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addModifier", arg);
            return NULL;
          }

          static PyObject *t_AbstractMeasurementBuilder_getModifiers(t_AbstractMeasurementBuilder *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(result);
          }

          static PyObject *t_AbstractMeasurementBuilder_getSatellites(t_AbstractMeasurementBuilder *self)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellites());
            return JArray<jobject>(result.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }

          static PyObject *t_AbstractMeasurementBuilder_init(t_AbstractMeasurementBuilder *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }
          static PyObject *t_AbstractMeasurementBuilder_get__parameters_(t_AbstractMeasurementBuilder *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_AbstractMeasurementBuilder_get__modifiers(t_AbstractMeasurementBuilder *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getModifiers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_AbstractMeasurementBuilder_get__satellites(t_AbstractMeasurementBuilder *self, void *data)
          {
            JArray< ::org::orekit::estimation::measurements::ObservableSatellite > value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return JArray<jobject>(value.this$).wrap(::org::orekit::estimation::measurements::t_ObservableSatellite::wrap_jobject);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/SingleBodyRelativeAttraction.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *SingleBodyRelativeAttraction::class$ = NULL;
        jmethodID *SingleBodyRelativeAttraction::mids$ = NULL;
        bool SingleBodyRelativeAttraction::live$ = false;
        ::java::lang::String *SingleBodyRelativeAttraction::ATTRACTION_COEFFICIENT_SUFFIX = NULL;

        jclass SingleBodyRelativeAttraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/SingleBodyRelativeAttraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_245df9da6b035d3e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ATTRACTION_COEFFICIENT_SUFFIX = new ::java::lang::String(env->getStaticObjectField(cls, "ATTRACTION_COEFFICIENT_SUFFIX", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SingleBodyRelativeAttraction::SingleBodyRelativeAttraction(const ::org::orekit::bodies::CelestialBody & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_245df9da6b035d3e, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D SingleBodyRelativeAttraction::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_78989e44b99f7cc2], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SingleBodyRelativeAttraction::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_00aba28d3abe9a8c], a0.this$, a1.this$));
        }

        jboolean SingleBodyRelativeAttraction::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_e470b6d9e0d979db]);
        }

        ::java::util::List SingleBodyRelativeAttraction::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
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
        static PyObject *t_SingleBodyRelativeAttraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SingleBodyRelativeAttraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SingleBodyRelativeAttraction_init_(t_SingleBodyRelativeAttraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SingleBodyRelativeAttraction_acceleration(t_SingleBodyRelativeAttraction *self, PyObject *args);
        static PyObject *t_SingleBodyRelativeAttraction_dependsOnPositionOnly(t_SingleBodyRelativeAttraction *self);
        static PyObject *t_SingleBodyRelativeAttraction_getParametersDrivers(t_SingleBodyRelativeAttraction *self);
        static PyObject *t_SingleBodyRelativeAttraction_get__parametersDrivers(t_SingleBodyRelativeAttraction *self, void *data);
        static PyGetSetDef t_SingleBodyRelativeAttraction__fields_[] = {
          DECLARE_GET_FIELD(t_SingleBodyRelativeAttraction, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SingleBodyRelativeAttraction__methods_[] = {
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_SingleBodyRelativeAttraction, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SingleBodyRelativeAttraction)[] = {
          { Py_tp_methods, t_SingleBodyRelativeAttraction__methods_ },
          { Py_tp_init, (void *) t_SingleBodyRelativeAttraction_init_ },
          { Py_tp_getset, t_SingleBodyRelativeAttraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SingleBodyRelativeAttraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SingleBodyRelativeAttraction, t_SingleBodyRelativeAttraction, SingleBodyRelativeAttraction);

        void t_SingleBodyRelativeAttraction::install(PyObject *module)
        {
          installType(&PY_TYPE(SingleBodyRelativeAttraction), &PY_TYPE_DEF(SingleBodyRelativeAttraction), module, "SingleBodyRelativeAttraction", 0);
        }

        void t_SingleBodyRelativeAttraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyRelativeAttraction), "class_", make_descriptor(SingleBodyRelativeAttraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyRelativeAttraction), "wrapfn_", make_descriptor(t_SingleBodyRelativeAttraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyRelativeAttraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(SingleBodyRelativeAttraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SingleBodyRelativeAttraction), "ATTRACTION_COEFFICIENT_SUFFIX", make_descriptor(j2p(*SingleBodyRelativeAttraction::ATTRACTION_COEFFICIENT_SUFFIX)));
        }

        static PyObject *t_SingleBodyRelativeAttraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SingleBodyRelativeAttraction::initializeClass, 1)))
            return NULL;
          return t_SingleBodyRelativeAttraction::wrap_Object(SingleBodyRelativeAttraction(((t_SingleBodyRelativeAttraction *) arg)->object.this$));
        }
        static PyObject *t_SingleBodyRelativeAttraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SingleBodyRelativeAttraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SingleBodyRelativeAttraction_init_(t_SingleBodyRelativeAttraction *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
          SingleBodyRelativeAttraction object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &a0))
          {
            INT_CALL(object = SingleBodyRelativeAttraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SingleBodyRelativeAttraction_acceleration(t_SingleBodyRelativeAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_SingleBodyRelativeAttraction_dependsOnPositionOnly(t_SingleBodyRelativeAttraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SingleBodyRelativeAttraction_getParametersDrivers(t_SingleBodyRelativeAttraction *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_SingleBodyRelativeAttraction_get__parametersDrivers(t_SingleBodyRelativeAttraction *self, void *data)
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
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/geometry/spherical/twod/Sphere2D.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/spherical/twod/S2Point.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/Space.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace twod {

          ::java::lang::Class *S2Point::class$ = NULL;
          jmethodID *S2Point::mids$ = NULL;
          bool S2Point::live$ = false;
          S2Point *S2Point::MINUS_I = NULL;
          S2Point *S2Point::MINUS_J = NULL;
          S2Point *S2Point::MINUS_K = NULL;
          S2Point *S2Point::NaN = NULL;
          S2Point *S2Point::PLUS_I = NULL;
          S2Point *S2Point::PLUS_J = NULL;
          S2Point *S2Point::PLUS_K = NULL;

          jclass S2Point::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/twod/S2Point");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a94622407b723689] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
              mids$[mid_distance_726dc963fac3505e] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_distance_8bb7ccdc6246d177] = env->getStaticMethodID(cls, "distance", "(Lorg/hipparchus/geometry/spherical/twod/S2Point;Lorg/hipparchus/geometry/spherical/twod/S2Point;)D");
              mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
              mids$[mid_equalsIeee754_229c87223f486349] = env->getMethodID(cls, "equalsIeee754", "(Ljava/lang/Object;)Z");
              mids$[mid_getPhi_456d9a2f64d6b28d] = env->getMethodID(cls, "getPhi", "()D");
              mids$[mid_getSpace_0438ef5f9a5edb53] = env->getMethodID(cls, "getSpace", "()Lorg/hipparchus/geometry/Space;");
              mids$[mid_getTheta_456d9a2f64d6b28d] = env->getMethodID(cls, "getTheta", "()D");
              mids$[mid_getVector_17a952530a808943] = env->getMethodID(cls, "getVector", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
              mids$[mid_isNaN_e470b6d9e0d979db] = env->getMethodID(cls, "isNaN", "()Z");
              mids$[mid_negate_71b7da0eb14488b0] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/geometry/spherical/twod/S2Point;");
              mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              MINUS_I = new S2Point(env->getStaticObjectField(cls, "MINUS_I", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              MINUS_J = new S2Point(env->getStaticObjectField(cls, "MINUS_J", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              MINUS_K = new S2Point(env->getStaticObjectField(cls, "MINUS_K", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              NaN = new S2Point(env->getStaticObjectField(cls, "NaN", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              PLUS_I = new S2Point(env->getStaticObjectField(cls, "PLUS_I", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              PLUS_J = new S2Point(env->getStaticObjectField(cls, "PLUS_J", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              PLUS_K = new S2Point(env->getStaticObjectField(cls, "PLUS_K", "Lorg/hipparchus/geometry/spherical/twod/S2Point;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          S2Point::S2Point(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a94622407b723689, a0.this$)) {}

          S2Point::S2Point(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

          jdouble S2Point::distance(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_distance_726dc963fac3505e], a0.this$);
          }

          jdouble S2Point::distance(const S2Point & a0, const S2Point & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_distance_8bb7ccdc6246d177], a0.this$, a1.this$);
          }

          jboolean S2Point::equals(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
          }

          jboolean S2Point::equalsIeee754(const ::java::lang::Object & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_equalsIeee754_229c87223f486349], a0.this$);
          }

          jdouble S2Point::getPhi() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPhi_456d9a2f64d6b28d]);
          }

          ::org::hipparchus::geometry::Space S2Point::getSpace() const
          {
            return ::org::hipparchus::geometry::Space(env->callObjectMethod(this$, mids$[mid_getSpace_0438ef5f9a5edb53]));
          }

          jdouble S2Point::getTheta() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTheta_456d9a2f64d6b28d]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D S2Point::getVector() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVector_17a952530a808943]));
          }

          jint S2Point::hashCode() const
          {
            return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
          }

          jboolean S2Point::isNaN() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isNaN_e470b6d9e0d979db]);
          }

          S2Point S2Point::negate() const
          {
            return S2Point(env->callObjectMethod(this$, mids$[mid_negate_71b7da0eb14488b0]));
          }

          ::java::lang::String S2Point::toString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
      namespace spherical {
        namespace twod {
          static PyObject *t_S2Point_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_S2Point_instance_(PyTypeObject *type, PyObject *arg);
          static int t_S2Point_init_(t_S2Point *self, PyObject *args, PyObject *kwds);
          static PyObject *t_S2Point_distance(t_S2Point *self, PyObject *arg);
          static PyObject *t_S2Point_distance_(PyTypeObject *type, PyObject *args);
          static PyObject *t_S2Point_equals(t_S2Point *self, PyObject *args);
          static PyObject *t_S2Point_equalsIeee754(t_S2Point *self, PyObject *arg);
          static PyObject *t_S2Point_getPhi(t_S2Point *self);
          static PyObject *t_S2Point_getSpace(t_S2Point *self);
          static PyObject *t_S2Point_getTheta(t_S2Point *self);
          static PyObject *t_S2Point_getVector(t_S2Point *self);
          static PyObject *t_S2Point_hashCode(t_S2Point *self, PyObject *args);
          static PyObject *t_S2Point_isNaN(t_S2Point *self);
          static PyObject *t_S2Point_negate(t_S2Point *self);
          static PyObject *t_S2Point_toString(t_S2Point *self, PyObject *args);
          static PyObject *t_S2Point_get__naN(t_S2Point *self, void *data);
          static PyObject *t_S2Point_get__phi(t_S2Point *self, void *data);
          static PyObject *t_S2Point_get__space(t_S2Point *self, void *data);
          static PyObject *t_S2Point_get__theta(t_S2Point *self, void *data);
          static PyObject *t_S2Point_get__vector(t_S2Point *self, void *data);
          static PyGetSetDef t_S2Point__fields_[] = {
            DECLARE_GET_FIELD(t_S2Point, naN),
            DECLARE_GET_FIELD(t_S2Point, phi),
            DECLARE_GET_FIELD(t_S2Point, space),
            DECLARE_GET_FIELD(t_S2Point, theta),
            DECLARE_GET_FIELD(t_S2Point, vector),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_S2Point__methods_[] = {
            DECLARE_METHOD(t_S2Point, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_S2Point, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_S2Point, distance, METH_O),
            DECLARE_METHOD(t_S2Point, distance_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_S2Point, equals, METH_VARARGS),
            DECLARE_METHOD(t_S2Point, equalsIeee754, METH_O),
            DECLARE_METHOD(t_S2Point, getPhi, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, getSpace, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, getTheta, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, getVector, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, hashCode, METH_VARARGS),
            DECLARE_METHOD(t_S2Point, isNaN, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, negate, METH_NOARGS),
            DECLARE_METHOD(t_S2Point, toString, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(S2Point)[] = {
            { Py_tp_methods, t_S2Point__methods_ },
            { Py_tp_init, (void *) t_S2Point_init_ },
            { Py_tp_getset, t_S2Point__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(S2Point)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(S2Point, t_S2Point, S2Point);

          void t_S2Point::install(PyObject *module)
          {
            installType(&PY_TYPE(S2Point), &PY_TYPE_DEF(S2Point), module, "S2Point", 0);
          }

          void t_S2Point::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "class_", make_descriptor(S2Point::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "wrapfn_", make_descriptor(t_S2Point::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "boxfn_", make_descriptor(boxObject));
            env->getClass(S2Point::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "MINUS_I", make_descriptor(t_S2Point::wrap_Object(*S2Point::MINUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "MINUS_J", make_descriptor(t_S2Point::wrap_Object(*S2Point::MINUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "MINUS_K", make_descriptor(t_S2Point::wrap_Object(*S2Point::MINUS_K)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "NaN", make_descriptor(t_S2Point::wrap_Object(*S2Point::NaN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "PLUS_I", make_descriptor(t_S2Point::wrap_Object(*S2Point::PLUS_I)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "PLUS_J", make_descriptor(t_S2Point::wrap_Object(*S2Point::PLUS_J)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(S2Point), "PLUS_K", make_descriptor(t_S2Point::wrap_Object(*S2Point::PLUS_K)));
          }

          static PyObject *t_S2Point_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, S2Point::initializeClass, 1)))
              return NULL;
            return t_S2Point::wrap_Object(S2Point(((t_S2Point *) arg)->object.this$));
          }
          static PyObject *t_S2Point_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, S2Point::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_S2Point_init_(t_S2Point *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                S2Point object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  INT_CALL(object = S2Point(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                jdouble a0;
                jdouble a1;
                S2Point object((jobject) NULL);

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  INT_CALL(object = S2Point(a0, a1));
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

          static PyObject *t_S2Point_distance(t_S2Point *self, PyObject *arg)
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

          static PyObject *t_S2Point_distance_(PyTypeObject *type, PyObject *args)
          {
            S2Point a0((jobject) NULL);
            S2Point a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", S2Point::initializeClass, S2Point::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::spherical::twod::S2Point::distance(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "distance_", args);
            return NULL;
          }

          static PyObject *t_S2Point_equals(t_S2Point *self, PyObject *args)
          {
            ::java::lang::Object a0((jobject) NULL);
            jboolean result;

            if (!parseArgs(args, "o", &a0))
            {
              OBJ_CALL(result = self->object.equals(a0));
              Py_RETURN_BOOL(result);
            }

            return callSuper(PY_TYPE(S2Point), (PyObject *) self, "equals", args, 2);
          }

          static PyObject *t_S2Point_equalsIeee754(t_S2Point *self, PyObject *arg)
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

          static PyObject *t_S2Point_getPhi(t_S2Point *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPhi());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_S2Point_getSpace(t_S2Point *self)
          {
            ::org::hipparchus::geometry::Space result((jobject) NULL);
            OBJ_CALL(result = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(result);
          }

          static PyObject *t_S2Point_getTheta(t_S2Point *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTheta());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_S2Point_getVector(t_S2Point *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_S2Point_hashCode(t_S2Point *self, PyObject *args)
          {
            jint result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.hashCode());
              return PyLong_FromLong((long) result);
            }

            return callSuper(PY_TYPE(S2Point), (PyObject *) self, "hashCode", args, 2);
          }

          static PyObject *t_S2Point_isNaN(t_S2Point *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isNaN());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_S2Point_negate(t_S2Point *self)
          {
            S2Point result((jobject) NULL);
            OBJ_CALL(result = self->object.negate());
            return t_S2Point::wrap_Object(result);
          }

          static PyObject *t_S2Point_toString(t_S2Point *self, PyObject *args)
          {
            ::java::lang::String result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.toString());
              return j2p(result);
            }

            return callSuper(PY_TYPE(S2Point), (PyObject *) self, "toString", args, 2);
          }

          static PyObject *t_S2Point_get__naN(t_S2Point *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isNaN());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_S2Point_get__phi(t_S2Point *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPhi());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_S2Point_get__space(t_S2Point *self, void *data)
          {
            ::org::hipparchus::geometry::Space value((jobject) NULL);
            OBJ_CALL(value = self->object.getSpace());
            return ::org::hipparchus::geometry::t_Space::wrap_Object(value);
          }

          static PyObject *t_S2Point_get__theta(t_S2Point *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTheta());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_S2Point_get__vector(t_S2Point *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getVector());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ModifierGradientConverter.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ModifierGradientConverter::class$ = NULL;
          jmethodID *ModifierGradientConverter::mids$ = NULL;
          bool ModifierGradientConverter::live$ = false;

          jclass ModifierGradientConverter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ModifierGradientConverter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1a17f87010a58649] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;ILorg/orekit/attitudes/AttitudeProvider;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ModifierGradientConverter::ModifierGradientConverter(const ::org::orekit::propagation::SpacecraftState & a0, jint a1, const ::org::orekit::attitudes::AttitudeProvider & a2) : ::org::orekit::propagation::integration::AbstractGradientConverter(env->newObject(initializeClass, &mids$, mid_init$_1a17f87010a58649, a0.this$, a1, a2.this$)) {}
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
          static PyObject *t_ModifierGradientConverter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ModifierGradientConverter_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ModifierGradientConverter_init_(t_ModifierGradientConverter *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_ModifierGradientConverter__methods_[] = {
            DECLARE_METHOD(t_ModifierGradientConverter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ModifierGradientConverter, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ModifierGradientConverter)[] = {
            { Py_tp_methods, t_ModifierGradientConverter__methods_ },
            { Py_tp_init, (void *) t_ModifierGradientConverter_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ModifierGradientConverter)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::integration::AbstractGradientConverter),
            NULL
          };

          DEFINE_TYPE(ModifierGradientConverter, t_ModifierGradientConverter, ModifierGradientConverter);

          void t_ModifierGradientConverter::install(PyObject *module)
          {
            installType(&PY_TYPE(ModifierGradientConverter), &PY_TYPE_DEF(ModifierGradientConverter), module, "ModifierGradientConverter", 0);
          }

          void t_ModifierGradientConverter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifierGradientConverter), "class_", make_descriptor(ModifierGradientConverter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifierGradientConverter), "wrapfn_", make_descriptor(t_ModifierGradientConverter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ModifierGradientConverter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ModifierGradientConverter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ModifierGradientConverter::initializeClass, 1)))
              return NULL;
            return t_ModifierGradientConverter::wrap_Object(ModifierGradientConverter(((t_ModifierGradientConverter *) arg)->object.this$));
          }
          static PyObject *t_ModifierGradientConverter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ModifierGradientConverter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ModifierGradientConverter_init_(t_ModifierGradientConverter *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jint a1;
            ::org::orekit::attitudes::AttitudeProvider a2((jobject) NULL);
            ModifierGradientConverter object((jobject) NULL);

            if (!parseArgs(args, "kIk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = ModifierGradientConverter(a0, a1, a2));
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
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/lang/Iterable.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *AggregatableStatistic::class$ = NULL;
        jmethodID *AggregatableStatistic::mids$ = NULL;
        bool AggregatableStatistic::live$ = false;

        jclass AggregatableStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/AggregatableStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_aggregate_776481ea23945f99] = env->getMethodID(cls, "aggregate", "([Ljava/lang/Object;)V");
            mids$[mid_aggregate_187af74f6ed91738] = env->getMethodID(cls, "aggregate", "(Ljava/lang/Iterable;)V");
            mids$[mid_aggregate_7ca0d9438822cb0b] = env->getMethodID(cls, "aggregate", "(Ljava/lang/Object;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AggregatableStatistic::aggregate(const JArray< ::java::lang::Object > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_aggregate_776481ea23945f99], a0.this$);
        }

        void AggregatableStatistic::aggregate(const ::java::lang::Iterable & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_aggregate_187af74f6ed91738], a0.this$);
        }

        void AggregatableStatistic::aggregate(const ::java::lang::Object & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_aggregate_7ca0d9438822cb0b], a0.this$);
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
        static PyObject *t_AggregatableStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AggregatableStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AggregatableStatistic_of_(t_AggregatableStatistic *self, PyObject *args);
        static PyObject *t_AggregatableStatistic_aggregate(t_AggregatableStatistic *self, PyObject *args);
        static PyObject *t_AggregatableStatistic_get__parameters_(t_AggregatableStatistic *self, void *data);
        static PyGetSetDef t_AggregatableStatistic__fields_[] = {
          DECLARE_GET_FIELD(t_AggregatableStatistic, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AggregatableStatistic__methods_[] = {
          DECLARE_METHOD(t_AggregatableStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AggregatableStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AggregatableStatistic, of_, METH_VARARGS),
          DECLARE_METHOD(t_AggregatableStatistic, aggregate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AggregatableStatistic)[] = {
          { Py_tp_methods, t_AggregatableStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AggregatableStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AggregatableStatistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AggregatableStatistic, t_AggregatableStatistic, AggregatableStatistic);
        PyObject *t_AggregatableStatistic::wrap_Object(const AggregatableStatistic& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AggregatableStatistic::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AggregatableStatistic *self = (t_AggregatableStatistic *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AggregatableStatistic::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AggregatableStatistic::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AggregatableStatistic *self = (t_AggregatableStatistic *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AggregatableStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(AggregatableStatistic), &PY_TYPE_DEF(AggregatableStatistic), module, "AggregatableStatistic", 0);
        }

        void t_AggregatableStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatableStatistic), "class_", make_descriptor(AggregatableStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatableStatistic), "wrapfn_", make_descriptor(t_AggregatableStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatableStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AggregatableStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AggregatableStatistic::initializeClass, 1)))
            return NULL;
          return t_AggregatableStatistic::wrap_Object(AggregatableStatistic(((t_AggregatableStatistic *) arg)->object.this$));
        }
        static PyObject *t_AggregatableStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AggregatableStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AggregatableStatistic_of_(t_AggregatableStatistic *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AggregatableStatistic_aggregate(t_AggregatableStatistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::java::lang::Object > a0((jobject) NULL);

              if (!parseArgs(args, "[o", &a0))
              {
                OBJ_CALL(self->object.aggregate(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::lang::Iterable a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
              {
                OBJ_CALL(self->object.aggregate(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::lang::Object a0((jobject) NULL);

              if (!parseArgs(args, "O", self->parameters[0], &a0))
              {
                OBJ_CALL(self->object.aggregate(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "aggregate", args);
          return NULL;
        }
        static PyObject *t_AggregatableStatistic_get__parameters_(t_AggregatableStatistic *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
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
          mids$[mid_generate_b7149ea6787a6f3c] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::util::List TimeStampedGenerator::generate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_generate_b7149ea6787a6f3c], a0.this$, a1.this$));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/inference/AlternativeHypothesis.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/inference/AlternativeHypothesis.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace inference {

        ::java::lang::Class *AlternativeHypothesis::class$ = NULL;
        jmethodID *AlternativeHypothesis::mids$ = NULL;
        bool AlternativeHypothesis::live$ = false;
        AlternativeHypothesis *AlternativeHypothesis::GREATER_THAN = NULL;
        AlternativeHypothesis *AlternativeHypothesis::LESS_THAN = NULL;
        AlternativeHypothesis *AlternativeHypothesis::TWO_SIDED = NULL;

        jclass AlternativeHypothesis::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/inference/AlternativeHypothesis");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_48d44e32d373ac66] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/stat/inference/AlternativeHypothesis;");
            mids$[mid_values_4891acb11876446e] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/stat/inference/AlternativeHypothesis;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            GREATER_THAN = new AlternativeHypothesis(env->getStaticObjectField(cls, "GREATER_THAN", "Lorg/hipparchus/stat/inference/AlternativeHypothesis;"));
            LESS_THAN = new AlternativeHypothesis(env->getStaticObjectField(cls, "LESS_THAN", "Lorg/hipparchus/stat/inference/AlternativeHypothesis;"));
            TWO_SIDED = new AlternativeHypothesis(env->getStaticObjectField(cls, "TWO_SIDED", "Lorg/hipparchus/stat/inference/AlternativeHypothesis;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AlternativeHypothesis AlternativeHypothesis::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return AlternativeHypothesis(env->callStaticObjectMethod(cls, mids$[mid_valueOf_48d44e32d373ac66], a0.this$));
        }

        JArray< AlternativeHypothesis > AlternativeHypothesis::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< AlternativeHypothesis >(env->callStaticObjectMethod(cls, mids$[mid_values_4891acb11876446e]));
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
        static PyObject *t_AlternativeHypothesis_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlternativeHypothesis_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AlternativeHypothesis_of_(t_AlternativeHypothesis *self, PyObject *args);
        static PyObject *t_AlternativeHypothesis_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_AlternativeHypothesis_values(PyTypeObject *type);
        static PyObject *t_AlternativeHypothesis_get__parameters_(t_AlternativeHypothesis *self, void *data);
        static PyGetSetDef t_AlternativeHypothesis__fields_[] = {
          DECLARE_GET_FIELD(t_AlternativeHypothesis, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AlternativeHypothesis__methods_[] = {
          DECLARE_METHOD(t_AlternativeHypothesis, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlternativeHypothesis, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AlternativeHypothesis, of_, METH_VARARGS),
          DECLARE_METHOD(t_AlternativeHypothesis, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_AlternativeHypothesis, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AlternativeHypothesis)[] = {
          { Py_tp_methods, t_AlternativeHypothesis__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AlternativeHypothesis__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AlternativeHypothesis)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(AlternativeHypothesis, t_AlternativeHypothesis, AlternativeHypothesis);
        PyObject *t_AlternativeHypothesis::wrap_Object(const AlternativeHypothesis& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlternativeHypothesis::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlternativeHypothesis *self = (t_AlternativeHypothesis *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AlternativeHypothesis::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AlternativeHypothesis::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AlternativeHypothesis *self = (t_AlternativeHypothesis *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AlternativeHypothesis::install(PyObject *module)
        {
          installType(&PY_TYPE(AlternativeHypothesis), &PY_TYPE_DEF(AlternativeHypothesis), module, "AlternativeHypothesis", 0);
        }

        void t_AlternativeHypothesis::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "class_", make_descriptor(AlternativeHypothesis::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "wrapfn_", make_descriptor(t_AlternativeHypothesis::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "boxfn_", make_descriptor(boxObject));
          env->getClass(AlternativeHypothesis::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "GREATER_THAN", make_descriptor(t_AlternativeHypothesis::wrap_Object(*AlternativeHypothesis::GREATER_THAN)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "LESS_THAN", make_descriptor(t_AlternativeHypothesis::wrap_Object(*AlternativeHypothesis::LESS_THAN)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AlternativeHypothesis), "TWO_SIDED", make_descriptor(t_AlternativeHypothesis::wrap_Object(*AlternativeHypothesis::TWO_SIDED)));
        }

        static PyObject *t_AlternativeHypothesis_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AlternativeHypothesis::initializeClass, 1)))
            return NULL;
          return t_AlternativeHypothesis::wrap_Object(AlternativeHypothesis(((t_AlternativeHypothesis *) arg)->object.this$));
        }
        static PyObject *t_AlternativeHypothesis_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AlternativeHypothesis::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AlternativeHypothesis_of_(t_AlternativeHypothesis *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AlternativeHypothesis_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          AlternativeHypothesis result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::inference::AlternativeHypothesis::valueOf(a0));
            return t_AlternativeHypothesis::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_AlternativeHypothesis_values(PyTypeObject *type)
        {
          JArray< AlternativeHypothesis > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::stat::inference::AlternativeHypothesis::values());
          return JArray<jobject>(result.this$).wrap(t_AlternativeHypothesis::wrap_jobject);
        }
        static PyObject *t_AlternativeHypothesis_get__parameters_(t_AlternativeHypothesis *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel.h"
#include "org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace ocm {

              ::java::lang::Class *ShadowModel::class$ = NULL;
              jmethodID *ShadowModel::mids$ = NULL;
              bool ShadowModel::live$ = false;
              ShadowModel *ShadowModel::CONE = NULL;
              ShadowModel *ShadowModel::CYLINDRICAL = NULL;
              ShadowModel *ShadowModel::DUAL_CONE = NULL;
              ShadowModel *ShadowModel::NONE = NULL;

              jclass ShadowModel::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/ocm/ShadowModel");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_76f5e6510551d51c] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;");
                  mids$[mid_values_d4ab690f01c29be0] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CONE = new ShadowModel(env->getStaticObjectField(cls, "CONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;"));
                  CYLINDRICAL = new ShadowModel(env->getStaticObjectField(cls, "CYLINDRICAL", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;"));
                  DUAL_CONE = new ShadowModel(env->getStaticObjectField(cls, "DUAL_CONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;"));
                  NONE = new ShadowModel(env->getStaticObjectField(cls, "NONE", "Lorg/orekit/files/ccsds/ndm/odm/ocm/ShadowModel;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ShadowModel ShadowModel::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return ShadowModel(env->callStaticObjectMethod(cls, mids$[mid_valueOf_76f5e6510551d51c], a0.this$));
              }

              JArray< ShadowModel > ShadowModel::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< ShadowModel >(env->callStaticObjectMethod(cls, mids$[mid_values_d4ab690f01c29be0]));
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
              static PyObject *t_ShadowModel_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShadowModel_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShadowModel_of_(t_ShadowModel *self, PyObject *args);
              static PyObject *t_ShadowModel_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_ShadowModel_values(PyTypeObject *type);
              static PyObject *t_ShadowModel_get__parameters_(t_ShadowModel *self, void *data);
              static PyGetSetDef t_ShadowModel__fields_[] = {
                DECLARE_GET_FIELD(t_ShadowModel, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ShadowModel__methods_[] = {
                DECLARE_METHOD(t_ShadowModel, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShadowModel, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShadowModel, of_, METH_VARARGS),
                DECLARE_METHOD(t_ShadowModel, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_ShadowModel, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ShadowModel)[] = {
                { Py_tp_methods, t_ShadowModel__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ShadowModel__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ShadowModel)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(ShadowModel, t_ShadowModel, ShadowModel);
              PyObject *t_ShadowModel::wrap_Object(const ShadowModel& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ShadowModel::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ShadowModel *self = (t_ShadowModel *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_ShadowModel::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_ShadowModel::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_ShadowModel *self = (t_ShadowModel *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_ShadowModel::install(PyObject *module)
              {
                installType(&PY_TYPE(ShadowModel), &PY_TYPE_DEF(ShadowModel), module, "ShadowModel", 0);
              }

              void t_ShadowModel::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "class_", make_descriptor(ShadowModel::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "wrapfn_", make_descriptor(t_ShadowModel::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "boxfn_", make_descriptor(boxObject));
                env->getClass(ShadowModel::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "CONE", make_descriptor(t_ShadowModel::wrap_Object(*ShadowModel::CONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "CYLINDRICAL", make_descriptor(t_ShadowModel::wrap_Object(*ShadowModel::CYLINDRICAL)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "DUAL_CONE", make_descriptor(t_ShadowModel::wrap_Object(*ShadowModel::DUAL_CONE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShadowModel), "NONE", make_descriptor(t_ShadowModel::wrap_Object(*ShadowModel::NONE)));
              }

              static PyObject *t_ShadowModel_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ShadowModel::initializeClass, 1)))
                  return NULL;
                return t_ShadowModel::wrap_Object(ShadowModel(((t_ShadowModel *) arg)->object.this$));
              }
              static PyObject *t_ShadowModel_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ShadowModel::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ShadowModel_of_(t_ShadowModel *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_ShadowModel_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                ShadowModel result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel::valueOf(a0));
                  return t_ShadowModel::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_ShadowModel_values(PyTypeObject *type)
              {
                JArray< ShadowModel > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::ocm::ShadowModel::values());
                return JArray<jobject>(result.this$).wrap(t_ShadowModel::wrap_jobject);
              }
              static PyObject *t_ShadowModel_get__parameters_(t_ShadowModel *self, void *data)
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
#include "org/orekit/time/SatelliteClockScale.h"
#include "org/orekit/time/TimeScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/DateComponents.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *SatelliteClockScale::class$ = NULL;
      jmethodID *SatelliteClockScale::mids$ = NULL;
      bool SatelliteClockScale::live$ = false;

      jclass SatelliteClockScale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/SatelliteClockScale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_41403bac8067ca19] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;DD)V");
          mids$[mid_countAtDate_e912d21057defe63] = env->getMethodID(cls, "countAtDate", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_dateAtCount_a76f1ca2cc1b76e5] = env->getMethodID(cls, "dateAtCount", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_e912d21057defe63] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_7bc0fd76ee915b72] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SatelliteClockScale::SatelliteClockScale(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::TimeScale & a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_41403bac8067ca19, a0.this$, a1.this$, a2.this$, a3, a4)) {}

      jdouble SatelliteClockScale::countAtDate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_countAtDate_e912d21057defe63], a0.this$);
      }

      ::org::orekit::time::AbsoluteDate SatelliteClockScale::dateAtCount(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_dateAtCount_a76f1ca2cc1b76e5], a0));
      }

      ::java::lang::String SatelliteClockScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
      }

      jdouble SatelliteClockScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_e912d21057defe63], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement SatelliteClockScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_7bc0fd76ee915b72], a0.this$));
      }

      jdouble SatelliteClockScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_ceb6ee9e1c4bbdb1], a0.this$, a1.this$);
      }

      ::java::lang::String SatelliteClockScale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
      static PyObject *t_SatelliteClockScale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SatelliteClockScale_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SatelliteClockScale_init_(t_SatelliteClockScale *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SatelliteClockScale_countAtDate(t_SatelliteClockScale *self, PyObject *arg);
      static PyObject *t_SatelliteClockScale_dateAtCount(t_SatelliteClockScale *self, PyObject *arg);
      static PyObject *t_SatelliteClockScale_getName(t_SatelliteClockScale *self);
      static PyObject *t_SatelliteClockScale_offsetFromTAI(t_SatelliteClockScale *self, PyObject *args);
      static PyObject *t_SatelliteClockScale_offsetToTAI(t_SatelliteClockScale *self, PyObject *args);
      static PyObject *t_SatelliteClockScale_toString(t_SatelliteClockScale *self, PyObject *args);
      static PyObject *t_SatelliteClockScale_get__name(t_SatelliteClockScale *self, void *data);
      static PyGetSetDef t_SatelliteClockScale__fields_[] = {
        DECLARE_GET_FIELD(t_SatelliteClockScale, name),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SatelliteClockScale__methods_[] = {
        DECLARE_METHOD(t_SatelliteClockScale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteClockScale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SatelliteClockScale, countAtDate, METH_O),
        DECLARE_METHOD(t_SatelliteClockScale, dateAtCount, METH_O),
        DECLARE_METHOD(t_SatelliteClockScale, getName, METH_NOARGS),
        DECLARE_METHOD(t_SatelliteClockScale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_SatelliteClockScale, offsetToTAI, METH_VARARGS),
        DECLARE_METHOD(t_SatelliteClockScale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SatelliteClockScale)[] = {
        { Py_tp_methods, t_SatelliteClockScale__methods_ },
        { Py_tp_init, (void *) t_SatelliteClockScale_init_ },
        { Py_tp_getset, t_SatelliteClockScale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SatelliteClockScale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SatelliteClockScale, t_SatelliteClockScale, SatelliteClockScale);

      void t_SatelliteClockScale::install(PyObject *module)
      {
        installType(&PY_TYPE(SatelliteClockScale), &PY_TYPE_DEF(SatelliteClockScale), module, "SatelliteClockScale", 0);
      }

      void t_SatelliteClockScale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteClockScale), "class_", make_descriptor(SatelliteClockScale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteClockScale), "wrapfn_", make_descriptor(t_SatelliteClockScale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteClockScale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SatelliteClockScale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SatelliteClockScale::initializeClass, 1)))
          return NULL;
        return t_SatelliteClockScale::wrap_Object(SatelliteClockScale(((t_SatelliteClockScale *) arg)->object.this$));
      }
      static PyObject *t_SatelliteClockScale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SatelliteClockScale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SatelliteClockScale_init_(t_SatelliteClockScale *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::String a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::org::orekit::time::TimeScale a2((jobject) NULL);
        jdouble a3;
        jdouble a4;
        SatelliteClockScale object((jobject) NULL);

        if (!parseArgs(args, "skkDD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2, &a3, &a4))
        {
          INT_CALL(object = SatelliteClockScale(a0, a1, a2, a3, a4));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_SatelliteClockScale_countAtDate(t_SatelliteClockScale *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.countAtDate(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "countAtDate", arg);
        return NULL;
      }

      static PyObject *t_SatelliteClockScale_dateAtCount(t_SatelliteClockScale *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.dateAtCount(a0));
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "dateAtCount", arg);
        return NULL;
      }

      static PyObject *t_SatelliteClockScale_getName(t_SatelliteClockScale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_SatelliteClockScale_offsetFromTAI(t_SatelliteClockScale *self, PyObject *args)
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

      static PyObject *t_SatelliteClockScale_offsetToTAI(t_SatelliteClockScale *self, PyObject *args)
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

      static PyObject *t_SatelliteClockScale_toString(t_SatelliteClockScale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(SatelliteClockScale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_SatelliteClockScale_get__name(t_SatelliteClockScale *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/RungeKuttaIntegrator.h"
#include "org/hipparchus/ode/nonstiff/ButcherArrayProvider.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEState.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *RungeKuttaIntegrator::class$ = NULL;
        jmethodID *RungeKuttaIntegrator::mids$ = NULL;
        bool RungeKuttaIntegrator::live$ = false;

        jclass RungeKuttaIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/RungeKuttaIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getDefaultStep_456d9a2f64d6b28d] = env->getMethodID(cls, "getDefaultStep", "()D");
            mids$[mid_integrate_7efcd57267e426c3] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEState;D)Lorg/hipparchus/ode/ODEStateAndDerivative;");
            mids$[mid_singleStep_eafa4a11995bfc56] = env->getMethodID(cls, "singleStep", "(Lorg/hipparchus/ode/OrdinaryDifferentialEquation;D[DD)[D");
            mids$[mid_createInterpolator_34096714306c5ce7] = env->getMethodID(cls, "createInterpolator", "(Z[[DLorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/ODEStateAndDerivative;Lorg/hipparchus/ode/EquationsMapper;)Lorg/hipparchus/ode/nonstiff/RungeKuttaStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble RungeKuttaIntegrator::getDefaultStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDefaultStep_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::ode::ODEStateAndDerivative RungeKuttaIntegrator::integrate(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEState & a1, jdouble a2) const
        {
          return ::org::hipparchus::ode::ODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_7efcd57267e426c3], a0.this$, a1.this$, a2));
        }

        JArray< jdouble > RungeKuttaIntegrator::singleStep(const ::org::hipparchus::ode::OrdinaryDifferentialEquation & a0, jdouble a1, const JArray< jdouble > & a2, jdouble a3) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_singleStep_eafa4a11995bfc56], a0.this$, a1, a2.this$, a3));
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
        static PyObject *t_RungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RungeKuttaIntegrator_getDefaultStep(t_RungeKuttaIntegrator *self);
        static PyObject *t_RungeKuttaIntegrator_integrate(t_RungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaIntegrator_singleStep(t_RungeKuttaIntegrator *self, PyObject *args);
        static PyObject *t_RungeKuttaIntegrator_get__defaultStep(t_RungeKuttaIntegrator *self, void *data);
        static PyGetSetDef t_RungeKuttaIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_RungeKuttaIntegrator, defaultStep),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RungeKuttaIntegrator__methods_[] = {
          DECLARE_METHOD(t_RungeKuttaIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RungeKuttaIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RungeKuttaIntegrator, getDefaultStep, METH_NOARGS),
          DECLARE_METHOD(t_RungeKuttaIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_RungeKuttaIntegrator, singleStep, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RungeKuttaIntegrator)[] = {
          { Py_tp_methods, t_RungeKuttaIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_RungeKuttaIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RungeKuttaIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::AbstractIntegrator),
          NULL
        };

        DEFINE_TYPE(RungeKuttaIntegrator, t_RungeKuttaIntegrator, RungeKuttaIntegrator);

        void t_RungeKuttaIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(RungeKuttaIntegrator), &PY_TYPE_DEF(RungeKuttaIntegrator), module, "RungeKuttaIntegrator", 0);
        }

        void t_RungeKuttaIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaIntegrator), "class_", make_descriptor(RungeKuttaIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaIntegrator), "wrapfn_", make_descriptor(t_RungeKuttaIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RungeKuttaIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RungeKuttaIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RungeKuttaIntegrator::initializeClass, 1)))
            return NULL;
          return t_RungeKuttaIntegrator::wrap_Object(RungeKuttaIntegrator(((t_RungeKuttaIntegrator *) arg)->object.this$));
        }
        static PyObject *t_RungeKuttaIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RungeKuttaIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_RungeKuttaIntegrator_getDefaultStep(t_RungeKuttaIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDefaultStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RungeKuttaIntegrator_integrate(t_RungeKuttaIntegrator *self, PyObject *args)
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

          return callSuper(PY_TYPE(RungeKuttaIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_RungeKuttaIntegrator_singleStep(t_RungeKuttaIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::OrdinaryDifferentialEquation a0((jobject) NULL);
          jdouble a1;
          JArray< jdouble > a2((jobject) NULL);
          jdouble a3;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "kD[DD", ::org::hipparchus::ode::OrdinaryDifferentialEquation::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.singleStep(a0, a1, a2, a3));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "singleStep", args);
          return NULL;
        }

        static PyObject *t_RungeKuttaIntegrator_get__defaultStep(t_RungeKuttaIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDefaultStep());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/complex/FieldComplexField.h"
#include "java/util/List.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace complex {

      ::java::lang::Class *FieldComplex::class$ = NULL;
      jmethodID *FieldComplex::mids$ = NULL;
      bool FieldComplex::live$ = false;

      jclass FieldComplex::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/complex/FieldComplex");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_03a16642f77779e7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_init$_46c20bc1304e9cc4] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_abs_fe347867d3dfbc81] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_acos_fe347867d3dfbc81] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_acosh_fe347867d3dfbc81] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_add_e335ffa535ec807c] = env->getMethodID(cls, "add", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_add_ce539a2d22a1271d] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_add_2a1376cabc11c637] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_asin_fe347867d3dfbc81] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_asinh_fe347867d3dfbc81] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_atan_fe347867d3dfbc81] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_atan2_e335ffa535ec807c] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_atanh_fe347867d3dfbc81] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_cbrt_fe347867d3dfbc81] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_ceil_fe347867d3dfbc81] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_conjugate_fe347867d3dfbc81] = env->getMethodID(cls, "conjugate", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_copySign_e335ffa535ec807c] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_copySign_ce539a2d22a1271d] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_cos_fe347867d3dfbc81] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_cosh_fe347867d3dfbc81] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_divide_e335ffa535ec807c] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_divide_ce539a2d22a1271d] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_divide_2a1376cabc11c637] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_equals_f2f09f383af3e2ba] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Z");
          mids$[mid_equals_9f1d94cec701966f] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;D)Z");
          mids$[mid_equals_3843d89860c3d713] = env->getStaticMethodID(cls, "equals", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;I)Z");
          mids$[mid_equalsWithRelativeTolerance_9f1d94cec701966f] = env->getStaticMethodID(cls, "equalsWithRelativeTolerance", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;D)Z");
          mids$[mid_exp_fe347867d3dfbc81] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_expm1_fe347867d3dfbc81] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_floor_fe347867d3dfbc81] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getArgument_e6d4d3215c30992a] = env->getMethodID(cls, "getArgument", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getField_c550e66763263934] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/complex/FieldComplexField;");
          mids$[mid_getI_d153c77c65bc68dd] = env->getStaticMethodID(cls, "getI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getImaginary_e6d4d3215c30992a] = env->getMethodID(cls, "getImaginary", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getImaginaryPart_e6d4d3215c30992a] = env->getMethodID(cls, "getImaginaryPart", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getInf_d153c77c65bc68dd] = env->getStaticMethodID(cls, "getInf", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getMinusI_d153c77c65bc68dd] = env->getStaticMethodID(cls, "getMinusI", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getMinusOne_d153c77c65bc68dd] = env->getStaticMethodID(cls, "getMinusOne", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getNaN_d153c77c65bc68dd] = env->getStaticMethodID(cls, "getNaN", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getOne_d153c77c65bc68dd] = env->getStaticMethodID(cls, "getOne", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getPartsField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getPartsField", "()Lorg/hipparchus/Field;");
          mids$[mid_getPi_fe347867d3dfbc81] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getPi_d153c77c65bc68dd] = env->getStaticMethodID(cls, "getPi", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_getReal_456d9a2f64d6b28d] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getRealPart_e6d4d3215c30992a] = env->getMethodID(cls, "getRealPart", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getZero_d153c77c65bc68dd] = env->getStaticMethodID(cls, "getZero", "(Lorg/hipparchus/Field;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_e335ffa535ec807c] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_isInfinite_e470b6d9e0d979db] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isMathematicalInteger_e470b6d9e0d979db] = env->getMethodID(cls, "isMathematicalInteger", "()Z");
          mids$[mid_isNaN_e470b6d9e0d979db] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_isReal_e470b6d9e0d979db] = env->getMethodID(cls, "isReal", "()Z");
          mids$[mid_isZero_e470b6d9e0d979db] = env->getMethodID(cls, "isZero", "()Z");
          mids$[mid_linearCombination_447df1d4ce356731] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_98bc4c5fdbd494d2] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/complex/FieldComplex;[Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_7ad503e18c9c5784] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_dee6a4c7a12ea295] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_ddd43ad46a3bee22] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_8f777134f031b6c9] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_c46d51195f9443a5] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_linearCombination_9890eb3cc10f0927] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;DLorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_log_fe347867d3dfbc81] = env->getMethodID(cls, "log", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_log10_fe347867d3dfbc81] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_log1p_fe347867d3dfbc81] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiply_e335ffa535ec807c] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiply_ce539a2d22a1271d] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiply_68b4f88cb521e978] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiply_2a1376cabc11c637] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiplyMinusI_fe347867d3dfbc81] = env->getMethodID(cls, "multiplyMinusI", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_multiplyPlusI_fe347867d3dfbc81] = env->getMethodID(cls, "multiplyPlusI", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_negate_fe347867d3dfbc81] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_newInstance_ce539a2d22a1271d] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_nthRoot_0096b74d5921c439] = env->getMethodID(cls, "nthRoot", "(I)Ljava/util/List;");
          mids$[mid_pow_e335ffa535ec807c] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_pow_ce539a2d22a1271d] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_pow_68b4f88cb521e978] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_pow_2a1376cabc11c637] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_reciprocal_fe347867d3dfbc81] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_remainder_e335ffa535ec807c] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_remainder_ce539a2d22a1271d] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_rint_fe347867d3dfbc81] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_rootN_68b4f88cb521e978] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_scalb_68b4f88cb521e978] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sign_fe347867d3dfbc81] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sin_fe347867d3dfbc81] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sinCos_35f2499c71416a1a] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_fe347867d3dfbc81] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sinhCosh_c388a3eefde9d597] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_fe347867d3dfbc81] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_sqrt1z_fe347867d3dfbc81] = env->getMethodID(cls, "sqrt1z", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_subtract_e335ffa535ec807c] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_subtract_ce539a2d22a1271d] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_subtract_2a1376cabc11c637] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_tan_fe347867d3dfbc81] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_tanh_fe347867d3dfbc81] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_toDegrees_fe347867d3dfbc81] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_toRadians_fe347867d3dfbc81] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_ulp_fe347867d3dfbc81] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_valueOf_2a1376cabc11c637] = env->getStaticMethodID(cls, "valueOf", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_valueOf_90ceabb919e66ea9] = env->getStaticMethodID(cls, "valueOf", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");
          mids$[mid_createComplex_90ceabb919e66ea9] = env->getMethodID(cls, "createComplex", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/complex/FieldComplex;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldComplex::FieldComplex(const ::org::hipparchus::CalculusFieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_03a16642f77779e7, a0.this$)) {}

      FieldComplex::FieldComplex(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_46c20bc1304e9cc4, a0.this$, a1.this$)) {}

      FieldComplex FieldComplex::abs() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_abs_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::acos() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_acos_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::acosh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_acosh_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::add(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_add_e335ffa535ec807c], a0.this$));
      }

      FieldComplex FieldComplex::add(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_add_ce539a2d22a1271d], a0));
      }

      FieldComplex FieldComplex::add(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_add_2a1376cabc11c637], a0.this$));
      }

      FieldComplex FieldComplex::asin() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_asin_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::asinh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_asinh_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::atan() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_atan_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::atan2(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_atan2_e335ffa535ec807c], a0.this$));
      }

      FieldComplex FieldComplex::atanh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_atanh_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::cbrt() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_cbrt_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::ceil() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_ceil_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::conjugate() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_conjugate_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::copySign(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_copySign_e335ffa535ec807c], a0.this$));
      }

      FieldComplex FieldComplex::copySign(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_copySign_ce539a2d22a1271d], a0));
      }

      FieldComplex FieldComplex::cos() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_cos_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::cosh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_cosh_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::divide(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_divide_e335ffa535ec807c], a0.this$));
      }

      FieldComplex FieldComplex::divide(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_divide_ce539a2d22a1271d], a0));
      }

      FieldComplex FieldComplex::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_divide_2a1376cabc11c637], a0.this$));
      }

      jboolean FieldComplex::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
      }

      jboolean FieldComplex::equals(const FieldComplex & a0, const FieldComplex & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_f2f09f383af3e2ba], a0.this$, a1.this$);
      }

      jboolean FieldComplex::equals(const FieldComplex & a0, const FieldComplex & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_9f1d94cec701966f], a0.this$, a1.this$, a2);
      }

      jboolean FieldComplex::equals(const FieldComplex & a0, const FieldComplex & a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_3843d89860c3d713], a0.this$, a1.this$, a2);
      }

      jboolean FieldComplex::equalsWithRelativeTolerance(const FieldComplex & a0, const FieldComplex & a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsWithRelativeTolerance_9f1d94cec701966f], a0.this$, a1.this$, a2);
      }

      FieldComplex FieldComplex::exp() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_exp_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::expm1() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_expm1_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::floor() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_floor_fe347867d3dfbc81]));
      }

      ::org::hipparchus::CalculusFieldElement FieldComplex::getArgument() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getArgument_e6d4d3215c30992a]));
      }

      ::org::hipparchus::complex::FieldComplexField FieldComplex::getField() const
      {
        return ::org::hipparchus::complex::FieldComplexField(env->callObjectMethod(this$, mids$[mid_getField_c550e66763263934]));
      }

      FieldComplex FieldComplex::getI(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getI_d153c77c65bc68dd], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldComplex::getImaginary() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getImaginary_e6d4d3215c30992a]));
      }

      ::org::hipparchus::CalculusFieldElement FieldComplex::getImaginaryPart() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getImaginaryPart_e6d4d3215c30992a]));
      }

      FieldComplex FieldComplex::getInf(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getInf_d153c77c65bc68dd], a0.this$));
      }

      FieldComplex FieldComplex::getMinusI(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getMinusI_d153c77c65bc68dd], a0.this$));
      }

      FieldComplex FieldComplex::getMinusOne(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getMinusOne_d153c77c65bc68dd], a0.this$));
      }

      FieldComplex FieldComplex::getNaN(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getNaN_d153c77c65bc68dd], a0.this$));
      }

      FieldComplex FieldComplex::getOne(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getOne_d153c77c65bc68dd], a0.this$));
      }

      ::org::hipparchus::Field FieldComplex::getPartsField() const
      {
        return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getPartsField_70b4bbd3fa378d6b]));
      }

      FieldComplex FieldComplex::getPi() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_getPi_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::getPi(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getPi_d153c77c65bc68dd], a0.this$));
      }

      jdouble FieldComplex::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_456d9a2f64d6b28d]);
      }

      ::org::hipparchus::CalculusFieldElement FieldComplex::getRealPart() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRealPart_e6d4d3215c30992a]));
      }

      FieldComplex FieldComplex::getZero(const ::org::hipparchus::Field & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_getZero_d153c77c65bc68dd], a0.this$));
      }

      jint FieldComplex::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
      }

      FieldComplex FieldComplex::hypot(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_hypot_e335ffa535ec807c], a0.this$));
      }

      jboolean FieldComplex::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_e470b6d9e0d979db]);
      }

      jboolean FieldComplex::isMathematicalInteger() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isMathematicalInteger_e470b6d9e0d979db]);
      }

      jboolean FieldComplex::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_e470b6d9e0d979db]);
      }

      jboolean FieldComplex::isReal() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isReal_e470b6d9e0d979db]);
      }

      jboolean FieldComplex::isZero() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isZero_e470b6d9e0d979db]);
      }

      FieldComplex FieldComplex::linearCombination(const JArray< jdouble > & a0, const JArray< FieldComplex > & a1) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_447df1d4ce356731], a0.this$, a1.this$));
      }

      FieldComplex FieldComplex::linearCombination(const JArray< FieldComplex > & a0, const JArray< FieldComplex > & a1) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_98bc4c5fdbd494d2], a0.this$, a1.this$));
      }

      FieldComplex FieldComplex::linearCombination(const FieldComplex & a0, const FieldComplex & a1, const FieldComplex & a2, const FieldComplex & a3) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_7ad503e18c9c5784], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      FieldComplex FieldComplex::linearCombination(jdouble a0, const FieldComplex & a1, jdouble a2, const FieldComplex & a3) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_dee6a4c7a12ea295], a0, a1.this$, a2, a3.this$));
      }

      FieldComplex FieldComplex::linearCombination(const FieldComplex & a0, const FieldComplex & a1, const FieldComplex & a2, const FieldComplex & a3, const FieldComplex & a4, const FieldComplex & a5) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_ddd43ad46a3bee22], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      FieldComplex FieldComplex::linearCombination(jdouble a0, const FieldComplex & a1, jdouble a2, const FieldComplex & a3, jdouble a4, const FieldComplex & a5) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_8f777134f031b6c9], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      FieldComplex FieldComplex::linearCombination(const FieldComplex & a0, const FieldComplex & a1, const FieldComplex & a2, const FieldComplex & a3, const FieldComplex & a4, const FieldComplex & a5, const FieldComplex & a6, const FieldComplex & a7) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_c46d51195f9443a5], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      FieldComplex FieldComplex::linearCombination(jdouble a0, const FieldComplex & a1, jdouble a2, const FieldComplex & a3, jdouble a4, const FieldComplex & a5, jdouble a6, const FieldComplex & a7) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_linearCombination_9890eb3cc10f0927], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      FieldComplex FieldComplex::log() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_log_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::log10() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_log10_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::log1p() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_log1p_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::multiply(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiply_e335ffa535ec807c], a0.this$));
      }

      FieldComplex FieldComplex::multiply(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiply_ce539a2d22a1271d], a0));
      }

      FieldComplex FieldComplex::multiply(jint a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiply_68b4f88cb521e978], a0));
      }

      FieldComplex FieldComplex::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiply_2a1376cabc11c637], a0.this$));
      }

      FieldComplex FieldComplex::multiplyMinusI() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiplyMinusI_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::multiplyPlusI() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_multiplyPlusI_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::negate() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_negate_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::newInstance(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_newInstance_ce539a2d22a1271d], a0));
      }

      ::java::util::List FieldComplex::nthRoot(jint a0) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_nthRoot_0096b74d5921c439], a0));
      }

      FieldComplex FieldComplex::pow(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_pow_e335ffa535ec807c], a0.this$));
      }

      FieldComplex FieldComplex::pow(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_pow_ce539a2d22a1271d], a0));
      }

      FieldComplex FieldComplex::pow(jint a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_pow_68b4f88cb521e978], a0));
      }

      FieldComplex FieldComplex::pow(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_pow_2a1376cabc11c637], a0.this$));
      }

      FieldComplex FieldComplex::reciprocal() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_reciprocal_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::remainder(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_remainder_e335ffa535ec807c], a0.this$));
      }

      FieldComplex FieldComplex::remainder(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_remainder_ce539a2d22a1271d], a0));
      }

      FieldComplex FieldComplex::rint() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_rint_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::rootN(jint a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_rootN_68b4f88cb521e978], a0));
      }

      FieldComplex FieldComplex::scalb(jint a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_scalb_68b4f88cb521e978], a0));
      }

      FieldComplex FieldComplex::sign() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sign_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::sin() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sin_fe347867d3dfbc81]));
      }

      ::org::hipparchus::util::FieldSinCos FieldComplex::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_35f2499c71416a1a]));
      }

      FieldComplex FieldComplex::sinh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sinh_fe347867d3dfbc81]));
      }

      ::org::hipparchus::util::FieldSinhCosh FieldComplex::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_c388a3eefde9d597]));
      }

      FieldComplex FieldComplex::sqrt() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sqrt_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::sqrt1z() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_sqrt1z_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::subtract(const FieldComplex & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_subtract_e335ffa535ec807c], a0.this$));
      }

      FieldComplex FieldComplex::subtract(jdouble a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_subtract_ce539a2d22a1271d], a0));
      }

      FieldComplex FieldComplex::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_subtract_2a1376cabc11c637], a0.this$));
      }

      FieldComplex FieldComplex::tan() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_tan_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::tanh() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_tanh_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::toDegrees() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_toDegrees_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::toRadians() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_toRadians_fe347867d3dfbc81]));
      }

      ::java::lang::String FieldComplex::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
      }

      FieldComplex FieldComplex::ulp() const
      {
        return FieldComplex(env->callObjectMethod(this$, mids$[mid_ulp_fe347867d3dfbc81]));
      }

      FieldComplex FieldComplex::valueOf(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2a1376cabc11c637], a0.this$));
      }

      FieldComplex FieldComplex::valueOf(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_valueOf_90ceabb919e66ea9], a0.this$, a1.this$));
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
      static PyObject *t_FieldComplex_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_of_(t_FieldComplex *self, PyObject *args);
      static int t_FieldComplex_init_(t_FieldComplex *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldComplex_abs(t_FieldComplex *self);
      static PyObject *t_FieldComplex_acos(t_FieldComplex *self);
      static PyObject *t_FieldComplex_acosh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_add(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_asin(t_FieldComplex *self);
      static PyObject *t_FieldComplex_asinh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_atan(t_FieldComplex *self);
      static PyObject *t_FieldComplex_atan2(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_atanh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_cbrt(t_FieldComplex *self);
      static PyObject *t_FieldComplex_ceil(t_FieldComplex *self);
      static PyObject *t_FieldComplex_conjugate(t_FieldComplex *self);
      static PyObject *t_FieldComplex_copySign(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_cos(t_FieldComplex *self);
      static PyObject *t_FieldComplex_cosh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_divide(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_equals(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldComplex_equals_(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldComplex_exp(t_FieldComplex *self);
      static PyObject *t_FieldComplex_expm1(t_FieldComplex *self);
      static PyObject *t_FieldComplex_floor(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getArgument(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getField(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getI(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getImaginary(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getImaginaryPart(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getInf(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getMinusI(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getMinusOne(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getNaN(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getOne(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getPartsField(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getPi(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getPi_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_getReal(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getRealPart(t_FieldComplex *self);
      static PyObject *t_FieldComplex_getZero(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldComplex_hashCode(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_hypot(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_isInfinite(t_FieldComplex *self);
      static PyObject *t_FieldComplex_isMathematicalInteger(t_FieldComplex *self);
      static PyObject *t_FieldComplex_isNaN(t_FieldComplex *self);
      static PyObject *t_FieldComplex_isReal(t_FieldComplex *self);
      static PyObject *t_FieldComplex_isZero(t_FieldComplex *self);
      static PyObject *t_FieldComplex_linearCombination(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_log(t_FieldComplex *self);
      static PyObject *t_FieldComplex_log10(t_FieldComplex *self);
      static PyObject *t_FieldComplex_log1p(t_FieldComplex *self);
      static PyObject *t_FieldComplex_multiply(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_multiplyMinusI(t_FieldComplex *self);
      static PyObject *t_FieldComplex_multiplyPlusI(t_FieldComplex *self);
      static PyObject *t_FieldComplex_negate(t_FieldComplex *self);
      static PyObject *t_FieldComplex_newInstance(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_nthRoot(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_pow(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_reciprocal(t_FieldComplex *self);
      static PyObject *t_FieldComplex_remainder(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_rint(t_FieldComplex *self);
      static PyObject *t_FieldComplex_rootN(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_scalb(t_FieldComplex *self, PyObject *arg);
      static PyObject *t_FieldComplex_sign(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sin(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sinCos(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sinh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sinhCosh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sqrt(t_FieldComplex *self);
      static PyObject *t_FieldComplex_sqrt1z(t_FieldComplex *self);
      static PyObject *t_FieldComplex_subtract(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_tan(t_FieldComplex *self);
      static PyObject *t_FieldComplex_tanh(t_FieldComplex *self);
      static PyObject *t_FieldComplex_toDegrees(t_FieldComplex *self);
      static PyObject *t_FieldComplex_toRadians(t_FieldComplex *self);
      static PyObject *t_FieldComplex_toString(t_FieldComplex *self, PyObject *args);
      static PyObject *t_FieldComplex_ulp(t_FieldComplex *self);
      static PyObject *t_FieldComplex_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_FieldComplex_get__argument(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__field(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__imaginary(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__imaginaryPart(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__infinite(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__mathematicalInteger(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__naN(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__partsField(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__pi(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__real(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__realPart(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__zero(t_FieldComplex *self, void *data);
      static PyObject *t_FieldComplex_get__parameters_(t_FieldComplex *self, void *data);
      static PyGetSetDef t_FieldComplex__fields_[] = {
        DECLARE_GET_FIELD(t_FieldComplex, argument),
        DECLARE_GET_FIELD(t_FieldComplex, field),
        DECLARE_GET_FIELD(t_FieldComplex, imaginary),
        DECLARE_GET_FIELD(t_FieldComplex, imaginaryPart),
        DECLARE_GET_FIELD(t_FieldComplex, infinite),
        DECLARE_GET_FIELD(t_FieldComplex, mathematicalInteger),
        DECLARE_GET_FIELD(t_FieldComplex, naN),
        DECLARE_GET_FIELD(t_FieldComplex, partsField),
        DECLARE_GET_FIELD(t_FieldComplex, pi),
        DECLARE_GET_FIELD(t_FieldComplex, real),
        DECLARE_GET_FIELD(t_FieldComplex, realPart),
        DECLARE_GET_FIELD(t_FieldComplex, zero),
        DECLARE_GET_FIELD(t_FieldComplex, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldComplex__methods_[] = {
        DECLARE_METHOD(t_FieldComplex, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, abs, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, acos, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, acosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, add, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, asin, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, asinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, atan, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, atan2, METH_O),
        DECLARE_METHOD(t_FieldComplex, atanh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, ceil, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, conjugate, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, copySign, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, cos, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, cosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, divide, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, equals, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, equalsWithRelativeTolerance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, equals_, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, exp, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, expm1, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, floor, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getArgument, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getField, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getI, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getImaginary, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getImaginaryPart, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getInf, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getMinusI, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getMinusOne, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getNaN, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getOne, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getPartsField, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getPi, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getPi_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, getReal, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getRealPart, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, getZero, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldComplex, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, hypot, METH_O),
        DECLARE_METHOD(t_FieldComplex, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, isMathematicalInteger, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, isReal, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, isZero, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, log, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, log10, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, log1p, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, multiply, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, multiplyMinusI, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, multiplyPlusI, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, negate, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, newInstance, METH_O),
        DECLARE_METHOD(t_FieldComplex, nthRoot, METH_O),
        DECLARE_METHOD(t_FieldComplex, pow, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, remainder, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, rint, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, rootN, METH_O),
        DECLARE_METHOD(t_FieldComplex, scalb, METH_O),
        DECLARE_METHOD(t_FieldComplex, sign, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sin, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sinh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, sqrt1z, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, subtract, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, tan, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, tanh, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, toString, METH_VARARGS),
        DECLARE_METHOD(t_FieldComplex, ulp, METH_NOARGS),
        DECLARE_METHOD(t_FieldComplex, valueOf, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldComplex)[] = {
        { Py_tp_methods, t_FieldComplex__methods_ },
        { Py_tp_init, (void *) t_FieldComplex_init_ },
        { Py_tp_getset, t_FieldComplex__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldComplex)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldComplex, t_FieldComplex, FieldComplex);
      PyObject *t_FieldComplex::wrap_Object(const FieldComplex& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplex::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplex *self = (t_FieldComplex *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldComplex::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldComplex::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldComplex *self = (t_FieldComplex *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldComplex::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldComplex), &PY_TYPE_DEF(FieldComplex), module, "FieldComplex", 0);
      }

      void t_FieldComplex::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplex), "class_", make_descriptor(FieldComplex::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplex), "wrapfn_", make_descriptor(t_FieldComplex::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldComplex), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldComplex_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldComplex::initializeClass, 1)))
          return NULL;
        return t_FieldComplex::wrap_Object(FieldComplex(((t_FieldComplex *) arg)->object.this$));
      }
      static PyObject *t_FieldComplex_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldComplex::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldComplex_of_(t_FieldComplex *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldComplex_init_(t_FieldComplex *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldComplex(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex object((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              INT_CALL(object = FieldComplex(a0, a1));
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

      static PyObject *t_FieldComplex_abs(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_acos(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_acosh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_add(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_asin(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_asinh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_atan(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_atan2(t_FieldComplex *self, PyObject *arg)
      {
        FieldComplex a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_FieldComplex::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_atanh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_cbrt(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_ceil(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_conjugate(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.conjugate());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_copySign(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_cos(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_cosh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_divide(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_equals(t_FieldComplex *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(FieldComplex), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_FieldComplex_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args)
      {
        FieldComplex a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex a1((jobject) NULL);
        PyTypeObject **p1;
        jdouble a2;
        jboolean result;

        if (!parseArgs(args, "KKD", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::equalsWithRelativeTolerance(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "equalsWithRelativeTolerance", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_equals_(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean result;

            if (!parseArgs(args, "KK", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 3:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            jboolean result;

            if (!parseArgs(args, "KKD", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "KKI", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "equals_", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_exp(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_expm1(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_floor(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_getArgument(t_FieldComplex *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getArgument());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_getField(t_FieldComplex *self)
      {
        ::org::hipparchus::complex::FieldComplexField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::complex::t_FieldComplexField::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_getI(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getI(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getI", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getImaginary(t_FieldComplex *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getImaginary());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_getImaginaryPart(t_FieldComplex *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getImaginaryPart());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_getInf(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getInf(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getInf", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getMinusI(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getMinusI(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getMinusI", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getMinusOne(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getMinusOne(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getMinusOne", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getNaN(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getNaN(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getNaN", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getOne(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getOne(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getOne", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getPartsField(t_FieldComplex *self)
      {
        ::org::hipparchus::Field result((jobject) NULL);
        OBJ_CALL(result = self->object.getPartsField());
        return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_getPi(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_getPi_(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getPi(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getPi_", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_getReal(t_FieldComplex *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_FieldComplex_getRealPart(t_FieldComplex *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRealPart());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_getZero(PyTypeObject *type, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::getZero(a0));
          return t_FieldComplex::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "getZero", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_hashCode(t_FieldComplex *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(FieldComplex), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_FieldComplex_hypot(t_FieldComplex *self, PyObject *arg)
      {
        FieldComplex a0((jobject) NULL);
        PyTypeObject **p0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_FieldComplex::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_isInfinite(t_FieldComplex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldComplex_isMathematicalInteger(t_FieldComplex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isMathematicalInteger());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldComplex_isNaN(t_FieldComplex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldComplex_isReal(t_FieldComplex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isReal());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldComplex_isZero(t_FieldComplex *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isZero());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldComplex_linearCombination(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< FieldComplex > a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "[D[K", FieldComplex::initializeClass, &a0, &a1, &p1, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            JArray< FieldComplex > a0((jobject) NULL);
            PyTypeObject **p0;
            JArray< FieldComplex > a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "[K[K", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 4:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex a2((jobject) NULL);
            PyTypeObject **p2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KKKK", FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2, &p2, t_FieldComplex::parameters_, &a3, &p3, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "DKDK", FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &a1, &p1, t_FieldComplex::parameters_, &a2, &a3, &p3, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 6:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex a2((jobject) NULL);
            PyTypeObject **p2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            FieldComplex a4((jobject) NULL);
            PyTypeObject **p4;
            FieldComplex a5((jobject) NULL);
            PyTypeObject **p5;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KKKKKK", FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2, &p2, t_FieldComplex::parameters_, &a3, &p3, t_FieldComplex::parameters_, &a4, &p4, t_FieldComplex::parameters_, &a5, &p5, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldComplex a5((jobject) NULL);
            PyTypeObject **p5;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "DKDKDK", FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &a1, &p1, t_FieldComplex::parameters_, &a2, &a3, &p3, t_FieldComplex::parameters_, &a4, &a5, &p5, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          break;
         case 8:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex a2((jobject) NULL);
            PyTypeObject **p2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            FieldComplex a4((jobject) NULL);
            PyTypeObject **p4;
            FieldComplex a5((jobject) NULL);
            PyTypeObject **p5;
            FieldComplex a6((jobject) NULL);
            PyTypeObject **p6;
            FieldComplex a7((jobject) NULL);
            PyTypeObject **p7;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KKKKKKKK", FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_, &a1, &p1, t_FieldComplex::parameters_, &a2, &p2, t_FieldComplex::parameters_, &a3, &p3, t_FieldComplex::parameters_, &a4, &p4, t_FieldComplex::parameters_, &a5, &p5, t_FieldComplex::parameters_, &a6, &p6, t_FieldComplex::parameters_, &a7, &p7, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldComplex a3((jobject) NULL);
            PyTypeObject **p3;
            jdouble a4;
            FieldComplex a5((jobject) NULL);
            PyTypeObject **p5;
            jdouble a6;
            FieldComplex a7((jobject) NULL);
            PyTypeObject **p7;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "DKDKDKDK", FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, FieldComplex::initializeClass, &a0, &a1, &p1, t_FieldComplex::parameters_, &a2, &a3, &p3, t_FieldComplex::parameters_, &a4, &a5, &p5, t_FieldComplex::parameters_, &a6, &a7, &p7, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_log(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_log10(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_log1p(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_multiply(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jint a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_multiplyMinusI(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.multiplyMinusI());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_multiplyPlusI(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.multiplyPlusI());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_negate(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_newInstance(t_FieldComplex *self, PyObject *arg)
      {
        jdouble a0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.newInstance(a0));
          return t_FieldComplex::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_nthRoot(t_FieldComplex *self, PyObject *arg)
      {
        jint a0;
        ::java::util::List result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.nthRoot(a0));
          return ::java::util::t_List::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "nthRoot", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_pow(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jint a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_reciprocal(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_remainder(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_rint(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_rootN(t_FieldComplex *self, PyObject *arg)
      {
        jint a0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_FieldComplex::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_scalb(t_FieldComplex *self, PyObject *arg)
      {
        jint a0;
        FieldComplex result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_FieldComplex::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_FieldComplex_sign(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_sin(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_sinCos(t_FieldComplex *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_sinh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_sinhCosh(t_FieldComplex *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
      }

      static PyObject *t_FieldComplex_sqrt(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_sqrt1z(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt1z());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_subtract(t_FieldComplex *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            FieldComplex a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", FieldComplex::initializeClass, &a0, &p0, t_FieldComplex::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            jdouble a0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_FieldComplex::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_FieldComplex_tan(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_tanh(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_toDegrees(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_toRadians(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_toString(t_FieldComplex *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(FieldComplex), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_FieldComplex_ulp(t_FieldComplex *self)
      {
        FieldComplex result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_FieldComplex::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldComplex_valueOf(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::valueOf(a0));
              return t_FieldComplex::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            FieldComplex result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::complex::FieldComplex::valueOf(a0, a1));
              return t_FieldComplex::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "valueOf", args);
        return NULL;
      }
      static PyObject *t_FieldComplex_get__parameters_(t_FieldComplex *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldComplex_get__argument(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getArgument());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__field(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::complex::FieldComplexField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::complex::t_FieldComplexField::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__imaginary(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getImaginary());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__imaginaryPart(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getImaginaryPart());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__infinite(t_FieldComplex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldComplex_get__mathematicalInteger(t_FieldComplex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isMathematicalInteger());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldComplex_get__naN(t_FieldComplex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldComplex_get__partsField(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::Field value((jobject) NULL);
        OBJ_CALL(value = self->object.getPartsField());
        return ::org::hipparchus::t_Field::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__pi(t_FieldComplex *self, void *data)
      {
        FieldComplex value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_FieldComplex::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__real(t_FieldComplex *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_FieldComplex_get__realPart(t_FieldComplex *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRealPart());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldComplex_get__zero(t_FieldComplex *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isZero());
        Py_RETURN_BOOL(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/Array2DRowFieldMatrix.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsFieldIntegrator::class$ = NULL;
        jmethodID *AdamsFieldIntegrator::mids$ = NULL;
        bool AdamsFieldIntegrator::live$ = false;

        jclass AdamsFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e30420595c2c2004] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;IIDD[D[D)V");
            mids$[mid_init$_f65e9099f41a54d0] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Ljava/lang/String;IIDDDD)V");
            mids$[mid_integrate_668e072c435ebb6b] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_updateHighOrderDerivativesPhase1_ca86c76185a43b52] = env->getMethodID(cls, "updateHighOrderDerivativesPhase1", "(Lorg/hipparchus/linear/Array2DRowFieldMatrix;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase2_094bd675aa407249] = env->getMethodID(cls, "updateHighOrderDerivativesPhase2", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;)V");
            mids$[mid_initializeHighOrderDerivatives_306bab15a17e087f] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;[[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/linear/Array2DRowFieldMatrix;");
            mids$[mid_errorEstimation_e2c124c0ae6f0f15] = env->getMethodID(cls, "errorEstimation", "([Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/FieldMatrix;)D");
            mids$[mid_finalizeStep_2e4197dad990b4d5] = env->getMethodID(cls, "finalizeStep", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/linear/Array2DRowFieldMatrix;ZLorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/AdamsFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsFieldIntegrator::AdamsFieldIntegrator(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, jint a2, jint a3, jdouble a4, jdouble a5, const JArray< jdouble > & a6, const JArray< jdouble > & a7) : ::org::hipparchus::ode::MultistepFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_e30420595c2c2004, a0.this$, a1.this$, a2, a3, a4, a5, a6.this$, a7.this$)) {}

        AdamsFieldIntegrator::AdamsFieldIntegrator(const ::org::hipparchus::Field & a0, const ::java::lang::String & a1, jint a2, jint a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7) : ::org::hipparchus::ode::MultistepFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_f65e9099f41a54d0, a0.this$, a1.this$, a2, a3, a4, a5, a6, a7)) {}

        ::org::hipparchus::ode::FieldODEStateAndDerivative AdamsFieldIntegrator::integrate(const ::org::hipparchus::ode::FieldExpandableODE & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_668e072c435ebb6b], a0.this$, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::Array2DRowFieldMatrix AdamsFieldIntegrator::updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowFieldMatrix & a0) const
        {
          return ::org::hipparchus::linear::Array2DRowFieldMatrix(env->callObjectMethod(this$, mids$[mid_updateHighOrderDerivativesPhase1_ca86c76185a43b52], a0.this$));
        }

        void AdamsFieldIntegrator::updateHighOrderDerivativesPhase2(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const ::org::hipparchus::linear::Array2DRowFieldMatrix & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateHighOrderDerivativesPhase2_094bd675aa407249], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AdamsFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsFieldIntegrator_of_(t_AdamsFieldIntegrator *self, PyObject *args);
        static int t_AdamsFieldIntegrator_init_(t_AdamsFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdamsFieldIntegrator_integrate(t_AdamsFieldIntegrator *self, PyObject *args);
        static PyObject *t_AdamsFieldIntegrator_updateHighOrderDerivativesPhase1(t_AdamsFieldIntegrator *self, PyObject *arg);
        static PyObject *t_AdamsFieldIntegrator_updateHighOrderDerivativesPhase2(t_AdamsFieldIntegrator *self, PyObject *args);
        static PyObject *t_AdamsFieldIntegrator_get__parameters_(t_AdamsFieldIntegrator *self, void *data);
        static PyGetSetDef t_AdamsFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_AdamsFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdamsFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_AdamsFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_AdamsFieldIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_AdamsFieldIntegrator, updateHighOrderDerivativesPhase1, METH_O),
          DECLARE_METHOD(t_AdamsFieldIntegrator, updateHighOrderDerivativesPhase2, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsFieldIntegrator)[] = {
          { Py_tp_methods, t_AdamsFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_AdamsFieldIntegrator_init_ },
          { Py_tp_getset, t_AdamsFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::MultistepFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(AdamsFieldIntegrator, t_AdamsFieldIntegrator, AdamsFieldIntegrator);
        PyObject *t_AdamsFieldIntegrator::wrap_Object(const AdamsFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsFieldIntegrator *self = (t_AdamsFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AdamsFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AdamsFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AdamsFieldIntegrator *self = (t_AdamsFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AdamsFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsFieldIntegrator), &PY_TYPE_DEF(AdamsFieldIntegrator), module, "AdamsFieldIntegrator", 0);
        }

        void t_AdamsFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsFieldIntegrator), "class_", make_descriptor(AdamsFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsFieldIntegrator), "wrapfn_", make_descriptor(t_AdamsFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_AdamsFieldIntegrator::wrap_Object(AdamsFieldIntegrator(((t_AdamsFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_AdamsFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsFieldIntegrator_of_(t_AdamsFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AdamsFieldIntegrator_init_(t_AdamsFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 8:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jint a2;
              jint a3;
              jdouble a4;
              jdouble a5;
              JArray< jdouble > a6((jobject) NULL);
              JArray< jdouble > a7((jobject) NULL);
              AdamsFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KsIIDD[D[D", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = AdamsFieldIntegrator(a0, a1, a2, a3, a4, a5, a6, a7));
                self->object = object;
                break;
              }
            }
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::String a1((jobject) NULL);
              jint a2;
              jint a3;
              jdouble a4;
              jdouble a5;
              jdouble a6;
              jdouble a7;
              AdamsFieldIntegrator object((jobject) NULL);

              if (!parseArgs(args, "KsIIDDDD", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
              {
                INT_CALL(object = AdamsFieldIntegrator(a0, a1, a2, a3, a4, a5, a6, a7));
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

        static PyObject *t_AdamsFieldIntegrator_integrate(t_AdamsFieldIntegrator *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldExpandableODE a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::FieldODEState a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::ode::FieldExpandableODE::initializeClass, ::org::hipparchus::ode::FieldODEState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldExpandableODE::parameters_, &a1, &p1, ::org::hipparchus::ode::t_FieldODEState::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2));
            return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(AdamsFieldIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_AdamsFieldIntegrator_updateHighOrderDerivativesPhase1(t_AdamsFieldIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::linear::Array2DRowFieldMatrix a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::linear::Array2DRowFieldMatrix result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::linear::Array2DRowFieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_Array2DRowFieldMatrix::parameters_))
          {
            OBJ_CALL(result = self->object.updateHighOrderDerivativesPhase1(a0));
            return ::org::hipparchus::linear::t_Array2DRowFieldMatrix::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase1", arg);
          return NULL;
        }

        static PyObject *t_AdamsFieldIntegrator_updateHighOrderDerivativesPhase2(t_AdamsFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::linear::Array2DRowFieldMatrix a2((jobject) NULL);
          PyTypeObject **p2;

          if (!parseArgs(args, "[K[KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::linear::Array2DRowFieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::linear::t_Array2DRowFieldMatrix::parameters_))
          {
            OBJ_CALL(self->object.updateHighOrderDerivativesPhase2(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase2", args);
          return NULL;
        }
        static PyObject *t_AdamsFieldIntegrator_get__parameters_(t_AdamsFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/io/OutputStream.h"
#include "java/io/IOException.h"
#include "java/io/Flushable.h"
#include "java/io/OutputStream.h"
#include "java/io/Closeable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace io {

    ::java::lang::Class *OutputStream::class$ = NULL;
    jmethodID *OutputStream::mids$ = NULL;
    bool OutputStream::live$ = false;

    jclass OutputStream::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/io/OutputStream");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_close_7ae3461a92a43152] = env->getMethodID(cls, "close", "()V");
        mids$[mid_flush_7ae3461a92a43152] = env->getMethodID(cls, "flush", "()V");
        mids$[mid_nullOutputStream_c7146c0d9553864e] = env->getStaticMethodID(cls, "nullOutputStream", "()Ljava/io/OutputStream;");
        mids$[mid_write_9c4b35f0a6dc87f3] = env->getMethodID(cls, "write", "([B)V");
        mids$[mid_write_0a2a1ac2721c0336] = env->getMethodID(cls, "write", "(I)V");
        mids$[mid_write_125b1e9f043b29f8] = env->getMethodID(cls, "write", "([BII)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    OutputStream::OutputStream() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

    void OutputStream::close() const
    {
      env->callVoidMethod(this$, mids$[mid_close_7ae3461a92a43152]);
    }

    void OutputStream::flush() const
    {
      env->callVoidMethod(this$, mids$[mid_flush_7ae3461a92a43152]);
    }

    OutputStream OutputStream::nullOutputStream()
    {
      jclass cls = env->getClass(initializeClass);
      return OutputStream(env->callStaticObjectMethod(cls, mids$[mid_nullOutputStream_c7146c0d9553864e]));
    }

    void OutputStream::write(const JArray< jbyte > & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_9c4b35f0a6dc87f3], a0.this$);
    }

    void OutputStream::write(jint a0) const
    {
      env->callVoidMethod(this$, mids$[mid_write_0a2a1ac2721c0336], a0);
    }

    void OutputStream::write(const JArray< jbyte > & a0, jint a1, jint a2) const
    {
      env->callVoidMethod(this$, mids$[mid_write_125b1e9f043b29f8], a0.this$, a1, a2);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace io {
    static PyObject *t_OutputStream_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_OutputStream_instance_(PyTypeObject *type, PyObject *arg);
    static int t_OutputStream_init_(t_OutputStream *self, PyObject *args, PyObject *kwds);
    static PyObject *t_OutputStream_close(t_OutputStream *self);
    static PyObject *t_OutputStream_flush(t_OutputStream *self);
    static PyObject *t_OutputStream_nullOutputStream(PyTypeObject *type);
    static PyObject *t_OutputStream_write(t_OutputStream *self, PyObject *args);

    static PyMethodDef t_OutputStream__methods_[] = {
      DECLARE_METHOD(t_OutputStream, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_OutputStream, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_OutputStream, close, METH_NOARGS),
      DECLARE_METHOD(t_OutputStream, flush, METH_NOARGS),
      DECLARE_METHOD(t_OutputStream, nullOutputStream, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_OutputStream, write, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(OutputStream)[] = {
      { Py_tp_methods, t_OutputStream__methods_ },
      { Py_tp_init, (void *) t_OutputStream_init_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(OutputStream)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(OutputStream, t_OutputStream, OutputStream);

    void t_OutputStream::install(PyObject *module)
    {
      installType(&PY_TYPE(OutputStream), &PY_TYPE_DEF(OutputStream), module, "OutputStream", 0);
    }

    void t_OutputStream::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(OutputStream), "class_", make_descriptor(OutputStream::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(OutputStream), "wrapfn_", make_descriptor(t_OutputStream::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(OutputStream), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_OutputStream_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, OutputStream::initializeClass, 1)))
        return NULL;
      return t_OutputStream::wrap_Object(OutputStream(((t_OutputStream *) arg)->object.this$));
    }
    static PyObject *t_OutputStream_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, OutputStream::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_OutputStream_init_(t_OutputStream *self, PyObject *args, PyObject *kwds)
    {
      OutputStream object((jobject) NULL);

      INT_CALL(object = OutputStream());
      self->object = object;

      return 0;
    }

    static PyObject *t_OutputStream_close(t_OutputStream *self)
    {
      OBJ_CALL(self->object.close());
      Py_RETURN_NONE;
    }

    static PyObject *t_OutputStream_flush(t_OutputStream *self)
    {
      OBJ_CALL(self->object.flush());
      Py_RETURN_NONE;
    }

    static PyObject *t_OutputStream_nullOutputStream(PyTypeObject *type)
    {
      OutputStream result((jobject) NULL);
      OBJ_CALL(result = ::java::io::OutputStream::nullOutputStream());
      return t_OutputStream::wrap_Object(result);
    }

    static PyObject *t_OutputStream_write(t_OutputStream *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          JArray< jbyte > a0((jobject) NULL);

          if (!parseArgs(args, "[B", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        {
          jint a0;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(self->object.write(a0));
            Py_RETURN_NONE;
          }
        }
        break;
       case 3:
        {
          JArray< jbyte > a0((jobject) NULL);
          jint a1;
          jint a2;

          if (!parseArgs(args, "[BII", &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "write", args);
      return NULL;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmRelativeMetadataKey::class$ = NULL;
            jmethodID *CdmRelativeMetadataKey::mids$ = NULL;
            bool CdmRelativeMetadataKey::live$ = false;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::APPROACH_ANGLE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_MAX_PC_METHOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_MAX_PROBABILITY = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_PERCENTILE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_PROBABILITY = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::COLLISION_PROBABILITY_METHOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::CONJUNCTION_ID = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::MAHALANOBIS_DISTANCE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::MISS_DISTANCE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::NEXT_MESSAGE_EPOCH = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::PREVIOUS_MESSAGE_EPOCH = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::PREVIOUS_MESSAGE_ID = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_POSITION_N = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_POSITION_R = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_POSITION_T = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_SPEED = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_VELOCITY_N = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_VELOCITY_R = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::RELATIVE_VELOCITY_T = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_ENTRY_TIME = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_EXIT_TIME = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_PC_THRESHOLD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_TYPE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_FRAME = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_RADIUS = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_SHAPE = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_X = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_Y = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SCREEN_VOLUME_Z = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SEFI_COLLISION_PROBABILITY = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SEFI_COLLISION_PROBABILITY_METHOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::SEFI_FRAGMENTATION_MODEL = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::START_SCREEN_PERIOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::STOP_SCREEN_PERIOD = NULL;
            CdmRelativeMetadataKey *CdmRelativeMetadataKey::TCA = NULL;

            jclass CdmRelativeMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_0997e2450130d6bf] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;)Z");
                mids$[mid_valueOf_f6ddd44e7fb4759f] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;");
                mids$[mid_values_6b57c9c9cc810644] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                APPROACH_ANGLE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "APPROACH_ANGLE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_MAX_PC_METHOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_MAX_PC_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_MAX_PROBABILITY = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_MAX_PROBABILITY", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_PERCENTILE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_PERCENTILE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_PROBABILITY = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_PROBABILITY", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                COLLISION_PROBABILITY_METHOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "COLLISION_PROBABILITY_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                CONJUNCTION_ID = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "CONJUNCTION_ID", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                MAHALANOBIS_DISTANCE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "MAHALANOBIS_DISTANCE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                MISS_DISTANCE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "MISS_DISTANCE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                NEXT_MESSAGE_EPOCH = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "NEXT_MESSAGE_EPOCH", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                PREVIOUS_MESSAGE_EPOCH = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "PREVIOUS_MESSAGE_EPOCH", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                PREVIOUS_MESSAGE_ID = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "PREVIOUS_MESSAGE_ID", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_POSITION_N = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_POSITION_N", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_POSITION_R = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_POSITION_R", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_POSITION_T = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_POSITION_T", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_SPEED = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_SPEED", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_VELOCITY_N = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_VELOCITY_N", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_VELOCITY_R = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_VELOCITY_R", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                RELATIVE_VELOCITY_T = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "RELATIVE_VELOCITY_T", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_ENTRY_TIME = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_ENTRY_TIME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_EXIT_TIME = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_EXIT_TIME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_PC_THRESHOLD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_PC_THRESHOLD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_TYPE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_TYPE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_FRAME = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_FRAME", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_RADIUS = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_RADIUS", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_SHAPE = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_SHAPE", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_X = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_X", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_Y = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_Y", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SCREEN_VOLUME_Z = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SCREEN_VOLUME_Z", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SEFI_COLLISION_PROBABILITY = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SEFI_COLLISION_PROBABILITY", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SEFI_COLLISION_PROBABILITY_METHOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SEFI_COLLISION_PROBABILITY_METHOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                SEFI_FRAGMENTATION_MODEL = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "SEFI_FRAGMENTATION_MODEL", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                START_SCREEN_PERIOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "START_SCREEN_PERIOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                STOP_SCREEN_PERIOD = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "STOP_SCREEN_PERIOD", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                TCA = new CdmRelativeMetadataKey(env->getStaticObjectField(cls, "TCA", "Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean CdmRelativeMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_0997e2450130d6bf], a0.this$, a1.this$, a2.this$);
            }

            CdmRelativeMetadataKey CdmRelativeMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return CdmRelativeMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f6ddd44e7fb4759f], a0.this$));
            }

            JArray< CdmRelativeMetadataKey > CdmRelativeMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< CdmRelativeMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_6b57c9c9cc810644]));
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
            static PyObject *t_CdmRelativeMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmRelativeMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmRelativeMetadataKey_of_(t_CdmRelativeMetadataKey *self, PyObject *args);
            static PyObject *t_CdmRelativeMetadataKey_process(t_CdmRelativeMetadataKey *self, PyObject *args);
            static PyObject *t_CdmRelativeMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_CdmRelativeMetadataKey_values(PyTypeObject *type);
            static PyObject *t_CdmRelativeMetadataKey_get__parameters_(t_CdmRelativeMetadataKey *self, void *data);
            static PyGetSetDef t_CdmRelativeMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_CdmRelativeMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmRelativeMetadataKey__methods_[] = {
              DECLARE_METHOD(t_CdmRelativeMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_CdmRelativeMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmRelativeMetadataKey)[] = {
              { Py_tp_methods, t_CdmRelativeMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_CdmRelativeMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmRelativeMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(CdmRelativeMetadataKey, t_CdmRelativeMetadataKey, CdmRelativeMetadataKey);
            PyObject *t_CdmRelativeMetadataKey::wrap_Object(const CdmRelativeMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmRelativeMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmRelativeMetadataKey *self = (t_CdmRelativeMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CdmRelativeMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CdmRelativeMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CdmRelativeMetadataKey *self = (t_CdmRelativeMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CdmRelativeMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmRelativeMetadataKey), &PY_TYPE_DEF(CdmRelativeMetadataKey), module, "CdmRelativeMetadataKey", 0);
            }

            void t_CdmRelativeMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "class_", make_descriptor(CdmRelativeMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "wrapfn_", make_descriptor(t_CdmRelativeMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(CdmRelativeMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "APPROACH_ANGLE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::APPROACH_ANGLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_MAX_PC_METHOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_MAX_PC_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_MAX_PROBABILITY", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_MAX_PROBABILITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_PERCENTILE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_PERCENTILE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_PROBABILITY", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_PROBABILITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "COLLISION_PROBABILITY_METHOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::COLLISION_PROBABILITY_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "CONJUNCTION_ID", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::CONJUNCTION_ID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "MAHALANOBIS_DISTANCE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::MAHALANOBIS_DISTANCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "MISS_DISTANCE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::MISS_DISTANCE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "NEXT_MESSAGE_EPOCH", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::NEXT_MESSAGE_EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "PREVIOUS_MESSAGE_EPOCH", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::PREVIOUS_MESSAGE_EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "PREVIOUS_MESSAGE_ID", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::PREVIOUS_MESSAGE_ID)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_POSITION_N", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_POSITION_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_POSITION_R", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_POSITION_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_POSITION_T", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_POSITION_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_SPEED", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_SPEED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_VELOCITY_N", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_VELOCITY_N)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_VELOCITY_R", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_VELOCITY_R)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "RELATIVE_VELOCITY_T", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::RELATIVE_VELOCITY_T)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_ENTRY_TIME", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_ENTRY_TIME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_EXIT_TIME", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_EXIT_TIME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_PC_THRESHOLD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_PC_THRESHOLD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_TYPE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_TYPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_FRAME", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_FRAME)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_RADIUS", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_RADIUS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_SHAPE", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_SHAPE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_X", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_X)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_Y", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_Y)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SCREEN_VOLUME_Z", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SCREEN_VOLUME_Z)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SEFI_COLLISION_PROBABILITY", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SEFI_COLLISION_PROBABILITY)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SEFI_COLLISION_PROBABILITY_METHOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SEFI_COLLISION_PROBABILITY_METHOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "SEFI_FRAGMENTATION_MODEL", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::SEFI_FRAGMENTATION_MODEL)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "START_SCREEN_PERIOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::START_SCREEN_PERIOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "STOP_SCREEN_PERIOD", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::STOP_SCREEN_PERIOD)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmRelativeMetadataKey), "TCA", make_descriptor(t_CdmRelativeMetadataKey::wrap_Object(*CdmRelativeMetadataKey::TCA)));
            }

            static PyObject *t_CdmRelativeMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmRelativeMetadataKey::initializeClass, 1)))
                return NULL;
              return t_CdmRelativeMetadataKey::wrap_Object(CdmRelativeMetadataKey(((t_CdmRelativeMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_CdmRelativeMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmRelativeMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CdmRelativeMetadataKey_of_(t_CdmRelativeMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_CdmRelativeMetadataKey_process(t_CdmRelativeMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_CdmRelativeMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              CdmRelativeMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadataKey::valueOf(a0));
                return t_CdmRelativeMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_CdmRelativeMetadataKey_values(PyTypeObject *type)
            {
              JArray< CdmRelativeMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::CdmRelativeMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_CdmRelativeMetadataKey::wrap_jobject);
            }
            static PyObject *t_CdmRelativeMetadataKey_get__parameters_(t_CdmRelativeMetadataKey *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadataKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/odm/OdmMetadata.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmMetadataKey::class$ = NULL;
            jmethodID *OdmMetadataKey::mids$ = NULL;
            bool OdmMetadataKey::live$ = false;
            OdmMetadataKey *OdmMetadataKey::OBJECT_NAME = NULL;

            jclass OdmMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_e4ae4e9bc86299f2] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/OdmMetadata;)Z");
                mids$[mid_valueOf_72657cdc13a4b50e] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/OdmMetadataKey;");
                mids$[mid_values_b95ff906369b9df7] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/OdmMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                OBJECT_NAME = new OdmMetadataKey(env->getStaticObjectField(cls, "OBJECT_NAME", "Lorg/orekit/files/ccsds/ndm/odm/OdmMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean OdmMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::OdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_e4ae4e9bc86299f2], a0.this$, a1.this$, a2.this$);
            }

            OdmMetadataKey OdmMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return OdmMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_72657cdc13a4b50e], a0.this$));
            }

            JArray< OdmMetadataKey > OdmMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< OdmMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_b95ff906369b9df7]));
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
            static PyObject *t_OdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmMetadataKey_of_(t_OdmMetadataKey *self, PyObject *args);
            static PyObject *t_OdmMetadataKey_process(t_OdmMetadataKey *self, PyObject *args);
            static PyObject *t_OdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_OdmMetadataKey_values(PyTypeObject *type);
            static PyObject *t_OdmMetadataKey_get__parameters_(t_OdmMetadataKey *self, void *data);
            static PyGetSetDef t_OdmMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_OdmMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OdmMetadataKey__methods_[] = {
              DECLARE_METHOD(t_OdmMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_OdmMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_OdmMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_OdmMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmMetadataKey)[] = {
              { Py_tp_methods, t_OdmMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_OdmMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(OdmMetadataKey, t_OdmMetadataKey, OdmMetadataKey);
            PyObject *t_OdmMetadataKey::wrap_Object(const OdmMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_OdmMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_OdmMetadataKey *self = (t_OdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_OdmMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_OdmMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_OdmMetadataKey *self = (t_OdmMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_OdmMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmMetadataKey), &PY_TYPE_DEF(OdmMetadataKey), module, "OdmMetadataKey", 0);
            }

            void t_OdmMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadataKey), "class_", make_descriptor(OdmMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadataKey), "wrapfn_", make_descriptor(t_OdmMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(OdmMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmMetadataKey), "OBJECT_NAME", make_descriptor(t_OdmMetadataKey::wrap_Object(*OdmMetadataKey::OBJECT_NAME)));
            }

            static PyObject *t_OdmMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmMetadataKey::initializeClass, 1)))
                return NULL;
              return t_OdmMetadataKey::wrap_Object(OdmMetadataKey(((t_OdmMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_OdmMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_OdmMetadataKey_of_(t_OdmMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_OdmMetadataKey_process(t_OdmMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::OdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::OdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_OdmMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              OdmMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::OdmMetadataKey::valueOf(a0));
                return t_OdmMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_OdmMetadataKey_values(PyTypeObject *type)
            {
              JArray< OdmMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::OdmMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_OdmMetadataKey::wrap_jobject);
            }
            static PyObject *t_OdmMetadataKey_get__parameters_(t_OdmMetadataKey *self, void *data)
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
#include "org/orekit/forces/maneuvers/trigger/PythonIntervalEventTrigger.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *PythonIntervalEventTrigger::class$ = NULL;
          jmethodID *PythonIntervalEventTrigger::mids$ = NULL;
          bool PythonIntervalEventTrigger::live$ = false;

          jclass PythonIntervalEventTrigger::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/PythonIntervalEventTrigger");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d0c14729fef158d0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/AbstractDetector;)V");
              mids$[mid_convertIntervalDetector_695049796b8b09bd] = env->getMethodID(cls, "convertIntervalDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonIntervalEventTrigger::PythonIntervalEventTrigger(const ::org::orekit::propagation::events::AbstractDetector & a0) : ::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger(env->newObject(initializeClass, &mids$, mid_init$_d0c14729fef158d0, a0.this$)) {}

          void PythonIntervalEventTrigger::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonIntervalEventTrigger::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonIntervalEventTrigger::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
          static PyObject *t_PythonIntervalEventTrigger_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIntervalEventTrigger_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonIntervalEventTrigger_of_(t_PythonIntervalEventTrigger *self, PyObject *args);
          static int t_PythonIntervalEventTrigger_init_(t_PythonIntervalEventTrigger *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonIntervalEventTrigger_finalize(t_PythonIntervalEventTrigger *self);
          static PyObject *t_PythonIntervalEventTrigger_pythonExtension(t_PythonIntervalEventTrigger *self, PyObject *args);
          static jobject JNICALL t_PythonIntervalEventTrigger_convertIntervalDetector0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
          static jobject JNICALL t_PythonIntervalEventTrigger_getParametersDrivers1(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonIntervalEventTrigger_pythonDecRef2(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonIntervalEventTrigger_get__self(t_PythonIntervalEventTrigger *self, void *data);
          static PyObject *t_PythonIntervalEventTrigger_get__parameters_(t_PythonIntervalEventTrigger *self, void *data);
          static PyGetSetDef t_PythonIntervalEventTrigger__fields_[] = {
            DECLARE_GET_FIELD(t_PythonIntervalEventTrigger, self),
            DECLARE_GET_FIELD(t_PythonIntervalEventTrigger, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonIntervalEventTrigger__methods_[] = {
            DECLARE_METHOD(t_PythonIntervalEventTrigger, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIntervalEventTrigger, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonIntervalEventTrigger, of_, METH_VARARGS),
            DECLARE_METHOD(t_PythonIntervalEventTrigger, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonIntervalEventTrigger, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonIntervalEventTrigger)[] = {
            { Py_tp_methods, t_PythonIntervalEventTrigger__methods_ },
            { Py_tp_init, (void *) t_PythonIntervalEventTrigger_init_ },
            { Py_tp_getset, t_PythonIntervalEventTrigger__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonIntervalEventTrigger)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::trigger::IntervalEventTrigger),
            NULL
          };

          DEFINE_TYPE(PythonIntervalEventTrigger, t_PythonIntervalEventTrigger, PythonIntervalEventTrigger);
          PyObject *t_PythonIntervalEventTrigger::wrap_Object(const PythonIntervalEventTrigger& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonIntervalEventTrigger::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonIntervalEventTrigger *self = (t_PythonIntervalEventTrigger *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_PythonIntervalEventTrigger::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_PythonIntervalEventTrigger::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_PythonIntervalEventTrigger *self = (t_PythonIntervalEventTrigger *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_PythonIntervalEventTrigger::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonIntervalEventTrigger), &PY_TYPE_DEF(PythonIntervalEventTrigger), module, "PythonIntervalEventTrigger", 1);
          }

          void t_PythonIntervalEventTrigger::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntervalEventTrigger), "class_", make_descriptor(PythonIntervalEventTrigger::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntervalEventTrigger), "wrapfn_", make_descriptor(t_PythonIntervalEventTrigger::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonIntervalEventTrigger), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonIntervalEventTrigger::initializeClass);
            JNINativeMethod methods[] = {
              { "convertIntervalDetector", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/events/AbstractDetector;)Lorg/orekit/propagation/events/FieldAbstractDetector;", (void *) t_PythonIntervalEventTrigger_convertIntervalDetector0 },
              { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonIntervalEventTrigger_getParametersDrivers1 },
              { "pythonDecRef", "()V", (void *) t_PythonIntervalEventTrigger_pythonDecRef2 },
            };
            env->registerNatives(cls, methods, 3);
          }

          static PyObject *t_PythonIntervalEventTrigger_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonIntervalEventTrigger::initializeClass, 1)))
              return NULL;
            return t_PythonIntervalEventTrigger::wrap_Object(PythonIntervalEventTrigger(((t_PythonIntervalEventTrigger *) arg)->object.this$));
          }
          static PyObject *t_PythonIntervalEventTrigger_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonIntervalEventTrigger::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_PythonIntervalEventTrigger_of_(t_PythonIntervalEventTrigger *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_PythonIntervalEventTrigger_init_(t_PythonIntervalEventTrigger *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::propagation::events::AbstractDetector a0((jobject) NULL);
            PyTypeObject **p0;
            PythonIntervalEventTrigger object((jobject) NULL);

            if (!parseArgs(args, "K", ::org::orekit::propagation::events::AbstractDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_AbstractDetector::parameters_))
            {
              INT_CALL(object = PythonIntervalEventTrigger(a0));
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

          static PyObject *t_PythonIntervalEventTrigger_finalize(t_PythonIntervalEventTrigger *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonIntervalEventTrigger_pythonExtension(t_PythonIntervalEventTrigger *self, PyObject *args)
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

          static jobject JNICALL t_PythonIntervalEventTrigger_convertIntervalDetector0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntervalEventTrigger::mids$[PythonIntervalEventTrigger::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::propagation::events::FieldAbstractDetector value((jobject) NULL);
            PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
            PyObject *o1 = ::org::orekit::propagation::events::t_AbstractDetector::wrap_Object(::org::orekit::propagation::events::AbstractDetector(a1));
            PyObject *result = PyObject_CallMethod(obj, "convertIntervalDetector", "OO", o0, o1);
            Py_DECREF(o0);
            Py_DECREF(o1);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::propagation::events::FieldAbstractDetector::initializeClass, &value))
            {
              throwTypeError("convertIntervalDetector", result);
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

          static jobject JNICALL t_PythonIntervalEventTrigger_getParametersDrivers1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntervalEventTrigger::mids$[PythonIntervalEventTrigger::mid_pythonExtension_a27fc9afd27e559d]);
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

          static void JNICALL t_PythonIntervalEventTrigger_pythonDecRef2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonIntervalEventTrigger::mids$[PythonIntervalEventTrigger::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonIntervalEventTrigger::mids$[PythonIntervalEventTrigger::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonIntervalEventTrigger_get__self(t_PythonIntervalEventTrigger *self, void *data)
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
          static PyObject *t_PythonIntervalEventTrigger_get__parameters_(t_PythonIntervalEventTrigger *self, void *data)
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
#include "org/orekit/files/general/PythonSatelliteAttitudeEphemeris.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {

        ::java::lang::Class *PythonSatelliteAttitudeEphemeris::class$ = NULL;
        jmethodID *PythonSatelliteAttitudeEphemeris::mids$ = NULL;
        bool PythonSatelliteAttitudeEphemeris::live$ = false;

        jclass PythonSatelliteAttitudeEphemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/general/PythonSatelliteAttitudeEphemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAttitudeProvider_05a2839e8fecde67] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
            mids$[mid_getId_0090f7797e403f43] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getSegments_a6156df500549a58] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonSatelliteAttitudeEphemeris::PythonSatelliteAttitudeEphemeris() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        void PythonSatelliteAttitudeEphemeris::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonSatelliteAttitudeEphemeris::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonSatelliteAttitudeEphemeris::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
        static PyObject *t_PythonSatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonSatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonSatelliteAttitudeEphemeris_init_(t_PythonSatelliteAttitudeEphemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonSatelliteAttitudeEphemeris_finalize(t_PythonSatelliteAttitudeEphemeris *self);
        static PyObject *t_PythonSatelliteAttitudeEphemeris_pythonExtension(t_PythonSatelliteAttitudeEphemeris *self, PyObject *args);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getAttitudeProvider0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getId1(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getSegments2(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getStart3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getStop4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonSatelliteAttitudeEphemeris_pythonDecRef5(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonSatelliteAttitudeEphemeris_get__self(t_PythonSatelliteAttitudeEphemeris *self, void *data);
        static PyGetSetDef t_PythonSatelliteAttitudeEphemeris__fields_[] = {
          DECLARE_GET_FIELD(t_PythonSatelliteAttitudeEphemeris, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonSatelliteAttitudeEphemeris__methods_[] = {
          DECLARE_METHOD(t_PythonSatelliteAttitudeEphemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSatelliteAttitudeEphemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonSatelliteAttitudeEphemeris, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonSatelliteAttitudeEphemeris, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonSatelliteAttitudeEphemeris)[] = {
          { Py_tp_methods, t_PythonSatelliteAttitudeEphemeris__methods_ },
          { Py_tp_init, (void *) t_PythonSatelliteAttitudeEphemeris_init_ },
          { Py_tp_getset, t_PythonSatelliteAttitudeEphemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonSatelliteAttitudeEphemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonSatelliteAttitudeEphemeris, t_PythonSatelliteAttitudeEphemeris, PythonSatelliteAttitudeEphemeris);

        void t_PythonSatelliteAttitudeEphemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonSatelliteAttitudeEphemeris), &PY_TYPE_DEF(PythonSatelliteAttitudeEphemeris), module, "PythonSatelliteAttitudeEphemeris", 1);
        }

        void t_PythonSatelliteAttitudeEphemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSatelliteAttitudeEphemeris), "class_", make_descriptor(PythonSatelliteAttitudeEphemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSatelliteAttitudeEphemeris), "wrapfn_", make_descriptor(t_PythonSatelliteAttitudeEphemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonSatelliteAttitudeEphemeris), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonSatelliteAttitudeEphemeris::initializeClass);
          JNINativeMethod methods[] = {
            { "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;", (void *) t_PythonSatelliteAttitudeEphemeris_getAttitudeProvider0 },
            { "getId", "()Ljava/lang/String;", (void *) t_PythonSatelliteAttitudeEphemeris_getId1 },
            { "getSegments", "()Ljava/util/List;", (void *) t_PythonSatelliteAttitudeEphemeris_getSegments2 },
            { "getStart", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonSatelliteAttitudeEphemeris_getStart3 },
            { "getStop", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonSatelliteAttitudeEphemeris_getStop4 },
            { "pythonDecRef", "()V", (void *) t_PythonSatelliteAttitudeEphemeris_pythonDecRef5 },
          };
          env->registerNatives(cls, methods, 6);
        }

        static PyObject *t_PythonSatelliteAttitudeEphemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonSatelliteAttitudeEphemeris::initializeClass, 1)))
            return NULL;
          return t_PythonSatelliteAttitudeEphemeris::wrap_Object(PythonSatelliteAttitudeEphemeris(((t_PythonSatelliteAttitudeEphemeris *) arg)->object.this$));
        }
        static PyObject *t_PythonSatelliteAttitudeEphemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonSatelliteAttitudeEphemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonSatelliteAttitudeEphemeris_init_(t_PythonSatelliteAttitudeEphemeris *self, PyObject *args, PyObject *kwds)
        {
          PythonSatelliteAttitudeEphemeris object((jobject) NULL);

          INT_CALL(object = PythonSatelliteAttitudeEphemeris());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonSatelliteAttitudeEphemeris_finalize(t_PythonSatelliteAttitudeEphemeris *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonSatelliteAttitudeEphemeris_pythonExtension(t_PythonSatelliteAttitudeEphemeris *self, PyObject *args)
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

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getAttitudeProvider0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAttitudeProvider", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::attitudes::BoundedAttitudeProvider::initializeClass, &value))
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

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getId1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getId", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getId", result);
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

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getSegments2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_a27fc9afd27e559d]);
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

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getStart3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getStart", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getStart", result);
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

        static jobject JNICALL t_PythonSatelliteAttitudeEphemeris_getStop4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getStop", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
          {
            throwTypeError("getStop", result);
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

        static void JNICALL t_PythonSatelliteAttitudeEphemeris_pythonDecRef5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonSatelliteAttitudeEphemeris::mids$[PythonSatelliteAttitudeEphemeris::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonSatelliteAttitudeEphemeris_get__self(t_PythonSatelliteAttitudeEphemeris *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/LutherFieldIntegrator.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *LutherFieldIntegrator::class$ = NULL;
        jmethodID *LutherFieldIntegrator::mids$ = NULL;
        bool LutherFieldIntegrator::live$ = false;

        jclass LutherFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/LutherFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_15e7459be7ec40d8] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_dd8485a0eb2e2903] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_01c7d10e96d5cf94] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_01c7d10e96d5cf94] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_959f9d82f2b6fa76] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/LutherFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LutherFieldIntegrator::LutherFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_15e7459be7ec40d8, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > LutherFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_dd8485a0eb2e2903]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > LutherFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_01c7d10e96d5cf94]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > LutherFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_01c7d10e96d5cf94]));
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
        static PyObject *t_LutherFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LutherFieldIntegrator_of_(t_LutherFieldIntegrator *self, PyObject *args);
        static int t_LutherFieldIntegrator_init_(t_LutherFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LutherFieldIntegrator_getA(t_LutherFieldIntegrator *self, PyObject *args);
        static PyObject *t_LutherFieldIntegrator_getB(t_LutherFieldIntegrator *self, PyObject *args);
        static PyObject *t_LutherFieldIntegrator_getC(t_LutherFieldIntegrator *self, PyObject *args);
        static PyObject *t_LutherFieldIntegrator_get__a(t_LutherFieldIntegrator *self, void *data);
        static PyObject *t_LutherFieldIntegrator_get__b(t_LutherFieldIntegrator *self, void *data);
        static PyObject *t_LutherFieldIntegrator_get__c(t_LutherFieldIntegrator *self, void *data);
        static PyObject *t_LutherFieldIntegrator_get__parameters_(t_LutherFieldIntegrator *self, void *data);
        static PyGetSetDef t_LutherFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_LutherFieldIntegrator, a),
          DECLARE_GET_FIELD(t_LutherFieldIntegrator, b),
          DECLARE_GET_FIELD(t_LutherFieldIntegrator, c),
          DECLARE_GET_FIELD(t_LutherFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LutherFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_LutherFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LutherFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_LutherFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_LutherFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_LutherFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LutherFieldIntegrator)[] = {
          { Py_tp_methods, t_LutherFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_LutherFieldIntegrator_init_ },
          { Py_tp_getset, t_LutherFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LutherFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(LutherFieldIntegrator, t_LutherFieldIntegrator, LutherFieldIntegrator);
        PyObject *t_LutherFieldIntegrator::wrap_Object(const LutherFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LutherFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LutherFieldIntegrator *self = (t_LutherFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_LutherFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_LutherFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_LutherFieldIntegrator *self = (t_LutherFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_LutherFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(LutherFieldIntegrator), &PY_TYPE_DEF(LutherFieldIntegrator), module, "LutherFieldIntegrator", 0);
        }

        void t_LutherFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegrator), "class_", make_descriptor(LutherFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegrator), "wrapfn_", make_descriptor(t_LutherFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LutherFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LutherFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LutherFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_LutherFieldIntegrator::wrap_Object(LutherFieldIntegrator(((t_LutherFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_LutherFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LutherFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_LutherFieldIntegrator_of_(t_LutherFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_LutherFieldIntegrator_init_(t_LutherFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          LutherFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = LutherFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LutherFieldIntegrator_getA(t_LutherFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(LutherFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_LutherFieldIntegrator_getB(t_LutherFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(LutherFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_LutherFieldIntegrator_getC(t_LutherFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(LutherFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_LutherFieldIntegrator_get__parameters_(t_LutherFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_LutherFieldIntegrator_get__a(t_LutherFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_LutherFieldIntegrator_get__b(t_LutherFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_LutherFieldIntegrator_get__c(t_LutherFieldIntegrator *self, void *data)
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
#include "org/orekit/bodies/LoxodromeArc.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace bodies {

      ::java::lang::Class *LoxodromeArc::class$ = NULL;
      jmethodID *LoxodromeArc::mids$ = NULL;
      bool LoxodromeArc::live$ = false;

      jclass LoxodromeArc::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/bodies/LoxodromeArc");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4844c9c998947019] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/OneAxisEllipsoid;)V");
          mids$[mid_init$_7ddbea5e851c6edb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/GeodeticPoint;Lorg/orekit/bodies/OneAxisEllipsoid;D)V");
          mids$[mid_calculatePointAlongArc_e381e99dbfc90980] = env->getMethodID(cls, "calculatePointAlongArc", "(D)Lorg/orekit/bodies/GeodeticPoint;");
          mids$[mid_getDistance_456d9a2f64d6b28d] = env->getMethodID(cls, "getDistance", "()D");
          mids$[mid_getFinalPoint_fabc97b1aefe5844] = env->getMethodID(cls, "getFinalPoint", "()Lorg/orekit/bodies/GeodeticPoint;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LoxodromeArc::LoxodromeArc(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2) : ::org::orekit::bodies::Loxodrome(env->newObject(initializeClass, &mids$, mid_init$_4844c9c998947019, a0.this$, a1.this$, a2.this$)) {}

      LoxodromeArc::LoxodromeArc(const ::org::orekit::bodies::GeodeticPoint & a0, const ::org::orekit::bodies::GeodeticPoint & a1, const ::org::orekit::bodies::OneAxisEllipsoid & a2, jdouble a3) : ::org::orekit::bodies::Loxodrome(env->newObject(initializeClass, &mids$, mid_init$_7ddbea5e851c6edb, a0.this$, a1.this$, a2.this$, a3)) {}

      ::org::orekit::bodies::GeodeticPoint LoxodromeArc::calculatePointAlongArc(jdouble a0) const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_calculatePointAlongArc_e381e99dbfc90980], a0));
      }

      jdouble LoxodromeArc::getDistance() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDistance_456d9a2f64d6b28d]);
      }

      ::org::orekit::bodies::GeodeticPoint LoxodromeArc::getFinalPoint() const
      {
        return ::org::orekit::bodies::GeodeticPoint(env->callObjectMethod(this$, mids$[mid_getFinalPoint_fabc97b1aefe5844]));
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
      static PyObject *t_LoxodromeArc_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LoxodromeArc_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LoxodromeArc_init_(t_LoxodromeArc *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LoxodromeArc_calculatePointAlongArc(t_LoxodromeArc *self, PyObject *arg);
      static PyObject *t_LoxodromeArc_getDistance(t_LoxodromeArc *self);
      static PyObject *t_LoxodromeArc_getFinalPoint(t_LoxodromeArc *self);
      static PyObject *t_LoxodromeArc_get__distance(t_LoxodromeArc *self, void *data);
      static PyObject *t_LoxodromeArc_get__finalPoint(t_LoxodromeArc *self, void *data);
      static PyGetSetDef t_LoxodromeArc__fields_[] = {
        DECLARE_GET_FIELD(t_LoxodromeArc, distance),
        DECLARE_GET_FIELD(t_LoxodromeArc, finalPoint),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LoxodromeArc__methods_[] = {
        DECLARE_METHOD(t_LoxodromeArc, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LoxodromeArc, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LoxodromeArc, calculatePointAlongArc, METH_O),
        DECLARE_METHOD(t_LoxodromeArc, getDistance, METH_NOARGS),
        DECLARE_METHOD(t_LoxodromeArc, getFinalPoint, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LoxodromeArc)[] = {
        { Py_tp_methods, t_LoxodromeArc__methods_ },
        { Py_tp_init, (void *) t_LoxodromeArc_init_ },
        { Py_tp_getset, t_LoxodromeArc__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LoxodromeArc)[] = {
        &PY_TYPE_DEF(::org::orekit::bodies::Loxodrome),
        NULL
      };

      DEFINE_TYPE(LoxodromeArc, t_LoxodromeArc, LoxodromeArc);

      void t_LoxodromeArc::install(PyObject *module)
      {
        installType(&PY_TYPE(LoxodromeArc), &PY_TYPE_DEF(LoxodromeArc), module, "LoxodromeArc", 0);
      }

      void t_LoxodromeArc::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoxodromeArc), "class_", make_descriptor(LoxodromeArc::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoxodromeArc), "wrapfn_", make_descriptor(t_LoxodromeArc::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LoxodromeArc), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LoxodromeArc_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LoxodromeArc::initializeClass, 1)))
          return NULL;
        return t_LoxodromeArc::wrap_Object(LoxodromeArc(((t_LoxodromeArc *) arg)->object.this$));
      }
      static PyObject *t_LoxodromeArc_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LoxodromeArc::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LoxodromeArc_init_(t_LoxodromeArc *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
            LoxodromeArc object((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = LoxodromeArc(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            ::org::orekit::bodies::GeodeticPoint a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::orekit::bodies::OneAxisEllipsoid a2((jobject) NULL);
            jdouble a3;
            LoxodromeArc object((jobject) NULL);

            if (!parseArgs(args, "kkkD", ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = LoxodromeArc(a0, a1, a2, a3));
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

      static PyObject *t_LoxodromeArc_calculatePointAlongArc(t_LoxodromeArc *self, PyObject *arg)
      {
        jdouble a0;
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.calculatePointAlongArc(a0));
          return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "calculatePointAlongArc", arg);
        return NULL;
      }

      static PyObject *t_LoxodromeArc_getDistance(t_LoxodromeArc *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDistance());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_LoxodromeArc_getFinalPoint(t_LoxodromeArc *self)
      {
        ::org::orekit::bodies::GeodeticPoint result((jobject) NULL);
        OBJ_CALL(result = self->object.getFinalPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(result);
      }

      static PyObject *t_LoxodromeArc_get__distance(t_LoxodromeArc *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDistance());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_LoxodromeArc_get__finalPoint(t_LoxodromeArc *self, void *data)
      {
        ::org::orekit::bodies::GeodeticPoint value((jobject) NULL);
        OBJ_CALL(value = self->object.getFinalPoint());
        return ::org::orekit::bodies::t_GeodeticPoint::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/orbits/CR3BPDifferentialCorrection.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/orbits/LibrationOrbitType.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CR3BPSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace orbits {

      ::java::lang::Class *CR3BPDifferentialCorrection::class$ = NULL;
      jmethodID *CR3BPDifferentialCorrection::mids$ = NULL;
      bool CR3BPDifferentialCorrection::live$ = false;

      jclass CR3BPDifferentialCorrection::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/orbits/CR3BPDifferentialCorrection");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0764f38e7971b396] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/bodies/CR3BPSystem;D)V");
          mids$[mid_compute_2101d6a6956f957b] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/LibrationOrbitType;)Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_computeLyapunov_6761e3f334368d44] = env->getMethodID(cls, "computeLyapunov", "()Lorg/orekit/utils/PVCoordinates;");
          mids$[mid_getOrbitalPeriod_456d9a2f64d6b28d] = env->getMethodID(cls, "getOrbitalPeriod", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      CR3BPDifferentialCorrection::CR3BPDifferentialCorrection(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::bodies::CR3BPSystem & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0764f38e7971b396, a0.this$, a1.this$, a2)) {}

      ::org::orekit::utils::PVCoordinates CR3BPDifferentialCorrection::compute(const ::org::orekit::orbits::LibrationOrbitType & a0) const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_compute_2101d6a6956f957b], a0.this$));
      }

      ::org::orekit::utils::PVCoordinates CR3BPDifferentialCorrection::computeLyapunov() const
      {
        return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeLyapunov_6761e3f334368d44]));
      }

      jdouble CR3BPDifferentialCorrection::getOrbitalPeriod() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getOrbitalPeriod_456d9a2f64d6b28d]);
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
      static PyObject *t_CR3BPDifferentialCorrection_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CR3BPDifferentialCorrection_instance_(PyTypeObject *type, PyObject *arg);
      static int t_CR3BPDifferentialCorrection_init_(t_CR3BPDifferentialCorrection *self, PyObject *args, PyObject *kwds);
      static PyObject *t_CR3BPDifferentialCorrection_compute(t_CR3BPDifferentialCorrection *self, PyObject *arg);
      static PyObject *t_CR3BPDifferentialCorrection_computeLyapunov(t_CR3BPDifferentialCorrection *self);
      static PyObject *t_CR3BPDifferentialCorrection_getOrbitalPeriod(t_CR3BPDifferentialCorrection *self);
      static PyObject *t_CR3BPDifferentialCorrection_get__orbitalPeriod(t_CR3BPDifferentialCorrection *self, void *data);
      static PyGetSetDef t_CR3BPDifferentialCorrection__fields_[] = {
        DECLARE_GET_FIELD(t_CR3BPDifferentialCorrection, orbitalPeriod),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CR3BPDifferentialCorrection__methods_[] = {
        DECLARE_METHOD(t_CR3BPDifferentialCorrection, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPDifferentialCorrection, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CR3BPDifferentialCorrection, compute, METH_O),
        DECLARE_METHOD(t_CR3BPDifferentialCorrection, computeLyapunov, METH_NOARGS),
        DECLARE_METHOD(t_CR3BPDifferentialCorrection, getOrbitalPeriod, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CR3BPDifferentialCorrection)[] = {
        { Py_tp_methods, t_CR3BPDifferentialCorrection__methods_ },
        { Py_tp_init, (void *) t_CR3BPDifferentialCorrection_init_ },
        { Py_tp_getset, t_CR3BPDifferentialCorrection__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CR3BPDifferentialCorrection)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CR3BPDifferentialCorrection, t_CR3BPDifferentialCorrection, CR3BPDifferentialCorrection);

      void t_CR3BPDifferentialCorrection::install(PyObject *module)
      {
        installType(&PY_TYPE(CR3BPDifferentialCorrection), &PY_TYPE_DEF(CR3BPDifferentialCorrection), module, "CR3BPDifferentialCorrection", 0);
      }

      void t_CR3BPDifferentialCorrection::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPDifferentialCorrection), "class_", make_descriptor(CR3BPDifferentialCorrection::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPDifferentialCorrection), "wrapfn_", make_descriptor(t_CR3BPDifferentialCorrection::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPDifferentialCorrection), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CR3BPDifferentialCorrection_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CR3BPDifferentialCorrection::initializeClass, 1)))
          return NULL;
        return t_CR3BPDifferentialCorrection::wrap_Object(CR3BPDifferentialCorrection(((t_CR3BPDifferentialCorrection *) arg)->object.this$));
      }
      static PyObject *t_CR3BPDifferentialCorrection_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CR3BPDifferentialCorrection::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_CR3BPDifferentialCorrection_init_(t_CR3BPDifferentialCorrection *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
        ::org::orekit::bodies::CR3BPSystem a1((jobject) NULL);
        jdouble a2;
        CR3BPDifferentialCorrection object((jobject) NULL);

        if (!parseArgs(args, "kkD", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::bodies::CR3BPSystem::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = CR3BPDifferentialCorrection(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_CR3BPDifferentialCorrection_compute(t_CR3BPDifferentialCorrection *self, PyObject *arg)
      {
        ::org::orekit::orbits::LibrationOrbitType a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::orbits::LibrationOrbitType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_LibrationOrbitType::parameters_))
        {
          OBJ_CALL(result = self->object.compute(a0));
          return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "compute", arg);
        return NULL;
      }

      static PyObject *t_CR3BPDifferentialCorrection_computeLyapunov(t_CR3BPDifferentialCorrection *self)
      {
        ::org::orekit::utils::PVCoordinates result((jobject) NULL);
        OBJ_CALL(result = self->object.computeLyapunov());
        return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
      }

      static PyObject *t_CR3BPDifferentialCorrection_getOrbitalPeriod(t_CR3BPDifferentialCorrection *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getOrbitalPeriod());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_CR3BPDifferentialCorrection_get__orbitalPeriod(t_CR3BPDifferentialCorrection *self, void *data)
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
#include "org/hipparchus/distribution/continuous/LaplaceDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *LaplaceDistribution::class$ = NULL;
        jmethodID *LaplaceDistribution::mids$ = NULL;
        bool LaplaceDistribution::live$ = false;

        jclass LaplaceDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/LaplaceDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_456d9a2f64d6b28d] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_456d9a2f64d6b28d] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LaplaceDistribution::LaplaceDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        jdouble LaplaceDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble LaplaceDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jdouble LaplaceDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_456d9a2f64d6b28d]);
        }

        jdouble LaplaceDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble LaplaceDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble LaplaceDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_456d9a2f64d6b28d]);
        }

        jdouble LaplaceDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble LaplaceDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        jdouble LaplaceDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e], a0);
        }

        jboolean LaplaceDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
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
      namespace continuous {
        static PyObject *t_LaplaceDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LaplaceDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LaplaceDistribution_init_(t_LaplaceDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LaplaceDistribution_cumulativeProbability(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_density(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_getLocation(t_LaplaceDistribution *self);
        static PyObject *t_LaplaceDistribution_getNumericalMean(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_getNumericalVariance(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_getScale(t_LaplaceDistribution *self);
        static PyObject *t_LaplaceDistribution_getSupportLowerBound(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_getSupportUpperBound(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_inverseCumulativeProbability(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_isSupportConnected(t_LaplaceDistribution *self, PyObject *args);
        static PyObject *t_LaplaceDistribution_get__location(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__numericalMean(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__numericalVariance(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__scale(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__supportConnected(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__supportLowerBound(t_LaplaceDistribution *self, void *data);
        static PyObject *t_LaplaceDistribution_get__supportUpperBound(t_LaplaceDistribution *self, void *data);
        static PyGetSetDef t_LaplaceDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_LaplaceDistribution, location),
          DECLARE_GET_FIELD(t_LaplaceDistribution, numericalMean),
          DECLARE_GET_FIELD(t_LaplaceDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_LaplaceDistribution, scale),
          DECLARE_GET_FIELD(t_LaplaceDistribution, supportConnected),
          DECLARE_GET_FIELD(t_LaplaceDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_LaplaceDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LaplaceDistribution__methods_[] = {
          DECLARE_METHOD(t_LaplaceDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LaplaceDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LaplaceDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LaplaceDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LaplaceDistribution)[] = {
          { Py_tp_methods, t_LaplaceDistribution__methods_ },
          { Py_tp_init, (void *) t_LaplaceDistribution_init_ },
          { Py_tp_getset, t_LaplaceDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LaplaceDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(LaplaceDistribution, t_LaplaceDistribution, LaplaceDistribution);

        void t_LaplaceDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(LaplaceDistribution), &PY_TYPE_DEF(LaplaceDistribution), module, "LaplaceDistribution", 0);
        }

        void t_LaplaceDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaplaceDistribution), "class_", make_descriptor(LaplaceDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaplaceDistribution), "wrapfn_", make_descriptor(t_LaplaceDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LaplaceDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LaplaceDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LaplaceDistribution::initializeClass, 1)))
            return NULL;
          return t_LaplaceDistribution::wrap_Object(LaplaceDistribution(((t_LaplaceDistribution *) arg)->object.this$));
        }
        static PyObject *t_LaplaceDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LaplaceDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LaplaceDistribution_init_(t_LaplaceDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          LaplaceDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = LaplaceDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LaplaceDistribution_cumulativeProbability(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_LaplaceDistribution_density(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_LaplaceDistribution_getLocation(t_LaplaceDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LaplaceDistribution_getNumericalMean(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_LaplaceDistribution_getNumericalVariance(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_LaplaceDistribution_getScale(t_LaplaceDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LaplaceDistribution_getSupportLowerBound(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_LaplaceDistribution_getSupportUpperBound(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_LaplaceDistribution_inverseCumulativeProbability(t_LaplaceDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_LaplaceDistribution_isSupportConnected(t_LaplaceDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LaplaceDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_LaplaceDistribution_get__location(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LaplaceDistribution_get__numericalMean(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LaplaceDistribution_get__numericalVariance(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LaplaceDistribution_get__scale(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LaplaceDistribution_get__supportConnected(t_LaplaceDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_LaplaceDistribution_get__supportLowerBound(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LaplaceDistribution_get__supportUpperBound(t_LaplaceDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/RotationXmlTokenBuilder.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *RotationXmlTokenBuilder::class$ = NULL;
            jmethodID *RotationXmlTokenBuilder::mids$ = NULL;
            bool RotationXmlTokenBuilder::live$ = false;

            jclass RotationXmlTokenBuilder::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/RotationXmlTokenBuilder");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_buildTokens_9b67b2bd574b1d70] = env->getMethodID(cls, "buildTokens", "(ZZLjava/lang/String;Ljava/lang/String;Ljava/util/Map;ILjava/lang/String;)Ljava/util/List;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            RotationXmlTokenBuilder::RotationXmlTokenBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            ::java::util::List RotationXmlTokenBuilder::buildTokens(jboolean a0, jboolean a1, const ::java::lang::String & a2, const ::java::lang::String & a3, const ::java::util::Map & a4, jint a5, const ::java::lang::String & a6) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_buildTokens_9b67b2bd574b1d70], a0, a1, a2.this$, a3.this$, a4.this$, a5, a6.this$));
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
            static PyObject *t_RotationXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RotationXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg);
            static int t_RotationXmlTokenBuilder_init_(t_RotationXmlTokenBuilder *self, PyObject *args, PyObject *kwds);
            static PyObject *t_RotationXmlTokenBuilder_buildTokens(t_RotationXmlTokenBuilder *self, PyObject *args);

            static PyMethodDef t_RotationXmlTokenBuilder__methods_[] = {
              DECLARE_METHOD(t_RotationXmlTokenBuilder, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RotationXmlTokenBuilder, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RotationXmlTokenBuilder, buildTokens, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RotationXmlTokenBuilder)[] = {
              { Py_tp_methods, t_RotationXmlTokenBuilder__methods_ },
              { Py_tp_init, (void *) t_RotationXmlTokenBuilder_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RotationXmlTokenBuilder)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(RotationXmlTokenBuilder, t_RotationXmlTokenBuilder, RotationXmlTokenBuilder);

            void t_RotationXmlTokenBuilder::install(PyObject *module)
            {
              installType(&PY_TYPE(RotationXmlTokenBuilder), &PY_TYPE_DEF(RotationXmlTokenBuilder), module, "RotationXmlTokenBuilder", 0);
            }

            void t_RotationXmlTokenBuilder::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RotationXmlTokenBuilder), "class_", make_descriptor(RotationXmlTokenBuilder::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RotationXmlTokenBuilder), "wrapfn_", make_descriptor(t_RotationXmlTokenBuilder::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RotationXmlTokenBuilder), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RotationXmlTokenBuilder_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RotationXmlTokenBuilder::initializeClass, 1)))
                return NULL;
              return t_RotationXmlTokenBuilder::wrap_Object(RotationXmlTokenBuilder(((t_RotationXmlTokenBuilder *) arg)->object.this$));
            }
            static PyObject *t_RotationXmlTokenBuilder_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RotationXmlTokenBuilder::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_RotationXmlTokenBuilder_init_(t_RotationXmlTokenBuilder *self, PyObject *args, PyObject *kwds)
            {
              RotationXmlTokenBuilder object((jobject) NULL);

              INT_CALL(object = RotationXmlTokenBuilder());
              self->object = object;

              return 0;
            }

            static PyObject *t_RotationXmlTokenBuilder_buildTokens(t_RotationXmlTokenBuilder *self, PyObject *args)
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
#include "org/hipparchus/distribution/continuous/GumbelDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *GumbelDistribution::class$ = NULL;
        jmethodID *GumbelDistribution::mids$ = NULL;
        bool GumbelDistribution::live$ = false;

        jclass GumbelDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/GumbelDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_456d9a2f64d6b28d] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_456d9a2f64d6b28d] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GumbelDistribution::GumbelDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        jdouble GumbelDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble GumbelDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jdouble GumbelDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_456d9a2f64d6b28d]);
        }

        jdouble GumbelDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble GumbelDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble GumbelDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_456d9a2f64d6b28d]);
        }

        jdouble GumbelDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble GumbelDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        jdouble GumbelDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e], a0);
        }

        jboolean GumbelDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
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
      namespace continuous {
        static PyObject *t_GumbelDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GumbelDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GumbelDistribution_init_(t_GumbelDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GumbelDistribution_cumulativeProbability(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_density(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_getLocation(t_GumbelDistribution *self);
        static PyObject *t_GumbelDistribution_getNumericalMean(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_getNumericalVariance(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_getScale(t_GumbelDistribution *self);
        static PyObject *t_GumbelDistribution_getSupportLowerBound(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_getSupportUpperBound(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_inverseCumulativeProbability(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_isSupportConnected(t_GumbelDistribution *self, PyObject *args);
        static PyObject *t_GumbelDistribution_get__location(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__numericalMean(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__numericalVariance(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__scale(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__supportConnected(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__supportLowerBound(t_GumbelDistribution *self, void *data);
        static PyObject *t_GumbelDistribution_get__supportUpperBound(t_GumbelDistribution *self, void *data);
        static PyGetSetDef t_GumbelDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_GumbelDistribution, location),
          DECLARE_GET_FIELD(t_GumbelDistribution, numericalMean),
          DECLARE_GET_FIELD(t_GumbelDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_GumbelDistribution, scale),
          DECLARE_GET_FIELD(t_GumbelDistribution, supportConnected),
          DECLARE_GET_FIELD(t_GumbelDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_GumbelDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GumbelDistribution__methods_[] = {
          DECLARE_METHOD(t_GumbelDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GumbelDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GumbelDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_GumbelDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_GumbelDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_GumbelDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GumbelDistribution)[] = {
          { Py_tp_methods, t_GumbelDistribution__methods_ },
          { Py_tp_init, (void *) t_GumbelDistribution_init_ },
          { Py_tp_getset, t_GumbelDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GumbelDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(GumbelDistribution, t_GumbelDistribution, GumbelDistribution);

        void t_GumbelDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(GumbelDistribution), &PY_TYPE_DEF(GumbelDistribution), module, "GumbelDistribution", 0);
        }

        void t_GumbelDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GumbelDistribution), "class_", make_descriptor(GumbelDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GumbelDistribution), "wrapfn_", make_descriptor(t_GumbelDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GumbelDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GumbelDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GumbelDistribution::initializeClass, 1)))
            return NULL;
          return t_GumbelDistribution::wrap_Object(GumbelDistribution(((t_GumbelDistribution *) arg)->object.this$));
        }
        static PyObject *t_GumbelDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GumbelDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GumbelDistribution_init_(t_GumbelDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          GumbelDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = GumbelDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GumbelDistribution_cumulativeProbability(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_GumbelDistribution_density(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_GumbelDistribution_getLocation(t_GumbelDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GumbelDistribution_getNumericalMean(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_GumbelDistribution_getNumericalVariance(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_GumbelDistribution_getScale(t_GumbelDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_GumbelDistribution_getSupportLowerBound(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_GumbelDistribution_getSupportUpperBound(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_GumbelDistribution_inverseCumulativeProbability(t_GumbelDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_GumbelDistribution_isSupportConnected(t_GumbelDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(GumbelDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_GumbelDistribution_get__location(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__numericalMean(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__numericalVariance(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__scale(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__supportConnected(t_GumbelDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_GumbelDistribution_get__supportLowerBound(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_GumbelDistribution_get__supportUpperBound(t_GumbelDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
