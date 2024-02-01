#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/EpochDerivativesEquations.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/integration/CombinedDerivatives.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {

        ::java::lang::Class *EpochDerivativesEquations::class$ = NULL;
        jmethodID *EpochDerivativesEquations::mids$ = NULL;
        bool EpochDerivativesEquations::live$ = false;
        jint EpochDerivativesEquations::STATE_DIMENSION = (jint) 0;

        jclass EpochDerivativesEquations::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/EpochDerivativesEquations");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_06e6b865f3620125] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/propagation/numerical/NumericalPropagator;)V");
            mids$[mid_combinedDerivatives_3642c368f508585f] = env->getMethodID(cls, "combinedDerivatives", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/integration/CombinedDerivatives;");
            mids$[mid_getDimension_d6ab429752e7c267] = env->getMethodID(cls, "getDimension", "()I");
            mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_setInitialJacobians_ed3fe207e6fde26f] = env->getMethodID(cls, "setInitialJacobians", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_setInitialJacobians_dd53347985d43b3d] = env->getMethodID(cls, "setInitialJacobians", "(Lorg/orekit/propagation/SpacecraftState;[[D[[D)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_setInitialJacobians_5fbf577f6f316b72] = env->getMethodID(cls, "setInitialJacobians", "(Lorg/orekit/propagation/SpacecraftState;[[D[[D[D)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            STATE_DIMENSION = env->getStaticIntField(cls, "STATE_DIMENSION");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EpochDerivativesEquations::EpochDerivativesEquations(const ::java::lang::String & a0, const ::org::orekit::propagation::numerical::NumericalPropagator & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_06e6b865f3620125, a0.this$, a1.this$)) {}

        ::org::orekit::propagation::integration::CombinedDerivatives EpochDerivativesEquations::combinedDerivatives(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::integration::CombinedDerivatives(env->callObjectMethod(this$, mids$[mid_combinedDerivatives_3642c368f508585f], a0.this$));
        }

        jint EpochDerivativesEquations::getDimension() const
        {
          return env->callIntMethod(this$, mids$[mid_getDimension_d6ab429752e7c267]);
        }

        ::java::lang::String EpochDerivativesEquations::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
        }

        ::org::orekit::propagation::SpacecraftState EpochDerivativesEquations::setInitialJacobians(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_setInitialJacobians_ed3fe207e6fde26f], a0.this$));
        }

        ::org::orekit::propagation::SpacecraftState EpochDerivativesEquations::setInitialJacobians(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_setInitialJacobians_dd53347985d43b3d], a0.this$, a1.this$, a2.this$));
        }

        void EpochDerivativesEquations::setInitialJacobians(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< jdouble > > & a2, const JArray< jdouble > & a3) const
        {
          env->callVoidMethod(this$, mids$[mid_setInitialJacobians_5fbf577f6f316b72], a0.this$, a1.this$, a2.this$, a3.this$);
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
        static PyObject *t_EpochDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EpochDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EpochDerivativesEquations_init_(t_EpochDerivativesEquations *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EpochDerivativesEquations_combinedDerivatives(t_EpochDerivativesEquations *self, PyObject *arg);
        static PyObject *t_EpochDerivativesEquations_getDimension(t_EpochDerivativesEquations *self);
        static PyObject *t_EpochDerivativesEquations_getName(t_EpochDerivativesEquations *self);
        static PyObject *t_EpochDerivativesEquations_setInitialJacobians(t_EpochDerivativesEquations *self, PyObject *args);
        static PyObject *t_EpochDerivativesEquations_get__dimension(t_EpochDerivativesEquations *self, void *data);
        static int t_EpochDerivativesEquations_set__initialJacobians(t_EpochDerivativesEquations *self, PyObject *arg, void *data);
        static PyObject *t_EpochDerivativesEquations_get__name(t_EpochDerivativesEquations *self, void *data);
        static PyGetSetDef t_EpochDerivativesEquations__fields_[] = {
          DECLARE_GET_FIELD(t_EpochDerivativesEquations, dimension),
          DECLARE_SET_FIELD(t_EpochDerivativesEquations, initialJacobians),
          DECLARE_GET_FIELD(t_EpochDerivativesEquations, name),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EpochDerivativesEquations__methods_[] = {
          DECLARE_METHOD(t_EpochDerivativesEquations, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EpochDerivativesEquations, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EpochDerivativesEquations, combinedDerivatives, METH_O),
          DECLARE_METHOD(t_EpochDerivativesEquations, getDimension, METH_NOARGS),
          DECLARE_METHOD(t_EpochDerivativesEquations, getName, METH_NOARGS),
          DECLARE_METHOD(t_EpochDerivativesEquations, setInitialJacobians, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EpochDerivativesEquations)[] = {
          { Py_tp_methods, t_EpochDerivativesEquations__methods_ },
          { Py_tp_init, (void *) t_EpochDerivativesEquations_init_ },
          { Py_tp_getset, t_EpochDerivativesEquations__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EpochDerivativesEquations)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(EpochDerivativesEquations, t_EpochDerivativesEquations, EpochDerivativesEquations);

        void t_EpochDerivativesEquations::install(PyObject *module)
        {
          installType(&PY_TYPE(EpochDerivativesEquations), &PY_TYPE_DEF(EpochDerivativesEquations), module, "EpochDerivativesEquations", 0);
        }

        void t_EpochDerivativesEquations::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EpochDerivativesEquations), "class_", make_descriptor(EpochDerivativesEquations::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EpochDerivativesEquations), "wrapfn_", make_descriptor(t_EpochDerivativesEquations::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EpochDerivativesEquations), "boxfn_", make_descriptor(boxObject));
          env->getClass(EpochDerivativesEquations::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(EpochDerivativesEquations), "STATE_DIMENSION", make_descriptor(EpochDerivativesEquations::STATE_DIMENSION));
        }

        static PyObject *t_EpochDerivativesEquations_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EpochDerivativesEquations::initializeClass, 1)))
            return NULL;
          return t_EpochDerivativesEquations::wrap_Object(EpochDerivativesEquations(((t_EpochDerivativesEquations *) arg)->object.this$));
        }
        static PyObject *t_EpochDerivativesEquations_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EpochDerivativesEquations::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EpochDerivativesEquations_init_(t_EpochDerivativesEquations *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          ::org::orekit::propagation::numerical::NumericalPropagator a1((jobject) NULL);
          EpochDerivativesEquations object((jobject) NULL);

          if (!parseArgs(args, "sk", ::org::orekit::propagation::numerical::NumericalPropagator::initializeClass, &a0, &a1))
          {
            INT_CALL(object = EpochDerivativesEquations(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_EpochDerivativesEquations_combinedDerivatives(t_EpochDerivativesEquations *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::propagation::integration::CombinedDerivatives result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.combinedDerivatives(a0));
            return ::org::orekit::propagation::integration::t_CombinedDerivatives::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "combinedDerivatives", arg);
          return NULL;
        }

        static PyObject *t_EpochDerivativesEquations_getDimension(t_EpochDerivativesEquations *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDimension());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EpochDerivativesEquations_getName(t_EpochDerivativesEquations *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_EpochDerivativesEquations_setInitialJacobians(t_EpochDerivativesEquations *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.setInitialJacobians(a0));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k[[D[[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.setInitialJacobians(a0, a1, a2));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
            break;
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              JArray< JArray< jdouble > > a2((jobject) NULL);
              JArray< jdouble > a3((jobject) NULL);

              if (!parseArgs(args, "k[[D[[D[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1, &a2, &a3))
              {
                OBJ_CALL(self->object.setInitialJacobians(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setInitialJacobians", args);
          return NULL;
        }

        static PyObject *t_EpochDerivativesEquations_get__dimension(t_EpochDerivativesEquations *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDimension());
          return PyLong_FromLong((long) value);
        }

        static int t_EpochDerivativesEquations_set__initialJacobians(t_EpochDerivativesEquations *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              INT_CALL(self->object.setInitialJacobians(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "initialJacobians", arg);
          return -1;
        }

        static PyObject *t_EpochDerivativesEquations_get__name(t_EpochDerivativesEquations *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/TabulatedLofOffset.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "java/util/List.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/frames/LOF.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *TabulatedLofOffset::class$ = NULL;
      jmethodID *TabulatedLofOffset::mids$ = NULL;
      bool TabulatedLofOffset::live$ = false;

      jclass TabulatedLofOffset::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/TabulatedLofOffset");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_86d238ce985844ab] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)V");
          mids$[mid_init$_416ded54ccbb07fd] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/frames/LOF;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getAttitude_aab1c6ab68ffdcbb] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_a02177519e1b6a45] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getTable_d751c1a57012b438] = env->getMethodID(cls, "getTable", "()Ljava/util/List;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TabulatedLofOffset::TabulatedLofOffset(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1, const ::java::util::List & a2, jint a3, const ::org::orekit::utils::AngularDerivativesFilter & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_86d238ce985844ab, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

      TabulatedLofOffset::TabulatedLofOffset(const ::org::orekit::frames::Frame & a0, const ::org::orekit::frames::LOF & a1, const ::java::util::List & a2, jint a3, const ::org::orekit::utils::AngularDerivativesFilter & a4, const ::org::orekit::time::AbsoluteDate & a5, const ::org::orekit::time::AbsoluteDate & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_416ded54ccbb07fd, a0.this$, a1.this$, a2.this$, a3, a4.this$, a5.this$, a6.this$)) {}

      ::org::orekit::attitudes::FieldAttitude TabulatedLofOffset::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_aab1c6ab68ffdcbb], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude TabulatedLofOffset::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_a02177519e1b6a45], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::time::AbsoluteDate TabulatedLofOffset::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate TabulatedLofOffset::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_80e11148db499dda]));
      }

      ::java::util::List TabulatedLofOffset::getTable() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getTable_d751c1a57012b438]));
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
      static PyObject *t_TabulatedLofOffset_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TabulatedLofOffset_instance_(PyTypeObject *type, PyObject *arg);
      static int t_TabulatedLofOffset_init_(t_TabulatedLofOffset *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TabulatedLofOffset_getAttitude(t_TabulatedLofOffset *self, PyObject *args);
      static PyObject *t_TabulatedLofOffset_getMaxDate(t_TabulatedLofOffset *self);
      static PyObject *t_TabulatedLofOffset_getMinDate(t_TabulatedLofOffset *self);
      static PyObject *t_TabulatedLofOffset_getTable(t_TabulatedLofOffset *self);
      static PyObject *t_TabulatedLofOffset_get__maxDate(t_TabulatedLofOffset *self, void *data);
      static PyObject *t_TabulatedLofOffset_get__minDate(t_TabulatedLofOffset *self, void *data);
      static PyObject *t_TabulatedLofOffset_get__table(t_TabulatedLofOffset *self, void *data);
      static PyGetSetDef t_TabulatedLofOffset__fields_[] = {
        DECLARE_GET_FIELD(t_TabulatedLofOffset, maxDate),
        DECLARE_GET_FIELD(t_TabulatedLofOffset, minDate),
        DECLARE_GET_FIELD(t_TabulatedLofOffset, table),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TabulatedLofOffset__methods_[] = {
        DECLARE_METHOD(t_TabulatedLofOffset, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TabulatedLofOffset, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TabulatedLofOffset, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_TabulatedLofOffset, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_TabulatedLofOffset, getMinDate, METH_NOARGS),
        DECLARE_METHOD(t_TabulatedLofOffset, getTable, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TabulatedLofOffset)[] = {
        { Py_tp_methods, t_TabulatedLofOffset__methods_ },
        { Py_tp_init, (void *) t_TabulatedLofOffset_init_ },
        { Py_tp_getset, t_TabulatedLofOffset__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TabulatedLofOffset)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TabulatedLofOffset, t_TabulatedLofOffset, TabulatedLofOffset);

      void t_TabulatedLofOffset::install(PyObject *module)
      {
        installType(&PY_TYPE(TabulatedLofOffset), &PY_TYPE_DEF(TabulatedLofOffset), module, "TabulatedLofOffset", 0);
      }

      void t_TabulatedLofOffset::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedLofOffset), "class_", make_descriptor(TabulatedLofOffset::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedLofOffset), "wrapfn_", make_descriptor(t_TabulatedLofOffset::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TabulatedLofOffset), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TabulatedLofOffset_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TabulatedLofOffset::initializeClass, 1)))
          return NULL;
        return t_TabulatedLofOffset::wrap_Object(TabulatedLofOffset(((t_TabulatedLofOffset *) arg)->object.this$));
      }
      static PyObject *t_TabulatedLofOffset_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TabulatedLofOffset::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_TabulatedLofOffset_init_(t_TabulatedLofOffset *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 5:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            jint a3;
            ::org::orekit::utils::AngularDerivativesFilter a4((jobject) NULL);
            PyTypeObject **p4;
            TabulatedLofOffset object((jobject) NULL);

            if (!parseArgs(args, "kkKIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
            {
              INT_CALL(object = TabulatedLofOffset(a0, a1, a2, a3, a4));
              self->object = object;
              break;
            }
          }
          goto err;
         case 7:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            ::org::orekit::frames::LOF a1((jobject) NULL);
            ::java::util::List a2((jobject) NULL);
            PyTypeObject **p2;
            jint a3;
            ::org::orekit::utils::AngularDerivativesFilter a4((jobject) NULL);
            PyTypeObject **p4;
            ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a6((jobject) NULL);
            TabulatedLofOffset object((jobject) NULL);

            if (!parseArgs(args, "kkKIKkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::frames::LOF::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_, &a3, &a4, &p4, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a5, &a6))
            {
              INT_CALL(object = TabulatedLofOffset(a0, a1, a2, a3, a4, a5, a6));
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

      static PyObject *t_TabulatedLofOffset_getAttitude(t_TabulatedLofOffset *self, PyObject *args)
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

      static PyObject *t_TabulatedLofOffset_getMaxDate(t_TabulatedLofOffset *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TabulatedLofOffset_getMinDate(t_TabulatedLofOffset *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TabulatedLofOffset_getTable(t_TabulatedLofOffset *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getTable());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_TabulatedLofOffset_get__maxDate(t_TabulatedLofOffset *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TabulatedLofOffset_get__minDate(t_TabulatedLofOffset *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TabulatedLofOffset_get__table(t_TabulatedLofOffset *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getTable());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeStamped.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeStamped::class$ = NULL;
      jmethodID *PythonTimeStamped::mids$ = NULL;
      bool PythonTimeStamped::live$ = false;

      jclass PythonTimeStamped::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeStamped");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeStamped::PythonTimeStamped() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonTimeStamped::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonTimeStamped::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonTimeStamped::pythonExtension(jlong a0) const
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
    namespace time {
      static PyObject *t_PythonTimeStamped_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeStamped_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeStamped_init_(t_PythonTimeStamped *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeStamped_finalize(t_PythonTimeStamped *self);
      static PyObject *t_PythonTimeStamped_pythonExtension(t_PythonTimeStamped *self, PyObject *args);
      static jobject JNICALL t_PythonTimeStamped_getDate0(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonTimeStamped_pythonDecRef1(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonTimeStamped_get__self(t_PythonTimeStamped *self, void *data);
      static PyGetSetDef t_PythonTimeStamped__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeStamped, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeStamped__methods_[] = {
        DECLARE_METHOD(t_PythonTimeStamped, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStamped, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeStamped, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeStamped, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeStamped)[] = {
        { Py_tp_methods, t_PythonTimeStamped__methods_ },
        { Py_tp_init, (void *) t_PythonTimeStamped_init_ },
        { Py_tp_getset, t_PythonTimeStamped__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeStamped)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeStamped, t_PythonTimeStamped, PythonTimeStamped);

      void t_PythonTimeStamped::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeStamped), &PY_TYPE_DEF(PythonTimeStamped), module, "PythonTimeStamped", 1);
      }

      void t_PythonTimeStamped::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStamped), "class_", make_descriptor(PythonTimeStamped::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStamped), "wrapfn_", make_descriptor(t_PythonTimeStamped::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeStamped), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeStamped::initializeClass);
        JNINativeMethod methods[] = {
          { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonTimeStamped_getDate0 },
          { "pythonDecRef", "()V", (void *) t_PythonTimeStamped_pythonDecRef1 },
        };
        env->registerNatives(cls, methods, 2);
      }

      static PyObject *t_PythonTimeStamped_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeStamped::initializeClass, 1)))
          return NULL;
        return t_PythonTimeStamped::wrap_Object(PythonTimeStamped(((t_PythonTimeStamped *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeStamped_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeStamped::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeStamped_init_(t_PythonTimeStamped *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeStamped object((jobject) NULL);

        INT_CALL(object = PythonTimeStamped());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeStamped_finalize(t_PythonTimeStamped *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeStamped_pythonExtension(t_PythonTimeStamped *self, PyObject *args)
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

      static jobject JNICALL t_PythonTimeStamped_getDate0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStamped::mids$[PythonTimeStamped::mid_pythonExtension_42c72b98e3c2e08a]);
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

      static void JNICALL t_PythonTimeStamped_pythonDecRef1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeStamped::mids$[PythonTimeStamped::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeStamped::mids$[PythonTimeStamped::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonTimeStamped_get__self(t_PythonTimeStamped *self, void *data)
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
#include "org/orekit/estimation/measurements/modifiers/ShapiroInterSatellitePhaseModifier.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroInterSatellitePhaseModifier::class$ = NULL;
          jmethodID *ShapiroInterSatellitePhaseModifier::mids$ = NULL;
          bool ShapiroInterSatellitePhaseModifier::live$ = false;

          jclass ShapiroInterSatellitePhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroInterSatellitePhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_1ad26e8c8c0cd65b] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_ecce216dce506020] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroInterSatellitePhaseModifier::ShapiroInterSatellitePhaseModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_1ad26e8c8c0cd65b, a0)) {}

          ::java::util::List ShapiroInterSatellitePhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          void ShapiroInterSatellitePhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_ShapiroInterSatellitePhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroInterSatellitePhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroInterSatellitePhaseModifier_init_(t_ShapiroInterSatellitePhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroInterSatellitePhaseModifier_getParametersDrivers(t_ShapiroInterSatellitePhaseModifier *self);
          static PyObject *t_ShapiroInterSatellitePhaseModifier_modifyWithoutDerivatives(t_ShapiroInterSatellitePhaseModifier *self, PyObject *arg);
          static PyObject *t_ShapiroInterSatellitePhaseModifier_get__parametersDrivers(t_ShapiroInterSatellitePhaseModifier *self, void *data);
          static PyGetSetDef t_ShapiroInterSatellitePhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroInterSatellitePhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroInterSatellitePhaseModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroInterSatellitePhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroInterSatellitePhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroInterSatellitePhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroInterSatellitePhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroInterSatellitePhaseModifier)[] = {
            { Py_tp_methods, t_ShapiroInterSatellitePhaseModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroInterSatellitePhaseModifier_init_ },
            { Py_tp_getset, t_ShapiroInterSatellitePhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroInterSatellitePhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroInterSatellitePhaseModifier, t_ShapiroInterSatellitePhaseModifier, ShapiroInterSatellitePhaseModifier);

          void t_ShapiroInterSatellitePhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroInterSatellitePhaseModifier), &PY_TYPE_DEF(ShapiroInterSatellitePhaseModifier), module, "ShapiroInterSatellitePhaseModifier", 0);
          }

          void t_ShapiroInterSatellitePhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatellitePhaseModifier), "class_", make_descriptor(ShapiroInterSatellitePhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatellitePhaseModifier), "wrapfn_", make_descriptor(t_ShapiroInterSatellitePhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroInterSatellitePhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroInterSatellitePhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroInterSatellitePhaseModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroInterSatellitePhaseModifier::wrap_Object(ShapiroInterSatellitePhaseModifier(((t_ShapiroInterSatellitePhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroInterSatellitePhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroInterSatellitePhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroInterSatellitePhaseModifier_init_(t_ShapiroInterSatellitePhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroInterSatellitePhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroInterSatellitePhaseModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroInterSatellitePhaseModifier_getParametersDrivers(t_ShapiroInterSatellitePhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroInterSatellitePhaseModifier_modifyWithoutDerivatives(t_ShapiroInterSatellitePhaseModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroInterSatellitePhaseModifier_get__parametersDrivers(t_ShapiroInterSatellitePhaseModifier *self, void *data)
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
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *Action::class$ = NULL;
        jmethodID *Action::mids$ = NULL;
        bool Action::live$ = false;
        Action *Action::CONTINUE = NULL;
        Action *Action::RESET_DERIVATIVES = NULL;
        Action *Action::RESET_EVENTS = NULL;
        Action *Action::RESET_STATE = NULL;
        Action *Action::STOP = NULL;

        jclass Action::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/Action");

            mids$ = new jmethodID[max_mid];
            mids$[mid_valueOf_e63419067b97f756] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/events/Action;");
            mids$[mid_values_3db51a9d28ac976e] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/events/Action;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            CONTINUE = new Action(env->getStaticObjectField(cls, "CONTINUE", "Lorg/hipparchus/ode/events/Action;"));
            RESET_DERIVATIVES = new Action(env->getStaticObjectField(cls, "RESET_DERIVATIVES", "Lorg/hipparchus/ode/events/Action;"));
            RESET_EVENTS = new Action(env->getStaticObjectField(cls, "RESET_EVENTS", "Lorg/hipparchus/ode/events/Action;"));
            RESET_STATE = new Action(env->getStaticObjectField(cls, "RESET_STATE", "Lorg/hipparchus/ode/events/Action;"));
            STOP = new Action(env->getStaticObjectField(cls, "STOP", "Lorg/hipparchus/ode/events/Action;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Action Action::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return Action(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e63419067b97f756], a0.this$));
        }

        JArray< Action > Action::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< Action >(env->callStaticObjectMethod(cls, mids$[mid_values_3db51a9d28ac976e]));
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
        static PyObject *t_Action_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Action_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Action_of_(t_Action *self, PyObject *args);
        static PyObject *t_Action_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_Action_values(PyTypeObject *type);
        static PyObject *t_Action_get__parameters_(t_Action *self, void *data);
        static PyGetSetDef t_Action__fields_[] = {
          DECLARE_GET_FIELD(t_Action, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Action__methods_[] = {
          DECLARE_METHOD(t_Action, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Action, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Action, of_, METH_VARARGS),
          DECLARE_METHOD(t_Action, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_Action, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Action)[] = {
          { Py_tp_methods, t_Action__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Action__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Action)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(Action, t_Action, Action);
        PyObject *t_Action::wrap_Object(const Action& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Action::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Action *self = (t_Action *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Action::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Action::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Action *self = (t_Action *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Action::install(PyObject *module)
        {
          installType(&PY_TYPE(Action), &PY_TYPE_DEF(Action), module, "Action", 0);
        }

        void t_Action::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "class_", make_descriptor(Action::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "wrapfn_", make_descriptor(t_Action::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "boxfn_", make_descriptor(boxObject));
          env->getClass(Action::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "CONTINUE", make_descriptor(t_Action::wrap_Object(*Action::CONTINUE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "RESET_DERIVATIVES", make_descriptor(t_Action::wrap_Object(*Action::RESET_DERIVATIVES)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "RESET_EVENTS", make_descriptor(t_Action::wrap_Object(*Action::RESET_EVENTS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "RESET_STATE", make_descriptor(t_Action::wrap_Object(*Action::RESET_STATE)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Action), "STOP", make_descriptor(t_Action::wrap_Object(*Action::STOP)));
        }

        static PyObject *t_Action_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Action::initializeClass, 1)))
            return NULL;
          return t_Action::wrap_Object(Action(((t_Action *) arg)->object.this$));
        }
        static PyObject *t_Action_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Action::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Action_of_(t_Action *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Action_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          Action result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::events::Action::valueOf(a0));
            return t_Action::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_Action_values(PyTypeObject *type)
        {
          JArray< Action > result((jobject) NULL);
          OBJ_CALL(result = ::org::hipparchus::ode::events::Action::values());
          return JArray<jobject>(result.this$).wrap(t_Action::wrap_jobject);
        }
        static PyObject *t_Action_get__parameters_(t_Action *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonFieldTimeShiftable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/FieldTimeShiftable.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonFieldTimeShiftable::class$ = NULL;
      jmethodID *PythonFieldTimeShiftable::mids$ = NULL;
      bool PythonFieldTimeShiftable::live$ = false;

      jclass PythonFieldTimeShiftable::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonFieldTimeShiftable");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_shiftedBy_7a32bbb2cfda4cc5] = env->getMethodID(cls, "shiftedBy", "(D)Lorg/orekit/time/FieldTimeShiftable;");
          mids$[mid_shiftedBy_af95a6985c82d852] = env->getMethodID(cls, "shiftedBy", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldTimeShiftable;");
          mids$[mid_shiftedBy_KK_af95a6985c82d852] = env->getMethodID(cls, "shiftedBy_KK", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldTimeShiftable;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldTimeShiftable::PythonFieldTimeShiftable() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonFieldTimeShiftable::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonFieldTimeShiftable::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonFieldTimeShiftable::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
      }

      ::org::orekit::time::FieldTimeShiftable PythonFieldTimeShiftable::shiftedBy(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return ::org::orekit::time::FieldTimeShiftable(env->callObjectMethod(this$, mids$[mid_shiftedBy_af95a6985c82d852], a0.this$));
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
      static PyObject *t_PythonFieldTimeShiftable_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeShiftable_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeShiftable_of_(t_PythonFieldTimeShiftable *self, PyObject *args);
      static int t_PythonFieldTimeShiftable_init_(t_PythonFieldTimeShiftable *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldTimeShiftable_finalize(t_PythonFieldTimeShiftable *self);
      static PyObject *t_PythonFieldTimeShiftable_pythonExtension(t_PythonFieldTimeShiftable *self, PyObject *args);
      static PyObject *t_PythonFieldTimeShiftable_shiftedBy(t_PythonFieldTimeShiftable *self, PyObject *arg);
      static void JNICALL t_PythonFieldTimeShiftable_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeShiftable_shiftedBy1(JNIEnv *jenv, jobject jobj, jdouble a0);
      static jobject JNICALL t_PythonFieldTimeShiftable_shiftedBy_KK2(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonFieldTimeShiftable_get__self(t_PythonFieldTimeShiftable *self, void *data);
      static PyObject *t_PythonFieldTimeShiftable_get__parameters_(t_PythonFieldTimeShiftable *self, void *data);
      static PyGetSetDef t_PythonFieldTimeShiftable__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldTimeShiftable, self),
        DECLARE_GET_FIELD(t_PythonFieldTimeShiftable, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldTimeShiftable__methods_[] = {
        DECLARE_METHOD(t_PythonFieldTimeShiftable, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeShiftable, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeShiftable, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeShiftable, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldTimeShiftable, pythonExtension, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeShiftable, shiftedBy, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeShiftable)[] = {
        { Py_tp_methods, t_PythonFieldTimeShiftable__methods_ },
        { Py_tp_init, (void *) t_PythonFieldTimeShiftable_init_ },
        { Py_tp_getset, t_PythonFieldTimeShiftable__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldTimeShiftable)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldTimeShiftable, t_PythonFieldTimeShiftable, PythonFieldTimeShiftable);
      PyObject *t_PythonFieldTimeShiftable::wrap_Object(const PythonFieldTimeShiftable& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeShiftable::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeShiftable *self = (t_PythonFieldTimeShiftable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PythonFieldTimeShiftable::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeShiftable::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeShiftable *self = (t_PythonFieldTimeShiftable *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PythonFieldTimeShiftable::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldTimeShiftable), &PY_TYPE_DEF(PythonFieldTimeShiftable), module, "PythonFieldTimeShiftable", 1);
      }

      void t_PythonFieldTimeShiftable::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeShiftable), "class_", make_descriptor(PythonFieldTimeShiftable::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeShiftable), "wrapfn_", make_descriptor(t_PythonFieldTimeShiftable::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeShiftable), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldTimeShiftable::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonFieldTimeShiftable_pythonDecRef0 },
          { "shiftedBy", "(D)Lorg/orekit/time/FieldTimeShiftable;", (void *) t_PythonFieldTimeShiftable_shiftedBy1 },
          { "shiftedBy_KK", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/time/FieldTimeShiftable;", (void *) t_PythonFieldTimeShiftable_shiftedBy_KK2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonFieldTimeShiftable_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldTimeShiftable::initializeClass, 1)))
          return NULL;
        return t_PythonFieldTimeShiftable::wrap_Object(PythonFieldTimeShiftable(((t_PythonFieldTimeShiftable *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldTimeShiftable_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldTimeShiftable::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldTimeShiftable_of_(t_PythonFieldTimeShiftable *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldTimeShiftable_init_(t_PythonFieldTimeShiftable *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldTimeShiftable object((jobject) NULL);

        INT_CALL(object = PythonFieldTimeShiftable());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldTimeShiftable_finalize(t_PythonFieldTimeShiftable *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldTimeShiftable_pythonExtension(t_PythonFieldTimeShiftable *self, PyObject *args)
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

      static PyObject *t_PythonFieldTimeShiftable_shiftedBy(t_PythonFieldTimeShiftable *self, PyObject *arg)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::orekit::time::FieldTimeShiftable result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.shiftedBy(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeShiftable::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "shiftedBy", arg);
        return NULL;
      }

      static void JNICALL t_PythonFieldTimeShiftable_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeShiftable::mids$[PythonFieldTimeShiftable::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldTimeShiftable::mids$[PythonFieldTimeShiftable::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jobject JNICALL t_PythonFieldTimeShiftable_shiftedBy1(JNIEnv *jenv, jobject jobj, jdouble a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeShiftable::mids$[PythonFieldTimeShiftable::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeShiftable value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "shiftedBy", "d", (double) a0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeShiftable::initializeClass, &value))
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

      static jobject JNICALL t_PythonFieldTimeShiftable_shiftedBy_KK2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeShiftable::mids$[PythonFieldTimeShiftable::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeShiftable value((jobject) NULL);
        PyObject *o0 = ::org::hipparchus::t_CalculusFieldElement::wrap_Object(::org::hipparchus::CalculusFieldElement(a0));
        PyObject *result = PyObject_CallMethod(obj, "shiftedBy_KK", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeShiftable::initializeClass, &value))
        {
          throwTypeError("shiftedBy_KK", result);
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

      static PyObject *t_PythonFieldTimeShiftable_get__self(t_PythonFieldTimeShiftable *self, void *data)
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
      static PyObject *t_PythonFieldTimeShiftable_get__parameters_(t_PythonFieldTimeShiftable *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {
            namespace omm {

              ::java::lang::Class *OmmMetadata::class$ = NULL;
              jmethodID *OmmMetadata::mids$ = NULL;
              bool OmmMetadata::live$ = false;
              ::java::lang::String *OmmMetadata::DSST_THEORY = NULL;
              ::java::lang::String *OmmMetadata::SGP4_XP_THEORY = NULL;
              ::java::lang::String *OmmMetadata::SGP_SGP4_THEORY = NULL;

              jclass OmmMetadata::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/omm/OmmMetadata");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getMeanElementTheory_d2c8eb4129821f0e] = env->getMethodID(cls, "getMeanElementTheory", "()Ljava/lang/String;");
                  mids$[mid_setMeanElementTheory_105e1eadb709d9ac] = env->getMethodID(cls, "setMeanElementTheory", "(Ljava/lang/String;)V");
                  mids$[mid_theoryIsSgpSdp_eee3de00fe971136] = env->getMethodID(cls, "theoryIsSgpSdp", "()Z");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DSST_THEORY = new ::java::lang::String(env->getStaticObjectField(cls, "DSST_THEORY", "Ljava/lang/String;"));
                  SGP4_XP_THEORY = new ::java::lang::String(env->getStaticObjectField(cls, "SGP4_XP_THEORY", "Ljava/lang/String;"));
                  SGP_SGP4_THEORY = new ::java::lang::String(env->getStaticObjectField(cls, "SGP_SGP4_THEORY", "Ljava/lang/String;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              OmmMetadata::OmmMetadata() : ::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              ::java::lang::String OmmMetadata::getMeanElementTheory() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getMeanElementTheory_d2c8eb4129821f0e]));
              }

              void OmmMetadata::setMeanElementTheory(const ::java::lang::String & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setMeanElementTheory_105e1eadb709d9ac], a0.this$);
              }

              jboolean OmmMetadata::theoryIsSgpSdp() const
              {
                return env->callBooleanMethod(this$, mids$[mid_theoryIsSgpSdp_eee3de00fe971136]);
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
            namespace omm {
              static PyObject *t_OmmMetadata_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_OmmMetadata_instance_(PyTypeObject *type, PyObject *arg);
              static int t_OmmMetadata_init_(t_OmmMetadata *self, PyObject *args, PyObject *kwds);
              static PyObject *t_OmmMetadata_getMeanElementTheory(t_OmmMetadata *self);
              static PyObject *t_OmmMetadata_setMeanElementTheory(t_OmmMetadata *self, PyObject *arg);
              static PyObject *t_OmmMetadata_theoryIsSgpSdp(t_OmmMetadata *self);
              static PyObject *t_OmmMetadata_get__meanElementTheory(t_OmmMetadata *self, void *data);
              static int t_OmmMetadata_set__meanElementTheory(t_OmmMetadata *self, PyObject *arg, void *data);
              static PyGetSetDef t_OmmMetadata__fields_[] = {
                DECLARE_GETSET_FIELD(t_OmmMetadata, meanElementTheory),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_OmmMetadata__methods_[] = {
                DECLARE_METHOD(t_OmmMetadata, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadata, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_OmmMetadata, getMeanElementTheory, METH_NOARGS),
                DECLARE_METHOD(t_OmmMetadata, setMeanElementTheory, METH_O),
                DECLARE_METHOD(t_OmmMetadata, theoryIsSgpSdp, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(OmmMetadata)[] = {
                { Py_tp_methods, t_OmmMetadata__methods_ },
                { Py_tp_init, (void *) t_OmmMetadata_init_ },
                { Py_tp_getset, t_OmmMetadata__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(OmmMetadata)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::ndm::odm::OdmCommonMetadata),
                NULL
              };

              DEFINE_TYPE(OmmMetadata, t_OmmMetadata, OmmMetadata);

              void t_OmmMetadata::install(PyObject *module)
              {
                installType(&PY_TYPE(OmmMetadata), &PY_TYPE_DEF(OmmMetadata), module, "OmmMetadata", 0);
              }

              void t_OmmMetadata::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "class_", make_descriptor(OmmMetadata::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "wrapfn_", make_descriptor(t_OmmMetadata::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "boxfn_", make_descriptor(boxObject));
                env->getClass(OmmMetadata::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "DSST_THEORY", make_descriptor(j2p(*OmmMetadata::DSST_THEORY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "SGP4_XP_THEORY", make_descriptor(j2p(*OmmMetadata::SGP4_XP_THEORY)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(OmmMetadata), "SGP_SGP4_THEORY", make_descriptor(j2p(*OmmMetadata::SGP_SGP4_THEORY)));
              }

              static PyObject *t_OmmMetadata_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, OmmMetadata::initializeClass, 1)))
                  return NULL;
                return t_OmmMetadata::wrap_Object(OmmMetadata(((t_OmmMetadata *) arg)->object.this$));
              }
              static PyObject *t_OmmMetadata_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, OmmMetadata::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_OmmMetadata_init_(t_OmmMetadata *self, PyObject *args, PyObject *kwds)
              {
                OmmMetadata object((jobject) NULL);

                INT_CALL(object = OmmMetadata());
                self->object = object;

                return 0;
              }

              static PyObject *t_OmmMetadata_getMeanElementTheory(t_OmmMetadata *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getMeanElementTheory());
                return j2p(result);
              }

              static PyObject *t_OmmMetadata_setMeanElementTheory(t_OmmMetadata *self, PyObject *arg)
              {
                ::java::lang::String a0((jobject) NULL);

                if (!parseArg(arg, "s", &a0))
                {
                  OBJ_CALL(self->object.setMeanElementTheory(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setMeanElementTheory", arg);
                return NULL;
              }

              static PyObject *t_OmmMetadata_theoryIsSgpSdp(t_OmmMetadata *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.theoryIsSgpSdp());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_OmmMetadata_get__meanElementTheory(t_OmmMetadata *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getMeanElementTheory());
                return j2p(value);
              }
              static int t_OmmMetadata_set__meanElementTheory(t_OmmMetadata *self, PyObject *arg, void *data)
              {
                {
                  ::java::lang::String value((jobject) NULL);
                  if (!parseArg(arg, "s", &value))
                  {
                    INT_CALL(self->object.setMeanElementTheory(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "meanElementTheory", arg);
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
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovarianceWriter.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *RTNCovarianceWriter::class$ = NULL;
            jmethodID *RTNCovarianceWriter::mids$ = NULL;
            bool RTNCovarianceWriter::live$ = false;

            jclass RTNCovarianceWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/RTNCovarianceWriter");

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
            static PyObject *t_RTNCovarianceWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_RTNCovarianceWriter_instance_(PyTypeObject *type, PyObject *arg);

            static PyMethodDef t_RTNCovarianceWriter__methods_[] = {
              DECLARE_METHOD(t_RTNCovarianceWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_RTNCovarianceWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(RTNCovarianceWriter)[] = {
              { Py_tp_methods, t_RTNCovarianceWriter__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(RTNCovarianceWriter)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::AbstractWriter),
              NULL
            };

            DEFINE_TYPE(RTNCovarianceWriter, t_RTNCovarianceWriter, RTNCovarianceWriter);

            void t_RTNCovarianceWriter::install(PyObject *module)
            {
              installType(&PY_TYPE(RTNCovarianceWriter), &PY_TYPE_DEF(RTNCovarianceWriter), module, "RTNCovarianceWriter", 0);
            }

            void t_RTNCovarianceWriter::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceWriter), "class_", make_descriptor(RTNCovarianceWriter::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceWriter), "wrapfn_", make_descriptor(t_RTNCovarianceWriter::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(RTNCovarianceWriter), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_RTNCovarianceWriter_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, RTNCovarianceWriter::initializeClass, 1)))
                return NULL;
              return t_RTNCovarianceWriter::wrap_Object(RTNCovarianceWriter(((t_RTNCovarianceWriter *) arg)->object.this$));
            }
            static PyObject *t_RTNCovarianceWriter_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, RTNCovarianceWriter::initializeClass, 0))
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
#include "org/orekit/files/ccsds/ndm/odm/opm/Maneuver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "java/lang/Class.h"
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
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_completed_eee3de00fe971136] = env->getMethodID(cls, "completed", "()Z");
                  mids$[mid_getDV_032312bdeb3f2f93] = env->getMethodID(cls, "getDV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
                  mids$[mid_getDeltaMass_9981f74b2d109da6] = env->getMethodID(cls, "getDeltaMass", "()D");
                  mids$[mid_getDuration_9981f74b2d109da6] = env->getMethodID(cls, "getDuration", "()D");
                  mids$[mid_getEpochIgnition_80e11148db499dda] = env->getMethodID(cls, "getEpochIgnition", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getReferenceFrame_0fc1562b68204151] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                  mids$[mid_setDV_4320462275d66e78] = env->getMethodID(cls, "setDV", "(ID)V");
                  mids$[mid_setDeltaMass_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDeltaMass", "(D)V");
                  mids$[mid_setDuration_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setDuration", "(D)V");
                  mids$[mid_setEpochIgnition_8497861b879c83f7] = env->getMethodID(cls, "setEpochIgnition", "(Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_setReferenceFrame_2c8b859a72c0094e] = env->getMethodID(cls, "setReferenceFrame", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                  mids$[mid_validate_1ad26e8c8c0cd65b] = env->getMethodID(cls, "validate", "(D)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Maneuver::Maneuver() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jboolean Maneuver::completed() const
              {
                return env->callBooleanMethod(this$, mids$[mid_completed_eee3de00fe971136]);
              }

              ::org::hipparchus::geometry::euclidean::threed::Vector3D Maneuver::getDV() const
              {
                return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDV_032312bdeb3f2f93]));
              }

              jdouble Maneuver::getDeltaMass() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDeltaMass_9981f74b2d109da6]);
              }

              jdouble Maneuver::getDuration() const
              {
                return env->callDoubleMethod(this$, mids$[mid_getDuration_9981f74b2d109da6]);
              }

              ::org::orekit::time::AbsoluteDate Maneuver::getEpochIgnition() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpochIgnition_80e11148db499dda]));
              }

              ::org::orekit::files::ccsds::definitions::FrameFacade Maneuver::getReferenceFrame() const
              {
                return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_0fc1562b68204151]));
              }

              void Maneuver::setDV(jint a0, jdouble a1) const
              {
                env->callVoidMethod(this$, mids$[mid_setDV_4320462275d66e78], a0, a1);
              }

              void Maneuver::setDeltaMass(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDeltaMass_1ad26e8c8c0cd65b], a0);
              }

              void Maneuver::setDuration(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setDuration_1ad26e8c8c0cd65b], a0);
              }

              void Maneuver::setEpochIgnition(const ::org::orekit::time::AbsoluteDate & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setEpochIgnition_8497861b879c83f7], a0.this$);
              }

              void Maneuver::setReferenceFrame(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setReferenceFrame_2c8b859a72c0094e], a0.this$);
              }

              void Maneuver::validate(jdouble a0) const
              {
                env->callVoidMethod(this$, mids$[mid_validate_1ad26e8c8c0cd65b], a0);
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
#include "org/orekit/time/UT1Scale.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/UTCScale.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/frames/EOPHistory.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *UT1Scale::class$ = NULL;
      jmethodID *UT1Scale::mids$ = NULL;
      bool UT1Scale::live$ = false;

      jclass UT1Scale::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/UT1Scale");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEOPHistory_867110817f590882] = env->getMethodID(cls, "getEOPHistory", "()Lorg/orekit/frames/EOPHistory;");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getUTCScale_bdbc31f45ed399a7] = env->getMethodID(cls, "getUTCScale", "()Lorg/orekit/time/UTCScale;");
          mids$[mid_offsetFromTAI_209f08246d708042] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_cf010978f3c5a913] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::EOPHistory UT1Scale::getEOPHistory() const
      {
        return ::org::orekit::frames::EOPHistory(env->callObjectMethod(this$, mids$[mid_getEOPHistory_867110817f590882]));
      }

      ::java::lang::String UT1Scale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      ::org::orekit::time::UTCScale UT1Scale::getUTCScale() const
      {
        return ::org::orekit::time::UTCScale(env->callObjectMethod(this$, mids$[mid_getUTCScale_bdbc31f45ed399a7]));
      }

      jdouble UT1Scale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement UT1Scale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_cf010978f3c5a913], a0.this$));
      }

      ::java::lang::String UT1Scale::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
      static PyObject *t_UT1Scale_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UT1Scale_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UT1Scale_getEOPHistory(t_UT1Scale *self);
      static PyObject *t_UT1Scale_getName(t_UT1Scale *self);
      static PyObject *t_UT1Scale_getUTCScale(t_UT1Scale *self);
      static PyObject *t_UT1Scale_offsetFromTAI(t_UT1Scale *self, PyObject *args);
      static PyObject *t_UT1Scale_toString(t_UT1Scale *self, PyObject *args);
      static PyObject *t_UT1Scale_get__eOPHistory(t_UT1Scale *self, void *data);
      static PyObject *t_UT1Scale_get__name(t_UT1Scale *self, void *data);
      static PyObject *t_UT1Scale_get__uTCScale(t_UT1Scale *self, void *data);
      static PyGetSetDef t_UT1Scale__fields_[] = {
        DECLARE_GET_FIELD(t_UT1Scale, eOPHistory),
        DECLARE_GET_FIELD(t_UT1Scale, name),
        DECLARE_GET_FIELD(t_UT1Scale, uTCScale),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_UT1Scale__methods_[] = {
        DECLARE_METHOD(t_UT1Scale, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UT1Scale, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UT1Scale, getEOPHistory, METH_NOARGS),
        DECLARE_METHOD(t_UT1Scale, getName, METH_NOARGS),
        DECLARE_METHOD(t_UT1Scale, getUTCScale, METH_NOARGS),
        DECLARE_METHOD(t_UT1Scale, offsetFromTAI, METH_VARARGS),
        DECLARE_METHOD(t_UT1Scale, toString, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UT1Scale)[] = {
        { Py_tp_methods, t_UT1Scale__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_UT1Scale__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UT1Scale)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UT1Scale, t_UT1Scale, UT1Scale);

      void t_UT1Scale::install(PyObject *module)
      {
        installType(&PY_TYPE(UT1Scale), &PY_TYPE_DEF(UT1Scale), module, "UT1Scale", 0);
      }

      void t_UT1Scale::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UT1Scale), "class_", make_descriptor(UT1Scale::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UT1Scale), "wrapfn_", make_descriptor(t_UT1Scale::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UT1Scale), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UT1Scale_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UT1Scale::initializeClass, 1)))
          return NULL;
        return t_UT1Scale::wrap_Object(UT1Scale(((t_UT1Scale *) arg)->object.this$));
      }
      static PyObject *t_UT1Scale_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UT1Scale::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UT1Scale_getEOPHistory(t_UT1Scale *self)
      {
        ::org::orekit::frames::EOPHistory result((jobject) NULL);
        OBJ_CALL(result = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(result);
      }

      static PyObject *t_UT1Scale_getName(t_UT1Scale *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_UT1Scale_getUTCScale(t_UT1Scale *self)
      {
        ::org::orekit::time::UTCScale result((jobject) NULL);
        OBJ_CALL(result = self->object.getUTCScale());
        return ::org::orekit::time::t_UTCScale::wrap_Object(result);
      }

      static PyObject *t_UT1Scale_offsetFromTAI(t_UT1Scale *self, PyObject *args)
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

      static PyObject *t_UT1Scale_toString(t_UT1Scale *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(UT1Scale), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_UT1Scale_get__eOPHistory(t_UT1Scale *self, void *data)
      {
        ::org::orekit::frames::EOPHistory value((jobject) NULL);
        OBJ_CALL(value = self->object.getEOPHistory());
        return ::org::orekit::frames::t_EOPHistory::wrap_Object(value);
      }

      static PyObject *t_UT1Scale_get__name(t_UT1Scale *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_UT1Scale_get__uTCScale(t_UT1Scale *self, void *data)
      {
        ::org::orekit::time::UTCScale value((jobject) NULL);
        OBJ_CALL(value = self->object.getUTCScale());
        return ::org::orekit::time::t_UTCScale::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/api/RuggedBuilder.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/rugged/refraction/AtmosphericRefraction.h"
#include "org/orekit/rugged/linesensor/LineSensor.h"
#include "java/io/InputStream.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/api/BodyRotatingFrameId.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/rugged/api/EllipsoidId.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/rugged/api/RuggedBuilder.h"
#include "java/lang/String.h"
#include "java/util/List.h"
#include "java/io/OutputStream.h"
#include "org/orekit/utils/AngularDerivativesFilter.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/rugged/api/InertialFrameId.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace api {

        ::java::lang::Class *RuggedBuilder::class$ = NULL;
        jmethodID *RuggedBuilder::mids$ = NULL;
        bool RuggedBuilder::live$ = false;

        jclass RuggedBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/api/RuggedBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_addLineSensor_509fd4e7a758576e] = env->getMethodID(cls, "addLineSensor", "(Lorg/orekit/rugged/linesensor/LineSensor;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_build_081a982fcf11ceb9] = env->getMethodID(cls, "build", "()Lorg/orekit/rugged/api/Rugged;");
            mids$[mid_clearLineSensors_b20cf89d3faf836e] = env->getMethodID(cls, "clearLineSensors", "()Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_getAFilter_410860c8cd87dc25] = env->getMethodID(cls, "getAFilter", "()Lorg/orekit/utils/AngularDerivativesFilter;");
            mids$[mid_getAInterpolationNumber_d6ab429752e7c267] = env->getMethodID(cls, "getAInterpolationNumber", "()I");
            mids$[mid_getAberrationOfLightCorrection_eee3de00fe971136] = env->getMethodID(cls, "getAberrationOfLightCorrection", "()Z");
            mids$[mid_getAlgorithm_65c2eab2e30f9d2d] = env->getMethodID(cls, "getAlgorithm", "()Lorg/orekit/rugged/api/AlgorithmId;");
            mids$[mid_getConstantElevation_9981f74b2d109da6] = env->getMethodID(cls, "getConstantElevation", "()D");
            mids$[mid_getEllipsoid_bac68fc0dce2fb24] = env->getMethodID(cls, "getEllipsoid", "()Lorg/orekit/rugged/utils/ExtendedEllipsoid;");
            mids$[mid_getInertialFrame_cb151471db4570f0] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getLightTimeCorrection_eee3de00fe971136] = env->getMethodID(cls, "getLightTimeCorrection", "()Z");
            mids$[mid_getLineSensors_d751c1a57012b438] = env->getMethodID(cls, "getLineSensors", "()Ljava/util/List;");
            mids$[mid_getMaxCachedTiles_d6ab429752e7c267] = env->getMethodID(cls, "getMaxCachedTiles", "()I");
            mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getOvershootTolerance_9981f74b2d109da6] = env->getMethodID(cls, "getOvershootTolerance", "()D");
            mids$[mid_getPVFilter_b9dfc27d8c56b5de] = env->getMethodID(cls, "getPVFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getPVInterpolationNumber_d6ab429752e7c267] = env->getMethodID(cls, "getPVInterpolationNumber", "()I");
            mids$[mid_getPositionsVelocities_d751c1a57012b438] = env->getMethodID(cls, "getPositionsVelocities", "()Ljava/util/List;");
            mids$[mid_getQuaternions_d751c1a57012b438] = env->getMethodID(cls, "getQuaternions", "()Ljava/util/List;");
            mids$[mid_getRefractionCorrection_8a451c1ca0929e53] = env->getMethodID(cls, "getRefractionCorrection", "()Lorg/orekit/rugged/refraction/AtmosphericRefraction;");
            mids$[mid_getTStep_9981f74b2d109da6] = env->getMethodID(cls, "getTStep", "()D");
            mids$[mid_getTileUpdater_cfb26bbbcfaf5e83] = env->getMethodID(cls, "getTileUpdater", "()Lorg/orekit/rugged/raster/TileUpdater;");
            mids$[mid_setAberrationOfLightCorrection_fe655410605a8a39] = env->getMethodID(cls, "setAberrationOfLightCorrection", "(Z)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setAlgorithm_f1fbb5e2d8caa16d] = env->getMethodID(cls, "setAlgorithm", "(Lorg/orekit/rugged/api/AlgorithmId;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setConstantElevation_a84f3cc81c135dc2] = env->getMethodID(cls, "setConstantElevation", "(D)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setDigitalElevationModel_91358a2db18d1bf9] = env->getMethodID(cls, "setDigitalElevationModel", "(Lorg/orekit/rugged/raster/TileUpdater;I)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setEllipsoid_1f934770a4956bbf] = env->getMethodID(cls, "setEllipsoid", "(Lorg/orekit/bodies/OneAxisEllipsoid;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setEllipsoid_5344b6eb358ce027] = env->getMethodID(cls, "setEllipsoid", "(Lorg/orekit/rugged/api/EllipsoidId;Lorg/orekit/rugged/api/BodyRotatingFrameId;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setLightTimeCorrection_fe655410605a8a39] = env->getMethodID(cls, "setLightTimeCorrection", "(Z)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setName_105e1eadb709d9ac] = env->getMethodID(cls, "setName", "(Ljava/lang/String;)V");
            mids$[mid_setRefractionCorrection_aab32e69389375e6] = env->getMethodID(cls, "setRefractionCorrection", "(Lorg/orekit/rugged/refraction/AtmosphericRefraction;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTimeSpan_d7a82d387a702f32] = env->getMethodID(cls, "setTimeSpan", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;DD)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTrajectory_dcc30824d40f214e] = env->getMethodID(cls, "setTrajectory", "(DILorg/orekit/utils/CartesianDerivativesFilter;Lorg/orekit/utils/AngularDerivativesFilter;Lorg/orekit/propagation/Propagator;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTrajectory_2aebaea4f78f979c] = env->getMethodID(cls, "setTrajectory", "(Lorg/orekit/rugged/api/InertialFrameId;Ljava/util/List;ILorg/orekit/utils/CartesianDerivativesFilter;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTrajectory_ae2bdbe1a04f4c17] = env->getMethodID(cls, "setTrajectory", "(Lorg/orekit/frames/Frame;Ljava/util/List;ILorg/orekit/utils/CartesianDerivativesFilter;Ljava/util/List;ILorg/orekit/utils/AngularDerivativesFilter;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_setTrajectoryAndTimeSpan_c3e750739d6274d4] = env->getMethodID(cls, "setTrajectoryAndTimeSpan", "(Ljava/io/InputStream;)Lorg/orekit/rugged/api/RuggedBuilder;");
            mids$[mid_storeInterpolator_da52d6defb468793] = env->getMethodID(cls, "storeInterpolator", "(Ljava/io/OutputStream;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        RuggedBuilder::RuggedBuilder() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        RuggedBuilder RuggedBuilder::addLineSensor(const ::org::orekit::rugged::linesensor::LineSensor & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_addLineSensor_509fd4e7a758576e], a0.this$));
        }

        ::org::orekit::rugged::api::Rugged RuggedBuilder::build() const
        {
          return ::org::orekit::rugged::api::Rugged(env->callObjectMethod(this$, mids$[mid_build_081a982fcf11ceb9]));
        }

        RuggedBuilder RuggedBuilder::clearLineSensors() const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_clearLineSensors_b20cf89d3faf836e]));
        }

        ::org::orekit::utils::AngularDerivativesFilter RuggedBuilder::getAFilter() const
        {
          return ::org::orekit::utils::AngularDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAFilter_410860c8cd87dc25]));
        }

        jint RuggedBuilder::getAInterpolationNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getAInterpolationNumber_d6ab429752e7c267]);
        }

        jboolean RuggedBuilder::getAberrationOfLightCorrection() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getAberrationOfLightCorrection_eee3de00fe971136]);
        }

        ::org::orekit::rugged::api::AlgorithmId RuggedBuilder::getAlgorithm() const
        {
          return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithm_65c2eab2e30f9d2d]));
        }

        jdouble RuggedBuilder::getConstantElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getConstantElevation_9981f74b2d109da6]);
        }

        ::org::orekit::rugged::utils::ExtendedEllipsoid RuggedBuilder::getEllipsoid() const
        {
          return ::org::orekit::rugged::utils::ExtendedEllipsoid(env->callObjectMethod(this$, mids$[mid_getEllipsoid_bac68fc0dce2fb24]));
        }

        ::org::orekit::frames::Frame RuggedBuilder::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_cb151471db4570f0]));
        }

        jboolean RuggedBuilder::getLightTimeCorrection() const
        {
          return env->callBooleanMethod(this$, mids$[mid_getLightTimeCorrection_eee3de00fe971136]);
        }

        ::java::util::List RuggedBuilder::getLineSensors() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getLineSensors_d751c1a57012b438]));
        }

        jint RuggedBuilder::getMaxCachedTiles() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxCachedTiles_d6ab429752e7c267]);
        }

        ::org::orekit::time::AbsoluteDate RuggedBuilder::getMaxDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate RuggedBuilder::getMinDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_80e11148db499dda]));
        }

        ::java::lang::String RuggedBuilder::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
        }

        jdouble RuggedBuilder::getOvershootTolerance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getOvershootTolerance_9981f74b2d109da6]);
        }

        ::org::orekit::utils::CartesianDerivativesFilter RuggedBuilder::getPVFilter() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getPVFilter_b9dfc27d8c56b5de]));
        }

        jint RuggedBuilder::getPVInterpolationNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getPVInterpolationNumber_d6ab429752e7c267]);
        }

        ::java::util::List RuggedBuilder::getPositionsVelocities() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPositionsVelocities_d751c1a57012b438]));
        }

        ::java::util::List RuggedBuilder::getQuaternions() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getQuaternions_d751c1a57012b438]));
        }

        ::org::orekit::rugged::refraction::AtmosphericRefraction RuggedBuilder::getRefractionCorrection() const
        {
          return ::org::orekit::rugged::refraction::AtmosphericRefraction(env->callObjectMethod(this$, mids$[mid_getRefractionCorrection_8a451c1ca0929e53]));
        }

        jdouble RuggedBuilder::getTStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTStep_9981f74b2d109da6]);
        }

        ::org::orekit::rugged::raster::TileUpdater RuggedBuilder::getTileUpdater() const
        {
          return ::org::orekit::rugged::raster::TileUpdater(env->callObjectMethod(this$, mids$[mid_getTileUpdater_cfb26bbbcfaf5e83]));
        }

        RuggedBuilder RuggedBuilder::setAberrationOfLightCorrection(jboolean a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setAberrationOfLightCorrection_fe655410605a8a39], a0));
        }

        RuggedBuilder RuggedBuilder::setAlgorithm(const ::org::orekit::rugged::api::AlgorithmId & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setAlgorithm_f1fbb5e2d8caa16d], a0.this$));
        }

        RuggedBuilder RuggedBuilder::setConstantElevation(jdouble a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setConstantElevation_a84f3cc81c135dc2], a0));
        }

        RuggedBuilder RuggedBuilder::setDigitalElevationModel(const ::org::orekit::rugged::raster::TileUpdater & a0, jint a1) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setDigitalElevationModel_91358a2db18d1bf9], a0.this$, a1));
        }

        RuggedBuilder RuggedBuilder::setEllipsoid(const ::org::orekit::bodies::OneAxisEllipsoid & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setEllipsoid_1f934770a4956bbf], a0.this$));
        }

        RuggedBuilder RuggedBuilder::setEllipsoid(const ::org::orekit::rugged::api::EllipsoidId & a0, const ::org::orekit::rugged::api::BodyRotatingFrameId & a1) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setEllipsoid_5344b6eb358ce027], a0.this$, a1.this$));
        }

        RuggedBuilder RuggedBuilder::setLightTimeCorrection(jboolean a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setLightTimeCorrection_fe655410605a8a39], a0));
        }

        void RuggedBuilder::setName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setName_105e1eadb709d9ac], a0.this$);
        }

        RuggedBuilder RuggedBuilder::setRefractionCorrection(const ::org::orekit::rugged::refraction::AtmosphericRefraction & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setRefractionCorrection_aab32e69389375e6], a0.this$));
        }

        RuggedBuilder RuggedBuilder::setTimeSpan(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, jdouble a2, jdouble a3) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTimeSpan_d7a82d387a702f32], a0.this$, a1.this$, a2, a3));
        }

        RuggedBuilder RuggedBuilder::setTrajectory(jdouble a0, jint a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2, const ::org::orekit::utils::AngularDerivativesFilter & a3, const ::org::orekit::propagation::Propagator & a4) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTrajectory_dcc30824d40f214e], a0, a1, a2.this$, a3.this$, a4.this$));
        }

        RuggedBuilder RuggedBuilder::setTrajectory(const ::org::orekit::rugged::api::InertialFrameId & a0, const ::java::util::List & a1, jint a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::java::util::List & a4, jint a5, const ::org::orekit::utils::AngularDerivativesFilter & a6) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTrajectory_2aebaea4f78f979c], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$));
        }

        RuggedBuilder RuggedBuilder::setTrajectory(const ::org::orekit::frames::Frame & a0, const ::java::util::List & a1, jint a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::java::util::List & a4, jint a5, const ::org::orekit::utils::AngularDerivativesFilter & a6) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTrajectory_ae2bdbe1a04f4c17], a0.this$, a1.this$, a2, a3.this$, a4.this$, a5, a6.this$));
        }

        RuggedBuilder RuggedBuilder::setTrajectoryAndTimeSpan(const ::java::io::InputStream & a0) const
        {
          return RuggedBuilder(env->callObjectMethod(this$, mids$[mid_setTrajectoryAndTimeSpan_c3e750739d6274d4], a0.this$));
        }

        void RuggedBuilder::storeInterpolator(const ::java::io::OutputStream & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_storeInterpolator_da52d6defb468793], a0.this$);
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
        static PyObject *t_RuggedBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_RuggedBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_RuggedBuilder_init_(t_RuggedBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_RuggedBuilder_addLineSensor(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_build(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_clearLineSensors(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getAFilter(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getAInterpolationNumber(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getAberrationOfLightCorrection(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getAlgorithm(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getConstantElevation(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getEllipsoid(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getInertialFrame(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getLightTimeCorrection(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getLineSensors(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getMaxCachedTiles(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getMaxDate(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getMinDate(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getName(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getOvershootTolerance(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getPVFilter(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getPVInterpolationNumber(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getPositionsVelocities(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getQuaternions(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getRefractionCorrection(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getTStep(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_getTileUpdater(t_RuggedBuilder *self);
        static PyObject *t_RuggedBuilder_setAberrationOfLightCorrection(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setAlgorithm(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setConstantElevation(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setDigitalElevationModel(t_RuggedBuilder *self, PyObject *args);
        static PyObject *t_RuggedBuilder_setEllipsoid(t_RuggedBuilder *self, PyObject *args);
        static PyObject *t_RuggedBuilder_setLightTimeCorrection(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setName(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setRefractionCorrection(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_setTimeSpan(t_RuggedBuilder *self, PyObject *args);
        static PyObject *t_RuggedBuilder_setTrajectory(t_RuggedBuilder *self, PyObject *args);
        static PyObject *t_RuggedBuilder_setTrajectoryAndTimeSpan(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_storeInterpolator(t_RuggedBuilder *self, PyObject *arg);
        static PyObject *t_RuggedBuilder_get__aFilter(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__aInterpolationNumber(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__aberrationOfLightCorrection(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__aberrationOfLightCorrection(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__algorithm(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__algorithm(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__constantElevation(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__constantElevation(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__ellipsoid(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__ellipsoid(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__inertialFrame(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__lightTimeCorrection(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__lightTimeCorrection(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__lineSensors(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__maxCachedTiles(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__maxDate(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__minDate(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__name(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__name(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__overshootTolerance(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__pVFilter(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__pVInterpolationNumber(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__positionsVelocities(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__quaternions(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__refractionCorrection(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__refractionCorrection(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyObject *t_RuggedBuilder_get__tStep(t_RuggedBuilder *self, void *data);
        static PyObject *t_RuggedBuilder_get__tileUpdater(t_RuggedBuilder *self, void *data);
        static int t_RuggedBuilder_set__trajectoryAndTimeSpan(t_RuggedBuilder *self, PyObject *arg, void *data);
        static PyGetSetDef t_RuggedBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_RuggedBuilder, aFilter),
          DECLARE_GET_FIELD(t_RuggedBuilder, aInterpolationNumber),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, aberrationOfLightCorrection),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, algorithm),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, constantElevation),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, ellipsoid),
          DECLARE_GET_FIELD(t_RuggedBuilder, inertialFrame),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, lightTimeCorrection),
          DECLARE_GET_FIELD(t_RuggedBuilder, lineSensors),
          DECLARE_GET_FIELD(t_RuggedBuilder, maxCachedTiles),
          DECLARE_GET_FIELD(t_RuggedBuilder, maxDate),
          DECLARE_GET_FIELD(t_RuggedBuilder, minDate),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, name),
          DECLARE_GET_FIELD(t_RuggedBuilder, overshootTolerance),
          DECLARE_GET_FIELD(t_RuggedBuilder, pVFilter),
          DECLARE_GET_FIELD(t_RuggedBuilder, pVInterpolationNumber),
          DECLARE_GET_FIELD(t_RuggedBuilder, positionsVelocities),
          DECLARE_GET_FIELD(t_RuggedBuilder, quaternions),
          DECLARE_GETSET_FIELD(t_RuggedBuilder, refractionCorrection),
          DECLARE_GET_FIELD(t_RuggedBuilder, tStep),
          DECLARE_GET_FIELD(t_RuggedBuilder, tileUpdater),
          DECLARE_SET_FIELD(t_RuggedBuilder, trajectoryAndTimeSpan),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_RuggedBuilder__methods_[] = {
          DECLARE_METHOD(t_RuggedBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_RuggedBuilder, addLineSensor, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, build, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, clearLineSensors, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getAFilter, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getAInterpolationNumber, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getAberrationOfLightCorrection, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getAlgorithm, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getConstantElevation, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getEllipsoid, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getLightTimeCorrection, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getLineSensors, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getMaxCachedTiles, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getMaxDate, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getMinDate, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getName, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getOvershootTolerance, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getPVFilter, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getPVInterpolationNumber, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getPositionsVelocities, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getQuaternions, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getRefractionCorrection, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getTStep, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, getTileUpdater, METH_NOARGS),
          DECLARE_METHOD(t_RuggedBuilder, setAberrationOfLightCorrection, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setAlgorithm, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setConstantElevation, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setDigitalElevationModel, METH_VARARGS),
          DECLARE_METHOD(t_RuggedBuilder, setEllipsoid, METH_VARARGS),
          DECLARE_METHOD(t_RuggedBuilder, setLightTimeCorrection, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setName, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setRefractionCorrection, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, setTimeSpan, METH_VARARGS),
          DECLARE_METHOD(t_RuggedBuilder, setTrajectory, METH_VARARGS),
          DECLARE_METHOD(t_RuggedBuilder, setTrajectoryAndTimeSpan, METH_O),
          DECLARE_METHOD(t_RuggedBuilder, storeInterpolator, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(RuggedBuilder)[] = {
          { Py_tp_methods, t_RuggedBuilder__methods_ },
          { Py_tp_init, (void *) t_RuggedBuilder_init_ },
          { Py_tp_getset, t_RuggedBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(RuggedBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(RuggedBuilder, t_RuggedBuilder, RuggedBuilder);

        void t_RuggedBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(RuggedBuilder), &PY_TYPE_DEF(RuggedBuilder), module, "RuggedBuilder", 0);
        }

        void t_RuggedBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedBuilder), "class_", make_descriptor(RuggedBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedBuilder), "wrapfn_", make_descriptor(t_RuggedBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(RuggedBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_RuggedBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, RuggedBuilder::initializeClass, 1)))
            return NULL;
          return t_RuggedBuilder::wrap_Object(RuggedBuilder(((t_RuggedBuilder *) arg)->object.this$));
        }
        static PyObject *t_RuggedBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, RuggedBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_RuggedBuilder_init_(t_RuggedBuilder *self, PyObject *args, PyObject *kwds)
        {
          RuggedBuilder object((jobject) NULL);

          INT_CALL(object = RuggedBuilder());
          self->object = object;

          return 0;
        }

        static PyObject *t_RuggedBuilder_addLineSensor(t_RuggedBuilder *self, PyObject *arg)
        {
          ::org::orekit::rugged::linesensor::LineSensor a0((jobject) NULL);
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::linesensor::LineSensor::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.addLineSensor(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "addLineSensor", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_build(t_RuggedBuilder *self)
        {
          ::org::orekit::rugged::api::Rugged result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::rugged::api::t_Rugged::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_clearLineSensors(t_RuggedBuilder *self)
        {
          RuggedBuilder result((jobject) NULL);
          OBJ_CALL(result = self->object.clearLineSensors());
          return t_RuggedBuilder::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getAFilter(t_RuggedBuilder *self)
        {
          ::org::orekit::utils::AngularDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAFilter());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getAInterpolationNumber(t_RuggedBuilder *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getAInterpolationNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_RuggedBuilder_getAberrationOfLightCorrection(t_RuggedBuilder *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getAberrationOfLightCorrection());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_RuggedBuilder_getAlgorithm(t_RuggedBuilder *self)
        {
          ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
          OBJ_CALL(result = self->object.getAlgorithm());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getConstantElevation(t_RuggedBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getConstantElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RuggedBuilder_getEllipsoid(t_RuggedBuilder *self)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid result((jobject) NULL);
          OBJ_CALL(result = self->object.getEllipsoid());
          return ::org::orekit::rugged::utils::t_ExtendedEllipsoid::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getInertialFrame(t_RuggedBuilder *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getLightTimeCorrection(t_RuggedBuilder *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.getLightTimeCorrection());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_RuggedBuilder_getLineSensors(t_RuggedBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getLineSensors());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::rugged::linesensor::PY_TYPE(LineSensor));
        }

        static PyObject *t_RuggedBuilder_getMaxCachedTiles(t_RuggedBuilder *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxCachedTiles());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_RuggedBuilder_getMaxDate(t_RuggedBuilder *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getMinDate(t_RuggedBuilder *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getName(t_RuggedBuilder *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_RuggedBuilder_getOvershootTolerance(t_RuggedBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getOvershootTolerance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RuggedBuilder_getPVFilter(t_RuggedBuilder *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getPVFilter());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getPVInterpolationNumber(t_RuggedBuilder *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPVInterpolationNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_RuggedBuilder_getPositionsVelocities(t_RuggedBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionsVelocities());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
        }

        static PyObject *t_RuggedBuilder_getQuaternions(t_RuggedBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getQuaternions());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
        }

        static PyObject *t_RuggedBuilder_getRefractionCorrection(t_RuggedBuilder *self)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction result((jobject) NULL);
          OBJ_CALL(result = self->object.getRefractionCorrection());
          return ::org::orekit::rugged::refraction::t_AtmosphericRefraction::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_getTStep(t_RuggedBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_RuggedBuilder_getTileUpdater(t_RuggedBuilder *self)
        {
          ::org::orekit::rugged::raster::TileUpdater result((jobject) NULL);
          OBJ_CALL(result = self->object.getTileUpdater());
          return ::org::orekit::rugged::raster::t_TileUpdater::wrap_Object(result);
        }

        static PyObject *t_RuggedBuilder_setAberrationOfLightCorrection(t_RuggedBuilder *self, PyObject *arg)
        {
          jboolean a0;
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setAberrationOfLightCorrection(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setAberrationOfLightCorrection", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setAlgorithm(t_RuggedBuilder *self, PyObject *arg)
        {
          ::org::orekit::rugged::api::AlgorithmId a0((jobject) NULL);
          PyTypeObject **p0;
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::rugged::api::AlgorithmId::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_AlgorithmId::parameters_))
          {
            OBJ_CALL(result = self->object.setAlgorithm(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setAlgorithm", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setConstantElevation(t_RuggedBuilder *self, PyObject *arg)
        {
          jdouble a0;
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.setConstantElevation(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setConstantElevation", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setDigitalElevationModel(t_RuggedBuilder *self, PyObject *args)
        {
          ::org::orekit::rugged::raster::TileUpdater a0((jobject) NULL);
          jint a1;
          RuggedBuilder result((jobject) NULL);

          if (!parseArgs(args, "kI", ::org::orekit::rugged::raster::TileUpdater::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.setDigitalElevationModel(a0, a1));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setDigitalElevationModel", args);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setEllipsoid(t_RuggedBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
              RuggedBuilder result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.setEllipsoid(a0));
                return t_RuggedBuilder::wrap_Object(result);
              }
            }
            break;
           case 2:
            {
              ::org::orekit::rugged::api::EllipsoidId a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::rugged::api::BodyRotatingFrameId a1((jobject) NULL);
              PyTypeObject **p1;
              RuggedBuilder result((jobject) NULL);

              if (!parseArgs(args, "KK", ::org::orekit::rugged::api::EllipsoidId::initializeClass, ::org::orekit::rugged::api::BodyRotatingFrameId::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_EllipsoidId::parameters_, &a1, &p1, ::org::orekit::rugged::api::t_BodyRotatingFrameId::parameters_))
              {
                OBJ_CALL(result = self->object.setEllipsoid(a0, a1));
                return t_RuggedBuilder::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setEllipsoid", args);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setLightTimeCorrection(t_RuggedBuilder *self, PyObject *arg)
        {
          jboolean a0;
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.setLightTimeCorrection(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setLightTimeCorrection", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setName(t_RuggedBuilder *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setName", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setRefractionCorrection(t_RuggedBuilder *self, PyObject *arg)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction a0((jobject) NULL);
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::rugged::refraction::AtmosphericRefraction::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.setRefractionCorrection(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setRefractionCorrection", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setTimeSpan(t_RuggedBuilder *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          jdouble a2;
          jdouble a3;
          RuggedBuilder result((jobject) NULL);

          if (!parseArgs(args, "kkDD", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.setTimeSpan(a0, a1, a2, a3));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setTimeSpan", args);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setTrajectory(t_RuggedBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 5:
            {
              jdouble a0;
              jint a1;
              ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::utils::AngularDerivativesFilter a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::orekit::propagation::Propagator a4((jobject) NULL);
              RuggedBuilder result((jobject) NULL);

              if (!parseArgs(args, "DIKKk", ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, ::org::orekit::propagation::Propagator::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a3, &p3, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_, &a4))
              {
                OBJ_CALL(result = self->object.setTrajectory(a0, a1, a2, a3, a4));
                return t_RuggedBuilder::wrap_Object(result);
              }
            }
            break;
           case 7:
            {
              ::org::orekit::rugged::api::InertialFrameId a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
              PyTypeObject **p3;
              ::java::util::List a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::org::orekit::utils::AngularDerivativesFilter a6((jobject) NULL);
              PyTypeObject **p6;
              RuggedBuilder result((jobject) NULL);

              if (!parseArgs(args, "KKIKKIK", ::org::orekit::rugged::api::InertialFrameId::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &p0, ::org::orekit::rugged::api::t_InertialFrameId::parameters_, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &p4, ::java::util::t_List::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
              {
                OBJ_CALL(result = self->object.setTrajectory(a0, a1, a2, a3, a4, a5, a6));
                return t_RuggedBuilder::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
              PyTypeObject **p3;
              ::java::util::List a4((jobject) NULL);
              PyTypeObject **p4;
              jint a5;
              ::org::orekit::utils::AngularDerivativesFilter a6((jobject) NULL);
              PyTypeObject **p6;
              RuggedBuilder result((jobject) NULL);

              if (!parseArgs(args, "kKIKKIK", ::org::orekit::frames::Frame::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::AngularDerivativesFilter::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &p4, ::java::util::t_List::parameters_, &a5, &a6, &p6, ::org::orekit::utils::t_AngularDerivativesFilter::parameters_))
              {
                OBJ_CALL(result = self->object.setTrajectory(a0, a1, a2, a3, a4, a5, a6));
                return t_RuggedBuilder::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "setTrajectory", args);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_setTrajectoryAndTimeSpan(t_RuggedBuilder *self, PyObject *arg)
        {
          ::java::io::InputStream a0((jobject) NULL);
          RuggedBuilder result((jobject) NULL);

          if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.setTrajectoryAndTimeSpan(a0));
            return t_RuggedBuilder::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "setTrajectoryAndTimeSpan", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_storeInterpolator(t_RuggedBuilder *self, PyObject *arg)
        {
          ::java::io::OutputStream a0((jobject) NULL);

          if (!parseArg(arg, "k", ::java::io::OutputStream::initializeClass, &a0))
          {
            OBJ_CALL(self->object.storeInterpolator(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "storeInterpolator", arg);
          return NULL;
        }

        static PyObject *t_RuggedBuilder_get__aFilter(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::utils::AngularDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAFilter());
          return ::org::orekit::utils::t_AngularDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__aInterpolationNumber(t_RuggedBuilder *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getAInterpolationNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_RuggedBuilder_get__aberrationOfLightCorrection(t_RuggedBuilder *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getAberrationOfLightCorrection());
          Py_RETURN_BOOL(value);
        }
        static int t_RuggedBuilder_set__aberrationOfLightCorrection(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setAberrationOfLightCorrection(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "aberrationOfLightCorrection", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__algorithm(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
          OBJ_CALL(value = self->object.getAlgorithm());
          return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
        }
        static int t_RuggedBuilder_set__algorithm(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::rugged::api::AlgorithmId::initializeClass, &value))
            {
              INT_CALL(self->object.setAlgorithm(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "algorithm", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__constantElevation(t_RuggedBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getConstantElevation());
          return PyFloat_FromDouble((double) value);
        }
        static int t_RuggedBuilder_set__constantElevation(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setConstantElevation(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "constantElevation", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__ellipsoid(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::rugged::utils::ExtendedEllipsoid value((jobject) NULL);
          OBJ_CALL(value = self->object.getEllipsoid());
          return ::org::orekit::rugged::utils::t_ExtendedEllipsoid::wrap_Object(value);
        }
        static int t_RuggedBuilder_set__ellipsoid(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::bodies::OneAxisEllipsoid value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, &value))
            {
              INT_CALL(self->object.setEllipsoid(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "ellipsoid", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__inertialFrame(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__lightTimeCorrection(t_RuggedBuilder *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.getLightTimeCorrection());
          Py_RETURN_BOOL(value);
        }
        static int t_RuggedBuilder_set__lightTimeCorrection(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            jboolean value;
            if (!parseArg(arg, "Z", &value))
            {
              INT_CALL(self->object.setLightTimeCorrection(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "lightTimeCorrection", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__lineSensors(t_RuggedBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getLineSensors());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__maxCachedTiles(t_RuggedBuilder *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxCachedTiles());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_RuggedBuilder_get__maxDate(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__minDate(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__name(t_RuggedBuilder *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }
        static int t_RuggedBuilder_set__name(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "name", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__overshootTolerance(t_RuggedBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getOvershootTolerance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RuggedBuilder_get__pVFilter(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getPVFilter());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__pVInterpolationNumber(t_RuggedBuilder *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPVInterpolationNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_RuggedBuilder_get__positionsVelocities(t_RuggedBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionsVelocities());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__quaternions(t_RuggedBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getQuaternions());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_RuggedBuilder_get__refractionCorrection(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::rugged::refraction::AtmosphericRefraction value((jobject) NULL);
          OBJ_CALL(value = self->object.getRefractionCorrection());
          return ::org::orekit::rugged::refraction::t_AtmosphericRefraction::wrap_Object(value);
        }
        static int t_RuggedBuilder_set__refractionCorrection(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::rugged::refraction::AtmosphericRefraction value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::rugged::refraction::AtmosphericRefraction::initializeClass, &value))
            {
              INT_CALL(self->object.setRefractionCorrection(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "refractionCorrection", arg);
          return -1;
        }

        static PyObject *t_RuggedBuilder_get__tStep(t_RuggedBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_RuggedBuilder_get__tileUpdater(t_RuggedBuilder *self, void *data)
        {
          ::org::orekit::rugged::raster::TileUpdater value((jobject) NULL);
          OBJ_CALL(value = self->object.getTileUpdater());
          return ::org::orekit::rugged::raster::t_TileUpdater::wrap_Object(value);
        }

        static int t_RuggedBuilder_set__trajectoryAndTimeSpan(t_RuggedBuilder *self, PyObject *arg, void *data)
        {
          {
            ::java::io::InputStream value((jobject) NULL);
            if (!parseArg(arg, "k", ::java::io::InputStream::initializeClass, &value))
            {
              INT_CALL(self->object.setTrajectoryAndTimeSpan(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "trajectoryAndTimeSpan", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/BaseAbstractFieldUnivariateIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *BaseAbstractFieldUnivariateIntegrator::class$ = NULL;
        jmethodID *BaseAbstractFieldUnivariateIntegrator::mids$ = NULL;
        bool BaseAbstractFieldUnivariateIntegrator::live$ = false;
        jdouble BaseAbstractFieldUnivariateIntegrator::DEFAULT_ABSOLUTE_ACCURACY = (jdouble) 0;
        jint BaseAbstractFieldUnivariateIntegrator::DEFAULT_MAX_ITERATIONS_COUNT = (jint) 0;
        jint BaseAbstractFieldUnivariateIntegrator::DEFAULT_MIN_ITERATIONS_COUNT = (jint) 0;
        jdouble BaseAbstractFieldUnivariateIntegrator::DEFAULT_RELATIVE_ACCURACY = (jdouble) 0;

        jclass BaseAbstractFieldUnivariateIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/BaseAbstractFieldUnivariateIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_d6ab429752e7c267] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getField_577649682b9910c1] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/Field;");
            mids$[mid_getIterations_d6ab429752e7c267] = env->getMethodID(cls, "getIterations", "()I");
            mids$[mid_getMaximalIterationCount_d6ab429752e7c267] = env->getMethodID(cls, "getMaximalIterationCount", "()I");
            mids$[mid_getMinimalIterationCount_d6ab429752e7c267] = env->getMethodID(cls, "getMinimalIterationCount", "()I");
            mids$[mid_getRelativeAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_integrate_ef1d0d591cd17bf9] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMin_08d37e3f77b7239d] = env->getMethodID(cls, "getMin", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMax_08d37e3f77b7239d] = env->getMethodID(cls, "getMax", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_computeObjectiveValue_a3b854adede8eaaa] = env->getMethodID(cls, "computeObjectiveValue", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_doIntegrate_08d37e3f77b7239d] = env->getMethodID(cls, "doIntegrate", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_setup_11812be0a0c96fef] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");

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

        jdouble BaseAbstractFieldUnivariateIntegrator::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_9981f74b2d109da6]);
        }

        jint BaseAbstractFieldUnivariateIntegrator::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_d6ab429752e7c267]);
        }

        ::org::hipparchus::Field BaseAbstractFieldUnivariateIntegrator::getField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getField_577649682b9910c1]));
        }

        jint BaseAbstractFieldUnivariateIntegrator::getIterations() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterations_d6ab429752e7c267]);
        }

        jint BaseAbstractFieldUnivariateIntegrator::getMaximalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalIterationCount_d6ab429752e7c267]);
        }

        jint BaseAbstractFieldUnivariateIntegrator::getMinimalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinimalIterationCount_d6ab429752e7c267]);
        }

        jdouble BaseAbstractFieldUnivariateIntegrator::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_9981f74b2d109da6]);
        }

        ::org::hipparchus::CalculusFieldElement BaseAbstractFieldUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_ef1d0d591cd17bf9], a0, a1.this$, a2.this$, a3.this$));
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
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_of_(t_BaseAbstractFieldUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getAbsoluteAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getEvaluations(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getField(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getIterations(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getMaximalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getMinimalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getRelativeAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_integrate(t_BaseAbstractFieldUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__absoluteAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__evaluations(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__field(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__iterations(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__maximalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__minimalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__relativeAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__parameters_(t_BaseAbstractFieldUnivariateIntegrator *self, void *data);
        static PyGetSetDef t_BaseAbstractFieldUnivariateIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, absoluteAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, evaluations),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, field),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, iterations),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, maximalIterationCount),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, minimalIterationCount),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, relativeAccuracy),
          DECLARE_GET_FIELD(t_BaseAbstractFieldUnivariateIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BaseAbstractFieldUnivariateIntegrator__methods_[] = {
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getField, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getIterations, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getMaximalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getMinimalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_BaseAbstractFieldUnivariateIntegrator, integrate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BaseAbstractFieldUnivariateIntegrator)[] = {
          { Py_tp_methods, t_BaseAbstractFieldUnivariateIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BaseAbstractFieldUnivariateIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BaseAbstractFieldUnivariateIntegrator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BaseAbstractFieldUnivariateIntegrator, t_BaseAbstractFieldUnivariateIntegrator, BaseAbstractFieldUnivariateIntegrator);
        PyObject *t_BaseAbstractFieldUnivariateIntegrator::wrap_Object(const BaseAbstractFieldUnivariateIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseAbstractFieldUnivariateIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseAbstractFieldUnivariateIntegrator *self = (t_BaseAbstractFieldUnivariateIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BaseAbstractFieldUnivariateIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BaseAbstractFieldUnivariateIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BaseAbstractFieldUnivariateIntegrator *self = (t_BaseAbstractFieldUnivariateIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BaseAbstractFieldUnivariateIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(BaseAbstractFieldUnivariateIntegrator), &PY_TYPE_DEF(BaseAbstractFieldUnivariateIntegrator), module, "BaseAbstractFieldUnivariateIntegrator", 0);
        }

        void t_BaseAbstractFieldUnivariateIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "class_", make_descriptor(BaseAbstractFieldUnivariateIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "wrapfn_", make_descriptor(t_BaseAbstractFieldUnivariateIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
          env->getClass(BaseAbstractFieldUnivariateIntegrator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "DEFAULT_ABSOLUTE_ACCURACY", make_descriptor(BaseAbstractFieldUnivariateIntegrator::DEFAULT_ABSOLUTE_ACCURACY));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "DEFAULT_MAX_ITERATIONS_COUNT", make_descriptor(BaseAbstractFieldUnivariateIntegrator::DEFAULT_MAX_ITERATIONS_COUNT));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "DEFAULT_MIN_ITERATIONS_COUNT", make_descriptor(BaseAbstractFieldUnivariateIntegrator::DEFAULT_MIN_ITERATIONS_COUNT));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BaseAbstractFieldUnivariateIntegrator), "DEFAULT_RELATIVE_ACCURACY", make_descriptor(BaseAbstractFieldUnivariateIntegrator::DEFAULT_RELATIVE_ACCURACY));
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BaseAbstractFieldUnivariateIntegrator::initializeClass, 1)))
            return NULL;
          return t_BaseAbstractFieldUnivariateIntegrator::wrap_Object(BaseAbstractFieldUnivariateIntegrator(((t_BaseAbstractFieldUnivariateIntegrator *) arg)->object.this$));
        }
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BaseAbstractFieldUnivariateIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_of_(t_BaseAbstractFieldUnivariateIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getAbsoluteAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getEvaluations(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getField(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getIterations(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getMaximalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getMinimalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_getRelativeAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_integrate(t_BaseAbstractFieldUnivariateIntegrator *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "IKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }
        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__parameters_(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__absoluteAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__evaluations(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__field(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__iterations(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__maximalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__minimalIterationCount(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_BaseAbstractFieldUnivariateIntegrator_get__relativeAccuracy(t_BaseAbstractFieldUnivariateIntegrator *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "org/orekit/utils/units/Unit.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/ParsedUnitsBehavior.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {

          ::java::lang::Class *ParsedUnitsBehavior::class$ = NULL;
          jmethodID *ParsedUnitsBehavior::mids$ = NULL;
          bool ParsedUnitsBehavior::live$ = false;
          ParsedUnitsBehavior *ParsedUnitsBehavior::CONVERT_COMPATIBLE = NULL;
          ParsedUnitsBehavior *ParsedUnitsBehavior::IGNORE_PARSED = NULL;
          ParsedUnitsBehavior *ParsedUnitsBehavior::STRICT_COMPLIANCE = NULL;

          jclass ParsedUnitsBehavior::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/ParsedUnitsBehavior");

              mids$ = new jmethodID[max_mid];
              mids$[mid_select_043a672d8cf4a758] = env->getMethodID(cls, "select", "(Lorg/orekit/utils/units/Unit;Lorg/orekit/utils/units/Unit;)Lorg/orekit/utils/units/Unit;");
              mids$[mid_valueOf_65a34aee56d67d57] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");
              mids$[mid_values_607a7e793eabe17d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              CONVERT_COMPATIBLE = new ParsedUnitsBehavior(env->getStaticObjectField(cls, "CONVERT_COMPATIBLE", "Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;"));
              IGNORE_PARSED = new ParsedUnitsBehavior(env->getStaticObjectField(cls, "IGNORE_PARSED", "Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;"));
              STRICT_COMPLIANCE = new ParsedUnitsBehavior(env->getStaticObjectField(cls, "STRICT_COMPLIANCE", "Lorg/orekit/files/ccsds/ndm/ParsedUnitsBehavior;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::utils::units::Unit ParsedUnitsBehavior::select(const ::org::orekit::utils::units::Unit & a0, const ::org::orekit::utils::units::Unit & a1) const
          {
            return ::org::orekit::utils::units::Unit(env->callObjectMethod(this$, mids$[mid_select_043a672d8cf4a758], a0.this$, a1.this$));
          }

          ParsedUnitsBehavior ParsedUnitsBehavior::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ParsedUnitsBehavior(env->callStaticObjectMethod(cls, mids$[mid_valueOf_65a34aee56d67d57], a0.this$));
          }

          JArray< ParsedUnitsBehavior > ParsedUnitsBehavior::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< ParsedUnitsBehavior >(env->callStaticObjectMethod(cls, mids$[mid_values_607a7e793eabe17d]));
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
          static PyObject *t_ParsedUnitsBehavior_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParsedUnitsBehavior_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ParsedUnitsBehavior_of_(t_ParsedUnitsBehavior *self, PyObject *args);
          static PyObject *t_ParsedUnitsBehavior_select(t_ParsedUnitsBehavior *self, PyObject *args);
          static PyObject *t_ParsedUnitsBehavior_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_ParsedUnitsBehavior_values(PyTypeObject *type);
          static PyObject *t_ParsedUnitsBehavior_get__parameters_(t_ParsedUnitsBehavior *self, void *data);
          static PyGetSetDef t_ParsedUnitsBehavior__fields_[] = {
            DECLARE_GET_FIELD(t_ParsedUnitsBehavior, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ParsedUnitsBehavior__methods_[] = {
            DECLARE_METHOD(t_ParsedUnitsBehavior, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParsedUnitsBehavior, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ParsedUnitsBehavior, of_, METH_VARARGS),
            DECLARE_METHOD(t_ParsedUnitsBehavior, select, METH_VARARGS),
            DECLARE_METHOD(t_ParsedUnitsBehavior, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_ParsedUnitsBehavior, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ParsedUnitsBehavior)[] = {
            { Py_tp_methods, t_ParsedUnitsBehavior__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_ParsedUnitsBehavior__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ParsedUnitsBehavior)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(ParsedUnitsBehavior, t_ParsedUnitsBehavior, ParsedUnitsBehavior);
          PyObject *t_ParsedUnitsBehavior::wrap_Object(const ParsedUnitsBehavior& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ParsedUnitsBehavior::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ParsedUnitsBehavior *self = (t_ParsedUnitsBehavior *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_ParsedUnitsBehavior::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_ParsedUnitsBehavior::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ParsedUnitsBehavior *self = (t_ParsedUnitsBehavior *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_ParsedUnitsBehavior::install(PyObject *module)
          {
            installType(&PY_TYPE(ParsedUnitsBehavior), &PY_TYPE_DEF(ParsedUnitsBehavior), module, "ParsedUnitsBehavior", 0);
          }

          void t_ParsedUnitsBehavior::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "class_", make_descriptor(ParsedUnitsBehavior::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "wrapfn_", make_descriptor(t_ParsedUnitsBehavior::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "boxfn_", make_descriptor(boxObject));
            env->getClass(ParsedUnitsBehavior::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "CONVERT_COMPATIBLE", make_descriptor(t_ParsedUnitsBehavior::wrap_Object(*ParsedUnitsBehavior::CONVERT_COMPATIBLE)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "IGNORE_PARSED", make_descriptor(t_ParsedUnitsBehavior::wrap_Object(*ParsedUnitsBehavior::IGNORE_PARSED)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ParsedUnitsBehavior), "STRICT_COMPLIANCE", make_descriptor(t_ParsedUnitsBehavior::wrap_Object(*ParsedUnitsBehavior::STRICT_COMPLIANCE)));
          }

          static PyObject *t_ParsedUnitsBehavior_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ParsedUnitsBehavior::initializeClass, 1)))
              return NULL;
            return t_ParsedUnitsBehavior::wrap_Object(ParsedUnitsBehavior(((t_ParsedUnitsBehavior *) arg)->object.this$));
          }
          static PyObject *t_ParsedUnitsBehavior_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ParsedUnitsBehavior::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ParsedUnitsBehavior_of_(t_ParsedUnitsBehavior *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_ParsedUnitsBehavior_select(t_ParsedUnitsBehavior *self, PyObject *args)
          {
            ::org::orekit::utils::units::Unit a0((jobject) NULL);
            ::org::orekit::utils::units::Unit a1((jobject) NULL);
            ::org::orekit::utils::units::Unit result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::utils::units::Unit::initializeClass, ::org::orekit::utils::units::Unit::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.select(a0, a1));
              return ::org::orekit::utils::units::t_Unit::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "select", args);
            return NULL;
          }

          static PyObject *t_ParsedUnitsBehavior_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ParsedUnitsBehavior result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::valueOf(a0));
              return t_ParsedUnitsBehavior::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_ParsedUnitsBehavior_values(PyTypeObject *type)
          {
            JArray< ParsedUnitsBehavior > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::ParsedUnitsBehavior::values());
            return JArray<jobject>(result.this$).wrap(t_ParsedUnitsBehavior::wrap_jobject);
          }
          static PyObject *t_ParsedUnitsBehavior_get__parameters_(t_ParsedUnitsBehavior *self, void *data)
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
#include "org/hipparchus/ode/LocalizedODEFormats.h"
#include "java/util/Locale.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/hipparchus/ode/LocalizedODEFormats.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *LocalizedODEFormats::class$ = NULL;
      jmethodID *LocalizedODEFormats::mids$ = NULL;
      bool LocalizedODEFormats::live$ = false;
      LocalizedODEFormats *LocalizedODEFormats::FIND_ROOT = NULL;
      LocalizedODEFormats *LocalizedODEFormats::HOLE_BETWEEN_MODELS_TIME_RANGES = NULL;
      LocalizedODEFormats *LocalizedODEFormats::INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS = NULL;
      LocalizedODEFormats *LocalizedODEFormats::MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION = NULL;
      LocalizedODEFormats *LocalizedODEFormats::MULTISTEP_STARTER_STOPPED_EARLY = NULL;
      LocalizedODEFormats *LocalizedODEFormats::NAN_APPEARING_DURING_INTEGRATION = NULL;
      LocalizedODEFormats *LocalizedODEFormats::PROPAGATION_DIRECTION_MISMATCH = NULL;
      LocalizedODEFormats *LocalizedODEFormats::TOO_SMALL_INTEGRATION_INTERVAL = NULL;
      LocalizedODEFormats *LocalizedODEFormats::UNKNOWN_PARAMETER = NULL;
      LocalizedODEFormats *LocalizedODEFormats::UNMATCHED_ODE_IN_EXPANDED_SET = NULL;

      jclass LocalizedODEFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/LocalizedODEFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_5969ecf7afac3dba] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_d2c8eb4129821f0e] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_c4f24342edc64ad5] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/ode/LocalizedODEFormats;");
          mids$[mid_values_255a94617bd89a8a] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/ode/LocalizedODEFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          FIND_ROOT = new LocalizedODEFormats(env->getStaticObjectField(cls, "FIND_ROOT", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          HOLE_BETWEEN_MODELS_TIME_RANGES = new LocalizedODEFormats(env->getStaticObjectField(cls, "HOLE_BETWEEN_MODELS_TIME_RANGES", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS = new LocalizedODEFormats(env->getStaticObjectField(cls, "INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION = new LocalizedODEFormats(env->getStaticObjectField(cls, "MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          MULTISTEP_STARTER_STOPPED_EARLY = new LocalizedODEFormats(env->getStaticObjectField(cls, "MULTISTEP_STARTER_STOPPED_EARLY", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          NAN_APPEARING_DURING_INTEGRATION = new LocalizedODEFormats(env->getStaticObjectField(cls, "NAN_APPEARING_DURING_INTEGRATION", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          PROPAGATION_DIRECTION_MISMATCH = new LocalizedODEFormats(env->getStaticObjectField(cls, "PROPAGATION_DIRECTION_MISMATCH", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          TOO_SMALL_INTEGRATION_INTERVAL = new LocalizedODEFormats(env->getStaticObjectField(cls, "TOO_SMALL_INTEGRATION_INTERVAL", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          UNKNOWN_PARAMETER = new LocalizedODEFormats(env->getStaticObjectField(cls, "UNKNOWN_PARAMETER", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          UNMATCHED_ODE_IN_EXPANDED_SET = new LocalizedODEFormats(env->getStaticObjectField(cls, "UNMATCHED_ODE_IN_EXPANDED_SET", "Lorg/hipparchus/ode/LocalizedODEFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedODEFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_5969ecf7afac3dba], a0.this$));
      }

      ::java::lang::String LocalizedODEFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_d2c8eb4129821f0e]));
      }

      LocalizedODEFormats LocalizedODEFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedODEFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c4f24342edc64ad5], a0.this$));
      }

      JArray< LocalizedODEFormats > LocalizedODEFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedODEFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_255a94617bd89a8a]));
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
      static PyObject *t_LocalizedODEFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedODEFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedODEFormats_of_(t_LocalizedODEFormats *self, PyObject *args);
      static PyObject *t_LocalizedODEFormats_getLocalizedString(t_LocalizedODEFormats *self, PyObject *arg);
      static PyObject *t_LocalizedODEFormats_getSourceString(t_LocalizedODEFormats *self);
      static PyObject *t_LocalizedODEFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedODEFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedODEFormats_get__sourceString(t_LocalizedODEFormats *self, void *data);
      static PyObject *t_LocalizedODEFormats_get__parameters_(t_LocalizedODEFormats *self, void *data);
      static PyGetSetDef t_LocalizedODEFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedODEFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedODEFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedODEFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedODEFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedODEFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedODEFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedODEFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedODEFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedODEFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedODEFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedODEFormats)[] = {
        { Py_tp_methods, t_LocalizedODEFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedODEFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedODEFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedODEFormats, t_LocalizedODEFormats, LocalizedODEFormats);
      PyObject *t_LocalizedODEFormats::wrap_Object(const LocalizedODEFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedODEFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedODEFormats *self = (t_LocalizedODEFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedODEFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedODEFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedODEFormats *self = (t_LocalizedODEFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedODEFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedODEFormats), &PY_TYPE_DEF(LocalizedODEFormats), module, "LocalizedODEFormats", 0);
      }

      void t_LocalizedODEFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "class_", make_descriptor(LocalizedODEFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "wrapfn_", make_descriptor(t_LocalizedODEFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedODEFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "FIND_ROOT", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::FIND_ROOT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "HOLE_BETWEEN_MODELS_TIME_RANGES", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::HOLE_BETWEEN_MODELS_TIME_RANGES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::INTEGRATION_METHOD_NEEDS_AT_LEAST_TWO_PREVIOUS_POINTS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::MINIMAL_STEPSIZE_REACHED_DURING_INTEGRATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "MULTISTEP_STARTER_STOPPED_EARLY", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::MULTISTEP_STARTER_STOPPED_EARLY)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "NAN_APPEARING_DURING_INTEGRATION", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::NAN_APPEARING_DURING_INTEGRATION)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "PROPAGATION_DIRECTION_MISMATCH", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::PROPAGATION_DIRECTION_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "TOO_SMALL_INTEGRATION_INTERVAL", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::TOO_SMALL_INTEGRATION_INTERVAL)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "UNKNOWN_PARAMETER", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::UNKNOWN_PARAMETER)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedODEFormats), "UNMATCHED_ODE_IN_EXPANDED_SET", make_descriptor(t_LocalizedODEFormats::wrap_Object(*LocalizedODEFormats::UNMATCHED_ODE_IN_EXPANDED_SET)));
      }

      static PyObject *t_LocalizedODEFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedODEFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedODEFormats::wrap_Object(LocalizedODEFormats(((t_LocalizedODEFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedODEFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedODEFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedODEFormats_of_(t_LocalizedODEFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedODEFormats_getLocalizedString(t_LocalizedODEFormats *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_LocalizedODEFormats_getSourceString(t_LocalizedODEFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedODEFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedODEFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::ode::LocalizedODEFormats::valueOf(a0));
          return t_LocalizedODEFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedODEFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedODEFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::ode::LocalizedODEFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedODEFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedODEFormats_get__parameters_(t_LocalizedODEFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedODEFormats_get__sourceString(t_LocalizedODEFormats *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/BoundedAttitudeProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *BoundedAttitudeProvider::class$ = NULL;
      jmethodID *BoundedAttitudeProvider::mids$ = NULL;
      bool BoundedAttitudeProvider::live$ = false;

      jclass BoundedAttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/BoundedAttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getMaxDate_80e11148db499dda] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_80e11148db499dda] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::AbsoluteDate BoundedAttitudeProvider::getMaxDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMaxDate_80e11148db499dda]));
      }

      ::org::orekit::time::AbsoluteDate BoundedAttitudeProvider::getMinDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMinDate_80e11148db499dda]));
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
      static PyObject *t_BoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BoundedAttitudeProvider_getMaxDate(t_BoundedAttitudeProvider *self);
      static PyObject *t_BoundedAttitudeProvider_getMinDate(t_BoundedAttitudeProvider *self);
      static PyObject *t_BoundedAttitudeProvider_get__maxDate(t_BoundedAttitudeProvider *self, void *data);
      static PyObject *t_BoundedAttitudeProvider_get__minDate(t_BoundedAttitudeProvider *self, void *data);
      static PyGetSetDef t_BoundedAttitudeProvider__fields_[] = {
        DECLARE_GET_FIELD(t_BoundedAttitudeProvider, maxDate),
        DECLARE_GET_FIELD(t_BoundedAttitudeProvider, minDate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BoundedAttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_BoundedAttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoundedAttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BoundedAttitudeProvider, getMaxDate, METH_NOARGS),
        DECLARE_METHOD(t_BoundedAttitudeProvider, getMinDate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BoundedAttitudeProvider)[] = {
        { Py_tp_methods, t_BoundedAttitudeProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BoundedAttitudeProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BoundedAttitudeProvider)[] = {
        &PY_TYPE_DEF(::org::orekit::attitudes::AttitudeProvider),
        NULL
      };

      DEFINE_TYPE(BoundedAttitudeProvider, t_BoundedAttitudeProvider, BoundedAttitudeProvider);

      void t_BoundedAttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(BoundedAttitudeProvider), &PY_TYPE_DEF(BoundedAttitudeProvider), module, "BoundedAttitudeProvider", 0);
      }

      void t_BoundedAttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedAttitudeProvider), "class_", make_descriptor(BoundedAttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedAttitudeProvider), "wrapfn_", make_descriptor(t_BoundedAttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BoundedAttitudeProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BoundedAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BoundedAttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_BoundedAttitudeProvider::wrap_Object(BoundedAttitudeProvider(((t_BoundedAttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_BoundedAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BoundedAttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BoundedAttitudeProvider_getMaxDate(t_BoundedAttitudeProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_BoundedAttitudeProvider_getMinDate(t_BoundedAttitudeProvider *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getMinDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_BoundedAttitudeProvider_get__maxDate(t_BoundedAttitudeProvider *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getMaxDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_BoundedAttitudeProvider_get__minDate(t_BoundedAttitudeProvider *self, void *data)
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
#include "org/orekit/gnss/metric/parser/RtcmDataField.h"
#include "org/orekit/gnss/metric/parser/DataField.h"
#include "org/orekit/gnss/metric/parser/RtcmDataField.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *RtcmDataField::class$ = NULL;
          jmethodID *RtcmDataField::mids$ = NULL;
          bool RtcmDataField::live$ = false;
          RtcmDataField *RtcmDataField::DF002 = NULL;
          RtcmDataField *RtcmDataField::DF009 = NULL;
          RtcmDataField *RtcmDataField::DF038 = NULL;
          RtcmDataField *RtcmDataField::DF040 = NULL;
          RtcmDataField *RtcmDataField::DF068 = NULL;
          RtcmDataField *RtcmDataField::DF071 = NULL;
          RtcmDataField *RtcmDataField::DF076 = NULL;
          RtcmDataField *RtcmDataField::DF077 = NULL;
          RtcmDataField *RtcmDataField::DF078 = NULL;
          RtcmDataField *RtcmDataField::DF079 = NULL;
          RtcmDataField *RtcmDataField::DF081 = NULL;
          RtcmDataField *RtcmDataField::DF082 = NULL;
          RtcmDataField *RtcmDataField::DF083 = NULL;
          RtcmDataField *RtcmDataField::DF084 = NULL;
          RtcmDataField *RtcmDataField::DF085 = NULL;
          RtcmDataField *RtcmDataField::DF086 = NULL;
          RtcmDataField *RtcmDataField::DF087 = NULL;
          RtcmDataField *RtcmDataField::DF088 = NULL;
          RtcmDataField *RtcmDataField::DF089 = NULL;
          RtcmDataField *RtcmDataField::DF090 = NULL;
          RtcmDataField *RtcmDataField::DF091 = NULL;
          RtcmDataField *RtcmDataField::DF092 = NULL;
          RtcmDataField *RtcmDataField::DF093 = NULL;
          RtcmDataField *RtcmDataField::DF094 = NULL;
          RtcmDataField *RtcmDataField::DF095 = NULL;
          RtcmDataField *RtcmDataField::DF096 = NULL;
          RtcmDataField *RtcmDataField::DF097 = NULL;
          RtcmDataField *RtcmDataField::DF098 = NULL;
          RtcmDataField *RtcmDataField::DF099 = NULL;
          RtcmDataField *RtcmDataField::DF100 = NULL;
          RtcmDataField *RtcmDataField::DF101 = NULL;
          RtcmDataField *RtcmDataField::DF102 = NULL;
          RtcmDataField *RtcmDataField::DF103 = NULL;
          RtcmDataField *RtcmDataField::DF104 = NULL;
          RtcmDataField *RtcmDataField::DF105 = NULL;
          RtcmDataField *RtcmDataField::DF106 = NULL;
          RtcmDataField *RtcmDataField::DF107 = NULL;
          RtcmDataField *RtcmDataField::DF108 = NULL;
          RtcmDataField *RtcmDataField::DF109 = NULL;
          RtcmDataField *RtcmDataField::DF110 = NULL;
          RtcmDataField *RtcmDataField::DF111 = NULL;
          RtcmDataField *RtcmDataField::DF112 = NULL;
          RtcmDataField *RtcmDataField::DF113 = NULL;
          RtcmDataField *RtcmDataField::DF114 = NULL;
          RtcmDataField *RtcmDataField::DF115 = NULL;
          RtcmDataField *RtcmDataField::DF116 = NULL;
          RtcmDataField *RtcmDataField::DF117 = NULL;
          RtcmDataField *RtcmDataField::DF118 = NULL;
          RtcmDataField *RtcmDataField::DF119 = NULL;
          RtcmDataField *RtcmDataField::DF120 = NULL;
          RtcmDataField *RtcmDataField::DF121 = NULL;
          RtcmDataField *RtcmDataField::DF122 = NULL;
          RtcmDataField *RtcmDataField::DF123 = NULL;
          RtcmDataField *RtcmDataField::DF124 = NULL;
          RtcmDataField *RtcmDataField::DF125 = NULL;
          RtcmDataField *RtcmDataField::DF126 = NULL;
          RtcmDataField *RtcmDataField::DF127 = NULL;
          RtcmDataField *RtcmDataField::DF128 = NULL;
          RtcmDataField *RtcmDataField::DF129 = NULL;
          RtcmDataField *RtcmDataField::DF130 = NULL;
          RtcmDataField *RtcmDataField::DF131 = NULL;
          RtcmDataField *RtcmDataField::DF132 = NULL;
          RtcmDataField *RtcmDataField::DF133 = NULL;
          RtcmDataField *RtcmDataField::DF134 = NULL;
          RtcmDataField *RtcmDataField::DF135 = NULL;
          RtcmDataField *RtcmDataField::DF136 = NULL;
          RtcmDataField *RtcmDataField::DF137 = NULL;
          RtcmDataField *RtcmDataField::DF252 = NULL;
          RtcmDataField *RtcmDataField::DF289 = NULL;
          RtcmDataField *RtcmDataField::DF290 = NULL;
          RtcmDataField *RtcmDataField::DF291 = NULL;
          RtcmDataField *RtcmDataField::DF292 = NULL;
          RtcmDataField *RtcmDataField::DF293 = NULL;
          RtcmDataField *RtcmDataField::DF294 = NULL;
          RtcmDataField *RtcmDataField::DF295 = NULL;
          RtcmDataField *RtcmDataField::DF296 = NULL;
          RtcmDataField *RtcmDataField::DF297 = NULL;
          RtcmDataField *RtcmDataField::DF298 = NULL;
          RtcmDataField *RtcmDataField::DF299 = NULL;
          RtcmDataField *RtcmDataField::DF300 = NULL;
          RtcmDataField *RtcmDataField::DF301 = NULL;
          RtcmDataField *RtcmDataField::DF302 = NULL;
          RtcmDataField *RtcmDataField::DF303 = NULL;
          RtcmDataField *RtcmDataField::DF304 = NULL;
          RtcmDataField *RtcmDataField::DF305 = NULL;
          RtcmDataField *RtcmDataField::DF306 = NULL;
          RtcmDataField *RtcmDataField::DF307 = NULL;
          RtcmDataField *RtcmDataField::DF308 = NULL;
          RtcmDataField *RtcmDataField::DF309 = NULL;
          RtcmDataField *RtcmDataField::DF310 = NULL;
          RtcmDataField *RtcmDataField::DF311 = NULL;
          RtcmDataField *RtcmDataField::DF312 = NULL;
          RtcmDataField *RtcmDataField::DF313 = NULL;
          RtcmDataField *RtcmDataField::DF314 = NULL;
          RtcmDataField *RtcmDataField::DF315 = NULL;
          RtcmDataField *RtcmDataField::DF316 = NULL;
          RtcmDataField *RtcmDataField::DF317 = NULL;
          RtcmDataField *RtcmDataField::DF365 = NULL;
          RtcmDataField *RtcmDataField::DF366 = NULL;
          RtcmDataField *RtcmDataField::DF367 = NULL;
          RtcmDataField *RtcmDataField::DF368 = NULL;
          RtcmDataField *RtcmDataField::DF369 = NULL;
          RtcmDataField *RtcmDataField::DF370 = NULL;
          RtcmDataField *RtcmDataField::DF375 = NULL;
          RtcmDataField *RtcmDataField::DF376 = NULL;
          RtcmDataField *RtcmDataField::DF377 = NULL;
          RtcmDataField *RtcmDataField::DF378 = NULL;
          RtcmDataField *RtcmDataField::DF384 = NULL;
          RtcmDataField *RtcmDataField::DF385 = NULL;
          RtcmDataField *RtcmDataField::DF386 = NULL;
          RtcmDataField *RtcmDataField::DF387 = NULL;
          RtcmDataField *RtcmDataField::DF388 = NULL;
          RtcmDataField *RtcmDataField::DF391 = NULL;
          RtcmDataField *RtcmDataField::DF392 = NULL;
          RtcmDataField *RtcmDataField::DF413 = NULL;
          RtcmDataField *RtcmDataField::DF414 = NULL;
          RtcmDataField *RtcmDataField::DF415 = NULL;
          RtcmDataField *RtcmDataField::DF429 = NULL;
          RtcmDataField *RtcmDataField::DF430 = NULL;
          RtcmDataField *RtcmDataField::DF431 = NULL;
          RtcmDataField *RtcmDataField::DF432 = NULL;
          RtcmDataField *RtcmDataField::DF433 = NULL;
          RtcmDataField *RtcmDataField::DF434 = NULL;
          RtcmDataField *RtcmDataField::DF435 = NULL;
          RtcmDataField *RtcmDataField::DF436 = NULL;
          RtcmDataField *RtcmDataField::DF437 = NULL;
          RtcmDataField *RtcmDataField::DF438 = NULL;
          RtcmDataField *RtcmDataField::DF439 = NULL;
          RtcmDataField *RtcmDataField::DF440 = NULL;
          RtcmDataField *RtcmDataField::DF441 = NULL;
          RtcmDataField *RtcmDataField::DF442 = NULL;
          RtcmDataField *RtcmDataField::DF443 = NULL;
          RtcmDataField *RtcmDataField::DF444 = NULL;
          RtcmDataField *RtcmDataField::DF445 = NULL;
          RtcmDataField *RtcmDataField::DF446 = NULL;
          RtcmDataField *RtcmDataField::DF447 = NULL;
          RtcmDataField *RtcmDataField::DF448 = NULL;
          RtcmDataField *RtcmDataField::DF449 = NULL;
          RtcmDataField *RtcmDataField::DF450 = NULL;
          RtcmDataField *RtcmDataField::DF451 = NULL;
          RtcmDataField *RtcmDataField::DF452 = NULL;
          RtcmDataField *RtcmDataField::DF453 = NULL;
          RtcmDataField *RtcmDataField::DF454 = NULL;
          RtcmDataField *RtcmDataField::DF455 = NULL;
          RtcmDataField *RtcmDataField::DF456 = NULL;
          RtcmDataField *RtcmDataField::DF457 = NULL;
          RtcmDataField *RtcmDataField::DF458 = NULL;
          RtcmDataField *RtcmDataField::DF488 = NULL;
          RtcmDataField *RtcmDataField::DF489 = NULL;
          RtcmDataField *RtcmDataField::DF490 = NULL;
          RtcmDataField *RtcmDataField::DF491 = NULL;
          RtcmDataField *RtcmDataField::DF492 = NULL;
          RtcmDataField *RtcmDataField::DF493 = NULL;
          RtcmDataField *RtcmDataField::DF494 = NULL;
          RtcmDataField *RtcmDataField::DF495 = NULL;
          RtcmDataField *RtcmDataField::DF496 = NULL;
          RtcmDataField *RtcmDataField::DF497 = NULL;
          RtcmDataField *RtcmDataField::DF498 = NULL;
          RtcmDataField *RtcmDataField::DF499 = NULL;
          RtcmDataField *RtcmDataField::DF500 = NULL;
          RtcmDataField *RtcmDataField::DF501 = NULL;
          RtcmDataField *RtcmDataField::DF502 = NULL;
          RtcmDataField *RtcmDataField::DF503 = NULL;
          RtcmDataField *RtcmDataField::DF504 = NULL;
          RtcmDataField *RtcmDataField::DF505 = NULL;
          RtcmDataField *RtcmDataField::DF506 = NULL;
          RtcmDataField *RtcmDataField::DF507 = NULL;
          RtcmDataField *RtcmDataField::DF508 = NULL;
          RtcmDataField *RtcmDataField::DF509 = NULL;
          RtcmDataField *RtcmDataField::DF510 = NULL;
          RtcmDataField *RtcmDataField::DF511 = NULL;
          RtcmDataField *RtcmDataField::DF512 = NULL;
          RtcmDataField *RtcmDataField::DF513 = NULL;
          RtcmDataField *RtcmDataField::DF514 = NULL;
          RtcmDataField *RtcmDataField::DF515 = NULL;

          jclass RtcmDataField::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/RtcmDataField");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_47697340992c2033] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/metric/parser/RtcmDataField;");
              mids$[mid_values_8a76d635dea83836] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/metric/parser/RtcmDataField;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DF002 = new RtcmDataField(env->getStaticObjectField(cls, "DF002", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF009 = new RtcmDataField(env->getStaticObjectField(cls, "DF009", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF038 = new RtcmDataField(env->getStaticObjectField(cls, "DF038", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF040 = new RtcmDataField(env->getStaticObjectField(cls, "DF040", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF068 = new RtcmDataField(env->getStaticObjectField(cls, "DF068", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF071 = new RtcmDataField(env->getStaticObjectField(cls, "DF071", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF076 = new RtcmDataField(env->getStaticObjectField(cls, "DF076", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF077 = new RtcmDataField(env->getStaticObjectField(cls, "DF077", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF078 = new RtcmDataField(env->getStaticObjectField(cls, "DF078", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF079 = new RtcmDataField(env->getStaticObjectField(cls, "DF079", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF081 = new RtcmDataField(env->getStaticObjectField(cls, "DF081", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF082 = new RtcmDataField(env->getStaticObjectField(cls, "DF082", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF083 = new RtcmDataField(env->getStaticObjectField(cls, "DF083", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF084 = new RtcmDataField(env->getStaticObjectField(cls, "DF084", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF085 = new RtcmDataField(env->getStaticObjectField(cls, "DF085", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF086 = new RtcmDataField(env->getStaticObjectField(cls, "DF086", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF087 = new RtcmDataField(env->getStaticObjectField(cls, "DF087", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF088 = new RtcmDataField(env->getStaticObjectField(cls, "DF088", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF089 = new RtcmDataField(env->getStaticObjectField(cls, "DF089", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF090 = new RtcmDataField(env->getStaticObjectField(cls, "DF090", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF091 = new RtcmDataField(env->getStaticObjectField(cls, "DF091", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF092 = new RtcmDataField(env->getStaticObjectField(cls, "DF092", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF093 = new RtcmDataField(env->getStaticObjectField(cls, "DF093", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF094 = new RtcmDataField(env->getStaticObjectField(cls, "DF094", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF095 = new RtcmDataField(env->getStaticObjectField(cls, "DF095", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF096 = new RtcmDataField(env->getStaticObjectField(cls, "DF096", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF097 = new RtcmDataField(env->getStaticObjectField(cls, "DF097", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF098 = new RtcmDataField(env->getStaticObjectField(cls, "DF098", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF099 = new RtcmDataField(env->getStaticObjectField(cls, "DF099", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF100 = new RtcmDataField(env->getStaticObjectField(cls, "DF100", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF101 = new RtcmDataField(env->getStaticObjectField(cls, "DF101", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF102 = new RtcmDataField(env->getStaticObjectField(cls, "DF102", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF103 = new RtcmDataField(env->getStaticObjectField(cls, "DF103", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF104 = new RtcmDataField(env->getStaticObjectField(cls, "DF104", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF105 = new RtcmDataField(env->getStaticObjectField(cls, "DF105", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF106 = new RtcmDataField(env->getStaticObjectField(cls, "DF106", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF107 = new RtcmDataField(env->getStaticObjectField(cls, "DF107", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF108 = new RtcmDataField(env->getStaticObjectField(cls, "DF108", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF109 = new RtcmDataField(env->getStaticObjectField(cls, "DF109", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF110 = new RtcmDataField(env->getStaticObjectField(cls, "DF110", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF111 = new RtcmDataField(env->getStaticObjectField(cls, "DF111", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF112 = new RtcmDataField(env->getStaticObjectField(cls, "DF112", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF113 = new RtcmDataField(env->getStaticObjectField(cls, "DF113", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF114 = new RtcmDataField(env->getStaticObjectField(cls, "DF114", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF115 = new RtcmDataField(env->getStaticObjectField(cls, "DF115", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF116 = new RtcmDataField(env->getStaticObjectField(cls, "DF116", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF117 = new RtcmDataField(env->getStaticObjectField(cls, "DF117", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF118 = new RtcmDataField(env->getStaticObjectField(cls, "DF118", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF119 = new RtcmDataField(env->getStaticObjectField(cls, "DF119", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF120 = new RtcmDataField(env->getStaticObjectField(cls, "DF120", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF121 = new RtcmDataField(env->getStaticObjectField(cls, "DF121", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF122 = new RtcmDataField(env->getStaticObjectField(cls, "DF122", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF123 = new RtcmDataField(env->getStaticObjectField(cls, "DF123", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF124 = new RtcmDataField(env->getStaticObjectField(cls, "DF124", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF125 = new RtcmDataField(env->getStaticObjectField(cls, "DF125", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF126 = new RtcmDataField(env->getStaticObjectField(cls, "DF126", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF127 = new RtcmDataField(env->getStaticObjectField(cls, "DF127", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF128 = new RtcmDataField(env->getStaticObjectField(cls, "DF128", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF129 = new RtcmDataField(env->getStaticObjectField(cls, "DF129", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF130 = new RtcmDataField(env->getStaticObjectField(cls, "DF130", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF131 = new RtcmDataField(env->getStaticObjectField(cls, "DF131", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF132 = new RtcmDataField(env->getStaticObjectField(cls, "DF132", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF133 = new RtcmDataField(env->getStaticObjectField(cls, "DF133", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF134 = new RtcmDataField(env->getStaticObjectField(cls, "DF134", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF135 = new RtcmDataField(env->getStaticObjectField(cls, "DF135", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF136 = new RtcmDataField(env->getStaticObjectField(cls, "DF136", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF137 = new RtcmDataField(env->getStaticObjectField(cls, "DF137", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF252 = new RtcmDataField(env->getStaticObjectField(cls, "DF252", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF289 = new RtcmDataField(env->getStaticObjectField(cls, "DF289", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF290 = new RtcmDataField(env->getStaticObjectField(cls, "DF290", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF291 = new RtcmDataField(env->getStaticObjectField(cls, "DF291", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF292 = new RtcmDataField(env->getStaticObjectField(cls, "DF292", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF293 = new RtcmDataField(env->getStaticObjectField(cls, "DF293", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF294 = new RtcmDataField(env->getStaticObjectField(cls, "DF294", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF295 = new RtcmDataField(env->getStaticObjectField(cls, "DF295", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF296 = new RtcmDataField(env->getStaticObjectField(cls, "DF296", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF297 = new RtcmDataField(env->getStaticObjectField(cls, "DF297", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF298 = new RtcmDataField(env->getStaticObjectField(cls, "DF298", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF299 = new RtcmDataField(env->getStaticObjectField(cls, "DF299", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF300 = new RtcmDataField(env->getStaticObjectField(cls, "DF300", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF301 = new RtcmDataField(env->getStaticObjectField(cls, "DF301", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF302 = new RtcmDataField(env->getStaticObjectField(cls, "DF302", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF303 = new RtcmDataField(env->getStaticObjectField(cls, "DF303", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF304 = new RtcmDataField(env->getStaticObjectField(cls, "DF304", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF305 = new RtcmDataField(env->getStaticObjectField(cls, "DF305", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF306 = new RtcmDataField(env->getStaticObjectField(cls, "DF306", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF307 = new RtcmDataField(env->getStaticObjectField(cls, "DF307", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF308 = new RtcmDataField(env->getStaticObjectField(cls, "DF308", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF309 = new RtcmDataField(env->getStaticObjectField(cls, "DF309", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF310 = new RtcmDataField(env->getStaticObjectField(cls, "DF310", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF311 = new RtcmDataField(env->getStaticObjectField(cls, "DF311", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF312 = new RtcmDataField(env->getStaticObjectField(cls, "DF312", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF313 = new RtcmDataField(env->getStaticObjectField(cls, "DF313", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF314 = new RtcmDataField(env->getStaticObjectField(cls, "DF314", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF315 = new RtcmDataField(env->getStaticObjectField(cls, "DF315", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF316 = new RtcmDataField(env->getStaticObjectField(cls, "DF316", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF317 = new RtcmDataField(env->getStaticObjectField(cls, "DF317", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF365 = new RtcmDataField(env->getStaticObjectField(cls, "DF365", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF366 = new RtcmDataField(env->getStaticObjectField(cls, "DF366", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF367 = new RtcmDataField(env->getStaticObjectField(cls, "DF367", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF368 = new RtcmDataField(env->getStaticObjectField(cls, "DF368", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF369 = new RtcmDataField(env->getStaticObjectField(cls, "DF369", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF370 = new RtcmDataField(env->getStaticObjectField(cls, "DF370", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF375 = new RtcmDataField(env->getStaticObjectField(cls, "DF375", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF376 = new RtcmDataField(env->getStaticObjectField(cls, "DF376", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF377 = new RtcmDataField(env->getStaticObjectField(cls, "DF377", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF378 = new RtcmDataField(env->getStaticObjectField(cls, "DF378", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF384 = new RtcmDataField(env->getStaticObjectField(cls, "DF384", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF385 = new RtcmDataField(env->getStaticObjectField(cls, "DF385", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF386 = new RtcmDataField(env->getStaticObjectField(cls, "DF386", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF387 = new RtcmDataField(env->getStaticObjectField(cls, "DF387", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF388 = new RtcmDataField(env->getStaticObjectField(cls, "DF388", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF391 = new RtcmDataField(env->getStaticObjectField(cls, "DF391", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF392 = new RtcmDataField(env->getStaticObjectField(cls, "DF392", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF413 = new RtcmDataField(env->getStaticObjectField(cls, "DF413", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF414 = new RtcmDataField(env->getStaticObjectField(cls, "DF414", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF415 = new RtcmDataField(env->getStaticObjectField(cls, "DF415", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF429 = new RtcmDataField(env->getStaticObjectField(cls, "DF429", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF430 = new RtcmDataField(env->getStaticObjectField(cls, "DF430", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF431 = new RtcmDataField(env->getStaticObjectField(cls, "DF431", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF432 = new RtcmDataField(env->getStaticObjectField(cls, "DF432", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF433 = new RtcmDataField(env->getStaticObjectField(cls, "DF433", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF434 = new RtcmDataField(env->getStaticObjectField(cls, "DF434", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF435 = new RtcmDataField(env->getStaticObjectField(cls, "DF435", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF436 = new RtcmDataField(env->getStaticObjectField(cls, "DF436", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF437 = new RtcmDataField(env->getStaticObjectField(cls, "DF437", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF438 = new RtcmDataField(env->getStaticObjectField(cls, "DF438", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF439 = new RtcmDataField(env->getStaticObjectField(cls, "DF439", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF440 = new RtcmDataField(env->getStaticObjectField(cls, "DF440", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF441 = new RtcmDataField(env->getStaticObjectField(cls, "DF441", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF442 = new RtcmDataField(env->getStaticObjectField(cls, "DF442", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF443 = new RtcmDataField(env->getStaticObjectField(cls, "DF443", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF444 = new RtcmDataField(env->getStaticObjectField(cls, "DF444", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF445 = new RtcmDataField(env->getStaticObjectField(cls, "DF445", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF446 = new RtcmDataField(env->getStaticObjectField(cls, "DF446", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF447 = new RtcmDataField(env->getStaticObjectField(cls, "DF447", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF448 = new RtcmDataField(env->getStaticObjectField(cls, "DF448", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF449 = new RtcmDataField(env->getStaticObjectField(cls, "DF449", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF450 = new RtcmDataField(env->getStaticObjectField(cls, "DF450", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF451 = new RtcmDataField(env->getStaticObjectField(cls, "DF451", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF452 = new RtcmDataField(env->getStaticObjectField(cls, "DF452", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF453 = new RtcmDataField(env->getStaticObjectField(cls, "DF453", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF454 = new RtcmDataField(env->getStaticObjectField(cls, "DF454", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF455 = new RtcmDataField(env->getStaticObjectField(cls, "DF455", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF456 = new RtcmDataField(env->getStaticObjectField(cls, "DF456", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF457 = new RtcmDataField(env->getStaticObjectField(cls, "DF457", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF458 = new RtcmDataField(env->getStaticObjectField(cls, "DF458", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF488 = new RtcmDataField(env->getStaticObjectField(cls, "DF488", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF489 = new RtcmDataField(env->getStaticObjectField(cls, "DF489", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF490 = new RtcmDataField(env->getStaticObjectField(cls, "DF490", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF491 = new RtcmDataField(env->getStaticObjectField(cls, "DF491", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF492 = new RtcmDataField(env->getStaticObjectField(cls, "DF492", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF493 = new RtcmDataField(env->getStaticObjectField(cls, "DF493", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF494 = new RtcmDataField(env->getStaticObjectField(cls, "DF494", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF495 = new RtcmDataField(env->getStaticObjectField(cls, "DF495", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF496 = new RtcmDataField(env->getStaticObjectField(cls, "DF496", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF497 = new RtcmDataField(env->getStaticObjectField(cls, "DF497", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF498 = new RtcmDataField(env->getStaticObjectField(cls, "DF498", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF499 = new RtcmDataField(env->getStaticObjectField(cls, "DF499", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF500 = new RtcmDataField(env->getStaticObjectField(cls, "DF500", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF501 = new RtcmDataField(env->getStaticObjectField(cls, "DF501", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF502 = new RtcmDataField(env->getStaticObjectField(cls, "DF502", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF503 = new RtcmDataField(env->getStaticObjectField(cls, "DF503", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF504 = new RtcmDataField(env->getStaticObjectField(cls, "DF504", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF505 = new RtcmDataField(env->getStaticObjectField(cls, "DF505", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF506 = new RtcmDataField(env->getStaticObjectField(cls, "DF506", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF507 = new RtcmDataField(env->getStaticObjectField(cls, "DF507", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF508 = new RtcmDataField(env->getStaticObjectField(cls, "DF508", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF509 = new RtcmDataField(env->getStaticObjectField(cls, "DF509", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF510 = new RtcmDataField(env->getStaticObjectField(cls, "DF510", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF511 = new RtcmDataField(env->getStaticObjectField(cls, "DF511", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF512 = new RtcmDataField(env->getStaticObjectField(cls, "DF512", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF513 = new RtcmDataField(env->getStaticObjectField(cls, "DF513", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF514 = new RtcmDataField(env->getStaticObjectField(cls, "DF514", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              DF515 = new RtcmDataField(env->getStaticObjectField(cls, "DF515", "Lorg/orekit/gnss/metric/parser/RtcmDataField;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RtcmDataField RtcmDataField::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RtcmDataField(env->callStaticObjectMethod(cls, mids$[mid_valueOf_47697340992c2033], a0.this$));
          }

          JArray< RtcmDataField > RtcmDataField::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RtcmDataField >(env->callStaticObjectMethod(cls, mids$[mid_values_8a76d635dea83836]));
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
          static PyObject *t_RtcmDataField_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmDataField_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RtcmDataField_of_(t_RtcmDataField *self, PyObject *args);
          static PyObject *t_RtcmDataField_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RtcmDataField_values(PyTypeObject *type);
          static PyObject *t_RtcmDataField_get__parameters_(t_RtcmDataField *self, void *data);
          static PyGetSetDef t_RtcmDataField__fields_[] = {
            DECLARE_GET_FIELD(t_RtcmDataField, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RtcmDataField__methods_[] = {
            DECLARE_METHOD(t_RtcmDataField, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmDataField, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RtcmDataField, of_, METH_VARARGS),
            DECLARE_METHOD(t_RtcmDataField, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RtcmDataField, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RtcmDataField)[] = {
            { Py_tp_methods, t_RtcmDataField__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RtcmDataField__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RtcmDataField)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RtcmDataField, t_RtcmDataField, RtcmDataField);
          PyObject *t_RtcmDataField::wrap_Object(const RtcmDataField& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RtcmDataField::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RtcmDataField *self = (t_RtcmDataField *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RtcmDataField::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RtcmDataField::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RtcmDataField *self = (t_RtcmDataField *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RtcmDataField::install(PyObject *module)
          {
            installType(&PY_TYPE(RtcmDataField), &PY_TYPE_DEF(RtcmDataField), module, "RtcmDataField", 0);
          }

          void t_RtcmDataField::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "class_", make_descriptor(RtcmDataField::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "wrapfn_", make_descriptor(t_RtcmDataField::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "boxfn_", make_descriptor(boxObject));
            env->getClass(RtcmDataField::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF002", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF002)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF009", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF009)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF038", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF038)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF040", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF040)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF068", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF068)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF071", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF071)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF076", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF076)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF077", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF077)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF078", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF078)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF079", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF079)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF081", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF081)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF082", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF082)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF083", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF083)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF084", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF084)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF085", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF085)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF086", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF086)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF087", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF087)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF088", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF088)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF089", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF089)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF090", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF090)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF091", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF091)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF092", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF092)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF093", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF093)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF094", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF094)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF095", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF095)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF096", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF096)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF097", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF097)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF098", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF098)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF099", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF099)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF100", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF100)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF101", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF101)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF102", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF102)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF103", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF103)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF104", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF104)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF105", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF105)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF106", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF106)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF107", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF107)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF108", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF108)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF109", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF109)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF110", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF110)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF111", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF111)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF112", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF112)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF113", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF113)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF114", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF114)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF115", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF115)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF116", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF116)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF117", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF117)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF118", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF118)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF119", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF119)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF120", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF120)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF121", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF121)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF122", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF122)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF123", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF123)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF124", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF124)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF125", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF125)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF126", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF126)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF127", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF127)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF128", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF128)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF129", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF129)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF130", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF130)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF131", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF131)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF132", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF132)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF133", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF133)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF134", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF134)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF135", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF135)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF136", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF136)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF137", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF137)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF252", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF252)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF289", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF289)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF290", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF290)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF291", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF291)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF292", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF292)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF293", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF293)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF294", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF294)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF295", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF295)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF296", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF296)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF297", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF297)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF298", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF298)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF299", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF299)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF300", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF300)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF301", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF301)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF302", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF302)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF303", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF303)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF304", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF304)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF305", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF305)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF306", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF306)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF307", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF307)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF308", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF308)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF309", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF309)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF310", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF310)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF311", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF311)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF312", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF312)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF313", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF313)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF314", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF314)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF315", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF315)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF316", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF316)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF317", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF317)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF365", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF365)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF366", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF366)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF367", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF367)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF368", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF368)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF369", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF369)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF370", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF370)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF375", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF375)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF376", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF376)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF377", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF377)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF378", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF378)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF384", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF384)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF385", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF385)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF386", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF386)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF387", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF387)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF388", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF388)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF391", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF391)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF392", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF392)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF413", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF413)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF414", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF414)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF415", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF415)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF429", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF429)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF430", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF430)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF431", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF431)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF432", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF432)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF433", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF433)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF434", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF434)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF435", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF435)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF436", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF436)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF437", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF437)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF438", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF438)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF439", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF439)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF440", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF440)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF441", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF441)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF442", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF442)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF443", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF443)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF444", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF444)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF445", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF445)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF446", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF446)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF447", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF447)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF448", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF448)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF449", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF449)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF450", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF450)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF451", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF451)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF452", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF452)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF453", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF453)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF454", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF454)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF455", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF455)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF456", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF456)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF457", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF457)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF458", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF458)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF488", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF488)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF489", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF489)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF490", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF490)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF491", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF491)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF492", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF492)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF493", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF493)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF494", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF494)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF495", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF495)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF496", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF496)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF497", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF497)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF498", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF498)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF499", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF499)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF500", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF500)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF501", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF501)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF502", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF502)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF503", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF503)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF504", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF504)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF505", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF505)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF506", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF506)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF507", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF507)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF508", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF508)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF509", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF509)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF510", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF510)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF511", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF511)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF512", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF512)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF513", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF513)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF514", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF514)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmDataField), "DF515", make_descriptor(t_RtcmDataField::wrap_Object(*RtcmDataField::DF515)));
          }

          static PyObject *t_RtcmDataField_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RtcmDataField::initializeClass, 1)))
              return NULL;
            return t_RtcmDataField::wrap_Object(RtcmDataField(((t_RtcmDataField *) arg)->object.this$));
          }
          static PyObject *t_RtcmDataField_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RtcmDataField::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RtcmDataField_of_(t_RtcmDataField *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RtcmDataField_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RtcmDataField result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmDataField::valueOf(a0));
              return t_RtcmDataField::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RtcmDataField_values(PyTypeObject *type)
          {
            JArray< RtcmDataField > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::gnss::metric::parser::RtcmDataField::values());
            return JArray<jobject>(result.this$).wrap(t_RtcmDataField::wrap_jobject);
          }
          static PyObject *t_RtcmDataField_get__parameters_(t_RtcmDataField *self, void *data)
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
#include "org/hipparchus/special/elliptic/jacobi/JacobiEllipticBuilder.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "org/hipparchus/special/elliptic/jacobi/JacobiElliptic.h"
#include "java/lang/Class.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *JacobiEllipticBuilder::class$ = NULL;
          jmethodID *JacobiEllipticBuilder::mids$ = NULL;
          bool JacobiEllipticBuilder::live$ = false;

          jclass JacobiEllipticBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/JacobiEllipticBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_build_0c9af6e2d51a3f41] = env->getStaticMethodID(cls, "build", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic;");
              mids$[mid_build_be3d808bf3f13b03] = env->getStaticMethodID(cls, "build", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic;");
              mids$[mid_build_6d335e7d24da3092] = env->getStaticMethodID(cls, "build", "(D)Lorg/hipparchus/special/elliptic/jacobi/JacobiElliptic;");
              mids$[mid_build_7d6acf72b7310d24] = env->getStaticMethodID(cls, "build", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/special/elliptic/jacobi/FieldJacobiElliptic;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic JacobiEllipticBuilder::build(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic(env->callStaticObjectMethod(cls, mids$[mid_build_0c9af6e2d51a3f41], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic JacobiEllipticBuilder::build(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic(env->callStaticObjectMethod(cls, mids$[mid_build_be3d808bf3f13b03], a0.this$));
          }

          ::org::hipparchus::special::elliptic::jacobi::JacobiElliptic JacobiEllipticBuilder::build(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::special::elliptic::jacobi::JacobiElliptic(env->callStaticObjectMethod(cls, mids$[mid_build_6d335e7d24da3092], a0));
          }

          ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic JacobiEllipticBuilder::build(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic(env->callStaticObjectMethod(cls, mids$[mid_build_7d6acf72b7310d24], a0.this$));
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
          static PyObject *t_JacobiEllipticBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiEllipticBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_JacobiEllipticBuilder_build(PyTypeObject *type, PyObject *args);

          static PyMethodDef t_JacobiEllipticBuilder__methods_[] = {
            DECLARE_METHOD(t_JacobiEllipticBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiEllipticBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_JacobiEllipticBuilder, build, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(JacobiEllipticBuilder)[] = {
            { Py_tp_methods, t_JacobiEllipticBuilder__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(JacobiEllipticBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(JacobiEllipticBuilder, t_JacobiEllipticBuilder, JacobiEllipticBuilder);

          void t_JacobiEllipticBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(JacobiEllipticBuilder), &PY_TYPE_DEF(JacobiEllipticBuilder), module, "JacobiEllipticBuilder", 0);
          }

          void t_JacobiEllipticBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiEllipticBuilder), "class_", make_descriptor(JacobiEllipticBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiEllipticBuilder), "wrapfn_", make_descriptor(t_JacobiEllipticBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(JacobiEllipticBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_JacobiEllipticBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, JacobiEllipticBuilder::initializeClass, 1)))
              return NULL;
            return t_JacobiEllipticBuilder::wrap_Object(JacobiEllipticBuilder(((t_JacobiEllipticBuilder *) arg)->object.this$));
          }
          static PyObject *t_JacobiEllipticBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, JacobiEllipticBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_JacobiEllipticBuilder_build(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::jacobi::JacobiEllipticBuilder::build(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldJacobiElliptic::wrap_Object(result, ::org::hipparchus::complex::PY_TYPE(Complex));
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::jacobi::JacobiEllipticBuilder::build(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldJacobiElliptic::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                ::org::hipparchus::special::elliptic::jacobi::JacobiElliptic result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::jacobi::JacobiEllipticBuilder::build(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_JacobiElliptic::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::special::elliptic::jacobi::FieldJacobiElliptic result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::jacobi::JacobiEllipticBuilder::build(a0));
                  return ::org::hipparchus::special::elliptic::jacobi::t_FieldJacobiElliptic::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "build", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVectorWriter.h"
#include "org/orekit/files/ccsds/definitions/TimeConverter.h"
#include "org/orekit/files/ccsds/ndm/odm/StateVector.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *StateVectorWriter::class$ = NULL;
            jmethodID *StateVectorWriter::mids$ = NULL;
            bool StateVectorWriter::live$ = false;

            jclass StateVectorWriter::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/StateVectorWriter");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0c832d24faad04e3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Lorg/orekit/files/ccsds/ndm/odm/StateVector;Lorg/orekit/files/ccsds/definitions/TimeConverter;)V");
                mids$[mid_writeContent_05c6d36d73082fa6] = env->getMethodID(cls, "writeContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            StateVectorWriter::StateVectorWriter(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::org::orekit::files::ccsds::ndm::odm::StateVector & a2, const ::org::orekit::files::ccsds::definitions::TimeConverter & a3) : ::org::orekit::files::ccsds::section::AbstractWriter(env->newObject(initializeClass, &mids$, mid_init$_0c832d24faad04e3, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
            static PyObject *t_StateVectorWriter_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_StateVectorWriter_instance_(PyTypeObject *type, PyObject *arg);
            static int t_StateVectorWriter_init_(t_StateVectorWriter *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_StateVectorWriter__methods_[] = {
              DECLARE_METHOD(t_StateVectorWriter, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_StateVectorWriter, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(StateVectorWriter)[] = {
              { Py_tp_methods, t_StateVectorWriter__methods_ },
              { Py_tp_init, (void *) t_StateVectorWriter_init_ },
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

            static int t_StateVectorWriter_init_(t_StateVectorWriter *self, PyObject *args, PyObject *kwds)
            {
              ::java::lang::String a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::odm::StateVector a2((jobject) NULL);
              ::org::orekit::files::ccsds::definitions::TimeConverter a3((jobject) NULL);
              StateVectorWriter object((jobject) NULL);

              if (!parseArgs(args, "sskk", ::org::orekit::files::ccsds::ndm::odm::StateVector::initializeClass, ::org::orekit::files::ccsds::definitions::TimeConverter::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = StateVectorWriter(a0, a1, a2, a3));
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
#include "org/hipparchus/geometry/partitioning/NodesSet.h"
#include "java/util/Iterator.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *NodesSet::class$ = NULL;
        jmethodID *NodesSet::mids$ = NULL;
        bool NodesSet::live$ = false;

        jclass NodesSet::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/NodesSet");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_add_f5df8cefa4689121] = env->getMethodID(cls, "add", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)V");
            mids$[mid_addAll_26934bc48ccb39e9] = env->getMethodID(cls, "addAll", "(Ljava/lang/Iterable;)V");
            mids$[mid_iterator_4f613ccd2f803b4b] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NodesSet::NodesSet() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

        void NodesSet::add(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_add_f5df8cefa4689121], a0.this$);
        }

        void NodesSet::addAll(const ::java::lang::Iterable & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAll_26934bc48ccb39e9], a0.this$);
        }

        ::java::util::Iterator NodesSet::iterator() const
        {
          return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4f613ccd2f803b4b]));
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
        static PyObject *t_NodesSet_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NodesSet_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NodesSet_of_(t_NodesSet *self, PyObject *args);
        static int t_NodesSet_init_(t_NodesSet *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NodesSet_add(t_NodesSet *self, PyObject *arg);
        static PyObject *t_NodesSet_addAll(t_NodesSet *self, PyObject *arg);
        static PyObject *t_NodesSet_iterator(t_NodesSet *self);
        static PyObject *t_NodesSet_get__parameters_(t_NodesSet *self, void *data);
        static PyGetSetDef t_NodesSet__fields_[] = {
          DECLARE_GET_FIELD(t_NodesSet, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NodesSet__methods_[] = {
          DECLARE_METHOD(t_NodesSet, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NodesSet, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NodesSet, of_, METH_VARARGS),
          DECLARE_METHOD(t_NodesSet, add, METH_O),
          DECLARE_METHOD(t_NodesSet, addAll, METH_O),
          DECLARE_METHOD(t_NodesSet, iterator, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NodesSet)[] = {
          { Py_tp_methods, t_NodesSet__methods_ },
          { Py_tp_init, (void *) t_NodesSet_init_ },
          { Py_tp_getset, t_NodesSet__fields_ },
          { Py_tp_iter, (void *) ((PyObject *(*)(t_NodesSet *)) get_generic_iterator< t_NodesSet >) },
          { Py_tp_iternext, (void *) 0 },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NodesSet)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(NodesSet, t_NodesSet, NodesSet);
        PyObject *t_NodesSet::wrap_Object(const NodesSet& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NodesSet::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NodesSet *self = (t_NodesSet *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_NodesSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_NodesSet::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_NodesSet *self = (t_NodesSet *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_NodesSet::install(PyObject *module)
        {
          installType(&PY_TYPE(NodesSet), &PY_TYPE_DEF(NodesSet), module, "NodesSet", 0);
        }

        void t_NodesSet::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodesSet), "class_", make_descriptor(NodesSet::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodesSet), "wrapfn_", make_descriptor(t_NodesSet::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NodesSet), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NodesSet_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NodesSet::initializeClass, 1)))
            return NULL;
          return t_NodesSet::wrap_Object(NodesSet(((t_NodesSet *) arg)->object.this$));
        }
        static PyObject *t_NodesSet_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NodesSet::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_NodesSet_of_(t_NodesSet *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_NodesSet_init_(t_NodesSet *self, PyObject *args, PyObject *kwds)
        {
          NodesSet object((jobject) NULL);

          INT_CALL(object = NodesSet());
          self->object = object;

          return 0;
        }

        static PyObject *t_NodesSet_add(t_NodesSet *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(self->object.add(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "add", arg);
          return NULL;
        }

        static PyObject *t_NodesSet_addAll(t_NodesSet *self, PyObject *arg)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(self->object.addAll(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAll", arg);
          return NULL;
        }

        static PyObject *t_NodesSet_iterator(t_NodesSet *self)
        {
          ::java::util::Iterator result((jobject) NULL);
          OBJ_CALL(result = self->object.iterator());
          return ::java::util::t_Iterator::wrap_Object(result);
        }
        static PyObject *t_NodesSet_get__parameters_(t_NodesSet *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldGammaMnsFunction.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *FieldGammaMnsFunction::class$ = NULL;
            jmethodID *FieldGammaMnsFunction::mids$ = NULL;
            bool FieldGammaMnsFunction::live$ = false;

            jclass FieldGammaMnsFunction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/FieldGammaMnsFunction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_a8265c64ca56f984] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/CalculusFieldElement;ILorg/hipparchus/Field;)V");
                mids$[mid_getDerivative_641e4ebbc4b1ea55] = env->getMethodID(cls, "getDerivative", "(III)Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getValue_641e4ebbc4b1ea55] = env->getMethodID(cls, "getValue", "(III)Lorg/hipparchus/CalculusFieldElement;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            FieldGammaMnsFunction::FieldGammaMnsFunction(jint a0, const ::org::hipparchus::CalculusFieldElement & a1, jint a2, const ::org::hipparchus::Field & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a8265c64ca56f984, a0, a1.this$, a2, a3.this$)) {}

            ::org::hipparchus::CalculusFieldElement FieldGammaMnsFunction::getDerivative(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_641e4ebbc4b1ea55], a0, a1, a2));
            }

            ::org::hipparchus::CalculusFieldElement FieldGammaMnsFunction::getValue(jint a0, jint a1, jint a2) const
            {
              return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_641e4ebbc4b1ea55], a0, a1, a2));
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
            static PyObject *t_FieldGammaMnsFunction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGammaMnsFunction_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_FieldGammaMnsFunction_of_(t_FieldGammaMnsFunction *self, PyObject *args);
            static int t_FieldGammaMnsFunction_init_(t_FieldGammaMnsFunction *self, PyObject *args, PyObject *kwds);
            static PyObject *t_FieldGammaMnsFunction_getDerivative(t_FieldGammaMnsFunction *self, PyObject *args);
            static PyObject *t_FieldGammaMnsFunction_getValue(t_FieldGammaMnsFunction *self, PyObject *args);
            static PyObject *t_FieldGammaMnsFunction_get__parameters_(t_FieldGammaMnsFunction *self, void *data);
            static PyGetSetDef t_FieldGammaMnsFunction__fields_[] = {
              DECLARE_GET_FIELD(t_FieldGammaMnsFunction, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_FieldGammaMnsFunction__methods_[] = {
              DECLARE_METHOD(t_FieldGammaMnsFunction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGammaMnsFunction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_FieldGammaMnsFunction, of_, METH_VARARGS),
              DECLARE_METHOD(t_FieldGammaMnsFunction, getDerivative, METH_VARARGS),
              DECLARE_METHOD(t_FieldGammaMnsFunction, getValue, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(FieldGammaMnsFunction)[] = {
              { Py_tp_methods, t_FieldGammaMnsFunction__methods_ },
              { Py_tp_init, (void *) t_FieldGammaMnsFunction_init_ },
              { Py_tp_getset, t_FieldGammaMnsFunction__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(FieldGammaMnsFunction)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(FieldGammaMnsFunction, t_FieldGammaMnsFunction, FieldGammaMnsFunction);
            PyObject *t_FieldGammaMnsFunction::wrap_Object(const FieldGammaMnsFunction& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGammaMnsFunction::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGammaMnsFunction *self = (t_FieldGammaMnsFunction *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_FieldGammaMnsFunction::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_FieldGammaMnsFunction::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_FieldGammaMnsFunction *self = (t_FieldGammaMnsFunction *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_FieldGammaMnsFunction::install(PyObject *module)
            {
              installType(&PY_TYPE(FieldGammaMnsFunction), &PY_TYPE_DEF(FieldGammaMnsFunction), module, "FieldGammaMnsFunction", 0);
            }

            void t_FieldGammaMnsFunction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGammaMnsFunction), "class_", make_descriptor(FieldGammaMnsFunction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGammaMnsFunction), "wrapfn_", make_descriptor(t_FieldGammaMnsFunction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(FieldGammaMnsFunction), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_FieldGammaMnsFunction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, FieldGammaMnsFunction::initializeClass, 1)))
                return NULL;
              return t_FieldGammaMnsFunction::wrap_Object(FieldGammaMnsFunction(((t_FieldGammaMnsFunction *) arg)->object.this$));
            }
            static PyObject *t_FieldGammaMnsFunction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, FieldGammaMnsFunction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_FieldGammaMnsFunction_of_(t_FieldGammaMnsFunction *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_FieldGammaMnsFunction_init_(t_FieldGammaMnsFunction *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              jint a2;
              ::org::hipparchus::Field a3((jobject) NULL);
              PyTypeObject **p3;
              FieldGammaMnsFunction object((jobject) NULL);

              if (!parseArgs(args, "IKIK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_Field::parameters_))
              {
                INT_CALL(object = FieldGammaMnsFunction(a0, a1, a2, a3));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_FieldGammaMnsFunction_getDerivative(t_FieldGammaMnsFunction *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getDerivative(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
              return NULL;
            }

            static PyObject *t_FieldGammaMnsFunction_getValue(t_FieldGammaMnsFunction *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getValue(a0, a1, a2));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "getValue", args);
              return NULL;
            }
            static PyObject *t_FieldGammaMnsFunction_get__parameters_(t_FieldGammaMnsFunction *self, void *data)
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
#include "org/orekit/utils/Constants.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *Constants::class$ = NULL;
      jmethodID *Constants::mids$ = NULL;
      bool Constants::live$ = false;
      jdouble Constants::ARC_SECONDS_TO_RADIANS = (jdouble) 0;
      jdouble Constants::BESSELIAN_YEAR = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C20 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C30 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C40 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C50 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_C60 = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::EGM96_EARTH_MU = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C20 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C30 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C40 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C50 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_C60 = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::EIGEN5C_EARTH_MU = (jdouble) 0;
      jdouble Constants::G0_STANDARD_GRAVITY = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C20 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C30 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C40 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C50 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_C60 = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::GRIM5C1_EARTH_MU = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_C20 = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::GRS80_EARTH_MU = (jdouble) 0;
      jdouble Constants::IAU_2012_ASTRONOMICAL_UNIT = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_EARTH_GM = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_EARTH_POLAR_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_JUPITER_GM = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_SOLAR_RADIUS = (jdouble) 0;
      jdouble Constants::IAU_2015_NOMINAL_SUN_GM = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_C20 = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::IERS2003_EARTH_MU = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_C20 = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::IERS2010_EARTH_MU = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_C20 = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::IERS96_EARTH_MU = (jdouble) 0;
      jdouble Constants::JPL_SSD_ASTRONOMICAL_UNIT = (jdouble) 0;
      jdouble Constants::JPL_SSD_EARTH_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_EARTH_MOON_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_EARTH_PLUS_MOON_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT = (jdouble) 0;
      jdouble Constants::JPL_SSD_JUPITER_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_MARS_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_MERCURY_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_MOON_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_NEPTUNE_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_PLUTO_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_SATURN_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_MERCURY_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_SUN_VENUS_MASS_RATIO = (jdouble) 0;
      jdouble Constants::JPL_SSD_URANUS_SYSTEM_GM = (jdouble) 0;
      jdouble Constants::JPL_SSD_VENUS_GM = (jdouble) 0;
      jdouble Constants::JULIAN_CENTURY = (jdouble) 0;
      jdouble Constants::JULIAN_DAY = (jdouble) 0;
      jdouble Constants::JULIAN_YEAR = (jdouble) 0;
      jdouble Constants::MOON_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::SPEED_OF_LIGHT = (jdouble) 0;
      jdouble Constants::SUN_RADIUS = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_ANGULAR_VELOCITY = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_C20 = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_EQUATORIAL_RADIUS = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_FLATTENING = (jdouble) 0;
      jdouble Constants::WGS84_EARTH_MU = (jdouble) 0;

      jclass Constants::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/Constants");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ARC_SECONDS_TO_RADIANS = env->getStaticDoubleField(cls, "ARC_SECONDS_TO_RADIANS");
          BESSELIAN_YEAR = env->getStaticDoubleField(cls, "BESSELIAN_YEAR");
          EGM96_EARTH_C20 = env->getStaticDoubleField(cls, "EGM96_EARTH_C20");
          EGM96_EARTH_C30 = env->getStaticDoubleField(cls, "EGM96_EARTH_C30");
          EGM96_EARTH_C40 = env->getStaticDoubleField(cls, "EGM96_EARTH_C40");
          EGM96_EARTH_C50 = env->getStaticDoubleField(cls, "EGM96_EARTH_C50");
          EGM96_EARTH_C60 = env->getStaticDoubleField(cls, "EGM96_EARTH_C60");
          EGM96_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "EGM96_EARTH_EQUATORIAL_RADIUS");
          EGM96_EARTH_MU = env->getStaticDoubleField(cls, "EGM96_EARTH_MU");
          EIGEN5C_EARTH_C20 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C20");
          EIGEN5C_EARTH_C30 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C30");
          EIGEN5C_EARTH_C40 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C40");
          EIGEN5C_EARTH_C50 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C50");
          EIGEN5C_EARTH_C60 = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_C60");
          EIGEN5C_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_EQUATORIAL_RADIUS");
          EIGEN5C_EARTH_MU = env->getStaticDoubleField(cls, "EIGEN5C_EARTH_MU");
          G0_STANDARD_GRAVITY = env->getStaticDoubleField(cls, "G0_STANDARD_GRAVITY");
          GRIM5C1_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_ANGULAR_VELOCITY");
          GRIM5C1_EARTH_C20 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C20");
          GRIM5C1_EARTH_C30 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C30");
          GRIM5C1_EARTH_C40 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C40");
          GRIM5C1_EARTH_C50 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C50");
          GRIM5C1_EARTH_C60 = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_C60");
          GRIM5C1_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_EQUATORIAL_RADIUS");
          GRIM5C1_EARTH_FLATTENING = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_FLATTENING");
          GRIM5C1_EARTH_MU = env->getStaticDoubleField(cls, "GRIM5C1_EARTH_MU");
          GRS80_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "GRS80_EARTH_ANGULAR_VELOCITY");
          GRS80_EARTH_C20 = env->getStaticDoubleField(cls, "GRS80_EARTH_C20");
          GRS80_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "GRS80_EARTH_EQUATORIAL_RADIUS");
          GRS80_EARTH_FLATTENING = env->getStaticDoubleField(cls, "GRS80_EARTH_FLATTENING");
          GRS80_EARTH_MU = env->getStaticDoubleField(cls, "GRS80_EARTH_MU");
          IAU_2012_ASTRONOMICAL_UNIT = env->getStaticDoubleField(cls, "IAU_2012_ASTRONOMICAL_UNIT");
          IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS");
          IAU_2015_NOMINAL_EARTH_GM = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_EARTH_GM");
          IAU_2015_NOMINAL_EARTH_POLAR_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_EARTH_POLAR_RADIUS");
          IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS");
          IAU_2015_NOMINAL_JUPITER_GM = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_JUPITER_GM");
          IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS");
          IAU_2015_NOMINAL_SOLAR_RADIUS = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_SOLAR_RADIUS");
          IAU_2015_NOMINAL_SUN_GM = env->getStaticDoubleField(cls, "IAU_2015_NOMINAL_SUN_GM");
          IERS2003_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "IERS2003_EARTH_ANGULAR_VELOCITY");
          IERS2003_EARTH_C20 = env->getStaticDoubleField(cls, "IERS2003_EARTH_C20");
          IERS2003_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IERS2003_EARTH_EQUATORIAL_RADIUS");
          IERS2003_EARTH_FLATTENING = env->getStaticDoubleField(cls, "IERS2003_EARTH_FLATTENING");
          IERS2003_EARTH_MU = env->getStaticDoubleField(cls, "IERS2003_EARTH_MU");
          IERS2010_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "IERS2010_EARTH_ANGULAR_VELOCITY");
          IERS2010_EARTH_C20 = env->getStaticDoubleField(cls, "IERS2010_EARTH_C20");
          IERS2010_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IERS2010_EARTH_EQUATORIAL_RADIUS");
          IERS2010_EARTH_FLATTENING = env->getStaticDoubleField(cls, "IERS2010_EARTH_FLATTENING");
          IERS2010_EARTH_MU = env->getStaticDoubleField(cls, "IERS2010_EARTH_MU");
          IERS96_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "IERS96_EARTH_ANGULAR_VELOCITY");
          IERS96_EARTH_C20 = env->getStaticDoubleField(cls, "IERS96_EARTH_C20");
          IERS96_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "IERS96_EARTH_EQUATORIAL_RADIUS");
          IERS96_EARTH_FLATTENING = env->getStaticDoubleField(cls, "IERS96_EARTH_FLATTENING");
          IERS96_EARTH_MU = env->getStaticDoubleField(cls, "IERS96_EARTH_MU");
          JPL_SSD_ASTRONOMICAL_UNIT = env->getStaticDoubleField(cls, "JPL_SSD_ASTRONOMICAL_UNIT");
          JPL_SSD_EARTH_GM = env->getStaticDoubleField(cls, "JPL_SSD_EARTH_GM");
          JPL_SSD_EARTH_MOON_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_EARTH_MOON_MASS_RATIO");
          JPL_SSD_EARTH_PLUS_MOON_GM = env->getStaticDoubleField(cls, "JPL_SSD_EARTH_PLUS_MOON_GM");
          JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT = env->getStaticDoubleField(cls, "JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT");
          JPL_SSD_JUPITER_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_JUPITER_SYSTEM_GM");
          JPL_SSD_MARS_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_MARS_SYSTEM_GM");
          JPL_SSD_MERCURY_GM = env->getStaticDoubleField(cls, "JPL_SSD_MERCURY_GM");
          JPL_SSD_MOON_GM = env->getStaticDoubleField(cls, "JPL_SSD_MOON_GM");
          JPL_SSD_NEPTUNE_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_NEPTUNE_SYSTEM_GM");
          JPL_SSD_PLUTO_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_PLUTO_SYSTEM_GM");
          JPL_SSD_SATURN_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_SATURN_SYSTEM_GM");
          JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO");
          JPL_SSD_SUN_GM = env->getStaticDoubleField(cls, "JPL_SSD_SUN_GM");
          JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_MERCURY_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_MERCURY_MASS_RATIO");
          JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO");
          JPL_SSD_SUN_VENUS_MASS_RATIO = env->getStaticDoubleField(cls, "JPL_SSD_SUN_VENUS_MASS_RATIO");
          JPL_SSD_URANUS_SYSTEM_GM = env->getStaticDoubleField(cls, "JPL_SSD_URANUS_SYSTEM_GM");
          JPL_SSD_VENUS_GM = env->getStaticDoubleField(cls, "JPL_SSD_VENUS_GM");
          JULIAN_CENTURY = env->getStaticDoubleField(cls, "JULIAN_CENTURY");
          JULIAN_DAY = env->getStaticDoubleField(cls, "JULIAN_DAY");
          JULIAN_YEAR = env->getStaticDoubleField(cls, "JULIAN_YEAR");
          MOON_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "MOON_EQUATORIAL_RADIUS");
          SPEED_OF_LIGHT = env->getStaticDoubleField(cls, "SPEED_OF_LIGHT");
          SUN_RADIUS = env->getStaticDoubleField(cls, "SUN_RADIUS");
          WGS84_EARTH_ANGULAR_VELOCITY = env->getStaticDoubleField(cls, "WGS84_EARTH_ANGULAR_VELOCITY");
          WGS84_EARTH_C20 = env->getStaticDoubleField(cls, "WGS84_EARTH_C20");
          WGS84_EARTH_EQUATORIAL_RADIUS = env->getStaticDoubleField(cls, "WGS84_EARTH_EQUATORIAL_RADIUS");
          WGS84_EARTH_FLATTENING = env->getStaticDoubleField(cls, "WGS84_EARTH_FLATTENING");
          WGS84_EARTH_MU = env->getStaticDoubleField(cls, "WGS84_EARTH_MU");
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
  namespace orekit {
    namespace utils {
      static PyObject *t_Constants_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Constants_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_Constants__methods_[] = {
        DECLARE_METHOD(t_Constants, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Constants, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Constants)[] = {
        { Py_tp_methods, t_Constants__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Constants)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Constants, t_Constants, Constants);

      void t_Constants::install(PyObject *module)
      {
        installType(&PY_TYPE(Constants), &PY_TYPE_DEF(Constants), module, "Constants", 0);
      }

      void t_Constants::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "class_", make_descriptor(Constants::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "wrapfn_", make_descriptor(t_Constants::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "boxfn_", make_descriptor(boxObject));
        env->getClass(Constants::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "ARC_SECONDS_TO_RADIANS", make_descriptor(Constants::ARC_SECONDS_TO_RADIANS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "BESSELIAN_YEAR", make_descriptor(Constants::BESSELIAN_YEAR));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C20", make_descriptor(Constants::EGM96_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C30", make_descriptor(Constants::EGM96_EARTH_C30));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C40", make_descriptor(Constants::EGM96_EARTH_C40));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C50", make_descriptor(Constants::EGM96_EARTH_C50));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_C60", make_descriptor(Constants::EGM96_EARTH_C60));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::EGM96_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EGM96_EARTH_MU", make_descriptor(Constants::EGM96_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C20", make_descriptor(Constants::EIGEN5C_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C30", make_descriptor(Constants::EIGEN5C_EARTH_C30));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C40", make_descriptor(Constants::EIGEN5C_EARTH_C40));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C50", make_descriptor(Constants::EIGEN5C_EARTH_C50));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_C60", make_descriptor(Constants::EIGEN5C_EARTH_C60));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::EIGEN5C_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "EIGEN5C_EARTH_MU", make_descriptor(Constants::EIGEN5C_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "G0_STANDARD_GRAVITY", make_descriptor(Constants::G0_STANDARD_GRAVITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::GRIM5C1_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C20", make_descriptor(Constants::GRIM5C1_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C30", make_descriptor(Constants::GRIM5C1_EARTH_C30));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C40", make_descriptor(Constants::GRIM5C1_EARTH_C40));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C50", make_descriptor(Constants::GRIM5C1_EARTH_C50));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_C60", make_descriptor(Constants::GRIM5C1_EARTH_C60));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::GRIM5C1_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_FLATTENING", make_descriptor(Constants::GRIM5C1_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRIM5C1_EARTH_MU", make_descriptor(Constants::GRIM5C1_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::GRS80_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_C20", make_descriptor(Constants::GRS80_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::GRS80_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_FLATTENING", make_descriptor(Constants::GRS80_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "GRS80_EARTH_MU", make_descriptor(Constants::GRS80_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2012_ASTRONOMICAL_UNIT", make_descriptor(Constants::IAU_2012_ASTRONOMICAL_UNIT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_EARTH_GM", make_descriptor(Constants::IAU_2015_NOMINAL_EARTH_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_EARTH_POLAR_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_EARTH_POLAR_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_JUPITER_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_JUPITER_GM", make_descriptor(Constants::IAU_2015_NOMINAL_JUPITER_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_JUPITER_POLAR_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_SOLAR_RADIUS", make_descriptor(Constants::IAU_2015_NOMINAL_SOLAR_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IAU_2015_NOMINAL_SUN_GM", make_descriptor(Constants::IAU_2015_NOMINAL_SUN_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::IERS2003_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_C20", make_descriptor(Constants::IERS2003_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::IERS2003_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_FLATTENING", make_descriptor(Constants::IERS2003_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2003_EARTH_MU", make_descriptor(Constants::IERS2003_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::IERS2010_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_C20", make_descriptor(Constants::IERS2010_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::IERS2010_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_FLATTENING", make_descriptor(Constants::IERS2010_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS2010_EARTH_MU", make_descriptor(Constants::IERS2010_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::IERS96_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_C20", make_descriptor(Constants::IERS96_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::IERS96_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_FLATTENING", make_descriptor(Constants::IERS96_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "IERS96_EARTH_MU", make_descriptor(Constants::IERS96_EARTH_MU));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_ASTRONOMICAL_UNIT", make_descriptor(Constants::JPL_SSD_ASTRONOMICAL_UNIT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_EARTH_GM", make_descriptor(Constants::JPL_SSD_EARTH_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_EARTH_MOON_MASS_RATIO", make_descriptor(Constants::JPL_SSD_EARTH_MOON_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_EARTH_PLUS_MOON_GM", make_descriptor(Constants::JPL_SSD_EARTH_PLUS_MOON_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT", make_descriptor(Constants::JPL_SSD_GAUSSIAN_GRAVITATIONAL_CONSTANT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_JUPITER_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_JUPITER_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_MARS_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_MARS_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_MERCURY_GM", make_descriptor(Constants::JPL_SSD_MERCURY_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_MOON_GM", make_descriptor(Constants::JPL_SSD_MOON_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_NEPTUNE_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_NEPTUNE_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_PLUTO_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_PLUTO_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SATURN_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_SATURN_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_EARTH_PLUS_MOON_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_GM", make_descriptor(Constants::JPL_SSD_SUN_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_JUPITER_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_MARS_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_MERCURY_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_MERCURY_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_NEPTUNE_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_PLUTO_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_SATURN_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_URANUS_SYSTEM_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_SUN_VENUS_MASS_RATIO", make_descriptor(Constants::JPL_SSD_SUN_VENUS_MASS_RATIO));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_URANUS_SYSTEM_GM", make_descriptor(Constants::JPL_SSD_URANUS_SYSTEM_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JPL_SSD_VENUS_GM", make_descriptor(Constants::JPL_SSD_VENUS_GM));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JULIAN_CENTURY", make_descriptor(Constants::JULIAN_CENTURY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JULIAN_DAY", make_descriptor(Constants::JULIAN_DAY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "JULIAN_YEAR", make_descriptor(Constants::JULIAN_YEAR));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "MOON_EQUATORIAL_RADIUS", make_descriptor(Constants::MOON_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "SPEED_OF_LIGHT", make_descriptor(Constants::SPEED_OF_LIGHT));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "SUN_RADIUS", make_descriptor(Constants::SUN_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_ANGULAR_VELOCITY", make_descriptor(Constants::WGS84_EARTH_ANGULAR_VELOCITY));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_C20", make_descriptor(Constants::WGS84_EARTH_C20));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_EQUATORIAL_RADIUS", make_descriptor(Constants::WGS84_EARTH_EQUATORIAL_RADIUS));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_FLATTENING", make_descriptor(Constants::WGS84_EARTH_FLATTENING));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Constants), "WGS84_EARTH_MU", make_descriptor(Constants::WGS84_EARTH_MU));
      }

      static PyObject *t_Constants_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Constants::initializeClass, 1)))
          return NULL;
        return t_Constants::wrap_Object(Constants(((t_Constants *) arg)->object.this$));
      }
      static PyObject *t_Constants_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Constants::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1057.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionData.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *Rtcm1057::class$ = NULL;
              jmethodID *Rtcm1057::mids$ = NULL;
              bool Rtcm1057::live$ = false;

              jclass Rtcm1057::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/Rtcm1057");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a31f35e7af490700] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/rtcm/correction/RtcmOrbitCorrectionHeader;Ljava/util/List;)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Rtcm1057::Rtcm1057(jint a0, const ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage(env->newObject(initializeClass, &mids$, mid_init$_a31f35e7af490700, a0, a1.this$, a2.this$)) {}
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
              static PyObject *t_Rtcm1057_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1057_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Rtcm1057_of_(t_Rtcm1057 *self, PyObject *args);
              static int t_Rtcm1057_init_(t_Rtcm1057 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Rtcm1057_get__parameters_(t_Rtcm1057 *self, void *data);
              static PyGetSetDef t_Rtcm1057__fields_[] = {
                DECLARE_GET_FIELD(t_Rtcm1057, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Rtcm1057__methods_[] = {
                DECLARE_METHOD(t_Rtcm1057, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1057, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Rtcm1057, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Rtcm1057)[] = {
                { Py_tp_methods, t_Rtcm1057__methods_ },
                { Py_tp_init, (void *) t_Rtcm1057_init_ },
                { Py_tp_getset, t_Rtcm1057__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Rtcm1057)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::correction::RtcmCorrectionMessage),
                NULL
              };

              DEFINE_TYPE(Rtcm1057, t_Rtcm1057, Rtcm1057);
              PyObject *t_Rtcm1057::wrap_Object(const Rtcm1057& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1057::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1057 *self = (t_Rtcm1057 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_Rtcm1057::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_Rtcm1057::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_Rtcm1057 *self = (t_Rtcm1057 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_Rtcm1057::install(PyObject *module)
              {
                installType(&PY_TYPE(Rtcm1057), &PY_TYPE_DEF(Rtcm1057), module, "Rtcm1057", 0);
              }

              void t_Rtcm1057::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1057), "class_", make_descriptor(Rtcm1057::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1057), "wrapfn_", make_descriptor(t_Rtcm1057::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Rtcm1057), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Rtcm1057_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Rtcm1057::initializeClass, 1)))
                  return NULL;
                return t_Rtcm1057::wrap_Object(Rtcm1057(((t_Rtcm1057 *) arg)->object.this$));
              }
              static PyObject *t_Rtcm1057_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Rtcm1057::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_Rtcm1057_of_(t_Rtcm1057 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_Rtcm1057_init_(t_Rtcm1057 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                Rtcm1057 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::rtcm::correction::RtcmOrbitCorrectionHeader::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = Rtcm1057(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionHeader);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::rtcm::correction::PY_TYPE(RtcmOrbitCorrectionData);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_Rtcm1057_get__parameters_(t_Rtcm1057 *self, void *data)
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
#include "org/orekit/files/ilrs/CRD$MeteorologicalMeasurement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$MeteorologicalMeasurement::class$ = NULL;
        jmethodID *CRD$MeteorologicalMeasurement::mids$ = NULL;
        bool CRD$MeteorologicalMeasurement::live$ = false;

        jclass CRD$MeteorologicalMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$MeteorologicalMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_9f3f3195bde7b65f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDD)V");
            mids$[mid_init$_9cc0c2dea48461d3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DDDI)V");
            mids$[mid_getDate_80e11148db499dda] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getHumidity_9981f74b2d109da6] = env->getMethodID(cls, "getHumidity", "()D");
            mids$[mid_getOriginOfValues_d6ab429752e7c267] = env->getMethodID(cls, "getOriginOfValues", "()I");
            mids$[mid_getPressure_9981f74b2d109da6] = env->getMethodID(cls, "getPressure", "()D");
            mids$[mid_getTemperature_9981f74b2d109da6] = env->getMethodID(cls, "getTemperature", "()D");
            mids$[mid_toCrdString_d2c8eb4129821f0e] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$MeteorologicalMeasurement::CRD$MeteorologicalMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9f3f3195bde7b65f, a0.this$, a1, a2, a3)) {}

        CRD$MeteorologicalMeasurement::CRD$MeteorologicalMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2, jdouble a3, jint a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9cc0c2dea48461d3, a0.this$, a1, a2, a3, a4)) {}

        ::org::orekit::time::AbsoluteDate CRD$MeteorologicalMeasurement::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_80e11148db499dda]));
        }

        jdouble CRD$MeteorologicalMeasurement::getHumidity() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getHumidity_9981f74b2d109da6]);
        }

        jint CRD$MeteorologicalMeasurement::getOriginOfValues() const
        {
          return env->callIntMethod(this$, mids$[mid_getOriginOfValues_d6ab429752e7c267]);
        }

        jdouble CRD$MeteorologicalMeasurement::getPressure() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPressure_9981f74b2d109da6]);
        }

        jdouble CRD$MeteorologicalMeasurement::getTemperature() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTemperature_9981f74b2d109da6]);
        }

        ::java::lang::String CRD$MeteorologicalMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_d2c8eb4129821f0e]));
        }

        ::java::lang::String CRD$MeteorologicalMeasurement::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_d2c8eb4129821f0e]));
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
        static PyObject *t_CRD$MeteorologicalMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$MeteorologicalMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$MeteorologicalMeasurement_init_(t_CRD$MeteorologicalMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$MeteorologicalMeasurement_getDate(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_getHumidity(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_getOriginOfValues(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_getPressure(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_getTemperature(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_toCrdString(t_CRD$MeteorologicalMeasurement *self);
        static PyObject *t_CRD$MeteorologicalMeasurement_toString(t_CRD$MeteorologicalMeasurement *self, PyObject *args);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__date(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__humidity(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__originOfValues(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__pressure(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyObject *t_CRD$MeteorologicalMeasurement_get__temperature(t_CRD$MeteorologicalMeasurement *self, void *data);
        static PyGetSetDef t_CRD$MeteorologicalMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, date),
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, humidity),
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, originOfValues),
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, pressure),
          DECLARE_GET_FIELD(t_CRD$MeteorologicalMeasurement, temperature),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$MeteorologicalMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getDate, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getHumidity, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getOriginOfValues, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getPressure, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, getTemperature, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, toCrdString, METH_NOARGS),
          DECLARE_METHOD(t_CRD$MeteorologicalMeasurement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$MeteorologicalMeasurement)[] = {
          { Py_tp_methods, t_CRD$MeteorologicalMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$MeteorologicalMeasurement_init_ },
          { Py_tp_getset, t_CRD$MeteorologicalMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$MeteorologicalMeasurement)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRD$MeteorologicalMeasurement, t_CRD$MeteorologicalMeasurement, CRD$MeteorologicalMeasurement);

        void t_CRD$MeteorologicalMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$MeteorologicalMeasurement), &PY_TYPE_DEF(CRD$MeteorologicalMeasurement), module, "CRD$MeteorologicalMeasurement", 0);
        }

        void t_CRD$MeteorologicalMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$MeteorologicalMeasurement), "class_", make_descriptor(CRD$MeteorologicalMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$MeteorologicalMeasurement), "wrapfn_", make_descriptor(t_CRD$MeteorologicalMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$MeteorologicalMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$MeteorologicalMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$MeteorologicalMeasurement::wrap_Object(CRD$MeteorologicalMeasurement(((t_CRD$MeteorologicalMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$MeteorologicalMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$MeteorologicalMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$MeteorologicalMeasurement_init_(t_CRD$MeteorologicalMeasurement *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              CRD$MeteorologicalMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = CRD$MeteorologicalMeasurement(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
              jdouble a1;
              jdouble a2;
              jdouble a3;
              jint a4;
              CRD$MeteorologicalMeasurement object((jobject) NULL);

              if (!parseArgs(args, "kDDDI", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4))
              {
                INT_CALL(object = CRD$MeteorologicalMeasurement(a0, a1, a2, a3, a4));
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

        static PyObject *t_CRD$MeteorologicalMeasurement_getDate(t_CRD$MeteorologicalMeasurement *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_getHumidity(t_CRD$MeteorologicalMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getHumidity());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_getOriginOfValues(t_CRD$MeteorologicalMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOriginOfValues());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_getPressure(t_CRD$MeteorologicalMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPressure());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_getTemperature(t_CRD$MeteorologicalMeasurement *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTemperature());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_toCrdString(t_CRD$MeteorologicalMeasurement *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_toString(t_CRD$MeteorologicalMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$MeteorologicalMeasurement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__date(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__humidity(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getHumidity());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__originOfValues(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOriginOfValues());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__pressure(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPressure());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_CRD$MeteorologicalMeasurement_get__temperature(t_CRD$MeteorologicalMeasurement *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTemperature());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/AdapterPropagator.h"
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "java/util/List.h"
#include "org/orekit/propagation/Propagator.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AdapterPropagator::class$ = NULL;
        jmethodID *AdapterPropagator::mids$ = NULL;
        bool AdapterPropagator::live$ = false;

        jclass AdapterPropagator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AdapterPropagator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f334dbd717e289d2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/Propagator;)V");
            mids$[mid_addEffect_b9dba4c0ba7dcddb] = env->getMethodID(cls, "addEffect", "(Lorg/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect;)V");
            mids$[mid_getEffects_d751c1a57012b438] = env->getMethodID(cls, "getEffects", "()Ljava/util/List;");
            mids$[mid_getInitialState_8fbfa58855031235] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getPropagator_605fbba6f75c4d5a] = env->getMethodID(cls, "getPropagator", "()Lorg/orekit/propagation/Propagator;");
            mids$[mid_resetInitialState_72b846eb87f3af9a] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_getMass_209f08246d708042] = env->getMethodID(cls, "getMass", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_propagateOrbit_776cca2e85dfe61d] = env->getMethodID(cls, "propagateOrbit", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_basicPropagate_1e982279849c3b65] = env->getMethodID(cls, "basicPropagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_resetIntermediateState_b69b5541e48d21c0] = env->getMethodID(cls, "resetIntermediateState", "(Lorg/orekit/propagation/SpacecraftState;Z)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdapterPropagator::AdapterPropagator(const ::org::orekit::propagation::Propagator & a0) : ::org::orekit::propagation::analytical::AbstractAnalyticalPropagator(env->newObject(initializeClass, &mids$, mid_init$_f334dbd717e289d2, a0.this$)) {}

        void AdapterPropagator::addEffect(const ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addEffect_b9dba4c0ba7dcddb], a0.this$);
        }

        ::java::util::List AdapterPropagator::getEffects() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getEffects_d751c1a57012b438]));
        }

        ::org::orekit::propagation::SpacecraftState AdapterPropagator::getInitialState() const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_getInitialState_8fbfa58855031235]));
        }

        ::org::orekit::propagation::Propagator AdapterPropagator::getPropagator() const
        {
          return ::org::orekit::propagation::Propagator(env->callObjectMethod(this$, mids$[mid_getPropagator_605fbba6f75c4d5a]));
        }

        void AdapterPropagator::resetInitialState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetInitialState_72b846eb87f3af9a], a0.this$);
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
        static PyObject *t_AdapterPropagator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdapterPropagator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdapterPropagator_init_(t_AdapterPropagator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdapterPropagator_addEffect(t_AdapterPropagator *self, PyObject *arg);
        static PyObject *t_AdapterPropagator_getEffects(t_AdapterPropagator *self);
        static PyObject *t_AdapterPropagator_getInitialState(t_AdapterPropagator *self, PyObject *args);
        static PyObject *t_AdapterPropagator_getPropagator(t_AdapterPropagator *self);
        static PyObject *t_AdapterPropagator_resetInitialState(t_AdapterPropagator *self, PyObject *args);
        static PyObject *t_AdapterPropagator_get__effects(t_AdapterPropagator *self, void *data);
        static PyObject *t_AdapterPropagator_get__initialState(t_AdapterPropagator *self, void *data);
        static PyObject *t_AdapterPropagator_get__propagator(t_AdapterPropagator *self, void *data);
        static PyGetSetDef t_AdapterPropagator__fields_[] = {
          DECLARE_GET_FIELD(t_AdapterPropagator, effects),
          DECLARE_GET_FIELD(t_AdapterPropagator, initialState),
          DECLARE_GET_FIELD(t_AdapterPropagator, propagator),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdapterPropagator__methods_[] = {
          DECLARE_METHOD(t_AdapterPropagator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterPropagator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterPropagator, addEffect, METH_O),
          DECLARE_METHOD(t_AdapterPropagator, getEffects, METH_NOARGS),
          DECLARE_METHOD(t_AdapterPropagator, getInitialState, METH_VARARGS),
          DECLARE_METHOD(t_AdapterPropagator, getPropagator, METH_NOARGS),
          DECLARE_METHOD(t_AdapterPropagator, resetInitialState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdapterPropagator)[] = {
          { Py_tp_methods, t_AdapterPropagator__methods_ },
          { Py_tp_init, (void *) t_AdapterPropagator_init_ },
          { Py_tp_getset, t_AdapterPropagator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdapterPropagator)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::analytical::AbstractAnalyticalPropagator),
          NULL
        };

        DEFINE_TYPE(AdapterPropagator, t_AdapterPropagator, AdapterPropagator);

        void t_AdapterPropagator::install(PyObject *module)
        {
          installType(&PY_TYPE(AdapterPropagator), &PY_TYPE_DEF(AdapterPropagator), module, "AdapterPropagator", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator), "DifferentialEffect", make_descriptor(&PY_TYPE_DEF(AdapterPropagator$DifferentialEffect)));
        }

        void t_AdapterPropagator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator), "class_", make_descriptor(AdapterPropagator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator), "wrapfn_", make_descriptor(t_AdapterPropagator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterPropagator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdapterPropagator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdapterPropagator::initializeClass, 1)))
            return NULL;
          return t_AdapterPropagator::wrap_Object(AdapterPropagator(((t_AdapterPropagator *) arg)->object.this$));
        }
        static PyObject *t_AdapterPropagator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdapterPropagator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdapterPropagator_init_(t_AdapterPropagator *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::Propagator a0((jobject) NULL);
          AdapterPropagator object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::Propagator::initializeClass, &a0))
          {
            INT_CALL(object = AdapterPropagator(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdapterPropagator_addEffect(t_AdapterPropagator *self, PyObject *arg)
        {
          ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::analytical::AdapterPropagator$DifferentialEffect::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addEffect(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addEffect", arg);
          return NULL;
        }

        static PyObject *t_AdapterPropagator_getEffects(t_AdapterPropagator *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getEffects());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::propagation::analytical::PY_TYPE(AdapterPropagator$DifferentialEffect));
        }

        static PyObject *t_AdapterPropagator_getInitialState(t_AdapterPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getInitialState());
            return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AdapterPropagator), (PyObject *) self, "getInitialState", args, 2);
        }

        static PyObject *t_AdapterPropagator_getPropagator(t_AdapterPropagator *self)
        {
          ::org::orekit::propagation::Propagator result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagator());
          return ::org::orekit::propagation::t_Propagator::wrap_Object(result);
        }

        static PyObject *t_AdapterPropagator_resetInitialState(t_AdapterPropagator *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetInitialState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AdapterPropagator), (PyObject *) self, "resetInitialState", args, 2);
        }

        static PyObject *t_AdapterPropagator_get__effects(t_AdapterPropagator *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getEffects());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AdapterPropagator_get__initialState(t_AdapterPropagator *self, void *data)
        {
          ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialState());
          return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(value);
        }

        static PyObject *t_AdapterPropagator_get__propagator(t_AdapterPropagator *self, void *data)
        {
          ::org::orekit::propagation::Propagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagator());
          return ::org::orekit::propagation::t_Propagator::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace exception {

      ::java::lang::Class *MathIllegalStateException::class$ = NULL;
      jmethodID *MathIllegalStateException::mids$ = NULL;
      bool MathIllegalStateException::live$ = false;

      jclass MathIllegalStateException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/exception/MathIllegalStateException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_2436a4119ba97d87] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");
          mids$[mid_init$_db158649d786c484] = env->getMethodID(cls, "<init>", "(Ljava/lang/Throwable;Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      MathIllegalStateException::MathIllegalStateException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_2436a4119ba97d87, a0.this$, a1.this$)) {}

      MathIllegalStateException::MathIllegalStateException(const ::java::lang::Throwable & a0, const ::org::hipparchus::exception::Localizable & a1, const JArray< ::java::lang::Object > & a2) : ::org::hipparchus::exception::MathRuntimeException(env->newObject(initializeClass, &mids$, mid_init$_db158649d786c484, a0.this$, a1.this$, a2.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace exception {
      static PyObject *t_MathIllegalStateException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MathIllegalStateException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_MathIllegalStateException_init_(t_MathIllegalStateException *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_MathIllegalStateException__methods_[] = {
        DECLARE_METHOD(t_MathIllegalStateException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MathIllegalStateException, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MathIllegalStateException)[] = {
        { Py_tp_methods, t_MathIllegalStateException__methods_ },
        { Py_tp_init, (void *) t_MathIllegalStateException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MathIllegalStateException)[] = {
        &PY_TYPE_DEF(::org::hipparchus::exception::MathRuntimeException),
        NULL
      };

      DEFINE_TYPE(MathIllegalStateException, t_MathIllegalStateException, MathIllegalStateException);

      void t_MathIllegalStateException::install(PyObject *module)
      {
        installType(&PY_TYPE(MathIllegalStateException), &PY_TYPE_DEF(MathIllegalStateException), module, "MathIllegalStateException", 0);
      }

      void t_MathIllegalStateException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalStateException), "class_", make_descriptor(MathIllegalStateException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalStateException), "wrapfn_", make_descriptor(t_MathIllegalStateException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MathIllegalStateException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MathIllegalStateException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MathIllegalStateException::initializeClass, 1)))
          return NULL;
        return t_MathIllegalStateException::wrap_Object(MathIllegalStateException(((t_MathIllegalStateException *) arg)->object.this$));
      }
      static PyObject *t_MathIllegalStateException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MathIllegalStateException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_MathIllegalStateException_init_(t_MathIllegalStateException *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::exception::Localizable a0((jobject) NULL);
            JArray< ::java::lang::Object > a1((jobject) NULL);
            MathIllegalStateException object((jobject) NULL);

            if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
            {
              INT_CALL(object = MathIllegalStateException(a0, a1));
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
            MathIllegalStateException object((jobject) NULL);

            if (!parseArgs(args, "kk[o", ::java::lang::Throwable::initializeClass, ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = MathIllegalStateException(a0, a1, a2));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment.h"
#include "java/util/List.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/files/general/EphemerisFile$EphemerisSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        ::java::lang::Class *STKEphemerisFile$STKEphemerisSegment::class$ = NULL;
        jmethodID *STKEphemerisFile$STKEphemerisSegment::mids$ = NULL;
        bool STKEphemerisFile$STKEphemerisSegment::live$ = false;

        jclass STKEphemerisFile$STKEphemerisSegment::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/stk/STKEphemerisFile$STKEphemerisSegment");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_357b9bba747aa1fc] = env->getMethodID(cls, "<init>", "(DLorg/orekit/frames/Frame;ILorg/orekit/utils/CartesianDerivativesFilter;Ljava/util/List;)V");
            mids$[mid_getAvailableDerivatives_b9dfc27d8c56b5de] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getCoordinates_d751c1a57012b438] = env->getMethodID(cls, "getCoordinates", "()Ljava/util/List;");
            mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInterpolationSamples_d6ab429752e7c267] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getStart_80e11148db499dda] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_80e11148db499dda] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        STKEphemerisFile$STKEphemerisSegment::STKEphemerisFile$STKEphemerisSegment(jdouble a0, const ::org::orekit::frames::Frame & a1, jint a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3, const ::java::util::List & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_357b9bba747aa1fc, a0, a1.this$, a2, a3.this$, a4.this$)) {}

        ::org::orekit::utils::CartesianDerivativesFilter STKEphemerisFile$STKEphemerisSegment::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_b9dfc27d8c56b5de]));
        }

        ::java::util::List STKEphemerisFile$STKEphemerisSegment::getCoordinates() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getCoordinates_d751c1a57012b438]));
        }

        ::org::orekit::frames::Frame STKEphemerisFile$STKEphemerisSegment::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
        }

        jint STKEphemerisFile$STKEphemerisSegment::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_d6ab429752e7c267]);
        }

        jdouble STKEphemerisFile$STKEphemerisSegment::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
        }

        ::org::orekit::time::AbsoluteDate STKEphemerisFile$STKEphemerisSegment::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_80e11148db499dda]));
        }

        ::org::orekit::time::AbsoluteDate STKEphemerisFile$STKEphemerisSegment::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_80e11148db499dda]));
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
      namespace stk {
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg);
        static int t_STKEphemerisFile$STKEphemerisSegment_init_(t_STKEphemerisFile$STKEphemerisSegment *self, PyObject *args, PyObject *kwds);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getAvailableDerivatives(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getCoordinates(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getFrame(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getInterpolationSamples(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getMu(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getStart(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getStop(t_STKEphemerisFile$STKEphemerisSegment *self);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__availableDerivatives(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__coordinates(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__frame(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__interpolationSamples(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__mu(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__start(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__stop(t_STKEphemerisFile$STKEphemerisSegment *self, void *data);
        static PyGetSetDef t_STKEphemerisFile$STKEphemerisSegment__fields_[] = {
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, availableDerivatives),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, coordinates),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, frame),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, interpolationSamples),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, mu),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, start),
          DECLARE_GET_FIELD(t_STKEphemerisFile$STKEphemerisSegment, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_STKEphemerisFile$STKEphemerisSegment__methods_[] = {
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getCoordinates, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getMu, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getStart, METH_NOARGS),
          DECLARE_METHOD(t_STKEphemerisFile$STKEphemerisSegment, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(STKEphemerisFile$STKEphemerisSegment)[] = {
          { Py_tp_methods, t_STKEphemerisFile$STKEphemerisSegment__methods_ },
          { Py_tp_init, (void *) t_STKEphemerisFile$STKEphemerisSegment_init_ },
          { Py_tp_getset, t_STKEphemerisFile$STKEphemerisSegment__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(STKEphemerisFile$STKEphemerisSegment)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(STKEphemerisFile$STKEphemerisSegment, t_STKEphemerisFile$STKEphemerisSegment, STKEphemerisFile$STKEphemerisSegment);

        void t_STKEphemerisFile$STKEphemerisSegment::install(PyObject *module)
        {
          installType(&PY_TYPE(STKEphemerisFile$STKEphemerisSegment), &PY_TYPE_DEF(STKEphemerisFile$STKEphemerisSegment), module, "STKEphemerisFile$STKEphemerisSegment", 0);
        }

        void t_STKEphemerisFile$STKEphemerisSegment::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemerisSegment), "class_", make_descriptor(STKEphemerisFile$STKEphemerisSegment::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemerisSegment), "wrapfn_", make_descriptor(t_STKEphemerisFile$STKEphemerisSegment::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(STKEphemerisFile$STKEphemerisSegment), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, STKEphemerisFile$STKEphemerisSegment::initializeClass, 1)))
            return NULL;
          return t_STKEphemerisFile$STKEphemerisSegment::wrap_Object(STKEphemerisFile$STKEphemerisSegment(((t_STKEphemerisFile$STKEphemerisSegment *) arg)->object.this$));
        }
        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, STKEphemerisFile$STKEphemerisSegment::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_STKEphemerisFile$STKEphemerisSegment_init_(t_STKEphemerisFile$STKEphemerisSegment *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          ::org::orekit::frames::Frame a1((jobject) NULL);
          jint a2;
          ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
          PyTypeObject **p3;
          ::java::util::List a4((jobject) NULL);
          PyTypeObject **p4;
          STKEphemerisFile$STKEphemerisSegment object((jobject) NULL);

          if (!parseArgs(args, "DkIKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_, &a4, &p4, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = STKEphemerisFile$STKEphemerisSegment(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getAvailableDerivatives(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getCoordinates(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedPVCoordinates));
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getFrame(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getInterpolationSamples(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getMu(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getStart(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_getStop(t_STKEphemerisFile$STKEphemerisSegment *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__availableDerivatives(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__coordinates(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getCoordinates());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__frame(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__interpolationSamples(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__mu(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__start(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_STKEphemerisFile$STKEphemerisSegment_get__stop(t_STKEphemerisFile$STKEphemerisSegment *self, void *data)
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
#include "org/orekit/models/earth/displacement/PythonStationDisplacement.h"
#include "java/lang/Throwable.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/data/BodiesElements.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *PythonStationDisplacement::class$ = NULL;
          jmethodID *PythonStationDisplacement::mids$ = NULL;
          bool PythonStationDisplacement::live$ = false;

          jclass PythonStationDisplacement::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/PythonStationDisplacement");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_displacement_44ddfc2adc2cc28a] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonStationDisplacement::PythonStationDisplacement() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void PythonStationDisplacement::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
          }

          jlong PythonStationDisplacement::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
          }

          void PythonStationDisplacement::pythonExtension(jlong a0) const
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
    namespace models {
      namespace earth {
        namespace displacement {
          static PyObject *t_PythonStationDisplacement_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonStationDisplacement_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonStationDisplacement_init_(t_PythonStationDisplacement *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonStationDisplacement_finalize(t_PythonStationDisplacement *self);
          static PyObject *t_PythonStationDisplacement_pythonExtension(t_PythonStationDisplacement *self, PyObject *args);
          static jobject JNICALL t_PythonStationDisplacement_displacement0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
          static void JNICALL t_PythonStationDisplacement_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonStationDisplacement_get__self(t_PythonStationDisplacement *self, void *data);
          static PyGetSetDef t_PythonStationDisplacement__fields_[] = {
            DECLARE_GET_FIELD(t_PythonStationDisplacement, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonStationDisplacement__methods_[] = {
            DECLARE_METHOD(t_PythonStationDisplacement, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonStationDisplacement, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonStationDisplacement, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonStationDisplacement, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonStationDisplacement)[] = {
            { Py_tp_methods, t_PythonStationDisplacement__methods_ },
            { Py_tp_init, (void *) t_PythonStationDisplacement_init_ },
            { Py_tp_getset, t_PythonStationDisplacement__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonStationDisplacement)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonStationDisplacement, t_PythonStationDisplacement, PythonStationDisplacement);

          void t_PythonStationDisplacement::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonStationDisplacement), &PY_TYPE_DEF(PythonStationDisplacement), module, "PythonStationDisplacement", 1);
          }

          void t_PythonStationDisplacement::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStationDisplacement), "class_", make_descriptor(PythonStationDisplacement::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStationDisplacement), "wrapfn_", make_descriptor(t_PythonStationDisplacement::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStationDisplacement), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonStationDisplacement::initializeClass);
            JNINativeMethod methods[] = {
              { "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonStationDisplacement_displacement0 },
              { "pythonDecRef", "()V", (void *) t_PythonStationDisplacement_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonStationDisplacement_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonStationDisplacement::initializeClass, 1)))
              return NULL;
            return t_PythonStationDisplacement::wrap_Object(PythonStationDisplacement(((t_PythonStationDisplacement *) arg)->object.this$));
          }
          static PyObject *t_PythonStationDisplacement_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonStationDisplacement::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonStationDisplacement_init_(t_PythonStationDisplacement *self, PyObject *args, PyObject *kwds)
          {
            PythonStationDisplacement object((jobject) NULL);

            INT_CALL(object = PythonStationDisplacement());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonStationDisplacement_finalize(t_PythonStationDisplacement *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonStationDisplacement_pythonExtension(t_PythonStationDisplacement *self, PyObject *args)
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

          static jobject JNICALL t_PythonStationDisplacement_displacement0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStationDisplacement::mids$[PythonStationDisplacement::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            PyObject *o0 = ::org::orekit::data::t_BodiesElements::wrap_Object(::org::orekit::data::BodiesElements(a0));
            PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
            PyObject *o2 = ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(::org::hipparchus::geometry::euclidean::threed::Vector3D(a2));
            PyObject *result = PyObject_CallMethod(obj, "displacement", "OOO", o0, o1, o2);
            Py_DECREF(o0);
            Py_DECREF(o1);
            Py_DECREF(o2);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
            {
              throwTypeError("displacement", result);
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

          static void JNICALL t_PythonStationDisplacement_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonStationDisplacement::mids$[PythonStationDisplacement::mid_pythonExtension_42c72b98e3c2e08a]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonStationDisplacement::mids$[PythonStationDisplacement::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonStationDisplacement_get__self(t_PythonStationDisplacement *self, void *data)
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
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *AngularAzEl::class$ = NULL;
        jmethodID *AngularAzEl::mids$ = NULL;
        bool AngularAzEl::live$ = false;
        ::java::lang::String *AngularAzEl::MEASUREMENT_TYPE = NULL;

        jclass AngularAzEl::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/AngularAzEl");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_81a66ef405c1c200] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;[D[D[DLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getObservedLineOfSight_5996cdbecf4f0d06] = env->getMethodID(cls, "getObservedLineOfSight", "(Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_59954f62fc64aef2] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_eda25b8c88791d9a] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AngularAzEl::AngularAzEl(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::time::AbsoluteDate & a1, const JArray< jdouble > & a2, const JArray< jdouble > & a3, const JArray< jdouble > & a4, const ::org::orekit::estimation::measurements::ObservableSatellite & a5) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_81a66ef405c1c200, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D AngularAzEl::getObservedLineOfSight(const ::org::orekit::frames::Frame & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getObservedLineOfSight_5996cdbecf4f0d06], a0.this$));
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
        static PyObject *t_AngularAzEl_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularAzEl_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AngularAzEl_of_(t_AngularAzEl *self, PyObject *args);
        static int t_AngularAzEl_init_(t_AngularAzEl *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AngularAzEl_getObservedLineOfSight(t_AngularAzEl *self, PyObject *arg);
        static PyObject *t_AngularAzEl_get__parameters_(t_AngularAzEl *self, void *data);
        static PyGetSetDef t_AngularAzEl__fields_[] = {
          DECLARE_GET_FIELD(t_AngularAzEl, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AngularAzEl__methods_[] = {
          DECLARE_METHOD(t_AngularAzEl, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularAzEl, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AngularAzEl, of_, METH_VARARGS),
          DECLARE_METHOD(t_AngularAzEl, getObservedLineOfSight, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AngularAzEl)[] = {
          { Py_tp_methods, t_AngularAzEl__methods_ },
          { Py_tp_init, (void *) t_AngularAzEl_init_ },
          { Py_tp_getset, t_AngularAzEl__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AngularAzEl)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(AngularAzEl, t_AngularAzEl, AngularAzEl);
        PyObject *t_AngularAzEl::wrap_Object(const AngularAzEl& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularAzEl::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularAzEl *self = (t_AngularAzEl *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AngularAzEl::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AngularAzEl::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AngularAzEl *self = (t_AngularAzEl *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AngularAzEl::install(PyObject *module)
        {
          installType(&PY_TYPE(AngularAzEl), &PY_TYPE_DEF(AngularAzEl), module, "AngularAzEl", 0);
        }

        void t_AngularAzEl::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzEl), "class_", make_descriptor(AngularAzEl::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzEl), "wrapfn_", make_descriptor(t_AngularAzEl::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzEl), "boxfn_", make_descriptor(boxObject));
          env->getClass(AngularAzEl::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AngularAzEl), "MEASUREMENT_TYPE", make_descriptor(j2p(*AngularAzEl::MEASUREMENT_TYPE)));
        }

        static PyObject *t_AngularAzEl_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AngularAzEl::initializeClass, 1)))
            return NULL;
          return t_AngularAzEl::wrap_Object(AngularAzEl(((t_AngularAzEl *) arg)->object.this$));
        }
        static PyObject *t_AngularAzEl_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AngularAzEl::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AngularAzEl_of_(t_AngularAzEl *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_AngularAzEl_init_(t_AngularAzEl *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          JArray< jdouble > a2((jobject) NULL);
          JArray< jdouble > a3((jobject) NULL);
          JArray< jdouble > a4((jobject) NULL);
          ::org::orekit::estimation::measurements::ObservableSatellite a5((jobject) NULL);
          AngularAzEl object((jobject) NULL);

          if (!parseArgs(args, "kk[D[D[Dk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
          {
            INT_CALL(object = AngularAzEl(a0, a1, a2, a3, a4, a5));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(AngularAzEl);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AngularAzEl_getObservedLineOfSight(t_AngularAzEl *self, PyObject *arg)
        {
          ::org::orekit::frames::Frame a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getObservedLineOfSight(a0));
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getObservedLineOfSight", arg);
          return NULL;
        }
        static PyObject *t_AngularAzEl_get__parameters_(t_AngularAzEl *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator.h"
#include "org/orekit/frames/Frame.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {

          ::java::lang::Class *GLONASSAnalyticalPropagatorBuilder::class$ = NULL;
          jmethodID *GLONASSAnalyticalPropagatorBuilder::mids$ = NULL;
          bool GLONASSAnalyticalPropagatorBuilder::live$ = false;

          jclass GLONASSAnalyticalPropagatorBuilder::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_8cfe861a120d83e2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;)V");
              mids$[mid_init$_881c34b49df9a181] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/analytical/gnss/data/GLONASSOrbitalElements;Lorg/orekit/data/DataContext;)V");
              mids$[mid_attitudeProvider_65c004b941089ba2] = env->getMethodID(cls, "attitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");
              mids$[mid_build_395024687c74c4c6] = env->getMethodID(cls, "build", "()Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagator;");
              mids$[mid_dataContext_091acec42a6d0ecf] = env->getMethodID(cls, "dataContext", "(Lorg/orekit/data/DataContext;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");
              mids$[mid_ecef_c748be95531a2fb3] = env->getMethodID(cls, "ecef", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");
              mids$[mid_eci_c748be95531a2fb3] = env->getMethodID(cls, "eci", "(Lorg/orekit/frames/Frame;)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");
              mids$[mid_mass_7b189fc5d473ede6] = env->getMethodID(cls, "mass", "(D)Lorg/orekit/propagation/analytical/gnss/GLONASSAnalyticalPropagatorBuilder;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GLONASSAnalyticalPropagatorBuilder::GLONASSAnalyticalPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8cfe861a120d83e2, a0.this$)) {}

          GLONASSAnalyticalPropagatorBuilder::GLONASSAnalyticalPropagatorBuilder(const ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements & a0, const ::org::orekit::data::DataContext & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_881c34b49df9a181, a0.this$, a1.this$)) {}

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::attitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_attitudeProvider_65c004b941089ba2], a0.this$));
          }

          ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator GLONASSAnalyticalPropagatorBuilder::build() const
          {
            return ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator(env->callObjectMethod(this$, mids$[mid_build_395024687c74c4c6]));
          }

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::dataContext(const ::org::orekit::data::DataContext & a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_dataContext_091acec42a6d0ecf], a0.this$));
          }

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::ecef(const ::org::orekit::frames::Frame & a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_ecef_c748be95531a2fb3], a0.this$));
          }

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::eci(const ::org::orekit::frames::Frame & a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_eci_c748be95531a2fb3], a0.this$));
          }

          GLONASSAnalyticalPropagatorBuilder GLONASSAnalyticalPropagatorBuilder::mass(jdouble a0) const
          {
            return GLONASSAnalyticalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_mass_7b189fc5d473ede6], a0));
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
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GLONASSAnalyticalPropagatorBuilder_init_(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_attitudeProvider(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_build(t_GLONASSAnalyticalPropagatorBuilder *self);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_dataContext(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_ecef(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_eci(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_mass(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg);

          static PyMethodDef t_GLONASSAnalyticalPropagatorBuilder__methods_[] = {
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, attitudeProvider, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, build, METH_NOARGS),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, dataContext, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, ecef, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, eci, METH_O),
            DECLARE_METHOD(t_GLONASSAnalyticalPropagatorBuilder, mass, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GLONASSAnalyticalPropagatorBuilder)[] = {
            { Py_tp_methods, t_GLONASSAnalyticalPropagatorBuilder__methods_ },
            { Py_tp_init, (void *) t_GLONASSAnalyticalPropagatorBuilder_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GLONASSAnalyticalPropagatorBuilder)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GLONASSAnalyticalPropagatorBuilder, t_GLONASSAnalyticalPropagatorBuilder, GLONASSAnalyticalPropagatorBuilder);

          void t_GLONASSAnalyticalPropagatorBuilder::install(PyObject *module)
          {
            installType(&PY_TYPE(GLONASSAnalyticalPropagatorBuilder), &PY_TYPE_DEF(GLONASSAnalyticalPropagatorBuilder), module, "GLONASSAnalyticalPropagatorBuilder", 0);
          }

          void t_GLONASSAnalyticalPropagatorBuilder::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagatorBuilder), "class_", make_descriptor(GLONASSAnalyticalPropagatorBuilder::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagatorBuilder), "wrapfn_", make_descriptor(t_GLONASSAnalyticalPropagatorBuilder::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GLONASSAnalyticalPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GLONASSAnalyticalPropagatorBuilder::initializeClass, 1)))
              return NULL;
            return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(GLONASSAnalyticalPropagatorBuilder(((t_GLONASSAnalyticalPropagatorBuilder *) arg)->object.this$));
          }
          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GLONASSAnalyticalPropagatorBuilder::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GLONASSAnalyticalPropagatorBuilder_init_(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a0((jobject) NULL);
                GLONASSAnalyticalPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, &a0))
                {
                  INT_CALL(object = GLONASSAnalyticalPropagatorBuilder(a0));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 2:
              {
                ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements a0((jobject) NULL);
                ::org::orekit::data::DataContext a1((jobject) NULL);
                GLONASSAnalyticalPropagatorBuilder object((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::orekit::propagation::analytical::gnss::data::GLONASSOrbitalElements::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = GLONASSAnalyticalPropagatorBuilder(a0, a1));
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

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_attitudeProvider(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.attitudeProvider(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_build(t_GLONASSAnalyticalPropagatorBuilder *self)
          {
            ::org::orekit::propagation::analytical::gnss::GLONASSAnalyticalPropagator result((jobject) NULL);
            OBJ_CALL(result = self->object.build());
            return ::org::orekit::propagation::analytical::gnss::t_GLONASSAnalyticalPropagator::wrap_Object(result);
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_dataContext(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::data::DataContext a0((jobject) NULL);
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::data::DataContext::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.dataContext(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "dataContext", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_ecef(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.ecef(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "ecef", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_eci(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.eci(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eci", arg);
            return NULL;
          }

          static PyObject *t_GLONASSAnalyticalPropagatorBuilder_mass(t_GLONASSAnalyticalPropagatorBuilder *self, PyObject *arg)
          {
            jdouble a0;
            GLONASSAnalyticalPropagatorBuilder result((jobject) NULL);

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(result = self->object.mass(a0));
              return t_GLONASSAnalyticalPropagatorBuilder::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "mass", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldLUDecomposition.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
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
          mids$[mid_init$_87e4c06eff884f7d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/FieldMatrix;)V");
          mids$[mid_getDeterminant_f6328613456309a1] = env->getMethodID(cls, "getDeterminant", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_getL_02883dbbe5db44ac] = env->getMethodID(cls, "getL", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getP_02883dbbe5db44ac] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getPivot_d6f20bd740dd34cd] = env->getMethodID(cls, "getPivot", "()[I");
          mids$[mid_getSolver_86a1dd9765cf39e6] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/FieldDecompositionSolver;");
          mids$[mid_getU_02883dbbe5db44ac] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/linear/FieldMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldLUDecomposition::FieldLUDecomposition(const ::org::hipparchus::linear::FieldMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_87e4c06eff884f7d, a0.this$)) {}

      ::org::hipparchus::FieldElement FieldLUDecomposition::getDeterminant() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getDeterminant_f6328613456309a1]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldLUDecomposition::getL() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getL_02883dbbe5db44ac]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldLUDecomposition::getP() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getP_02883dbbe5db44ac]));
      }

      JArray< jint > FieldLUDecomposition::getPivot() const
      {
        return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getPivot_d6f20bd740dd34cd]));
      }

      ::org::hipparchus::linear::FieldDecompositionSolver FieldLUDecomposition::getSolver() const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_86a1dd9765cf39e6]));
      }

      ::org::hipparchus::linear::FieldMatrix FieldLUDecomposition::getU() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getU_02883dbbe5db44ac]));
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
#include "org/orekit/forces/maneuvers/propulsion/ProfileThrustPropulsionModel.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/forces/maneuvers/propulsion/PolynomialThrustSegment.h"
#include "org/orekit/forces/maneuvers/Control3DVectorCostType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ProfileThrustPropulsionModel::class$ = NULL;
          jmethodID *ProfileThrustPropulsionModel::mids$ = NULL;
          bool ProfileThrustPropulsionModel::live$ = false;

          jclass ProfileThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ProfileThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_d00ea30a932a71de] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/TimeSpanMap;DLorg/orekit/forces/maneuvers/Control3DVectorCostType;Ljava/lang/String;)V");
              mids$[mid_getControl3DVectorCostType_fc9abda16ef946e0] = env->getMethodID(cls, "getControl3DVectorCostType", "()Lorg/orekit/forces/maneuvers/Control3DVectorCostType;");
              mids$[mid_getEventDetectors_11e4ca8182c1933d] = env->getMethodID(cls, "getEventDetectors", "()Ljava/util/stream/Stream;");
              mids$[mid_getFieldEventDetectors_d3db121d9deb0312] = env->getMethodID(cls, "getFieldEventDetectors", "(Lorg/hipparchus/Field;)Ljava/util/stream/Stream;");
              mids$[mid_getFlowRate_b443ba1cc794b916] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getFlowRate_4222abdadde032f5] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getFlowRate_6c8e6cd5d59063ae] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
              mids$[mid_getParametersDrivers_d751c1a57012b438] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_getThrustVector_38283c57554889c0] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_9816b8f76e94356a] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getThrustVector_5e147f44c28a35c9] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ProfileThrustPropulsionModel::ProfileThrustPropulsionModel(const ::org::orekit::utils::TimeSpanMap & a0, jdouble a1, const ::org::orekit::forces::maneuvers::Control3DVectorCostType & a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d00ea30a932a71de, a0.this$, a1, a2.this$, a3.this$)) {}

          ::org::orekit::forces::maneuvers::Control3DVectorCostType ProfileThrustPropulsionModel::getControl3DVectorCostType() const
          {
            return ::org::orekit::forces::maneuvers::Control3DVectorCostType(env->callObjectMethod(this$, mids$[mid_getControl3DVectorCostType_fc9abda16ef946e0]));
          }

          ::java::util::stream::Stream ProfileThrustPropulsionModel::getEventDetectors() const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getEventDetectors_11e4ca8182c1933d]));
          }

          ::java::util::stream::Stream ProfileThrustPropulsionModel::getFieldEventDetectors(const ::org::hipparchus::Field & a0) const
          {
            return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getFieldEventDetectors_d3db121d9deb0312], a0.this$));
          }

          jdouble ProfileThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_b443ba1cc794b916], a0.this$);
          }

          jdouble ProfileThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_4222abdadde032f5], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement ProfileThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_6c8e6cd5d59063ae], a0.this$, a1.this$));
          }

          ::java::lang::String ProfileThrustPropulsionModel::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
          }

          ::java::util::List ProfileThrustPropulsionModel::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_d751c1a57012b438]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ProfileThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_38283c57554889c0], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ProfileThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_9816b8f76e94356a], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ProfileThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_5e147f44c28a35c9], a0.this$, a1.this$));
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
          static PyObject *t_ProfileThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ProfileThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ProfileThrustPropulsionModel_init_(t_ProfileThrustPropulsionModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ProfileThrustPropulsionModel_getControl3DVectorCostType(t_ProfileThrustPropulsionModel *self);
          static PyObject *t_ProfileThrustPropulsionModel_getEventDetectors(t_ProfileThrustPropulsionModel *self);
          static PyObject *t_ProfileThrustPropulsionModel_getFieldEventDetectors(t_ProfileThrustPropulsionModel *self, PyObject *arg);
          static PyObject *t_ProfileThrustPropulsionModel_getFlowRate(t_ProfileThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ProfileThrustPropulsionModel_getName(t_ProfileThrustPropulsionModel *self);
          static PyObject *t_ProfileThrustPropulsionModel_getParametersDrivers(t_ProfileThrustPropulsionModel *self);
          static PyObject *t_ProfileThrustPropulsionModel_getThrustVector(t_ProfileThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ProfileThrustPropulsionModel_get__control3DVectorCostType(t_ProfileThrustPropulsionModel *self, void *data);
          static PyObject *t_ProfileThrustPropulsionModel_get__eventDetectors(t_ProfileThrustPropulsionModel *self, void *data);
          static PyObject *t_ProfileThrustPropulsionModel_get__name(t_ProfileThrustPropulsionModel *self, void *data);
          static PyObject *t_ProfileThrustPropulsionModel_get__parametersDrivers(t_ProfileThrustPropulsionModel *self, void *data);
          static PyGetSetDef t_ProfileThrustPropulsionModel__fields_[] = {
            DECLARE_GET_FIELD(t_ProfileThrustPropulsionModel, control3DVectorCostType),
            DECLARE_GET_FIELD(t_ProfileThrustPropulsionModel, eventDetectors),
            DECLARE_GET_FIELD(t_ProfileThrustPropulsionModel, name),
            DECLARE_GET_FIELD(t_ProfileThrustPropulsionModel, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ProfileThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getControl3DVectorCostType, METH_NOARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getEventDetectors, METH_NOARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getFieldEventDetectors, METH_O),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getName, METH_NOARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ProfileThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ProfileThrustPropulsionModel)[] = {
            { Py_tp_methods, t_ProfileThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) t_ProfileThrustPropulsionModel_init_ },
            { Py_tp_getset, t_ProfileThrustPropulsionModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ProfileThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ProfileThrustPropulsionModel, t_ProfileThrustPropulsionModel, ProfileThrustPropulsionModel);

          void t_ProfileThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ProfileThrustPropulsionModel), &PY_TYPE_DEF(ProfileThrustPropulsionModel), module, "ProfileThrustPropulsionModel", 0);
          }

          void t_ProfileThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ProfileThrustPropulsionModel), "class_", make_descriptor(ProfileThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ProfileThrustPropulsionModel), "wrapfn_", make_descriptor(t_ProfileThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ProfileThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ProfileThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ProfileThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_ProfileThrustPropulsionModel::wrap_Object(ProfileThrustPropulsionModel(((t_ProfileThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_ProfileThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ProfileThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ProfileThrustPropulsionModel_init_(t_ProfileThrustPropulsionModel *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::utils::TimeSpanMap a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            ::org::orekit::forces::maneuvers::Control3DVectorCostType a2((jobject) NULL);
            PyTypeObject **p2;
            ::java::lang::String a3((jobject) NULL);
            ProfileThrustPropulsionModel object((jobject) NULL);

            if (!parseArgs(args, "KDKs", ::org::orekit::utils::TimeSpanMap::initializeClass, ::org::orekit::forces::maneuvers::Control3DVectorCostType::initializeClass, &a0, &p0, ::org::orekit::utils::t_TimeSpanMap::parameters_, &a1, &a2, &p2, ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::parameters_, &a3))
            {
              INT_CALL(object = ProfileThrustPropulsionModel(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ProfileThrustPropulsionModel_getControl3DVectorCostType(t_ProfileThrustPropulsionModel *self)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType result((jobject) NULL);
            OBJ_CALL(result = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(result);
          }

          static PyObject *t_ProfileThrustPropulsionModel_getEventDetectors(t_ProfileThrustPropulsionModel *self)
          {
            ::java::util::stream::Stream result((jobject) NULL);
            OBJ_CALL(result = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(result, ::org::orekit::propagation::events::PY_TYPE(EventDetector));
          }

          static PyObject *t_ProfileThrustPropulsionModel_getFieldEventDetectors(t_ProfileThrustPropulsionModel *self, PyObject *arg)
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

          static PyObject *t_ProfileThrustPropulsionModel_getFlowRate(t_ProfileThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getFlowRate", args);
            return NULL;
          }

          static PyObject *t_ProfileThrustPropulsionModel_getName(t_ProfileThrustPropulsionModel *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_ProfileThrustPropulsionModel_getParametersDrivers(t_ProfileThrustPropulsionModel *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ProfileThrustPropulsionModel_getThrustVector(t_ProfileThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
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
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
            return NULL;
          }

          static PyObject *t_ProfileThrustPropulsionModel_get__control3DVectorCostType(t_ProfileThrustPropulsionModel *self, void *data)
          {
            ::org::orekit::forces::maneuvers::Control3DVectorCostType value((jobject) NULL);
            OBJ_CALL(value = self->object.getControl3DVectorCostType());
            return ::org::orekit::forces::maneuvers::t_Control3DVectorCostType::wrap_Object(value);
          }

          static PyObject *t_ProfileThrustPropulsionModel_get__eventDetectors(t_ProfileThrustPropulsionModel *self, void *data)
          {
            ::java::util::stream::Stream value((jobject) NULL);
            OBJ_CALL(value = self->object.getEventDetectors());
            return ::java::util::stream::t_Stream::wrap_Object(value);
          }

          static PyObject *t_ProfileThrustPropulsionModel_get__name(t_ProfileThrustPropulsionModel *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getName());
            return j2p(value);
          }

          static PyObject *t_ProfileThrustPropulsionModel_get__parametersDrivers(t_ProfileThrustPropulsionModel *self, void *data)
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
#include "org/hipparchus/distribution/continuous/EnumeratedRealDistribution.h"
#include "java/util/List.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Pair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *EnumeratedRealDistribution::class$ = NULL;
        jmethodID *EnumeratedRealDistribution::mids$ = NULL;
        bool EnumeratedRealDistribution::live$ = false;

        jclass EnumeratedRealDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/EnumeratedRealDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a71c45509eaf92d1] = env->getMethodID(cls, "<init>", "([D)V");
            mids$[mid_init$_64100e41ba74de8f] = env->getMethodID(cls, "<init>", "([D[D)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getPmf_d751c1a57012b438] = env->getMethodID(cls, "getPmf", "()Ljava/util/List;");
            mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_probability_bf28ed64d6e8576b] = env->getMethodID(cls, "probability", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        EnumeratedRealDistribution::EnumeratedRealDistribution(const JArray< jdouble > & a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_a71c45509eaf92d1, a0.this$)) {}

        EnumeratedRealDistribution::EnumeratedRealDistribution(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_64100e41ba74de8f, a0.this$, a1.this$)) {}

        jdouble EnumeratedRealDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble EnumeratedRealDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jdouble EnumeratedRealDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble EnumeratedRealDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        ::java::util::List EnumeratedRealDistribution::getPmf() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getPmf_d751c1a57012b438]));
        }

        jdouble EnumeratedRealDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble EnumeratedRealDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        jdouble EnumeratedRealDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jboolean EnumeratedRealDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
        }

        jdouble EnumeratedRealDistribution::probability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_bf28ed64d6e8576b], a0);
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
        static PyObject *t_EnumeratedRealDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EnumeratedRealDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_EnumeratedRealDistribution_init_(t_EnumeratedRealDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_EnumeratedRealDistribution_cumulativeProbability(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_density(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_getNumericalMean(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_getNumericalVariance(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_getPmf(t_EnumeratedRealDistribution *self);
        static PyObject *t_EnumeratedRealDistribution_getSupportLowerBound(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_getSupportUpperBound(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_inverseCumulativeProbability(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_isSupportConnected(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_probability(t_EnumeratedRealDistribution *self, PyObject *args);
        static PyObject *t_EnumeratedRealDistribution_get__numericalMean(t_EnumeratedRealDistribution *self, void *data);
        static PyObject *t_EnumeratedRealDistribution_get__numericalVariance(t_EnumeratedRealDistribution *self, void *data);
        static PyObject *t_EnumeratedRealDistribution_get__pmf(t_EnumeratedRealDistribution *self, void *data);
        static PyObject *t_EnumeratedRealDistribution_get__supportConnected(t_EnumeratedRealDistribution *self, void *data);
        static PyObject *t_EnumeratedRealDistribution_get__supportLowerBound(t_EnumeratedRealDistribution *self, void *data);
        static PyObject *t_EnumeratedRealDistribution_get__supportUpperBound(t_EnumeratedRealDistribution *self, void *data);
        static PyGetSetDef t_EnumeratedRealDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, numericalMean),
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, pmf),
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, supportConnected),
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_EnumeratedRealDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EnumeratedRealDistribution__methods_[] = {
          DECLARE_METHOD(t_EnumeratedRealDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, getPmf, METH_NOARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_EnumeratedRealDistribution, probability, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EnumeratedRealDistribution)[] = {
          { Py_tp_methods, t_EnumeratedRealDistribution__methods_ },
          { Py_tp_init, (void *) t_EnumeratedRealDistribution_init_ },
          { Py_tp_getset, t_EnumeratedRealDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EnumeratedRealDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(EnumeratedRealDistribution, t_EnumeratedRealDistribution, EnumeratedRealDistribution);

        void t_EnumeratedRealDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(EnumeratedRealDistribution), &PY_TYPE_DEF(EnumeratedRealDistribution), module, "EnumeratedRealDistribution", 0);
        }

        void t_EnumeratedRealDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedRealDistribution), "class_", make_descriptor(EnumeratedRealDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedRealDistribution), "wrapfn_", make_descriptor(t_EnumeratedRealDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EnumeratedRealDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EnumeratedRealDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EnumeratedRealDistribution::initializeClass, 1)))
            return NULL;
          return t_EnumeratedRealDistribution::wrap_Object(EnumeratedRealDistribution(((t_EnumeratedRealDistribution *) arg)->object.this$));
        }
        static PyObject *t_EnumeratedRealDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EnumeratedRealDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_EnumeratedRealDistribution_init_(t_EnumeratedRealDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< jdouble > a0((jobject) NULL);
              EnumeratedRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D", &a0))
              {
                INT_CALL(object = EnumeratedRealDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              EnumeratedRealDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D[D", &a0, &a1))
              {
                INT_CALL(object = EnumeratedRealDistribution(a0, a1));
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

        static PyObject *t_EnumeratedRealDistribution_cumulativeProbability(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_density(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_getNumericalMean(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_getNumericalVariance(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_getPmf(t_EnumeratedRealDistribution *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getPmf());
          return ::java::util::t_List::wrap_Object(result);
        }

        static PyObject *t_EnumeratedRealDistribution_getSupportLowerBound(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_getSupportUpperBound(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_inverseCumulativeProbability(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_isSupportConnected(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_probability(t_EnumeratedRealDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(EnumeratedRealDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_EnumeratedRealDistribution_get__numericalMean(t_EnumeratedRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnumeratedRealDistribution_get__numericalVariance(t_EnumeratedRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnumeratedRealDistribution_get__pmf(t_EnumeratedRealDistribution *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getPmf());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_EnumeratedRealDistribution_get__supportConnected(t_EnumeratedRealDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_EnumeratedRealDistribution_get__supportLowerBound(t_EnumeratedRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_EnumeratedRealDistribution_get__supportUpperBound(t_EnumeratedRealDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
