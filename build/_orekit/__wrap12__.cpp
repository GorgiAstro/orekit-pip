#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/Incrementor.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/util/Incrementor$MaxCountExceededCallback.h"
#include "org/hipparchus/util/Incrementor.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Incrementor::class$ = NULL;
      jmethodID *Incrementor::mids$ = NULL;
      bool Incrementor::live$ = false;

      jclass Incrementor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Incrementor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_64a8f945b6007642] = env->getMethodID(cls, "<init>", "(ILorg/hipparchus/util/Incrementor$MaxCountExceededCallback;)V");
          mids$[mid_canIncrement_b108b35ef48e27bd] = env->getMethodID(cls, "canIncrement", "()Z");
          mids$[mid_canIncrement_b6e9be1df30aebaf] = env->getMethodID(cls, "canIncrement", "(I)Z");
          mids$[mid_getCount_570ce0828f81a2c1] = env->getMethodID(cls, "getCount", "()I");
          mids$[mid_getMaximalCount_570ce0828f81a2c1] = env->getMethodID(cls, "getMaximalCount", "()I");
          mids$[mid_increment_0fa09c18fee449d5] = env->getMethodID(cls, "increment", "()V");
          mids$[mid_increment_99803b0791f320ff] = env->getMethodID(cls, "increment", "(I)V");
          mids$[mid_reset_0fa09c18fee449d5] = env->getMethodID(cls, "reset", "()V");
          mids$[mid_withCallback_5e17552b7df732f4] = env->getMethodID(cls, "withCallback", "(Lorg/hipparchus/util/Incrementor$MaxCountExceededCallback;)Lorg/hipparchus/util/Incrementor;");
          mids$[mid_withCount_bbd7a2dca0197fe7] = env->getMethodID(cls, "withCount", "(I)Lorg/hipparchus/util/Incrementor;");
          mids$[mid_withMaximalCount_bbd7a2dca0197fe7] = env->getMethodID(cls, "withMaximalCount", "(I)Lorg/hipparchus/util/Incrementor;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Incrementor::Incrementor() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

      Incrementor::Incrementor(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

      Incrementor::Incrementor(jint a0, const ::org::hipparchus::util::Incrementor$MaxCountExceededCallback & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_64a8f945b6007642, a0, a1.this$)) {}

      jboolean Incrementor::canIncrement() const
      {
        return env->callBooleanMethod(this$, mids$[mid_canIncrement_b108b35ef48e27bd]);
      }

      jboolean Incrementor::canIncrement(jint a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_canIncrement_b6e9be1df30aebaf], a0);
      }

      jint Incrementor::getCount() const
      {
        return env->callIntMethod(this$, mids$[mid_getCount_570ce0828f81a2c1]);
      }

      jint Incrementor::getMaximalCount() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaximalCount_570ce0828f81a2c1]);
      }

      void Incrementor::increment() const
      {
        env->callVoidMethod(this$, mids$[mid_increment_0fa09c18fee449d5]);
      }

      void Incrementor::increment(jint a0) const
      {
        env->callVoidMethod(this$, mids$[mid_increment_99803b0791f320ff], a0);
      }

      void Incrementor::reset() const
      {
        env->callVoidMethod(this$, mids$[mid_reset_0fa09c18fee449d5]);
      }

      Incrementor Incrementor::withCallback(const ::org::hipparchus::util::Incrementor$MaxCountExceededCallback & a0) const
      {
        return Incrementor(env->callObjectMethod(this$, mids$[mid_withCallback_5e17552b7df732f4], a0.this$));
      }

      Incrementor Incrementor::withCount(jint a0) const
      {
        return Incrementor(env->callObjectMethod(this$, mids$[mid_withCount_bbd7a2dca0197fe7], a0));
      }

      Incrementor Incrementor::withMaximalCount(jint a0) const
      {
        return Incrementor(env->callObjectMethod(this$, mids$[mid_withMaximalCount_bbd7a2dca0197fe7], a0));
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
      static PyObject *t_Incrementor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Incrementor_instance_(PyTypeObject *type, PyObject *arg);
      static int t_Incrementor_init_(t_Incrementor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_Incrementor_canIncrement(t_Incrementor *self, PyObject *args);
      static PyObject *t_Incrementor_getCount(t_Incrementor *self);
      static PyObject *t_Incrementor_getMaximalCount(t_Incrementor *self);
      static PyObject *t_Incrementor_increment(t_Incrementor *self, PyObject *args);
      static PyObject *t_Incrementor_reset(t_Incrementor *self);
      static PyObject *t_Incrementor_withCallback(t_Incrementor *self, PyObject *arg);
      static PyObject *t_Incrementor_withCount(t_Incrementor *self, PyObject *arg);
      static PyObject *t_Incrementor_withMaximalCount(t_Incrementor *self, PyObject *arg);
      static PyObject *t_Incrementor_get__count(t_Incrementor *self, void *data);
      static PyObject *t_Incrementor_get__maximalCount(t_Incrementor *self, void *data);
      static PyGetSetDef t_Incrementor__fields_[] = {
        DECLARE_GET_FIELD(t_Incrementor, count),
        DECLARE_GET_FIELD(t_Incrementor, maximalCount),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Incrementor__methods_[] = {
        DECLARE_METHOD(t_Incrementor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Incrementor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Incrementor, canIncrement, METH_VARARGS),
        DECLARE_METHOD(t_Incrementor, getCount, METH_NOARGS),
        DECLARE_METHOD(t_Incrementor, getMaximalCount, METH_NOARGS),
        DECLARE_METHOD(t_Incrementor, increment, METH_VARARGS),
        DECLARE_METHOD(t_Incrementor, reset, METH_NOARGS),
        DECLARE_METHOD(t_Incrementor, withCallback, METH_O),
        DECLARE_METHOD(t_Incrementor, withCount, METH_O),
        DECLARE_METHOD(t_Incrementor, withMaximalCount, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Incrementor)[] = {
        { Py_tp_methods, t_Incrementor__methods_ },
        { Py_tp_init, (void *) t_Incrementor_init_ },
        { Py_tp_getset, t_Incrementor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Incrementor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Incrementor, t_Incrementor, Incrementor);

      void t_Incrementor::install(PyObject *module)
      {
        installType(&PY_TYPE(Incrementor), &PY_TYPE_DEF(Incrementor), module, "Incrementor", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor), "MaxCountExceededCallback", make_descriptor(&PY_TYPE_DEF(Incrementor$MaxCountExceededCallback)));
      }

      void t_Incrementor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor), "class_", make_descriptor(Incrementor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor), "wrapfn_", make_descriptor(t_Incrementor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Incrementor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Incrementor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Incrementor::initializeClass, 1)))
          return NULL;
        return t_Incrementor::wrap_Object(Incrementor(((t_Incrementor *) arg)->object.this$));
      }
      static PyObject *t_Incrementor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Incrementor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_Incrementor_init_(t_Incrementor *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Incrementor object((jobject) NULL);

            INT_CALL(object = Incrementor());
            self->object = object;
            break;
          }
         case 1:
          {
            jint a0;
            Incrementor object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = Incrementor(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::hipparchus::util::Incrementor$MaxCountExceededCallback a1((jobject) NULL);
            Incrementor object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::hipparchus::util::Incrementor$MaxCountExceededCallback::initializeClass, &a0, &a1))
            {
              INT_CALL(object = Incrementor(a0, a1));
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

      static PyObject *t_Incrementor_canIncrement(t_Incrementor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jboolean result;
            OBJ_CALL(result = self->object.canIncrement());
            Py_RETURN_BOOL(result);
          }
          break;
         case 1:
          {
            jint a0;
            jboolean result;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.canIncrement(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "canIncrement", args);
        return NULL;
      }

      static PyObject *t_Incrementor_getCount(t_Incrementor *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getCount());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Incrementor_getMaximalCount(t_Incrementor *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaximalCount());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Incrementor_increment(t_Incrementor *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            OBJ_CALL(self->object.increment());
            Py_RETURN_NONE;
          }
          break;
         case 1:
          {
            jint a0;

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "increment", args);
        return NULL;
      }

      static PyObject *t_Incrementor_reset(t_Incrementor *self)
      {
        OBJ_CALL(self->object.reset());
        Py_RETURN_NONE;
      }

      static PyObject *t_Incrementor_withCallback(t_Incrementor *self, PyObject *arg)
      {
        ::org::hipparchus::util::Incrementor$MaxCountExceededCallback a0((jobject) NULL);
        Incrementor result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::util::Incrementor$MaxCountExceededCallback::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.withCallback(a0));
          return t_Incrementor::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withCallback", arg);
        return NULL;
      }

      static PyObject *t_Incrementor_withCount(t_Incrementor *self, PyObject *arg)
      {
        jint a0;
        Incrementor result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withCount(a0));
          return t_Incrementor::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withCount", arg);
        return NULL;
      }

      static PyObject *t_Incrementor_withMaximalCount(t_Incrementor *self, PyObject *arg)
      {
        jint a0;
        Incrementor result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.withMaximalCount(a0));
          return t_Incrementor::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "withMaximalCount", arg);
        return NULL;
      }

      static PyObject *t_Incrementor_get__count(t_Incrementor *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getCount());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Incrementor_get__maximalCount(t_Incrementor *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaximalCount());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/ThirdBodyAttractionEpoch.h"
#include "java/lang/Class.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *ThirdBodyAttractionEpoch::class$ = NULL;
        jmethodID *ThirdBodyAttractionEpoch::mids$ = NULL;
        bool ThirdBodyAttractionEpoch::live$ = false;

        jclass ThirdBodyAttractionEpoch::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/ThirdBodyAttractionEpoch");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6a22a7b4e14949e4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;)V");
            mids$[mid_getDerivativesToEpoch_bfa7a0d11c0ebcbf] = env->getMethodID(cls, "getDerivativesToEpoch", "(Lorg/orekit/propagation/SpacecraftState;[D)[D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThirdBodyAttractionEpoch::ThirdBodyAttractionEpoch(const ::org::orekit::bodies::CelestialBody & a0) : ::org::orekit::forces::gravity::ThirdBodyAttraction(env->newObject(initializeClass, &mids$, mid_init$_6a22a7b4e14949e4, a0.this$)) {}

        JArray< jdouble > ThirdBodyAttractionEpoch::getDerivativesToEpoch(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getDerivativesToEpoch_bfa7a0d11c0ebcbf], a0.this$, a1.this$));
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
        static PyObject *t_ThirdBodyAttractionEpoch_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThirdBodyAttractionEpoch_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ThirdBodyAttractionEpoch_init_(t_ThirdBodyAttractionEpoch *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThirdBodyAttractionEpoch_getDerivativesToEpoch(t_ThirdBodyAttractionEpoch *self, PyObject *args);

        static PyMethodDef t_ThirdBodyAttractionEpoch__methods_[] = {
          DECLARE_METHOD(t_ThirdBodyAttractionEpoch, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThirdBodyAttractionEpoch, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThirdBodyAttractionEpoch, getDerivativesToEpoch, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThirdBodyAttractionEpoch)[] = {
          { Py_tp_methods, t_ThirdBodyAttractionEpoch__methods_ },
          { Py_tp_init, (void *) t_ThirdBodyAttractionEpoch_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThirdBodyAttractionEpoch)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::gravity::ThirdBodyAttraction),
          NULL
        };

        DEFINE_TYPE(ThirdBodyAttractionEpoch, t_ThirdBodyAttractionEpoch, ThirdBodyAttractionEpoch);

        void t_ThirdBodyAttractionEpoch::install(PyObject *module)
        {
          installType(&PY_TYPE(ThirdBodyAttractionEpoch), &PY_TYPE_DEF(ThirdBodyAttractionEpoch), module, "ThirdBodyAttractionEpoch", 0);
        }

        void t_ThirdBodyAttractionEpoch::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttractionEpoch), "class_", make_descriptor(ThirdBodyAttractionEpoch::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttractionEpoch), "wrapfn_", make_descriptor(t_ThirdBodyAttractionEpoch::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThirdBodyAttractionEpoch), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThirdBodyAttractionEpoch_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThirdBodyAttractionEpoch::initializeClass, 1)))
            return NULL;
          return t_ThirdBodyAttractionEpoch::wrap_Object(ThirdBodyAttractionEpoch(((t_ThirdBodyAttractionEpoch *) arg)->object.this$));
        }
        static PyObject *t_ThirdBodyAttractionEpoch_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThirdBodyAttractionEpoch::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ThirdBodyAttractionEpoch_init_(t_ThirdBodyAttractionEpoch *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
          ThirdBodyAttractionEpoch object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::bodies::CelestialBody::initializeClass, &a0))
          {
            INT_CALL(object = ThirdBodyAttractionEpoch(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThirdBodyAttractionEpoch_getDerivativesToEpoch(t_ThirdBodyAttractionEpoch *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getDerivativesToEpoch(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "getDerivativesToEpoch", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/orekit/attitudes/AttitudeBuilder.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "org/orekit/files/ccsds/definitions/FrameFacade.h"
#include "org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Enum.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AttitudeEndpoints::class$ = NULL;
            jmethodID *AttitudeEndpoints::mids$ = NULL;
            bool AttitudeEndpoints::live$ = false;
            ::java::lang::String *AttitudeEndpoints::A2B = NULL;
            ::java::lang::String *AttitudeEndpoints::B2A = NULL;

            jclass AttitudeEndpoints::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AttitudeEndpoints");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_build_32e9a4ac991f1702] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;)Lorg/orekit/attitudes/FieldAttitude;");
                mids$[mid_build_54b3b52d9ecd9e48] = env->getMethodID(cls, "build", "(Lorg/orekit/frames/Frame;Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/utils/TimeStampedAngularCoordinates;)Lorg/orekit/attitudes/Attitude;");
                mids$[mid_checkExternalFrame_11b1ff867c62ed90] = env->getMethodID(cls, "checkExternalFrame", "(Ljava/lang/Enum;Ljava/lang/Enum;)V");
                mids$[mid_checkMandatoryEntriesExceptExternalFrame_928242bba88ff831] = env->getMethodID(cls, "checkMandatoryEntriesExceptExternalFrame", "(DLjava/lang/Enum;Ljava/lang/Enum;Ljava/lang/Enum;)V");
                mids$[mid_getExternalFrame_5d5dd95b04037824] = env->getMethodID(cls, "getExternalFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getFrameA_5d5dd95b04037824] = env->getMethodID(cls, "getFrameA", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getFrameB_5d5dd95b04037824] = env->getMethodID(cls, "getFrameB", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_getSpacecraftBodyFrame_5d5dd95b04037824] = env->getMethodID(cls, "getSpacecraftBodyFrame", "()Lorg/orekit/files/ccsds/definitions/FrameFacade;");
                mids$[mid_isA2b_b108b35ef48e27bd] = env->getMethodID(cls, "isA2b", "()Z");
                mids$[mid_isCompatibleWith_8b4c4011cac9576a] = env->getMethodID(cls, "isCompatibleWith", "(Lorg/orekit/files/ccsds/ndm/adm/AttitudeEndpoints;)Z");
                mids$[mid_isExternal2SpacecraftBody_b108b35ef48e27bd] = env->getMethodID(cls, "isExternal2SpacecraftBody", "()Z");
                mids$[mid_setA2b_bd04c9335fb9e4cf] = env->getMethodID(cls, "setA2b", "(Z)V");
                mids$[mid_setFrameA_849bc9e3b38b9bcb] = env->getMethodID(cls, "setFrameA", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_setFrameB_849bc9e3b38b9bcb] = env->getMethodID(cls, "setFrameB", "(Lorg/orekit/files/ccsds/definitions/FrameFacade;)V");
                mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                A2B = new ::java::lang::String(env->getStaticObjectField(cls, "A2B", "Ljava/lang/String;"));
                B2A = new ::java::lang::String(env->getStaticObjectField(cls, "B2A", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            AttitudeEndpoints::AttitudeEndpoints() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            ::org::orekit::attitudes::FieldAttitude AttitudeEndpoints::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::FieldPVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedFieldAngularCoordinates & a2) const
            {
              return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_build_32e9a4ac991f1702], a0.this$, a1.this$, a2.this$));
            }

            ::org::orekit::attitudes::Attitude AttitudeEndpoints::build(const ::org::orekit::frames::Frame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, const ::org::orekit::utils::TimeStampedAngularCoordinates & a2) const
            {
              return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_build_54b3b52d9ecd9e48], a0.this$, a1.this$, a2.this$));
            }

            void AttitudeEndpoints::checkExternalFrame(const ::java::lang::Enum & a0, const ::java::lang::Enum & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_checkExternalFrame_11b1ff867c62ed90], a0.this$, a1.this$);
            }

            void AttitudeEndpoints::checkMandatoryEntriesExceptExternalFrame(jdouble a0, const ::java::lang::Enum & a1, const ::java::lang::Enum & a2, const ::java::lang::Enum & a3) const
            {
              env->callVoidMethod(this$, mids$[mid_checkMandatoryEntriesExceptExternalFrame_928242bba88ff831], a0, a1.this$, a2.this$, a3.this$);
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeEndpoints::getExternalFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getExternalFrame_5d5dd95b04037824]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeEndpoints::getFrameA() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrameA_5d5dd95b04037824]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeEndpoints::getFrameB() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getFrameB_5d5dd95b04037824]));
            }

            ::org::orekit::files::ccsds::definitions::FrameFacade AttitudeEndpoints::getSpacecraftBodyFrame() const
            {
              return ::org::orekit::files::ccsds::definitions::FrameFacade(env->callObjectMethod(this$, mids$[mid_getSpacecraftBodyFrame_5d5dd95b04037824]));
            }

            jboolean AttitudeEndpoints::isA2b() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isA2b_b108b35ef48e27bd]);
            }

            jboolean AttitudeEndpoints::isCompatibleWith(const AttitudeEndpoints & a0) const
            {
              return env->callBooleanMethod(this$, mids$[mid_isCompatibleWith_8b4c4011cac9576a], a0.this$);
            }

            jboolean AttitudeEndpoints::isExternal2SpacecraftBody() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isExternal2SpacecraftBody_b108b35ef48e27bd]);
            }

            void AttitudeEndpoints::setA2b(jboolean a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setA2b_bd04c9335fb9e4cf], a0);
            }

            void AttitudeEndpoints::setFrameA(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrameA_849bc9e3b38b9bcb], a0.this$);
            }

            void AttitudeEndpoints::setFrameB(const ::org::orekit::files::ccsds::definitions::FrameFacade & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFrameB_849bc9e3b38b9bcb], a0.this$);
            }

            ::java::lang::String AttitudeEndpoints::toString() const
            {
              return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
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
            static PyObject *t_AttitudeEndpoints_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_instance_(PyTypeObject *type, PyObject *arg);
            static int t_AttitudeEndpoints_init_(t_AttitudeEndpoints *self, PyObject *args, PyObject *kwds);
            static PyObject *t_AttitudeEndpoints_build(t_AttitudeEndpoints *self, PyObject *args);
            static PyObject *t_AttitudeEndpoints_checkExternalFrame(t_AttitudeEndpoints *self, PyObject *args);
            static PyObject *t_AttitudeEndpoints_checkMandatoryEntriesExceptExternalFrame(t_AttitudeEndpoints *self, PyObject *args);
            static PyObject *t_AttitudeEndpoints_getExternalFrame(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_getFrameA(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_getFrameB(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_getSpacecraftBodyFrame(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_isA2b(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_isCompatibleWith(t_AttitudeEndpoints *self, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_isExternal2SpacecraftBody(t_AttitudeEndpoints *self);
            static PyObject *t_AttitudeEndpoints_setA2b(t_AttitudeEndpoints *self, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_setFrameA(t_AttitudeEndpoints *self, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_setFrameB(t_AttitudeEndpoints *self, PyObject *arg);
            static PyObject *t_AttitudeEndpoints_toString(t_AttitudeEndpoints *self, PyObject *args);
            static PyObject *t_AttitudeEndpoints_get__a2b(t_AttitudeEndpoints *self, void *data);
            static int t_AttitudeEndpoints_set__a2b(t_AttitudeEndpoints *self, PyObject *arg, void *data);
            static PyObject *t_AttitudeEndpoints_get__external2SpacecraftBody(t_AttitudeEndpoints *self, void *data);
            static PyObject *t_AttitudeEndpoints_get__externalFrame(t_AttitudeEndpoints *self, void *data);
            static PyObject *t_AttitudeEndpoints_get__frameA(t_AttitudeEndpoints *self, void *data);
            static int t_AttitudeEndpoints_set__frameA(t_AttitudeEndpoints *self, PyObject *arg, void *data);
            static PyObject *t_AttitudeEndpoints_get__frameB(t_AttitudeEndpoints *self, void *data);
            static int t_AttitudeEndpoints_set__frameB(t_AttitudeEndpoints *self, PyObject *arg, void *data);
            static PyObject *t_AttitudeEndpoints_get__spacecraftBodyFrame(t_AttitudeEndpoints *self, void *data);
            static PyGetSetDef t_AttitudeEndpoints__fields_[] = {
              DECLARE_GETSET_FIELD(t_AttitudeEndpoints, a2b),
              DECLARE_GET_FIELD(t_AttitudeEndpoints, external2SpacecraftBody),
              DECLARE_GET_FIELD(t_AttitudeEndpoints, externalFrame),
              DECLARE_GETSET_FIELD(t_AttitudeEndpoints, frameA),
              DECLARE_GETSET_FIELD(t_AttitudeEndpoints, frameB),
              DECLARE_GET_FIELD(t_AttitudeEndpoints, spacecraftBodyFrame),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AttitudeEndpoints__methods_[] = {
              DECLARE_METHOD(t_AttitudeEndpoints, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeEndpoints, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AttitudeEndpoints, build, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, checkExternalFrame, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, checkMandatoryEntriesExceptExternalFrame, METH_VARARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, getExternalFrame, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, getFrameA, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, getFrameB, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, getSpacecraftBodyFrame, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, isA2b, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, isCompatibleWith, METH_O),
              DECLARE_METHOD(t_AttitudeEndpoints, isExternal2SpacecraftBody, METH_NOARGS),
              DECLARE_METHOD(t_AttitudeEndpoints, setA2b, METH_O),
              DECLARE_METHOD(t_AttitudeEndpoints, setFrameA, METH_O),
              DECLARE_METHOD(t_AttitudeEndpoints, setFrameB, METH_O),
              DECLARE_METHOD(t_AttitudeEndpoints, toString, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AttitudeEndpoints)[] = {
              { Py_tp_methods, t_AttitudeEndpoints__methods_ },
              { Py_tp_init, (void *) t_AttitudeEndpoints_init_ },
              { Py_tp_getset, t_AttitudeEndpoints__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AttitudeEndpoints)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AttitudeEndpoints, t_AttitudeEndpoints, AttitudeEndpoints);

            void t_AttitudeEndpoints::install(PyObject *module)
            {
              installType(&PY_TYPE(AttitudeEndpoints), &PY_TYPE_DEF(AttitudeEndpoints), module, "AttitudeEndpoints", 0);
            }

            void t_AttitudeEndpoints::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "class_", make_descriptor(AttitudeEndpoints::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "wrapfn_", make_descriptor(t_AttitudeEndpoints::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "boxfn_", make_descriptor(boxObject));
              env->getClass(AttitudeEndpoints::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "A2B", make_descriptor(j2p(*AttitudeEndpoints::A2B)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeEndpoints), "B2A", make_descriptor(j2p(*AttitudeEndpoints::B2A)));
            }

            static PyObject *t_AttitudeEndpoints_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AttitudeEndpoints::initializeClass, 1)))
                return NULL;
              return t_AttitudeEndpoints::wrap_Object(AttitudeEndpoints(((t_AttitudeEndpoints *) arg)->object.this$));
            }
            static PyObject *t_AttitudeEndpoints_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AttitudeEndpoints::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_AttitudeEndpoints_init_(t_AttitudeEndpoints *self, PyObject *args, PyObject *kwds)
            {
              AttitudeEndpoints object((jobject) NULL);

              INT_CALL(object = AttitudeEndpoints());
              self->object = object;

              return 0;
            }

            static PyObject *t_AttitudeEndpoints_build(t_AttitudeEndpoints *self, PyObject *args)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 3:
                {
                  ::org::orekit::frames::Frame a0((jobject) NULL);
                  ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
                  ::org::orekit::utils::TimeStampedAngularCoordinates a2((jobject) NULL);
                  ::org::orekit::attitudes::Attitude result((jobject) NULL);

                  if (!parseArgs(args, "kkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0, &a1, &a2))
                  {
                    OBJ_CALL(result = self->object.build(a0, a1, a2));
                    return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
                  }
                }
                {
                  ::org::orekit::frames::Frame a0((jobject) NULL);
                  ::org::orekit::utils::FieldPVCoordinatesProvider a1((jobject) NULL);
                  PyTypeObject **p1;
                  ::org::orekit::utils::TimeStampedFieldAngularCoordinates a2((jobject) NULL);
                  PyTypeObject **p2;
                  ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

                  if (!parseArgs(args, "kKK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::utils::TimeStampedFieldAngularCoordinates::initializeClass, &a0, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a2, &p2, ::org::orekit::utils::t_TimeStampedFieldAngularCoordinates::parameters_))
                  {
                    OBJ_CALL(result = self->object.build(a0, a1, a2));
                    return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
                  }
                }
              }

              PyErr_SetArgsError((PyObject *) self, "build", args);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_checkExternalFrame(t_AttitudeEndpoints *self, PyObject *args)
            {
              ::java::lang::Enum a0((jobject) NULL);
              PyTypeObject **p0;
              ::java::lang::Enum a1((jobject) NULL);
              PyTypeObject **p1;

              if (!parseArgs(args, "KK", ::java::lang::Enum::initializeClass, ::java::lang::Enum::initializeClass, &a0, &p0, ::java::lang::t_Enum::parameters_, &a1, &p1, ::java::lang::t_Enum::parameters_))
              {
                OBJ_CALL(self->object.checkExternalFrame(a0, a1));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "checkExternalFrame", args);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_checkMandatoryEntriesExceptExternalFrame(t_AttitudeEndpoints *self, PyObject *args)
            {
              jdouble a0;
              ::java::lang::Enum a1((jobject) NULL);
              PyTypeObject **p1;
              ::java::lang::Enum a2((jobject) NULL);
              PyTypeObject **p2;
              ::java::lang::Enum a3((jobject) NULL);
              PyTypeObject **p3;

              if (!parseArgs(args, "DKKK", ::java::lang::Enum::initializeClass, ::java::lang::Enum::initializeClass, ::java::lang::Enum::initializeClass, &a0, &a1, &p1, ::java::lang::t_Enum::parameters_, &a2, &p2, ::java::lang::t_Enum::parameters_, &a3, &p3, ::java::lang::t_Enum::parameters_))
              {
                OBJ_CALL(self->object.checkMandatoryEntriesExceptExternalFrame(a0, a1, a2, a3));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "checkMandatoryEntriesExceptExternalFrame", args);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_getExternalFrame(t_AttitudeEndpoints *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getExternalFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_AttitudeEndpoints_getFrameA(t_AttitudeEndpoints *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrameA());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_AttitudeEndpoints_getFrameB(t_AttitudeEndpoints *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getFrameB());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_AttitudeEndpoints_getSpacecraftBodyFrame(t_AttitudeEndpoints *self)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade result((jobject) NULL);
              OBJ_CALL(result = self->object.getSpacecraftBodyFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(result);
            }

            static PyObject *t_AttitudeEndpoints_isA2b(t_AttitudeEndpoints *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isA2b());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AttitudeEndpoints_isCompatibleWith(t_AttitudeEndpoints *self, PyObject *arg)
            {
              AttitudeEndpoints a0((jobject) NULL);
              jboolean result;

              if (!parseArg(arg, "k", AttitudeEndpoints::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.isCompatibleWith(a0));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "isCompatibleWith", arg);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_isExternal2SpacecraftBody(t_AttitudeEndpoints *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isExternal2SpacecraftBody());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AttitudeEndpoints_setA2b(t_AttitudeEndpoints *self, PyObject *arg)
            {
              jboolean a0;

              if (!parseArg(arg, "Z", &a0))
              {
                OBJ_CALL(self->object.setA2b(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setA2b", arg);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_setFrameA(t_AttitudeEndpoints *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setFrameA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrameA", arg);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_setFrameB(t_AttitudeEndpoints *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setFrameB(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFrameB", arg);
              return NULL;
            }

            static PyObject *t_AttitudeEndpoints_toString(t_AttitudeEndpoints *self, PyObject *args)
            {
              ::java::lang::String result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.toString());
                return j2p(result);
              }

              return callSuper(PY_TYPE(AttitudeEndpoints), (PyObject *) self, "toString", args, 2);
            }

            static PyObject *t_AttitudeEndpoints_get__a2b(t_AttitudeEndpoints *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isA2b());
              Py_RETURN_BOOL(value);
            }
            static int t_AttitudeEndpoints_set__a2b(t_AttitudeEndpoints *self, PyObject *arg, void *data)
            {
              {
                jboolean value;
                if (!parseArg(arg, "Z", &value))
                {
                  INT_CALL(self->object.setA2b(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "a2b", arg);
              return -1;
            }

            static PyObject *t_AttitudeEndpoints_get__external2SpacecraftBody(t_AttitudeEndpoints *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isExternal2SpacecraftBody());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_AttitudeEndpoints_get__externalFrame(t_AttitudeEndpoints *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getExternalFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }

            static PyObject *t_AttitudeEndpoints_get__frameA(t_AttitudeEndpoints *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrameA());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_AttitudeEndpoints_set__frameA(t_AttitudeEndpoints *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setFrameA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frameA", arg);
              return -1;
            }

            static PyObject *t_AttitudeEndpoints_get__frameB(t_AttitudeEndpoints *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getFrameB());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
            static int t_AttitudeEndpoints_set__frameB(t_AttitudeEndpoints *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::definitions::FrameFacade::initializeClass, &value))
                {
                  INT_CALL(self->object.setFrameB(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "frameB", arg);
              return -1;
            }

            static PyObject *t_AttitudeEndpoints_get__spacecraftBodyFrame(t_AttitudeEndpoints *self, void *data)
            {
              ::org::orekit::files::ccsds::definitions::FrameFacade value((jobject) NULL);
              OBJ_CALL(value = self->object.getSpacecraftBodyFrame());
              return ::org::orekit::files::ccsds::definitions::t_FrameFacade::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmElements.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmElements.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmElements::class$ = NULL;
              jmethodID *AcmElements::mids$ = NULL;
              bool AcmElements::live$ = false;
              AcmElements *AcmElements::AD = NULL;
              AcmElements *AcmElements::ATT = NULL;
              AcmElements *AcmElements::COV = NULL;
              AcmElements *AcmElements::MAN = NULL;
              AcmElements *AcmElements::PHYS = NULL;
              AcmElements *AcmElements::USER = NULL;

              jclass AcmElements::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmElements");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_valueOf_be723dae396970e4] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;");
                  mids$[mid_values_a584602895b609b4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AD = new AcmElements(env->getStaticObjectField(cls, "AD", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  ATT = new AcmElements(env->getStaticObjectField(cls, "ATT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  COV = new AcmElements(env->getStaticObjectField(cls, "COV", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  MAN = new AcmElements(env->getStaticObjectField(cls, "MAN", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  PHYS = new AcmElements(env->getStaticObjectField(cls, "PHYS", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  USER = new AcmElements(env->getStaticObjectField(cls, "USER", "Lorg/orekit/files/ccsds/ndm/adm/acm/AcmElements;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmElements AcmElements::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AcmElements(env->callStaticObjectMethod(cls, mids$[mid_valueOf_be723dae396970e4], a0.this$));
              }

              JArray< AcmElements > AcmElements::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AcmElements >(env->callStaticObjectMethod(cls, mids$[mid_values_a584602895b609b4]));
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
              static PyObject *t_AcmElements_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmElements_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmElements_of_(t_AcmElements *self, PyObject *args);
              static PyObject *t_AcmElements_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AcmElements_values(PyTypeObject *type);
              static PyObject *t_AcmElements_get__parameters_(t_AcmElements *self, void *data);
              static PyGetSetDef t_AcmElements__fields_[] = {
                DECLARE_GET_FIELD(t_AcmElements, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmElements__methods_[] = {
                DECLARE_METHOD(t_AcmElements, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmElements, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmElements, of_, METH_VARARGS),
                DECLARE_METHOD(t_AcmElements, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AcmElements, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmElements)[] = {
                { Py_tp_methods, t_AcmElements__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AcmElements__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmElements)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AcmElements, t_AcmElements, AcmElements);
              PyObject *t_AcmElements::wrap_Object(const AcmElements& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmElements::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmElements *self = (t_AcmElements *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AcmElements::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AcmElements::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AcmElements *self = (t_AcmElements *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AcmElements::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmElements), &PY_TYPE_DEF(AcmElements), module, "AcmElements", 0);
              }

              void t_AcmElements::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "class_", make_descriptor(AcmElements::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "wrapfn_", make_descriptor(t_AcmElements::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "boxfn_", make_descriptor(boxObject));
                env->getClass(AcmElements::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "AD", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::AD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "ATT", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::ATT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "COV", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::COV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "MAN", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::MAN)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "PHYS", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::PHYS)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmElements), "USER", make_descriptor(t_AcmElements::wrap_Object(*AcmElements::USER)));
              }

              static PyObject *t_AcmElements_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmElements::initializeClass, 1)))
                  return NULL;
                return t_AcmElements::wrap_Object(AcmElements(((t_AcmElements *) arg)->object.this$));
              }
              static PyObject *t_AcmElements_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmElements::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AcmElements_of_(t_AcmElements *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AcmElements_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AcmElements result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmElements::valueOf(a0));
                  return t_AcmElements::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AcmElements_values(PyTypeObject *type)
              {
                JArray< AcmElements > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AcmElements::values());
                return JArray<jobject>(result.this$).wrap(t_AcmElements::wrap_jobject);
              }
              static PyObject *t_AcmElements_get__parameters_(t_AcmElements *self, void *data)
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
#include "org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaFieldIntegrator.h"
#include "org/hipparchus/ode/nonstiff/FieldButcherArrayProvider.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/FieldODEState.h"
#include "org/hipparchus/ode/FieldExpandableODE.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *EmbeddedRungeKuttaFieldIntegrator::class$ = NULL;
        jmethodID *EmbeddedRungeKuttaFieldIntegrator::mids$ = NULL;
        bool EmbeddedRungeKuttaFieldIntegrator::live$ = false;

        jclass EmbeddedRungeKuttaFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/EmbeddedRungeKuttaFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getMaxGrowth_eba8e72a22c984ac] = env->getMethodID(cls, "getMaxGrowth", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getMinReduction_eba8e72a22c984ac] = env->getMethodID(cls, "getMinReduction", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getSafety_eba8e72a22c984ac] = env->getMethodID(cls, "getSafety", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_integrate_d8a6319aba9a7b17] = env->getMethodID(cls, "integrate", "(Lorg/hipparchus/ode/FieldExpandableODE;Lorg/hipparchus/ode/FieldODEState;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");
            mids$[mid_setMaxGrowth_072c8635f2164db9] = env->getMethodID(cls, "setMaxGrowth", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setMinReduction_072c8635f2164db9] = env->getMethodID(cls, "setMinReduction", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_setSafety_072c8635f2164db9] = env->getMethodID(cls, "setSafety", "(Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_fraction_d0525157bc3abb83] = env->getMethodID(cls, "fraction", "(II)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_fraction_50936f84b69df8dc] = env->getMethodID(cls, "fraction", "(DD)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_21baab755acbe636] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/RungeKuttaFieldStateInterpolator;");
            mids$[mid_estimateError_f7f77a3e7e765297] = env->getMethodID(cls, "estimateError", "([[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement EmbeddedRungeKuttaFieldIntegrator::getMaxGrowth() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMaxGrowth_eba8e72a22c984ac]));
        }

        ::org::hipparchus::CalculusFieldElement EmbeddedRungeKuttaFieldIntegrator::getMinReduction() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMinReduction_eba8e72a22c984ac]));
        }

        jint EmbeddedRungeKuttaFieldIntegrator::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_570ce0828f81a2c1]);
        }

        ::org::hipparchus::CalculusFieldElement EmbeddedRungeKuttaFieldIntegrator::getSafety() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSafety_eba8e72a22c984ac]));
        }

        ::org::hipparchus::ode::FieldODEStateAndDerivative EmbeddedRungeKuttaFieldIntegrator::integrate(const ::org::hipparchus::ode::FieldExpandableODE & a0, const ::org::hipparchus::ode::FieldODEState & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_integrate_d8a6319aba9a7b17], a0.this$, a1.this$, a2.this$));
        }

        void EmbeddedRungeKuttaFieldIntegrator::setMaxGrowth(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMaxGrowth_072c8635f2164db9], a0.this$);
        }

        void EmbeddedRungeKuttaFieldIntegrator::setMinReduction(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMinReduction_072c8635f2164db9], a0.this$);
        }

        void EmbeddedRungeKuttaFieldIntegrator::setSafety(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSafety_072c8635f2164db9], a0.this$);
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
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_of_(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getMaxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getMinReduction(t_EmbeddedRungeKuttaFieldIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getOrder(t_EmbeddedRungeKuttaFieldIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getSafety(t_EmbeddedRungeKuttaFieldIntegrator *self);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_integrate(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *args);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setMaxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setMinReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setSafety(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__maxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__maxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__minReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__minReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__order(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__safety(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__safety(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data);
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__parameters_(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data);
        static PyGetSetDef t_EmbeddedRungeKuttaFieldIntegrator__fields_[] = {
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, maxGrowth),
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, minReduction),
          DECLARE_GET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, order),
          DECLARE_GETSET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, safety),
          DECLARE_GET_FIELD(t_EmbeddedRungeKuttaFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_EmbeddedRungeKuttaFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, getMaxGrowth, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, getMinReduction, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, getOrder, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, getSafety, METH_NOARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, integrate, METH_VARARGS),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, setMaxGrowth, METH_O),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, setMinReduction, METH_O),
          DECLARE_METHOD(t_EmbeddedRungeKuttaFieldIntegrator, setSafety, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(EmbeddedRungeKuttaFieldIntegrator)[] = {
          { Py_tp_methods, t_EmbeddedRungeKuttaFieldIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_EmbeddedRungeKuttaFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(EmbeddedRungeKuttaFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::AdaptiveStepsizeFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(EmbeddedRungeKuttaFieldIntegrator, t_EmbeddedRungeKuttaFieldIntegrator, EmbeddedRungeKuttaFieldIntegrator);
        PyObject *t_EmbeddedRungeKuttaFieldIntegrator::wrap_Object(const EmbeddedRungeKuttaFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EmbeddedRungeKuttaFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EmbeddedRungeKuttaFieldIntegrator *self = (t_EmbeddedRungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_EmbeddedRungeKuttaFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_EmbeddedRungeKuttaFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_EmbeddedRungeKuttaFieldIntegrator *self = (t_EmbeddedRungeKuttaFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_EmbeddedRungeKuttaFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), &PY_TYPE_DEF(EmbeddedRungeKuttaFieldIntegrator), module, "EmbeddedRungeKuttaFieldIntegrator", 0);
        }

        void t_EmbeddedRungeKuttaFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), "class_", make_descriptor(EmbeddedRungeKuttaFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), "wrapfn_", make_descriptor(t_EmbeddedRungeKuttaFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, EmbeddedRungeKuttaFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_EmbeddedRungeKuttaFieldIntegrator::wrap_Object(EmbeddedRungeKuttaFieldIntegrator(((t_EmbeddedRungeKuttaFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, EmbeddedRungeKuttaFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_of_(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getMaxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxGrowth());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getMinReduction(t_EmbeddedRungeKuttaFieldIntegrator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinReduction());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getOrder(t_EmbeddedRungeKuttaFieldIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getOrder());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_getSafety(t_EmbeddedRungeKuttaFieldIntegrator *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getSafety());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_integrate(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *args)
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

          return callSuper(PY_TYPE(EmbeddedRungeKuttaFieldIntegrator), (PyObject *) self, "integrate", args, 2);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setMaxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setMaxGrowth(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMaxGrowth", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setMinReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setMinReduction(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMinReduction", arg);
          return NULL;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_setSafety(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(self->object.setSafety(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSafety", arg);
          return NULL;
        }
        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__parameters_(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__maxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxGrowth());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__maxGrowth(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setMaxGrowth(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "maxGrowth", arg);
          return -1;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__minReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinReduction());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__minReduction(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setMinReduction(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "minReduction", arg);
          return -1;
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__order(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_EmbeddedRungeKuttaFieldIntegrator_get__safety(t_EmbeddedRungeKuttaFieldIntegrator *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getSafety());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
        static int t_EmbeddedRungeKuttaFieldIntegrator_set__safety(t_EmbeddedRungeKuttaFieldIntegrator *self, PyObject *arg, void *data)
        {
          {
            ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
            {
              INT_CALL(self->object.setSafety(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "safety", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/errors/FrameAncestorException.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace errors {

      ::java::lang::Class *FrameAncestorException::class$ = NULL;
      jmethodID *FrameAncestorException::mids$ = NULL;
      bool FrameAncestorException::live$ = false;

      jclass FrameAncestorException::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/errors/FrameAncestorException");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d0cf82c16a7e8751] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/exception/Localizable;[Ljava/lang/Object;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FrameAncestorException::FrameAncestorException(const ::org::hipparchus::exception::Localizable & a0, const JArray< ::java::lang::Object > & a1) : ::org::orekit::errors::OrekitException(env->newObject(initializeClass, &mids$, mid_init$_d0cf82c16a7e8751, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace errors {
      static PyObject *t_FrameAncestorException_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FrameAncestorException_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FrameAncestorException_init_(t_FrameAncestorException *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_FrameAncestorException__methods_[] = {
        DECLARE_METHOD(t_FrameAncestorException, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAncestorException, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FrameAncestorException)[] = {
        { Py_tp_methods, t_FrameAncestorException__methods_ },
        { Py_tp_init, (void *) t_FrameAncestorException_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FrameAncestorException)[] = {
        &PY_TYPE_DEF(::org::orekit::errors::OrekitException),
        NULL
      };

      DEFINE_TYPE(FrameAncestorException, t_FrameAncestorException, FrameAncestorException);

      void t_FrameAncestorException::install(PyObject *module)
      {
        installType(&PY_TYPE(FrameAncestorException), &PY_TYPE_DEF(FrameAncestorException), module, "FrameAncestorException", 0);
      }

      void t_FrameAncestorException::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAncestorException), "class_", make_descriptor(FrameAncestorException::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAncestorException), "wrapfn_", make_descriptor(t_FrameAncestorException::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAncestorException), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FrameAncestorException_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FrameAncestorException::initializeClass, 1)))
          return NULL;
        return t_FrameAncestorException::wrap_Object(FrameAncestorException(((t_FrameAncestorException *) arg)->object.this$));
      }
      static PyObject *t_FrameAncestorException_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FrameAncestorException::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FrameAncestorException_init_(t_FrameAncestorException *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::exception::Localizable a0((jobject) NULL);
        JArray< ::java::lang::Object > a1((jobject) NULL);
        FrameAncestorException object((jobject) NULL);

        if (!parseArgs(args, "k[o", ::org::hipparchus::exception::Localizable::initializeClass, &a0, &a1))
        {
          INT_CALL(object = FrameAncestorException(a0, a1));
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
#include "org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanModel.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedProcess.h"
#include "org/orekit/propagation/semianalytical/dsst/DSSTPropagator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/orekit/estimation/sequential/SemiAnalyticalProcess.h"
#include "org/hipparchus/filtering/kalman/unscented/UnscentedEvolution.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/estimation/sequential/KalmanEstimation.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurement.h"
#include "java/util/List.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/orekit/estimation/sequential/MeasurementDecorator.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *SemiAnalyticalUnscentedKalmanModel::class$ = NULL;
        jmethodID *SemiAnalyticalUnscentedKalmanModel::mids$ = NULL;
        bool SemiAnalyticalUnscentedKalmanModel::live$ = false;

        jclass SemiAnalyticalUnscentedKalmanModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/SemiAnalyticalUnscentedKalmanModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finalizeEstimation_da0919b7ae9816a3] = env->getMethodID(cls, "finalizeEstimation", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;Lorg/hipparchus/filtering/kalman/ProcessEstimate;)V");
            mids$[mid_finalizeOperationsObservationGrid_0fa09c18fee449d5] = env->getMethodID(cls, "finalizeOperationsObservationGrid", "()V");
            mids$[mid_getCorrectedMeasurement_5a90ceef60f482f1] = env->getMethodID(cls, "getCorrectedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getCorrectedSpacecraftStates_fa9cea0faefb9a31] = env->getMethodID(cls, "getCorrectedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getCurrentDate_85703d13e302437e] = env->getMethodID(cls, "getCurrentDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getCurrentMeasurementNumber_570ce0828f81a2c1] = env->getMethodID(cls, "getCurrentMeasurementNumber", "()I");
            mids$[mid_getEstimate_c93ddc26f3b3eef4] = env->getMethodID(cls, "getEstimate", "()Lorg/hipparchus/filtering/kalman/ProcessEstimate;");
            mids$[mid_getEstimatedMeasurementsParameters_bd51074bfd9d41da] = env->getMethodID(cls, "getEstimatedMeasurementsParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedOrbitalParameters_bd51074bfd9d41da] = env->getMethodID(cls, "getEstimatedOrbitalParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagationParameters_bd51074bfd9d41da] = env->getMethodID(cls, "getEstimatedPropagationParameters", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getEstimatedPropagator_58b33e4b5f875168] = env->getMethodID(cls, "getEstimatedPropagator", "()Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_getEvolution_10ef30e3c9abcb5f] = env->getMethodID(cls, "getEvolution", "(D[Lorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)Lorg/hipparchus/filtering/kalman/unscented/UnscentedEvolution;");
            mids$[mid_getInnovation_c7c45dcf7ef024eb] = env->getMethodID(cls, "getInnovation", "(Lorg/orekit/estimation/sequential/MeasurementDecorator;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getNumberSelectedMeasurementDrivers_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberSelectedMeasurementDrivers", "()I");
            mids$[mid_getNumberSelectedOrbitalDrivers_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberSelectedOrbitalDrivers", "()I");
            mids$[mid_getNumberSelectedPropagationDrivers_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberSelectedPropagationDrivers", "()I");
            mids$[mid_getObserver_fc89aee73878aefd] = env->getMethodID(cls, "getObserver", "()Lorg/orekit/estimation/sequential/KalmanObserver;");
            mids$[mid_getPhysicalEstimatedCovarianceMatrix_688b496048ff947b] = env->getMethodID(cls, "getPhysicalEstimatedCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalEstimatedState_aab4fbf77867daa8] = env->getMethodID(cls, "getPhysicalEstimatedState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPhysicalInnovationCovarianceMatrix_688b496048ff947b] = env->getMethodID(cls, "getPhysicalInnovationCovarianceMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalKalmanGain_688b496048ff947b] = env->getMethodID(cls, "getPhysicalKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalMeasurementJacobian_688b496048ff947b] = env->getMethodID(cls, "getPhysicalMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPhysicalStateTransitionMatrix_688b496048ff947b] = env->getMethodID(cls, "getPhysicalStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPredictedMeasurement_5a90ceef60f482f1] = env->getMethodID(cls, "getPredictedMeasurement", "()Lorg/orekit/estimation/measurements/EstimatedMeasurement;");
            mids$[mid_getPredictedMeasurements_bfe87416cc1883be] = env->getMethodID(cls, "getPredictedMeasurements", "([Lorg/hipparchus/linear/RealVector;Lorg/orekit/estimation/sequential/MeasurementDecorator;)[Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getPredictedSpacecraftStates_fa9cea0faefb9a31] = env->getMethodID(cls, "getPredictedSpacecraftStates", "()[Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_initializeShortPeriodicTerms_0ee5c56004643a2e] = env->getMethodID(cls, "initializeShortPeriodicTerms", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_processMeasurements_51b919ac069d1142] = env->getMethodID(cls, "processMeasurements", "(Ljava/util/List;Lorg/hipparchus/filtering/kalman/unscented/UnscentedKalmanFilter;)Lorg/orekit/propagation/semianalytical/dsst/DSSTPropagator;");
            mids$[mid_setObserver_3b3c487cb3322691] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_updateNominalSpacecraftState_0ee5c56004643a2e] = env->getMethodID(cls, "updateNominalSpacecraftState", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_updateShortPeriods_0ee5c56004643a2e] = env->getMethodID(cls, "updateShortPeriods", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void SemiAnalyticalUnscentedKalmanModel::finalizeEstimation(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0, const ::org::hipparchus::filtering::kalman::ProcessEstimate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeEstimation_da0919b7ae9816a3], a0.this$, a1.this$);
        }

        void SemiAnalyticalUnscentedKalmanModel::finalizeOperationsObservationGrid() const
        {
          env->callVoidMethod(this$, mids$[mid_finalizeOperationsObservationGrid_0fa09c18fee449d5]);
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement SemiAnalyticalUnscentedKalmanModel::getCorrectedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getCorrectedMeasurement_5a90ceef60f482f1]));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > SemiAnalyticalUnscentedKalmanModel::getCorrectedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getCorrectedSpacecraftStates_fa9cea0faefb9a31]));
        }

        ::org::orekit::time::AbsoluteDate SemiAnalyticalUnscentedKalmanModel::getCurrentDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCurrentDate_85703d13e302437e]));
        }

        jint SemiAnalyticalUnscentedKalmanModel::getCurrentMeasurementNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getCurrentMeasurementNumber_570ce0828f81a2c1]);
        }

        ::org::hipparchus::filtering::kalman::ProcessEstimate SemiAnalyticalUnscentedKalmanModel::getEstimate() const
        {
          return ::org::hipparchus::filtering::kalman::ProcessEstimate(env->callObjectMethod(this$, mids$[mid_getEstimate_c93ddc26f3b3eef4]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalUnscentedKalmanModel::getEstimatedMeasurementsParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedMeasurementsParameters_bd51074bfd9d41da]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalUnscentedKalmanModel::getEstimatedOrbitalParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedOrbitalParameters_bd51074bfd9d41da]));
        }

        ::org::orekit::utils::ParameterDriversList SemiAnalyticalUnscentedKalmanModel::getEstimatedPropagationParameters() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagationParameters_bd51074bfd9d41da]));
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalUnscentedKalmanModel::getEstimatedPropagator() const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_getEstimatedPropagator_58b33e4b5f875168]));
        }

        ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution SemiAnalyticalUnscentedKalmanModel::getEvolution(jdouble a0, const JArray< ::org::hipparchus::linear::RealVector > & a1, const ::org::orekit::estimation::sequential::MeasurementDecorator & a2) const
        {
          return ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution(env->callObjectMethod(this$, mids$[mid_getEvolution_10ef30e3c9abcb5f], a0, a1.this$, a2.this$));
        }

        ::org::hipparchus::linear::RealVector SemiAnalyticalUnscentedKalmanModel::getInnovation(const ::org::orekit::estimation::sequential::MeasurementDecorator & a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealVector & a2, const ::org::hipparchus::linear::RealMatrix & a3) const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getInnovation_c7c45dcf7ef024eb], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        jint SemiAnalyticalUnscentedKalmanModel::getNumberSelectedMeasurementDrivers() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberSelectedMeasurementDrivers_570ce0828f81a2c1]);
        }

        jint SemiAnalyticalUnscentedKalmanModel::getNumberSelectedOrbitalDrivers() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberSelectedOrbitalDrivers_570ce0828f81a2c1]);
        }

        jint SemiAnalyticalUnscentedKalmanModel::getNumberSelectedPropagationDrivers() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberSelectedPropagationDrivers_570ce0828f81a2c1]);
        }

        ::org::orekit::estimation::sequential::KalmanObserver SemiAnalyticalUnscentedKalmanModel::getObserver() const
        {
          return ::org::orekit::estimation::sequential::KalmanObserver(env->callObjectMethod(this$, mids$[mid_getObserver_fc89aee73878aefd]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalEstimatedCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedCovarianceMatrix_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealVector SemiAnalyticalUnscentedKalmanModel::getPhysicalEstimatedState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getPhysicalEstimatedState_aab4fbf77867daa8]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalInnovationCovarianceMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalInnovationCovarianceMatrix_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalKalmanGain_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalMeasurementJacobian_688b496048ff947b]));
        }

        ::org::hipparchus::linear::RealMatrix SemiAnalyticalUnscentedKalmanModel::getPhysicalStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPhysicalStateTransitionMatrix_688b496048ff947b]));
        }

        ::org::orekit::estimation::measurements::EstimatedMeasurement SemiAnalyticalUnscentedKalmanModel::getPredictedMeasurement() const
        {
          return ::org::orekit::estimation::measurements::EstimatedMeasurement(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurement_5a90ceef60f482f1]));
        }

        JArray< ::org::hipparchus::linear::RealVector > SemiAnalyticalUnscentedKalmanModel::getPredictedMeasurements(const JArray< ::org::hipparchus::linear::RealVector > & a0, const ::org::orekit::estimation::sequential::MeasurementDecorator & a1) const
        {
          return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_getPredictedMeasurements_bfe87416cc1883be], a0.this$, a1.this$));
        }

        JArray< ::org::orekit::propagation::SpacecraftState > SemiAnalyticalUnscentedKalmanModel::getPredictedSpacecraftStates() const
        {
          return JArray< ::org::orekit::propagation::SpacecraftState >(env->callObjectMethod(this$, mids$[mid_getPredictedSpacecraftStates_fa9cea0faefb9a31]));
        }

        void SemiAnalyticalUnscentedKalmanModel::initializeShortPeriodicTerms(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_initializeShortPeriodicTerms_0ee5c56004643a2e], a0.this$);
        }

        ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator SemiAnalyticalUnscentedKalmanModel::processMeasurements(const ::java::util::List & a0, const ::org::hipparchus::filtering::kalman::unscented::UnscentedKalmanFilter & a1) const
        {
          return ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator(env->callObjectMethod(this$, mids$[mid_processMeasurements_51b919ac069d1142], a0.this$, a1.this$));
        }

        void SemiAnalyticalUnscentedKalmanModel::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_3b3c487cb3322691], a0.this$);
        }

        void SemiAnalyticalUnscentedKalmanModel::updateNominalSpacecraftState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateNominalSpacecraftState_0ee5c56004643a2e], a0.this$);
        }

        void SemiAnalyticalUnscentedKalmanModel::updateShortPeriods(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_updateShortPeriods_0ee5c56004643a2e], a0.this$);
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
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_finalizeEstimation(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_finalizeOperationsObservationGrid(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCorrectedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCorrectedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCurrentDate(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCurrentMeasurementNumber(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimate(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedOrbitalParameters(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedPropagationParameters(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedPropagator(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEvolution(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getInnovation(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedMeasurementDrivers(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedOrbitalDrivers(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedPropagationDrivers(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getObserver(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalEstimatedState(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalInnovationCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalKalmanGain(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalMeasurementJacobian(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalStateTransitionMatrix(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedMeasurements(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_initializeShortPeriodicTerms(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_processMeasurements(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_setObserver(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_updateNominalSpacecraftState(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_updateShortPeriods(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__correctedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__correctedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__currentDate(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__currentMeasurementNumber(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimate(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedOrbitalParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedPropagationParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedPropagator(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedMeasurementDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedOrbitalDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedPropagationDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__observer(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static int t_SemiAnalyticalUnscentedKalmanModel_set__observer(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalEstimatedCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalEstimatedState(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalInnovationCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalKalmanGain(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalMeasurementJacobian(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalStateTransitionMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__predictedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__predictedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self, void *data);
        static PyGetSetDef t_SemiAnalyticalUnscentedKalmanModel__fields_[] = {
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, correctedMeasurement),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, correctedSpacecraftStates),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, currentDate),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, currentMeasurementNumber),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimate),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimatedMeasurementsParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimatedOrbitalParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimatedPropagationParameters),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, estimatedPropagator),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, numberSelectedMeasurementDrivers),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, numberSelectedOrbitalDrivers),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, numberSelectedPropagationDrivers),
          DECLARE_GETSET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, observer),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalEstimatedCovarianceMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalEstimatedState),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalInnovationCovarianceMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalKalmanGain),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalMeasurementJacobian),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, physicalStateTransitionMatrix),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, predictedMeasurement),
          DECLARE_GET_FIELD(t_SemiAnalyticalUnscentedKalmanModel, predictedSpacecraftStates),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SemiAnalyticalUnscentedKalmanModel__methods_[] = {
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, finalizeEstimation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, finalizeOperationsObservationGrid, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getCorrectedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getCorrectedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getCurrentDate, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getCurrentMeasurementNumber, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimate, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimatedMeasurementsParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimatedOrbitalParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimatedPropagationParameters, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEstimatedPropagator, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getEvolution, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getInnovation, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getNumberSelectedMeasurementDrivers, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getNumberSelectedOrbitalDrivers, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getNumberSelectedPropagationDrivers, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getObserver, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalEstimatedCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalEstimatedState, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalInnovationCovarianceMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPhysicalStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPredictedMeasurement, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPredictedMeasurements, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, getPredictedSpacecraftStates, METH_NOARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, initializeShortPeriodicTerms, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, processMeasurements, METH_VARARGS),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, setObserver, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, updateNominalSpacecraftState, METH_O),
          DECLARE_METHOD(t_SemiAnalyticalUnscentedKalmanModel, updateShortPeriods, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SemiAnalyticalUnscentedKalmanModel)[] = {
          { Py_tp_methods, t_SemiAnalyticalUnscentedKalmanModel__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SemiAnalyticalUnscentedKalmanModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SemiAnalyticalUnscentedKalmanModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SemiAnalyticalUnscentedKalmanModel, t_SemiAnalyticalUnscentedKalmanModel, SemiAnalyticalUnscentedKalmanModel);

        void t_SemiAnalyticalUnscentedKalmanModel::install(PyObject *module)
        {
          installType(&PY_TYPE(SemiAnalyticalUnscentedKalmanModel), &PY_TYPE_DEF(SemiAnalyticalUnscentedKalmanModel), module, "SemiAnalyticalUnscentedKalmanModel", 0);
        }

        void t_SemiAnalyticalUnscentedKalmanModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanModel), "class_", make_descriptor(SemiAnalyticalUnscentedKalmanModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanModel), "wrapfn_", make_descriptor(t_SemiAnalyticalUnscentedKalmanModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SemiAnalyticalUnscentedKalmanModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SemiAnalyticalUnscentedKalmanModel::initializeClass, 1)))
            return NULL;
          return t_SemiAnalyticalUnscentedKalmanModel::wrap_Object(SemiAnalyticalUnscentedKalmanModel(((t_SemiAnalyticalUnscentedKalmanModel *) arg)->object.this$));
        }
        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SemiAnalyticalUnscentedKalmanModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_finalizeEstimation(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::ProcessEstimate a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, ::org::hipparchus::filtering::kalman::ProcessEstimate::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_, &a1))
          {
            OBJ_CALL(self->object.finalizeEstimation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finalizeEstimation", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_finalizeOperationsObservationGrid(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          OBJ_CALL(self->object.finalizeOperationsObservationGrid());
          Py_RETURN_NONE;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCorrectedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCorrectedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCurrentDate(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getCurrentMeasurementNumber(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimate(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedOrbitalParameters(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedPropagationParameters(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEstimatedPropagator(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);
          OBJ_CALL(result = self->object.getEstimatedPropagator());
          return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getEvolution(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
        {
          jdouble a0;
          JArray< ::org::hipparchus::linear::RealVector > a1((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a2((jobject) NULL);
          ::org::hipparchus::filtering::kalman::unscented::UnscentedEvolution result((jobject) NULL);

          if (!parseArgs(args, "D[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.getEvolution(a0, a1, a2));
            return ::org::hipparchus::filtering::kalman::unscented::t_UnscentedEvolution::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getEvolution", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getInnovation(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
        {
          ::org::orekit::estimation::sequential::MeasurementDecorator a0((jobject) NULL);
          ::org::hipparchus::linear::RealVector a1((jobject) NULL);
          ::org::hipparchus::linear::RealVector a2((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
          ::org::hipparchus::linear::RealVector result((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.getInnovation(a0, a1, a2, a3));
            return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getInnovation", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedMeasurementDrivers(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberSelectedMeasurementDrivers());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedOrbitalDrivers(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberSelectedOrbitalDrivers());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getNumberSelectedPropagationDrivers(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberSelectedPropagationDrivers());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getObserver(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::sequential::KalmanObserver result((jobject) NULL);
          OBJ_CALL(result = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalEstimatedCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalEstimatedState(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalInnovationCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalKalmanGain(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalMeasurementJacobian(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPhysicalStateTransitionMatrix(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(result);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedMeasurements(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
        {
          JArray< ::org::hipparchus::linear::RealVector > a0((jobject) NULL);
          ::org::orekit::estimation::sequential::MeasurementDecorator a1((jobject) NULL);
          JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

          if (!parseArgs(args, "[kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::orekit::estimation::sequential::MeasurementDecorator::initializeClass, &a0, &a1))
          {
            OBJ_CALL(result = self->object.getPredictedMeasurements(a0, a1));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "getPredictedMeasurements", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_getPredictedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > result((jobject) NULL);
          OBJ_CALL(result = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_initializeShortPeriodicTerms(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.initializeShortPeriodicTerms(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "initializeShortPeriodicTerms", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_processMeasurements(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *args)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::filtering::kalman::unscented::UnscentedKalmanFilter a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator result((jobject) NULL);

          if (!parseArgs(args, "KK", ::java::util::List::initializeClass, ::org::hipparchus::filtering::kalman::unscented::UnscentedKalmanFilter::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1, &p1, ::org::hipparchus::filtering::kalman::unscented::t_UnscentedKalmanFilter::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0, a1));
            return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", args);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_setObserver(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_updateNominalSpacecraftState(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateNominalSpacecraftState(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateNominalSpacecraftState", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_updateShortPeriods(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.updateShortPeriods(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateShortPeriods", arg);
          return NULL;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__correctedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__correctedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getCorrectedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__currentDate(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getCurrentDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__currentMeasurementNumber(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getCurrentMeasurementNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimate(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::filtering::kalman::ProcessEstimate value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimate());
          return ::org::hipparchus::filtering::kalman::t_ProcessEstimate::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedMeasurementsParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedMeasurementsParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedOrbitalParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedOrbitalParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedPropagationParameters(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagationParameters());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__estimatedPropagator(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::propagation::semianalytical::dsst::DSSTPropagator value((jobject) NULL);
          OBJ_CALL(value = self->object.getEstimatedPropagator());
          return ::org::orekit::propagation::semianalytical::dsst::t_DSSTPropagator::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedMeasurementDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberSelectedMeasurementDrivers());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedOrbitalDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberSelectedOrbitalDrivers());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__numberSelectedPropagationDrivers(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberSelectedPropagationDrivers());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__observer(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
          OBJ_CALL(value = self->object.getObserver());
          return ::org::orekit::estimation::sequential::t_KalmanObserver::wrap_Object(value);
        }
        static int t_SemiAnalyticalUnscentedKalmanModel_set__observer(t_SemiAnalyticalUnscentedKalmanModel *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalEstimatedCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalEstimatedState(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalEstimatedState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalInnovationCovarianceMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalInnovationCovarianceMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalKalmanGain(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalMeasurementJacobian(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__physicalStateTransitionMatrix(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getPhysicalStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__predictedMeasurement(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          ::org::orekit::estimation::measurements::EstimatedMeasurement value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedMeasurement());
          return ::org::orekit::estimation::measurements::t_EstimatedMeasurement::wrap_Object(value);
        }

        static PyObject *t_SemiAnalyticalUnscentedKalmanModel_get__predictedSpacecraftStates(t_SemiAnalyticalUnscentedKalmanModel *self, void *data)
        {
          JArray< ::org::orekit::propagation::SpacecraftState > value((jobject) NULL);
          OBJ_CALL(value = self->object.getPredictedSpacecraftStates());
          return JArray<jobject>(value.this$).wrap(::org::orekit::propagation::t_SpacecraftState::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/PythonAbstractPropagatorConverter.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction.h"
#include "org/hipparchus/analysis/MultivariateVectorFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *PythonAbstractPropagatorConverter::class$ = NULL;
        jmethodID *PythonAbstractPropagatorConverter::mids$ = NULL;
        bool PythonAbstractPropagatorConverter::live$ = false;

        jclass PythonAbstractPropagatorConverter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/PythonAbstractPropagatorConverter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_78073cb29f7a4fd8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/conversion/PropagatorBuilder;DI)V");
            mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getModel_9751b2e3b68b45ea] = env->getMethodID(cls, "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;");
            mids$[mid_getObjectiveFunction_18d8e6aab2238577] = env->getMethodID(cls, "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;");
            mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractPropagatorConverter::PythonAbstractPropagatorConverter(const ::org::orekit::propagation::conversion::PropagatorBuilder & a0, jdouble a1, jint a2) : ::org::orekit::propagation::conversion::AbstractPropagatorConverter(env->newObject(initializeClass, &mids$, mid_init$_78073cb29f7a4fd8, a0.this$, a1, a2)) {}

        void PythonAbstractPropagatorConverter::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
        }

        jlong PythonAbstractPropagatorConverter::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
        }

        void PythonAbstractPropagatorConverter::pythonExtension(jlong a0) const
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
        static PyObject *t_PythonAbstractPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractPropagatorConverter_init_(t_PythonAbstractPropagatorConverter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractPropagatorConverter_finalize(t_PythonAbstractPropagatorConverter *self);
        static PyObject *t_PythonAbstractPropagatorConverter_pythonExtension(t_PythonAbstractPropagatorConverter *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractPropagatorConverter_getModel0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonAbstractPropagatorConverter_getObjectiveFunction1(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractPropagatorConverter_pythonDecRef2(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractPropagatorConverter_get__self(t_PythonAbstractPropagatorConverter *self, void *data);
        static PyGetSetDef t_PythonAbstractPropagatorConverter__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractPropagatorConverter, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractPropagatorConverter__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractPropagatorConverter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractPropagatorConverter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractPropagatorConverter, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractPropagatorConverter, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractPropagatorConverter)[] = {
          { Py_tp_methods, t_PythonAbstractPropagatorConverter__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractPropagatorConverter_init_ },
          { Py_tp_getset, t_PythonAbstractPropagatorConverter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractPropagatorConverter)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorConverter),
          NULL
        };

        DEFINE_TYPE(PythonAbstractPropagatorConverter, t_PythonAbstractPropagatorConverter, PythonAbstractPropagatorConverter);

        void t_PythonAbstractPropagatorConverter::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractPropagatorConverter), &PY_TYPE_DEF(PythonAbstractPropagatorConverter), module, "PythonAbstractPropagatorConverter", 1);
        }

        void t_PythonAbstractPropagatorConverter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorConverter), "class_", make_descriptor(PythonAbstractPropagatorConverter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorConverter), "wrapfn_", make_descriptor(t_PythonAbstractPropagatorConverter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractPropagatorConverter), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractPropagatorConverter::initializeClass);
          JNINativeMethod methods[] = {
            { "getModel", "()Lorg/hipparchus/optim/nonlinear/vector/leastsquares/MultivariateJacobianFunction;", (void *) t_PythonAbstractPropagatorConverter_getModel0 },
            { "getObjectiveFunction", "()Lorg/hipparchus/analysis/MultivariateVectorFunction;", (void *) t_PythonAbstractPropagatorConverter_getObjectiveFunction1 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractPropagatorConverter_pythonDecRef2 },
          };
          env->registerNatives(cls, methods, 3);
        }

        static PyObject *t_PythonAbstractPropagatorConverter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractPropagatorConverter::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractPropagatorConverter::wrap_Object(PythonAbstractPropagatorConverter(((t_PythonAbstractPropagatorConverter *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractPropagatorConverter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractPropagatorConverter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractPropagatorConverter_init_(t_PythonAbstractPropagatorConverter *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::conversion::PropagatorBuilder a0((jobject) NULL);
          jdouble a1;
          jint a2;
          PythonAbstractPropagatorConverter object((jobject) NULL);

          if (!parseArgs(args, "kDI", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = PythonAbstractPropagatorConverter(a0, a1, a2));
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

        static PyObject *t_PythonAbstractPropagatorConverter_finalize(t_PythonAbstractPropagatorConverter *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractPropagatorConverter_pythonExtension(t_PythonAbstractPropagatorConverter *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractPropagatorConverter_getModel0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorConverter::mids$[PythonAbstractPropagatorConverter::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getModel", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::optim::nonlinear::vector::leastsquares::MultivariateJacobianFunction::initializeClass, &value))
          {
            throwTypeError("getModel", result);
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

        static jobject JNICALL t_PythonAbstractPropagatorConverter_getObjectiveFunction1(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorConverter::mids$[PythonAbstractPropagatorConverter::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::analysis::MultivariateVectorFunction value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getObjectiveFunction", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::analysis::MultivariateVectorFunction::initializeClass, &value))
          {
            throwTypeError("getObjectiveFunction", result);
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

        static void JNICALL t_PythonAbstractPropagatorConverter_pythonDecRef2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractPropagatorConverter::mids$[PythonAbstractPropagatorConverter::mid_pythonExtension_492808a339bfa35f]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractPropagatorConverter::mids$[PythonAbstractPropagatorConverter::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractPropagatorConverter_get__self(t_PythonAbstractPropagatorConverter *self, void *data)
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
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *MatrixDecomposer::class$ = NULL;
      jmethodID *MatrixDecomposer::mids$ = NULL;
      bool MatrixDecomposer::live$ = false;

      jclass MatrixDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/MatrixDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_decompose_6832546eac694082] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::DecompositionSolver MatrixDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_6832546eac694082], a0.this$));
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
      static PyObject *t_MatrixDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MatrixDecomposer_decompose(t_MatrixDecomposer *self, PyObject *arg);

      static PyMethodDef t_MatrixDecomposer__methods_[] = {
        DECLARE_METHOD(t_MatrixDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MatrixDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MatrixDecomposer)[] = {
        { Py_tp_methods, t_MatrixDecomposer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MatrixDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MatrixDecomposer, t_MatrixDecomposer, MatrixDecomposer);

      void t_MatrixDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(MatrixDecomposer), &PY_TYPE_DEF(MatrixDecomposer), module, "MatrixDecomposer", 0);
      }

      void t_MatrixDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixDecomposer), "class_", make_descriptor(MatrixDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixDecomposer), "wrapfn_", make_descriptor(t_MatrixDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MatrixDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MatrixDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MatrixDecomposer::initializeClass, 1)))
          return NULL;
        return t_MatrixDecomposer::wrap_Object(MatrixDecomposer(((t_MatrixDecomposer *) arg)->object.this$));
      }
      static PyObject *t_MatrixDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MatrixDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MatrixDecomposer_decompose(t_MatrixDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$CalibrationTargetConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$CalibrationTargetConfiguration::mids$ = NULL;
        bool CRDConfiguration$CalibrationTargetConfiguration::live$ = false;

        jclass CRDConfiguration$CalibrationTargetConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$CalibrationTargetConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_getProcessingSoftwareName_11b109bd155ca898] = env->getMethodID(cls, "getProcessingSoftwareName", "()Ljava/lang/String;");
            mids$[mid_getProcessingSoftwareVersion_11b109bd155ca898] = env->getMethodID(cls, "getProcessingSoftwareVersion", "()Ljava/lang/String;");
            mids$[mid_getPulseEnergy_dff5885c2c873297] = env->getMethodID(cls, "getPulseEnergy", "()D");
            mids$[mid_getSumOfAllConstantDelays_dff5885c2c873297] = env->getMethodID(cls, "getSumOfAllConstantDelays", "()D");
            mids$[mid_getSurveyError_dff5885c2c873297] = env->getMethodID(cls, "getSurveyError", "()D");
            mids$[mid_getSurveyedTargetDistance_dff5885c2c873297] = env->getMethodID(cls, "getSurveyedTargetDistance", "()D");
            mids$[mid_getTargetName_11b109bd155ca898] = env->getMethodID(cls, "getTargetName", "()Ljava/lang/String;");
            mids$[mid_setProcessingSoftwareName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setProcessingSoftwareName", "(Ljava/lang/String;)V");
            mids$[mid_setProcessingSoftwareVersion_d0bc48d5b00dc40c] = env->getMethodID(cls, "setProcessingSoftwareVersion", "(Ljava/lang/String;)V");
            mids$[mid_setPulseEnergy_17db3a65980d3441] = env->getMethodID(cls, "setPulseEnergy", "(D)V");
            mids$[mid_setSumOfAllConstantDelays_17db3a65980d3441] = env->getMethodID(cls, "setSumOfAllConstantDelays", "(D)V");
            mids$[mid_setSurveyError_17db3a65980d3441] = env->getMethodID(cls, "setSurveyError", "(D)V");
            mids$[mid_setSurveyedTargetDistance_17db3a65980d3441] = env->getMethodID(cls, "setSurveyedTargetDistance", "(D)V");
            mids$[mid_setTargetName_d0bc48d5b00dc40c] = env->getMethodID(cls, "setTargetName", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_11b109bd155ca898] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$CalibrationTargetConfiguration::CRDConfiguration$CalibrationTargetConfiguration() : ::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::getProcessingSoftwareName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProcessingSoftwareName_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::getProcessingSoftwareVersion() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProcessingSoftwareVersion_11b109bd155ca898]));
        }

        jdouble CRDConfiguration$CalibrationTargetConfiguration::getPulseEnergy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPulseEnergy_dff5885c2c873297]);
        }

        jdouble CRDConfiguration$CalibrationTargetConfiguration::getSumOfAllConstantDelays() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSumOfAllConstantDelays_dff5885c2c873297]);
        }

        jdouble CRDConfiguration$CalibrationTargetConfiguration::getSurveyError() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSurveyError_dff5885c2c873297]);
        }

        jdouble CRDConfiguration$CalibrationTargetConfiguration::getSurveyedTargetDistance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSurveyedTargetDistance_dff5885c2c873297]);
        }

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::getTargetName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getTargetName_11b109bd155ca898]));
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setProcessingSoftwareName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProcessingSoftwareName_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setProcessingSoftwareVersion(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setProcessingSoftwareVersion_d0bc48d5b00dc40c], a0.this$);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setPulseEnergy(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setPulseEnergy_17db3a65980d3441], a0);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setSumOfAllConstantDelays(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSumOfAllConstantDelays_17db3a65980d3441], a0);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setSurveyError(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSurveyError_17db3a65980d3441], a0);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setSurveyedTargetDistance(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setSurveyedTargetDistance_17db3a65980d3441], a0);
        }

        void CRDConfiguration$CalibrationTargetConfiguration::setTargetName(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setTargetName_d0bc48d5b00dc40c], a0.this$);
        }

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_11b109bd155ca898]));
        }

        ::java::lang::String CRDConfiguration$CalibrationTargetConfiguration::toString() const
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
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_init_(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getProcessingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getProcessingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getPulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSurveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSurveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getTargetName(t_CRDConfiguration$CalibrationTargetConfiguration *self);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setProcessingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setProcessingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setPulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSurveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSurveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setTargetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_toCrdString(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_toString(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__processingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__processingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__processingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__processingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__pulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__pulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__sumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__sumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__surveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__surveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__surveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__surveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__targetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data);
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__targetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$CalibrationTargetConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, processingSoftwareName),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, processingSoftwareVersion),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, pulseEnergy),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, sumOfAllConstantDelays),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, surveyError),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, surveyedTargetDistance),
          DECLARE_GETSET_FIELD(t_CRDConfiguration$CalibrationTargetConfiguration, targetName),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$CalibrationTargetConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getProcessingSoftwareName, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getProcessingSoftwareVersion, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getPulseEnergy, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getSumOfAllConstantDelays, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getSurveyError, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getSurveyedTargetDistance, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, getTargetName, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setProcessingSoftwareName, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setProcessingSoftwareVersion, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setPulseEnergy, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setSumOfAllConstantDelays, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setSurveyError, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setSurveyedTargetDistance, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, setTargetName, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$CalibrationTargetConfiguration, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$CalibrationTargetConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$CalibrationTargetConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$CalibrationTargetConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$CalibrationTargetConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$CalibrationTargetConfiguration)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRDConfiguration$BaseConfiguration),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$CalibrationTargetConfiguration, t_CRDConfiguration$CalibrationTargetConfiguration, CRDConfiguration$CalibrationTargetConfiguration);

        void t_CRDConfiguration$CalibrationTargetConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), &PY_TYPE_DEF(CRDConfiguration$CalibrationTargetConfiguration), module, "CRDConfiguration$CalibrationTargetConfiguration", 0);
        }

        void t_CRDConfiguration$CalibrationTargetConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), "class_", make_descriptor(CRDConfiguration$CalibrationTargetConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$CalibrationTargetConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$CalibrationTargetConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$CalibrationTargetConfiguration::wrap_Object(CRDConfiguration$CalibrationTargetConfiguration(((t_CRDConfiguration$CalibrationTargetConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$CalibrationTargetConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$CalibrationTargetConfiguration_init_(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$CalibrationTargetConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$CalibrationTargetConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getProcessingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProcessingSoftwareName());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getProcessingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getProcessingSoftwareVersion());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getPulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPulseEnergy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSumOfAllConstantDelays());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSurveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSurveyError());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getSurveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSurveyedTargetDistance());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_getTargetName(t_CRDConfiguration$CalibrationTargetConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getTargetName());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setProcessingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setProcessingSoftwareName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProcessingSoftwareName", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setProcessingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setProcessingSoftwareVersion(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setProcessingSoftwareVersion", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setPulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setPulseEnergy(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setPulseEnergy", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSumOfAllConstantDelays(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSumOfAllConstantDelays", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSurveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSurveyError(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSurveyError", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setSurveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setSurveyedTargetDistance(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setSurveyedTargetDistance", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_setTargetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setTargetName(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setTargetName", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_toCrdString(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_toString(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$CalibrationTargetConfiguration), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__processingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProcessingSoftwareName());
          return j2p(value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__processingSoftwareName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setProcessingSoftwareName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "processingSoftwareName", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__processingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getProcessingSoftwareVersion());
          return j2p(value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__processingSoftwareVersion(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setProcessingSoftwareVersion(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "processingSoftwareVersion", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__pulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPulseEnergy());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__pulseEnergy(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setPulseEnergy(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "pulseEnergy", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__sumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSumOfAllConstantDelays());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__sumOfAllConstantDelays(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSumOfAllConstantDelays(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "sumOfAllConstantDelays", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__surveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSurveyError());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__surveyError(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSurveyError(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "surveyError", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__surveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSurveyedTargetDistance());
          return PyFloat_FromDouble((double) value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__surveyedTargetDistance(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setSurveyedTargetDistance(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "surveyedTargetDistance", arg);
          return -1;
        }

        static PyObject *t_CRDConfiguration$CalibrationTargetConfiguration_get__targetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getTargetName());
          return j2p(value);
        }
        static int t_CRDConfiguration$CalibrationTargetConfiguration_set__targetName(t_CRDConfiguration$CalibrationTargetConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setTargetName(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "targetName", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/univariate/SimpleUnivariateValueChecker.h"
#include "org/hipparchus/optim/univariate/UnivariatePointValuePair.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace univariate {

        ::java::lang::Class *SimpleUnivariateValueChecker::class$ = NULL;
        jmethodID *SimpleUnivariateValueChecker::mids$ = NULL;
        bool SimpleUnivariateValueChecker::live$ = false;

        jclass SimpleUnivariateValueChecker::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/optim/univariate/SimpleUnivariateValueChecker");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_init$_01fb2c777e5def32] = env->getMethodID(cls, "<init>", "(DDI)V");
            mids$[mid_converged_2b6199fc988d1a61] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/optim/univariate/UnivariatePointValuePair;Lorg/hipparchus/optim/univariate/UnivariatePointValuePair;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SimpleUnivariateValueChecker::SimpleUnivariateValueChecker(jdouble a0, jdouble a1) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

        SimpleUnivariateValueChecker::SimpleUnivariateValueChecker(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_01fb2c777e5def32, a0, a1, a2)) {}

        jboolean SimpleUnivariateValueChecker::converged(jint a0, const ::org::hipparchus::optim::univariate::UnivariatePointValuePair & a1, const ::org::hipparchus::optim::univariate::UnivariatePointValuePair & a2) const
        {
          return env->callBooleanMethod(this$, mids$[mid_converged_2b6199fc988d1a61], a0, a1.this$, a2.this$);
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
      namespace univariate {
        static PyObject *t_SimpleUnivariateValueChecker_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleUnivariateValueChecker_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SimpleUnivariateValueChecker_of_(t_SimpleUnivariateValueChecker *self, PyObject *args);
        static int t_SimpleUnivariateValueChecker_init_(t_SimpleUnivariateValueChecker *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SimpleUnivariateValueChecker_converged(t_SimpleUnivariateValueChecker *self, PyObject *args);
        static PyObject *t_SimpleUnivariateValueChecker_get__parameters_(t_SimpleUnivariateValueChecker *self, void *data);
        static PyGetSetDef t_SimpleUnivariateValueChecker__fields_[] = {
          DECLARE_GET_FIELD(t_SimpleUnivariateValueChecker, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SimpleUnivariateValueChecker__methods_[] = {
          DECLARE_METHOD(t_SimpleUnivariateValueChecker, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleUnivariateValueChecker, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SimpleUnivariateValueChecker, of_, METH_VARARGS),
          DECLARE_METHOD(t_SimpleUnivariateValueChecker, converged, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SimpleUnivariateValueChecker)[] = {
          { Py_tp_methods, t_SimpleUnivariateValueChecker__methods_ },
          { Py_tp_init, (void *) t_SimpleUnivariateValueChecker_init_ },
          { Py_tp_getset, t_SimpleUnivariateValueChecker__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SimpleUnivariateValueChecker)[] = {
          &PY_TYPE_DEF(::org::hipparchus::optim::AbstractConvergenceChecker),
          NULL
        };

        DEFINE_TYPE(SimpleUnivariateValueChecker, t_SimpleUnivariateValueChecker, SimpleUnivariateValueChecker);
        PyObject *t_SimpleUnivariateValueChecker::wrap_Object(const SimpleUnivariateValueChecker& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SimpleUnivariateValueChecker::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SimpleUnivariateValueChecker *self = (t_SimpleUnivariateValueChecker *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SimpleUnivariateValueChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SimpleUnivariateValueChecker::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SimpleUnivariateValueChecker *self = (t_SimpleUnivariateValueChecker *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SimpleUnivariateValueChecker::install(PyObject *module)
        {
          installType(&PY_TYPE(SimpleUnivariateValueChecker), &PY_TYPE_DEF(SimpleUnivariateValueChecker), module, "SimpleUnivariateValueChecker", 0);
        }

        void t_SimpleUnivariateValueChecker::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleUnivariateValueChecker), "class_", make_descriptor(SimpleUnivariateValueChecker::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleUnivariateValueChecker), "wrapfn_", make_descriptor(t_SimpleUnivariateValueChecker::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleUnivariateValueChecker), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SimpleUnivariateValueChecker_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SimpleUnivariateValueChecker::initializeClass, 1)))
            return NULL;
          return t_SimpleUnivariateValueChecker::wrap_Object(SimpleUnivariateValueChecker(((t_SimpleUnivariateValueChecker *) arg)->object.this$));
        }
        static PyObject *t_SimpleUnivariateValueChecker_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SimpleUnivariateValueChecker::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SimpleUnivariateValueChecker_of_(t_SimpleUnivariateValueChecker *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SimpleUnivariateValueChecker_init_(t_SimpleUnivariateValueChecker *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              jdouble a1;
              SimpleUnivariateValueChecker object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = SimpleUnivariateValueChecker(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              jdouble a1;
              jint a2;
              SimpleUnivariateValueChecker object((jobject) NULL);

              if (!parseArgs(args, "DDI", &a0, &a1, &a2))
              {
                INT_CALL(object = SimpleUnivariateValueChecker(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::univariate::PY_TYPE(UnivariatePointValuePair);
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

        static PyObject *t_SimpleUnivariateValueChecker_converged(t_SimpleUnivariateValueChecker *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::optim::univariate::UnivariatePointValuePair a1((jobject) NULL);
          ::org::hipparchus::optim::univariate::UnivariatePointValuePair a2((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "Ikk", ::org::hipparchus::optim::univariate::UnivariatePointValuePair::initializeClass, ::org::hipparchus::optim::univariate::UnivariatePointValuePair::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(result = self->object.converged(a0, a1, a2));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(SimpleUnivariateValueChecker), (PyObject *) self, "converged", args, 2);
        }
        static PyObject *t_SimpleUnivariateValueChecker_get__parameters_(t_SimpleUnivariateValueChecker *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Side.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *SubHyperplane$SplitSubHyperplane::class$ = NULL;
        jmethodID *SubHyperplane$SplitSubHyperplane::mids$ = NULL;
        bool SubHyperplane$SplitSubHyperplane::live$ = false;

        jclass SubHyperplane$SplitSubHyperplane::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_f72ac8c2b00fe7cd] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;Lorg/hipparchus/geometry/partitioning/SubHyperplane;)V");
            mids$[mid_getMinus_6e34449919366687] = env->getMethodID(cls, "getMinus", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getPlus_6e34449919366687] = env->getMethodID(cls, "getPlus", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getSide_f8858a4ff9f9675f] = env->getMethodID(cls, "getSide", "()Lorg/hipparchus/geometry/partitioning/Side;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SubHyperplane$SplitSubHyperplane::SubHyperplane$SplitSubHyperplane(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0, const ::org::hipparchus::geometry::partitioning::SubHyperplane & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f72ac8c2b00fe7cd, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::partitioning::SubHyperplane SubHyperplane$SplitSubHyperplane::getMinus() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getMinus_6e34449919366687]));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane SubHyperplane$SplitSubHyperplane::getPlus() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getPlus_6e34449919366687]));
        }

        ::org::hipparchus::geometry::partitioning::Side SubHyperplane$SplitSubHyperplane::getSide() const
        {
          return ::org::hipparchus::geometry::partitioning::Side(env->callObjectMethod(this$, mids$[mid_getSide_f8858a4ff9f9675f]));
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
        static PyObject *t_SubHyperplane$SplitSubHyperplane_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_of_(t_SubHyperplane$SplitSubHyperplane *self, PyObject *args);
        static int t_SubHyperplane$SplitSubHyperplane_init_(t_SubHyperplane$SplitSubHyperplane *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_getMinus(t_SubHyperplane$SplitSubHyperplane *self);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_getPlus(t_SubHyperplane$SplitSubHyperplane *self);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_getSide(t_SubHyperplane$SplitSubHyperplane *self);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__minus(t_SubHyperplane$SplitSubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__plus(t_SubHyperplane$SplitSubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__side(t_SubHyperplane$SplitSubHyperplane *self, void *data);
        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__parameters_(t_SubHyperplane$SplitSubHyperplane *self, void *data);
        static PyGetSetDef t_SubHyperplane$SplitSubHyperplane__fields_[] = {
          DECLARE_GET_FIELD(t_SubHyperplane$SplitSubHyperplane, minus),
          DECLARE_GET_FIELD(t_SubHyperplane$SplitSubHyperplane, plus),
          DECLARE_GET_FIELD(t_SubHyperplane$SplitSubHyperplane, side),
          DECLARE_GET_FIELD(t_SubHyperplane$SplitSubHyperplane, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SubHyperplane$SplitSubHyperplane__methods_[] = {
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, of_, METH_VARARGS),
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, getMinus, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, getPlus, METH_NOARGS),
          DECLARE_METHOD(t_SubHyperplane$SplitSubHyperplane, getSide, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SubHyperplane$SplitSubHyperplane)[] = {
          { Py_tp_methods, t_SubHyperplane$SplitSubHyperplane__methods_ },
          { Py_tp_init, (void *) t_SubHyperplane$SplitSubHyperplane_init_ },
          { Py_tp_getset, t_SubHyperplane$SplitSubHyperplane__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SubHyperplane$SplitSubHyperplane)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SubHyperplane$SplitSubHyperplane, t_SubHyperplane$SplitSubHyperplane, SubHyperplane$SplitSubHyperplane);
        PyObject *t_SubHyperplane$SplitSubHyperplane::wrap_Object(const SubHyperplane$SplitSubHyperplane& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SubHyperplane$SplitSubHyperplane::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SubHyperplane$SplitSubHyperplane *self = (t_SubHyperplane$SplitSubHyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SubHyperplane$SplitSubHyperplane::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SubHyperplane$SplitSubHyperplane::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SubHyperplane$SplitSubHyperplane *self = (t_SubHyperplane$SplitSubHyperplane *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SubHyperplane$SplitSubHyperplane::install(PyObject *module)
        {
          installType(&PY_TYPE(SubHyperplane$SplitSubHyperplane), &PY_TYPE_DEF(SubHyperplane$SplitSubHyperplane), module, "SubHyperplane$SplitSubHyperplane", 0);
        }

        void t_SubHyperplane$SplitSubHyperplane::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane$SplitSubHyperplane), "class_", make_descriptor(SubHyperplane$SplitSubHyperplane::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane$SplitSubHyperplane), "wrapfn_", make_descriptor(t_SubHyperplane$SplitSubHyperplane::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SubHyperplane$SplitSubHyperplane), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SubHyperplane$SplitSubHyperplane::initializeClass, 1)))
            return NULL;
          return t_SubHyperplane$SplitSubHyperplane::wrap_Object(SubHyperplane$SplitSubHyperplane(((t_SubHyperplane$SplitSubHyperplane *) arg)->object.this$));
        }
        static PyObject *t_SubHyperplane$SplitSubHyperplane_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SubHyperplane$SplitSubHyperplane::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_of_(t_SubHyperplane$SplitSubHyperplane *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SubHyperplane$SplitSubHyperplane_init_(t_SubHyperplane$SplitSubHyperplane *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane a1((jobject) NULL);
          PyTypeObject **p1;
          SubHyperplane$SplitSubHyperplane object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_, &a1, &p1, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            INT_CALL(object = SubHyperplane$SplitSubHyperplane(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_getMinus(t_SubHyperplane$SplitSubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getMinus());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_getPlus(t_SubHyperplane$SplitSubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getPlus());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_getSide(t_SubHyperplane$SplitSubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Side result((jobject) NULL);
          OBJ_CALL(result = self->object.getSide());
          return ::org::hipparchus::geometry::partitioning::t_Side::wrap_Object(result);
        }
        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__parameters_(t_SubHyperplane$SplitSubHyperplane *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__minus(t_SubHyperplane$SplitSubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getMinus());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__plus(t_SubHyperplane$SplitSubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getPlus());
          return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(value);
        }

        static PyObject *t_SubHyperplane$SplitSubHyperplane_get__side(t_SubHyperplane$SplitSubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::Side value((jobject) NULL);
          OBJ_CALL(value = self->object.getSide());
          return ::org::hipparchus::geometry::partitioning::t_Side::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/numerical/cr3bp/CR3BPConstants.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          ::java::lang::Class *CR3BPConstants::class$ = NULL;
          jmethodID *CR3BPConstants::mids$ = NULL;
          bool CR3BPConstants::live$ = false;

          jclass CR3BPConstants::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/numerical/cr3bp/CR3BPConstants");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getEarthMoonBarycenterSemiMajorAxis_3ee179c6abb41546] = env->getStaticMethodID(cls, "getEarthMoonBarycenterSemiMajorAxis", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)D");
              mids$[mid_getJupiterSemiMajorAxis_3ee179c6abb41546] = env->getStaticMethodID(cls, "getJupiterSemiMajorAxis", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;)D");
              mids$[mid_getMoonSemiMajorAxis_dff5885c2c873297] = env->getStaticMethodID(cls, "getMoonSemiMajorAxis", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble CR3BPConstants::getEarthMoonBarycenterSemiMajorAxis(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getEarthMoonBarycenterSemiMajorAxis_3ee179c6abb41546], a0.this$, a1.this$);
          }

          jdouble CR3BPConstants::getJupiterSemiMajorAxis(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::TimeScale & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getJupiterSemiMajorAxis_3ee179c6abb41546], a0.this$, a1.this$);
          }

          jdouble CR3BPConstants::getMoonSemiMajorAxis()
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_getMoonSemiMajorAxis_dff5885c2c873297]);
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
      namespace numerical {
        namespace cr3bp {
          static PyObject *t_CR3BPConstants_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CR3BPConstants_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CR3BPConstants_getEarthMoonBarycenterSemiMajorAxis(PyTypeObject *type, PyObject *args);
          static PyObject *t_CR3BPConstants_getJupiterSemiMajorAxis(PyTypeObject *type, PyObject *args);
          static PyObject *t_CR3BPConstants_getMoonSemiMajorAxis(PyTypeObject *type);
          static PyObject *t_CR3BPConstants_get__moonSemiMajorAxis(t_CR3BPConstants *self, void *data);
          static PyGetSetDef t_CR3BPConstants__fields_[] = {
            DECLARE_GET_FIELD(t_CR3BPConstants, moonSemiMajorAxis),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_CR3BPConstants__methods_[] = {
            DECLARE_METHOD(t_CR3BPConstants, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPConstants, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CR3BPConstants, getEarthMoonBarycenterSemiMajorAxis, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CR3BPConstants, getJupiterSemiMajorAxis, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CR3BPConstants, getMoonSemiMajorAxis, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CR3BPConstants)[] = {
            { Py_tp_methods, t_CR3BPConstants__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_CR3BPConstants__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CR3BPConstants)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CR3BPConstants, t_CR3BPConstants, CR3BPConstants);

          void t_CR3BPConstants::install(PyObject *module)
          {
            installType(&PY_TYPE(CR3BPConstants), &PY_TYPE_DEF(CR3BPConstants), module, "CR3BPConstants", 0);
          }

          void t_CR3BPConstants::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPConstants), "class_", make_descriptor(CR3BPConstants::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPConstants), "wrapfn_", make_descriptor(t_CR3BPConstants::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CR3BPConstants), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CR3BPConstants_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CR3BPConstants::initializeClass, 1)))
              return NULL;
            return t_CR3BPConstants::wrap_Object(CR3BPConstants(((t_CR3BPConstants *) arg)->object.this$));
          }
          static PyObject *t_CR3BPConstants_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CR3BPConstants::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CR3BPConstants_getEarthMoonBarycenterSemiMajorAxis(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::numerical::cr3bp::CR3BPConstants::getEarthMoonBarycenterSemiMajorAxis(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "getEarthMoonBarycenterSemiMajorAxis", args);
            return NULL;
          }

          static PyObject *t_CR3BPConstants_getJupiterSemiMajorAxis(PyTypeObject *type, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::TimeScale a1((jobject) NULL);
            jdouble result;

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = ::org::orekit::propagation::numerical::cr3bp::CR3BPConstants::getJupiterSemiMajorAxis(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError(type, "getJupiterSemiMajorAxis", args);
            return NULL;
          }

          static PyObject *t_CR3BPConstants_getMoonSemiMajorAxis(PyTypeObject *type)
          {
            jdouble result;
            OBJ_CALL(result = ::org::orekit::propagation::numerical::cr3bp::CR3BPConstants::getMoonSemiMajorAxis());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_CR3BPConstants_get__moonSemiMajorAxis(t_CR3BPConstants *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getMoonSemiMajorAxis());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldEventsLogger.h"
#include "java/util/List.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/FieldEventsLogger$FieldLoggedEvent.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldEventsLogger::class$ = NULL;
        jmethodID *FieldEventsLogger::mids$ = NULL;
        bool FieldEventsLogger::live$ = false;

        jclass FieldEventsLogger::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldEventsLogger");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_clearLoggedEvents_0fa09c18fee449d5] = env->getMethodID(cls, "clearLoggedEvents", "()V");
            mids$[mid_getLoggedEvents_2afa36052df4765d] = env->getMethodID(cls, "getLoggedEvents", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldEventsLogger::FieldEventsLogger() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        void FieldEventsLogger::clearLoggedEvents() const
        {
          env->callVoidMethod(this$, mids$[mid_clearLoggedEvents_0fa09c18fee449d5]);
        }

        ::java::util::List FieldEventsLogger::getLoggedEvents() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getLoggedEvents_2afa36052df4765d]));
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
        static PyObject *t_FieldEventsLogger_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventsLogger_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldEventsLogger_of_(t_FieldEventsLogger *self, PyObject *args);
        static int t_FieldEventsLogger_init_(t_FieldEventsLogger *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldEventsLogger_clearLoggedEvents(t_FieldEventsLogger *self);
        static PyObject *t_FieldEventsLogger_getLoggedEvents(t_FieldEventsLogger *self);
        static PyObject *t_FieldEventsLogger_get__loggedEvents(t_FieldEventsLogger *self, void *data);
        static PyObject *t_FieldEventsLogger_get__parameters_(t_FieldEventsLogger *self, void *data);
        static PyGetSetDef t_FieldEventsLogger__fields_[] = {
          DECLARE_GET_FIELD(t_FieldEventsLogger, loggedEvents),
          DECLARE_GET_FIELD(t_FieldEventsLogger, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldEventsLogger__methods_[] = {
          DECLARE_METHOD(t_FieldEventsLogger, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventsLogger, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldEventsLogger, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldEventsLogger, clearLoggedEvents, METH_NOARGS),
          DECLARE_METHOD(t_FieldEventsLogger, getLoggedEvents, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldEventsLogger)[] = {
          { Py_tp_methods, t_FieldEventsLogger__methods_ },
          { Py_tp_init, (void *) t_FieldEventsLogger_init_ },
          { Py_tp_getset, t_FieldEventsLogger__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldEventsLogger)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldEventsLogger, t_FieldEventsLogger, FieldEventsLogger);
        PyObject *t_FieldEventsLogger::wrap_Object(const FieldEventsLogger& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventsLogger::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventsLogger *self = (t_FieldEventsLogger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldEventsLogger::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldEventsLogger::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldEventsLogger *self = (t_FieldEventsLogger *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldEventsLogger::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldEventsLogger), &PY_TYPE_DEF(FieldEventsLogger), module, "FieldEventsLogger", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger), "FieldLoggedEvent", make_descriptor(&PY_TYPE_DEF(FieldEventsLogger$FieldLoggedEvent)));
        }

        void t_FieldEventsLogger::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger), "class_", make_descriptor(FieldEventsLogger::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger), "wrapfn_", make_descriptor(t_FieldEventsLogger::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventsLogger), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldEventsLogger_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldEventsLogger::initializeClass, 1)))
            return NULL;
          return t_FieldEventsLogger::wrap_Object(FieldEventsLogger(((t_FieldEventsLogger *) arg)->object.this$));
        }
        static PyObject *t_FieldEventsLogger_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldEventsLogger::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldEventsLogger_of_(t_FieldEventsLogger *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldEventsLogger_init_(t_FieldEventsLogger *self, PyObject *args, PyObject *kwds)
        {
          FieldEventsLogger object((jobject) NULL);

          INT_CALL(object = FieldEventsLogger());
          self->object = object;

          return 0;
        }

        static PyObject *t_FieldEventsLogger_clearLoggedEvents(t_FieldEventsLogger *self)
        {
          OBJ_CALL(self->object.clearLoggedEvents());
          Py_RETURN_NONE;
        }

        static PyObject *t_FieldEventsLogger_getLoggedEvents(t_FieldEventsLogger *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getLoggedEvents());
          return ::java::util::t_List::wrap_Object(result);
        }
        static PyObject *t_FieldEventsLogger_get__parameters_(t_FieldEventsLogger *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldEventsLogger_get__loggedEvents(t_FieldEventsLogger *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getLoggedEvents());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldMultivariateMatrixFunction.h"
#include "org/hipparchus/analysis/CalculusFieldMultivariateMatrixFunction.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldMultivariateMatrixFunction::class$ = NULL;
      jmethodID *FieldMultivariateMatrixFunction::mids$ = NULL;
      bool FieldMultivariateMatrixFunction::live$ = false;

      jclass FieldMultivariateMatrixFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldMultivariateMatrixFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldMultivariateMatrixFunction_40afd9ffa9ccb71a] = env->getMethodID(cls, "toCalculusFieldMultivariateMatrixFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldMultivariateMatrixFunction;");
          mids$[mid_value_93e380e776ff0d58] = env->getMethodID(cls, "value", "([Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldMultivariateMatrixFunction FieldMultivariateMatrixFunction::toCalculusFieldMultivariateMatrixFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldMultivariateMatrixFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldMultivariateMatrixFunction_40afd9ffa9ccb71a], a0.this$));
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > FieldMultivariateMatrixFunction::value(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_value_93e380e776ff0d58], a0.this$));
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
      static PyObject *t_FieldMultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldMultivariateMatrixFunction_toCalculusFieldMultivariateMatrixFunction(t_FieldMultivariateMatrixFunction *self, PyObject *arg);
      static PyObject *t_FieldMultivariateMatrixFunction_value(t_FieldMultivariateMatrixFunction *self, PyObject *arg);

      static PyMethodDef t_FieldMultivariateMatrixFunction__methods_[] = {
        DECLARE_METHOD(t_FieldMultivariateMatrixFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateMatrixFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldMultivariateMatrixFunction, toCalculusFieldMultivariateMatrixFunction, METH_O),
        DECLARE_METHOD(t_FieldMultivariateMatrixFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldMultivariateMatrixFunction)[] = {
        { Py_tp_methods, t_FieldMultivariateMatrixFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldMultivariateMatrixFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldMultivariateMatrixFunction, t_FieldMultivariateMatrixFunction, FieldMultivariateMatrixFunction);

      void t_FieldMultivariateMatrixFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldMultivariateMatrixFunction), &PY_TYPE_DEF(FieldMultivariateMatrixFunction), module, "FieldMultivariateMatrixFunction", 0);
      }

      void t_FieldMultivariateMatrixFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateMatrixFunction), "class_", make_descriptor(FieldMultivariateMatrixFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateMatrixFunction), "wrapfn_", make_descriptor(t_FieldMultivariateMatrixFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldMultivariateMatrixFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldMultivariateMatrixFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldMultivariateMatrixFunction::initializeClass, 1)))
          return NULL;
        return t_FieldMultivariateMatrixFunction::wrap_Object(FieldMultivariateMatrixFunction(((t_FieldMultivariateMatrixFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldMultivariateMatrixFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldMultivariateMatrixFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldMultivariateMatrixFunction_toCalculusFieldMultivariateMatrixFunction(t_FieldMultivariateMatrixFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldMultivariateMatrixFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldMultivariateMatrixFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldMultivariateMatrixFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldMultivariateMatrixFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldMultivariateMatrixFunction_value(t_FieldMultivariateMatrixFunction *self, PyObject *arg)
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/intersection/duvenhage/DuvenhageAlgorithm.h"
#include "org/orekit/rugged/utils/ExtendedEllipsoid.h"
#include "org/orekit/rugged/api/AlgorithmId.h"
#include "org/orekit/rugged/intersection/IntersectionAlgorithm.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/raster/TileUpdater.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace intersection {
        namespace duvenhage {

          ::java::lang::Class *DuvenhageAlgorithm::class$ = NULL;
          jmethodID *DuvenhageAlgorithm::mids$ = NULL;
          bool DuvenhageAlgorithm::live$ = false;

          jclass DuvenhageAlgorithm::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/intersection/duvenhage/DuvenhageAlgorithm");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_e3891b4d9264e2b8] = env->getMethodID(cls, "<init>", "(Lorg/orekit/rugged/raster/TileUpdater;IZ)V");
              mids$[mid_getAlgorithmId_da9f33328b8f3962] = env->getMethodID(cls, "getAlgorithmId", "()Lorg/orekit/rugged/api/AlgorithmId;");
              mids$[mid_getElevation_86ffecc08a63eff0] = env->getMethodID(cls, "getElevation", "(DD)D");
              mids$[mid_intersection_943aab8456e3784b] = env->getMethodID(cls, "intersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
              mids$[mid_refineIntersection_860353a3ab3d03aa] = env->getMethodID(cls, "refineIntersection", "(Lorg/orekit/rugged/utils/ExtendedEllipsoid;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          DuvenhageAlgorithm::DuvenhageAlgorithm(const ::org::orekit::rugged::raster::TileUpdater & a0, jint a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e3891b4d9264e2b8, a0.this$, a1, a2)) {}

          ::org::orekit::rugged::api::AlgorithmId DuvenhageAlgorithm::getAlgorithmId() const
          {
            return ::org::orekit::rugged::api::AlgorithmId(env->callObjectMethod(this$, mids$[mid_getAlgorithmId_da9f33328b8f3962]));
          }

          jdouble DuvenhageAlgorithm::getElevation(jdouble a0, jdouble a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getElevation_86ffecc08a63eff0], a0, a1);
          }

          ::org::orekit::rugged::utils::NormalizedGeodeticPoint DuvenhageAlgorithm::intersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_intersection_943aab8456e3784b], a0.this$, a1.this$, a2.this$));
          }

          ::org::orekit::rugged::utils::NormalizedGeodeticPoint DuvenhageAlgorithm::refineIntersection(const ::org::orekit::rugged::utils::ExtendedEllipsoid & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a3) const
          {
            return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_refineIntersection_860353a3ab3d03aa], a0.this$, a1.this$, a2.this$, a3.this$));
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
    namespace rugged {
      namespace intersection {
        namespace duvenhage {
          static PyObject *t_DuvenhageAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_DuvenhageAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
          static int t_DuvenhageAlgorithm_init_(t_DuvenhageAlgorithm *self, PyObject *args, PyObject *kwds);
          static PyObject *t_DuvenhageAlgorithm_getAlgorithmId(t_DuvenhageAlgorithm *self);
          static PyObject *t_DuvenhageAlgorithm_getElevation(t_DuvenhageAlgorithm *self, PyObject *args);
          static PyObject *t_DuvenhageAlgorithm_intersection(t_DuvenhageAlgorithm *self, PyObject *args);
          static PyObject *t_DuvenhageAlgorithm_refineIntersection(t_DuvenhageAlgorithm *self, PyObject *args);
          static PyObject *t_DuvenhageAlgorithm_get__algorithmId(t_DuvenhageAlgorithm *self, void *data);
          static PyGetSetDef t_DuvenhageAlgorithm__fields_[] = {
            DECLARE_GET_FIELD(t_DuvenhageAlgorithm, algorithmId),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_DuvenhageAlgorithm__methods_[] = {
            DECLARE_METHOD(t_DuvenhageAlgorithm, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, getAlgorithmId, METH_NOARGS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, getElevation, METH_VARARGS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, intersection, METH_VARARGS),
            DECLARE_METHOD(t_DuvenhageAlgorithm, refineIntersection, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(DuvenhageAlgorithm)[] = {
            { Py_tp_methods, t_DuvenhageAlgorithm__methods_ },
            { Py_tp_init, (void *) t_DuvenhageAlgorithm_init_ },
            { Py_tp_getset, t_DuvenhageAlgorithm__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(DuvenhageAlgorithm)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(DuvenhageAlgorithm, t_DuvenhageAlgorithm, DuvenhageAlgorithm);

          void t_DuvenhageAlgorithm::install(PyObject *module)
          {
            installType(&PY_TYPE(DuvenhageAlgorithm), &PY_TYPE_DEF(DuvenhageAlgorithm), module, "DuvenhageAlgorithm", 0);
          }

          void t_DuvenhageAlgorithm::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(DuvenhageAlgorithm), "class_", make_descriptor(DuvenhageAlgorithm::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DuvenhageAlgorithm), "wrapfn_", make_descriptor(t_DuvenhageAlgorithm::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(DuvenhageAlgorithm), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_DuvenhageAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, DuvenhageAlgorithm::initializeClass, 1)))
              return NULL;
            return t_DuvenhageAlgorithm::wrap_Object(DuvenhageAlgorithm(((t_DuvenhageAlgorithm *) arg)->object.this$));
          }
          static PyObject *t_DuvenhageAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, DuvenhageAlgorithm::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_DuvenhageAlgorithm_init_(t_DuvenhageAlgorithm *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::rugged::raster::TileUpdater a0((jobject) NULL);
            jint a1;
            jboolean a2;
            DuvenhageAlgorithm object((jobject) NULL);

            if (!parseArgs(args, "kIZ", ::org::orekit::rugged::raster::TileUpdater::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = DuvenhageAlgorithm(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_DuvenhageAlgorithm_getAlgorithmId(t_DuvenhageAlgorithm *self)
          {
            ::org::orekit::rugged::api::AlgorithmId result((jobject) NULL);
            OBJ_CALL(result = self->object.getAlgorithmId());
            return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(result);
          }

          static PyObject *t_DuvenhageAlgorithm_getElevation(t_DuvenhageAlgorithm *self, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = self->object.getElevation(a0, a1));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getElevation", args);
            return NULL;
          }

          static PyObject *t_DuvenhageAlgorithm_intersection(t_DuvenhageAlgorithm *self, PyObject *args)
          {
            ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.intersection(a0, a1, a2));
              return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", args);
            return NULL;
          }

          static PyObject *t_DuvenhageAlgorithm_refineIntersection(t_DuvenhageAlgorithm *self, PyObject *args)
          {
            ::org::orekit::rugged::utils::ExtendedEllipsoid a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::orekit::rugged::utils::NormalizedGeodeticPoint a3((jobject) NULL);
            ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

            if (!parseArgs(args, "kkkk", ::org::orekit::rugged::utils::ExtendedEllipsoid::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.refineIntersection(a0, a1, a2, a3));
              return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "refineIntersection", args);
            return NULL;
          }

          static PyObject *t_DuvenhageAlgorithm_get__algorithmId(t_DuvenhageAlgorithm *self, void *data)
          {
            ::org::orekit::rugged::api::AlgorithmId value((jobject) NULL);
            OBJ_CALL(value = self->object.getAlgorithmId());
            return ::org::orekit::rugged::api::t_AlgorithmId::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedForm.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/DSSTForceModel.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements.h"
#include "org/orekit/propagation/PropagationType.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/ShortPeriodTerms.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/FieldShortPeriodTerms.h"
#include "org/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            ::java::lang::Class *DSSTJ2SquaredClosedForm::class$ = NULL;
            jmethodID *DSSTJ2SquaredClosedForm::mids$ = NULL;
            bool DSSTJ2SquaredClosedForm::live$ = false;

            jclass DSSTJ2SquaredClosedForm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/forces/DSSTJ2SquaredClosedForm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_b3b873ab3d91a84c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/semianalytical/dsst/forces/J2SquaredModel;Lorg/orekit/forces/gravity/potential/UnnormalizedSphericalHarmonicsProvider;)V");
                mids$[mid_getMeanElementRate_5dbca2d049b16b82] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;[D)[D");
                mids$[mid_getMeanElementRate_c0df8831049775b0] = env->getMethodID(cls, "getMeanElementRate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
                mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_cd6a8183d9477030] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/AuxiliaryElements;Lorg/orekit/propagation/PropagationType;[D)Ljava/util/List;");
                mids$[mid_initializeShortPeriodTerms_c7d75d32fd67f743] = env->getMethodID(cls, "initializeShortPeriodTerms", "(Lorg/orekit/propagation/semianalytical/dsst/utilities/FieldAuxiliaryElements;Lorg/orekit/propagation/PropagationType;[Lorg/hipparchus/CalculusFieldElement;)Ljava/util/List;");
                mids$[mid_registerAttitudeProvider_3cff7c75ea06698c] = env->getMethodID(cls, "registerAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
                mids$[mid_updateShortPeriodTerms_a9748e634dd1c969] = env->getMethodID(cls, "updateShortPeriodTerms", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/orekit/propagation/FieldSpacecraftState;)V");
                mids$[mid_updateShortPeriodTerms_120865f9c5cc3bda] = env->getMethodID(cls, "updateShortPeriodTerms", "([D[Lorg/orekit/propagation/SpacecraftState;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            DSSTJ2SquaredClosedForm::DSSTJ2SquaredClosedForm(const ::org::orekit::propagation::semianalytical::dsst::forces::J2SquaredModel & a0, const ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_b3b873ab3d91a84c, a0.this$, a1.this$)) {}

            JArray< jdouble > DSSTJ2SquaredClosedForm::getMeanElementRate(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a1, const JArray< jdouble > & a2) const
            {
              return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_5dbca2d049b16b82], a0.this$, a1.this$, a2.this$));
            }

            JArray< ::org::hipparchus::CalculusFieldElement > DSSTJ2SquaredClosedForm::getMeanElementRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getMeanElementRate_c0df8831049775b0], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTJ2SquaredClosedForm::getParametersDrivers() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
            }

            ::java::util::List DSSTJ2SquaredClosedForm::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< jdouble > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_cd6a8183d9477030], a0.this$, a1.this$, a2.this$));
            }

            ::java::util::List DSSTJ2SquaredClosedForm::initializeShortPeriodTerms(const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements & a0, const ::org::orekit::propagation::PropagationType & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_initializeShortPeriodTerms_c7d75d32fd67f743], a0.this$, a1.this$, a2.this$));
            }

            void DSSTJ2SquaredClosedForm::registerAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_registerAttitudeProvider_3cff7c75ea06698c], a0.this$);
            }

            void DSSTJ2SquaredClosedForm::updateShortPeriodTerms(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< ::org::orekit::propagation::FieldSpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_a9748e634dd1c969], a0.this$, a1.this$);
            }

            void DSSTJ2SquaredClosedForm::updateShortPeriodTerms(const JArray< jdouble > & a0, const JArray< ::org::orekit::propagation::SpacecraftState > & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_updateShortPeriodTerms_120865f9c5cc3bda], a0.this$, a1.this$);
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
            static PyObject *t_DSSTJ2SquaredClosedForm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_DSSTJ2SquaredClosedForm_instance_(PyTypeObject *type, PyObject *arg);
            static int t_DSSTJ2SquaredClosedForm_init_(t_DSSTJ2SquaredClosedForm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_DSSTJ2SquaredClosedForm_getMeanElementRate(t_DSSTJ2SquaredClosedForm *self, PyObject *args);
            static PyObject *t_DSSTJ2SquaredClosedForm_getParametersDrivers(t_DSSTJ2SquaredClosedForm *self);
            static PyObject *t_DSSTJ2SquaredClosedForm_initializeShortPeriodTerms(t_DSSTJ2SquaredClosedForm *self, PyObject *args);
            static PyObject *t_DSSTJ2SquaredClosedForm_registerAttitudeProvider(t_DSSTJ2SquaredClosedForm *self, PyObject *arg);
            static PyObject *t_DSSTJ2SquaredClosedForm_updateShortPeriodTerms(t_DSSTJ2SquaredClosedForm *self, PyObject *args);
            static PyObject *t_DSSTJ2SquaredClosedForm_get__parametersDrivers(t_DSSTJ2SquaredClosedForm *self, void *data);
            static PyGetSetDef t_DSSTJ2SquaredClosedForm__fields_[] = {
              DECLARE_GET_FIELD(t_DSSTJ2SquaredClosedForm, parametersDrivers),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_DSSTJ2SquaredClosedForm__methods_[] = {
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, getMeanElementRate, METH_VARARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, getParametersDrivers, METH_NOARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, initializeShortPeriodTerms, METH_VARARGS),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, registerAttitudeProvider, METH_O),
              DECLARE_METHOD(t_DSSTJ2SquaredClosedForm, updateShortPeriodTerms, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(DSSTJ2SquaredClosedForm)[] = {
              { Py_tp_methods, t_DSSTJ2SquaredClosedForm__methods_ },
              { Py_tp_init, (void *) t_DSSTJ2SquaredClosedForm_init_ },
              { Py_tp_getset, t_DSSTJ2SquaredClosedForm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(DSSTJ2SquaredClosedForm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(DSSTJ2SquaredClosedForm, t_DSSTJ2SquaredClosedForm, DSSTJ2SquaredClosedForm);

            void t_DSSTJ2SquaredClosedForm::install(PyObject *module)
            {
              installType(&PY_TYPE(DSSTJ2SquaredClosedForm), &PY_TYPE_DEF(DSSTJ2SquaredClosedForm), module, "DSSTJ2SquaredClosedForm", 0);
            }

            void t_DSSTJ2SquaredClosedForm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedForm), "class_", make_descriptor(DSSTJ2SquaredClosedForm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedForm), "wrapfn_", make_descriptor(t_DSSTJ2SquaredClosedForm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(DSSTJ2SquaredClosedForm), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, DSSTJ2SquaredClosedForm::initializeClass, 1)))
                return NULL;
              return t_DSSTJ2SquaredClosedForm::wrap_Object(DSSTJ2SquaredClosedForm(((t_DSSTJ2SquaredClosedForm *) arg)->object.this$));
            }
            static PyObject *t_DSSTJ2SquaredClosedForm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, DSSTJ2SquaredClosedForm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_DSSTJ2SquaredClosedForm_init_(t_DSSTJ2SquaredClosedForm *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::propagation::semianalytical::dsst::forces::J2SquaredModel a0((jobject) NULL);
              ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider a1((jobject) NULL);
              DSSTJ2SquaredClosedForm object((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::propagation::semianalytical::dsst::forces::J2SquaredModel::initializeClass, ::org::orekit::forces::gravity::potential::UnnormalizedSphericalHarmonicsProvider::initializeClass, &a0, &a1))
              {
                INT_CALL(object = DSSTJ2SquaredClosedForm(a0, a1));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_getMeanElementRate(t_DSSTJ2SquaredClosedForm *self, PyObject *args)
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

            static PyObject *t_DSSTJ2SquaredClosedForm_getParametersDrivers(t_DSSTJ2SquaredClosedForm *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getParametersDrivers());
              return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
            }

            static PyObject *t_DSSTJ2SquaredClosedForm_initializeShortPeriodTerms(t_DSSTJ2SquaredClosedForm *self, PyObject *args)
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

            static PyObject *t_DSSTJ2SquaredClosedForm_registerAttitudeProvider(t_DSSTJ2SquaredClosedForm *self, PyObject *arg)
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

            static PyObject *t_DSSTJ2SquaredClosedForm_updateShortPeriodTerms(t_DSSTJ2SquaredClosedForm *self, PyObject *args)
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

            static PyObject *t_DSSTJ2SquaredClosedForm_get__parametersDrivers(t_DSSTJ2SquaredClosedForm *self, void *data)
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
#include "org/orekit/utils/ElevationMask.h"
#include "java/lang/Class.h"
#include "java/io/Serializable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *ElevationMask::class$ = NULL;
      jmethodID *ElevationMask::mids$ = NULL;
      bool ElevationMask::live$ = false;

      jclass ElevationMask::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/ElevationMask");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a0befc7f3dc19e41] = env->getMethodID(cls, "<init>", "([[D)V");
          mids$[mid_getElevation_dcbc7ce2902fa136] = env->getMethodID(cls, "getElevation", "(D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ElevationMask::ElevationMask(const JArray< JArray< jdouble > > & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a0befc7f3dc19e41, a0.this$)) {}

      jdouble ElevationMask::getElevation(jdouble a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getElevation_dcbc7ce2902fa136], a0);
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
      static PyObject *t_ElevationMask_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ElevationMask_instance_(PyTypeObject *type, PyObject *arg);
      static int t_ElevationMask_init_(t_ElevationMask *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ElevationMask_getElevation(t_ElevationMask *self, PyObject *arg);

      static PyMethodDef t_ElevationMask__methods_[] = {
        DECLARE_METHOD(t_ElevationMask, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ElevationMask, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ElevationMask, getElevation, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ElevationMask)[] = {
        { Py_tp_methods, t_ElevationMask__methods_ },
        { Py_tp_init, (void *) t_ElevationMask_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ElevationMask)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ElevationMask, t_ElevationMask, ElevationMask);

      void t_ElevationMask::install(PyObject *module)
      {
        installType(&PY_TYPE(ElevationMask), &PY_TYPE_DEF(ElevationMask), module, "ElevationMask", 0);
      }

      void t_ElevationMask::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationMask), "class_", make_descriptor(ElevationMask::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationMask), "wrapfn_", make_descriptor(t_ElevationMask::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ElevationMask), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ElevationMask_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ElevationMask::initializeClass, 1)))
          return NULL;
        return t_ElevationMask::wrap_Object(ElevationMask(((t_ElevationMask *) arg)->object.this$));
      }
      static PyObject *t_ElevationMask_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ElevationMask::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_ElevationMask_init_(t_ElevationMask *self, PyObject *args, PyObject *kwds)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);
        ElevationMask object((jobject) NULL);

        if (!parseArgs(args, "[[D", &a0))
        {
          INT_CALL(object = ElevationMask(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ElevationMask_getElevation(t_ElevationMask *self, PyObject *arg)
      {
        jdouble a0;
        jdouble result;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(result = self->object.getElevation(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getElevation", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/GillFieldIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *GillFieldIntegrator::class$ = NULL;
        jmethodID *GillFieldIntegrator::mids$ = NULL;
        bool GillFieldIntegrator::live$ = false;

        jclass GillFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/GillFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_79b17d518528c1b2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_1b3ae884bec31e6d] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_226a0b2040b1d2e1] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_226a0b2040b1d2e1] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_5bdb4cab76e2352a] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/GillFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GillFieldIntegrator::GillFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_79b17d518528c1b2, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > GillFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_1b3ae884bec31e6d]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > GillFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_226a0b2040b1d2e1]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > GillFieldIntegrator::getC() const
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
        static PyObject *t_GillFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GillFieldIntegrator_of_(t_GillFieldIntegrator *self, PyObject *args);
        static int t_GillFieldIntegrator_init_(t_GillFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GillFieldIntegrator_getA(t_GillFieldIntegrator *self, PyObject *args);
        static PyObject *t_GillFieldIntegrator_getB(t_GillFieldIntegrator *self, PyObject *args);
        static PyObject *t_GillFieldIntegrator_getC(t_GillFieldIntegrator *self, PyObject *args);
        static PyObject *t_GillFieldIntegrator_get__a(t_GillFieldIntegrator *self, void *data);
        static PyObject *t_GillFieldIntegrator_get__b(t_GillFieldIntegrator *self, void *data);
        static PyObject *t_GillFieldIntegrator_get__c(t_GillFieldIntegrator *self, void *data);
        static PyObject *t_GillFieldIntegrator_get__parameters_(t_GillFieldIntegrator *self, void *data);
        static PyGetSetDef t_GillFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_GillFieldIntegrator, a),
          DECLARE_GET_FIELD(t_GillFieldIntegrator, b),
          DECLARE_GET_FIELD(t_GillFieldIntegrator, c),
          DECLARE_GET_FIELD(t_GillFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GillFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_GillFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GillFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_GillFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_GillFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_GillFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GillFieldIntegrator)[] = {
          { Py_tp_methods, t_GillFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_GillFieldIntegrator_init_ },
          { Py_tp_getset, t_GillFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GillFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(GillFieldIntegrator, t_GillFieldIntegrator, GillFieldIntegrator);
        PyObject *t_GillFieldIntegrator::wrap_Object(const GillFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GillFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GillFieldIntegrator *self = (t_GillFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GillFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GillFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GillFieldIntegrator *self = (t_GillFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GillFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(GillFieldIntegrator), &PY_TYPE_DEF(GillFieldIntegrator), module, "GillFieldIntegrator", 0);
        }

        void t_GillFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegrator), "class_", make_descriptor(GillFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegrator), "wrapfn_", make_descriptor(t_GillFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GillFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_GillFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GillFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_GillFieldIntegrator::wrap_Object(GillFieldIntegrator(((t_GillFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_GillFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GillFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GillFieldIntegrator_of_(t_GillFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GillFieldIntegrator_init_(t_GillFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          GillFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = GillFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GillFieldIntegrator_getA(t_GillFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(GillFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_GillFieldIntegrator_getB(t_GillFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(GillFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_GillFieldIntegrator_getC(t_GillFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(GillFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_GillFieldIntegrator_get__parameters_(t_GillFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_GillFieldIntegrator_get__a(t_GillFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_GillFieldIntegrator_get__b(t_GillFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_GillFieldIntegrator_get__c(t_GillFieldIntegrator *self, void *data)
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
#include "org/orekit/estimation/iod/IodGooding.h"
#include "org/orekit/estimation/measurements/AngularAzEl.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/estimation/measurements/AngularRaDec.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace iod {

        ::java::lang::Class *IodGooding::class$ = NULL;
        jmethodID *IodGooding::mids$ = NULL;
        bool IodGooding::live$ = false;

        jclass IodGooding::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/iod/IodGooding");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_estimate_9f4edff2f4b2c1d0] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;DD)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_e2eca386302ad5d5] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;DD)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_10bff6c739149e21] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;Lorg/orekit/estimation/measurements/AngularAzEl;DDIZ)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_f0cd4f5546c29d38] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;Lorg/orekit/estimation/measurements/AngularRaDec;DDIZ)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_e386e2d1a757ec14] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;DD)Lorg/orekit/orbits/Orbit;");
            mids$[mid_estimate_438460b781bc8282] = env->getMethodID(cls, "estimate", "(Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/time/AbsoluteDate;DDIZ)Lorg/orekit/orbits/Orbit;");
            mids$[mid_getRange1_dff5885c2c873297] = env->getMethodID(cls, "getRange1", "()D");
            mids$[mid_getRange2_dff5885c2c873297] = env->getMethodID(cls, "getRange2", "()D");
            mids$[mid_getRange3_dff5885c2c873297] = env->getMethodID(cls, "getRange3", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        IodGooding::IodGooding(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularAzEl & a1, const ::org::orekit::estimation::measurements::AngularAzEl & a2, const ::org::orekit::estimation::measurements::AngularAzEl & a3, jdouble a4, jdouble a5) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_9f4edff2f4b2c1d0], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularRaDec & a1, const ::org::orekit::estimation::measurements::AngularRaDec & a2, const ::org::orekit::estimation::measurements::AngularRaDec & a3, jdouble a4, jdouble a5) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_e2eca386302ad5d5], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularAzEl & a1, const ::org::orekit::estimation::measurements::AngularAzEl & a2, const ::org::orekit::estimation::measurements::AngularAzEl & a3, jdouble a4, jdouble a5, jint a6, jboolean a7) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_10bff6c739149e21], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6, a7));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::orekit::estimation::measurements::AngularRaDec & a1, const ::org::orekit::estimation::measurements::AngularRaDec & a2, const ::org::orekit::estimation::measurements::AngularRaDec & a3, jdouble a4, jdouble a5, jint a6, jboolean a7) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_f0cd4f5546c29d38], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5, a6, a7));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::org::orekit::time::AbsoluteDate & a5, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a6, const ::org::orekit::time::AbsoluteDate & a7, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a8, const ::org::orekit::time::AbsoluteDate & a9, jdouble a10, jdouble a11) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_e386e2d1a757ec14], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10, a11));
        }

        ::org::orekit::orbits::Orbit IodGooding::estimate(const ::org::orekit::frames::Frame & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, const ::org::orekit::time::AbsoluteDate & a5, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a6, const ::org::orekit::time::AbsoluteDate & a7, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a8, const ::org::orekit::time::AbsoluteDate & a9, jdouble a10, jdouble a11, jint a12, jboolean a13) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_estimate_438460b781bc8282], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$, a8.this$, a9.this$, a10, a11, a12, a13));
        }

        jdouble IodGooding::getRange1() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRange1_dff5885c2c873297]);
        }

        jdouble IodGooding::getRange2() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRange2_dff5885c2c873297]);
        }

        jdouble IodGooding::getRange3() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRange3_dff5885c2c873297]);
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
        static PyObject *t_IodGooding_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_IodGooding_instance_(PyTypeObject *type, PyObject *arg);
        static int t_IodGooding_init_(t_IodGooding *self, PyObject *args, PyObject *kwds);
        static PyObject *t_IodGooding_estimate(t_IodGooding *self, PyObject *args);
        static PyObject *t_IodGooding_getRange1(t_IodGooding *self);
        static PyObject *t_IodGooding_getRange2(t_IodGooding *self);
        static PyObject *t_IodGooding_getRange3(t_IodGooding *self);
        static PyObject *t_IodGooding_get__range1(t_IodGooding *self, void *data);
        static PyObject *t_IodGooding_get__range2(t_IodGooding *self, void *data);
        static PyObject *t_IodGooding_get__range3(t_IodGooding *self, void *data);
        static PyGetSetDef t_IodGooding__fields_[] = {
          DECLARE_GET_FIELD(t_IodGooding, range1),
          DECLARE_GET_FIELD(t_IodGooding, range2),
          DECLARE_GET_FIELD(t_IodGooding, range3),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_IodGooding__methods_[] = {
          DECLARE_METHOD(t_IodGooding, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGooding, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_IodGooding, estimate, METH_VARARGS),
          DECLARE_METHOD(t_IodGooding, getRange1, METH_NOARGS),
          DECLARE_METHOD(t_IodGooding, getRange2, METH_NOARGS),
          DECLARE_METHOD(t_IodGooding, getRange3, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(IodGooding)[] = {
          { Py_tp_methods, t_IodGooding__methods_ },
          { Py_tp_init, (void *) t_IodGooding_init_ },
          { Py_tp_getset, t_IodGooding__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(IodGooding)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(IodGooding, t_IodGooding, IodGooding);

        void t_IodGooding::install(PyObject *module)
        {
          installType(&PY_TYPE(IodGooding), &PY_TYPE_DEF(IodGooding), module, "IodGooding", 0);
        }

        void t_IodGooding::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGooding), "class_", make_descriptor(IodGooding::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGooding), "wrapfn_", make_descriptor(t_IodGooding::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(IodGooding), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_IodGooding_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, IodGooding::initializeClass, 1)))
            return NULL;
          return t_IodGooding::wrap_Object(IodGooding(((t_IodGooding *) arg)->object.this$));
        }
        static PyObject *t_IodGooding_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, IodGooding::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_IodGooding_init_(t_IodGooding *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          IodGooding object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = IodGooding(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_IodGooding_estimate(t_IodGooding *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 6:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularAzEl a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularAzEl a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularAzEl a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKKDD", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a4, &a5))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularRaDec a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularRaDec a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularRaDec a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKKDD", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a4, &a5))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 8:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularAzEl a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularAzEl a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularAzEl a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jint a6;
              jboolean a7;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKKDDIZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, ::org::orekit::estimation::measurements::AngularAzEl::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularAzEl::parameters_, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::estimation::measurements::AngularRaDec a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::estimation::measurements::AngularRaDec a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::estimation::measurements::AngularRaDec a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              jdouble a5;
              jint a6;
              jboolean a7;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kKKKDDIZ", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, ::org::orekit::estimation::measurements::AngularRaDec::initializeClass, &a0, &a1, &p1, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a2, &p2, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a3, &p3, ::org::orekit::estimation::measurements::t_AngularRaDec::parameters_, &a4, &a5, &a6, &a7))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 12:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a6((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a7((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a8((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a9((jobject) NULL);
              jdouble a10;
              jdouble a11;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkkkkDD", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            break;
           case 14:
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a5((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a6((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a7((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a8((jobject) NULL);
              ::org::orekit::time::AbsoluteDate a9((jobject) NULL);
              jdouble a10;
              jdouble a11;
              jint a12;
              jboolean a13;
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "kkkkkkkkkkDDIZ", ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12, &a13))
              {
                OBJ_CALL(result = self->object.estimate(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "estimate", args);
          return NULL;
        }

        static PyObject *t_IodGooding_getRange1(t_IodGooding *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRange1());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_IodGooding_getRange2(t_IodGooding *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRange2());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_IodGooding_getRange3(t_IodGooding *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRange3());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_IodGooding_get__range1(t_IodGooding *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRange1());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_IodGooding_get__range2(t_IodGooding *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRange2());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_IodGooding_get__range3(t_IodGooding *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRange3());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonNormalizedSphericalHarmonicsProvider.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonNormalizedSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *PythonNormalizedSphericalHarmonicsProvider::mids$ = NULL;
          bool PythonNormalizedSphericalHarmonicsProvider::live$ = false;

          jclass PythonNormalizedSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonNormalizedSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAe_dff5885c2c873297] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_85703d13e302437e] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_c68abf1ca1fc273e] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_onDate_58c777cdeb3bd479] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonNormalizedSphericalHarmonicsProvider::PythonNormalizedSphericalHarmonicsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonNormalizedSphericalHarmonicsProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonNormalizedSphericalHarmonicsProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonNormalizedSphericalHarmonicsProvider::pythonExtension(jlong a0) const
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
      namespace gravity {
        namespace potential {
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonNormalizedSphericalHarmonicsProvider_init_(t_PythonNormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_finalize(t_PythonNormalizedSphericalHarmonicsProvider *self);
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_pythonExtension(t_PythonNormalizedSphericalHarmonicsProvider *self, PyObject *args);
          static jdouble JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonNormalizedSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_get__self(t_PythonNormalizedSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_PythonNormalizedSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonNormalizedSphericalHarmonicsProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonNormalizedSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_PythonNormalizedSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNormalizedSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonNormalizedSphericalHarmonicsProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonNormalizedSphericalHarmonicsProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonNormalizedSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_PythonNormalizedSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_PythonNormalizedSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_PythonNormalizedSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonNormalizedSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonNormalizedSphericalHarmonicsProvider, t_PythonNormalizedSphericalHarmonicsProvider, PythonNormalizedSphericalHarmonicsProvider);

          void t_PythonNormalizedSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonNormalizedSphericalHarmonicsProvider), &PY_TYPE_DEF(PythonNormalizedSphericalHarmonicsProvider), module, "PythonNormalizedSphericalHarmonicsProvider", 1);
          }

          void t_PythonNormalizedSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNormalizedSphericalHarmonicsProvider), "class_", make_descriptor(PythonNormalizedSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNormalizedSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_PythonNormalizedSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonNormalizedSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonNormalizedSphericalHarmonicsProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getAe", "()D", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getAe0 },
              { "getMaxDegree", "()I", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getMaxDegree1 },
              { "getMaxOrder", "()I", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getMaxOrder2 },
              { "getMu", "()D", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getMu3 },
              { "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getReferenceDate4 },
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonNormalizedSphericalHarmonicsProvider_getTideSystem5 },
              { "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics;", (void *) t_PythonNormalizedSphericalHarmonicsProvider_onDate6 },
              { "pythonDecRef", "()V", (void *) t_PythonNormalizedSphericalHarmonicsProvider_pythonDecRef7 },
            };
            env->registerNatives(cls, methods, 8);
          }

          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonNormalizedSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_PythonNormalizedSphericalHarmonicsProvider::wrap_Object(PythonNormalizedSphericalHarmonicsProvider(((t_PythonNormalizedSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonNormalizedSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonNormalizedSphericalHarmonicsProvider_init_(t_PythonNormalizedSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonNormalizedSphericalHarmonicsProvider object((jobject) NULL);

            INT_CALL(object = PythonNormalizedSphericalHarmonicsProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_finalize(t_PythonNormalizedSphericalHarmonicsProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_pythonExtension(t_PythonNormalizedSphericalHarmonicsProvider *self, PyObject *args)
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

          static jdouble JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getAe", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAe", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jint JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxDegree", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxDegree", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jint JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxOrder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxOrder", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jdouble JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
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

          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getReferenceDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getReferenceDate", result);
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

          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getTideSystem", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &value))
            {
              throwTypeError("getTideSystem", result);
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

          static jobject JNICALL t_PythonNormalizedSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "onDate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::NormalizedSphericalHarmonicsProvider$NormalizedSphericalHarmonics::initializeClass, &value))
            {
              throwTypeError("onDate", result);
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

          static void JNICALL t_PythonNormalizedSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonNormalizedSphericalHarmonicsProvider::mids$[PythonNormalizedSphericalHarmonicsProvider::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonNormalizedSphericalHarmonicsProvider_get__self(t_PythonNormalizedSphericalHarmonicsProvider *self, void *data)
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
#include "org/orekit/gnss/metric/parser/PythonAbstractEncodedMessage.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *PythonAbstractEncodedMessage::class$ = NULL;
          jmethodID *PythonAbstractEncodedMessage::mids$ = NULL;
          bool PythonAbstractEncodedMessage::live$ = false;

          jclass PythonAbstractEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/PythonAbstractEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_fetchByte_570ce0828f81a2c1] = env->getMethodID(cls, "fetchByte", "()I");
              mids$[mid_finalize_0fa09c18fee449d5] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_0fa09c18fee449d5] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_492808a339bfa35f] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_3a8e7649f31fdb20] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonAbstractEncodedMessage::PythonAbstractEncodedMessage() : ::org::orekit::gnss::metric::parser::AbstractEncodedMessage(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          void PythonAbstractEncodedMessage::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_0fa09c18fee449d5]);
          }

          jlong PythonAbstractEncodedMessage::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_492808a339bfa35f]);
          }

          void PythonAbstractEncodedMessage::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_PythonAbstractEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonAbstractEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonAbstractEncodedMessage_init_(t_PythonAbstractEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonAbstractEncodedMessage_finalize(t_PythonAbstractEncodedMessage *self);
          static PyObject *t_PythonAbstractEncodedMessage_pythonExtension(t_PythonAbstractEncodedMessage *self, PyObject *args);
          static jint JNICALL t_PythonAbstractEncodedMessage_fetchByte0(JNIEnv *jenv, jobject jobj);
          static void JNICALL t_PythonAbstractEncodedMessage_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonAbstractEncodedMessage_get__self(t_PythonAbstractEncodedMessage *self, void *data);
          static PyGetSetDef t_PythonAbstractEncodedMessage__fields_[] = {
            DECLARE_GET_FIELD(t_PythonAbstractEncodedMessage, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonAbstractEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_PythonAbstractEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonAbstractEncodedMessage, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonAbstractEncodedMessage, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonAbstractEncodedMessage)[] = {
            { Py_tp_methods, t_PythonAbstractEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_PythonAbstractEncodedMessage_init_ },
            { Py_tp_getset, t_PythonAbstractEncodedMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonAbstractEncodedMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::metric::parser::AbstractEncodedMessage),
            NULL
          };

          DEFINE_TYPE(PythonAbstractEncodedMessage, t_PythonAbstractEncodedMessage, PythonAbstractEncodedMessage);

          void t_PythonAbstractEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonAbstractEncodedMessage), &PY_TYPE_DEF(PythonAbstractEncodedMessage), module, "PythonAbstractEncodedMessage", 1);
          }

          void t_PythonAbstractEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncodedMessage), "class_", make_descriptor(PythonAbstractEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncodedMessage), "wrapfn_", make_descriptor(t_PythonAbstractEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractEncodedMessage), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonAbstractEncodedMessage::initializeClass);
            JNINativeMethod methods[] = {
              { "fetchByte", "()I", (void *) t_PythonAbstractEncodedMessage_fetchByte0 },
              { "pythonDecRef", "()V", (void *) t_PythonAbstractEncodedMessage_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonAbstractEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonAbstractEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_PythonAbstractEncodedMessage::wrap_Object(PythonAbstractEncodedMessage(((t_PythonAbstractEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_PythonAbstractEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonAbstractEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonAbstractEncodedMessage_init_(t_PythonAbstractEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            PythonAbstractEncodedMessage object((jobject) NULL);

            INT_CALL(object = PythonAbstractEncodedMessage());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonAbstractEncodedMessage_finalize(t_PythonAbstractEncodedMessage *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonAbstractEncodedMessage_pythonExtension(t_PythonAbstractEncodedMessage *self, PyObject *args)
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

          static jint JNICALL t_PythonAbstractEncodedMessage_fetchByte0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncodedMessage::mids$[PythonAbstractEncodedMessage::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "fetchByte", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("fetchByte", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static void JNICALL t_PythonAbstractEncodedMessage_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractEncodedMessage::mids$[PythonAbstractEncodedMessage::mid_pythonExtension_492808a339bfa35f]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonAbstractEncodedMessage::mids$[PythonAbstractEncodedMessage::mid_pythonExtension_3a8e7649f31fdb20], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonAbstractEncodedMessage_get__self(t_PythonAbstractEncodedMessage *self, void *data)
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
#include "org/orekit/files/ccsds/ndm/cdm/ODParametersKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParameters.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParametersKey.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *ODParametersKey::class$ = NULL;
            jmethodID *ODParametersKey::mids$ = NULL;
            bool ODParametersKey::live$ = false;
            ODParametersKey *ODParametersKey::ACTUAL_OD_SPAN = NULL;
            ODParametersKey *ODParametersKey::COMMENT = NULL;
            ODParametersKey *ODParametersKey::OBS_AVAILABLE = NULL;
            ODParametersKey *ODParametersKey::OBS_USED = NULL;
            ODParametersKey *ODParametersKey::OD_EPOCH = NULL;
            ODParametersKey *ODParametersKey::RECOMMENDED_OD_SPAN = NULL;
            ODParametersKey *ODParametersKey::RESIDUALS_ACCEPTED = NULL;
            ODParametersKey *ODParametersKey::TIME_LASTOB_END = NULL;
            ODParametersKey *ODParametersKey::TIME_LASTOB_START = NULL;
            ODParametersKey *ODParametersKey::TRACKS_AVAILABLE = NULL;
            ODParametersKey *ODParametersKey::TRACKS_USED = NULL;
            ODParametersKey *ODParametersKey::WEIGHTED_RMS = NULL;

            jclass ODParametersKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/ODParametersKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_3c0f9f6727df314d] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;)Z");
                mids$[mid_valueOf_68da3827ece4c36a] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;");
                mids$[mid_values_5b2dff51eb53745d] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                ACTUAL_OD_SPAN = new ODParametersKey(env->getStaticObjectField(cls, "ACTUAL_OD_SPAN", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                COMMENT = new ODParametersKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                OBS_AVAILABLE = new ODParametersKey(env->getStaticObjectField(cls, "OBS_AVAILABLE", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                OBS_USED = new ODParametersKey(env->getStaticObjectField(cls, "OBS_USED", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                OD_EPOCH = new ODParametersKey(env->getStaticObjectField(cls, "OD_EPOCH", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                RECOMMENDED_OD_SPAN = new ODParametersKey(env->getStaticObjectField(cls, "RECOMMENDED_OD_SPAN", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                RESIDUALS_ACCEPTED = new ODParametersKey(env->getStaticObjectField(cls, "RESIDUALS_ACCEPTED", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                TIME_LASTOB_END = new ODParametersKey(env->getStaticObjectField(cls, "TIME_LASTOB_END", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                TIME_LASTOB_START = new ODParametersKey(env->getStaticObjectField(cls, "TIME_LASTOB_START", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                TRACKS_AVAILABLE = new ODParametersKey(env->getStaticObjectField(cls, "TRACKS_AVAILABLE", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                TRACKS_USED = new ODParametersKey(env->getStaticObjectField(cls, "TRACKS_USED", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                WEIGHTED_RMS = new ODParametersKey(env->getStaticObjectField(cls, "WEIGHTED_RMS", "Lorg/orekit/files/ccsds/ndm/cdm/ODParametersKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean ODParametersKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_3c0f9f6727df314d], a0.this$, a1.this$, a2.this$);
            }

            ODParametersKey ODParametersKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return ODParametersKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_68da3827ece4c36a], a0.this$));
            }

            JArray< ODParametersKey > ODParametersKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< ODParametersKey >(env->callStaticObjectMethod(cls, mids$[mid_values_5b2dff51eb53745d]));
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
            static PyObject *t_ODParametersKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ODParametersKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ODParametersKey_of_(t_ODParametersKey *self, PyObject *args);
            static PyObject *t_ODParametersKey_process(t_ODParametersKey *self, PyObject *args);
            static PyObject *t_ODParametersKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_ODParametersKey_values(PyTypeObject *type);
            static PyObject *t_ODParametersKey_get__parameters_(t_ODParametersKey *self, void *data);
            static PyGetSetDef t_ODParametersKey__fields_[] = {
              DECLARE_GET_FIELD(t_ODParametersKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_ODParametersKey__methods_[] = {
              DECLARE_METHOD(t_ODParametersKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParametersKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ODParametersKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_ODParametersKey, process, METH_VARARGS),
              DECLARE_METHOD(t_ODParametersKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_ODParametersKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ODParametersKey)[] = {
              { Py_tp_methods, t_ODParametersKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_ODParametersKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ODParametersKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(ODParametersKey, t_ODParametersKey, ODParametersKey);
            PyObject *t_ODParametersKey::wrap_Object(const ODParametersKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ODParametersKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ODParametersKey *self = (t_ODParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_ODParametersKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_ODParametersKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_ODParametersKey *self = (t_ODParametersKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_ODParametersKey::install(PyObject *module)
            {
              installType(&PY_TYPE(ODParametersKey), &PY_TYPE_DEF(ODParametersKey), module, "ODParametersKey", 0);
            }

            void t_ODParametersKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "class_", make_descriptor(ODParametersKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "wrapfn_", make_descriptor(t_ODParametersKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(ODParametersKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "ACTUAL_OD_SPAN", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::ACTUAL_OD_SPAN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "COMMENT", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::COMMENT)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "OBS_AVAILABLE", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::OBS_AVAILABLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "OBS_USED", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::OBS_USED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "OD_EPOCH", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::OD_EPOCH)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "RECOMMENDED_OD_SPAN", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::RECOMMENDED_OD_SPAN)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "RESIDUALS_ACCEPTED", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::RESIDUALS_ACCEPTED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "TIME_LASTOB_END", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::TIME_LASTOB_END)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "TIME_LASTOB_START", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::TIME_LASTOB_START)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "TRACKS_AVAILABLE", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::TRACKS_AVAILABLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "TRACKS_USED", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::TRACKS_USED)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ODParametersKey), "WEIGHTED_RMS", make_descriptor(t_ODParametersKey::wrap_Object(*ODParametersKey::WEIGHTED_RMS)));
            }

            static PyObject *t_ODParametersKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ODParametersKey::initializeClass, 1)))
                return NULL;
              return t_ODParametersKey::wrap_Object(ODParametersKey(((t_ODParametersKey *) arg)->object.this$));
            }
            static PyObject *t_ODParametersKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ODParametersKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ODParametersKey_of_(t_ODParametersKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_ODParametersKey_process(t_ODParametersKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::cdm::ODParameters a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_ODParametersKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              ODParametersKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ODParametersKey::valueOf(a0));
                return t_ODParametersKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_ODParametersKey_values(PyTypeObject *type)
            {
              JArray< ODParametersKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::cdm::ODParametersKey::values());
              return JArray<jobject>(result.this$).wrap(t_ODParametersKey::wrap_jobject);
            }
            static PyObject *t_ODParametersKey_get__parameters_(t_ODParametersKey *self, void *data)
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
#include "org/hipparchus/stat/descriptive/rank/Median.h"
#include "org/hipparchus/stat/descriptive/rank/Percentile$EstimationType.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/stat/descriptive/rank/Median.h"
#include "org/hipparchus/util/KthSelector.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/ranking/NaNStrategy.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace rank {

          ::java::lang::Class *Median::class$ = NULL;
          jmethodID *Median::mids$ = NULL;
          bool Median::live$ = false;

          jclass Median::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/rank/Median");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_copy_36bb62a49d7ab711] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/rank/Median;");
              mids$[mid_evaluate_556bede10daac330] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_getEstimationType_ca8426dd6c9a49d0] = env->getMethodID(cls, "getEstimationType", "()Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;");
              mids$[mid_getKthSelector_f697e2e90a72747d] = env->getMethodID(cls, "getKthSelector", "()Lorg/hipparchus/util/KthSelector;");
              mids$[mid_getNaNStrategy_884e0da06e21afce] = env->getMethodID(cls, "getNaNStrategy", "()Lorg/hipparchus/stat/ranking/NaNStrategy;");
              mids$[mid_withEstimationType_d01bcc37271b909f] = env->getMethodID(cls, "withEstimationType", "(Lorg/hipparchus/stat/descriptive/rank/Percentile$EstimationType;)Lorg/hipparchus/stat/descriptive/rank/Median;");
              mids$[mid_withKthSelector_b70e5e7236ae1b3c] = env->getMethodID(cls, "withKthSelector", "(Lorg/hipparchus/util/KthSelector;)Lorg/hipparchus/stat/descriptive/rank/Median;");
              mids$[mid_withNaNStrategy_f18b8dbf01717f4c] = env->getMethodID(cls, "withNaNStrategy", "(Lorg/hipparchus/stat/ranking/NaNStrategy;)Lorg/hipparchus/stat/descriptive/rank/Median;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Median::Median() : ::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          Median Median::copy() const
          {
            return Median(env->callObjectMethod(this$, mids$[mid_copy_36bb62a49d7ab711]));
          }

          jdouble Median::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_556bede10daac330], a0.this$, a1, a2);
          }

          ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType Median::getEstimationType() const
          {
            return ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType(env->callObjectMethod(this$, mids$[mid_getEstimationType_ca8426dd6c9a49d0]));
          }

          ::org::hipparchus::util::KthSelector Median::getKthSelector() const
          {
            return ::org::hipparchus::util::KthSelector(env->callObjectMethod(this$, mids$[mid_getKthSelector_f697e2e90a72747d]));
          }

          ::org::hipparchus::stat::ranking::NaNStrategy Median::getNaNStrategy() const
          {
            return ::org::hipparchus::stat::ranking::NaNStrategy(env->callObjectMethod(this$, mids$[mid_getNaNStrategy_884e0da06e21afce]));
          }

          Median Median::withEstimationType(const ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType & a0) const
          {
            return Median(env->callObjectMethod(this$, mids$[mid_withEstimationType_d01bcc37271b909f], a0.this$));
          }

          Median Median::withKthSelector(const ::org::hipparchus::util::KthSelector & a0) const
          {
            return Median(env->callObjectMethod(this$, mids$[mid_withKthSelector_b70e5e7236ae1b3c], a0.this$));
          }

          Median Median::withNaNStrategy(const ::org::hipparchus::stat::ranking::NaNStrategy & a0) const
          {
            return Median(env->callObjectMethod(this$, mids$[mid_withNaNStrategy_f18b8dbf01717f4c], a0.this$));
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
          static PyObject *t_Median_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Median_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Median_init_(t_Median *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Median_copy(t_Median *self, PyObject *args);
          static PyObject *t_Median_evaluate(t_Median *self, PyObject *args);
          static PyObject *t_Median_getEstimationType(t_Median *self);
          static PyObject *t_Median_getKthSelector(t_Median *self);
          static PyObject *t_Median_getNaNStrategy(t_Median *self);
          static PyObject *t_Median_withEstimationType(t_Median *self, PyObject *arg);
          static PyObject *t_Median_withKthSelector(t_Median *self, PyObject *arg);
          static PyObject *t_Median_withNaNStrategy(t_Median *self, PyObject *arg);
          static PyObject *t_Median_get__estimationType(t_Median *self, void *data);
          static PyObject *t_Median_get__kthSelector(t_Median *self, void *data);
          static PyObject *t_Median_get__naNStrategy(t_Median *self, void *data);
          static PyGetSetDef t_Median__fields_[] = {
            DECLARE_GET_FIELD(t_Median, estimationType),
            DECLARE_GET_FIELD(t_Median, kthSelector),
            DECLARE_GET_FIELD(t_Median, naNStrategy),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Median__methods_[] = {
            DECLARE_METHOD(t_Median, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Median, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Median, copy, METH_VARARGS),
            DECLARE_METHOD(t_Median, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Median, getEstimationType, METH_NOARGS),
            DECLARE_METHOD(t_Median, getKthSelector, METH_NOARGS),
            DECLARE_METHOD(t_Median, getNaNStrategy, METH_NOARGS),
            DECLARE_METHOD(t_Median, withEstimationType, METH_O),
            DECLARE_METHOD(t_Median, withKthSelector, METH_O),
            DECLARE_METHOD(t_Median, withNaNStrategy, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Median)[] = {
            { Py_tp_methods, t_Median__methods_ },
            { Py_tp_init, (void *) t_Median_init_ },
            { Py_tp_getset, t_Median__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Median)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Median, t_Median, Median);

          void t_Median::install(PyObject *module)
          {
            installType(&PY_TYPE(Median), &PY_TYPE_DEF(Median), module, "Median", 0);
          }

          void t_Median::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Median), "class_", make_descriptor(Median::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Median), "wrapfn_", make_descriptor(t_Median::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Median), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Median_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Median::initializeClass, 1)))
              return NULL;
            return t_Median::wrap_Object(Median(((t_Median *) arg)->object.this$));
          }
          static PyObject *t_Median_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Median::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Median_init_(t_Median *self, PyObject *args, PyObject *kwds)
          {
            Median object((jobject) NULL);

            INT_CALL(object = Median());
            self->object = object;

            return 0;
          }

          static PyObject *t_Median_copy(t_Median *self, PyObject *args)
          {
            Median result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Median::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Median), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Median_evaluate(t_Median *self, PyObject *args)
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

            return callSuper(PY_TYPE(Median), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Median_getEstimationType(t_Median *self)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getEstimationType());
            return ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::wrap_Object(result);
          }

          static PyObject *t_Median_getKthSelector(t_Median *self)
          {
            ::org::hipparchus::util::KthSelector result((jobject) NULL);
            OBJ_CALL(result = self->object.getKthSelector());
            return ::org::hipparchus::util::t_KthSelector::wrap_Object(result);
          }

          static PyObject *t_Median_getNaNStrategy(t_Median *self)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy result((jobject) NULL);
            OBJ_CALL(result = self->object.getNaNStrategy());
            return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(result);
          }

          static PyObject *t_Median_withEstimationType(t_Median *self, PyObject *arg)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType a0((jobject) NULL);
            PyTypeObject **p0;
            Median result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType::initializeClass, &a0, &p0, ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::parameters_))
            {
              OBJ_CALL(result = self->object.withEstimationType(a0));
              return t_Median::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withEstimationType", arg);
            return NULL;
          }

          static PyObject *t_Median_withKthSelector(t_Median *self, PyObject *arg)
          {
            ::org::hipparchus::util::KthSelector a0((jobject) NULL);
            Median result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::util::KthSelector::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.withKthSelector(a0));
              return t_Median::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withKthSelector", arg);
            return NULL;
          }

          static PyObject *t_Median_withNaNStrategy(t_Median *self, PyObject *arg)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy a0((jobject) NULL);
            PyTypeObject **p0;
            Median result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::stat::ranking::NaNStrategy::initializeClass, &a0, &p0, ::org::hipparchus::stat::ranking::t_NaNStrategy::parameters_))
            {
              OBJ_CALL(result = self->object.withNaNStrategy(a0));
              return t_Median::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "withNaNStrategy", arg);
            return NULL;
          }

          static PyObject *t_Median_get__estimationType(t_Median *self, void *data)
          {
            ::org::hipparchus::stat::descriptive::rank::Percentile$EstimationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getEstimationType());
            return ::org::hipparchus::stat::descriptive::rank::t_Percentile$EstimationType::wrap_Object(value);
          }

          static PyObject *t_Median_get__kthSelector(t_Median *self, void *data)
          {
            ::org::hipparchus::util::KthSelector value((jobject) NULL);
            OBJ_CALL(value = self->object.getKthSelector());
            return ::org::hipparchus::util::t_KthSelector::wrap_Object(value);
          }

          static PyObject *t_Median_get__naNStrategy(t_Median *self, void *data)
          {
            ::org::hipparchus::stat::ranking::NaNStrategy value((jobject) NULL);
            OBJ_CALL(value = self->object.getNaNStrategy());
            return ::org::hipparchus::stat::ranking::t_NaNStrategy::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/MelbourneWubbenaCombination.h"
#include "org/orekit/estimation/measurements/gnss/MeasurementCombination.h"
#include "org/orekit/files/rinex/observation/ObservationDataSet.h"
#include "org/orekit/estimation/measurements/gnss/CombinedObservationDataSet.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *MelbourneWubbenaCombination::class$ = NULL;
          jmethodID *MelbourneWubbenaCombination::mids$ = NULL;
          bool MelbourneWubbenaCombination::live$ = false;

          jclass MelbourneWubbenaCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/MelbourneWubbenaCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_combine_38fa214a925f8e7a] = env->getMethodID(cls, "combine", "(Lorg/orekit/files/rinex/observation/ObservationDataSet;)Lorg/orekit/estimation/measurements/gnss/CombinedObservationDataSet;");
              mids$[mid_getName_11b109bd155ca898] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet MelbourneWubbenaCombination::combine(const ::org::orekit::files::rinex::observation::ObservationDataSet & a0) const
          {
            return ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet(env->callObjectMethod(this$, mids$[mid_combine_38fa214a925f8e7a], a0.this$));
          }

          ::java::lang::String MelbourneWubbenaCombination::getName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_11b109bd155ca898]));
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
          static PyObject *t_MelbourneWubbenaCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MelbourneWubbenaCombination_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_MelbourneWubbenaCombination_combine(t_MelbourneWubbenaCombination *self, PyObject *arg);
          static PyObject *t_MelbourneWubbenaCombination_getName(t_MelbourneWubbenaCombination *self);
          static PyObject *t_MelbourneWubbenaCombination_get__name(t_MelbourneWubbenaCombination *self, void *data);
          static PyGetSetDef t_MelbourneWubbenaCombination__fields_[] = {
            DECLARE_GET_FIELD(t_MelbourneWubbenaCombination, name),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_MelbourneWubbenaCombination__methods_[] = {
            DECLARE_METHOD(t_MelbourneWubbenaCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MelbourneWubbenaCombination, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_MelbourneWubbenaCombination, combine, METH_O),
            DECLARE_METHOD(t_MelbourneWubbenaCombination, getName, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(MelbourneWubbenaCombination)[] = {
            { Py_tp_methods, t_MelbourneWubbenaCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_MelbourneWubbenaCombination__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(MelbourneWubbenaCombination)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(MelbourneWubbenaCombination, t_MelbourneWubbenaCombination, MelbourneWubbenaCombination);

          void t_MelbourneWubbenaCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(MelbourneWubbenaCombination), &PY_TYPE_DEF(MelbourneWubbenaCombination), module, "MelbourneWubbenaCombination", 0);
          }

          void t_MelbourneWubbenaCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(MelbourneWubbenaCombination), "class_", make_descriptor(MelbourneWubbenaCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MelbourneWubbenaCombination), "wrapfn_", make_descriptor(t_MelbourneWubbenaCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(MelbourneWubbenaCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_MelbourneWubbenaCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, MelbourneWubbenaCombination::initializeClass, 1)))
              return NULL;
            return t_MelbourneWubbenaCombination::wrap_Object(MelbourneWubbenaCombination(((t_MelbourneWubbenaCombination *) arg)->object.this$));
          }
          static PyObject *t_MelbourneWubbenaCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, MelbourneWubbenaCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_MelbourneWubbenaCombination_combine(t_MelbourneWubbenaCombination *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::observation::ObservationDataSet a0((jobject) NULL);
            ::org::orekit::estimation::measurements::gnss::CombinedObservationDataSet result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::observation::ObservationDataSet::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.combine(a0));
              return ::org::orekit::estimation::measurements::gnss::t_CombinedObservationDataSet::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "combine", arg);
            return NULL;
          }

          static PyObject *t_MelbourneWubbenaCombination_getName(t_MelbourneWubbenaCombination *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          static PyObject *t_MelbourneWubbenaCombination_get__name(t_MelbourneWubbenaCombination *self, void *data)
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
#include "org/hipparchus/geometry/partitioning/AbstractSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/partitioning/Transform.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/geometry/partitioning/AbstractSubHyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Space.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *AbstractSubHyperplane::class$ = NULL;
        jmethodID *AbstractSubHyperplane::mids$ = NULL;
        bool AbstractSubHyperplane::live$ = false;

        jclass AbstractSubHyperplane::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/AbstractSubHyperplane");

            mids$ = new jmethodID[max_mid];
            mids$[mid_applyTransform_057557b1095c40fc] = env->getMethodID(cls, "applyTransform", "(Lorg/hipparchus/geometry/partitioning/Transform;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");
            mids$[mid_copySelf_4adeb675d32d6838] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");
            mids$[mid_getHyperplane_a9ae8c67d757c80a] = env->getMethodID(cls, "getHyperplane", "()Lorg/hipparchus/geometry/partitioning/Hyperplane;");
            mids$[mid_getRemainingRegion_b72f8ac992e26582] = env->getMethodID(cls, "getRemainingRegion", "()Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_getSize_dff5885c2c873297] = env->getMethodID(cls, "getSize", "()D");
            mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
            mids$[mid_reunite_3632c8d043b291e1] = env->getMethodID(cls, "reunite", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");
            mids$[mid_split_905725a56f20360c] = env->getMethodID(cls, "split", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane$SplitSubHyperplane;");
            mids$[mid_buildNew_802b885e8f150523] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;Lorg/hipparchus/geometry/partitioning/Region;)Lorg/hipparchus/geometry/partitioning/AbstractSubHyperplane;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AbstractSubHyperplane AbstractSubHyperplane::applyTransform(const ::org::hipparchus::geometry::partitioning::Transform & a0) const
        {
          return AbstractSubHyperplane(env->callObjectMethod(this$, mids$[mid_applyTransform_057557b1095c40fc], a0.this$));
        }

        AbstractSubHyperplane AbstractSubHyperplane::copySelf() const
        {
          return AbstractSubHyperplane(env->callObjectMethod(this$, mids$[mid_copySelf_4adeb675d32d6838]));
        }

        ::org::hipparchus::geometry::partitioning::Hyperplane AbstractSubHyperplane::getHyperplane() const
        {
          return ::org::hipparchus::geometry::partitioning::Hyperplane(env->callObjectMethod(this$, mids$[mid_getHyperplane_a9ae8c67d757c80a]));
        }

        ::org::hipparchus::geometry::partitioning::Region AbstractSubHyperplane::getRemainingRegion() const
        {
          return ::org::hipparchus::geometry::partitioning::Region(env->callObjectMethod(this$, mids$[mid_getRemainingRegion_b72f8ac992e26582]));
        }

        jdouble AbstractSubHyperplane::getSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSize_dff5885c2c873297]);
        }

        jboolean AbstractSubHyperplane::isEmpty() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
        }

        AbstractSubHyperplane AbstractSubHyperplane::reunite(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0) const
        {
          return AbstractSubHyperplane(env->callObjectMethod(this$, mids$[mid_reunite_3632c8d043b291e1], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane AbstractSubHyperplane::split(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane(env->callObjectMethod(this$, mids$[mid_split_905725a56f20360c], a0.this$));
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
        static PyObject *t_AbstractSubHyperplane_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractSubHyperplane_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractSubHyperplane_of_(t_AbstractSubHyperplane *self, PyObject *args);
        static PyObject *t_AbstractSubHyperplane_applyTransform(t_AbstractSubHyperplane *self, PyObject *arg);
        static PyObject *t_AbstractSubHyperplane_copySelf(t_AbstractSubHyperplane *self);
        static PyObject *t_AbstractSubHyperplane_getHyperplane(t_AbstractSubHyperplane *self);
        static PyObject *t_AbstractSubHyperplane_getRemainingRegion(t_AbstractSubHyperplane *self);
        static PyObject *t_AbstractSubHyperplane_getSize(t_AbstractSubHyperplane *self);
        static PyObject *t_AbstractSubHyperplane_isEmpty(t_AbstractSubHyperplane *self);
        static PyObject *t_AbstractSubHyperplane_reunite(t_AbstractSubHyperplane *self, PyObject *arg);
        static PyObject *t_AbstractSubHyperplane_split(t_AbstractSubHyperplane *self, PyObject *arg);
        static PyObject *t_AbstractSubHyperplane_get__empty(t_AbstractSubHyperplane *self, void *data);
        static PyObject *t_AbstractSubHyperplane_get__hyperplane(t_AbstractSubHyperplane *self, void *data);
        static PyObject *t_AbstractSubHyperplane_get__remainingRegion(t_AbstractSubHyperplane *self, void *data);
        static PyObject *t_AbstractSubHyperplane_get__size(t_AbstractSubHyperplane *self, void *data);
        static PyObject *t_AbstractSubHyperplane_get__parameters_(t_AbstractSubHyperplane *self, void *data);
        static PyGetSetDef t_AbstractSubHyperplane__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractSubHyperplane, empty),
          DECLARE_GET_FIELD(t_AbstractSubHyperplane, hyperplane),
          DECLARE_GET_FIELD(t_AbstractSubHyperplane, remainingRegion),
          DECLARE_GET_FIELD(t_AbstractSubHyperplane, size),
          DECLARE_GET_FIELD(t_AbstractSubHyperplane, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractSubHyperplane__methods_[] = {
          DECLARE_METHOD(t_AbstractSubHyperplane, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractSubHyperplane, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractSubHyperplane, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, applyTransform, METH_O),
          DECLARE_METHOD(t_AbstractSubHyperplane, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, getHyperplane, METH_NOARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, getRemainingRegion, METH_NOARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, getSize, METH_NOARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, isEmpty, METH_NOARGS),
          DECLARE_METHOD(t_AbstractSubHyperplane, reunite, METH_O),
          DECLARE_METHOD(t_AbstractSubHyperplane, split, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractSubHyperplane)[] = {
          { Py_tp_methods, t_AbstractSubHyperplane__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractSubHyperplane__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractSubHyperplane)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractSubHyperplane, t_AbstractSubHyperplane, AbstractSubHyperplane);
        PyObject *t_AbstractSubHyperplane::wrap_Object(const AbstractSubHyperplane& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractSubHyperplane::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractSubHyperplane *self = (t_AbstractSubHyperplane *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_AbstractSubHyperplane::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_AbstractSubHyperplane::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractSubHyperplane *self = (t_AbstractSubHyperplane *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_AbstractSubHyperplane::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractSubHyperplane), &PY_TYPE_DEF(AbstractSubHyperplane), module, "AbstractSubHyperplane", 0);
        }

        void t_AbstractSubHyperplane::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSubHyperplane), "class_", make_descriptor(AbstractSubHyperplane::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSubHyperplane), "wrapfn_", make_descriptor(t_AbstractSubHyperplane::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSubHyperplane), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractSubHyperplane_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractSubHyperplane::initializeClass, 1)))
            return NULL;
          return t_AbstractSubHyperplane::wrap_Object(AbstractSubHyperplane(((t_AbstractSubHyperplane *) arg)->object.this$));
        }
        static PyObject *t_AbstractSubHyperplane_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractSubHyperplane::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractSubHyperplane_of_(t_AbstractSubHyperplane *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractSubHyperplane_applyTransform(t_AbstractSubHyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Transform a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractSubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Transform::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Transform::parameters_))
          {
            OBJ_CALL(result = self->object.applyTransform(a0));
            return t_AbstractSubHyperplane::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "applyTransform", arg);
          return NULL;
        }

        static PyObject *t_AbstractSubHyperplane_copySelf(t_AbstractSubHyperplane *self)
        {
          AbstractSubHyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_AbstractSubHyperplane::wrap_Object(result, self->parameters[0], self->parameters[1]);
        }

        static PyObject *t_AbstractSubHyperplane_getHyperplane(t_AbstractSubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane result((jobject) NULL);
          OBJ_CALL(result = self->object.getHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_AbstractSubHyperplane_getRemainingRegion(t_AbstractSubHyperplane *self)
        {
          ::org::hipparchus::geometry::partitioning::Region result((jobject) NULL);
          OBJ_CALL(result = self->object.getRemainingRegion());
          return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_AbstractSubHyperplane_getSize(t_AbstractSubHyperplane *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractSubHyperplane_isEmpty(t_AbstractSubHyperplane *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isEmpty());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractSubHyperplane_reunite(t_AbstractSubHyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          AbstractSubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.reunite(a0));
            return t_AbstractSubHyperplane::wrap_Object(result, self->parameters[0], self->parameters[1]);
          }

          PyErr_SetArgsError((PyObject *) self, "reunite", arg);
          return NULL;
        }

        static PyObject *t_AbstractSubHyperplane_split(t_AbstractSubHyperplane *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.split(a0));
            return ::org::hipparchus::geometry::partitioning::t_SubHyperplane$SplitSubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "split", arg);
          return NULL;
        }
        static PyObject *t_AbstractSubHyperplane_get__parameters_(t_AbstractSubHyperplane *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractSubHyperplane_get__empty(t_AbstractSubHyperplane *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEmpty());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractSubHyperplane_get__hyperplane(t_AbstractSubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::Hyperplane value((jobject) NULL);
          OBJ_CALL(value = self->object.getHyperplane());
          return ::org::hipparchus::geometry::partitioning::t_Hyperplane::wrap_Object(value);
        }

        static PyObject *t_AbstractSubHyperplane_get__remainingRegion(t_AbstractSubHyperplane *self, void *data)
        {
          ::org::hipparchus::geometry::partitioning::Region value((jobject) NULL);
          OBJ_CALL(value = self->object.getRemainingRegion());
          return ::org::hipparchus::geometry::partitioning::t_Region::wrap_Object(value);
        }

        static PyObject *t_AbstractSubHyperplane_get__size(t_AbstractSubHyperplane *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSize());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeSpanMap$Transition.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeSpanMap$Span::class$ = NULL;
      jmethodID *TimeSpanMap$Span::mids$ = NULL;
      bool TimeSpanMap$Span::live$ = false;

      jclass TimeSpanMap$Span::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeSpanMap$Span");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getData_4d26fd885228c716] = env->getMethodID(cls, "getData", "()Ljava/lang/Object;");
          mids$[mid_getEnd_85703d13e302437e] = env->getMethodID(cls, "getEnd", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getEndTransition_75c9888155918ff9] = env->getMethodID(cls, "getEndTransition", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_getStart_85703d13e302437e] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getStartTransition_75c9888155918ff9] = env->getMethodID(cls, "getStartTransition", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_next_971209c2bf2033e7] = env->getMethodID(cls, "next", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_previous_971209c2bf2033e7] = env->getMethodID(cls, "previous", "()Lorg/orekit/utils/TimeSpanMap$Span;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::Object TimeSpanMap$Span::getData() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getData_4d26fd885228c716]));
      }

      ::org::orekit::time::AbsoluteDate TimeSpanMap$Span::getEnd() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEnd_85703d13e302437e]));
      }

      ::org::orekit::utils::TimeSpanMap$Transition TimeSpanMap$Span::getEndTransition() const
      {
        return ::org::orekit::utils::TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_getEndTransition_75c9888155918ff9]));
      }

      ::org::orekit::time::AbsoluteDate TimeSpanMap$Span::getStart() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_85703d13e302437e]));
      }

      ::org::orekit::utils::TimeSpanMap$Transition TimeSpanMap$Span::getStartTransition() const
      {
        return ::org::orekit::utils::TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_getStartTransition_75c9888155918ff9]));
      }

      TimeSpanMap$Span TimeSpanMap$Span::next() const
      {
        return TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_next_971209c2bf2033e7]));
      }

      TimeSpanMap$Span TimeSpanMap$Span::previous() const
      {
        return TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_previous_971209c2bf2033e7]));
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
      static PyObject *t_TimeSpanMap$Span_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap$Span_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap$Span_of_(t_TimeSpanMap$Span *self, PyObject *args);
      static PyObject *t_TimeSpanMap$Span_getData(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_getEnd(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_getEndTransition(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_getStart(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_getStartTransition(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_next(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_previous(t_TimeSpanMap$Span *self);
      static PyObject *t_TimeSpanMap$Span_get__data(t_TimeSpanMap$Span *self, void *data);
      static PyObject *t_TimeSpanMap$Span_get__end(t_TimeSpanMap$Span *self, void *data);
      static PyObject *t_TimeSpanMap$Span_get__endTransition(t_TimeSpanMap$Span *self, void *data);
      static PyObject *t_TimeSpanMap$Span_get__start(t_TimeSpanMap$Span *self, void *data);
      static PyObject *t_TimeSpanMap$Span_get__startTransition(t_TimeSpanMap$Span *self, void *data);
      static PyObject *t_TimeSpanMap$Span_get__parameters_(t_TimeSpanMap$Span *self, void *data);
      static PyGetSetDef t_TimeSpanMap$Span__fields_[] = {
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, data),
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, end),
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, endTransition),
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, start),
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, startTransition),
        DECLARE_GET_FIELD(t_TimeSpanMap$Span, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeSpanMap$Span__methods_[] = {
        DECLARE_METHOD(t_TimeSpanMap$Span, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap$Span, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap$Span, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, getData, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, getEnd, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, getEndTransition, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, getStart, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, getStartTransition, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, next, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap$Span, previous, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeSpanMap$Span)[] = {
        { Py_tp_methods, t_TimeSpanMap$Span__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeSpanMap$Span__fields_ },
        { Py_tp_iter, (void *) PyObject_SelfIter },
        { Py_tp_iternext, (void *) ((PyObject *(*)(t_TimeSpanMap$Span *)) get_generic_next< t_TimeSpanMap$Span,t_TimeSpanMap$Span,TimeSpanMap$Span >) },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeSpanMap$Span)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeSpanMap$Span, t_TimeSpanMap$Span, TimeSpanMap$Span);
      PyObject *t_TimeSpanMap$Span::wrap_Object(const TimeSpanMap$Span& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap$Span::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap$Span *self = (t_TimeSpanMap$Span *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeSpanMap$Span::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap$Span::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap$Span *self = (t_TimeSpanMap$Span *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeSpanMap$Span::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeSpanMap$Span), &PY_TYPE_DEF(TimeSpanMap$Span), module, "TimeSpanMap$Span", 0);
      }

      void t_TimeSpanMap$Span::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Span), "class_", make_descriptor(TimeSpanMap$Span::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Span), "wrapfn_", make_descriptor(t_TimeSpanMap$Span::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap$Span), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeSpanMap$Span_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeSpanMap$Span::initializeClass, 1)))
          return NULL;
        return t_TimeSpanMap$Span::wrap_Object(TimeSpanMap$Span(((t_TimeSpanMap$Span *) arg)->object.this$));
      }
      static PyObject *t_TimeSpanMap$Span_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeSpanMap$Span::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeSpanMap$Span_of_(t_TimeSpanMap$Span *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeSpanMap$Span_getData(t_TimeSpanMap$Span *self)
      {
        ::java::lang::Object result((jobject) NULL);
        OBJ_CALL(result = self->object.getData());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Span_getEnd(t_TimeSpanMap$Span *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getEnd());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Span_getEndTransition(t_TimeSpanMap$Span *self)
      {
        ::org::orekit::utils::TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.getEndTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Span_getStart(t_TimeSpanMap$Span *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getStart());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_TimeSpanMap$Span_getStartTransition(t_TimeSpanMap$Span *self)
      {
        ::org::orekit::utils::TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.getStartTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Span_next(t_TimeSpanMap$Span *self)
      {
        TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.next());
        return t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap$Span_previous(t_TimeSpanMap$Span *self)
      {
        TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.previous());
        return t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }
      static PyObject *t_TimeSpanMap$Span_get__parameters_(t_TimeSpanMap$Span *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeSpanMap$Span_get__data(t_TimeSpanMap$Span *self, void *data)
      {
        ::java::lang::Object value((jobject) NULL);
        OBJ_CALL(value = self->object.getData());
        return ::java::lang::t_Object::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Span_get__end(t_TimeSpanMap$Span *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getEnd());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Span_get__endTransition(t_TimeSpanMap$Span *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Transition value((jobject) NULL);
        OBJ_CALL(value = self->object.getEndTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Span_get__start(t_TimeSpanMap$Span *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getStart());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap$Span_get__startTransition(t_TimeSpanMap$Span *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Transition value((jobject) NULL);
        OBJ_CALL(value = self->object.getStartTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/odm/KeplerianElements.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/KeplerianOrbit.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *KeplerianElements::class$ = NULL;
            jmethodID *KeplerianElements::mids$ = NULL;
            bool KeplerianElements::live$ = false;

            jclass KeplerianElements::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/KeplerianElements");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_generateKeplerianOrbit_e3485a84a747fc7f] = env->getMethodID(cls, "generateKeplerianOrbit", "(Lorg/orekit/frames/Frame;)Lorg/orekit/orbits/KeplerianOrbit;");
                mids$[mid_getA_dff5885c2c873297] = env->getMethodID(cls, "getA", "()D");
                mids$[mid_getAnomaly_dff5885c2c873297] = env->getMethodID(cls, "getAnomaly", "()D");
                mids$[mid_getAnomalyType_8f17e83e5a86217c] = env->getMethodID(cls, "getAnomalyType", "()Lorg/orekit/orbits/PositionAngleType;");
                mids$[mid_getE_dff5885c2c873297] = env->getMethodID(cls, "getE", "()D");
                mids$[mid_getEpoch_85703d13e302437e] = env->getMethodID(cls, "getEpoch", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getI_dff5885c2c873297] = env->getMethodID(cls, "getI", "()D");
                mids$[mid_getMeanMotion_dff5885c2c873297] = env->getMethodID(cls, "getMeanMotion", "()D");
                mids$[mid_getMu_dff5885c2c873297] = env->getMethodID(cls, "getMu", "()D");
                mids$[mid_getPa_dff5885c2c873297] = env->getMethodID(cls, "getPa", "()D");
                mids$[mid_getRaan_dff5885c2c873297] = env->getMethodID(cls, "getRaan", "()D");
                mids$[mid_setA_17db3a65980d3441] = env->getMethodID(cls, "setA", "(D)V");
                mids$[mid_setAnomaly_17db3a65980d3441] = env->getMethodID(cls, "setAnomaly", "(D)V");
                mids$[mid_setAnomalyType_4ca1644ed7c72fe3] = env->getMethodID(cls, "setAnomalyType", "(Lorg/orekit/orbits/PositionAngleType;)V");
                mids$[mid_setE_17db3a65980d3441] = env->getMethodID(cls, "setE", "(D)V");
                mids$[mid_setEpoch_600a2a61652bc473] = env->getMethodID(cls, "setEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
                mids$[mid_setI_17db3a65980d3441] = env->getMethodID(cls, "setI", "(D)V");
                mids$[mid_setMeanMotion_17db3a65980d3441] = env->getMethodID(cls, "setMeanMotion", "(D)V");
                mids$[mid_setMu_17db3a65980d3441] = env->getMethodID(cls, "setMu", "(D)V");
                mids$[mid_setPa_17db3a65980d3441] = env->getMethodID(cls, "setPa", "(D)V");
                mids$[mid_setRaan_17db3a65980d3441] = env->getMethodID(cls, "setRaan", "(D)V");
                mids$[mid_validate_17db3a65980d3441] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            KeplerianElements::KeplerianElements() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

            ::org::orekit::orbits::KeplerianOrbit KeplerianElements::generateKeplerianOrbit(const ::org::orekit::frames::Frame & a0) const
            {
              return ::org::orekit::orbits::KeplerianOrbit(env->callObjectMethod(this$, mids$[mid_generateKeplerianOrbit_e3485a84a747fc7f], a0.this$));
            }

            jdouble KeplerianElements::getA() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getA_dff5885c2c873297]);
            }

            jdouble KeplerianElements::getAnomaly() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getAnomaly_dff5885c2c873297]);
            }

            ::org::orekit::orbits::PositionAngleType KeplerianElements::getAnomalyType() const
            {
              return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getAnomalyType_8f17e83e5a86217c]));
            }

            jdouble KeplerianElements::getE() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getE_dff5885c2c873297]);
            }

            ::org::orekit::time::AbsoluteDate KeplerianElements::getEpoch() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getEpoch_85703d13e302437e]));
            }

            jdouble KeplerianElements::getI() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getI_dff5885c2c873297]);
            }

            jdouble KeplerianElements::getMeanMotion() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMeanMotion_dff5885c2c873297]);
            }

            jdouble KeplerianElements::getMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getMu_dff5885c2c873297]);
            }

            jdouble KeplerianElements::getPa() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getPa_dff5885c2c873297]);
            }

            jdouble KeplerianElements::getRaan() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getRaan_dff5885c2c873297]);
            }

            void KeplerianElements::setA(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setA_17db3a65980d3441], a0);
            }

            void KeplerianElements::setAnomaly(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAnomaly_17db3a65980d3441], a0);
            }

            void KeplerianElements::setAnomalyType(const ::org::orekit::orbits::PositionAngleType & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAnomalyType_4ca1644ed7c72fe3], a0.this$);
            }

            void KeplerianElements::setE(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setE_17db3a65980d3441], a0);
            }

            void KeplerianElements::setEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setEpoch_600a2a61652bc473], a0.this$);
            }

            void KeplerianElements::setI(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setI_17db3a65980d3441], a0);
            }

            void KeplerianElements::setMeanMotion(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMeanMotion_17db3a65980d3441], a0);
            }

            void KeplerianElements::setMu(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setMu_17db3a65980d3441], a0);
            }

            void KeplerianElements::setPa(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setPa_17db3a65980d3441], a0);
            }

            void KeplerianElements::setRaan(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setRaan_17db3a65980d3441], a0);
            }

            void KeplerianElements::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_17db3a65980d3441], a0);
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
            static PyObject *t_KeplerianElements_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_KeplerianElements_instance_(PyTypeObject *type, PyObject *arg);
            static int t_KeplerianElements_init_(t_KeplerianElements *self, PyObject *args, PyObject *kwds);
            static PyObject *t_KeplerianElements_generateKeplerianOrbit(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_getA(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getAnomaly(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getAnomalyType(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getE(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getEpoch(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getI(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getMeanMotion(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getMu(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getPa(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_getRaan(t_KeplerianElements *self);
            static PyObject *t_KeplerianElements_setA(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setAnomaly(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setAnomalyType(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setE(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setEpoch(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setI(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setMeanMotion(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setMu(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setPa(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_setRaan(t_KeplerianElements *self, PyObject *arg);
            static PyObject *t_KeplerianElements_validate(t_KeplerianElements *self, PyObject *args);
            static PyObject *t_KeplerianElements_get__a(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__a(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__anomaly(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__anomaly(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__anomalyType(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__anomalyType(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__e(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__e(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__epoch(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__epoch(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__i(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__i(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__meanMotion(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__meanMotion(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__mu(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__mu(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__pa(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__pa(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyObject *t_KeplerianElements_get__raan(t_KeplerianElements *self, void *data);
            static int t_KeplerianElements_set__raan(t_KeplerianElements *self, PyObject *arg, void *data);
            static PyGetSetDef t_KeplerianElements__fields_[] = {
              DECLARE_GETSET_FIELD(t_KeplerianElements, a),
              DECLARE_GETSET_FIELD(t_KeplerianElements, anomaly),
              DECLARE_GETSET_FIELD(t_KeplerianElements, anomalyType),
              DECLARE_GETSET_FIELD(t_KeplerianElements, e),
              DECLARE_GETSET_FIELD(t_KeplerianElements, epoch),
              DECLARE_GETSET_FIELD(t_KeplerianElements, i),
              DECLARE_GETSET_FIELD(t_KeplerianElements, meanMotion),
              DECLARE_GETSET_FIELD(t_KeplerianElements, mu),
              DECLARE_GETSET_FIELD(t_KeplerianElements, pa),
              DECLARE_GETSET_FIELD(t_KeplerianElements, raan),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_KeplerianElements__methods_[] = {
              DECLARE_METHOD(t_KeplerianElements, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElements, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_KeplerianElements, generateKeplerianOrbit, METH_O),
              DECLARE_METHOD(t_KeplerianElements, getA, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getAnomaly, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getAnomalyType, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getE, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getEpoch, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getI, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getMeanMotion, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getMu, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getPa, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, getRaan, METH_NOARGS),
              DECLARE_METHOD(t_KeplerianElements, setA, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setAnomaly, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setAnomalyType, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setE, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setEpoch, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setI, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setMeanMotion, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setMu, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setPa, METH_O),
              DECLARE_METHOD(t_KeplerianElements, setRaan, METH_O),
              DECLARE_METHOD(t_KeplerianElements, validate, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(KeplerianElements)[] = {
              { Py_tp_methods, t_KeplerianElements__methods_ },
              { Py_tp_init, (void *) t_KeplerianElements_init_ },
              { Py_tp_getset, t_KeplerianElements__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(KeplerianElements)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
              NULL
            };

            DEFINE_TYPE(KeplerianElements, t_KeplerianElements, KeplerianElements);

            void t_KeplerianElements::install(PyObject *module)
            {
              installType(&PY_TYPE(KeplerianElements), &PY_TYPE_DEF(KeplerianElements), module, "KeplerianElements", 0);
            }

            void t_KeplerianElements::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElements), "class_", make_descriptor(KeplerianElements::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElements), "wrapfn_", make_descriptor(t_KeplerianElements::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(KeplerianElements), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_KeplerianElements_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, KeplerianElements::initializeClass, 1)))
                return NULL;
              return t_KeplerianElements::wrap_Object(KeplerianElements(((t_KeplerianElements *) arg)->object.this$));
            }
            static PyObject *t_KeplerianElements_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, KeplerianElements::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_KeplerianElements_init_(t_KeplerianElements *self, PyObject *args, PyObject *kwds)
            {
              KeplerianElements object((jobject) NULL);

              INT_CALL(object = KeplerianElements());
              self->object = object;

              return 0;
            }

            static PyObject *t_KeplerianElements_generateKeplerianOrbit(t_KeplerianElements *self, PyObject *arg)
            {
              ::org::orekit::frames::Frame a0((jobject) NULL);
              ::org::orekit::orbits::KeplerianOrbit result((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.generateKeplerianOrbit(a0));
                return ::org::orekit::orbits::t_KeplerianOrbit::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "generateKeplerianOrbit", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_getA(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getA());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getAnomaly(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getAnomaly());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getAnomalyType(t_KeplerianElements *self)
            {
              ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
              OBJ_CALL(result = self->object.getAnomalyType());
              return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
            }

            static PyObject *t_KeplerianElements_getE(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getE());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getEpoch(t_KeplerianElements *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_KeplerianElements_getI(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getI());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getMeanMotion(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getMu(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getMu());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getPa(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getPa());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_getRaan(t_KeplerianElements *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getRaan());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_KeplerianElements_setA(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setA(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setA", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setAnomaly(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setAnomaly(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAnomaly", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setAnomalyType(t_KeplerianElements *self, PyObject *arg)
            {
              ::org::orekit::orbits::PositionAngleType a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArg(arg, "K", ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &p0, ::org::orekit::orbits::t_PositionAngleType::parameters_))
              {
                OBJ_CALL(self->object.setAnomalyType(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAnomalyType", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setE(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setE", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setEpoch(t_KeplerianElements *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setEpoch(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setEpoch", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setI(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setI(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setI", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setMeanMotion(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMeanMotion(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMeanMotion", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setMu(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setMu(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setMu", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setPa(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setPa(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setPa", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_setRaan(t_KeplerianElements *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setRaan(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setRaan", arg);
              return NULL;
            }

            static PyObject *t_KeplerianElements_validate(t_KeplerianElements *self, PyObject *args)
            {
              jdouble a0;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(self->object.validate(a0));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(KeplerianElements), (PyObject *) self, "validate", args, 2);
            }

            static PyObject *t_KeplerianElements_get__a(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getA());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__a(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setA(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "a", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__anomaly(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getAnomaly());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__anomaly(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setAnomaly(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "anomaly", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__anomalyType(t_KeplerianElements *self, void *data)
            {
              ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
              OBJ_CALL(value = self->object.getAnomalyType());
              return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
            }
            static int t_KeplerianElements_set__anomalyType(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::orbits::PositionAngleType::initializeClass, &value))
                {
                  INT_CALL(self->object.setAnomalyType(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "anomalyType", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__e(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getE());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__e(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "e", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__epoch(t_KeplerianElements *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getEpoch());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
            static int t_KeplerianElements_set__epoch(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
                {
                  INT_CALL(self->object.setEpoch(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "epoch", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__i(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getI());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__i(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setI(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "i", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__meanMotion(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMeanMotion());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__meanMotion(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMeanMotion(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "meanMotion", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__mu(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getMu());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__mu(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setMu(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "mu", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__pa(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getPa());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__pa(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setPa(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "pa", arg);
              return -1;
            }

            static PyObject *t_KeplerianElements_get__raan(t_KeplerianElements *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getRaan());
              return PyFloat_FromDouble((double) value);
            }
            static int t_KeplerianElements_set__raan(t_KeplerianElements *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setRaan(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "raan", arg);
              return -1;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/AbsolutePVCoordinatesHermiteInterpolator.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/AbsolutePVCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *AbsolutePVCoordinatesHermiteInterpolator::class$ = NULL;
      jmethodID *AbsolutePVCoordinatesHermiteInterpolator::mids$ = NULL;
      bool AbsolutePVCoordinatesHermiteInterpolator::live$ = false;

      jclass AbsolutePVCoordinatesHermiteInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/AbsolutePVCoordinatesHermiteInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_b5680f5c30eede66] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_f67f9ac4338cd9bf] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;)V");
          mids$[mid_init$_66865f52d36c8d04] = env->getMethodID(cls, "<init>", "(ILorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_init$_1958d683b153c045] = env->getMethodID(cls, "<init>", "(IDLorg/orekit/frames/Frame;Lorg/orekit/utils/CartesianDerivativesFilter;)V");
          mids$[mid_getFilter_16e9a7b5414faf2d] = env->getMethodID(cls, "getFilter", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
          mids$[mid_getOutputFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getOutputFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_c23d1b6dce92ab85] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/utils/AbsolutePVCoordinates;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      AbsolutePVCoordinatesHermiteInterpolator::AbsolutePVCoordinatesHermiteInterpolator(const ::org::orekit::frames::Frame & a0) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_b5680f5c30eede66, a0.this$)) {}

      AbsolutePVCoordinatesHermiteInterpolator::AbsolutePVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_f67f9ac4338cd9bf, a0, a1.this$)) {}

      AbsolutePVCoordinatesHermiteInterpolator::AbsolutePVCoordinatesHermiteInterpolator(jint a0, const ::org::orekit::frames::Frame & a1, const ::org::orekit::utils::CartesianDerivativesFilter & a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_66865f52d36c8d04, a0, a1.this$, a2.this$)) {}

      AbsolutePVCoordinatesHermiteInterpolator::AbsolutePVCoordinatesHermiteInterpolator(jint a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::utils::CartesianDerivativesFilter & a3) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_1958d683b153c045, a0, a1, a2.this$, a3.this$)) {}

      ::org::orekit::utils::CartesianDerivativesFilter AbsolutePVCoordinatesHermiteInterpolator::getFilter() const
      {
        return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getFilter_16e9a7b5414faf2d]));
      }

      ::org::orekit::frames::Frame AbsolutePVCoordinatesHermiteInterpolator::getOutputFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getOutputFrame_b86f9f61d97a7244]));
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
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_of_(t_AbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args);
      static int t_AbsolutePVCoordinatesHermiteInterpolator_init_(t_AbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_getFilter(t_AbsolutePVCoordinatesHermiteInterpolator *self);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_getOutputFrame(t_AbsolutePVCoordinatesHermiteInterpolator *self);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__filter(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__outputFrame(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__parameters_(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data);
      static PyGetSetDef t_AbsolutePVCoordinatesHermiteInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_AbsolutePVCoordinatesHermiteInterpolator, filter),
        DECLARE_GET_FIELD(t_AbsolutePVCoordinatesHermiteInterpolator, outputFrame),
        DECLARE_GET_FIELD(t_AbsolutePVCoordinatesHermiteInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_AbsolutePVCoordinatesHermiteInterpolator__methods_[] = {
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, getFilter, METH_NOARGS),
        DECLARE_METHOD(t_AbsolutePVCoordinatesHermiteInterpolator, getOutputFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbsolutePVCoordinatesHermiteInterpolator)[] = {
        { Py_tp_methods, t_AbsolutePVCoordinatesHermiteInterpolator__methods_ },
        { Py_tp_init, (void *) t_AbsolutePVCoordinatesHermiteInterpolator_init_ },
        { Py_tp_getset, t_AbsolutePVCoordinatesHermiteInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbsolutePVCoordinatesHermiteInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(AbsolutePVCoordinatesHermiteInterpolator, t_AbsolutePVCoordinatesHermiteInterpolator, AbsolutePVCoordinatesHermiteInterpolator);
      PyObject *t_AbsolutePVCoordinatesHermiteInterpolator::wrap_Object(const AbsolutePVCoordinatesHermiteInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbsolutePVCoordinatesHermiteInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbsolutePVCoordinatesHermiteInterpolator *self = (t_AbsolutePVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_AbsolutePVCoordinatesHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_AbsolutePVCoordinatesHermiteInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_AbsolutePVCoordinatesHermiteInterpolator *self = (t_AbsolutePVCoordinatesHermiteInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_AbsolutePVCoordinatesHermiteInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator), &PY_TYPE_DEF(AbsolutePVCoordinatesHermiteInterpolator), module, "AbsolutePVCoordinatesHermiteInterpolator", 0);
      }

      void t_AbsolutePVCoordinatesHermiteInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator), "class_", make_descriptor(AbsolutePVCoordinatesHermiteInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator), "wrapfn_", make_descriptor(t_AbsolutePVCoordinatesHermiteInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbsolutePVCoordinatesHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbsolutePVCoordinatesHermiteInterpolator::initializeClass, 1)))
          return NULL;
        return t_AbsolutePVCoordinatesHermiteInterpolator::wrap_Object(AbsolutePVCoordinatesHermiteInterpolator(((t_AbsolutePVCoordinatesHermiteInterpolator *) arg)->object.this$));
      }
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbsolutePVCoordinatesHermiteInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_of_(t_AbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_AbsolutePVCoordinatesHermiteInterpolator_init_(t_AbsolutePVCoordinatesHermiteInterpolator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            AbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = AbsolutePVCoordinatesHermiteInterpolator(a0));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(AbsolutePVCoordinates);
              break;
            }
          }
          goto err;
         case 2:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            AbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "Ik", ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = AbsolutePVCoordinatesHermiteInterpolator(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(AbsolutePVCoordinates);
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a2((jobject) NULL);
            PyTypeObject **p2;
            AbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = AbsolutePVCoordinatesHermiteInterpolator(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(AbsolutePVCoordinates);
              break;
            }
          }
          goto err;
         case 4:
          {
            jint a0;
            jdouble a1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::utils::CartesianDerivativesFilter a3((jobject) NULL);
            PyTypeObject **p3;
            AbsolutePVCoordinatesHermiteInterpolator object((jobject) NULL);

            if (!parseArgs(args, "IDkK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &p3, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
            {
              INT_CALL(object = AbsolutePVCoordinatesHermiteInterpolator(a0, a1, a2, a3));
              self->object = object;
              self->parameters[0] = ::org::orekit::utils::PY_TYPE(AbsolutePVCoordinates);
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

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_getFilter(t_AbsolutePVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
        OBJ_CALL(result = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_getOutputFrame(t_AbsolutePVCoordinatesHermiteInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }
      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__parameters_(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__filter(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
        OBJ_CALL(value = self->object.getFilter());
        return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
      }

      static PyObject *t_AbsolutePVCoordinatesHermiteInterpolator_get__outputFrame(t_AbsolutePVCoordinatesHermiteInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getOutputFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
