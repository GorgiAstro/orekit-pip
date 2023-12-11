#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/TransformGenerator.h"
#include "java/util/List.h"
#include "org/orekit/frames/Transform.h"
#include "org/orekit/frames/TransformProvider.h"
#include "org/orekit/utils/TimeStampedGenerator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *TransformGenerator::class$ = NULL;
      jmethodID *TransformGenerator::mids$ = NULL;
      bool TransformGenerator::live$ = false;

      jclass TransformGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/TransformGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3291e0fe5159f573] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/TransformProvider;D)V");
          mids$[mid_generate_c5683b8e06424542] = env->getMethodID(cls, "generate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TransformGenerator::TransformGenerator(jint a0, const ::org::orekit::frames::TransformProvider & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3291e0fe5159f573, a0, a1.this$, a2)) {}

      ::java::util::List TransformGenerator::generate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_generate_c5683b8e06424542], a0.this$, a1.this$));
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
      static PyObject *t_TransformGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TransformGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TransformGenerator_init_(t_TransformGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TransformGenerator_generate(t_TransformGenerator *self, PyObject *args);

      static PyMethodDef t_TransformGenerator__methods_[] = {
        DECLARE_METHOD(t_TransformGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TransformGenerator, generate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TransformGenerator)[] = {
        { Py_tp_methods, t_TransformGenerator__methods_ },
        { Py_tp_init, (void *) t_TransformGenerator_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TransformGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TransformGenerator, t_TransformGenerator, TransformGenerator);

      void t_TransformGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(TransformGenerator), &PY_TYPE_DEF(TransformGenerator), module, "TransformGenerator", 0);
      }

      void t_TransformGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformGenerator), "class_", make_descriptor(TransformGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformGenerator), "wrapfn_", make_descriptor(t_TransformGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TransformGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TransformGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TransformGenerator::initializeClass, 1)))
          return NULL;
        return t_TransformGenerator::wrap_Object(TransformGenerator(((t_TransformGenerator *) arg)->object.this$));
      }
      static PyObject *t_TransformGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TransformGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TransformGenerator_init_(t_TransformGenerator *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        ::org::orekit::frames::TransformProvider a1((jobject) NULL);
        jdouble a2;
        TransformGenerator object((jobject) NULL);

        if (!parseArgs(args, "IkD", ::org::orekit::frames::TransformProvider::initializeClass, &a0, &a1, &a2))
        {
          INT_CALL(object = TransformGenerator(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TransformGenerator_generate(t_TransformGenerator *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::java::util::List result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.generate(a0, a1));
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::frames::PY_TYPE(Transform));
        }

        PyErr_SetArgsError((PyObject *) self, "generate", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTHarvester.h"
#include "java/util/List.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/orbits/OrbitType.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
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
              mids$[mid_freezeColumnsNames_0640e6acf969ed28] = env->getMethodID(cls, "freezeColumnsNames", "()V");
              mids$[mid_getB1_70a207fcbc031df2] = env->getMethodID(cls, "getB1", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getB2_fc9cdfa83c55d6b2] = env->getMethodID(cls, "getB2", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getB3_fc9cdfa83c55d6b2] = env->getMethodID(cls, "getB3", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getB4_70a207fcbc031df2] = env->getMethodID(cls, "getB4", "()Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getJacobiansColumnsNames_0d9551367f7ecdef] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
              mids$[mid_getOrbitType_2cea2a2cb3e02091] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
              mids$[mid_getParametersJacobian_fc9cdfa83c55d6b2] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_getPositionAngleType_f4984aee71df4c19] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
              mids$[mid_getStateTransitionMatrix_fc9cdfa83c55d6b2] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
              mids$[mid_initializeFieldShortPeriodTerms_8655761ebf04b503] = env->getMethodID(cls, "initializeFieldShortPeriodTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_setReferenceState_8655761ebf04b503] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");
              mids$[mid_updateFieldShortPeriodTerms_8655761ebf04b503] = env->getMethodID(cls, "updateFieldShortPeriodTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void DSSTHarvester::freezeColumnsNames() const
          {
            env->callVoidMethod(this$, mids$[mid_freezeColumnsNames_0640e6acf969ed28]);
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getB1() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getB1_70a207fcbc031df2]));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getB2(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getB2_fc9cdfa83c55d6b2], a0.this$));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getB3(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getB3_fc9cdfa83c55d6b2], a0.this$));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getB4() const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getB4_70a207fcbc031df2]));
          }

          ::java::util::List DSSTHarvester::getJacobiansColumnsNames() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getJacobiansColumnsNames_0d9551367f7ecdef]));
          }

          ::org::orekit::orbits::OrbitType DSSTHarvester::getOrbitType() const
          {
            return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_2cea2a2cb3e02091]));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getParametersJacobian(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getParametersJacobian_fc9cdfa83c55d6b2], a0.this$));
          }

          ::org::orekit::orbits::PositionAngleType DSSTHarvester::getPositionAngleType() const
          {
            return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_f4984aee71df4c19]));
          }

          ::org::hipparchus::linear::RealMatrix DSSTHarvester::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_fc9cdfa83c55d6b2], a0.this$));
          }

          void DSSTHarvester::initializeFieldShortPeriodTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_initializeFieldShortPeriodTerms_8655761ebf04b503], a0.this$);
          }

          void DSSTHarvester::setReferenceState(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReferenceState_8655761ebf04b503], a0.this$);
          }

          void DSSTHarvester::updateFieldShortPeriodTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_updateFieldShortPeriodTerms_8655761ebf04b503], a0.this$);
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
#include "org/hipparchus/stat/fitting/MultivariateNormalMixtureExpectationMaximization.h"
#include "org/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace fitting {

        ::java::lang::Class *MultivariateNormalMixtureExpectationMaximization::class$ = NULL;
        jmethodID *MultivariateNormalMixtureExpectationMaximization::mids$ = NULL;
        bool MultivariateNormalMixtureExpectationMaximization::live$ = false;

        jclass MultivariateNormalMixtureExpectationMaximization::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/fitting/MultivariateNormalMixtureExpectationMaximization");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_edb361bfdd1ad9ae] = env->getMethodID(cls, "<init>", "([[D)V");
            mids$[mid_estimate_a6c3841f658487f0] = env->getStaticMethodID(cls, "estimate", "([[DI)Lorg/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution;");
            mids$[mid_fit_adb27671ab0554e2] = env->getMethodID(cls, "fit", "(Lorg/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution;)V");
            mids$[mid_fit_dab55e4689084b25] = env->getMethodID(cls, "fit", "(Lorg/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution;ID)V");
            mids$[mid_getFittedModel_10d621f3bed755fb] = env->getMethodID(cls, "getFittedModel", "()Lorg/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution;");
            mids$[mid_getLogLikelihood_557b8123390d8d0c] = env->getMethodID(cls, "getLogLikelihood", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MultivariateNormalMixtureExpectationMaximization::MultivariateNormalMixtureExpectationMaximization(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_edb361bfdd1ad9ae, a0.this$)) {}

        ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution MultivariateNormalMixtureExpectationMaximization::estimate(const JArray< JArray< jdouble > > & a0, jint a1)
        {
          jclass cls = env->getClass(initializeClass);
          return ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution(env->callStaticObjectMethod(cls, mids$[mid_estimate_a6c3841f658487f0], a0.this$, a1));
        }

        void MultivariateNormalMixtureExpectationMaximization::fit(const ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_fit_adb27671ab0554e2], a0.this$);
        }

        void MultivariateNormalMixtureExpectationMaximization::fit(const ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution & a0, jint a1, jdouble a2) const
        {
          env->callVoidMethod(this$, mids$[mid_fit_dab55e4689084b25], a0.this$, a1, a2);
        }

        ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution MultivariateNormalMixtureExpectationMaximization::getFittedModel() const
        {
          return ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution(env->callObjectMethod(this$, mids$[mid_getFittedModel_10d621f3bed755fb]));
        }

        jdouble MultivariateNormalMixtureExpectationMaximization::getLogLikelihood() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLogLikelihood_557b8123390d8d0c]);
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
      namespace fitting {
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MultivariateNormalMixtureExpectationMaximization_init_(t_MultivariateNormalMixtureExpectationMaximization *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_estimate(PyTypeObject *type, PyObject *args);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_fit(t_MultivariateNormalMixtureExpectationMaximization *self, PyObject *args);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_getFittedModel(t_MultivariateNormalMixtureExpectationMaximization *self);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_getLogLikelihood(t_MultivariateNormalMixtureExpectationMaximization *self);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_get__fittedModel(t_MultivariateNormalMixtureExpectationMaximization *self, void *data);
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_get__logLikelihood(t_MultivariateNormalMixtureExpectationMaximization *self, void *data);
        static PyGetSetDef t_MultivariateNormalMixtureExpectationMaximization__fields_[] = {
          DECLARE_GET_FIELD(t_MultivariateNormalMixtureExpectationMaximization, fittedModel),
          DECLARE_GET_FIELD(t_MultivariateNormalMixtureExpectationMaximization, logLikelihood),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MultivariateNormalMixtureExpectationMaximization__methods_[] = {
          DECLARE_METHOD(t_MultivariateNormalMixtureExpectationMaximization, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateNormalMixtureExpectationMaximization, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateNormalMixtureExpectationMaximization, estimate, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_MultivariateNormalMixtureExpectationMaximization, fit, METH_VARARGS),
          DECLARE_METHOD(t_MultivariateNormalMixtureExpectationMaximization, getFittedModel, METH_NOARGS),
          DECLARE_METHOD(t_MultivariateNormalMixtureExpectationMaximization, getLogLikelihood, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateNormalMixtureExpectationMaximization)[] = {
          { Py_tp_methods, t_MultivariateNormalMixtureExpectationMaximization__methods_ },
          { Py_tp_init, (void *) t_MultivariateNormalMixtureExpectationMaximization_init_ },
          { Py_tp_getset, t_MultivariateNormalMixtureExpectationMaximization__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateNormalMixtureExpectationMaximization)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultivariateNormalMixtureExpectationMaximization, t_MultivariateNormalMixtureExpectationMaximization, MultivariateNormalMixtureExpectationMaximization);

        void t_MultivariateNormalMixtureExpectationMaximization::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateNormalMixtureExpectationMaximization), &PY_TYPE_DEF(MultivariateNormalMixtureExpectationMaximization), module, "MultivariateNormalMixtureExpectationMaximization", 0);
        }

        void t_MultivariateNormalMixtureExpectationMaximization::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalMixtureExpectationMaximization), "class_", make_descriptor(MultivariateNormalMixtureExpectationMaximization::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalMixtureExpectationMaximization), "wrapfn_", make_descriptor(t_MultivariateNormalMixtureExpectationMaximization::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateNormalMixtureExpectationMaximization), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateNormalMixtureExpectationMaximization::initializeClass, 1)))
            return NULL;
          return t_MultivariateNormalMixtureExpectationMaximization::wrap_Object(MultivariateNormalMixtureExpectationMaximization(((t_MultivariateNormalMixtureExpectationMaximization *) arg)->object.this$));
        }
        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateNormalMixtureExpectationMaximization::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MultivariateNormalMixtureExpectationMaximization_init_(t_MultivariateNormalMixtureExpectationMaximization *self, PyObject *args, PyObject *kwds)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          MultivariateNormalMixtureExpectationMaximization object((jobject) NULL);

          if (!parseArgs(args, "[[D", &a0))
          {
            INT_CALL(object = MultivariateNormalMixtureExpectationMaximization(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_estimate(PyTypeObject *type, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          jint a1;
          ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution result((jobject) NULL);

          if (!parseArgs(args, "[[DI", &a0, &a1))
          {
            OBJ_CALL(result = ::org::hipparchus::stat::fitting::MultivariateNormalMixtureExpectationMaximization::estimate(a0, a1));
            return ::org::hipparchus::distribution::multivariate::t_MixtureMultivariateNormalDistribution::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "estimate", args);
          return NULL;
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_fit(t_MultivariateNormalMixtureExpectationMaximization *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution::initializeClass, &a0, &p0, ::org::hipparchus::distribution::multivariate::t_MixtureMultivariateNormalDistribution::parameters_))
              {
                OBJ_CALL(self->object.fit(a0));
                Py_RETURN_NONE;
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution a0((jobject) NULL);
              PyTypeObject **p0;
              jint a1;
              jdouble a2;

              if (!parseArgs(args, "KID", ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution::initializeClass, &a0, &p0, ::org::hipparchus::distribution::multivariate::t_MixtureMultivariateNormalDistribution::parameters_, &a1, &a2))
              {
                OBJ_CALL(self->object.fit(a0, a1, a2));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "fit", args);
          return NULL;
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_getFittedModel(t_MultivariateNormalMixtureExpectationMaximization *self)
        {
          ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution result((jobject) NULL);
          OBJ_CALL(result = self->object.getFittedModel());
          return ::org::hipparchus::distribution::multivariate::t_MixtureMultivariateNormalDistribution::wrap_Object(result);
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_getLogLikelihood(t_MultivariateNormalMixtureExpectationMaximization *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLogLikelihood());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_get__fittedModel(t_MultivariateNormalMixtureExpectationMaximization *self, void *data)
        {
          ::org::hipparchus::distribution::multivariate::MixtureMultivariateNormalDistribution value((jobject) NULL);
          OBJ_CALL(value = self->object.getFittedModel());
          return ::org::hipparchus::distribution::multivariate::t_MixtureMultivariateNormalDistribution::wrap_Object(value);
        }

        static PyObject *t_MultivariateNormalMixtureExpectationMaximization_get__logLikelihood(t_MultivariateNormalMixtureExpectationMaximization *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLogLikelihood());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/DeepSDP4.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *DeepSDP4::class$ = NULL;
          jmethodID *DeepSDP4::mids$ = NULL;
          bool DeepSDP4::live$ = false;

          jclass DeepSDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/DeepSDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c15edfeff3b77424] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;D)V");
              mids$[mid_init$_2f68d31a9dcd927c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/tle/TLE;Lorg/orekit/attitudes/AttitudeProvider;DLorg/orekit/frames/Frame;)V");
              mids$[mid_luniSolarTermsComputation_0640e6acf969ed28] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_deepSecularEffects_10f281d777284cea] = env->getMethodID(cls, "deepSecularEffects", "(D)V");
              mids$[mid_deepPeriodicEffects_10f281d777284cea] = env->getMethodID(cls, "deepPeriodicEffects", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DeepSDP4::DeepSDP4(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2) : ::org::orekit::propagation::analytical::tle::SDP4(env->newObject(initializeClass, &mids$, mid_init$_c15edfeff3b77424, a0.this$, a1.this$, a2)) {}

          DeepSDP4::DeepSDP4(const ::org::orekit::propagation::analytical::tle::TLE & a0, const ::org::orekit::attitudes::AttitudeProvider & a1, jdouble a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::propagation::analytical::tle::SDP4(env->newObject(initializeClass, &mids$, mid_init$_2f68d31a9dcd927c, a0.this$, a1.this$, a2, a3.this$)) {}
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
          static PyObject *t_DeepSDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DeepSDP4_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DeepSDP4_init_(t_DeepSDP4 *self, PyObject *args, PyObject *kwds);

          static PyMethodDef t_DeepSDP4__methods_[] = {
            DECLARE_METHOD(t_DeepSDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DeepSDP4, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DeepSDP4)[] = {
            { Py_tp_methods, t_DeepSDP4__methods_ },
            { Py_tp_init, (void *) t_DeepSDP4_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DeepSDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::SDP4),
            NULL
          };

          DEFINE_TYPE(DeepSDP4, t_DeepSDP4, DeepSDP4);

          void t_DeepSDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(DeepSDP4), &PY_TYPE_DEF(DeepSDP4), module, "DeepSDP4", 0);
          }

          void t_DeepSDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DeepSDP4), "class_", make_descriptor(DeepSDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DeepSDP4), "wrapfn_", make_descriptor(t_DeepSDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DeepSDP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DeepSDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DeepSDP4::initializeClass, 1)))
              return NULL;
            return t_DeepSDP4::wrap_Object(DeepSDP4(((t_DeepSDP4 *) arg)->object.this$));
          }
          static PyObject *t_DeepSDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DeepSDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DeepSDP4_init_(t_DeepSDP4 *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::analytical::tle::TLE a0((jobject) NULL);
                ::org::orekit::attitudes::AttitudeProvider a1((jobject) NULL);
                jdouble a2;
                DeepSDP4 object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = DeepSDP4(a0, a1, a2));
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
                DeepSDP4 object((jobject) NULL);

                if (!parseArgs(args, "kkDk", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = DeepSDP4(a0, a1, a2, a3));
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
#include "org/hipparchus/linear/LUDecomposition.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *LUDecomposition::class$ = NULL;
      jmethodID *LUDecomposition::mids$ = NULL;
      bool LUDecomposition::live$ = false;

      jclass LUDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/LUDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f3731847577f13e6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_08eaf415db10314f] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getDeterminant_557b8123390d8d0c] = env->getMethodID(cls, "getDeterminant", "()D");
          mids$[mid_getL_70a207fcbc031df2] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getP_70a207fcbc031df2] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPivot_1b41cf9ebf653611] = env->getMethodID(cls, "getPivot", "()[I");
          mids$[mid_getSolver_ccd666b17ae2e6eb] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_getU_70a207fcbc031df2] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      LUDecomposition::LUDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f3731847577f13e6, a0.this$)) {}

      LUDecomposition::LUDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_08eaf415db10314f, a0.this$, a1)) {}

      jdouble LUDecomposition::getDeterminant() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDeterminant_557b8123390d8d0c]);
      }

      ::org::hipparchus::linear::RealMatrix LUDecomposition::getL() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getL_70a207fcbc031df2]));
      }

      ::org::hipparchus::linear::RealMatrix LUDecomposition::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_70a207fcbc031df2]));
      }

      JArray< jint > LUDecomposition::getPivot() const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPivot_1b41cf9ebf653611]));
      }

      ::org::hipparchus::linear::DecompositionSolver LUDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_ccd666b17ae2e6eb]));
      }

      ::org::hipparchus::linear::RealMatrix LUDecomposition::getU() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getU_70a207fcbc031df2]));
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
      static PyObject *t_LUDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LUDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_LUDecomposition_init_(t_LUDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_LUDecomposition_getDeterminant(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getL(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getP(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getPivot(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getSolver(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_getU(t_LUDecomposition *self);
      static PyObject *t_LUDecomposition_get__determinant(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__l(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__p(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__pivot(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__solver(t_LUDecomposition *self, void *data);
      static PyObject *t_LUDecomposition_get__u(t_LUDecomposition *self, void *data);
      static PyGetSetDef t_LUDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_LUDecomposition, determinant),
        DECLARE_GET_FIELD(t_LUDecomposition, l),
        DECLARE_GET_FIELD(t_LUDecomposition, p),
        DECLARE_GET_FIELD(t_LUDecomposition, pivot),
        DECLARE_GET_FIELD(t_LUDecomposition, solver),
        DECLARE_GET_FIELD(t_LUDecomposition, u),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LUDecomposition__methods_[] = {
        DECLARE_METHOD(t_LUDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LUDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LUDecomposition, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getL, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getP, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getPivot, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getSolver, METH_NOARGS),
        DECLARE_METHOD(t_LUDecomposition, getU, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LUDecomposition)[] = {
        { Py_tp_methods, t_LUDecomposition__methods_ },
        { Py_tp_init, (void *) t_LUDecomposition_init_ },
        { Py_tp_getset, t_LUDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LUDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(LUDecomposition, t_LUDecomposition, LUDecomposition);

      void t_LUDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(LUDecomposition), &PY_TYPE_DEF(LUDecomposition), module, "LUDecomposition", 0);
      }

      void t_LUDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposition), "class_", make_descriptor(LUDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposition), "wrapfn_", make_descriptor(t_LUDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LUDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_LUDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LUDecomposition::initializeClass, 1)))
          return NULL;
        return t_LUDecomposition::wrap_Object(LUDecomposition(((t_LUDecomposition *) arg)->object.this$));
      }
      static PyObject *t_LUDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LUDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_LUDecomposition_init_(t_LUDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            LUDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = LUDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            LUDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = LUDecomposition(a0, a1));
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

      static PyObject *t_LUDecomposition_getDeterminant(t_LUDecomposition *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDeterminant());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_LUDecomposition_getL(t_LUDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_LUDecomposition_getP(t_LUDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_LUDecomposition_getPivot(t_LUDecomposition *self)
      {
        JArray< jint > result((jobject) NULL);
        OBJ_CALL(result = self->object.getPivot());
        return result.wrap();
      }

      static PyObject *t_LUDecomposition_getSolver(t_LUDecomposition *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_LUDecomposition_getU(t_LUDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getU());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_LUDecomposition_get__determinant(t_LUDecomposition *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDeterminant());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_LUDecomposition_get__l(t_LUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getL());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_LUDecomposition_get__p(t_LUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_LUDecomposition_get__pivot(t_LUDecomposition *self, void *data)
      {
        JArray< jint > value((jobject) NULL);
        OBJ_CALL(value = self->object.getPivot());
        return value.wrap();
      }

      static PyObject *t_LUDecomposition_get__solver(t_LUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }

      static PyObject *t_LUDecomposition_get__u(t_LUDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getU());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/OrekitParseException.h"
#include "java/util/Locale.h"
#include "org/orekit/errors/LocalizedException.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *OrekitParseException::class$ = NULL;
      jmethodID *OrekitParseException::mids$ = NULL;
      bool OrekitParseException::live$ = false;

      jclass OrekitParseException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/OrekitParseException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_4fde7f3f87bbd6f7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_getLocalizedMessage_3cffd47377eca18a] = env->getMethodID(cls, "getLocalizedMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_3cffd47377eca18a] = env->getMethodID(cls, "getMessage", "()Ljava/lang/String;");
          mids$[mid_getMessage_4b51060c6b7ea981] = env->getMethodID(cls, "getMessage", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getParts_6555a5198c71b73a] = env->getMethodID(cls, "getParts", "()[Ljava/lang/Object;");
          mids$[mid_getSpecifier_a86d7419cf3241b7] = env->getMethodID(cls, "getSpecifier", "()Lorg/hipparchus/exception/Localizable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      OrekitParseException::OrekitParseException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::java::text::ParseException(env->newObject(initializeClass, &mids$, mid_init$_4fde7f3f87bbd6f7, a0.this$, a1.this$)) {}

      ::java::lang::String OrekitParseException::getLocalizedMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedMessage_3cffd47377eca18a]));
      }

      ::java::lang::String OrekitParseException::getMessage() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_3cffd47377eca18a]));
      }

      ::java::lang::String OrekitParseException::getMessage(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMessage_4b51060c6b7ea981], a0.this$));
      }

      JArray< ::java::lang::Object > OrekitParseException::getParts() const
      {
        return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_getParts_6555a5198c71b73a]));
      }

      ::org::hipparchus::exception::Localizable OrekitParseException::getSpecifier() const
      {
        return ::org::hipparchus::exception::Localizable(env->callObjectMethod(this$, mids$[mid_getSpecifier_a86d7419cf3241b7]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_OrekitParseException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_OrekitParseException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_OrekitParseException_init_(t_OrekitParseException *self, PyObject *args, PyObject *kwds);
      static PyObject *t_OrekitParseException_getLocalizedMessage(t_OrekitParseException *self, PyObject *args);
      static PyObject *t_OrekitParseException_getMessage(t_OrekitParseException *self, PyObject *args);
      static PyObject *t_OrekitParseException_getParts(t_OrekitParseException *self);
      static PyObject *t_OrekitParseException_getSpecifier(t_OrekitParseException *self);
      static PyObject *t_OrekitParseException_get__localizedMessage(t_OrekitParseException *self, void *data);
      static PyObject *t_OrekitParseException_get__message(t_OrekitParseException *self, void *data);
      static PyObject *t_OrekitParseException_get__parts(t_OrekitParseException *self, void *data);
      static PyObject *t_OrekitParseException_get__specifier(t_OrekitParseException *self, void *data);
      static PyGetSetDef t_OrekitParseException__fields_[] = {
        DECLARE_GET_FIELD(t_OrekitParseException, localizedMessage),
        DECLARE_GET_FIELD(t_OrekitParseException, message),
        DECLARE_GET_FIELD(t_OrekitParseException, parts),
        DECLARE_GET_FIELD(t_OrekitParseException, specifier),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_OrekitParseException__methods_[] = {
        DECLARE_METHOD(t_OrekitParseException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitParseException, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_OrekitParseException, getLocalizedMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitParseException, getMessage, METH_VARARGS),
        DECLARE_METHOD(t_OrekitParseException, getParts, METH_NOARGS),
        DECLARE_METHOD(t_OrekitParseException, getSpecifier, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(OrekitParseException)[] = {
        { Py_tp_methods, t_OrekitParseException__methods_ },
        { Py_tp_init, (void *) t_OrekitParseException_init_ },
        { Py_tp_getset, t_OrekitParseException__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(OrekitParseException)[] = {
        &PY_TYPE_DEF(::java::text::ParseException),
        NULL
      };

      DEFINE_TYPE(OrekitParseException, t_OrekitParseException, OrekitParseException);

      void t_OrekitParseException::install(PyObject *module)
      {
        installType(&PY_TYPE(OrekitParseException), &PY_TYPE_DEF(OrekitParseException), module, "OrekitParseException", 0);
      }

      void t_OrekitParseException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitParseException), "class_", make_descriptor(OrekitParseException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitParseException), "wrapfn_", make_descriptor(t_OrekitParseException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitParseException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_OrekitParseException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, OrekitParseException::initializeClass, 1)))
          return NULL;
        return t_OrekitParseException::wrap_Object(OrekitParseException(((t_OrekitParseException *) arg)->object.this$));
      }
      static PyObject *t_OrekitParseException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, OrekitParseException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_OrekitParseException_init_(t_OrekitParseException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        OrekitParseException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = OrekitParseException(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_OrekitParseException_getLocalizedMessage(t_OrekitParseException *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.getLocalizedMessage());
          return j2p(result);
        }

        return callSuper(PY_TYPE(OrekitParseException), (PyObject *) self, "getLocalizedMessage", args, 2);
      }

      static PyObject *t_OrekitParseException_getMessage(t_OrekitParseException *self, PyObject *args)
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

        return callSuper(PY_TYPE(OrekitParseException), (PyObject *) self, "getMessage", args, 2);
      }

      static PyObject *t_OrekitParseException_getParts(t_OrekitParseException *self)
      {
        JArray< ::java::lang::Object > result((jobject) NULL);
        OBJ_CALL(result = self->object.getParts());
        return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitParseException_getSpecifier(t_OrekitParseException *self)
      {
        ::org::hipparchus::exception::Localizable result((jobject) NULL);
        OBJ_CALL(result = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(result);
      }

      static PyObject *t_OrekitParseException_get__localizedMessage(t_OrekitParseException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getLocalizedMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitParseException_get__message(t_OrekitParseException *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getMessage());
        return j2p(value);
      }

      static PyObject *t_OrekitParseException_get__parts(t_OrekitParseException *self, void *data)
      {
        JArray< ::java::lang::Object > value((jobject) NULL);
        OBJ_CALL(value = self->object.getParts());
        return JArray<jobject>(value.this$).wrap(::java::lang::t_Object::wrap_jobject);
      }

      static PyObject *t_OrekitParseException_get__specifier(t_OrekitParseException *self, void *data)
      {
        ::org::hipparchus::exception::Localizable value((jobject) NULL);
        OBJ_CALL(value = self->object.getSpecifier());
        return ::org::hipparchus::exception::t_Localizable::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/Type.h"
#include "org/orekit/gnss/metric/ntrip/Type.h"
#include "java/util/List.h"
#include "java/lang/Integer.h"
#include "org/orekit/gnss/metric/parser/MessagesParser.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *Type::class$ = NULL;
          jmethodID *Type::mids$ = NULL;
          bool Type::live$ = false;
          Type *Type::IGS_SSR = NULL;
          Type *Type::RTCM = NULL;

          jclass Type::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/Type");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getParser_cb391f06aa7575be] = env->getMethodID(cls, "getParser", "(Ljava/util/List;)Lorg/orekit/gnss/metric/parser/MessagesParser;");
              mids$[mid_valueOf_d6743ba685a1bb89] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/ntrip/Type;");
              mids$[mid_values_3895cfc6b44fe855] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/ntrip/Type;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              IGS_SSR = new Type(env->getStaticObjectField(cls, "IGS_SSR", "Lorg/orekit/gnss/metric/ntrip/Type;"));
              RTCM = new Type(env->getStaticObjectField(cls, "RTCM", "Lorg/orekit/gnss/metric/ntrip/Type;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::gnss::metric::parser::MessagesParser Type::getParser(const ::java::util::List & a0) const
          {
            return ::org::orekit::gnss::metric::parser::MessagesParser(env->callObjectMethod(this$, mids$[mid_getParser_cb391f06aa7575be], a0.this$));
          }

          Type Type::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return Type(env->callStaticObjectMethod(cls, mids$[mid_valueOf_d6743ba685a1bb89], a0.this$));
          }

          JArray< Type > Type::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< Type >(env->callStaticObjectMethod(cls, mids$[mid_values_3895cfc6b44fe855]));
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
          static PyObject *t_Type_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Type_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Type_of_(t_Type *self, PyObject *args);
          static PyObject *t_Type_getParser(t_Type *self, PyObject *arg);
          static PyObject *t_Type_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_Type_values(PyTypeObject *type);
          static PyObject *t_Type_get__parameters_(t_Type *self, void *data);
          static PyGetSetDef t_Type__fields_[] = {
            DECLARE_GET_FIELD(t_Type, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Type__methods_[] = {
            DECLARE_METHOD(t_Type, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Type, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Type, of_, METH_VARARGS),
            DECLARE_METHOD(t_Type, getParser, METH_O),
            DECLARE_METHOD(t_Type, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Type, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Type)[] = {
            { Py_tp_methods, t_Type__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_Type__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Type)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(Type, t_Type, Type);
          PyObject *t_Type::wrap_Object(const Type& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Type::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Type *self = (t_Type *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_Type::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_Type::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_Type *self = (t_Type *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_Type::install(PyObject *module)
          {
            installType(&PY_TYPE(Type), &PY_TYPE_DEF(Type), module, "Type", 0);
          }

          void t_Type::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "class_", make_descriptor(Type::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "wrapfn_", make_descriptor(t_Type::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "boxfn_", make_descriptor(boxObject));
            env->getClass(Type::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "IGS_SSR", make_descriptor(t_Type::wrap_Object(*Type::IGS_SSR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Type), "RTCM", make_descriptor(t_Type::wrap_Object(*Type::RTCM)));
          }

          static PyObject *t_Type_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Type::initializeClass, 1)))
              return NULL;
            return t_Type::wrap_Object(Type(((t_Type *) arg)->object.this$));
          }
          static PyObject *t_Type_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Type::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Type_of_(t_Type *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_Type_getParser(t_Type *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::metric::parser::MessagesParser result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.getParser(a0));
              return ::org::orekit::gnss::metric::parser::t_MessagesParser::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getParser", arg);
            return NULL;
          }

          static PyObject *t_Type_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            Type result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Type::valueOf(a0));
              return t_Type::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_Type_values(PyTypeObject *type)
          {
            JArray< Type > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::ntrip::Type::values());
            return JArray<jobject>(result.this$).wrap(t_Type::wrap_jobject);
          }
          static PyObject *t_Type_get__parameters_(t_Type *self, void *data)
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
#include "org/orekit/models/earth/GeoMagneticModelLoader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "org/orekit/models/earth/GeoMagneticField.h"
#include "java/util/Collection.h"
#include "org/orekit/data/DataLoader.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {

        ::java::lang::Class *GeoMagneticModelLoader::class$ = NULL;
        jmethodID *GeoMagneticModelLoader::mids$ = NULL;
        bool GeoMagneticModelLoader::live$ = false;

        jclass GeoMagneticModelLoader::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/models/earth/GeoMagneticModelLoader");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getModels_12ee61573a18f417] = env->getMethodID(cls, "getModels", "()Ljava/util/Collection;");
            mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");
            mids$[mid_stillAcceptsData_89b302893bdbe1f1] = env->getMethodID(cls, "stillAcceptsData", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GeoMagneticModelLoader::GeoMagneticModelLoader() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::java::util::Collection GeoMagneticModelLoader::getModels() const
        {
          return ::java::util::Collection(env->callObjectMethod(this$, mids$[mid_getModels_12ee61573a18f417]));
        }

        void GeoMagneticModelLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_loadData_15770e8d8949a557], a0.this$, a1.this$);
        }

        jboolean GeoMagneticModelLoader::stillAcceptsData() const
        {
          return env->callBooleanMethod(this$, mids$[mid_stillAcceptsData_89b302893bdbe1f1]);
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
        static PyObject *t_GeoMagneticModelLoader_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GeoMagneticModelLoader_instance_(PyTypeObject *type, PyObject *arg);
        static int t_GeoMagneticModelLoader_init_(t_GeoMagneticModelLoader *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GeoMagneticModelLoader_getModels(t_GeoMagneticModelLoader *self);
        static PyObject *t_GeoMagneticModelLoader_loadData(t_GeoMagneticModelLoader *self, PyObject *args);
        static PyObject *t_GeoMagneticModelLoader_stillAcceptsData(t_GeoMagneticModelLoader *self);
        static PyObject *t_GeoMagneticModelLoader_get__models(t_GeoMagneticModelLoader *self, void *data);
        static PyGetSetDef t_GeoMagneticModelLoader__fields_[] = {
          DECLARE_GET_FIELD(t_GeoMagneticModelLoader, models),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GeoMagneticModelLoader__methods_[] = {
          DECLARE_METHOD(t_GeoMagneticModelLoader, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticModelLoader, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GeoMagneticModelLoader, getModels, METH_NOARGS),
          DECLARE_METHOD(t_GeoMagneticModelLoader, loadData, METH_VARARGS),
          DECLARE_METHOD(t_GeoMagneticModelLoader, stillAcceptsData, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GeoMagneticModelLoader)[] = {
          { Py_tp_methods, t_GeoMagneticModelLoader__methods_ },
          { Py_tp_init, (void *) t_GeoMagneticModelLoader_init_ },
          { Py_tp_getset, t_GeoMagneticModelLoader__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GeoMagneticModelLoader)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(GeoMagneticModelLoader, t_GeoMagneticModelLoader, GeoMagneticModelLoader);

        void t_GeoMagneticModelLoader::install(PyObject *module)
        {
          installType(&PY_TYPE(GeoMagneticModelLoader), &PY_TYPE_DEF(GeoMagneticModelLoader), module, "GeoMagneticModelLoader", 0);
        }

        void t_GeoMagneticModelLoader::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticModelLoader), "class_", make_descriptor(GeoMagneticModelLoader::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticModelLoader), "wrapfn_", make_descriptor(t_GeoMagneticModelLoader::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GeoMagneticModelLoader), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GeoMagneticModelLoader_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GeoMagneticModelLoader::initializeClass, 1)))
            return NULL;
          return t_GeoMagneticModelLoader::wrap_Object(GeoMagneticModelLoader(((t_GeoMagneticModelLoader *) arg)->object.this$));
        }
        static PyObject *t_GeoMagneticModelLoader_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GeoMagneticModelLoader::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_GeoMagneticModelLoader_init_(t_GeoMagneticModelLoader *self, PyObject *args, PyObject *kwds)
        {
          GeoMagneticModelLoader object((jobject) NULL);

          INT_CALL(object = GeoMagneticModelLoader());
          self->object = object;

          return 0;
        }

        static PyObject *t_GeoMagneticModelLoader_getModels(t_GeoMagneticModelLoader *self)
        {
          ::java::util::Collection result((jobject) NULL);
          OBJ_CALL(result = self->object.getModels());
          return ::java::util::t_Collection::wrap_Object(result, ::org::orekit::models::earth::PY_TYPE(GeoMagneticField));
        }

        static PyObject *t_GeoMagneticModelLoader_loadData(t_GeoMagneticModelLoader *self, PyObject *args)
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

        static PyObject *t_GeoMagneticModelLoader_stillAcceptsData(t_GeoMagneticModelLoader *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.stillAcceptsData());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_GeoMagneticModelLoader_get__models(t_GeoMagneticModelLoader *self, void *data)
        {
          ::java::util::Collection value((jobject) NULL);
          OBJ_CALL(value = self->object.getModels());
          return ::java::util::t_Collection::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/NdmConstituent.h"
#include "org/orekit/files/ccsds/section/Header.h"
#include "java/util/List.h"
#include "org/orekit/utils/IERSConventions.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataContext.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *NdmConstituent::class$ = NULL;
          jmethodID *NdmConstituent::mids$ = NULL;
          bool NdmConstituent::live$ = false;

          jclass NdmConstituent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/NdmConstituent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getConventions_690653480c12ac72] = env->getMethodID(cls, "getConventions", "()Lorg/orekit/utils/IERSConventions;");
              mids$[mid_getDataContext_b259b25d6495e5b3] = env->getMethodID(cls, "getDataContext", "()Lorg/orekit/data/DataContext;");
              mids$[mid_getHeader_6fe6597816e9e593] = env->getMethodID(cls, "getHeader", "()Lorg/orekit/files/ccsds/section/Header;");
              mids$[mid_getSegments_0d9551367f7ecdef] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
              mids$[mid_setHeader_7884456a8420d358] = env->getMethodID(cls, "setHeader", "(Lorg/orekit/files/ccsds/section/Header;)V");
              mids$[mid_setSegments_4ccaedadb068bdeb] = env->getMethodID(cls, "setSegments", "(Ljava/util/List;)V");
              mids$[mid_validate_0640e6acf969ed28] = env->getMethodID(cls, "validate", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::utils::IERSConventions NdmConstituent::getConventions() const
          {
            return ::org::orekit::utils::IERSConventions(env->callObjectMethod(this$, mids$[mid_getConventions_690653480c12ac72]));
          }

          ::org::orekit::data::DataContext NdmConstituent::getDataContext() const
          {
            return ::org::orekit::data::DataContext(env->callObjectMethod(this$, mids$[mid_getDataContext_b259b25d6495e5b3]));
          }

          ::org::orekit::files::ccsds::section::Header NdmConstituent::getHeader() const
          {
            return ::org::orekit::files::ccsds::section::Header(env->callObjectMethod(this$, mids$[mid_getHeader_6fe6597816e9e593]));
          }

          ::java::util::List NdmConstituent::getSegments() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_0d9551367f7ecdef]));
          }

          void NdmConstituent::setHeader(const ::org::orekit::files::ccsds::section::Header & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setHeader_7884456a8420d358], a0.this$);
          }

          void NdmConstituent::setSegments(const ::java::util::List & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSegments_4ccaedadb068bdeb], a0.this$);
          }

          void NdmConstituent::validate() const
          {
            env->callVoidMethod(this$, mids$[mid_validate_0640e6acf969ed28]);
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
          static PyObject *t_NdmConstituent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmConstituent_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmConstituent_of_(t_NdmConstituent *self, PyObject *args);
          static PyObject *t_NdmConstituent_getConventions(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_getDataContext(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_getHeader(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_getSegments(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_setHeader(t_NdmConstituent *self, PyObject *arg);
          static PyObject *t_NdmConstituent_setSegments(t_NdmConstituent *self, PyObject *arg);
          static PyObject *t_NdmConstituent_validate(t_NdmConstituent *self);
          static PyObject *t_NdmConstituent_get__conventions(t_NdmConstituent *self, void *data);
          static PyObject *t_NdmConstituent_get__dataContext(t_NdmConstituent *self, void *data);
          static PyObject *t_NdmConstituent_get__header(t_NdmConstituent *self, void *data);
          static int t_NdmConstituent_set__header(t_NdmConstituent *self, PyObject *arg, void *data);
          static PyObject *t_NdmConstituent_get__segments(t_NdmConstituent *self, void *data);
          static int t_NdmConstituent_set__segments(t_NdmConstituent *self, PyObject *arg, void *data);
          static PyObject *t_NdmConstituent_get__parameters_(t_NdmConstituent *self, void *data);
          static PyGetSetDef t_NdmConstituent__fields_[] = {
            DECLARE_GET_FIELD(t_NdmConstituent, conventions),
            DECLARE_GET_FIELD(t_NdmConstituent, dataContext),
            DECLARE_GETSET_FIELD(t_NdmConstituent, header),
            DECLARE_GETSET_FIELD(t_NdmConstituent, segments),
            DECLARE_GET_FIELD(t_NdmConstituent, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NdmConstituent__methods_[] = {
            DECLARE_METHOD(t_NdmConstituent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmConstituent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmConstituent, of_, METH_VARARGS),
            DECLARE_METHOD(t_NdmConstituent, getConventions, METH_NOARGS),
            DECLARE_METHOD(t_NdmConstituent, getDataContext, METH_NOARGS),
            DECLARE_METHOD(t_NdmConstituent, getHeader, METH_NOARGS),
            DECLARE_METHOD(t_NdmConstituent, getSegments, METH_NOARGS),
            DECLARE_METHOD(t_NdmConstituent, setHeader, METH_O),
            DECLARE_METHOD(t_NdmConstituent, setSegments, METH_O),
            DECLARE_METHOD(t_NdmConstituent, validate, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NdmConstituent)[] = {
            { Py_tp_methods, t_NdmConstituent__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NdmConstituent__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NdmConstituent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NdmConstituent, t_NdmConstituent, NdmConstituent);
          PyObject *t_NdmConstituent::wrap_Object(const NdmConstituent& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_NdmConstituent::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NdmConstituent *self = (t_NdmConstituent *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_NdmConstituent::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_NdmConstituent::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NdmConstituent *self = (t_NdmConstituent *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_NdmConstituent::install(PyObject *module)
          {
            installType(&PY_TYPE(NdmConstituent), &PY_TYPE_DEF(NdmConstituent), module, "NdmConstituent", 0);
          }

          void t_NdmConstituent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmConstituent), "class_", make_descriptor(NdmConstituent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmConstituent), "wrapfn_", make_descriptor(t_NdmConstituent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmConstituent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NdmConstituent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NdmConstituent::initializeClass, 1)))
              return NULL;
            return t_NdmConstituent::wrap_Object(NdmConstituent(((t_NdmConstituent *) arg)->object.this$));
          }
          static PyObject *t_NdmConstituent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NdmConstituent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NdmConstituent_of_(t_NdmConstituent *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NdmConstituent_getConventions(t_NdmConstituent *self)
          {
            ::org::orekit::utils::IERSConventions result((jobject) NULL);
            OBJ_CALL(result = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(result);
          }

          static PyObject *t_NdmConstituent_getDataContext(t_NdmConstituent *self)
          {
            ::org::orekit::data::DataContext result((jobject) NULL);
            OBJ_CALL(result = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(result);
          }

          static PyObject *t_NdmConstituent_getHeader(t_NdmConstituent *self)
          {
            ::org::orekit::files::ccsds::section::Header result((jobject) NULL);
            OBJ_CALL(result = self->object.getHeader());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::files::ccsds::section::t_Header::wrap_Object(result);
          }

          static PyObject *t_NdmConstituent_getSegments(t_NdmConstituent *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(result, self->parameters[1]);
          }

          static PyObject *t_NdmConstituent_setHeader(t_NdmConstituent *self, PyObject *arg)
          {
            ::org::orekit::files::ccsds::section::Header a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::ccsds::section::Header::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setHeader(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setHeader", arg);
            return NULL;
          }

          static PyObject *t_NdmConstituent_setSegments(t_NdmConstituent *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(self->object.setSegments(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSegments", arg);
            return NULL;
          }

          static PyObject *t_NdmConstituent_validate(t_NdmConstituent *self)
          {
            OBJ_CALL(self->object.validate());
            Py_RETURN_NONE;
          }
          static PyObject *t_NdmConstituent_get__parameters_(t_NdmConstituent *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_NdmConstituent_get__conventions(t_NdmConstituent *self, void *data)
          {
            ::org::orekit::utils::IERSConventions value((jobject) NULL);
            OBJ_CALL(value = self->object.getConventions());
            return ::org::orekit::utils::t_IERSConventions::wrap_Object(value);
          }

          static PyObject *t_NdmConstituent_get__dataContext(t_NdmConstituent *self, void *data)
          {
            ::org::orekit::data::DataContext value((jobject) NULL);
            OBJ_CALL(value = self->object.getDataContext());
            return ::org::orekit::data::t_DataContext::wrap_Object(value);
          }

          static PyObject *t_NdmConstituent_get__header(t_NdmConstituent *self, void *data)
          {
            ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
            OBJ_CALL(value = self->object.getHeader());
            return ::org::orekit::files::ccsds::section::t_Header::wrap_Object(value);
          }
          static int t_NdmConstituent_set__header(t_NdmConstituent *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::ccsds::section::Header value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::section::Header::initializeClass, &value))
              {
                INT_CALL(self->object.setHeader(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "header", arg);
            return -1;
          }

          static PyObject *t_NdmConstituent_get__segments(t_NdmConstituent *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSegments());
            return ::java::util::t_List::wrap_Object(value);
          }
          static int t_NdmConstituent_set__segments(t_NdmConstituent *self, PyObject *arg, void *data)
          {
            {
              ::java::util::List value((jobject) NULL);
              if (!parseArg(arg, "k", ::java::util::List::initializeClass, &value))
              {
                INT_CALL(self->object.setSegments(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "segments", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/utils/lexical/PythonLexicalAnalyzer.h"
#include "org/orekit/files/ccsds/utils/lexical/LexicalAnalyzer.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/lexical/MessageParser.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *PythonLexicalAnalyzer::class$ = NULL;
            jmethodID *PythonLexicalAnalyzer::mids$ = NULL;
            bool PythonLexicalAnalyzer::live$ = false;

            jclass PythonLexicalAnalyzer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/PythonLexicalAnalyzer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_accept_dc31073a650e82af] = env->getMethodID(cls, "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;");
                mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonLexicalAnalyzer::PythonLexicalAnalyzer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

            void PythonLexicalAnalyzer::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
            }

            jlong PythonLexicalAnalyzer::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
            }

            void PythonLexicalAnalyzer::pythonExtension(jlong a0) const
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
          namespace lexical {
            static PyObject *t_PythonLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonLexicalAnalyzer_init_(t_PythonLexicalAnalyzer *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonLexicalAnalyzer_finalize(t_PythonLexicalAnalyzer *self);
            static PyObject *t_PythonLexicalAnalyzer_pythonExtension(t_PythonLexicalAnalyzer *self, PyObject *args);
            static jobject JNICALL t_PythonLexicalAnalyzer_accept0(JNIEnv *jenv, jobject jobj, jobject a0);
            static void JNICALL t_PythonLexicalAnalyzer_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonLexicalAnalyzer_get__self(t_PythonLexicalAnalyzer *self, void *data);
            static PyGetSetDef t_PythonLexicalAnalyzer__fields_[] = {
              DECLARE_GET_FIELD(t_PythonLexicalAnalyzer, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonLexicalAnalyzer__methods_[] = {
              DECLARE_METHOD(t_PythonLexicalAnalyzer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonLexicalAnalyzer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonLexicalAnalyzer, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonLexicalAnalyzer, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonLexicalAnalyzer)[] = {
              { Py_tp_methods, t_PythonLexicalAnalyzer__methods_ },
              { Py_tp_init, (void *) t_PythonLexicalAnalyzer_init_ },
              { Py_tp_getset, t_PythonLexicalAnalyzer__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonLexicalAnalyzer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonLexicalAnalyzer, t_PythonLexicalAnalyzer, PythonLexicalAnalyzer);

            void t_PythonLexicalAnalyzer::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonLexicalAnalyzer), &PY_TYPE_DEF(PythonLexicalAnalyzer), module, "PythonLexicalAnalyzer", 1);
            }

            void t_PythonLexicalAnalyzer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLexicalAnalyzer), "class_", make_descriptor(PythonLexicalAnalyzer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLexicalAnalyzer), "wrapfn_", make_descriptor(t_PythonLexicalAnalyzer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonLexicalAnalyzer), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonLexicalAnalyzer::initializeClass);
              JNINativeMethod methods[] = {
                { "accept", "(Lorg/orekit/files/ccsds/utils/lexical/MessageParser;)Ljava/lang/Object;", (void *) t_PythonLexicalAnalyzer_accept0 },
                { "pythonDecRef", "()V", (void *) t_PythonLexicalAnalyzer_pythonDecRef1 },
              };
              env->registerNatives(cls, methods, 2);
            }

            static PyObject *t_PythonLexicalAnalyzer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonLexicalAnalyzer::initializeClass, 1)))
                return NULL;
              return t_PythonLexicalAnalyzer::wrap_Object(PythonLexicalAnalyzer(((t_PythonLexicalAnalyzer *) arg)->object.this$));
            }
            static PyObject *t_PythonLexicalAnalyzer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonLexicalAnalyzer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonLexicalAnalyzer_init_(t_PythonLexicalAnalyzer *self, PyObject *args, PyObject *kwds)
            {
              PythonLexicalAnalyzer object((jobject) NULL);

              INT_CALL(object = PythonLexicalAnalyzer());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonLexicalAnalyzer_finalize(t_PythonLexicalAnalyzer *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonLexicalAnalyzer_pythonExtension(t_PythonLexicalAnalyzer *self, PyObject *args)
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

            static jobject JNICALL t_PythonLexicalAnalyzer_accept0(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonLexicalAnalyzer::mids$[PythonLexicalAnalyzer::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::Object value((jobject) NULL);
              PyObject *o0 = ::org::orekit::files::ccsds::utils::lexical::t_MessageParser::wrap_Object(::org::orekit::files::ccsds::utils::lexical::MessageParser(a0));
              PyObject *result = PyObject_CallMethod(obj, "accept", "O", o0);
              Py_DECREF(o0);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "o", &value))
              {
                throwTypeError("accept", result);
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

            static void JNICALL t_PythonLexicalAnalyzer_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonLexicalAnalyzer::mids$[PythonLexicalAnalyzer::mid_pythonExtension_9e26256fb0d384a2]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonLexicalAnalyzer::mids$[PythonLexicalAnalyzer::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonLexicalAnalyzer_get__self(t_PythonLexicalAnalyzer *self, void *data)
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
#include "org/orekit/estimation/measurements/gnss/AbstractCycleSlipDetector.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectors.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/CycleSlipDetectorResults.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *AbstractCycleSlipDetector::class$ = NULL;
          jmethodID *AbstractCycleSlipDetector::mids$ = NULL;
          bool AbstractCycleSlipDetector::live$ = false;

          jclass AbstractCycleSlipDetector::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/AbstractCycleSlipDetector");

              mids$ = new jmethodID[max_mid];
              mids$[mid_detect_77cbef3c12dc7892] = env->getMethodID(cls, "detect", "(Ljava/util/List;)Ljava/util/List;");
              mids$[mid_cycleSlipDataSet_7660552c05323b39] = env->getMethodID(cls, "cycleSlipDataSet", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;DLorg/orekit/gnss/Frequency;)V");
              mids$[mid_getResults_0d9551367f7ecdef] = env->getMethodID(cls, "getResults", "()Ljava/util/List;");
              mids$[mid_getStuffReference_0d9551367f7ecdef] = env->getMethodID(cls, "getStuffReference", "()Ljava/util/List;");
              mids$[mid_getMaxTimeBeetween2Measurement_557b8123390d8d0c] = env->getMethodID(cls, "getMaxTimeBeetween2Measurement", "()D");
              mids$[mid_getMinMeasurementNumber_412668abc8d889e9] = env->getMethodID(cls, "getMinMeasurementNumber", "()I");
              mids$[mid_manageData_7cae3eafa8e6978c] = env->getMethodID(cls, "manageData", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)V");
              mids$[mid_setName_3232b7e9138747dc] = env->getMethodID(cls, "setName", "(ILorg/orekit/gnss/SatelliteSystem;)Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::List AbstractCycleSlipDetector::detect(const ::java::util::List & a0) const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_detect_77cbef3c12dc7892], a0.this$));
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
          static PyObject *t_AbstractCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractCycleSlipDetector_detect(t_AbstractCycleSlipDetector *self, PyObject *arg);

          static PyMethodDef t_AbstractCycleSlipDetector__methods_[] = {
            DECLARE_METHOD(t_AbstractCycleSlipDetector, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractCycleSlipDetector, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractCycleSlipDetector, detect, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractCycleSlipDetector)[] = {
            { Py_tp_methods, t_AbstractCycleSlipDetector__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractCycleSlipDetector)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractCycleSlipDetector, t_AbstractCycleSlipDetector, AbstractCycleSlipDetector);

          void t_AbstractCycleSlipDetector::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractCycleSlipDetector), &PY_TYPE_DEF(AbstractCycleSlipDetector), module, "AbstractCycleSlipDetector", 0);
          }

          void t_AbstractCycleSlipDetector::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCycleSlipDetector), "class_", make_descriptor(AbstractCycleSlipDetector::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCycleSlipDetector), "wrapfn_", make_descriptor(t_AbstractCycleSlipDetector::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractCycleSlipDetector), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractCycleSlipDetector_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractCycleSlipDetector::initializeClass, 1)))
              return NULL;
            return t_AbstractCycleSlipDetector::wrap_Object(AbstractCycleSlipDetector(((t_AbstractCycleSlipDetector *) arg)->object.this$));
          }
          static PyObject *t_AbstractCycleSlipDetector_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractCycleSlipDetector::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractCycleSlipDetector_detect(t_AbstractCycleSlipDetector *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::List result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.detect(a0));
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::estimation::measurements::gnss::PY_TYPE(CycleSlipDetectorResults));
            }

            PyErr_SetArgsError((PyObject *) self, "detect", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FDSFactory.h"
#include "org/hipparchus/analysis/differentiation/DSCompiler.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/differentiation/FDSFactory$DerivativeField.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FDSFactory::class$ = NULL;
        jmethodID *FDSFactory::mids$ = NULL;
        bool FDSFactory::live$ = false;

        jclass FDSFactory::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FDSFactory");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a9ccb012d4cb48bd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;II)V");
            mids$[mid_build_1e72ceb97300ff53] = env->getMethodID(cls, "build", "([D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_build_276eb72cb82e871b] = env->getMethodID(cls, "build", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_constant_16af759261ef50b4] = env->getMethodID(cls, "constant", "(D)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_constant_bcb3f877ec28ee10] = env->getMethodID(cls, "constant", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getCompiler_dfc048d343f51ab1] = env->getMethodID(cls, "getCompiler", "()Lorg/hipparchus/analysis/differentiation/DSCompiler;");
            mids$[mid_getDerivativeField_2ed566e60939f4ee] = env->getMethodID(cls, "getDerivativeField", "()Lorg/hipparchus/analysis/differentiation/FDSFactory$DerivativeField;");
            mids$[mid_getValueField_20f98801541dcec1] = env->getMethodID(cls, "getValueField", "()Lorg/hipparchus/Field;");
            mids$[mid_variable_a73597f593036083] = env->getMethodID(cls, "variable", "(ID)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_variable_7e11caf716d163b9] = env->getMethodID(cls, "variable", "(ILorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FDSFactory::FDSFactory(const ::org::hipparchus::Field & a0, jint a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a9ccb012d4cb48bd, a0.this$, a1, a2)) {}

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::build(const JArray< jdouble > & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_build_1e72ceb97300ff53], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::build(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_build_276eb72cb82e871b], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::constant(jdouble a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_constant_16af759261ef50b4], a0));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::constant(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_constant_bcb3f877ec28ee10], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::DSCompiler FDSFactory::getCompiler() const
        {
          return ::org::hipparchus::analysis::differentiation::DSCompiler(env->callObjectMethod(this$, mids$[mid_getCompiler_dfc048d343f51ab1]));
        }

        ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField FDSFactory::getDerivativeField() const
        {
          return ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField(env->callObjectMethod(this$, mids$[mid_getDerivativeField_2ed566e60939f4ee]));
        }

        ::org::hipparchus::Field FDSFactory::getValueField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getValueField_20f98801541dcec1]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::variable(jint a0, jdouble a1) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_variable_a73597f593036083], a0, a1));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory::variable(jint a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_variable_7e11caf716d163b9], a0, a1.this$));
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
        static PyObject *t_FDSFactory_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDSFactory_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDSFactory_of_(t_FDSFactory *self, PyObject *args);
        static int t_FDSFactory_init_(t_FDSFactory *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FDSFactory_build(t_FDSFactory *self, PyObject *args);
        static PyObject *t_FDSFactory_constant(t_FDSFactory *self, PyObject *args);
        static PyObject *t_FDSFactory_getCompiler(t_FDSFactory *self);
        static PyObject *t_FDSFactory_getDerivativeField(t_FDSFactory *self);
        static PyObject *t_FDSFactory_getValueField(t_FDSFactory *self);
        static PyObject *t_FDSFactory_variable(t_FDSFactory *self, PyObject *args);
        static PyObject *t_FDSFactory_get__compiler(t_FDSFactory *self, void *data);
        static PyObject *t_FDSFactory_get__derivativeField(t_FDSFactory *self, void *data);
        static PyObject *t_FDSFactory_get__valueField(t_FDSFactory *self, void *data);
        static PyObject *t_FDSFactory_get__parameters_(t_FDSFactory *self, void *data);
        static PyGetSetDef t_FDSFactory__fields_[] = {
          DECLARE_GET_FIELD(t_FDSFactory, compiler),
          DECLARE_GET_FIELD(t_FDSFactory, derivativeField),
          DECLARE_GET_FIELD(t_FDSFactory, valueField),
          DECLARE_GET_FIELD(t_FDSFactory, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FDSFactory__methods_[] = {
          DECLARE_METHOD(t_FDSFactory, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDSFactory, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDSFactory, of_, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory, build, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory, constant, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory, getCompiler, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory, getDerivativeField, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory, getValueField, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory, variable, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FDSFactory)[] = {
          { Py_tp_methods, t_FDSFactory__methods_ },
          { Py_tp_init, (void *) t_FDSFactory_init_ },
          { Py_tp_getset, t_FDSFactory__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FDSFactory)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FDSFactory, t_FDSFactory, FDSFactory);
        PyObject *t_FDSFactory::wrap_Object(const FDSFactory& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDSFactory::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDSFactory *self = (t_FDSFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FDSFactory::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDSFactory::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDSFactory *self = (t_FDSFactory *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FDSFactory::install(PyObject *module)
        {
          installType(&PY_TYPE(FDSFactory), &PY_TYPE_DEF(FDSFactory), module, "FDSFactory", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory), "DerivativeField", make_descriptor(&PY_TYPE_DEF(FDSFactory$DerivativeField)));
        }

        void t_FDSFactory::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory), "class_", make_descriptor(FDSFactory::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory), "wrapfn_", make_descriptor(t_FDSFactory::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FDSFactory_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FDSFactory::initializeClass, 1)))
            return NULL;
          return t_FDSFactory::wrap_Object(FDSFactory(((t_FDSFactory *) arg)->object.this$));
        }
        static PyObject *t_FDSFactory_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FDSFactory::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FDSFactory_of_(t_FDSFactory *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FDSFactory_init_(t_FDSFactory *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jint a2;
          FDSFactory object((jobject) NULL);

          if (!parseArgs(args, "KII", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2))
          {
            INT_CALL(object = FDSFactory(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FDSFactory_build(t_FDSFactory *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                OBJ_CALL(result = self->object.build(a0));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.build(a0));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "build", args);
          return NULL;
        }

        static PyObject *t_FDSFactory_constant(t_FDSFactory *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.constant(a0));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.constant(a0));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "constant", args);
          return NULL;
        }

        static PyObject *t_FDSFactory_getCompiler(t_FDSFactory *self)
        {
          ::org::hipparchus::analysis::differentiation::DSCompiler result((jobject) NULL);
          OBJ_CALL(result = self->object.getCompiler());
          return ::org::hipparchus::analysis::differentiation::t_DSCompiler::wrap_Object(result);
        }

        static PyObject *t_FDSFactory_getDerivativeField(t_FDSFactory *self)
        {
          ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField result((jobject) NULL);
          OBJ_CALL(result = self->object.getDerivativeField());
          return ::org::hipparchus::analysis::differentiation::t_FDSFactory$DerivativeField::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory_getValueField(t_FDSFactory *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory_variable(t_FDSFactory *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              jdouble a1;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "ID", &a0, &a1))
              {
                OBJ_CALL(result = self->object.variable(a0, a1));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

              if (!parseArgs(args, "IK", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.variable(a0, a1));
                return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "variable", args);
          return NULL;
        }
        static PyObject *t_FDSFactory_get__parameters_(t_FDSFactory *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FDSFactory_get__compiler(t_FDSFactory *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DSCompiler value((jobject) NULL);
          OBJ_CALL(value = self->object.getCompiler());
          return ::org::hipparchus::analysis::differentiation::t_DSCompiler::wrap_Object(value);
        }

        static PyObject *t_FDSFactory_get__derivativeField(t_FDSFactory *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FDSFactory$DerivativeField value((jobject) NULL);
          OBJ_CALL(value = self->object.getDerivativeField());
          return ::org::hipparchus::analysis::differentiation::t_FDSFactory$DerivativeField::wrap_Object(value);
        }

        static PyObject *t_FDSFactory_get__valueField(t_FDSFactory *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemMetadata.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$AttitudeEphemerisSegment.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemData.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemSegment::class$ = NULL;
              jmethodID *AemSegment::mids$ = NULL;
              bool AemSegment::live$ = false;

              jclass AemSegment::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemSegment");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_449d7e5cfd695677] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/ndm/adm/aem/AemMetadata;Lorg/orekit/files/ccsds/ndm/adm/aem/AemData;)V");
                  mids$[mid_getAngularCoordinates_0d9551367f7ecdef] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");
                  mids$[mid_getAttitudeProvider_b44a04493534d299] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/BoundedAttitudeProvider;");
                  mids$[mid_getAvailableDerivatives_c2e9b2b1c0db39b3] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/AngularDerivativesFilter;");
                  mids$[mid_getInterpolationMethod_3cffd47377eca18a] = env->getMethodID(cls, "getInterpolationMethod", "()Ljava/lang/String;");
                  mids$[mid_getInterpolationSamples_412668abc8d889e9] = env->getMethodID(cls, "getInterpolationSamples", "()I");
                  mids$[mid_getReferenceFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
                  mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemSegment::AemSegment(const ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata & a0, const ::org::orekit::files::ccsds::ndm::adm::aem::AemData & a1) : ::org::orekit::files::ccsds::section::Segment(env->newObject(initializeClass, &mids$, mid_init$_449d7e5cfd695677, a0.this$, a1.this$)) {}

              ::java::util::List AemSegment::getAngularCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_0d9551367f7ecdef]));
              }

              ::org::orekit::attitudes::BoundedAttitudeProvider AemSegment::getAttitudeProvider() const
              {
                return ::org::orekit::attitudes::BoundedAttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_b44a04493534d299]));
              }

              ::org::orekit::utils::AngularDerivativesFilter AemSegment::getAvailableDerivatives() const
              {
                return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_c2e9b2b1c0db39b3]));
              }

              ::java::lang::String AemSegment::getInterpolationMethod() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInterpolationMethod_3cffd47377eca18a]));
              }

              jint AemSegment::getInterpolationSamples() const
              {
                return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_412668abc8d889e9]);
              }

              ::org::orekit::frames::Frame AemSegment::getReferenceFrame() const
              {
                return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_6c9bc0a928c56d4e]));
              }

              ::org::orekit::time::AbsoluteDate AemSegment::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate AemSegment::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_7a97f7e149e79afb]));
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
              static PyObject *t_AemSegment_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemSegment_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemSegment_of_(t_AemSegment *self, PyObject *args);
              static int t_AemSegment_init_(t_AemSegment *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemSegment_getAngularCoordinates(t_AemSegment *self);
              static PyObject *t_AemSegment_getAttitudeProvider(t_AemSegment *self);
              static PyObject *t_AemSegment_getAvailableDerivatives(t_AemSegment *self);
              static PyObject *t_AemSegment_getInterpolationMethod(t_AemSegment *self);
              static PyObject *t_AemSegment_getInterpolationSamples(t_AemSegment *self);
              static PyObject *t_AemSegment_getReferenceFrame(t_AemSegment *self);
              static PyObject *t_AemSegment_getStart(t_AemSegment *self);
              static PyObject *t_AemSegment_getStop(t_AemSegment *self);
              static PyObject *t_AemSegment_get__angularCoordinates(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__attitudeProvider(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__availableDerivatives(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__interpolationMethod(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__interpolationSamples(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__referenceFrame(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__start(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__stop(t_AemSegment *self, void *data);
              static PyObject *t_AemSegment_get__parameters_(t_AemSegment *self, void *data);
              static PyGetSetDef t_AemSegment__fields_[] = {
                DECLARE_GET_FIELD(t_AemSegment, angularCoordinates),
                DECLARE_GET_FIELD(t_AemSegment, attitudeProvider),
                DECLARE_GET_FIELD(t_AemSegment, availableDerivatives),
                DECLARE_GET_FIELD(t_AemSegment, interpolationMethod),
                DECLARE_GET_FIELD(t_AemSegment, interpolationSamples),
                DECLARE_GET_FIELD(t_AemSegment, referenceFrame),
                DECLARE_GET_FIELD(t_AemSegment, start),
                DECLARE_GET_FIELD(t_AemSegment, stop),
                DECLARE_GET_FIELD(t_AemSegment, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemSegment__methods_[] = {
                DECLARE_METHOD(t_AemSegment, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemSegment, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemSegment, of_, METH_VARARGS),
                DECLARE_METHOD(t_AemSegment, getAngularCoordinates, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getAttitudeProvider, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getAvailableDerivatives, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getInterpolationMethod, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getInterpolationSamples, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getReferenceFrame, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AemSegment, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemSegment)[] = {
                { Py_tp_methods, t_AemSegment__methods_ },
                { Py_tp_init, (void *) t_AemSegment_init_ },
                { Py_tp_getset, t_AemSegment__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemSegment)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::Segment),
                NULL
              };

              DEFINE_TYPE(AemSegment, t_AemSegment, AemSegment);
              PyObject *t_AemSegment::wrap_Object(const AemSegment& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AemSegment::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemSegment *self = (t_AemSegment *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_AemSegment::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_AemSegment::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemSegment *self = (t_AemSegment *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_AemSegment::install(PyObject *module)
              {
                installType(&PY_TYPE(AemSegment), &PY_TYPE_DEF(AemSegment), module, "AemSegment", 0);
              }

              void t_AemSegment::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSegment), "class_", make_descriptor(AemSegment::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSegment), "wrapfn_", make_descriptor(t_AemSegment::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemSegment), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemSegment_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemSegment::initializeClass, 1)))
                  return NULL;
                return t_AemSegment::wrap_Object(AemSegment(((t_AemSegment *) arg)->object.this$));
              }
              static PyObject *t_AemSegment_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemSegment::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AemSegment_of_(t_AemSegment *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_AemSegment_init_(t_AemSegment *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::aem::AemData a1((jobject) NULL);
                AemSegment object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::files::ccsds::ndm::adm::aem::AemMetadata::initializeClass, ::org::orekit::files::ccsds::ndm::adm::aem::AemData::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = AemSegment(a0, a1));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemMetadata);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AemSegment_getAngularCoordinates(t_AemSegment *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
              }

              static PyObject *t_AemSegment_getAttitudeProvider(t_AemSegment *self)
              {
                ::org::orekit::attitudes::BoundedAttitudeProvider result((jobject) NULL);
                OBJ_CALL(result = self->object.getAttitudeProvider());
                return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(result);
              }

              static PyObject *t_AemSegment_getAvailableDerivatives(t_AemSegment *self)
              {
                ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
                OBJ_CALL(result = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
              }

              static PyObject *t_AemSegment_getInterpolationMethod(t_AemSegment *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getInterpolationMethod());
                return j2p(result);
              }

              static PyObject *t_AemSegment_getInterpolationSamples(t_AemSegment *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_AemSegment_getReferenceFrame(t_AemSegment *self)
              {
                ::org::orekit::frames::Frame result((jobject) NULL);
                OBJ_CALL(result = self->object.getReferenceFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(result);
              }

              static PyObject *t_AemSegment_getStart(t_AemSegment *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AemSegment_getStop(t_AemSegment *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }
              static PyObject *t_AemSegment_get__parameters_(t_AemSegment *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_AemSegment_get__angularCoordinates(t_AemSegment *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__attitudeProvider(t_AemSegment *self, void *data)
              {
                ::org::orekit::attitudes::BoundedAttitudeProvider value((jobject) NULL);
                OBJ_CALL(value = self->object.getAttitudeProvider());
                return ::org::orekit::attitudes::t_BoundedAttitudeProvider::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__availableDerivatives(t_AemSegment *self, void *data)
              {
                ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
                OBJ_CALL(value = self->object.getAvailableDerivatives());
                return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__interpolationMethod(t_AemSegment *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getInterpolationMethod());
                return j2p(value);
              }

              static PyObject *t_AemSegment_get__interpolationSamples(t_AemSegment *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getInterpolationSamples());
                return PyLong_FromLong((long) value);
              }

              static PyObject *t_AemSegment_get__referenceFrame(t_AemSegment *self, void *data)
              {
                ::org::orekit::frames::Frame value((jobject) NULL);
                OBJ_CALL(value = self->object.getReferenceFrame());
                return ::org::orekit::frames::t_Frame::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__start(t_AemSegment *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AemSegment_get__stop(t_AemSegment *self, void *data)
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
#include "org/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *GPSLegacyNavigationMessage::class$ = NULL;
            jmethodID *GPSLegacyNavigationMessage::mids$ = NULL;
            bool GPSLegacyNavigationMessage::live$ = false;

            jclass GPSLegacyNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/GPSLegacyNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GPSLegacyNavigationMessage::GPSLegacyNavigationMessage() : ::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}
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
        namespace gnss {
          namespace data {
            static PyObject *t_GPSLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GPSLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GPSLegacyNavigationMessage_init_(t_GPSLegacyNavigationMessage *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_GPSLegacyNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_GPSLegacyNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GPSLegacyNavigationMessage, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GPSLegacyNavigationMessage)[] = {
              { Py_tp_methods, t_GPSLegacyNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_GPSLegacyNavigationMessage_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GPSLegacyNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::LegacyNavigationMessage),
              NULL
            };

            DEFINE_TYPE(GPSLegacyNavigationMessage, t_GPSLegacyNavigationMessage, GPSLegacyNavigationMessage);

            void t_GPSLegacyNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(GPSLegacyNavigationMessage), &PY_TYPE_DEF(GPSLegacyNavigationMessage), module, "GPSLegacyNavigationMessage", 0);
            }

            void t_GPSLegacyNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSLegacyNavigationMessage), "class_", make_descriptor(GPSLegacyNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSLegacyNavigationMessage), "wrapfn_", make_descriptor(t_GPSLegacyNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GPSLegacyNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GPSLegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GPSLegacyNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_GPSLegacyNavigationMessage::wrap_Object(GPSLegacyNavigationMessage(((t_GPSLegacyNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_GPSLegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GPSLegacyNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GPSLegacyNavigationMessage_init_(t_GPSLegacyNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              GPSLegacyNavigationMessage object((jobject) NULL);

              INT_CALL(object = GPSLegacyNavigationMessage());
              self->object = object;

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
#include "org/orekit/files/ccsds/ndm/cdm/ScreenType.h"
#include "org/orekit/files/ccsds/ndm/cdm/ScreenType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ScreenType::class$ = NULL;
            jmethodID *ScreenType::mids$ = NULL;
            bool ScreenType::live$ = false;
            ScreenType *ScreenType::PC = NULL;
            ScreenType *ScreenType::PC_MAX = NULL;
            ScreenType *ScreenType::SHAPE = NULL;

            jclass ScreenType::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ScreenType");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_f5ec493ba9439713] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;");
                mids$[mid_values_5b7cbd2b86f5980d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                PC = new ScreenType(env->getStaticObjectField(cls, "PC", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;"));
                PC_MAX = new ScreenType(env->getStaticObjectField(cls, "PC_MAX", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;"));
                SHAPE = new ScreenType(env->getStaticObjectField(cls, "SHAPE", "Lorg/orekit/files/ccsds/ndm/cdm/ScreenType;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ScreenType ScreenType::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ScreenType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_f5ec493ba9439713], a0.this$));
            }

            JArray< ScreenType > ScreenType::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ScreenType >(env->callStaticObjectMethod(cls, mids$[mid_values_5b7cbd2b86f5980d]));
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
            static PyObject *t_ScreenType_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenType_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ScreenType_of_(t_ScreenType *self, PyObject *args);
            static PyObject *t_ScreenType_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ScreenType_values(PyTypeObject *type);
            static PyObject *t_ScreenType_get__parameters_(t_ScreenType *self, void *data);
            static PyGetSetDef t_ScreenType__fields_[] = {
              DECLARE_GET_FIELD(t_ScreenType, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ScreenType__methods_[] = {
              DECLARE_METHOD(t_ScreenType, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenType, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ScreenType, of_, METH_VARARGS),
              DECLARE_METHOD(t_ScreenType, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ScreenType, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ScreenType)[] = {
              { Py_tp_methods, t_ScreenType__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ScreenType__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ScreenType)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ScreenType, t_ScreenType, ScreenType);
            PyObject *t_ScreenType::wrap_Object(const ScreenType& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenType::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenType *self = (t_ScreenType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ScreenType::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ScreenType::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ScreenType *self = (t_ScreenType *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ScreenType::install(PyObject *module)
            {
              installType(&PY_TYPE(ScreenType), &PY_TYPE_DEF(ScreenType), module, "ScreenType", 0);
            }

            void t_ScreenType::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "class_", make_descriptor(ScreenType::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "wrapfn_", make_descriptor(t_ScreenType::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "boxfn_", make_descriptor(boxObject));
              env->getClass(ScreenType::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "PC", make_descriptor(t_ScreenType::wrap_Object(*ScreenType::PC)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "PC_MAX", make_descriptor(t_ScreenType::wrap_Object(*ScreenType::PC_MAX)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ScreenType), "SHAPE", make_descriptor(t_ScreenType::wrap_Object(*ScreenType::SHAPE)));
            }

            static PyObject *t_ScreenType_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ScreenType::initializeClass, 1)))
                return NULL;
              return t_ScreenType::wrap_Object(ScreenType(((t_ScreenType *) arg)->object.this$));
            }
            static PyObject *t_ScreenType_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ScreenType::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ScreenType_of_(t_ScreenType *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ScreenType_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ScreenType result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenType::valueOf(a0));
                return t_ScreenType::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ScreenType_values(PyTypeObject *type)
            {
              JArray< ScreenType > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ScreenType::values());
              return JArray<jobject>(result.this$).wrap(t_ScreenType::wrap_jobject);
            }
            static PyObject *t_ScreenType_get__parameters_(t_ScreenType *self, void *data)
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
#include "org/orekit/files/ccsds/definitions/OdMethodFacade.h"
#include "org/orekit/files/ccsds/definitions/OdMethodType.h"
#include "org/orekit/files/ccsds/definitions/OdMethodFacade.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
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
              mids$[mid_init$_21ac04171116ebbb] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/files/ccsds/definitions/OdMethodType;Ljava/lang/String;)V");
              mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getTool_3cffd47377eca18a] = env->getMethodID(cls, "getTool", "()Ljava/lang/String;");
              mids$[mid_getType_b31d43c44ca02d59] = env->getMethodID(cls, "getType", "()Lorg/orekit/files/ccsds/definitions/OdMethodType;");
              mids$[mid_parse_c6542493769239f1] = env->getStaticMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/definitions/OdMethodFacade;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OdMethodFacade::OdMethodFacade(const ::java::lang::String & a0, const ::org::orekit::files::ccsds::definitions::OdMethodType & a1, const ::java::lang::String & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_21ac04171116ebbb, a0.this$, a1.this$, a2.this$)) {}

          ::java::lang::String OdMethodFacade::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
          }

          ::java::lang::String OdMethodFacade::getTool() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTool_3cffd47377eca18a]));
          }

          ::org::orekit::files::ccsds::definitions::OdMethodType OdMethodFacade::getType() const
          {
            return ::org::orekit::files::ccsds::definitions::OdMethodType(env->callObjectMethod(this$, mids$[mid_getType_b31d43c44ca02d59]));
          }

          OdMethodFacade OdMethodFacade::parse(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OdMethodFacade(env->callStaticObjectMethod(cls, mids$[mid_parse_c6542493769239f1], a0.this$));
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
#include "org/orekit/propagation/events/handlers/StopOnEvent.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/ode/events/Action.h"
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
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_c85ac59cb25f2670] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/events/EventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          StopOnEvent::StopOnEvent() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::org::hipparchus::ode::events::Action StopOnEvent::eventOccurred(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::events::EventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_c85ac59cb25f2670], a0.this$, a1.this$, a2));
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
#include "org/orekit/data/GzipFilter.h"
#include "org/orekit/data/DataFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *GzipFilter::class$ = NULL;
      jmethodID *GzipFilter::mids$ = NULL;
      bool GzipFilter::live$ = false;

      jclass GzipFilter::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/GzipFilter");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_filter_d33f4b0b3a1030ad] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      GzipFilter::GzipFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      ::org::orekit::data::DataSource GzipFilter::filter(const ::org::orekit::data::DataSource & a0) const
      {
        return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_d33f4b0b3a1030ad], a0.this$));
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
      static PyObject *t_GzipFilter_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_GzipFilter_instance_(PyTypeObject *type, PyObject *arg);
      static int t_GzipFilter_init_(t_GzipFilter *self, PyObject *args, PyObject *kwds);
      static PyObject *t_GzipFilter_filter(t_GzipFilter *self, PyObject *arg);

      static PyMethodDef t_GzipFilter__methods_[] = {
        DECLARE_METHOD(t_GzipFilter, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GzipFilter, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_GzipFilter, filter, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(GzipFilter)[] = {
        { Py_tp_methods, t_GzipFilter__methods_ },
        { Py_tp_init, (void *) t_GzipFilter_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(GzipFilter)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(GzipFilter, t_GzipFilter, GzipFilter);

      void t_GzipFilter::install(PyObject *module)
      {
        installType(&PY_TYPE(GzipFilter), &PY_TYPE_DEF(GzipFilter), module, "GzipFilter", 0);
      }

      void t_GzipFilter::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(GzipFilter), "class_", make_descriptor(GzipFilter::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GzipFilter), "wrapfn_", make_descriptor(t_GzipFilter::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(GzipFilter), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_GzipFilter_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, GzipFilter::initializeClass, 1)))
          return NULL;
        return t_GzipFilter::wrap_Object(GzipFilter(((t_GzipFilter *) arg)->object.this$));
      }
      static PyObject *t_GzipFilter_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, GzipFilter::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_GzipFilter_init_(t_GzipFilter *self, PyObject *args, PyObject *kwds)
      {
        GzipFilter object((jobject) NULL);

        INT_CALL(object = GzipFilter());
        self->object = object;

        return 0;
      }

      static PyObject *t_GzipFilter_filter(t_GzipFilter *self, PyObject *arg)
      {
        ::org::orekit::data::DataSource a0((jobject) NULL);
        ::org::orekit::data::DataSource result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.filter(a0));
          return ::org::orekit::data::t_DataSource::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "filter", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Sigmoid.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Sigmoid::class$ = NULL;
        jmethodID *Sigmoid::mids$ = NULL;
        bool Sigmoid::live$ = false;

        jclass Sigmoid::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Sigmoid");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Sigmoid::Sigmoid() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        Sigmoid::Sigmoid(jdouble a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        jdouble Sigmoid::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Sigmoid::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"
#include "org/hipparchus/analysis/function/Sigmoid$Parametric.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {
        static PyObject *t_Sigmoid_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Sigmoid_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Sigmoid_init_(t_Sigmoid *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Sigmoid_value(t_Sigmoid *self, PyObject *args);

        static PyMethodDef t_Sigmoid__methods_[] = {
          DECLARE_METHOD(t_Sigmoid, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sigmoid, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Sigmoid, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Sigmoid)[] = {
          { Py_tp_methods, t_Sigmoid__methods_ },
          { Py_tp_init, (void *) t_Sigmoid_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Sigmoid)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Sigmoid, t_Sigmoid, Sigmoid);

        void t_Sigmoid::install(PyObject *module)
        {
          installType(&PY_TYPE(Sigmoid), &PY_TYPE_DEF(Sigmoid), module, "Sigmoid", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid), "Parametric", make_descriptor(&PY_TYPE_DEF(Sigmoid$Parametric)));
        }

        void t_Sigmoid::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid), "class_", make_descriptor(Sigmoid::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid), "wrapfn_", make_descriptor(t_Sigmoid::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Sigmoid), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Sigmoid_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Sigmoid::initializeClass, 1)))
            return NULL;
          return t_Sigmoid::wrap_Object(Sigmoid(((t_Sigmoid *) arg)->object.this$));
        }
        static PyObject *t_Sigmoid_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Sigmoid::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Sigmoid_init_(t_Sigmoid *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              Sigmoid object((jobject) NULL);

              INT_CALL(object = Sigmoid());
              self->object = object;
              break;
            }
           case 2:
            {
              jdouble a0;
              jdouble a1;
              Sigmoid object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = Sigmoid(a0, a1));
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

        static PyObject *t_Sigmoid_value(t_Sigmoid *self, PyObject *args)
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
#include "org/orekit/forces/gravity/NewtonianAttraction.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/propagation/numerical/FieldTimeDerivativesEquations.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/util/List.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/numerical/TimeDerivativesEquations.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *NewtonianAttraction::class$ = NULL;
        jmethodID *NewtonianAttraction::mids$ = NULL;
        bool NewtonianAttraction::live$ = false;
        ::java::lang::String *NewtonianAttraction::CENTRAL_ATTRACTION_COEFFICIENT = NULL;

        jclass NewtonianAttraction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/NewtonianAttraction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_10f281d777284cea] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_acceleration_b61fb59a041240c6] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_61944e27a39e8290] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_addContribution_0f28031d74393af0] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/numerical/FieldTimeDerivativesEquations;)V");
            mids$[mid_addContribution_9ecc165cc3358de0] = env->getMethodID(cls, "addContribution", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/numerical/TimeDerivativesEquations;)V");
            mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getMu_b0b988f941da47d8] = env->getMethodID(cls, "getMu", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getMu_81cbf1832c7c6864] = env->getMethodID(cls, "getMu", "(Lorg/hipparchus/Field;Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CENTRAL_ATTRACTION_COEFFICIENT = new ::java::lang::String(env->getStaticObjectField(cls, "CENTRAL_ATTRACTION_COEFFICIENT", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NewtonianAttraction::NewtonianAttraction(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_10f281d777284cea, a0)) {}

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D NewtonianAttraction::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b61fb59a041240c6], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D NewtonianAttraction::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_61944e27a39e8290], a0.this$, a1.this$));
        }

        void NewtonianAttraction::addContribution(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addContribution_0f28031d74393af0], a0.this$, a1.this$);
        }

        void NewtonianAttraction::addContribution(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::numerical::TimeDerivativesEquations & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addContribution_9ecc165cc3358de0], a0.this$, a1.this$);
        }

        jboolean NewtonianAttraction::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_89b302893bdbe1f1]);
        }

        jdouble NewtonianAttraction::getMu(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_b0b988f941da47d8], a0.this$);
        }

        ::org::hipparchus::CalculusFieldElement NewtonianAttraction::getMu(const ::org::hipparchus::Field & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMu_81cbf1832c7c6864], a0.this$, a1.this$));
        }

        ::java::util::List NewtonianAttraction::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
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
        static PyObject *t_NewtonianAttraction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NewtonianAttraction_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NewtonianAttraction_init_(t_NewtonianAttraction *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NewtonianAttraction_acceleration(t_NewtonianAttraction *self, PyObject *args);
        static PyObject *t_NewtonianAttraction_addContribution(t_NewtonianAttraction *self, PyObject *args);
        static PyObject *t_NewtonianAttraction_dependsOnPositionOnly(t_NewtonianAttraction *self);
        static PyObject *t_NewtonianAttraction_getMu(t_NewtonianAttraction *self, PyObject *args);
        static PyObject *t_NewtonianAttraction_getParametersDrivers(t_NewtonianAttraction *self);
        static PyObject *t_NewtonianAttraction_get__parametersDrivers(t_NewtonianAttraction *self, void *data);
        static PyGetSetDef t_NewtonianAttraction__fields_[] = {
          DECLARE_GET_FIELD(t_NewtonianAttraction, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NewtonianAttraction__methods_[] = {
          DECLARE_METHOD(t_NewtonianAttraction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NewtonianAttraction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NewtonianAttraction, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_NewtonianAttraction, addContribution, METH_VARARGS),
          DECLARE_METHOD(t_NewtonianAttraction, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_NewtonianAttraction, getMu, METH_VARARGS),
          DECLARE_METHOD(t_NewtonianAttraction, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NewtonianAttraction)[] = {
          { Py_tp_methods, t_NewtonianAttraction__methods_ },
          { Py_tp_init, (void *) t_NewtonianAttraction_init_ },
          { Py_tp_getset, t_NewtonianAttraction__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NewtonianAttraction)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NewtonianAttraction, t_NewtonianAttraction, NewtonianAttraction);

        void t_NewtonianAttraction::install(PyObject *module)
        {
          installType(&PY_TYPE(NewtonianAttraction), &PY_TYPE_DEF(NewtonianAttraction), module, "NewtonianAttraction", 0);
        }

        void t_NewtonianAttraction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonianAttraction), "class_", make_descriptor(NewtonianAttraction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonianAttraction), "wrapfn_", make_descriptor(t_NewtonianAttraction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonianAttraction), "boxfn_", make_descriptor(boxObject));
          env->getClass(NewtonianAttraction::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(NewtonianAttraction), "CENTRAL_ATTRACTION_COEFFICIENT", make_descriptor(j2p(*NewtonianAttraction::CENTRAL_ATTRACTION_COEFFICIENT)));
        }

        static PyObject *t_NewtonianAttraction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NewtonianAttraction::initializeClass, 1)))
            return NULL;
          return t_NewtonianAttraction::wrap_Object(NewtonianAttraction(((t_NewtonianAttraction *) arg)->object.this$));
        }
        static PyObject *t_NewtonianAttraction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NewtonianAttraction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NewtonianAttraction_init_(t_NewtonianAttraction *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          NewtonianAttraction object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = NewtonianAttraction(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_NewtonianAttraction_acceleration(t_NewtonianAttraction *self, PyObject *args)
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

        static PyObject *t_NewtonianAttraction_addContribution(t_NewtonianAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::numerical::FieldTimeDerivativesEquations::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::numerical::t_FieldTimeDerivativesEquations::parameters_))
              {
                OBJ_CALL(self->object.addContribution(a0, a1));
                Py_RETURN_NONE;
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::numerical::TimeDerivativesEquations a1((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::propagation::numerical::TimeDerivativesEquations::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.addContribution(a0, a1));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addContribution", args);
          return NULL;
        }

        static PyObject *t_NewtonianAttraction_dependsOnPositionOnly(t_NewtonianAttraction *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_NewtonianAttraction_getMu(t_NewtonianAttraction *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.getMu(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            break;
           case 2:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
              {
                OBJ_CALL(result = self->object.getMu(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "getMu", args);
          return NULL;
        }

        static PyObject *t_NewtonianAttraction_getParametersDrivers(t_NewtonianAttraction *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_NewtonianAttraction_get__parametersDrivers(t_NewtonianAttraction *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey.h"
#include "org/orekit/files/ccsds/ndm/odm/SpacecraftParameters.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *SpacecraftParametersKey::class$ = NULL;
            jmethodID *SpacecraftParametersKey::mids$ = NULL;
            bool SpacecraftParametersKey::live$ = false;
            SpacecraftParametersKey *SpacecraftParametersKey::COMMENT = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::DRAG_AREA = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::DRAG_COEFF = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::MASS = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::SOLAR_RAD_AREA = NULL;
            SpacecraftParametersKey *SpacecraftParametersKey::SOLAR_RAD_COEFF = NULL;

            jclass SpacecraftParametersKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_33b4713338554511] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParameters;)Z");
                mids$[mid_valueOf_2ca3f5488d30cb44] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;");
                mids$[mid_values_9342cf6ddacdf0c7] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                COMMENT = new SpacecraftParametersKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                DRAG_AREA = new SpacecraftParametersKey(env->getStaticObjectField(cls, "DRAG_AREA", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                DRAG_COEFF = new SpacecraftParametersKey(env->getStaticObjectField(cls, "DRAG_COEFF", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                MASS = new SpacecraftParametersKey(env->getStaticObjectField(cls, "MASS", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                SOLAR_RAD_AREA = new SpacecraftParametersKey(env->getStaticObjectField(cls, "SOLAR_RAD_AREA", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                SOLAR_RAD_COEFF = new SpacecraftParametersKey(env->getStaticObjectField(cls, "SOLAR_RAD_COEFF", "Lorg/orekit/files/ccsds/ndm/odm/SpacecraftParametersKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean SpacecraftParametersKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_33b4713338554511], a0.this$, a1.this$, a2.this$);
            }

            SpacecraftParametersKey SpacecraftParametersKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return SpacecraftParametersKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_2ca3f5488d30cb44], a0.this$));
            }

            JArray< SpacecraftParametersKey > SpacecraftParametersKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< SpacecraftParametersKey >(env->callStaticObjectMethod(cls, mids$[mid_values_9342cf6ddacdf0c7]));
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
            static PyObject *t_SpacecraftParametersKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SpacecraftParametersKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_SpacecraftParametersKey_of_(t_SpacecraftParametersKey *self, PyObject *args);
            static PyObject *t_SpacecraftParametersKey_process(t_SpacecraftParametersKey *self, PyObject *args);
            static PyObject *t_SpacecraftParametersKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_SpacecraftParametersKey_values(PyTypeObject *type);
            static PyObject *t_SpacecraftParametersKey_get__parameters_(t_SpacecraftParametersKey *self, void *data);
            static PyGetSetDef t_SpacecraftParametersKey__fields_[] = {
              DECLARE_GET_FIELD(t_SpacecraftParametersKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_SpacecraftParametersKey__methods_[] = {
              DECLARE_METHOD(t_SpacecraftParametersKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParametersKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParametersKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_SpacecraftParametersKey, process, METH_VARARGS),
              DECLARE_METHOD(t_SpacecraftParametersKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_SpacecraftParametersKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(SpacecraftParametersKey)[] = {
              { Py_tp_methods, t_SpacecraftParametersKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_SpacecraftParametersKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(SpacecraftParametersKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(SpacecraftParametersKey, t_SpacecraftParametersKey, SpacecraftParametersKey);
            PyObject *t_SpacecraftParametersKey::wrap_Object(const SpacecraftParametersKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SpacecraftParametersKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SpacecraftParametersKey *self = (t_SpacecraftParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_SpacecraftParametersKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_SpacecraftParametersKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_SpacecraftParametersKey *self = (t_SpacecraftParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_SpacecraftParametersKey::install(PyObject *module)
            {
              installType(&PY_TYPE(SpacecraftParametersKey), &PY_TYPE_DEF(SpacecraftParametersKey), module, "SpacecraftParametersKey", 0);
            }

            void t_SpacecraftParametersKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "class_", make_descriptor(SpacecraftParametersKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "wrapfn_", make_descriptor(t_SpacecraftParametersKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(SpacecraftParametersKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "COMMENT", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "DRAG_AREA", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::DRAG_AREA)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "DRAG_COEFF", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::DRAG_COEFF)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "MASS", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::MASS)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "SOLAR_RAD_AREA", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::SOLAR_RAD_AREA)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(SpacecraftParametersKey), "SOLAR_RAD_COEFF", make_descriptor(t_SpacecraftParametersKey::wrap_Object(*SpacecraftParametersKey::SOLAR_RAD_COEFF)));
            }

            static PyObject *t_SpacecraftParametersKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, SpacecraftParametersKey::initializeClass, 1)))
                return NULL;
              return t_SpacecraftParametersKey::wrap_Object(SpacecraftParametersKey(((t_SpacecraftParametersKey *) arg)->object.this$));
            }
            static PyObject *t_SpacecraftParametersKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, SpacecraftParametersKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_SpacecraftParametersKey_of_(t_SpacecraftParametersKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_SpacecraftParametersKey_process(t_SpacecraftParametersKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::odm::SpacecraftParameters::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_SpacecraftParametersKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              SpacecraftParametersKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::SpacecraftParametersKey::valueOf(a0));
                return t_SpacecraftParametersKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_SpacecraftParametersKey_values(PyTypeObject *type)
            {
              JArray< SpacecraftParametersKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::odm::SpacecraftParametersKey::values());
              return JArray<jobject>(result.this$).wrap(t_SpacecraftParametersKey::wrap_jobject);
            }
            static PyObject *t_SpacecraftParametersKey_get__parameters_(t_SpacecraftParametersKey *self, void *data)
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
#include "org/hipparchus/analysis/FieldMultivariateFunction.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldMultivariateFunction::class$ = NULL;
      jmethodID *FieldMultivariateFunction::mids$ = NULL;
      bool FieldMultivariateFunction::live$ = false;

      jclass FieldMultivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldMultivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldMultivariateFunction_a3136e7716fb5ee4] = env->getMethodID(cls, "toCalculusFieldMultivariateFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldMultivariateFunction;");
          mids$[mid_value_e3919ad898361abd] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldMultivariateFunction FieldMultivariateFunction::toCalculusFieldMultivariateFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldMultivariateFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldMultivariateFunction_a3136e7716fb5ee4], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldMultivariateFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_e3919ad898361abd], a0.this$));
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
      static PyObject *t_FieldMultivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateFunction_toCalculusFieldMultivariateFunction(t_FieldMultivariateFunction *self, PyObject *arg);
      static PyObject *t_FieldMultivariateFunction_value(t_FieldMultivariateFunction *self, PyObject *arg);

      static PyMethodDef t_FieldMultivariateFunction__methods_[] = {
        DECLARE_METHOD(t_FieldMultivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateFunction, toCalculusFieldMultivariateFunction, METH_O),
        DECLARE_METHOD(t_FieldMultivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMultivariateFunction)[] = {
        { Py_tp_methods, t_FieldMultivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMultivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMultivariateFunction, t_FieldMultivariateFunction, FieldMultivariateFunction);

      void t_FieldMultivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMultivariateFunction), &PY_TYPE_DEF(FieldMultivariateFunction), module, "FieldMultivariateFunction", 0);
      }

      void t_FieldMultivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateFunction), "class_", make_descriptor(FieldMultivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateFunction), "wrapfn_", make_descriptor(t_FieldMultivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMultivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMultivariateFunction::initializeClass, 1)))
          return NULL;
        return t_FieldMultivariateFunction::wrap_Object(FieldMultivariateFunction(((t_FieldMultivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldMultivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMultivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMultivariateFunction_toCalculusFieldMultivariateFunction(t_FieldMultivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldMultivariateFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldMultivariateFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldMultivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldMultivariateFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldMultivariateFunction_value(t_FieldMultivariateFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
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
#include "org/orekit/attitudes/BodyCenterPointing.h"
#include "org/orekit/utils/TimeStampedFieldPVCoordinates.h"
#include "org/orekit/bodies/Ellipsoid.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *BodyCenterPointing::class$ = NULL;
      jmethodID *BodyCenterPointing::mids$ = NULL;
      bool BodyCenterPointing::live$ = false;

      jclass BodyCenterPointing::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/BodyCenterPointing");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_f9d5e998a0fdbd09] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/bodies/Ellipsoid;)V");
          mids$[mid_getTargetPV_9e0119a6fef31431] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedFieldPVCoordinates;");
          mids$[mid_getTargetPV_ee00ab612436435b] = env->getMethodID(cls, "getTargetPV", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      BodyCenterPointing::BodyCenterPointing(const ::org::orekit::frames::Frame & a0, const ::org::orekit::bodies::Ellipsoid & a1) : ::org::orekit::attitudes::GroundPointing(env->newObject(initializeClass, &mids$, mid_init$_f9d5e998a0fdbd09, a0.this$, a1.this$)) {}

      ::org::orekit::utils::TimeStampedFieldPVCoordinates BodyCenterPointing::getTargetPV(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedFieldPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_9e0119a6fef31431], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::utils::TimeStampedPVCoordinates BodyCenterPointing::getTargetPV(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::utils::TimeStampedPVCoordinates(env->callObjectMethod(this$, mids$[mid_getTargetPV_ee00ab612436435b], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_BodyCenterPointing_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BodyCenterPointing_instance_(PyTypeObject *type, PyObject *arg);
      static int t_BodyCenterPointing_init_(t_BodyCenterPointing *self, PyObject *args, PyObject *kwds);
      static PyObject *t_BodyCenterPointing_getTargetPV(t_BodyCenterPointing *self, PyObject *args);

      static PyMethodDef t_BodyCenterPointing__methods_[] = {
        DECLARE_METHOD(t_BodyCenterPointing, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodyCenterPointing, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BodyCenterPointing, getTargetPV, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BodyCenterPointing)[] = {
        { Py_tp_methods, t_BodyCenterPointing__methods_ },
        { Py_tp_init, (void *) t_BodyCenterPointing_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BodyCenterPointing)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::GroundPointing),
        NULL
      };

      DEFINE_TYPE(BodyCenterPointing, t_BodyCenterPointing, BodyCenterPointing);

      void t_BodyCenterPointing::install(PyObject *module)
      {
        installType(&PY_TYPE(BodyCenterPointing), &PY_TYPE_DEF(BodyCenterPointing), module, "BodyCenterPointing", 0);
      }

      void t_BodyCenterPointing::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyCenterPointing), "class_", make_descriptor(BodyCenterPointing::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyCenterPointing), "wrapfn_", make_descriptor(t_BodyCenterPointing::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BodyCenterPointing), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BodyCenterPointing_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BodyCenterPointing::initializeClass, 1)))
          return NULL;
        return t_BodyCenterPointing::wrap_Object(BodyCenterPointing(((t_BodyCenterPointing *) arg)->object.this$));
      }
      static PyObject *t_BodyCenterPointing_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BodyCenterPointing::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_BodyCenterPointing_init_(t_BodyCenterPointing *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::bodies::Ellipsoid a1((jobject) NULL);
        BodyCenterPointing object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::bodies::Ellipsoid::initializeClass, &a0, &a1))
        {
          INT_CALL(object = BodyCenterPointing(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_BodyCenterPointing_getTargetPV(t_BodyCenterPointing *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedPVCoordinates::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::TimeStampedFieldPVCoordinates result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getTargetPV(a0, a1, a2));
              return ::org::orekit::utils::t_TimeStampedFieldPVCoordinates::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getTargetPV", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/Enumeration.h"
#include "java/util/Iterator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *Enumeration::class$ = NULL;
    jmethodID *Enumeration::mids$ = NULL;
    bool Enumeration::live$ = false;

    jclass Enumeration::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/Enumeration");

        mids$ = new jmethodID[max_mid];
        mids$[mid_asIterator_834a3801c426326d] = env->getMethodID(cls, "asIterator", "()Ljava/util/Iterator;");
        mids$[mid_hasMoreElements_89b302893bdbe1f1] = env->getMethodID(cls, "hasMoreElements", "()Z");
        mids$[mid_nextElement_e661fe3ba2fafb22] = env->getMethodID(cls, "nextElement", "()Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::java::util::Iterator Enumeration::asIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_asIterator_834a3801c426326d]));
    }

    jboolean Enumeration::hasMoreElements() const
    {
      return env->callBooleanMethod(this$, mids$[mid_hasMoreElements_89b302893bdbe1f1]);
    }

    ::java::lang::Object Enumeration::nextElement() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_nextElement_e661fe3ba2fafb22]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_Enumeration_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Enumeration_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_Enumeration_of_(t_Enumeration *self, PyObject *args);
    static PyObject *t_Enumeration_asIterator(t_Enumeration *self);
    static PyObject *t_Enumeration_hasMoreElements(t_Enumeration *self);
    static PyObject *t_Enumeration_nextElement(t_Enumeration *self);
    static PyObject *t_Enumeration_get__parameters_(t_Enumeration *self, void *data);
    static PyGetSetDef t_Enumeration__fields_[] = {
      DECLARE_GET_FIELD(t_Enumeration, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_Enumeration__methods_[] = {
      DECLARE_METHOD(t_Enumeration, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Enumeration, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_Enumeration, of_, METH_VARARGS),
      DECLARE_METHOD(t_Enumeration, asIterator, METH_NOARGS),
      DECLARE_METHOD(t_Enumeration, hasMoreElements, METH_NOARGS),
      DECLARE_METHOD(t_Enumeration, nextElement, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(Enumeration)[] = {
      { Py_tp_methods, t_Enumeration__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_Enumeration__fields_ },
      { Py_tp_iter, (void *) PyObject_SelfIter },
      { Py_tp_iternext, (void *) ((PyObject *(*)(::java::util::t_Enumeration *)) get_generic_enumeration_next< ::java::util::t_Enumeration,::java::lang::t_Object >) },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(Enumeration)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(Enumeration, t_Enumeration, Enumeration);
    PyObject *t_Enumeration::wrap_Object(const Enumeration& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Enumeration::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Enumeration *self = (t_Enumeration *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_Enumeration::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_Enumeration::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_Enumeration *self = (t_Enumeration *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_Enumeration::install(PyObject *module)
    {
      installType(&PY_TYPE(Enumeration), &PY_TYPE_DEF(Enumeration), module, "Enumeration", 0);
    }

    void t_Enumeration::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enumeration), "class_", make_descriptor(Enumeration::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enumeration), "wrapfn_", make_descriptor(t_Enumeration::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(Enumeration), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_Enumeration_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, Enumeration::initializeClass, 1)))
        return NULL;
      return t_Enumeration::wrap_Object(Enumeration(((t_Enumeration *) arg)->object.this$));
    }
    static PyObject *t_Enumeration_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, Enumeration::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_Enumeration_of_(t_Enumeration *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_Enumeration_asIterator(t_Enumeration *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.asIterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_Enumeration_hasMoreElements(t_Enumeration *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.hasMoreElements());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_Enumeration_nextElement(t_Enumeration *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.nextElement());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }
    static PyObject *t_Enumeration_get__parameters_(t_Enumeration *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/NdmParser.h"
#include "java/util/Map.h"
#include "org/orekit/files/ccsds/utils/lexical/XmlTokenBuilder.h"
#include "org/orekit/files/ccsds/ndm/ParserBuilder.h"
#include "org/orekit/files/ccsds/ndm/Ndm.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *NdmParser::class$ = NULL;
          jmethodID *NdmParser::mids$ = NULL;
          bool NdmParser::live$ = false;

          jclass NdmParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/NdmParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addComment_fd2162b8a05a22fe] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)Z");
              mids$[mid_build_5b240f5241934437] = env->getMethodID(cls, "build", "()Lorg/orekit/files/ccsds/ndm/Ndm;");
              mids$[mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4] = env->getMethodID(cls, "getSpecialXmlElementsBuilders", "()Ljava/util/Map;");
              mids$[mid_reset_a580586827f4ec13] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jboolean NdmParser::addComment(const ::java::lang::String & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_addComment_fd2162b8a05a22fe], a0.this$);
          }

          ::org::orekit::files::ccsds::ndm::Ndm NdmParser::build() const
          {
            return ::org::orekit::files::ccsds::ndm::Ndm(env->callObjectMethod(this$, mids$[mid_build_5b240f5241934437]));
          }

          ::java::util::Map NdmParser::getSpecialXmlElementsBuilders() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSpecialXmlElementsBuilders_1e62c2f73fbdd1c4]));
          }

          void NdmParser::reset(const ::org::orekit::files::ccsds::utils::FileFormat & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_a580586827f4ec13], a0.this$);
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
          static PyObject *t_NdmParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmParser_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NdmParser_of_(t_NdmParser *self, PyObject *args);
          static PyObject *t_NdmParser_addComment(t_NdmParser *self, PyObject *arg);
          static PyObject *t_NdmParser_build(t_NdmParser *self, PyObject *args);
          static PyObject *t_NdmParser_getSpecialXmlElementsBuilders(t_NdmParser *self, PyObject *args);
          static PyObject *t_NdmParser_reset(t_NdmParser *self, PyObject *args);
          static PyObject *t_NdmParser_get__specialXmlElementsBuilders(t_NdmParser *self, void *data);
          static PyObject *t_NdmParser_get__parameters_(t_NdmParser *self, void *data);
          static PyGetSetDef t_NdmParser__fields_[] = {
            DECLARE_GET_FIELD(t_NdmParser, specialXmlElementsBuilders),
            DECLARE_GET_FIELD(t_NdmParser, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NdmParser__methods_[] = {
            DECLARE_METHOD(t_NdmParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NdmParser, of_, METH_VARARGS),
            DECLARE_METHOD(t_NdmParser, addComment, METH_O),
            DECLARE_METHOD(t_NdmParser, build, METH_VARARGS),
            DECLARE_METHOD(t_NdmParser, getSpecialXmlElementsBuilders, METH_VARARGS),
            DECLARE_METHOD(t_NdmParser, reset, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NdmParser)[] = {
            { Py_tp_methods, t_NdmParser__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_NdmParser__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NdmParser)[] = {
            &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser),
            NULL
          };

          DEFINE_TYPE(NdmParser, t_NdmParser, NdmParser);
          PyObject *t_NdmParser::wrap_Object(const NdmParser& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NdmParser::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NdmParser *self = (t_NdmParser *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_NdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_NdmParser::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_NdmParser *self = (t_NdmParser *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_NdmParser::install(PyObject *module)
          {
            installType(&PY_TYPE(NdmParser), &PY_TYPE_DEF(NdmParser), module, "NdmParser", 0);
          }

          void t_NdmParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmParser), "class_", make_descriptor(NdmParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmParser), "wrapfn_", make_descriptor(t_NdmParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NdmParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_NdmParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NdmParser::initializeClass, 1)))
              return NULL;
            return t_NdmParser::wrap_Object(NdmParser(((t_NdmParser *) arg)->object.this$));
          }
          static PyObject *t_NdmParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NdmParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_NdmParser_of_(t_NdmParser *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_NdmParser_addComment(t_NdmParser *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = self->object.addComment(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "addComment", arg);
            return NULL;
          }

          static PyObject *t_NdmParser_build(t_NdmParser *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::ndm::Ndm result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.build());
              return ::org::orekit::files::ccsds::ndm::t_Ndm::wrap_Object(result);
            }

            return callSuper(PY_TYPE(NdmParser), (PyObject *) self, "build", args, 2);
          }

          static PyObject *t_NdmParser_getSpecialXmlElementsBuilders(t_NdmParser *self, PyObject *args)
          {
            ::java::util::Map result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getSpecialXmlElementsBuilders());
              return ::java::util::t_Map::wrap_Object(result, ::java::lang::PY_TYPE(String), ::org::orekit::files::ccsds::utils::lexical::PY_TYPE(XmlTokenBuilder));
            }

            return callSuper(PY_TYPE(NdmParser), (PyObject *) self, "getSpecialXmlElementsBuilders", args, 2);
          }

          static PyObject *t_NdmParser_reset(t_NdmParser *self, PyObject *args)
          {
            ::org::orekit::files::ccsds::utils::FileFormat a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "K", ::org::orekit::files::ccsds::utils::FileFormat::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::utils::t_FileFormat::parameters_))
            {
              OBJ_CALL(self->object.reset(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(NdmParser), (PyObject *) self, "reset", args, 2);
          }
          static PyObject *t_NdmParser_get__parameters_(t_NdmParser *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_NdmParser_get__specialXmlElementsBuilders(t_NdmParser *self, void *data)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/empirical/PolynomialAccelerationModel.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/forces/empirical/AccelerationModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace empirical {

        ::java::lang::Class *PolynomialAccelerationModel::class$ = NULL;
        jmethodID *PolynomialAccelerationModel::mids$ = NULL;
        bool PolynomialAccelerationModel::live$ = false;

        jclass PolynomialAccelerationModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/empirical/PolynomialAccelerationModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_031b0c4cf308c323] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;I)V");
            mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_init_0472264ad6f40bc2] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_signedAmplitude_4ad317f7598a10a9] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_signedAmplitude_810dcb8f9f5d191a] = env->getMethodID(cls, "signedAmplitude", "(Lorg/orekit/propagation/SpacecraftState;[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PolynomialAccelerationModel::PolynomialAccelerationModel(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_031b0c4cf308c323, a0.this$, a1.this$, a2)) {}

        ::java::util::List PolynomialAccelerationModel::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
        }

        void PolynomialAccelerationModel::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_0472264ad6f40bc2], a0.this$, a1.this$);
        }

        ::org::hipparchus::CalculusFieldElement PolynomialAccelerationModel::signedAmplitude(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_signedAmplitude_4ad317f7598a10a9], a0.this$, a1.this$));
        }

        jdouble PolynomialAccelerationModel::signedAmplitude(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_signedAmplitude_810dcb8f9f5d191a], a0.this$, a1.this$);
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
      namespace empirical {
        static PyObject *t_PolynomialAccelerationModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PolynomialAccelerationModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PolynomialAccelerationModel_init_(t_PolynomialAccelerationModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PolynomialAccelerationModel_getParametersDrivers(t_PolynomialAccelerationModel *self);
        static PyObject *t_PolynomialAccelerationModel_init(t_PolynomialAccelerationModel *self, PyObject *args);
        static PyObject *t_PolynomialAccelerationModel_signedAmplitude(t_PolynomialAccelerationModel *self, PyObject *args);
        static PyObject *t_PolynomialAccelerationModel_get__parametersDrivers(t_PolynomialAccelerationModel *self, void *data);
        static PyGetSetDef t_PolynomialAccelerationModel__fields_[] = {
          DECLARE_GET_FIELD(t_PolynomialAccelerationModel, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PolynomialAccelerationModel__methods_[] = {
          DECLARE_METHOD(t_PolynomialAccelerationModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialAccelerationModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PolynomialAccelerationModel, getParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_PolynomialAccelerationModel, init, METH_VARARGS),
          DECLARE_METHOD(t_PolynomialAccelerationModel, signedAmplitude, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PolynomialAccelerationModel)[] = {
          { Py_tp_methods, t_PolynomialAccelerationModel__methods_ },
          { Py_tp_init, (void *) t_PolynomialAccelerationModel_init_ },
          { Py_tp_getset, t_PolynomialAccelerationModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PolynomialAccelerationModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PolynomialAccelerationModel, t_PolynomialAccelerationModel, PolynomialAccelerationModel);

        void t_PolynomialAccelerationModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PolynomialAccelerationModel), &PY_TYPE_DEF(PolynomialAccelerationModel), module, "PolynomialAccelerationModel", 0);
        }

        void t_PolynomialAccelerationModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialAccelerationModel), "class_", make_descriptor(PolynomialAccelerationModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialAccelerationModel), "wrapfn_", make_descriptor(t_PolynomialAccelerationModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PolynomialAccelerationModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_PolynomialAccelerationModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PolynomialAccelerationModel::initializeClass, 1)))
            return NULL;
          return t_PolynomialAccelerationModel::wrap_Object(PolynomialAccelerationModel(((t_PolynomialAccelerationModel *) arg)->object.this$));
        }
        static PyObject *t_PolynomialAccelerationModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PolynomialAccelerationModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PolynomialAccelerationModel_init_(t_PolynomialAccelerationModel *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jint a2;
          PolynomialAccelerationModel object((jobject) NULL);

          if (!parseArgs(args, "skI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PolynomialAccelerationModel(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_PolynomialAccelerationModel_getParametersDrivers(t_PolynomialAccelerationModel *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_PolynomialAccelerationModel_init(t_PolynomialAccelerationModel *self, PyObject *args)
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

        static PyObject *t_PolynomialAccelerationModel_signedAmplitude(t_PolynomialAccelerationModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              jdouble result;

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.signedAmplitude(a0, a1));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "signedAmplitude", args);
          return NULL;
        }

        static PyObject *t_PolynomialAccelerationModel_get__parametersDrivers(t_PolynomialAccelerationModel *self, void *data)
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
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "java/lang/IllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *MultivariateVectorFunction::class$ = NULL;
      jmethodID *MultivariateVectorFunction::mids$ = NULL;
      bool MultivariateVectorFunction::live$ = false;

      jclass MultivariateVectorFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/MultivariateVectorFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_1db7c087750eaffe] = env->getMethodID(cls, "value", "([D)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > MultivariateVectorFunction::value(const JArray< jdouble > & a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_value_1db7c087750eaffe], a0.this$));
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
      static PyObject *t_MultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateVectorFunction_value(t_MultivariateVectorFunction *self, PyObject *arg);

      static PyMethodDef t_MultivariateVectorFunction__methods_[] = {
        DECLARE_METHOD(t_MultivariateVectorFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateVectorFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateVectorFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultivariateVectorFunction)[] = {
        { Py_tp_methods, t_MultivariateVectorFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultivariateVectorFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultivariateVectorFunction, t_MultivariateVectorFunction, MultivariateVectorFunction);

      void t_MultivariateVectorFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(MultivariateVectorFunction), &PY_TYPE_DEF(MultivariateVectorFunction), module, "MultivariateVectorFunction", 0);
      }

      void t_MultivariateVectorFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateVectorFunction), "class_", make_descriptor(MultivariateVectorFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateVectorFunction), "wrapfn_", make_descriptor(t_MultivariateVectorFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateVectorFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultivariateVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultivariateVectorFunction::initializeClass, 1)))
          return NULL;
        return t_MultivariateVectorFunction::wrap_Object(MultivariateVectorFunction(((t_MultivariateVectorFunction *) arg)->object.this$));
      }
      static PyObject *t_MultivariateVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultivariateVectorFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultivariateVectorFunction_value(t_MultivariateVectorFunction *self, PyObject *arg)
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *ShortTermEncounter2DPOCMethod::class$ = NULL;
              jmethodID *ShortTermEncounter2DPOCMethod::mids$ = NULL;
              bool ShortTermEncounter2DPOCMethod::live$ = false;
              jdouble ShortTermEncounter2DPOCMethod::DEFAULT_ZERO_THRESHOLD = (jdouble) 0;

              jclass ShortTermEncounter2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_compute_52ac86180af0fc38] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_a8ad2b5fdf7c89e9] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_7917f8d0fe4dcee2] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_fe2c8257e3a1171e] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_5bd7443246955087] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_d4afe7edfd93d28b] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_62e67021055b4b34] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_54a027380ebb9f4f] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_d7ca5925933c6d49] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_b1728d2759e16f6b] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_5478b75e08765b46] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_ddf22cd33bfe153c] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_8d09da96ce925a0b] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_51013759c7807d3e] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_ca5c6c5a7bbee06f] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_38f8ce8ca31e24a9] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DLorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_0fff86b0133b54f7] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
                  mids$[mid_getType_4b8bf2bb84f7480e] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_89b302893bdbe1f1] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_ZERO_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_ZERO_THRESHOLD");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition & a0) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_52ac86180af0fc38], a0.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition & a0) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_a8ad2b5fdf7c89e9], a0.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_7917f8d0fe4dcee2], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_fe2c8257e3a1171e], a0.this$, a1.this$));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_5bd7443246955087], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_d4afe7edfd93d28b], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, jdouble a1, jdouble a2) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_62e67021055b4b34], a0.this$, a1, a2));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_54a027380ebb9f4f], a0.this$, a1.this$, a2));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_d7ca5925933c6d49], a0.this$, a1.this$, a2.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_b1728d2759e16f6b], a0.this$, a1.this$, a2.this$, a3.this$, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_5478b75e08765b46], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_ddf22cd33bfe153c], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_8d09da96ce925a0b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_51013759c7807d3e], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::orekit::orbits::FieldOrbit & a3, const ::org::orekit::propagation::FieldStateCovariance & a4, const ::org::hipparchus::CalculusFieldElement & a5) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_ca5c6c5a7bbee06f], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, jdouble a2, const ::org::orekit::orbits::Orbit & a3, const ::org::orekit::propagation::StateCovariance & a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_38f8ce8ca31e24a9], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision ShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_0fff86b0133b54f7], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5));
              }

              ::java::lang::String ShortTermEncounter2DPOCMethod::getName() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType ShortTermEncounter2DPOCMethod::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_4b8bf2bb84f7480e]));
              }

              jboolean ShortTermEncounter2DPOCMethod::isAMaximumProbabilityOfCollisionMethod() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isAMaximumProbabilityOfCollisionMethod_89b302893bdbe1f1]);
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
              static PyObject *t_ShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_ShortTermEncounter2DPOCMethod_compute(t_ShortTermEncounter2DPOCMethod *self, PyObject *args);
              static PyObject *t_ShortTermEncounter2DPOCMethod_getName(t_ShortTermEncounter2DPOCMethod *self);
              static PyObject *t_ShortTermEncounter2DPOCMethod_getType(t_ShortTermEncounter2DPOCMethod *self);
              static PyObject *t_ShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod(t_ShortTermEncounter2DPOCMethod *self);
              static PyObject *t_ShortTermEncounter2DPOCMethod_get__aMaximumProbabilityOfCollisionMethod(t_ShortTermEncounter2DPOCMethod *self, void *data);
              static PyObject *t_ShortTermEncounter2DPOCMethod_get__name(t_ShortTermEncounter2DPOCMethod *self, void *data);
              static PyObject *t_ShortTermEncounter2DPOCMethod_get__type(t_ShortTermEncounter2DPOCMethod *self, void *data);
              static PyGetSetDef t_ShortTermEncounter2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethod, aMaximumProbabilityOfCollisionMethod),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethod, name),
                DECLARE_GET_FIELD(t_ShortTermEncounter2DPOCMethod, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_ShortTermEncounter2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, compute, METH_VARARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, getName, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, getType, METH_NOARGS),
                DECLARE_METHOD(t_ShortTermEncounter2DPOCMethod, isAMaximumProbabilityOfCollisionMethod, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(ShortTermEncounter2DPOCMethod)[] = {
                { Py_tp_methods, t_ShortTermEncounter2DPOCMethod__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_ShortTermEncounter2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(ShortTermEncounter2DPOCMethod)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(ShortTermEncounter2DPOCMethod, t_ShortTermEncounter2DPOCMethod, ShortTermEncounter2DPOCMethod);

              void t_ShortTermEncounter2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(ShortTermEncounter2DPOCMethod), &PY_TYPE_DEF(ShortTermEncounter2DPOCMethod), module, "ShortTermEncounter2DPOCMethod", 0);
              }

              void t_ShortTermEncounter2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethod), "class_", make_descriptor(ShortTermEncounter2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethod), "wrapfn_", make_descriptor(t_ShortTermEncounter2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                env->getClass(ShortTermEncounter2DPOCMethod::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(ShortTermEncounter2DPOCMethod), "DEFAULT_ZERO_THRESHOLD", make_descriptor(ShortTermEncounter2DPOCMethod::DEFAULT_ZERO_THRESHOLD));
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, ShortTermEncounter2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_ShortTermEncounter2DPOCMethod::wrap_Object(ShortTermEncounter2DPOCMethod(((t_ShortTermEncounter2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_ShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, ShortTermEncounter2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_compute(t_ShortTermEncounter2DPOCMethod *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 1:
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "K", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::initializeClass, &a0, &p0, ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition a0((jobject) NULL);
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "k", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::initializeClass, &a0))
                    {
                      OBJ_CALL(result = self->object.compute(a0));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 2:
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KD", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KK", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KD", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::initializeClass, &a0, &p0, ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::parameters_, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition a0((jobject) NULL);
                    jdouble a1;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kD", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::initializeClass, &a0, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 3:
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    jdouble a2;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KDD", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &a2))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    jdouble a2;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKD", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKK", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 5:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::propagation::FieldStateCovariance a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
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
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 6:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::propagation::FieldStateCovariance a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    jdouble a2;
                    ::org::orekit::orbits::Orbit a3((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a4((jobject) NULL);
                    jdouble a5;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkDkkD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::orbits::FieldOrbit a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::orekit::propagation::FieldStateCovariance a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::hipparchus::CalculusFieldElement a5((jobject) NULL);
                    PyTypeObject **p5;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKK", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a4, &p4, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a5, &p5, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkkkDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "compute", args);
                return NULL;
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_getName(t_ShortTermEncounter2DPOCMethod *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getName());
                return j2p(result);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_getType(t_ShortTermEncounter2DPOCMethod *self)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);
                OBJ_CALL(result = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod(t_ShortTermEncounter2DPOCMethod *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_get__aMaximumProbabilityOfCollisionMethod(t_ShortTermEncounter2DPOCMethod *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_get__name(t_ShortTermEncounter2DPOCMethod *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getName());
                return j2p(value);
              }

              static PyObject *t_ShortTermEncounter2DPOCMethod_get__type(t_ShortTermEncounter2DPOCMethod *self, void *data)
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
#include "org/hipparchus/analysis/CalculusFieldMultivariateMatrixFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *CalculusFieldMultivariateMatrixFunction::class$ = NULL;
      jmethodID *CalculusFieldMultivariateMatrixFunction::mids$ = NULL;
      bool CalculusFieldMultivariateMatrixFunction::live$ = false;

      jclass CalculusFieldMultivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/CalculusFieldMultivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_bac15fbc2581836b] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > CalculusFieldMultivariateMatrixFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_value_bac15fbc2581836b], a0.this$));
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
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_of_(t_CalculusFieldMultivariateMatrixFunction *self, PyObject *args);
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_value(t_CalculusFieldMultivariateMatrixFunction *self, PyObject *arg);
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_get__parameters_(t_CalculusFieldMultivariateMatrixFunction *self, void *data);
      static PyGetSetDef t_CalculusFieldMultivariateMatrixFunction__fields_[] = {
        DECLARE_GET_FIELD(t_CalculusFieldMultivariateMatrixFunction, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_CalculusFieldMultivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_CalculusFieldMultivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_CalculusFieldMultivariateMatrixFunction, of_, METH_VARARGS),
        DECLARE_METHOD(t_CalculusFieldMultivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(CalculusFieldMultivariateMatrixFunction)[] = {
        { Py_tp_methods, t_CalculusFieldMultivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_CalculusFieldMultivariateMatrixFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(CalculusFieldMultivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(CalculusFieldMultivariateMatrixFunction, t_CalculusFieldMultivariateMatrixFunction, CalculusFieldMultivariateMatrixFunction);
      PyObject *t_CalculusFieldMultivariateMatrixFunction::wrap_Object(const CalculusFieldMultivariateMatrixFunction& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateMatrixFunction::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateMatrixFunction *self = (t_CalculusFieldMultivariateMatrixFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_CalculusFieldMultivariateMatrixFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_CalculusFieldMultivariateMatrixFunction::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_CalculusFieldMultivariateMatrixFunction *self = (t_CalculusFieldMultivariateMatrixFunction *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_CalculusFieldMultivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(CalculusFieldMultivariateMatrixFunction), &PY_TYPE_DEF(CalculusFieldMultivariateMatrixFunction), module, "CalculusFieldMultivariateMatrixFunction", 0);
      }

      void t_CalculusFieldMultivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateMatrixFunction), "class_", make_descriptor(CalculusFieldMultivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateMatrixFunction), "wrapfn_", make_descriptor(t_CalculusFieldMultivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldMultivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_CalculusFieldMultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, CalculusFieldMultivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_CalculusFieldMultivariateMatrixFunction::wrap_Object(CalculusFieldMultivariateMatrixFunction(((t_CalculusFieldMultivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, CalculusFieldMultivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_CalculusFieldMultivariateMatrixFunction_of_(t_CalculusFieldMultivariateMatrixFunction *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_CalculusFieldMultivariateMatrixFunction_value(t_CalculusFieldMultivariateMatrixFunction *self, PyObject *arg)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

        if (!parseArg(arg, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
      static PyObject *t_CalculusFieldMultivariateMatrixFunction_get__parameters_(t_CalculusFieldMultivariateMatrixFunction *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/NakagamiDistribution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *NakagamiDistribution::class$ = NULL;
        jmethodID *NakagamiDistribution::mids$ = NULL;
        bool NakagamiDistribution::live$ = false;

        jclass NakagamiDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/NakagamiDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ab23f4ae0fb33968] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_cumulativeProbability_7e960cd6eee376d8] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_7e960cd6eee376d8] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_557b8123390d8d0c] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_557b8123390d8d0c] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getShape_557b8123390d8d0c] = env->getMethodID(cls, "getShape", "()D");
            mids$[mid_getSupportLowerBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_557b8123390d8d0c] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_89b302893bdbe1f1] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NakagamiDistribution::NakagamiDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_ab23f4ae0fb33968, a0, a1)) {}

        NakagamiDistribution::NakagamiDistribution(jdouble a0, jdouble a1, jdouble a2) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

        jdouble NakagamiDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_7e960cd6eee376d8], a0);
        }

        jdouble NakagamiDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_7e960cd6eee376d8], a0);
        }

        jdouble NakagamiDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_557b8123390d8d0c]);
        }

        jdouble NakagamiDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_557b8123390d8d0c]);
        }

        jdouble NakagamiDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_557b8123390d8d0c]);
        }

        jdouble NakagamiDistribution::getShape() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getShape_557b8123390d8d0c]);
        }

        jdouble NakagamiDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_557b8123390d8d0c]);
        }

        jdouble NakagamiDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_557b8123390d8d0c]);
        }

        jboolean NakagamiDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_89b302893bdbe1f1]);
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
        static PyObject *t_NakagamiDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NakagamiDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NakagamiDistribution_init_(t_NakagamiDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NakagamiDistribution_cumulativeProbability(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_density(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_getNumericalMean(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_getNumericalVariance(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_getScale(t_NakagamiDistribution *self);
        static PyObject *t_NakagamiDistribution_getShape(t_NakagamiDistribution *self);
        static PyObject *t_NakagamiDistribution_getSupportLowerBound(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_getSupportUpperBound(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_isSupportConnected(t_NakagamiDistribution *self, PyObject *args);
        static PyObject *t_NakagamiDistribution_get__numericalMean(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__numericalVariance(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__scale(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__shape(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__supportConnected(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__supportLowerBound(t_NakagamiDistribution *self, void *data);
        static PyObject *t_NakagamiDistribution_get__supportUpperBound(t_NakagamiDistribution *self, void *data);
        static PyGetSetDef t_NakagamiDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_NakagamiDistribution, numericalMean),
          DECLARE_GET_FIELD(t_NakagamiDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_NakagamiDistribution, scale),
          DECLARE_GET_FIELD(t_NakagamiDistribution, shape),
          DECLARE_GET_FIELD(t_NakagamiDistribution, supportConnected),
          DECLARE_GET_FIELD(t_NakagamiDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_NakagamiDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NakagamiDistribution__methods_[] = {
          DECLARE_METHOD(t_NakagamiDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NakagamiDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NakagamiDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getShape, METH_NOARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_NakagamiDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NakagamiDistribution)[] = {
          { Py_tp_methods, t_NakagamiDistribution__methods_ },
          { Py_tp_init, (void *) t_NakagamiDistribution_init_ },
          { Py_tp_getset, t_NakagamiDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NakagamiDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(NakagamiDistribution, t_NakagamiDistribution, NakagamiDistribution);

        void t_NakagamiDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(NakagamiDistribution), &PY_TYPE_DEF(NakagamiDistribution), module, "NakagamiDistribution", 0);
        }

        void t_NakagamiDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NakagamiDistribution), "class_", make_descriptor(NakagamiDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NakagamiDistribution), "wrapfn_", make_descriptor(t_NakagamiDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NakagamiDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NakagamiDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NakagamiDistribution::initializeClass, 1)))
            return NULL;
          return t_NakagamiDistribution::wrap_Object(NakagamiDistribution(((t_NakagamiDistribution *) arg)->object.this$));
        }
        static PyObject *t_NakagamiDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NakagamiDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NakagamiDistribution_init_(t_NakagamiDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              NakagamiDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = NakagamiDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jdouble a2;
              NakagamiDistribution object((jobject) NULL);

              if (!parseArgs(args, "DDD", &a0, &a1, &a2))
              {
                INT_CALL(object = NakagamiDistribution(a0, a1, a2));
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

        static PyObject *t_NakagamiDistribution_cumulativeProbability(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_NakagamiDistribution_density(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_NakagamiDistribution_getNumericalMean(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_NakagamiDistribution_getNumericalVariance(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_NakagamiDistribution_getScale(t_NakagamiDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NakagamiDistribution_getShape(t_NakagamiDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getShape());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NakagamiDistribution_getSupportLowerBound(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_NakagamiDistribution_getSupportUpperBound(t_NakagamiDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_NakagamiDistribution_isSupportConnected(t_NakagamiDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(NakagamiDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_NakagamiDistribution_get__numericalMean(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__numericalVariance(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__scale(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__shape(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getShape());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__supportConnected(t_NakagamiDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_NakagamiDistribution_get__supportLowerBound(t_NakagamiDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_NakagamiDistribution_get__supportUpperBound(t_NakagamiDistribution *self, void *data)
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
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getDataReleaseFlag_412668abc8d889e9] = env->getMethodID(cls, "getDataReleaseFlag", "()I");
            mids$[mid_getDataType_412668abc8d889e9] = env->getMethodID(cls, "getDataType", "()I");
            mids$[mid_getDateAndTime_3cffd47377eca18a] = env->getMethodID(cls, "getDateAndTime", "()Ljava/lang/String;");
            mids$[mid_getEpochIdentifier_412668abc8d889e9] = env->getMethodID(cls, "getEpochIdentifier", "()I");
            mids$[mid_getH1CrdString_3cffd47377eca18a] = env->getMethodID(cls, "getH1CrdString", "()Ljava/lang/String;");
            mids$[mid_getH2CrdString_3cffd47377eca18a] = env->getMethodID(cls, "getH2CrdString", "()Ljava/lang/String;");
            mids$[mid_getH3CrdString_3cffd47377eca18a] = env->getMethodID(cls, "getH3CrdString", "()Ljava/lang/String;");
            mids$[mid_getH4CrdString_3cffd47377eca18a] = env->getMethodID(cls, "getH4CrdString", "()Ljava/lang/String;");
            mids$[mid_getH5CrdString_3cffd47377eca18a] = env->getMethodID(cls, "getH5CrdString", "()Ljava/lang/String;");
            mids$[mid_getPredictionProvider_3cffd47377eca18a] = env->getMethodID(cls, "getPredictionProvider", "()Ljava/lang/String;");
            mids$[mid_getPredictionType_412668abc8d889e9] = env->getMethodID(cls, "getPredictionType", "()I");
            mids$[mid_getQualityIndicator_412668abc8d889e9] = env->getMethodID(cls, "getQualityIndicator", "()I");
            mids$[mid_getRangeType_6a5abbfd63fb4587] = env->getMethodID(cls, "getRangeType", "()Lorg/orekit/files/ilrs/CRDHeader$RangeType;");
            mids$[mid_getSpacecraftEpochTimeScale_412668abc8d889e9] = env->getMethodID(cls, "getSpacecraftEpochTimeScale", "()I");
            mids$[mid_getStationName_3cffd47377eca18a] = env->getMethodID(cls, "getStationName", "()Ljava/lang/String;");
            mids$[mid_getStationNetword_3cffd47377eca18a] = env->getMethodID(cls, "getStationNetword", "()Ljava/lang/String;");
            mids$[mid_getSystemIdentifier_412668abc8d889e9] = env->getMethodID(cls, "getSystemIdentifier", "()I");
            mids$[mid_getSystemNumber_412668abc8d889e9] = env->getMethodID(cls, "getSystemNumber", "()I");
            mids$[mid_getSystemOccupancy_412668abc8d889e9] = env->getMethodID(cls, "getSystemOccupancy", "()I");
            mids$[mid_getYearOfCentury_412668abc8d889e9] = env->getMethodID(cls, "getYearOfCentury", "()I");
            mids$[mid_isCenterOfMassCorrectionApplied_89b302893bdbe1f1] = env->getMethodID(cls, "isCenterOfMassCorrectionApplied", "()Z");
            mids$[mid_isReceiveAmplitudeCorrectionApplied_89b302893bdbe1f1] = env->getMethodID(cls, "isReceiveAmplitudeCorrectionApplied", "()Z");
            mids$[mid_isStationSystemDelayApplied_89b302893bdbe1f1] = env->getMethodID(cls, "isStationSystemDelayApplied", "()Z");
            mids$[mid_isTransponderDelayApplied_89b302893bdbe1f1] = env->getMethodID(cls, "isTransponderDelayApplied", "()Z");
            mids$[mid_isTroposphericRefractionApplied_89b302893bdbe1f1] = env->getMethodID(cls, "isTroposphericRefractionApplied", "()Z");
            mids$[mid_setDataReleaseFlag_a3da1a935cb37f7b] = env->getMethodID(cls, "setDataReleaseFlag", "(I)V");
            mids$[mid_setDataType_a3da1a935cb37f7b] = env->getMethodID(cls, "setDataType", "(I)V");
            mids$[mid_setDateAndTime_f5ffdf29129ef90a] = env->getMethodID(cls, "setDateAndTime", "(Ljava/lang/String;)V");
            mids$[mid_setEpochIdentifier_a3da1a935cb37f7b] = env->getMethodID(cls, "setEpochIdentifier", "(I)V");
            mids$[mid_setIsCenterOfMassCorrectionApplied_ed2afdb8506b9742] = env->getMethodID(cls, "setIsCenterOfMassCorrectionApplied", "(Z)V");
            mids$[mid_setIsReceiveAmplitudeCorrectionApplied_ed2afdb8506b9742] = env->getMethodID(cls, "setIsReceiveAmplitudeCorrectionApplied", "(Z)V");
            mids$[mid_setIsStationSystemDelayApplied_ed2afdb8506b9742] = env->getMethodID(cls, "setIsStationSystemDelayApplied", "(Z)V");
            mids$[mid_setIsTransponderDelayApplied_ed2afdb8506b9742] = env->getMethodID(cls, "setIsTransponderDelayApplied", "(Z)V");
            mids$[mid_setIsTroposphericRefractionApplied_ed2afdb8506b9742] = env->getMethodID(cls, "setIsTroposphericRefractionApplied", "(Z)V");
            mids$[mid_setPredictionProvider_f5ffdf29129ef90a] = env->getMethodID(cls, "setPredictionProvider", "(Ljava/lang/String;)V");
            mids$[mid_setPredictionType_a3da1a935cb37f7b] = env->getMethodID(cls, "setPredictionType", "(I)V");
            mids$[mid_setQualityIndicator_a3da1a935cb37f7b] = env->getMethodID(cls, "setQualityIndicator", "(I)V");
            mids$[mid_setRangeType_a3da1a935cb37f7b] = env->getMethodID(cls, "setRangeType", "(I)V");
            mids$[mid_setSpacecraftEpochTimeScale_a3da1a935cb37f7b] = env->getMethodID(cls, "setSpacecraftEpochTimeScale", "(I)V");
            mids$[mid_setStationName_f5ffdf29129ef90a] = env->getMethodID(cls, "setStationName", "(Ljava/lang/String;)V");
            mids$[mid_setStationNetword_f5ffdf29129ef90a] = env->getMethodID(cls, "setStationNetword", "(Ljava/lang/String;)V");
            mids$[mid_setSystemIdentifier_a3da1a935cb37f7b] = env->getMethodID(cls, "setSystemIdentifier", "(I)V");
            mids$[mid_setSystemNumber_a3da1a935cb37f7b] = env->getMethodID(cls, "setSystemNumber", "(I)V");
            mids$[mid_setSystemOccupancy_a3da1a935cb37f7b] = env->getMethodID(cls, "setSystemOccupancy", "(I)V");
            mids$[mid_setYearOfCentury_a3da1a935cb37f7b] = env->getMethodID(cls, "setYearOfCentury", "(I)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDHeader::CRDHeader() : ::org::orekit::files::ilrs::ILRSHeader(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jint CRDHeader::getDataReleaseFlag() const
        {
          return env->callIntMethod(this$, mids$[mid_getDataReleaseFlag_412668abc8d889e9]);
        }

        jint CRDHeader::getDataType() const
        {
          return env->callIntMethod(this$, mids$[mid_getDataType_412668abc8d889e9]);
        }

        ::java::lang::String CRDHeader::getDateAndTime() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDateAndTime_3cffd47377eca18a]));
        }

        jint CRDHeader::getEpochIdentifier() const
        {
          return env->callIntMethod(this$, mids$[mid_getEpochIdentifier_412668abc8d889e9]);
        }

        ::java::lang::String CRDHeader::getH1CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH1CrdString_3cffd47377eca18a]));
        }

        ::java::lang::String CRDHeader::getH2CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH2CrdString_3cffd47377eca18a]));
        }

        ::java::lang::String CRDHeader::getH3CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH3CrdString_3cffd47377eca18a]));
        }

        ::java::lang::String CRDHeader::getH4CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH4CrdString_3cffd47377eca18a]));
        }

        ::java::lang::String CRDHeader::getH5CrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getH5CrdString_3cffd47377eca18a]));
        }

        ::java::lang::String CRDHeader::getPredictionProvider() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getPredictionProvider_3cffd47377eca18a]));
        }

        jint CRDHeader::getPredictionType() const
        {
          return env->callIntMethod(this$, mids$[mid_getPredictionType_412668abc8d889e9]);
        }

        jint CRDHeader::getQualityIndicator() const
        {
          return env->callIntMethod(this$, mids$[mid_getQualityIndicator_412668abc8d889e9]);
        }

        ::org::orekit::files::ilrs::CRDHeader$RangeType CRDHeader::getRangeType() const
        {
          return ::org::orekit::files::ilrs::CRDHeader$RangeType(env->callObjectMethod(this$, mids$[mid_getRangeType_6a5abbfd63fb4587]));
        }

        jint CRDHeader::getSpacecraftEpochTimeScale() const
        {
          return env->callIntMethod(this$, mids$[mid_getSpacecraftEpochTimeScale_412668abc8d889e9]);
        }

        ::java::lang::String CRDHeader::getStationName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationName_3cffd47377eca18a]));
        }

        ::java::lang::String CRDHeader::getStationNetword() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationNetword_3cffd47377eca18a]));
        }

        jint CRDHeader::getSystemIdentifier() const
        {
          return env->callIntMethod(this$, mids$[mid_getSystemIdentifier_412668abc8d889e9]);
        }

        jint CRDHeader::getSystemNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getSystemNumber_412668abc8d889e9]);
        }

        jint CRDHeader::getSystemOccupancy() const
        {
          return env->callIntMethod(this$, mids$[mid_getSystemOccupancy_412668abc8d889e9]);
        }

        jint CRDHeader::getYearOfCentury() const
        {
          return env->callIntMethod(this$, mids$[mid_getYearOfCentury_412668abc8d889e9]);
        }

        jboolean CRDHeader::isCenterOfMassCorrectionApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isCenterOfMassCorrectionApplied_89b302893bdbe1f1]);
        }

        jboolean CRDHeader::isReceiveAmplitudeCorrectionApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isReceiveAmplitudeCorrectionApplied_89b302893bdbe1f1]);
        }

        jboolean CRDHeader::isStationSystemDelayApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isStationSystemDelayApplied_89b302893bdbe1f1]);
        }

        jboolean CRDHeader::isTransponderDelayApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isTransponderDelayApplied_89b302893bdbe1f1]);
        }

        jboolean CRDHeader::isTroposphericRefractionApplied() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isTroposphericRefractionApplied_89b302893bdbe1f1]);
        }

        void CRDHeader::setDataReleaseFlag(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDataReleaseFlag_a3da1a935cb37f7b], a0);
        }

        void CRDHeader::setDataType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDataType_a3da1a935cb37f7b], a0);
        }

        void CRDHeader::setDateAndTime(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDateAndTime_f5ffdf29129ef90a], a0.this$);
        }

        void CRDHeader::setEpochIdentifier(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setEpochIdentifier_a3da1a935cb37f7b], a0);
        }

        void CRDHeader::setIsCenterOfMassCorrectionApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsCenterOfMassCorrectionApplied_ed2afdb8506b9742], a0);
        }

        void CRDHeader::setIsReceiveAmplitudeCorrectionApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsReceiveAmplitudeCorrectionApplied_ed2afdb8506b9742], a0);
        }

        void CRDHeader::setIsStationSystemDelayApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsStationSystemDelayApplied_ed2afdb8506b9742], a0);
        }

        void CRDHeader::setIsTransponderDelayApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsTransponderDelayApplied_ed2afdb8506b9742], a0);
        }

        void CRDHeader::setIsTroposphericRefractionApplied(jboolean a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setIsTroposphericRefractionApplied_ed2afdb8506b9742], a0);
        }

        void CRDHeader::setPredictionProvider(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPredictionProvider_f5ffdf29129ef90a], a0.this$);
        }

        void CRDHeader::setPredictionType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPredictionType_a3da1a935cb37f7b], a0);
        }

        void CRDHeader::setQualityIndicator(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setQualityIndicator_a3da1a935cb37f7b], a0);
        }

        void CRDHeader::setRangeType(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setRangeType_a3da1a935cb37f7b], a0);
        }

        void CRDHeader::setSpacecraftEpochTimeScale(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSpacecraftEpochTimeScale_a3da1a935cb37f7b], a0);
        }

        void CRDHeader::setStationName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationName_f5ffdf29129ef90a], a0.this$);
        }

        void CRDHeader::setStationNetword(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setStationNetword_f5ffdf29129ef90a], a0.this$);
        }

        void CRDHeader::setSystemIdentifier(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSystemIdentifier_a3da1a935cb37f7b], a0);
        }

        void CRDHeader::setSystemNumber(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSystemNumber_a3da1a935cb37f7b], a0);
        }

        void CRDHeader::setSystemOccupancy(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSystemOccupancy_a3da1a935cb37f7b], a0);
        }

        void CRDHeader::setYearOfCentury(jint a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setYearOfCentury_a3da1a935cb37f7b], a0);
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
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader), "RangeType", make_descriptor(&PY_TYPE_DEF(CRDHeader$RangeType)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDHeader), "DataType", make_descriptor(&PY_TYPE_DEF(CRDHeader$DataType)));
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
