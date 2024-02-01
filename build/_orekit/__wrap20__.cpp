#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/random/HaltonSequenceGenerator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/random/RandomVectorGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace random {

      ::java::lang::Class *HaltonSequenceGenerator::class$ = NULL;
      jmethodID *HaltonSequenceGenerator::mids$ = NULL;
      bool HaltonSequenceGenerator::live$ = false;

      jclass HaltonSequenceGenerator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/random/HaltonSequenceGenerator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8fd427ab23829bf5] = env->getMethodID(cls, "<init>", "(I)V");
          mids$[mid_init$_9466c0ef0b32e7e9] = env->getMethodID(cls, "<init>", "(I[I[I)V");
          mids$[mid_getNextIndex_d6ab429752e7c267] = env->getMethodID(cls, "getNextIndex", "()I");
          mids$[mid_nextVector_be783177b060994b] = env->getMethodID(cls, "nextVector", "()[D");
          mids$[mid_skipTo_81add9fc9d78d5b9] = env->getMethodID(cls, "skipTo", "(I)[D");
          mids$[mid_scramble_00616f6c287fc4e7] = env->getMethodID(cls, "scramble", "(IIII)I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HaltonSequenceGenerator::HaltonSequenceGenerator(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8fd427ab23829bf5, a0)) {}

      HaltonSequenceGenerator::HaltonSequenceGenerator(jint a0, const JArray< jint > & a1, const JArray< jint > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9466c0ef0b32e7e9, a0, a1.this$, a2.this$)) {}

      jint HaltonSequenceGenerator::getNextIndex() const
      {
        return env->callIntMethod(this$, mids$[mid_getNextIndex_d6ab429752e7c267]);
      }

      JArray< jdouble > HaltonSequenceGenerator::nextVector() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_nextVector_be783177b060994b]));
      }

      JArray< jdouble > HaltonSequenceGenerator::skipTo(jint a0) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_skipTo_81add9fc9d78d5b9], a0));
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
      static PyObject *t_HaltonSequenceGenerator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HaltonSequenceGenerator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HaltonSequenceGenerator_init_(t_HaltonSequenceGenerator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_HaltonSequenceGenerator_getNextIndex(t_HaltonSequenceGenerator *self);
      static PyObject *t_HaltonSequenceGenerator_nextVector(t_HaltonSequenceGenerator *self);
      static PyObject *t_HaltonSequenceGenerator_skipTo(t_HaltonSequenceGenerator *self, PyObject *arg);
      static PyObject *t_HaltonSequenceGenerator_get__nextIndex(t_HaltonSequenceGenerator *self, void *data);
      static PyGetSetDef t_HaltonSequenceGenerator__fields_[] = {
        DECLARE_GET_FIELD(t_HaltonSequenceGenerator, nextIndex),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_HaltonSequenceGenerator__methods_[] = {
        DECLARE_METHOD(t_HaltonSequenceGenerator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HaltonSequenceGenerator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HaltonSequenceGenerator, getNextIndex, METH_NOARGS),
        DECLARE_METHOD(t_HaltonSequenceGenerator, nextVector, METH_NOARGS),
        DECLARE_METHOD(t_HaltonSequenceGenerator, skipTo, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HaltonSequenceGenerator)[] = {
        { Py_tp_methods, t_HaltonSequenceGenerator__methods_ },
        { Py_tp_init, (void *) t_HaltonSequenceGenerator_init_ },
        { Py_tp_getset, t_HaltonSequenceGenerator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HaltonSequenceGenerator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(HaltonSequenceGenerator, t_HaltonSequenceGenerator, HaltonSequenceGenerator);

      void t_HaltonSequenceGenerator::install(PyObject *module)
      {
        installType(&PY_TYPE(HaltonSequenceGenerator), &PY_TYPE_DEF(HaltonSequenceGenerator), module, "HaltonSequenceGenerator", 0);
      }

      void t_HaltonSequenceGenerator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaltonSequenceGenerator), "class_", make_descriptor(HaltonSequenceGenerator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaltonSequenceGenerator), "wrapfn_", make_descriptor(t_HaltonSequenceGenerator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HaltonSequenceGenerator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HaltonSequenceGenerator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HaltonSequenceGenerator::initializeClass, 1)))
          return NULL;
        return t_HaltonSequenceGenerator::wrap_Object(HaltonSequenceGenerator(((t_HaltonSequenceGenerator *) arg)->object.this$));
      }
      static PyObject *t_HaltonSequenceGenerator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HaltonSequenceGenerator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HaltonSequenceGenerator_init_(t_HaltonSequenceGenerator *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jint a0;
            HaltonSequenceGenerator object((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              INT_CALL(object = HaltonSequenceGenerator(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            jint a0;
            JArray< jint > a1((jobject) NULL);
            JArray< jint > a2((jobject) NULL);
            HaltonSequenceGenerator object((jobject) NULL);

            if (!parseArgs(args, "I[I[I", &a0, &a1, &a2))
            {
              INT_CALL(object = HaltonSequenceGenerator(a0, a1, a2));
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

      static PyObject *t_HaltonSequenceGenerator_getNextIndex(t_HaltonSequenceGenerator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNextIndex());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_HaltonSequenceGenerator_nextVector(t_HaltonSequenceGenerator *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.nextVector());
        return result.wrap();
      }

      static PyObject *t_HaltonSequenceGenerator_skipTo(t_HaltonSequenceGenerator *self, PyObject *arg)
      {
        jint a0;
        JArray< jdouble > result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.skipTo(a0));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "skipTo", arg);
        return NULL;
      }

      static PyObject *t_HaltonSequenceGenerator_get__nextIndex(t_HaltonSequenceGenerator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNextIndex());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldNegateDetector.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldNegateDetector::class$ = NULL;
        jmethodID *FieldNegateDetector::mids$ = NULL;
        bool FieldNegateDetector::live$ = false;

        jclass FieldNegateDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldNegateDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bb8991c4a46cf56d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/FieldEventDetector;)V");
            mids$[mid_g_ac6fccc69d1b2d9e] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOriginal_3146cd1129cf853c] = env->getMethodID(cls, "getOriginal", "()Lorg/orekit/propagation/events/FieldEventDetector;");
            mids$[mid_init_357211ab77703f3f] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_create_068f51a4439f27ef] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldNegateDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldNegateDetector::FieldNegateDetector(const ::org::orekit::propagation::events::FieldEventDetector & a0) : ::org::orekit::propagation::events::FieldAbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_bb8991c4a46cf56d, a0.this$)) {}

        ::org::hipparchus::CalculusFieldElement FieldNegateDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_ac6fccc69d1b2d9e], a0.this$));
        }

        ::org::orekit::propagation::events::FieldEventDetector FieldNegateDetector::getOriginal() const
        {
          return ::org::orekit::propagation::events::FieldEventDetector(env->callObjectMethod(this$, mids$[mid_getOriginal_3146cd1129cf853c]));
        }

        void FieldNegateDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_357211ab77703f3f], a0.this$, a1.this$);
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
        static PyObject *t_FieldNegateDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNegateDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldNegateDetector_of_(t_FieldNegateDetector *self, PyObject *args);
        static int t_FieldNegateDetector_init_(t_FieldNegateDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldNegateDetector_g(t_FieldNegateDetector *self, PyObject *args);
        static PyObject *t_FieldNegateDetector_getOriginal(t_FieldNegateDetector *self);
        static PyObject *t_FieldNegateDetector_init(t_FieldNegateDetector *self, PyObject *args);
        static PyObject *t_FieldNegateDetector_get__original(t_FieldNegateDetector *self, void *data);
        static PyObject *t_FieldNegateDetector_get__parameters_(t_FieldNegateDetector *self, void *data);
        static PyGetSetDef t_FieldNegateDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldNegateDetector, original),
          DECLARE_GET_FIELD(t_FieldNegateDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldNegateDetector__methods_[] = {
          DECLARE_METHOD(t_FieldNegateDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNegateDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldNegateDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldNegateDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_FieldNegateDetector, getOriginal, METH_NOARGS),
          DECLARE_METHOD(t_FieldNegateDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldNegateDetector)[] = {
          { Py_tp_methods, t_FieldNegateDetector__methods_ },
          { Py_tp_init, (void *) t_FieldNegateDetector_init_ },
          { Py_tp_getset, t_FieldNegateDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldNegateDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::FieldAbstractDetector),
          NULL
        };

        DEFINE_TYPE(FieldNegateDetector, t_FieldNegateDetector, FieldNegateDetector);
        PyObject *t_FieldNegateDetector::wrap_Object(const FieldNegateDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNegateDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNegateDetector *self = (t_FieldNegateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldNegateDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldNegateDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldNegateDetector *self = (t_FieldNegateDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldNegateDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldNegateDetector), &PY_TYPE_DEF(FieldNegateDetector), module, "FieldNegateDetector", 0);
        }

        void t_FieldNegateDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNegateDetector), "class_", make_descriptor(FieldNegateDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNegateDetector), "wrapfn_", make_descriptor(t_FieldNegateDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldNegateDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldNegateDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldNegateDetector::initializeClass, 1)))
            return NULL;
          return t_FieldNegateDetector::wrap_Object(FieldNegateDetector(((t_FieldNegateDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldNegateDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldNegateDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldNegateDetector_of_(t_FieldNegateDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldNegateDetector_init_(t_FieldNegateDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          FieldNegateDetector object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
          {
            INT_CALL(object = FieldNegateDetector(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldNegateDetector_g(t_FieldNegateDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldNegateDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_FieldNegateDetector_getOriginal(t_FieldNegateDetector *self)
        {
          ::org::orekit::propagation::events::FieldEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getOriginal());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldNegateDetector_init(t_FieldNegateDetector *self, PyObject *args)
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

          return callSuper(PY_TYPE(FieldNegateDetector), (PyObject *) self, "init", args, 2);
        }
        static PyObject *t_FieldNegateDetector_get__parameters_(t_FieldNegateDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldNegateDetector_get__original(t_FieldNegateDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getOriginal());
          return ::org::orekit::propagation::events::t_FieldEventDetector::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/AbstractPropagatorBuilder.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/propagation/integration/AdditionalDerivativesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *AbstractPropagatorBuilder::class$ = NULL;
        jmethodID *AbstractPropagatorBuilder::mids$ = NULL;
        bool AbstractPropagatorBuilder::live$ = false;

        jclass AbstractPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/AbstractPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_addAdditionalDerivativesProvider_0b9db0c63a43ba8a] = env->getMethodID(cls, "addAdditionalDerivativesProvider", "(Lorg/orekit/propagation/integration/AdditionalDerivativesProvider;)V");
            mids$[mid_deselectDynamicParameters_ff7cb6c242604316] = env->getMethodID(cls, "deselectDynamicParameters", "()V");
            mids$[mid_getAttitudeProvider_2f73d1f4460b8d6c] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
            mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getInitialOrbitDate_80e11148db499dda] = env->getMethodID(cls, "getInitialOrbitDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getMu_9981f74b2d109da6] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getOrbitType_495f818d3570b7f5] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getOrbitalParametersDrivers_7c5a416c83e442be] = env->getMethodID(cls, "getOrbitalParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getPositionAngleType_a6db4e6edefda4be] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getPositionScale_9981f74b2d109da6] = env->getMethodID(cls, "getPositionScale", "()D");
            mids$[mid_getPropagationParametersDrivers_7c5a416c83e442be] = env->getMethodID(cls, "getPropagationParametersDrivers", "()Lorg/orekit/utils/ParameterDriversList;");
            mids$[mid_getSelectedNormalizedParameters_be783177b060994b] = env->getMethodID(cls, "getSelectedNormalizedParameters", "()[D");
            mids$[mid_resetOrbit_17534ef58ef3aaef] = env->getMethodID(cls, "resetOrbit", "(Lorg/orekit/orbits/Orbit;)V");
            mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_getAdditionalDerivativesProviders_d751c1a57012b438] = env->getMethodID(cls, "getAdditionalDerivativesProviders", "()Ljava/util/List;");
            mids$[mid_createInitialOrbit_fb241cd44f6e41bc] = env->getMethodID(cls, "createInitialOrbit", "()Lorg/orekit/orbits/Orbit;");
            mids$[mid_setParameters_a71c45509eaf92d1] = env->getMethodID(cls, "setParameters", "([D)V");
            mids$[mid_addSupportedParameters_aa335fea495d60e0] = env->getMethodID(cls, "addSupportedParameters", "(Ljava/util/List;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractPropagatorBuilder::addAdditionalDerivativesProvider(const ::org::orekit::propagation::integration::AdditionalDerivativesProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addAdditionalDerivativesProvider_0b9db0c63a43ba8a], a0.this$);
        }

        void AbstractPropagatorBuilder::deselectDynamicParameters() const
        {
          env->callVoidMethod(this$, mids$[mid_deselectDynamicParameters_ff7cb6c242604316]);
        }

        ::org::orekit::attitudes::AttitudeProvider AbstractPropagatorBuilder::getAttitudeProvider() const
        {
          return ::org::orekit::attitudes::AttitudeProvider(env->callObjectMethod(this$, mids$[mid_getAttitudeProvider_2f73d1f4460b8d6c]));
        }

        ::org::orekit::frames::Frame AbstractPropagatorBuilder::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
        }

        ::org::orekit::time::AbsoluteDate AbstractPropagatorBuilder::getInitialOrbitDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getInitialOrbitDate_80e11148db499dda]));
        }

        jdouble AbstractPropagatorBuilder::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_9981f74b2d109da6]);
        }

        ::org::orekit::orbits::OrbitType AbstractPropagatorBuilder::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_495f818d3570b7f5]));
        }

        ::org::orekit::utils::ParameterDriversList AbstractPropagatorBuilder::getOrbitalParametersDrivers() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getOrbitalParametersDrivers_7c5a416c83e442be]));
        }

        ::org::orekit::orbits::PositionAngleType AbstractPropagatorBuilder::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_a6db4e6edefda4be]));
        }

        jdouble AbstractPropagatorBuilder::getPositionScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getPositionScale_9981f74b2d109da6]);
        }

        ::org::orekit::utils::ParameterDriversList AbstractPropagatorBuilder::getPropagationParametersDrivers() const
        {
          return ::org::orekit::utils::ParameterDriversList(env->callObjectMethod(this$, mids$[mid_getPropagationParametersDrivers_7c5a416c83e442be]));
        }

        JArray< jdouble > AbstractPropagatorBuilder::getSelectedNormalizedParameters() const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getSelectedNormalizedParameters_be783177b060994b]));
        }

        void AbstractPropagatorBuilder::resetOrbit(const ::org::orekit::orbits::Orbit & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_resetOrbit_17534ef58ef3aaef], a0.this$);
        }

        void AbstractPropagatorBuilder::setAttitudeProvider(const ::org::orekit::attitudes::AttitudeProvider & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setAttitudeProvider_fddd0a7d9f33bafa], a0.this$);
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
        static PyObject *t_AbstractPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_addAdditionalDerivativesProvider(t_AbstractPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_deselectDynamicParameters(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getAttitudeProvider(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getFrame(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getInitialOrbitDate(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getMu(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getOrbitType(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getOrbitalParametersDrivers(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getPositionAngleType(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getPositionScale(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getPropagationParametersDrivers(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_getSelectedNormalizedParameters(t_AbstractPropagatorBuilder *self);
        static PyObject *t_AbstractPropagatorBuilder_resetOrbit(t_AbstractPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_setAttitudeProvider(t_AbstractPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_AbstractPropagatorBuilder_get__attitudeProvider(t_AbstractPropagatorBuilder *self, void *data);
        static int t_AbstractPropagatorBuilder_set__attitudeProvider(t_AbstractPropagatorBuilder *self, PyObject *arg, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__frame(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__initialOrbitDate(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__mu(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__orbitType(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__orbitalParametersDrivers(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__positionAngleType(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__positionScale(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__propagationParametersDrivers(t_AbstractPropagatorBuilder *self, void *data);
        static PyObject *t_AbstractPropagatorBuilder_get__selectedNormalizedParameters(t_AbstractPropagatorBuilder *self, void *data);
        static PyGetSetDef t_AbstractPropagatorBuilder__fields_[] = {
          DECLARE_GETSET_FIELD(t_AbstractPropagatorBuilder, attitudeProvider),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, frame),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, initialOrbitDate),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, mu),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, orbitType),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, orbitalParametersDrivers),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, positionAngleType),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, positionScale),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, propagationParametersDrivers),
          DECLARE_GET_FIELD(t_AbstractPropagatorBuilder, selectedNormalizedParameters),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_AbstractPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, addAdditionalDerivativesProvider, METH_O),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, deselectDynamicParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getAttitudeProvider, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getInitialOrbitDate, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getMu, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getOrbitType, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getOrbitalParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getPositionAngleType, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getPositionScale, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getPropagationParametersDrivers, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, getSelectedNormalizedParameters, METH_NOARGS),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, resetOrbit, METH_O),
          DECLARE_METHOD(t_AbstractPropagatorBuilder, setAttitudeProvider, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractPropagatorBuilder)[] = {
          { Py_tp_methods, t_AbstractPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractPropagatorBuilder, t_AbstractPropagatorBuilder, AbstractPropagatorBuilder);

        void t_AbstractPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractPropagatorBuilder), &PY_TYPE_DEF(AbstractPropagatorBuilder), module, "AbstractPropagatorBuilder", 0);
        }

        void t_AbstractPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorBuilder), "class_", make_descriptor(AbstractPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorBuilder), "wrapfn_", make_descriptor(t_AbstractPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_AbstractPropagatorBuilder::wrap_Object(AbstractPropagatorBuilder(((t_AbstractPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_AbstractPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractPropagatorBuilder_addAdditionalDerivativesProvider(t_AbstractPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::propagation::integration::AdditionalDerivativesProvider a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::integration::AdditionalDerivativesProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addAdditionalDerivativesProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addAdditionalDerivativesProvider", arg);
          return NULL;
        }

        static PyObject *t_AbstractPropagatorBuilder_deselectDynamicParameters(t_AbstractPropagatorBuilder *self)
        {
          OBJ_CALL(self->object.deselectDynamicParameters());
          Py_RETURN_NONE;
        }

        static PyObject *t_AbstractPropagatorBuilder_getAttitudeProvider(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getFrame(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getInitialOrbitDate(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getInitialOrbitDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getMu(t_AbstractPropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getOrbitType(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getOrbitalParametersDrivers(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrbitalParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getPositionAngleType(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getPositionScale(t_AbstractPropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getPositionScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getPropagationParametersDrivers(t_AbstractPropagatorBuilder *self)
        {
          ::org::orekit::utils::ParameterDriversList result((jobject) NULL);
          OBJ_CALL(result = self->object.getPropagationParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(result);
        }

        static PyObject *t_AbstractPropagatorBuilder_getSelectedNormalizedParameters(t_AbstractPropagatorBuilder *self)
        {
          JArray< jdouble > result((jobject) NULL);
          OBJ_CALL(result = self->object.getSelectedNormalizedParameters());
          return result.wrap();
        }

        static PyObject *t_AbstractPropagatorBuilder_resetOrbit(t_AbstractPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
          {
            OBJ_CALL(self->object.resetOrbit(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "resetOrbit", arg);
          return NULL;
        }

        static PyObject *t_AbstractPropagatorBuilder_setAttitudeProvider(t_AbstractPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::attitudes::AttitudeProvider a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setAttitudeProvider(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setAttitudeProvider", arg);
          return NULL;
        }

        static PyObject *t_AbstractPropagatorBuilder_get__attitudeProvider(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getAttitudeProvider());
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(value);
        }
        static int t_AbstractPropagatorBuilder_set__attitudeProvider(t_AbstractPropagatorBuilder *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
            {
              INT_CALL(self->object.setAttitudeProvider(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "attitudeProvider", arg);
          return -1;
        }

        static PyObject *t_AbstractPropagatorBuilder_get__frame(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__initialOrbitDate(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getInitialOrbitDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__mu(t_AbstractPropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__orbitType(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__orbitalParametersDrivers(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitalParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__positionAngleType(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__positionScale(t_AbstractPropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getPositionScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__propagationParametersDrivers(t_AbstractPropagatorBuilder *self, void *data)
        {
          ::org::orekit::utils::ParameterDriversList value((jobject) NULL);
          OBJ_CALL(value = self->object.getPropagationParametersDrivers());
          return ::org::orekit::utils::t_ParameterDriversList::wrap_Object(value);
        }

        static PyObject *t_AbstractPropagatorBuilder_get__selectedNormalizedParameters(t_AbstractPropagatorBuilder *self, void *data)
        {
          JArray< jdouble > value((jobject) NULL);
          OBJ_CALL(value = self->object.getSelectedNormalizedParameters());
          return value.wrap();
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/events/FieldDetectorBasedEventState.h"
#include "org/hipparchus/ode/events/FieldODEEventDetector.h"
#include "org/hipparchus/ode/events/FieldEventOccurrence.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/sampling/FieldODEStateInterpolator.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/ode/events/FieldEventState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace events {

        ::java::lang::Class *FieldDetectorBasedEventState::class$ = NULL;
        jmethodID *FieldDetectorBasedEventState::mids$ = NULL;
        bool FieldDetectorBasedEventState::live$ = false;

        jclass FieldDetectorBasedEventState::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/events/FieldDetectorBasedEventState");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1ffd39265a0e340d] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/events/FieldODEEventDetector;)V");
            mids$[mid_doEvent_bb679c793e33809e] = env->getMethodID(cls, "doEvent", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;)Lorg/hipparchus/ode/events/FieldEventOccurrence;");
            mids$[mid_evaluateStep_0c45e83e8206e2a1] = env->getMethodID(cls, "evaluateStep", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)Z");
            mids$[mid_getEventDetector_99863455dd1dde70] = env->getMethodID(cls, "getEventDetector", "()Lorg/hipparchus/ode/events/FieldODEEventDetector;");
            mids$[mid_getEventTime_08d37e3f77b7239d] = env->getMethodID(cls, "getEventTime", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_2a077928ff78cfcb] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_reinitializeBegin_d5c9193ad6d936b3] = env->getMethodID(cls, "reinitializeBegin", "(Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)V");
            mids$[mid_tryAdvance_b9fb6e2da7f242f8] = env->getMethodID(cls, "tryAdvance", "(Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/sampling/FieldODEStateInterpolator;)Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldDetectorBasedEventState::FieldDetectorBasedEventState(const ::org::hipparchus::ode::events::FieldODEEventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1ffd39265a0e340d, a0.this$)) {}

        ::org::hipparchus::ode::events::FieldEventOccurrence FieldDetectorBasedEventState::doEvent(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0) const
        {
          return ::org::hipparchus::ode::events::FieldEventOccurrence(env->callObjectMethod(this$, mids$[mid_doEvent_bb679c793e33809e], a0.this$));
        }

        jboolean FieldDetectorBasedEventState::evaluateStep(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_evaluateStep_0c45e83e8206e2a1], a0.this$);
        }

        ::org::hipparchus::ode::events::FieldODEEventDetector FieldDetectorBasedEventState::getEventDetector() const
        {
          return ::org::hipparchus::ode::events::FieldODEEventDetector(env->callObjectMethod(this$, mids$[mid_getEventDetector_99863455dd1dde70]));
        }

        ::org::hipparchus::CalculusFieldElement FieldDetectorBasedEventState::getEventTime() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getEventTime_08d37e3f77b7239d]));
        }

        void FieldDetectorBasedEventState::init(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2a077928ff78cfcb], a0.this$, a1.this$);
        }

        void FieldDetectorBasedEventState::reinitializeBegin(const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_reinitializeBegin_d5c9193ad6d936b3], a0.this$);
        }

        jboolean FieldDetectorBasedEventState::tryAdvance(const ::org::hipparchus::ode::FieldODEStateAndDerivative & a0, const ::org::hipparchus::ode::sampling::FieldODEStateInterpolator & a1) const
        {
          return env->callBooleanMethod(this$, mids$[mid_tryAdvance_b9fb6e2da7f242f8], a0.this$, a1.this$);
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
        static PyObject *t_FieldDetectorBasedEventState_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_of_(t_FieldDetectorBasedEventState *self, PyObject *args);
        static int t_FieldDetectorBasedEventState_init_(t_FieldDetectorBasedEventState *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldDetectorBasedEventState_doEvent(t_FieldDetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_evaluateStep(t_FieldDetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_getEventDetector(t_FieldDetectorBasedEventState *self);
        static PyObject *t_FieldDetectorBasedEventState_getEventTime(t_FieldDetectorBasedEventState *self);
        static PyObject *t_FieldDetectorBasedEventState_init(t_FieldDetectorBasedEventState *self, PyObject *args);
        static PyObject *t_FieldDetectorBasedEventState_reinitializeBegin(t_FieldDetectorBasedEventState *self, PyObject *arg);
        static PyObject *t_FieldDetectorBasedEventState_tryAdvance(t_FieldDetectorBasedEventState *self, PyObject *args);
        static PyObject *t_FieldDetectorBasedEventState_get__eventDetector(t_FieldDetectorBasedEventState *self, void *data);
        static PyObject *t_FieldDetectorBasedEventState_get__eventTime(t_FieldDetectorBasedEventState *self, void *data);
        static PyObject *t_FieldDetectorBasedEventState_get__parameters_(t_FieldDetectorBasedEventState *self, void *data);
        static PyGetSetDef t_FieldDetectorBasedEventState__fields_[] = {
          DECLARE_GET_FIELD(t_FieldDetectorBasedEventState, eventDetector),
          DECLARE_GET_FIELD(t_FieldDetectorBasedEventState, eventTime),
          DECLARE_GET_FIELD(t_FieldDetectorBasedEventState, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldDetectorBasedEventState__methods_[] = {
          DECLARE_METHOD(t_FieldDetectorBasedEventState, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, doEvent, METH_O),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, evaluateStep, METH_O),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, getEventDetector, METH_NOARGS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, getEventTime, METH_NOARGS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, reinitializeBegin, METH_O),
          DECLARE_METHOD(t_FieldDetectorBasedEventState, tryAdvance, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldDetectorBasedEventState)[] = {
          { Py_tp_methods, t_FieldDetectorBasedEventState__methods_ },
          { Py_tp_init, (void *) t_FieldDetectorBasedEventState_init_ },
          { Py_tp_getset, t_FieldDetectorBasedEventState__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldDetectorBasedEventState)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldDetectorBasedEventState, t_FieldDetectorBasedEventState, FieldDetectorBasedEventState);
        PyObject *t_FieldDetectorBasedEventState::wrap_Object(const FieldDetectorBasedEventState& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDetectorBasedEventState::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDetectorBasedEventState *self = (t_FieldDetectorBasedEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldDetectorBasedEventState::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldDetectorBasedEventState::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldDetectorBasedEventState *self = (t_FieldDetectorBasedEventState *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldDetectorBasedEventState::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldDetectorBasedEventState), &PY_TYPE_DEF(FieldDetectorBasedEventState), module, "FieldDetectorBasedEventState", 0);
        }

        void t_FieldDetectorBasedEventState::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDetectorBasedEventState), "class_", make_descriptor(FieldDetectorBasedEventState::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDetectorBasedEventState), "wrapfn_", make_descriptor(t_FieldDetectorBasedEventState::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDetectorBasedEventState), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldDetectorBasedEventState_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldDetectorBasedEventState::initializeClass, 1)))
            return NULL;
          return t_FieldDetectorBasedEventState::wrap_Object(FieldDetectorBasedEventState(((t_FieldDetectorBasedEventState *) arg)->object.this$));
        }
        static PyObject *t_FieldDetectorBasedEventState_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldDetectorBasedEventState::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldDetectorBasedEventState_of_(t_FieldDetectorBasedEventState *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldDetectorBasedEventState_init_(t_FieldDetectorBasedEventState *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector a0((jobject) NULL);
          PyTypeObject **p0;
          FieldDetectorBasedEventState object((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::ode::events::FieldODEEventDetector::initializeClass, &a0, &p0, ::org::hipparchus::ode::events::t_FieldODEEventDetector::parameters_))
          {
            INT_CALL(object = FieldDetectorBasedEventState(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldDetectorBasedEventState_doEvent(t_FieldDetectorBasedEventState *self, PyObject *arg)
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

        static PyObject *t_FieldDetectorBasedEventState_evaluateStep(t_FieldDetectorBasedEventState *self, PyObject *arg)
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

        static PyObject *t_FieldDetectorBasedEventState_getEventDetector(t_FieldDetectorBasedEventState *self)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventDetector());
          return ::org::hipparchus::ode::events::t_FieldODEEventDetector::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldDetectorBasedEventState_getEventTime(t_FieldDetectorBasedEventState *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getEventTime());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldDetectorBasedEventState_init(t_FieldDetectorBasedEventState *self, PyObject *args)
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

        static PyObject *t_FieldDetectorBasedEventState_reinitializeBegin(t_FieldDetectorBasedEventState *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(self->object.reinitializeBegin(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "reinitializeBegin", arg);
          return NULL;
        }

        static PyObject *t_FieldDetectorBasedEventState_tryAdvance(t_FieldDetectorBasedEventState *self, PyObject *args)
        {
          ::org::hipparchus::ode::FieldODEStateAndDerivative a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::ode::sampling::FieldODEStateInterpolator a1((jobject) NULL);
          PyTypeObject **p1;
          jboolean result;

          if (!parseArgs(args, "KK", ::org::hipparchus::ode::FieldODEStateAndDerivative::initializeClass, ::org::hipparchus::ode::sampling::FieldODEStateInterpolator::initializeClass, &a0, &p0, ::org::hipparchus::ode::t_FieldODEStateAndDerivative::parameters_, &a1, &p1, ::org::hipparchus::ode::sampling::t_FieldODEStateInterpolator::parameters_))
          {
            OBJ_CALL(result = self->object.tryAdvance(a0, a1));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "tryAdvance", args);
          return NULL;
        }
        static PyObject *t_FieldDetectorBasedEventState_get__parameters_(t_FieldDetectorBasedEventState *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldDetectorBasedEventState_get__eventDetector(t_FieldDetectorBasedEventState *self, void *data)
        {
          ::org::hipparchus::ode::events::FieldODEEventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventDetector());
          return ::org::hipparchus::ode::events::t_FieldODEEventDetector::wrap_Object(value);
        }

        static PyObject *t_FieldDetectorBasedEventState_get__eventTime(t_FieldDetectorBasedEventState *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getEventTime());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/data/DirectoryCrawler.h"
#include "org/orekit/data/DataProvider.h"
#include "java/lang/Class.h"
#include "java/io/File.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace data {

      ::java::lang::Class *DirectoryCrawler::class$ = NULL;
      jmethodID *DirectoryCrawler::mids$ = NULL;
      bool DirectoryCrawler::live$ = false;

      jclass DirectoryCrawler::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/data/DirectoryCrawler");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_44d81342f3d8a712] = env->getMethodID(cls, "<init>", "(Ljava/io/File;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DirectoryCrawler::DirectoryCrawler(const ::java::io::File & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44d81342f3d8a712, a0.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace data {
      static PyObject *t_DirectoryCrawler_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DirectoryCrawler_instance_(PyTypeObject *type, PyObject *arg);
      static int t_DirectoryCrawler_init_(t_DirectoryCrawler *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_DirectoryCrawler__methods_[] = {
        DECLARE_METHOD(t_DirectoryCrawler, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DirectoryCrawler, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DirectoryCrawler)[] = {
        { Py_tp_methods, t_DirectoryCrawler__methods_ },
        { Py_tp_init, (void *) t_DirectoryCrawler_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DirectoryCrawler)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DirectoryCrawler, t_DirectoryCrawler, DirectoryCrawler);

      void t_DirectoryCrawler::install(PyObject *module)
      {
        installType(&PY_TYPE(DirectoryCrawler), &PY_TYPE_DEF(DirectoryCrawler), module, "DirectoryCrawler", 0);
      }

      void t_DirectoryCrawler::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DirectoryCrawler), "class_", make_descriptor(DirectoryCrawler::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DirectoryCrawler), "wrapfn_", make_descriptor(t_DirectoryCrawler::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DirectoryCrawler), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DirectoryCrawler_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DirectoryCrawler::initializeClass, 1)))
          return NULL;
        return t_DirectoryCrawler::wrap_Object(DirectoryCrawler(((t_DirectoryCrawler *) arg)->object.this$));
      }
      static PyObject *t_DirectoryCrawler_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DirectoryCrawler::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_DirectoryCrawler_init_(t_DirectoryCrawler *self, PyObject *args, PyObject *kwds)
      {
        ::java::io::File a0((jobject) NULL);
        DirectoryCrawler object((jobject) NULL);

        if (!parseArgs(args, "k", ::java::io::File::initializeClass, &a0))
        {
          INT_CALL(object = DirectoryCrawler(a0));
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
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *MultivariateFunction::class$ = NULL;
      jmethodID *MultivariateFunction::mids$ = NULL;
      bool MultivariateFunction::live$ = false;

      jclass MultivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/MultivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_value_a40ce4fdf6559ac0] = env->getMethodID(cls, "value", "([D)D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble MultivariateFunction::value(const JArray< jdouble > & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_value_a40ce4fdf6559ac0], a0.this$);
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
      static PyObject *t_MultivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_MultivariateFunction_value(t_MultivariateFunction *self, PyObject *arg);

      static PyMethodDef t_MultivariateFunction__methods_[] = {
        DECLARE_METHOD(t_MultivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_MultivariateFunction, value, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(MultivariateFunction)[] = {
        { Py_tp_methods, t_MultivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(MultivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(MultivariateFunction, t_MultivariateFunction, MultivariateFunction);

      void t_MultivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(MultivariateFunction), &PY_TYPE_DEF(MultivariateFunction), module, "MultivariateFunction", 0);
      }

      void t_MultivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunction), "class_", make_descriptor(MultivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunction), "wrapfn_", make_descriptor(t_MultivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_MultivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, MultivariateFunction::initializeClass, 1)))
          return NULL;
        return t_MultivariateFunction::wrap_Object(MultivariateFunction(((t_MultivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_MultivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, MultivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_MultivariateFunction_value(t_MultivariateFunction *self, PyObject *arg)
      {
        JArray< jdouble > a0((jobject) NULL);
        jdouble result;

        if (!parseArg(arg, "[D", &a0))
        {
          OBJ_CALL(result = self->object.value(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/legendre/LegendreEllipticIntegral.h"
#include "org/hipparchus/complex/ComplexUnivariateIntegrator.h"
#include "org/hipparchus/complex/Complex.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/FieldComplexUnivariateIntegrator.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace legendre {

          ::java::lang::Class *LegendreEllipticIntegral::class$ = NULL;
          jmethodID *LegendreEllipticIntegral::mids$ = NULL;
          bool LegendreEllipticIntegral::live$ = false;

          jclass LegendreEllipticIntegral::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/legendre/LegendreEllipticIntegral");

              mids$ = new jmethodID[max_mid];
              mids$[mid_bigD_48ac0ef047162b30] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigD_44ec11f3ee7128be] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigD_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "bigD", "(D)D");
              mids$[mid_bigD_a3b854adede8eaaa] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigD_2d58bd4896edb1e2] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigD_52ba3d392dc930c6] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigD_82f92590f4247da1] = env->getStaticMethodID(cls, "bigD", "(DD)D");
              mids$[mid_bigD_b5ecd7df9e053968] = env->getStaticMethodID(cls, "bigD", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigE_48ac0ef047162b30] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigE_44ec11f3ee7128be] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigE_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "bigE", "(D)D");
              mids$[mid_bigE_a3b854adede8eaaa] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigE_2d58bd4896edb1e2] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigE_52ba3d392dc930c6] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigE_82f92590f4247da1] = env->getStaticMethodID(cls, "bigE", "(DD)D");
              mids$[mid_bigE_b5ecd7df9e053968] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigE_65318e1a4d2285d3] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/ComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigE_c7ad730eb592aff3] = env->getStaticMethodID(cls, "bigE", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigF_2d58bd4896edb1e2] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigF_52ba3d392dc930c6] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigF_82f92590f4247da1] = env->getStaticMethodID(cls, "bigF", "(DD)D");
              mids$[mid_bigF_b5ecd7df9e053968] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigF_65318e1a4d2285d3] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/ComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigF_c7ad730eb592aff3] = env->getStaticMethodID(cls, "bigF", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigK_48ac0ef047162b30] = env->getStaticMethodID(cls, "bigK", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigK_44ec11f3ee7128be] = env->getStaticMethodID(cls, "bigK", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigK_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "bigK", "(D)D");
              mids$[mid_bigK_a3b854adede8eaaa] = env->getStaticMethodID(cls, "bigK", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigKPrime_48ac0ef047162b30] = env->getStaticMethodID(cls, "bigKPrime", "(Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigKPrime_44ec11f3ee7128be] = env->getStaticMethodID(cls, "bigKPrime", "(Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigKPrime_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "bigKPrime", "(D)D");
              mids$[mid_bigKPrime_a3b854adede8eaaa] = env->getStaticMethodID(cls, "bigKPrime", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigPi_2d58bd4896edb1e2] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigPi_52ba3d392dc930c6] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigPi_82f92590f4247da1] = env->getStaticMethodID(cls, "bigPi", "(DD)D");
              mids$[mid_bigPi_b5ecd7df9e053968] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigPi_373272692db3c8df] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigPi_232ee5b9d52b0bf0] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_bigPi_db06d8c3fc3d9670] = env->getStaticMethodID(cls, "bigPi", "(DDD)D");
              mids$[mid_bigPi_3130e338b3b4d904] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_bigPi_41b6dc3375b24d53] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/ComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/Complex;");
              mids$[mid_bigPi_da40dcd5961779ff] = env->getStaticMethodID(cls, "bigPi", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplexUnivariateIntegrator;I)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_nome_bf28ed64d6e8576b] = env->getStaticMethodID(cls, "nome", "(D)D");
              mids$[mid_nome_a3b854adede8eaaa] = env->getStaticMethodID(cls, "nome", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigD(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigD_48ac0ef047162b30], a0.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigD(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigD_44ec11f3ee7128be], a0.this$));
          }

          jdouble LegendreEllipticIntegral::bigD(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigD_bf28ed64d6e8576b], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigD(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigD_a3b854adede8eaaa], a0.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigD(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigD_2d58bd4896edb1e2], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigD(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigD_52ba3d392dc930c6], a0.this$, a1.this$));
          }

          jdouble LegendreEllipticIntegral::bigD(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigD_82f92590f4247da1], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigD(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigD_b5ecd7df9e053968], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigE_48ac0ef047162b30], a0.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigE_44ec11f3ee7128be], a0.this$));
          }

          jdouble LegendreEllipticIntegral::bigE(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigE_bf28ed64d6e8576b], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigE(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigE_a3b854adede8eaaa], a0.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigE_2d58bd4896edb1e2], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigE_52ba3d392dc930c6], a0.this$, a1.this$));
          }

          jdouble LegendreEllipticIntegral::bigE(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigE_82f92590f4247da1], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigE(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigE_b5ecd7df9e053968], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::ComplexUnivariateIntegrator & a2, jint a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigE_65318e1a4d2285d3], a0.this$, a1.this$, a2.this$, a3));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigE(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplexUnivariateIntegrator & a2, jint a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigE_c7ad730eb592aff3], a0.this$, a1.this$, a2.this$, a3));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigF(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigF_2d58bd4896edb1e2], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigF(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigF_52ba3d392dc930c6], a0.this$, a1.this$));
          }

          jdouble LegendreEllipticIntegral::bigF(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigF_82f92590f4247da1], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigF(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigF_b5ecd7df9e053968], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigF(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::ComplexUnivariateIntegrator & a2, jint a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigF_65318e1a4d2285d3], a0.this$, a1.this$, a2.this$, a3));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigF(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplexUnivariateIntegrator & a2, jint a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigF_c7ad730eb592aff3], a0.this$, a1.this$, a2.this$, a3));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigK(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigK_48ac0ef047162b30], a0.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigK(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigK_44ec11f3ee7128be], a0.this$));
          }

          jdouble LegendreEllipticIntegral::bigK(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigK_bf28ed64d6e8576b], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigK(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigK_a3b854adede8eaaa], a0.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigKPrime(const ::org::hipparchus::complex::Complex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigKPrime_48ac0ef047162b30], a0.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigKPrime(const ::org::hipparchus::complex::FieldComplex & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigKPrime_44ec11f3ee7128be], a0.this$));
          }

          jdouble LegendreEllipticIntegral::bigKPrime(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigKPrime_bf28ed64d6e8576b], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigKPrime(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigKPrime_a3b854adede8eaaa], a0.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_2d58bd4896edb1e2], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_52ba3d392dc930c6], a0.this$, a1.this$));
          }

          jdouble LegendreEllipticIntegral::bigPi(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigPi_82f92590f4247da1], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigPi(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigPi_b5ecd7df9e053968], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_373272692db3c8df], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_232ee5b9d52b0bf0], a0.this$, a1.this$, a2.this$));
          }

          jdouble LegendreEllipticIntegral::bigPi(jdouble a0, jdouble a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_bigPi_db06d8c3fc3d9670], a0, a1, a2);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::bigPi(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_bigPi_3130e338b3b4d904], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::Complex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2, const ::org::hipparchus::complex::ComplexUnivariateIntegrator & a3, jint a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_41b6dc3375b24d53], a0.this$, a1.this$, a2.this$, a3.this$, a4));
          }

          ::org::hipparchus::complex::FieldComplex LegendreEllipticIntegral::bigPi(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2, const ::org::hipparchus::complex::FieldComplexUnivariateIntegrator & a3, jint a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_bigPi_da40dcd5961779ff], a0.this$, a1.this$, a2.this$, a3.this$, a4));
          }

          jdouble LegendreEllipticIntegral::nome(jdouble a0)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_nome_bf28ed64d6e8576b], a0);
          }

          ::org::hipparchus::CalculusFieldElement LegendreEllipticIntegral::nome(const ::org::hipparchus::CalculusFieldElement & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_nome_a3b854adede8eaaa], a0.this$));
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
        namespace legendre {
          static PyObject *t_LegendreEllipticIntegral_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LegendreEllipticIntegral_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_LegendreEllipticIntegral_bigD(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigE(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigF(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigK(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigKPrime(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_bigPi(PyTypeObject *type, PyObject *args);
          static PyObject *t_LegendreEllipticIntegral_nome(PyTypeObject *type, PyObject *args);

          static PyMethodDef t_LegendreEllipticIntegral__methods_[] = {
            DECLARE_METHOD(t_LegendreEllipticIntegral, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigD, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigE, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigF, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigK, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigKPrime, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, bigPi, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_LegendreEllipticIntegral, nome, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(LegendreEllipticIntegral)[] = {
            { Py_tp_methods, t_LegendreEllipticIntegral__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(LegendreEllipticIntegral)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(LegendreEllipticIntegral, t_LegendreEllipticIntegral, LegendreEllipticIntegral);

          void t_LegendreEllipticIntegral::install(PyObject *module)
          {
            installType(&PY_TYPE(LegendreEllipticIntegral), &PY_TYPE_DEF(LegendreEllipticIntegral), module, "LegendreEllipticIntegral", 0);
          }

          void t_LegendreEllipticIntegral::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreEllipticIntegral), "class_", make_descriptor(LegendreEllipticIntegral::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreEllipticIntegral), "wrapfn_", make_descriptor(t_LegendreEllipticIntegral::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(LegendreEllipticIntegral), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_LegendreEllipticIntegral_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, LegendreEllipticIntegral::initializeClass, 1)))
              return NULL;
            return t_LegendreEllipticIntegral::wrap_Object(LegendreEllipticIntegral(((t_LegendreEllipticIntegral *) arg)->object.this$));
          }
          static PyObject *t_LegendreEllipticIntegral_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, LegendreEllipticIntegral::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_LegendreEllipticIntegral_bigD(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigD(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigD", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigE(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::ComplexUnivariateIntegrator a2((jobject) NULL);
                jint a3;
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkI", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::ComplexUnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplexUnivariateIntegrator a2((jobject) NULL);
                PyTypeObject **p2;
                jint a3;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKI", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplexUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplexUnivariateIntegrator::parameters_, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigE(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigE", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigF(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 4:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::ComplexUnivariateIntegrator a2((jobject) NULL);
                jint a3;
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkI", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::ComplexUnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplexUnivariateIntegrator a2((jobject) NULL);
                PyTypeObject **p2;
                jint a3;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKI", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplexUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplexUnivariateIntegrator::parameters_, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigF(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigF", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigK(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigK(a0));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigK(a0));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigK(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigK(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigK", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigKPrime(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::complex::Complex::initializeClass, &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigKPrime(a0));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigKPrime(a0));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigKPrime(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigKPrime(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigKPrime", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_bigPi(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 3:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::ComplexUnivariateIntegrator a3((jobject) NULL);
                jint a4;
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkkI", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::ComplexUnivariateIntegrator::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2, a3, a4));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplexUnivariateIntegrator a3((jobject) NULL);
                PyTypeObject **p3;
                jint a4;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKKI", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplexUnivariateIntegrator::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplexUnivariateIntegrator::parameters_, &a4))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::bigPi(a0, a1, a2, a3, a4));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "bigPi", args);
            return NULL;
          }

          static PyObject *t_LegendreEllipticIntegral_nome(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                jdouble result;

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::nome(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::legendre::LegendreEllipticIntegral::nome(a0));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "nome", args);
            return NULL;
          }
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
          mids$[mid_value_1ae308af83874c2b] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;)[[Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< JArray< ::org::hipparchus::CalculusFieldElement > > CalculusFieldUnivariateMatrixFunction::value(const ::org::hipparchus::CalculusFieldElement & a0) const
      {
        return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_value_1ae308af83874c2b], a0.this$));
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
#include "org/hipparchus/analysis/differentiation/DSFactory$DSField.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *DSFactory$DSField::class$ = NULL;
        jmethodID *DSFactory$DSField::mids$ = NULL;
        bool DSFactory$DSField::live$ = false;

        jclass DSFactory$DSField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/DSFactory$DSField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_72faff9b05f5ed5e] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getOne_ce114c5dd035d753] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getPi_ce114c5dd035d753] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_getRuntimeClass_d5247e4b166c4ce8] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_ce114c5dd035d753] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");
            mids$[mid_hashCode_d6ab429752e7c267] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean DSFactory$DSField::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_72faff9b05f5ed5e], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory$DSField::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getOne_ce114c5dd035d753]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory$DSField::getPi() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPi_ce114c5dd035d753]));
        }

        ::java::lang::Class DSFactory$DSField::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d5247e4b166c4ce8]));
        }

        ::org::hipparchus::analysis::differentiation::DerivativeStructure DSFactory$DSField::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::DerivativeStructure(env->callObjectMethod(this$, mids$[mid_getZero_ce114c5dd035d753]));
        }

        jint DSFactory$DSField::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_d6ab429752e7c267]);
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
        static PyObject *t_DSFactory$DSField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSFactory$DSField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DSFactory$DSField_equals(t_DSFactory$DSField *self, PyObject *args);
        static PyObject *t_DSFactory$DSField_getOne(t_DSFactory$DSField *self);
        static PyObject *t_DSFactory$DSField_getPi(t_DSFactory$DSField *self);
        static PyObject *t_DSFactory$DSField_getRuntimeClass(t_DSFactory$DSField *self);
        static PyObject *t_DSFactory$DSField_getZero(t_DSFactory$DSField *self);
        static PyObject *t_DSFactory$DSField_hashCode(t_DSFactory$DSField *self, PyObject *args);
        static PyObject *t_DSFactory$DSField_get__one(t_DSFactory$DSField *self, void *data);
        static PyObject *t_DSFactory$DSField_get__pi(t_DSFactory$DSField *self, void *data);
        static PyObject *t_DSFactory$DSField_get__runtimeClass(t_DSFactory$DSField *self, void *data);
        static PyObject *t_DSFactory$DSField_get__zero(t_DSFactory$DSField *self, void *data);
        static PyGetSetDef t_DSFactory$DSField__fields_[] = {
          DECLARE_GET_FIELD(t_DSFactory$DSField, one),
          DECLARE_GET_FIELD(t_DSFactory$DSField, pi),
          DECLARE_GET_FIELD(t_DSFactory$DSField, runtimeClass),
          DECLARE_GET_FIELD(t_DSFactory$DSField, zero),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DSFactory$DSField__methods_[] = {
          DECLARE_METHOD(t_DSFactory$DSField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSFactory$DSField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DSFactory$DSField, equals, METH_VARARGS),
          DECLARE_METHOD(t_DSFactory$DSField, getOne, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory$DSField, getPi, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory$DSField, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory$DSField, getZero, METH_NOARGS),
          DECLARE_METHOD(t_DSFactory$DSField, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DSFactory$DSField)[] = {
          { Py_tp_methods, t_DSFactory$DSField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_DSFactory$DSField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DSFactory$DSField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DSFactory$DSField, t_DSFactory$DSField, DSFactory$DSField);

        void t_DSFactory$DSField::install(PyObject *module)
        {
          installType(&PY_TYPE(DSFactory$DSField), &PY_TYPE_DEF(DSFactory$DSField), module, "DSFactory$DSField", 0);
        }

        void t_DSFactory$DSField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory$DSField), "class_", make_descriptor(DSFactory$DSField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory$DSField), "wrapfn_", make_descriptor(t_DSFactory$DSField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DSFactory$DSField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DSFactory$DSField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DSFactory$DSField::initializeClass, 1)))
            return NULL;
          return t_DSFactory$DSField::wrap_Object(DSFactory$DSField(((t_DSFactory$DSField *) arg)->object.this$));
        }
        static PyObject *t_DSFactory$DSField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DSFactory$DSField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DSFactory$DSField_equals(t_DSFactory$DSField *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(DSFactory$DSField), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_DSFactory$DSField_getOne(t_DSFactory$DSField *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DSFactory$DSField_getPi(t_DSFactory$DSField *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DSFactory$DSField_getRuntimeClass(t_DSFactory$DSField *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::analysis::differentiation::PY_TYPE(DerivativeStructure));
        }

        static PyObject *t_DSFactory$DSField_getZero(t_DSFactory$DSField *self)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(result);
        }

        static PyObject *t_DSFactory$DSField_hashCode(t_DSFactory$DSField *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(DSFactory$DSField), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_DSFactory$DSField_get__one(t_DSFactory$DSField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_DSFactory$DSField_get__pi(t_DSFactory$DSField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_DSFactory$DSField_get__runtimeClass(t_DSFactory$DSField *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_DSFactory$DSField_get__zero(t_DSFactory$DSField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::DerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/section/RinexComment.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace section {

          ::java::lang::Class *RinexComment::class$ = NULL;
          jmethodID *RinexComment::mids$ = NULL;
          bool RinexComment::live$ = false;

          jclass RinexComment::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/section/RinexComment");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a3e920ca64bbfb6f] = env->getMethodID(cls, "<init>", "(ILjava/lang/String;)V");
              mids$[mid_getLineNumber_d6ab429752e7c267] = env->getMethodID(cls, "getLineNumber", "()I");
              mids$[mid_getText_d2c8eb4129821f0e] = env->getMethodID(cls, "getText", "()Ljava/lang/String;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexComment::RinexComment(jint a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a3e920ca64bbfb6f, a0, a1.this$)) {}

          jint RinexComment::getLineNumber() const
          {
            return env->callIntMethod(this$, mids$[mid_getLineNumber_d6ab429752e7c267]);
          }

          ::java::lang::String RinexComment::getText() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getText_d2c8eb4129821f0e]));
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
        namespace section {
          static PyObject *t_RinexComment_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexComment_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexComment_init_(t_RinexComment *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexComment_getLineNumber(t_RinexComment *self);
          static PyObject *t_RinexComment_getText(t_RinexComment *self);
          static PyObject *t_RinexComment_get__lineNumber(t_RinexComment *self, void *data);
          static PyObject *t_RinexComment_get__text(t_RinexComment *self, void *data);
          static PyGetSetDef t_RinexComment__fields_[] = {
            DECLARE_GET_FIELD(t_RinexComment, lineNumber),
            DECLARE_GET_FIELD(t_RinexComment, text),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexComment__methods_[] = {
            DECLARE_METHOD(t_RinexComment, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexComment, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexComment, getLineNumber, METH_NOARGS),
            DECLARE_METHOD(t_RinexComment, getText, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexComment)[] = {
            { Py_tp_methods, t_RinexComment__methods_ },
            { Py_tp_init, (void *) t_RinexComment_init_ },
            { Py_tp_getset, t_RinexComment__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexComment)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexComment, t_RinexComment, RinexComment);

          void t_RinexComment::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexComment), &PY_TYPE_DEF(RinexComment), module, "RinexComment", 0);
          }

          void t_RinexComment::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexComment), "class_", make_descriptor(RinexComment::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexComment), "wrapfn_", make_descriptor(t_RinexComment::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexComment), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexComment_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexComment::initializeClass, 1)))
              return NULL;
            return t_RinexComment::wrap_Object(RinexComment(((t_RinexComment *) arg)->object.this$));
          }
          static PyObject *t_RinexComment_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexComment::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexComment_init_(t_RinexComment *self, PyObject *args, PyObject *kwds)
          {
            jint a0;
            ::java::lang::String a1((jobject) NULL);
            RinexComment object((jobject) NULL);

            if (!parseArgs(args, "Is", &a0, &a1))
            {
              INT_CALL(object = RinexComment(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexComment_getLineNumber(t_RinexComment *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLineNumber());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexComment_getText(t_RinexComment *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getText());
            return j2p(result);
          }

          static PyObject *t_RinexComment_get__lineNumber(t_RinexComment *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLineNumber());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_RinexComment_get__text(t_RinexComment *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getText());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/Aem.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemWriter::class$ = NULL;
              jmethodID *AemWriter::mids$ = NULL;
              bool AemWriter::live$ = false;
              jdouble AemWriter::CCSDS_AEM_VERS = (jdouble) 0;
              jint AemWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass AemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_803b88445e6f9607] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_19357b808e24508e] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/ndm/adm/aem/AemSegment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_AEM_VERS = env->getStaticDoubleField(cls, "CCSDS_AEM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemWriter::AemWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_803b88445e6f9607, a0.this$, a1.this$, a2.this$)) {}
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
              static PyObject *t_AemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemWriter_of_(t_AemWriter *self, PyObject *args);
              static int t_AemWriter_init_(t_AemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemWriter_get__parameters_(t_AemWriter *self, void *data);
              static PyGetSetDef t_AemWriter__fields_[] = {
                DECLARE_GET_FIELD(t_AemWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemWriter__methods_[] = {
                DECLARE_METHOD(t_AemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemWriter)[] = {
                { Py_tp_methods, t_AemWriter__methods_ },
                { Py_tp_init, (void *) t_AemWriter_init_ },
                { Py_tp_getset, t_AemWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(AemWriter, t_AemWriter, AemWriter);
              PyObject *t_AemWriter::wrap_Object(const AemWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_AemWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemWriter *self = (t_AemWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_AemWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_AemWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemWriter *self = (t_AemWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_AemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(AemWriter), &PY_TYPE_DEF(AemWriter), module, "AemWriter", 0);
              }

              void t_AemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "class_", make_descriptor(AemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "wrapfn_", make_descriptor(t_AemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(AemWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "CCSDS_AEM_VERS", make_descriptor(AemWriter::CCSDS_AEM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "KVN_PADDING_WIDTH", make_descriptor(AemWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_AemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemWriter::initializeClass, 1)))
                  return NULL;
                return t_AemWriter::wrap_Object(AemWriter(((t_AemWriter *) arg)->object.this$));
              }
              static PyObject *t_AemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AemWriter_of_(t_AemWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_AemWriter_init_(t_AemWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                AemWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = AemWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemSegment);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(Aem);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_AemWriter_get__parameters_(t_AemWriter *self, void *data)
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
#include "org/orekit/frames/encounter/DefaultEncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *DefaultEncounterLOF::class$ = NULL;
        jmethodID *DefaultEncounterLOF::mids$ = NULL;
        bool DefaultEncounterLOF::live$ = false;

        jclass DefaultEncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/DefaultEncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b375bc79f588a172] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/FieldPVCoordinates;)V");
            mids$[mid_init$_433e87d544ab05d5] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinates;)V");
            mids$[mid_getAxisNormalToCollisionPlane_032312bdeb3f2f93] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_10f9413c61ea347a] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_rotationFromInertial_b6feed19a568aaff] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_0c632cd592d334d1] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DefaultEncounterLOF::DefaultEncounterLOF(const ::org::orekit::utils::FieldPVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_b375bc79f588a172, a0.this$)) {}

        DefaultEncounterLOF::DefaultEncounterLOF(const ::org::orekit::utils::PVCoordinates & a0) : ::org::orekit::frames::encounter::AbstractEncounterLOF(env->newObject(initializeClass, &mids$, mid_init$_433e87d544ab05d5, a0.this$)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D DefaultEncounterLOF::getAxisNormalToCollisionPlane() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_032312bdeb3f2f93]));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D DefaultEncounterLOF::getAxisNormalToCollisionPlane(const ::org::hipparchus::Field & a0) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAxisNormalToCollisionPlane_10f9413c61ea347a], a0.this$));
        }

        ::java::lang::String DefaultEncounterLOF::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Rotation DefaultEncounterLOF::rotationFromInertial(const ::org::orekit::utils::PVCoordinates & a0, const ::org::orekit::utils::PVCoordinates & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_b6feed19a568aaff], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldRotation DefaultEncounterLOF::rotationFromInertial(const ::org::hipparchus::Field & a0, const ::org::orekit::utils::FieldPVCoordinates & a1, const ::org::orekit::utils::FieldPVCoordinates & a2) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_rotationFromInertial_0c632cd592d334d1], a0.this$, a1.this$, a2.this$));
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
    namespace frames {
      namespace encounter {
        static PyObject *t_DefaultEncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DefaultEncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DefaultEncounterLOF_init_(t_DefaultEncounterLOF *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DefaultEncounterLOF_getAxisNormalToCollisionPlane(t_DefaultEncounterLOF *self, PyObject *args);
        static PyObject *t_DefaultEncounterLOF_getName(t_DefaultEncounterLOF *self, PyObject *args);
        static PyObject *t_DefaultEncounterLOF_rotationFromInertial(t_DefaultEncounterLOF *self, PyObject *args);
        static PyObject *t_DefaultEncounterLOF_get__axisNormalToCollisionPlane(t_DefaultEncounterLOF *self, void *data);
        static PyObject *t_DefaultEncounterLOF_get__name(t_DefaultEncounterLOF *self, void *data);
        static PyGetSetDef t_DefaultEncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_DefaultEncounterLOF, axisNormalToCollisionPlane),
          DECLARE_GET_FIELD(t_DefaultEncounterLOF, name),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DefaultEncounterLOF__methods_[] = {
          DECLARE_METHOD(t_DefaultEncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DefaultEncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DefaultEncounterLOF, getAxisNormalToCollisionPlane, METH_VARARGS),
          DECLARE_METHOD(t_DefaultEncounterLOF, getName, METH_VARARGS),
          DECLARE_METHOD(t_DefaultEncounterLOF, rotationFromInertial, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DefaultEncounterLOF)[] = {
          { Py_tp_methods, t_DefaultEncounterLOF__methods_ },
          { Py_tp_init, (void *) t_DefaultEncounterLOF_init_ },
          { Py_tp_getset, t_DefaultEncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DefaultEncounterLOF)[] = {
          &PY_TYPE_DEF(::org::orekit::frames::encounter::AbstractEncounterLOF),
          NULL
        };

        DEFINE_TYPE(DefaultEncounterLOF, t_DefaultEncounterLOF, DefaultEncounterLOF);

        void t_DefaultEncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(DefaultEncounterLOF), &PY_TYPE_DEF(DefaultEncounterLOF), module, "DefaultEncounterLOF", 0);
        }

        void t_DefaultEncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultEncounterLOF), "class_", make_descriptor(DefaultEncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultEncounterLOF), "wrapfn_", make_descriptor(t_DefaultEncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultEncounterLOF), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DefaultEncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DefaultEncounterLOF::initializeClass, 1)))
            return NULL;
          return t_DefaultEncounterLOF::wrap_Object(DefaultEncounterLOF(((t_DefaultEncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_DefaultEncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DefaultEncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DefaultEncounterLOF_init_(t_DefaultEncounterLOF *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::utils::FieldPVCoordinates a0((jobject) NULL);
              PyTypeObject **p0;
              DefaultEncounterLOF object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                INT_CALL(object = DefaultEncounterLOF(a0));
                self->object = object;
                break;
              }
            }
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              DefaultEncounterLOF object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &a0))
              {
                INT_CALL(object = DefaultEncounterLOF(a0));
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

        static PyObject *t_DefaultEncounterLOF_getAxisNormalToCollisionPlane(t_DefaultEncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
              OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane());
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
              {
                OBJ_CALL(result = self->object.getAxisNormalToCollisionPlane(a0));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(DefaultEncounterLOF), (PyObject *) self, "getAxisNormalToCollisionPlane", args, 2);
        }

        static PyObject *t_DefaultEncounterLOF_getName(t_DefaultEncounterLOF *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getName());
            return j2p(result);
          }

          return callSuper(PY_TYPE(DefaultEncounterLOF), (PyObject *) self, "getName", args, 2);
        }

        static PyObject *t_DefaultEncounterLOF_rotationFromInertial(t_DefaultEncounterLOF *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::utils::PVCoordinates a0((jobject) NULL);
              ::org::orekit::utils::PVCoordinates a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

              if (!parseArgs(args, "kk", ::org::orekit::utils::PVCoordinates::initializeClass, ::org::orekit::utils::PVCoordinates::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
              }
            }
            break;
           case 3:
            {
              ::org::hipparchus::Field a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::orekit::utils::FieldPVCoordinates a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::orekit::utils::FieldPVCoordinates a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::Field::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, ::org::orekit::utils::FieldPVCoordinates::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::orekit::utils::t_FieldPVCoordinates::parameters_, &a2, &p2, ::org::orekit::utils::t_FieldPVCoordinates::parameters_))
              {
                OBJ_CALL(result = self->object.rotationFromInertial(a0, a1, a2));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
              }
            }
          }

          return callSuper(PY_TYPE(DefaultEncounterLOF), (PyObject *) self, "rotationFromInertial", args, 2);
        }

        static PyObject *t_DefaultEncounterLOF_get__axisNormalToCollisionPlane(t_DefaultEncounterLOF *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getAxisNormalToCollisionPlane());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_DefaultEncounterLOF_get__name(t_DefaultEncounterLOF *self, void *data)
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
#include "org/orekit/files/sinex/DcbStation.h"
#include "java/lang/Iterable.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/files/sinex/DcbDescription.h"
#include "org/orekit/files/sinex/Dcb.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sinex {

        ::java::lang::Class *DcbStation::class$ = NULL;
        jmethodID *DcbStation::mids$ = NULL;
        bool DcbStation::live$ = false;

        jclass DcbStation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sinex/DcbStation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_105e1eadb709d9ac] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;)V");
            mids$[mid_addDcb_c1ef57b50222ddb1] = env->getMethodID(cls, "addDcb", "(Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/files/sinex/Dcb;)V");
            mids$[mid_getAvailableSatelliteSystems_4437705486eb88c0] = env->getMethodID(cls, "getAvailableSatelliteSystems", "()Ljava/lang/Iterable;");
            mids$[mid_getDcbData_5001bdf17b1c6ae6] = env->getMethodID(cls, "getDcbData", "(Lorg/orekit/gnss/SatelliteSystem;)Lorg/orekit/files/sinex/Dcb;");
            mids$[mid_getDescription_eaa48fe1591febab] = env->getMethodID(cls, "getDescription", "()Lorg/orekit/files/sinex/DcbDescription;");
            mids$[mid_getSiteCode_d2c8eb4129821f0e] = env->getMethodID(cls, "getSiteCode", "()Ljava/lang/String;");
            mids$[mid_setDescription_d9640e5f527b80a1] = env->getMethodID(cls, "setDescription", "(Lorg/orekit/files/sinex/DcbDescription;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DcbStation::DcbStation(const ::java::lang::String & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_105e1eadb709d9ac, a0.this$)) {}

        void DcbStation::addDcb(const ::org::orekit::gnss::SatelliteSystem & a0, const ::org::orekit::files::sinex::Dcb & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addDcb_c1ef57b50222ddb1], a0.this$, a1.this$);
        }

        ::java::lang::Iterable DcbStation::getAvailableSatelliteSystems() const
        {
          return ::java::lang::Iterable(env->callObjectMethod(this$, mids$[mid_getAvailableSatelliteSystems_4437705486eb88c0]));
        }

        ::org::orekit::files::sinex::Dcb DcbStation::getDcbData(const ::org::orekit::gnss::SatelliteSystem & a0) const
        {
          return ::org::orekit::files::sinex::Dcb(env->callObjectMethod(this$, mids$[mid_getDcbData_5001bdf17b1c6ae6], a0.this$));
        }

        ::org::orekit::files::sinex::DcbDescription DcbStation::getDescription() const
        {
          return ::org::orekit::files::sinex::DcbDescription(env->callObjectMethod(this$, mids$[mid_getDescription_eaa48fe1591febab]));
        }

        ::java::lang::String DcbStation::getSiteCode() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSiteCode_d2c8eb4129821f0e]));
        }

        void DcbStation::setDescription(const ::org::orekit::files::sinex::DcbDescription & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setDescription_d9640e5f527b80a1], a0.this$);
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
      namespace sinex {
        static PyObject *t_DcbStation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DcbStation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_DcbStation_init_(t_DcbStation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DcbStation_addDcb(t_DcbStation *self, PyObject *args);
        static PyObject *t_DcbStation_getAvailableSatelliteSystems(t_DcbStation *self);
        static PyObject *t_DcbStation_getDcbData(t_DcbStation *self, PyObject *arg);
        static PyObject *t_DcbStation_getDescription(t_DcbStation *self);
        static PyObject *t_DcbStation_getSiteCode(t_DcbStation *self);
        static PyObject *t_DcbStation_setDescription(t_DcbStation *self, PyObject *arg);
        static PyObject *t_DcbStation_get__availableSatelliteSystems(t_DcbStation *self, void *data);
        static PyObject *t_DcbStation_get__description(t_DcbStation *self, void *data);
        static int t_DcbStation_set__description(t_DcbStation *self, PyObject *arg, void *data);
        static PyObject *t_DcbStation_get__siteCode(t_DcbStation *self, void *data);
        static PyGetSetDef t_DcbStation__fields_[] = {
          DECLARE_GET_FIELD(t_DcbStation, availableSatelliteSystems),
          DECLARE_GETSET_FIELD(t_DcbStation, description),
          DECLARE_GET_FIELD(t_DcbStation, siteCode),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DcbStation__methods_[] = {
          DECLARE_METHOD(t_DcbStation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbStation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DcbStation, addDcb, METH_VARARGS),
          DECLARE_METHOD(t_DcbStation, getAvailableSatelliteSystems, METH_NOARGS),
          DECLARE_METHOD(t_DcbStation, getDcbData, METH_O),
          DECLARE_METHOD(t_DcbStation, getDescription, METH_NOARGS),
          DECLARE_METHOD(t_DcbStation, getSiteCode, METH_NOARGS),
          DECLARE_METHOD(t_DcbStation, setDescription, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DcbStation)[] = {
          { Py_tp_methods, t_DcbStation__methods_ },
          { Py_tp_init, (void *) t_DcbStation_init_ },
          { Py_tp_getset, t_DcbStation__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DcbStation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(DcbStation, t_DcbStation, DcbStation);

        void t_DcbStation::install(PyObject *module)
        {
          installType(&PY_TYPE(DcbStation), &PY_TYPE_DEF(DcbStation), module, "DcbStation", 0);
        }

        void t_DcbStation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbStation), "class_", make_descriptor(DcbStation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbStation), "wrapfn_", make_descriptor(t_DcbStation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DcbStation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DcbStation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DcbStation::initializeClass, 1)))
            return NULL;
          return t_DcbStation::wrap_Object(DcbStation(((t_DcbStation *) arg)->object.this$));
        }
        static PyObject *t_DcbStation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DcbStation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_DcbStation_init_(t_DcbStation *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          DcbStation object((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            INT_CALL(object = DcbStation(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DcbStation_addDcb(t_DcbStation *self, PyObject *args)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::files::sinex::Dcb a1((jobject) NULL);

          if (!parseArgs(args, "Kk", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::files::sinex::Dcb::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1))
          {
            OBJ_CALL(self->object.addDcb(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addDcb", args);
          return NULL;
        }

        static PyObject *t_DcbStation_getAvailableSatelliteSystems(t_DcbStation *self)
        {
          ::java::lang::Iterable result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableSatelliteSystems());
          return ::java::lang::t_Iterable::wrap_Object(result, ::org::orekit::gnss::PY_TYPE(SatelliteSystem));
        }

        static PyObject *t_DcbStation_getDcbData(t_DcbStation *self, PyObject *arg)
        {
          ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::files::sinex::Dcb result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
          {
            OBJ_CALL(result = self->object.getDcbData(a0));
            return ::org::orekit::files::sinex::t_Dcb::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDcbData", arg);
          return NULL;
        }

        static PyObject *t_DcbStation_getDescription(t_DcbStation *self)
        {
          ::org::orekit::files::sinex::DcbDescription result((jobject) NULL);
          OBJ_CALL(result = self->object.getDescription());
          return ::org::orekit::files::sinex::t_DcbDescription::wrap_Object(result);
        }

        static PyObject *t_DcbStation_getSiteCode(t_DcbStation *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getSiteCode());
          return j2p(result);
        }

        static PyObject *t_DcbStation_setDescription(t_DcbStation *self, PyObject *arg)
        {
          ::org::orekit::files::sinex::DcbDescription a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::files::sinex::DcbDescription::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setDescription(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setDescription", arg);
          return NULL;
        }

        static PyObject *t_DcbStation_get__availableSatelliteSystems(t_DcbStation *self, void *data)
        {
          ::java::lang::Iterable value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableSatelliteSystems());
          return ::java::lang::t_Iterable::wrap_Object(value);
        }

        static PyObject *t_DcbStation_get__description(t_DcbStation *self, void *data)
        {
          ::org::orekit::files::sinex::DcbDescription value((jobject) NULL);
          OBJ_CALL(value = self->object.getDescription());
          return ::org::orekit::files::sinex::t_DcbDescription::wrap_Object(value);
        }
        static int t_DcbStation_set__description(t_DcbStation *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::files::sinex::DcbDescription value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::files::sinex::DcbDescription::initializeClass, &value))
            {
              INT_CALL(self->object.setDescription(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "description", arg);
          return -1;
        }

        static PyObject *t_DcbStation_get__siteCode(t_DcbStation *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getSiteCode());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemData.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemData::class$ = NULL;
              jmethodID *AemData::mids$ = NULL;
              bool AemData::live$ = false;

              jclass AemData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_addData_3e7d890dd879c0ba] = env->getMethodID(cls, "addData", "(Lorg/orekit/utils/TimeStampedAngularCoordinates;)Z");
                  mids$[mid_getAngularCoordinates_d751c1a57012b438] = env->getMethodID(cls, "getAngularCoordinates", "()Ljava/util/List;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemData::AemData() : ::org::orekit::files::ccsds::section::CommentsContainer(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

              jboolean AemData::addData(const ::org::orekit::utils::TimeStampedAngularCoordinates & a0) const
              {
                return env->callBooleanMethod(this$, mids$[mid_addData_3e7d890dd879c0ba], a0.this$);
              }

              ::java::util::List AemData::getAngularCoordinates() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAngularCoordinates_d751c1a57012b438]));
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
              static PyObject *t_AemData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AemData_init_(t_AemData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemData_addData(t_AemData *self, PyObject *arg);
              static PyObject *t_AemData_getAngularCoordinates(t_AemData *self);
              static PyObject *t_AemData_get__angularCoordinates(t_AemData *self, void *data);
              static PyGetSetDef t_AemData__fields_[] = {
                DECLARE_GET_FIELD(t_AemData, angularCoordinates),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemData__methods_[] = {
                DECLARE_METHOD(t_AemData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemData, addData, METH_O),
                DECLARE_METHOD(t_AemData, getAngularCoordinates, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemData)[] = {
                { Py_tp_methods, t_AemData__methods_ },
                { Py_tp_init, (void *) t_AemData_init_ },
                { Py_tp_getset, t_AemData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemData)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::section::CommentsContainer),
                NULL
              };

              DEFINE_TYPE(AemData, t_AemData, AemData);

              void t_AemData::install(PyObject *module)
              {
                installType(&PY_TYPE(AemData), &PY_TYPE_DEF(AemData), module, "AemData", 0);
              }

              void t_AemData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemData), "class_", make_descriptor(AemData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemData), "wrapfn_", make_descriptor(t_AemData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AemData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemData::initializeClass, 1)))
                  return NULL;
                return t_AemData::wrap_Object(AemData(((t_AemData *) arg)->object.this$));
              }
              static PyObject *t_AemData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AemData_init_(t_AemData *self, PyObject *args, PyObject *kwds)
              {
                AemData object((jobject) NULL);

                INT_CALL(object = AemData());
                self->object = object;

                return 0;
              }

              static PyObject *t_AemData_addData(t_AemData *self, PyObject *arg)
              {
                ::org::orekit::utils::TimeStampedAngularCoordinates a0((jobject) NULL);
                jboolean result;

                if (!parseArg(arg, "k", ::org::orekit::utils::TimeStampedAngularCoordinates::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.addData(a0));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "addData", arg);
                return NULL;
              }

              static PyObject *t_AemData_getAngularCoordinates(t_AemData *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(TimeStampedAngularCoordinates));
              }

              static PyObject *t_AemData_get__angularCoordinates(t_AemData *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getAngularCoordinates());
                return ::java::util::t_List::wrap_Object(value);
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
            mids$[mid_init$_4f45105e74b4598b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;Lorg/hipparchus/geometry/partitioning/SubHyperplane;)V");
            mids$[mid_getMinus_24c5633e830ec593] = env->getMethodID(cls, "getMinus", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getPlus_24c5633e830ec593] = env->getMethodID(cls, "getPlus", "()Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_getSide_fafa1267e93af015] = env->getMethodID(cls, "getSide", "()Lorg/hipparchus/geometry/partitioning/Side;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SubHyperplane$SplitSubHyperplane::SubHyperplane$SplitSubHyperplane(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0, const ::org::hipparchus::geometry::partitioning::SubHyperplane & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4f45105e74b4598b, a0.this$, a1.this$)) {}

        ::org::hipparchus::geometry::partitioning::SubHyperplane SubHyperplane$SplitSubHyperplane::getMinus() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getMinus_24c5633e830ec593]));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane SubHyperplane$SplitSubHyperplane::getPlus() const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_getPlus_24c5633e830ec593]));
        }

        ::org::hipparchus::geometry::partitioning::Side SubHyperplane$SplitSubHyperplane::getSide() const
        {
          return ::org::hipparchus::geometry::partitioning::Side(env->callObjectMethod(this$, mids$[mid_getSide_fafa1267e93af015]));
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
#include "org/orekit/files/ccsds/utils/parsing/PythonAbstractMessageParser.h"
#include "java/lang/Throwable.h"
#include "org/orekit/files/ccsds/utils/FileFormat.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace parsing {

            ::java::lang::Class *PythonAbstractMessageParser::class$ = NULL;
            jmethodID *PythonAbstractMessageParser::mids$ = NULL;
            bool PythonAbstractMessageParser::live$ = false;

            jclass PythonAbstractMessageParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/parsing/PythonAbstractMessageParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_build_704a5bee58538972] = env->getMethodID(cls, "build", "()Ljava/lang/Object;");
                mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");
                mids$[mid_reset_a23f5f7531d9b583] = env->getMethodID(cls, "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void PythonAbstractMessageParser::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
            }

            jlong PythonAbstractMessageParser::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
            }

            void PythonAbstractMessageParser::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_f5bbab7e97879358], a0);
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
          namespace parsing {
            static PyObject *t_PythonAbstractMessageParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractMessageParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonAbstractMessageParser_of_(t_PythonAbstractMessageParser *self, PyObject *args);
            static PyObject *t_PythonAbstractMessageParser_finalize(t_PythonAbstractMessageParser *self);
            static PyObject *t_PythonAbstractMessageParser_pythonExtension(t_PythonAbstractMessageParser *self, PyObject *args);
            static jobject JNICALL t_PythonAbstractMessageParser_build0(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractMessageParser_pythonDecRef1(JNIEnv *jenv, jobject jobj);
            static void JNICALL t_PythonAbstractMessageParser_reset2(JNIEnv *jenv, jobject jobj, jobject a0);
            static PyObject *t_PythonAbstractMessageParser_get__self(t_PythonAbstractMessageParser *self, void *data);
            static PyObject *t_PythonAbstractMessageParser_get__parameters_(t_PythonAbstractMessageParser *self, void *data);
            static PyGetSetDef t_PythonAbstractMessageParser__fields_[] = {
              DECLARE_GET_FIELD(t_PythonAbstractMessageParser, self),
              DECLARE_GET_FIELD(t_PythonAbstractMessageParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonAbstractMessageParser__methods_[] = {
              DECLARE_METHOD(t_PythonAbstractMessageParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractMessageParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonAbstractMessageParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_PythonAbstractMessageParser, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonAbstractMessageParser, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonAbstractMessageParser)[] = {
              { Py_tp_methods, t_PythonAbstractMessageParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_PythonAbstractMessageParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonAbstractMessageParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractMessageParser),
              NULL
            };

            DEFINE_TYPE(PythonAbstractMessageParser, t_PythonAbstractMessageParser, PythonAbstractMessageParser);
            PyObject *t_PythonAbstractMessageParser::wrap_Object(const PythonAbstractMessageParser& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonAbstractMessageParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractMessageParser *self = (t_PythonAbstractMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_PythonAbstractMessageParser::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_PythonAbstractMessageParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_PythonAbstractMessageParser *self = (t_PythonAbstractMessageParser *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_PythonAbstractMessageParser::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonAbstractMessageParser), &PY_TYPE_DEF(PythonAbstractMessageParser), module, "PythonAbstractMessageParser", 1);
            }

            void t_PythonAbstractMessageParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageParser), "class_", make_descriptor(PythonAbstractMessageParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageParser), "wrapfn_", make_descriptor(t_PythonAbstractMessageParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractMessageParser), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonAbstractMessageParser::initializeClass);
              JNINativeMethod methods[] = {
                { "build", "()Ljava/lang/Object;", (void *) t_PythonAbstractMessageParser_build0 },
                { "pythonDecRef", "()V", (void *) t_PythonAbstractMessageParser_pythonDecRef1 },
                { "reset", "(Lorg/orekit/files/ccsds/utils/FileFormat;)V", (void *) t_PythonAbstractMessageParser_reset2 },
              };
              env->registerNatives(cls, methods, 3);
            }

            static PyObject *t_PythonAbstractMessageParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonAbstractMessageParser::initializeClass, 1)))
                return NULL;
              return t_PythonAbstractMessageParser::wrap_Object(PythonAbstractMessageParser(((t_PythonAbstractMessageParser *) arg)->object.this$));
            }
            static PyObject *t_PythonAbstractMessageParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonAbstractMessageParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_PythonAbstractMessageParser_of_(t_PythonAbstractMessageParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_PythonAbstractMessageParser_finalize(t_PythonAbstractMessageParser *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonAbstractMessageParser_pythonExtension(t_PythonAbstractMessageParser *self, PyObject *args)
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

            static jobject JNICALL t_PythonAbstractMessageParser_build0(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageParser::mids$[PythonAbstractMessageParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::java::lang::Object value((jobject) NULL);
              PyObject *result = PyObject_CallMethod(obj, "build", "");
              if (!result)
                throwPythonError();
              else if (parseArg(result, "o", &value))
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

            static void JNICALL t_PythonAbstractMessageParser_pythonDecRef1(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageParser::mids$[PythonAbstractMessageParser::mid_pythonExtension_42c72b98e3c2e08a]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonAbstractMessageParser::mids$[PythonAbstractMessageParser::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static void JNICALL t_PythonAbstractMessageParser_reset2(JNIEnv *jenv, jobject jobj, jobject a0)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractMessageParser::mids$[PythonAbstractMessageParser::mid_pythonExtension_42c72b98e3c2e08a]);
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

            static PyObject *t_PythonAbstractMessageParser_get__self(t_PythonAbstractMessageParser *self, void *data)
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
            static PyObject *t_PythonAbstractMessageParser_get__parameters_(t_PythonAbstractMessageParser *self, void *data)
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
#include "org/orekit/models/earth/troposphere/TroposphericModelUtils.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace troposphere {

          ::java::lang::Class *TroposphericModelUtils::class$ = NULL;
          jmethodID *TroposphericModelUtils::mids$ = NULL;
          bool TroposphericModelUtils::live$ = false;

          jclass TroposphericModelUtils::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/troposphere/TroposphericModelUtils");

              mids$ = new jmethodID[max_mid];
              mids$[mid_computeHeightCorrection_82f92590f4247da1] = env->getStaticMethodID(cls, "computeHeightCorrection", "(DD)D");
              mids$[mid_computeHeightCorrection_4d53faf529fb585e] = env->getStaticMethodID(cls, "computeHeightCorrection", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/Field;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_mappingFunction_45d926aea7231320] = env->getStaticMethodID(cls, "mappingFunction", "(DDDD)D");
              mids$[mid_mappingFunction_d2c2bcf9f0e55408] = env->getStaticMethodID(cls, "mappingFunction", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble TroposphericModelUtils::computeHeightCorrection(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_computeHeightCorrection_82f92590f4247da1], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement TroposphericModelUtils::computeHeightCorrection(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::Field & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_computeHeightCorrection_4d53faf529fb585e], a0.this$, a1.this$, a2.this$));
          }

          jdouble TroposphericModelUtils::mappingFunction(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_mappingFunction_45d926aea7231320], a0, a1, a2, a3);
          }

          ::org::hipparchus::CalculusFieldElement TroposphericModelUtils::mappingFunction(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_mappingFunction_d2c2bcf9f0e55408], a0.this$, a1.this$, a2.this$, a3.this$));
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
          static PyObject *t_TroposphericModelUtils_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TroposphericModelUtils_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TroposphericModelUtils_computeHeightCorrection(PyTypeObject *type, PyObject *args);
          static PyObject *t_TroposphericModelUtils_mappingFunction(PyTypeObject *type, PyObject *args);

          static PyMethodDef t_TroposphericModelUtils__methods_[] = {
            DECLARE_METHOD(t_TroposphericModelUtils, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TroposphericModelUtils, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TroposphericModelUtils, computeHeightCorrection, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_TroposphericModelUtils, mappingFunction, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TroposphericModelUtils)[] = {
            { Py_tp_methods, t_TroposphericModelUtils__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TroposphericModelUtils)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TroposphericModelUtils, t_TroposphericModelUtils, TroposphericModelUtils);

          void t_TroposphericModelUtils::install(PyObject *module)
          {
            installType(&PY_TYPE(TroposphericModelUtils), &PY_TYPE_DEF(TroposphericModelUtils), module, "TroposphericModelUtils", 0);
          }

          void t_TroposphericModelUtils::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TroposphericModelUtils), "class_", make_descriptor(TroposphericModelUtils::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TroposphericModelUtils), "wrapfn_", make_descriptor(t_TroposphericModelUtils::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TroposphericModelUtils), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TroposphericModelUtils_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TroposphericModelUtils::initializeClass, 1)))
              return NULL;
            return t_TroposphericModelUtils::wrap_Object(TroposphericModelUtils(((t_TroposphericModelUtils *) arg)->object.this$));
          }
          static PyObject *t_TroposphericModelUtils_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TroposphericModelUtils::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_TroposphericModelUtils_computeHeightCorrection(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::troposphere::TroposphericModelUtils::computeHeightCorrection(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 3:
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::Field a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_Field::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::troposphere::TroposphericModelUtils::computeHeightCorrection(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "computeHeightCorrection", args);
            return NULL;
          }

          static PyObject *t_TroposphericModelUtils_mappingFunction(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble result;

                if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::troposphere::TroposphericModelUtils::mappingFunction(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
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
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::orekit::models::earth::troposphere::TroposphericModelUtils::mappingFunction(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "mappingFunction", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/sampling/OrekitStepHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *OrekitStepHandler::class$ = NULL;
        jmethodID *OrekitStepHandler::mids$ = NULL;
        bool OrekitStepHandler::live$ = false;

        jclass OrekitStepHandler::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/OrekitStepHandler");

            mids$ = new jmethodID[max_mid];
            mids$[mid_finish_72b846eb87f3af9a] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/SpacecraftState;)V");
            mids$[mid_handleStep_9db9d9fe85cac7f9] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/OrekitStepInterpolator;)V");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void OrekitStepHandler::finish(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_72b846eb87f3af9a], a0.this$);
        }

        void OrekitStepHandler::handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_9db9d9fe85cac7f9], a0.this$);
        }

        void OrekitStepHandler::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
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
        static PyObject *t_OrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OrekitStepHandler_finish(t_OrekitStepHandler *self, PyObject *arg);
        static PyObject *t_OrekitStepHandler_handleStep(t_OrekitStepHandler *self, PyObject *arg);
        static PyObject *t_OrekitStepHandler_init(t_OrekitStepHandler *self, PyObject *args);

        static PyMethodDef t_OrekitStepHandler__methods_[] = {
          DECLARE_METHOD(t_OrekitStepHandler, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepHandler, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OrekitStepHandler, finish, METH_O),
          DECLARE_METHOD(t_OrekitStepHandler, handleStep, METH_O),
          DECLARE_METHOD(t_OrekitStepHandler, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OrekitStepHandler)[] = {
          { Py_tp_methods, t_OrekitStepHandler__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OrekitStepHandler)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OrekitStepHandler, t_OrekitStepHandler, OrekitStepHandler);

        void t_OrekitStepHandler::install(PyObject *module)
        {
          installType(&PY_TYPE(OrekitStepHandler), &PY_TYPE_DEF(OrekitStepHandler), module, "OrekitStepHandler", 0);
        }

        void t_OrekitStepHandler::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepHandler), "class_", make_descriptor(OrekitStepHandler::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepHandler), "wrapfn_", make_descriptor(t_OrekitStepHandler::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OrekitStepHandler), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OrekitStepHandler_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OrekitStepHandler::initializeClass, 1)))
            return NULL;
          return t_OrekitStepHandler::wrap_Object(OrekitStepHandler(((t_OrekitStepHandler *) arg)->object.this$));
        }
        static PyObject *t_OrekitStepHandler_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OrekitStepHandler::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_OrekitStepHandler_finish(t_OrekitStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_OrekitStepHandler_handleStep(t_OrekitStepHandler *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::OrekitStepInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::sampling::OrekitStepInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_OrekitStepHandler_init(t_OrekitStepHandler *self, PyObject *args)
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
#include "org/orekit/time/SatelliteClockScale.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/time/TimeComponents.h"
#include "java/lang/Class.h"
#include "org/orekit/time/DateComponents.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
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
          mids$[mid_init$_4dd3b836baadd31c] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/TimeScale;DD)V");
          mids$[mid_countAtDate_209f08246d708042] = env->getMethodID(cls, "countAtDate", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_dateAtCount_d2854c25a21df51f] = env->getMethodID(cls, "dateAtCount", "(D)Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_offsetFromTAI_209f08246d708042] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_offsetFromTAI_cf010978f3c5a913] = env->getMethodID(cls, "offsetFromTAI", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_offsetToTAI_50aa1fdea9b81950] = env->getMethodID(cls, "offsetToTAI", "(Lorg/orekit/time/DateComponents;Lorg/orekit/time/TimeComponents;)D");
          mids$[mid_toString_d2c8eb4129821f0e] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SatelliteClockScale::SatelliteClockScale(const ::java::lang::String & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::TimeScale & a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4dd3b836baadd31c, a0.this$, a1.this$, a2.this$, a3, a4)) {}

      jdouble SatelliteClockScale::countAtDate(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_countAtDate_209f08246d708042], a0.this$);
      }

      ::org::orekit::time::AbsoluteDate SatelliteClockScale::dateAtCount(jdouble a0) const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_dateAtCount_d2854c25a21df51f], a0));
      }

      ::java::lang::String SatelliteClockScale::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
      }

      jdouble SatelliteClockScale::offsetFromTAI(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetFromTAI_209f08246d708042], a0.this$);
      }

      ::org::hipparchus::CalculusFieldElement SatelliteClockScale::offsetFromTAI(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_offsetFromTAI_cf010978f3c5a913], a0.this$));
      }

      jdouble SatelliteClockScale::offsetToTAI(const ::org::orekit::time::DateComponents & a0, const ::org::orekit::time::TimeComponents & a1) const
      {
        return env->callDoubleMethod(this$, mids$[mid_offsetToTAI_50aa1fdea9b81950], a0.this$, a1.this$);
      }

      ::java::lang::String SatelliteClockScale::toString() const
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
#include "org/orekit/propagation/events/AdapterDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AdapterDetector::class$ = NULL;
        jmethodID *AdapterDetector::mids$ = NULL;
        bool AdapterDetector::live$ = false;

        jclass AdapterDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AdapterDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d5d8be0538a03d97] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/events/EventDetector;)V");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getDetector_ebd847a60689999d] = env->getMethodID(cls, "getDetector", "()Lorg/orekit/propagation/events/EventDetector;");
            mids$[mid_getHandler_0e9e72f635f03ea9] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;");
            mids$[mid_getMaxCheckInterval_11bc47e1cbec1a87] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_d6ab429752e7c267] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_9981f74b2d109da6] = env->getMethodID(cls, "getThreshold", "()D");
            mids$[mid_init_14deaae988292d42] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdapterDetector::AdapterDetector(const ::org::orekit::propagation::events::EventDetector & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d5d8be0538a03d97, a0.this$)) {}

        jdouble AdapterDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::propagation::events::EventDetector AdapterDetector::getDetector() const
        {
          return ::org::orekit::propagation::events::EventDetector(env->callObjectMethod(this$, mids$[mid_getDetector_ebd847a60689999d]));
        }

        ::org::orekit::propagation::events::handlers::EventHandler AdapterDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::EventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_0e9e72f635f03ea9]));
        }

        ::org::orekit::propagation::events::AdaptableInterval AdapterDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_11bc47e1cbec1a87]));
        }

        jint AdapterDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_d6ab429752e7c267]);
        }

        jdouble AdapterDetector::getThreshold() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThreshold_9981f74b2d109da6]);
        }

        void AdapterDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_14deaae988292d42], a0.this$, a1.this$);
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
        static PyObject *t_AdapterDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdapterDetector_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdapterDetector_init_(t_AdapterDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdapterDetector_g(t_AdapterDetector *self, PyObject *arg);
        static PyObject *t_AdapterDetector_getDetector(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_getHandler(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_getMaxCheckInterval(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_getMaxIterationCount(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_getThreshold(t_AdapterDetector *self);
        static PyObject *t_AdapterDetector_init(t_AdapterDetector *self, PyObject *args);
        static PyObject *t_AdapterDetector_get__detector(t_AdapterDetector *self, void *data);
        static PyObject *t_AdapterDetector_get__handler(t_AdapterDetector *self, void *data);
        static PyObject *t_AdapterDetector_get__maxCheckInterval(t_AdapterDetector *self, void *data);
        static PyObject *t_AdapterDetector_get__maxIterationCount(t_AdapterDetector *self, void *data);
        static PyObject *t_AdapterDetector_get__threshold(t_AdapterDetector *self, void *data);
        static PyGetSetDef t_AdapterDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AdapterDetector, detector),
          DECLARE_GET_FIELD(t_AdapterDetector, handler),
          DECLARE_GET_FIELD(t_AdapterDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_AdapterDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_AdapterDetector, threshold),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdapterDetector__methods_[] = {
          DECLARE_METHOD(t_AdapterDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdapterDetector, g, METH_O),
          DECLARE_METHOD(t_AdapterDetector, getDetector, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_AdapterDetector, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdapterDetector)[] = {
          { Py_tp_methods, t_AdapterDetector__methods_ },
          { Py_tp_init, (void *) t_AdapterDetector_init_ },
          { Py_tp_getset, t_AdapterDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdapterDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdapterDetector, t_AdapterDetector, AdapterDetector);

        void t_AdapterDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AdapterDetector), &PY_TYPE_DEF(AdapterDetector), module, "AdapterDetector", 0);
        }

        void t_AdapterDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterDetector), "class_", make_descriptor(AdapterDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterDetector), "wrapfn_", make_descriptor(t_AdapterDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdapterDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdapterDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdapterDetector::initializeClass, 1)))
            return NULL;
          return t_AdapterDetector::wrap_Object(AdapterDetector(((t_AdapterDetector *) arg)->object.this$));
        }
        static PyObject *t_AdapterDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdapterDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdapterDetector_init_(t_AdapterDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::propagation::events::EventDetector a0((jobject) NULL);
          AdapterDetector object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::events::EventDetector::initializeClass, &a0))
          {
            INT_CALL(object = AdapterDetector(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdapterDetector_g(t_AdapterDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_AdapterDetector_getDetector(t_AdapterDetector *self)
        {
          ::org::orekit::propagation::events::EventDetector result((jobject) NULL);
          OBJ_CALL(result = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(result);
        }

        static PyObject *t_AdapterDetector_getHandler(t_AdapterDetector *self)
        {
          ::org::orekit::propagation::events::handlers::EventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(result);
        }

        static PyObject *t_AdapterDetector_getMaxCheckInterval(t_AdapterDetector *self)
        {
          ::org::orekit::propagation::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_AdapterDetector_getMaxIterationCount(t_AdapterDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AdapterDetector_getThreshold(t_AdapterDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getThreshold());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AdapterDetector_init(t_AdapterDetector *self, PyObject *args)
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

        static PyObject *t_AdapterDetector_get__detector(t_AdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::EventDetector value((jobject) NULL);
          OBJ_CALL(value = self->object.getDetector());
          return ::org::orekit::propagation::events::t_EventDetector::wrap_Object(value);
        }

        static PyObject *t_AdapterDetector_get__handler(t_AdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::EventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(value);
        }

        static PyObject *t_AdapterDetector_get__maxCheckInterval(t_AdapterDetector *self, void *data)
        {
          ::org::orekit::propagation::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_AdapterDetector_get__maxIterationCount(t_AdapterDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AdapterDetector_get__threshold(t_AdapterDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThreshold());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/linesensor/LinearLineDatation.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/linesensor/LineDatation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace linesensor {

        ::java::lang::Class *LinearLineDatation::class$ = NULL;
        jmethodID *LinearLineDatation::mids$ = NULL;
        bool LinearLineDatation::live$ = false;

        jclass LinearLineDatation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/linesensor/LinearLineDatation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d1740697fab3a0ee] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DD)V");
            mids$[mid_getDate_d2854c25a21df51f] = env->getMethodID(cls, "getDate", "(D)Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getLine_209f08246d708042] = env->getMethodID(cls, "getLine", "(Lorg/orekit/time/AbsoluteDate;)D");
            mids$[mid_getRate_bf28ed64d6e8576b] = env->getMethodID(cls, "getRate", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LinearLineDatation::LinearLineDatation(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d1740697fab3a0ee, a0.this$, a1, a2)) {}

        ::org::orekit::time::AbsoluteDate LinearLineDatation::getDate(jdouble a0) const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_d2854c25a21df51f], a0));
        }

        jdouble LinearLineDatation::getLine(const ::org::orekit::time::AbsoluteDate & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLine_209f08246d708042], a0.this$);
        }

        jdouble LinearLineDatation::getRate(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRate_bf28ed64d6e8576b], a0);
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
      namespace linesensor {
        static PyObject *t_LinearLineDatation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LinearLineDatation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LinearLineDatation_init_(t_LinearLineDatation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LinearLineDatation_getDate(t_LinearLineDatation *self, PyObject *arg);
        static PyObject *t_LinearLineDatation_getLine(t_LinearLineDatation *self, PyObject *arg);
        static PyObject *t_LinearLineDatation_getRate(t_LinearLineDatation *self, PyObject *arg);

        static PyMethodDef t_LinearLineDatation__methods_[] = {
          DECLARE_METHOD(t_LinearLineDatation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearLineDatation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LinearLineDatation, getDate, METH_O),
          DECLARE_METHOD(t_LinearLineDatation, getLine, METH_O),
          DECLARE_METHOD(t_LinearLineDatation, getRate, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LinearLineDatation)[] = {
          { Py_tp_methods, t_LinearLineDatation__methods_ },
          { Py_tp_init, (void *) t_LinearLineDatation_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LinearLineDatation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LinearLineDatation, t_LinearLineDatation, LinearLineDatation);

        void t_LinearLineDatation::install(PyObject *module)
        {
          installType(&PY_TYPE(LinearLineDatation), &PY_TYPE_DEF(LinearLineDatation), module, "LinearLineDatation", 0);
        }

        void t_LinearLineDatation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearLineDatation), "class_", make_descriptor(LinearLineDatation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearLineDatation), "wrapfn_", make_descriptor(t_LinearLineDatation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LinearLineDatation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LinearLineDatation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LinearLineDatation::initializeClass, 1)))
            return NULL;
          return t_LinearLineDatation::wrap_Object(LinearLineDatation(((t_LinearLineDatation *) arg)->object.this$));
        }
        static PyObject *t_LinearLineDatation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LinearLineDatation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LinearLineDatation_init_(t_LinearLineDatation *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          jdouble a2;
          LinearLineDatation object((jobject) NULL);

          if (!parseArgs(args, "kDD", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
          {
            INT_CALL(object = LinearLineDatation(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LinearLineDatation_getDate(t_LinearLineDatation *self, PyObject *arg)
        {
          jdouble a0;
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getDate(a0));
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDate", arg);
          return NULL;
        }

        static PyObject *t_LinearLineDatation_getLine(t_LinearLineDatation *self, PyObject *arg)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getLine(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLine", arg);
          return NULL;
        }

        static PyObject *t_LinearLineDatation_getRate(t_LinearLineDatation *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getRate(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getRate", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/gnss/data/LegacyNavigationMessage.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/gnss/data/GNSSClockElements.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *LegacyNavigationMessage::class$ = NULL;
            jmethodID *LegacyNavigationMessage::mids$ = NULL;
            bool LegacyNavigationMessage::live$ = false;
            ::java::lang::String *LegacyNavigationMessage::LNAV = NULL;

            jclass LegacyNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/LegacyNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getFitInterval_d6ab429752e7c267] = env->getMethodID(cls, "getFitInterval", "()I");
                mids$[mid_getIODC_d6ab429752e7c267] = env->getMethodID(cls, "getIODC", "()I");
                mids$[mid_getIODE_d6ab429752e7c267] = env->getMethodID(cls, "getIODE", "()I");
                mids$[mid_getSvAccuracy_9981f74b2d109da6] = env->getMethodID(cls, "getSvAccuracy", "()D");
                mids$[mid_getSvHealth_d6ab429752e7c267] = env->getMethodID(cls, "getSvHealth", "()I");
                mids$[mid_getTGD_9981f74b2d109da6] = env->getMethodID(cls, "getTGD", "()D");
                mids$[mid_setFitInterval_8fd427ab23829bf5] = env->getMethodID(cls, "setFitInterval", "(I)V");
                mids$[mid_setIODC_8fd427ab23829bf5] = env->getMethodID(cls, "setIODC", "(I)V");
                mids$[mid_setIODE_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setIODE", "(D)V");
                mids$[mid_setSvAccuracy_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setSvAccuracy", "(D)V");
                mids$[mid_setSvHealth_8fd427ab23829bf5] = env->getMethodID(cls, "setSvHealth", "(I)V");
                mids$[mid_setTGD_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setTGD", "(D)V");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                LNAV = new ::java::lang::String(env->getStaticObjectField(cls, "LNAV", "Ljava/lang/String;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jint LegacyNavigationMessage::getFitInterval() const
            {
              return env->callIntMethod(this$, mids$[mid_getFitInterval_d6ab429752e7c267]);
            }

            jint LegacyNavigationMessage::getIODC() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODC_d6ab429752e7c267]);
            }

            jint LegacyNavigationMessage::getIODE() const
            {
              return env->callIntMethod(this$, mids$[mid_getIODE_d6ab429752e7c267]);
            }

            jdouble LegacyNavigationMessage::getSvAccuracy() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSvAccuracy_9981f74b2d109da6]);
            }

            jint LegacyNavigationMessage::getSvHealth() const
            {
              return env->callIntMethod(this$, mids$[mid_getSvHealth_d6ab429752e7c267]);
            }

            jdouble LegacyNavigationMessage::getTGD() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTGD_9981f74b2d109da6]);
            }

            void LegacyNavigationMessage::setFitInterval(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setFitInterval_8fd427ab23829bf5], a0);
            }

            void LegacyNavigationMessage::setIODC(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODC_8fd427ab23829bf5], a0);
            }

            void LegacyNavigationMessage::setIODE(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setIODE_1ad26e8c8c0cd65b], a0);
            }

            void LegacyNavigationMessage::setSvAccuracy(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvAccuracy_1ad26e8c8c0cd65b], a0);
            }

            void LegacyNavigationMessage::setSvHealth(jint a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setSvHealth_8fd427ab23829bf5], a0);
            }

            void LegacyNavigationMessage::setTGD(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setTGD_1ad26e8c8c0cd65b], a0);
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
        namespace gnss {
          namespace data {
            static PyObject *t_LegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_getFitInterval(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getIODC(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getIODE(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getSvAccuracy(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getSvHealth(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_getTGD(t_LegacyNavigationMessage *self);
            static PyObject *t_LegacyNavigationMessage_setFitInterval(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setIODC(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setIODE(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setSvAccuracy(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setSvHealth(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_setTGD(t_LegacyNavigationMessage *self, PyObject *arg);
            static PyObject *t_LegacyNavigationMessage_get__fitInterval(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__fitInterval(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__iODC(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__iODC(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__iODE(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__iODE(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__svAccuracy(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__svAccuracy(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__svHealth(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__svHealth(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyObject *t_LegacyNavigationMessage_get__tGD(t_LegacyNavigationMessage *self, void *data);
            static int t_LegacyNavigationMessage_set__tGD(t_LegacyNavigationMessage *self, PyObject *arg, void *data);
            static PyGetSetDef t_LegacyNavigationMessage__fields_[] = {
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, fitInterval),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, iODC),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, iODE),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, svAccuracy),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, svHealth),
              DECLARE_GETSET_FIELD(t_LegacyNavigationMessage, tGD),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_LegacyNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_LegacyNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LegacyNavigationMessage, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getFitInterval, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getIODC, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getIODE, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getSvAccuracy, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getSvHealth, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, getTGD, METH_NOARGS),
              DECLARE_METHOD(t_LegacyNavigationMessage, setFitInterval, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setIODC, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setIODE, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setSvAccuracy, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setSvHealth, METH_O),
              DECLARE_METHOD(t_LegacyNavigationMessage, setTGD, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(LegacyNavigationMessage)[] = {
              { Py_tp_methods, t_LegacyNavigationMessage__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_LegacyNavigationMessage__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(LegacyNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::AbstractNavigationMessage),
              NULL
            };

            DEFINE_TYPE(LegacyNavigationMessage, t_LegacyNavigationMessage, LegacyNavigationMessage);

            void t_LegacyNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(LegacyNavigationMessage), &PY_TYPE_DEF(LegacyNavigationMessage), module, "LegacyNavigationMessage", 0);
            }

            void t_LegacyNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(LegacyNavigationMessage), "class_", make_descriptor(LegacyNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LegacyNavigationMessage), "wrapfn_", make_descriptor(t_LegacyNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(LegacyNavigationMessage), "boxfn_", make_descriptor(boxObject));
              env->getClass(LegacyNavigationMessage::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(LegacyNavigationMessage), "LNAV", make_descriptor(j2p(*LegacyNavigationMessage::LNAV)));
            }

            static PyObject *t_LegacyNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, LegacyNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_LegacyNavigationMessage::wrap_Object(LegacyNavigationMessage(((t_LegacyNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_LegacyNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, LegacyNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_LegacyNavigationMessage_getFitInterval(t_LegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getFitInterval());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LegacyNavigationMessage_getIODC(t_LegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODC());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LegacyNavigationMessage_getIODE(t_LegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getIODE());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LegacyNavigationMessage_getSvAccuracy(t_LegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LegacyNavigationMessage_getSvHealth(t_LegacyNavigationMessage *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getSvHealth());
              return PyLong_FromLong((long) result);
            }

            static PyObject *t_LegacyNavigationMessage_getTGD(t_LegacyNavigationMessage *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTGD());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_LegacyNavigationMessage_setFitInterval(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setFitInterval(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setFitInterval", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setIODC(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setIODC(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODC", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setIODE(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setIODE(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setIODE", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setSvAccuracy(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setSvAccuracy(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvAccuracy", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setSvHealth(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jint a0;

              if (!parseArg(arg, "I", &a0))
              {
                OBJ_CALL(self->object.setSvHealth(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setSvHealth", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_setTGD(t_LegacyNavigationMessage *self, PyObject *arg)
            {
              jdouble a0;

              if (!parseArg(arg, "D", &a0))
              {
                OBJ_CALL(self->object.setTGD(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setTGD", arg);
              return NULL;
            }

            static PyObject *t_LegacyNavigationMessage_get__fitInterval(t_LegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getFitInterval());
              return PyLong_FromLong((long) value);
            }
            static int t_LegacyNavigationMessage_set__fitInterval(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setFitInterval(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "fitInterval", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__iODC(t_LegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODC());
              return PyLong_FromLong((long) value);
            }
            static int t_LegacyNavigationMessage_set__iODC(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setIODC(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODC", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__iODE(t_LegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getIODE());
              return PyLong_FromLong((long) value);
            }
            static int t_LegacyNavigationMessage_set__iODE(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setIODE(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "iODE", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__svAccuracy(t_LegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSvAccuracy());
              return PyFloat_FromDouble((double) value);
            }
            static int t_LegacyNavigationMessage_set__svAccuracy(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setSvAccuracy(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svAccuracy", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__svHealth(t_LegacyNavigationMessage *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getSvHealth());
              return PyLong_FromLong((long) value);
            }
            static int t_LegacyNavigationMessage_set__svHealth(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jint value;
                if (!parseArg(arg, "I", &value))
                {
                  INT_CALL(self->object.setSvHealth(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "svHealth", arg);
              return -1;
            }

            static PyObject *t_LegacyNavigationMessage_get__tGD(t_LegacyNavigationMessage *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getTGD());
              return PyFloat_FromDouble((double) value);
            }
            static int t_LegacyNavigationMessage_set__tGD(t_LegacyNavigationMessage *self, PyObject *arg, void *data)
            {
              {
                jdouble value;
                if (!parseArg(arg, "D", &value))
                {
                  INT_CALL(self->object.setTGD(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "tGD", arg);
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
#include "org/orekit/utils/PythonFieldTimeStampedCache.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "java/lang/Throwable.h"
#include "java/lang/IllegalStateException.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/FieldTimeStampedCache.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *PythonFieldTimeStampedCache::class$ = NULL;
      jmethodID *PythonFieldTimeStampedCache::mids$ = NULL;
      bool PythonFieldTimeStampedCache::live$ = false;

      jclass PythonFieldTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/PythonFieldTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_ff7cb6c242604316] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getEarliest_eb7a4124bb25f40f] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getLatest_eb7a4124bb25f40f] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getNeighbors_9de8811782a2be8a] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighborsSize_d6ab429752e7c267] = env->getMethodID(cls, "getNeighborsSize", "()I");
          mids$[mid_pythonDecRef_ff7cb6c242604316] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_42c72b98e3c2e08a] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_f5bbab7e97879358] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonFieldTimeStampedCache::PythonFieldTimeStampedCache() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      void PythonFieldTimeStampedCache::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_ff7cb6c242604316]);
      }

      jlong PythonFieldTimeStampedCache::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_42c72b98e3c2e08a]);
      }

      void PythonFieldTimeStampedCache::pythonExtension(jlong a0) const
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
    namespace utils {
      static PyObject *t_PythonFieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonFieldTimeStampedCache_of_(t_PythonFieldTimeStampedCache *self, PyObject *args);
      static int t_PythonFieldTimeStampedCache_init_(t_PythonFieldTimeStampedCache *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonFieldTimeStampedCache_finalize(t_PythonFieldTimeStampedCache *self);
      static PyObject *t_PythonFieldTimeStampedCache_pythonExtension(t_PythonFieldTimeStampedCache *self, PyObject *args);
      static jobject JNICALL t_PythonFieldTimeStampedCache_getEarliest0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeStampedCache_getLatest1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonFieldTimeStampedCache_getNeighbors2(JNIEnv *jenv, jobject jobj, jobject a0);
      static jint JNICALL t_PythonFieldTimeStampedCache_getNeighborsSize3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonFieldTimeStampedCache_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonFieldTimeStampedCache_get__self(t_PythonFieldTimeStampedCache *self, void *data);
      static PyObject *t_PythonFieldTimeStampedCache_get__parameters_(t_PythonFieldTimeStampedCache *self, void *data);
      static PyGetSetDef t_PythonFieldTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_PythonFieldTimeStampedCache, self),
        DECLARE_GET_FIELD(t_PythonFieldTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonFieldTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonFieldTimeStampedCache, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonFieldTimeStampedCache)[] = {
        { Py_tp_methods, t_PythonFieldTimeStampedCache__methods_ },
        { Py_tp_init, (void *) t_PythonFieldTimeStampedCache_init_ },
        { Py_tp_getset, t_PythonFieldTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonFieldTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonFieldTimeStampedCache, t_PythonFieldTimeStampedCache, PythonFieldTimeStampedCache);
      PyObject *t_PythonFieldTimeStampedCache::wrap_Object(const PythonFieldTimeStampedCache& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeStampedCache *self = (t_PythonFieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_PythonFieldTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_PythonFieldTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_PythonFieldTimeStampedCache *self = (t_PythonFieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_PythonFieldTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonFieldTimeStampedCache), &PY_TYPE_DEF(PythonFieldTimeStampedCache), module, "PythonFieldTimeStampedCache", 1);
      }

      void t_PythonFieldTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStampedCache), "class_", make_descriptor(PythonFieldTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStampedCache), "wrapfn_", make_descriptor(t_PythonFieldTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonFieldTimeStampedCache), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonFieldTimeStampedCache::initializeClass);
        JNINativeMethod methods[] = {
          { "getEarliest", "()Lorg/orekit/time/FieldTimeStamped;", (void *) t_PythonFieldTimeStampedCache_getEarliest0 },
          { "getLatest", "()Lorg/orekit/time/FieldTimeStamped;", (void *) t_PythonFieldTimeStampedCache_getLatest1 },
          { "getNeighbors", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/util/stream/Stream;", (void *) t_PythonFieldTimeStampedCache_getNeighbors2 },
          { "getNeighborsSize", "()I", (void *) t_PythonFieldTimeStampedCache_getNeighborsSize3 },
          { "pythonDecRef", "()V", (void *) t_PythonFieldTimeStampedCache_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonFieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonFieldTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_PythonFieldTimeStampedCache::wrap_Object(PythonFieldTimeStampedCache(((t_PythonFieldTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_PythonFieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonFieldTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_PythonFieldTimeStampedCache_of_(t_PythonFieldTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_PythonFieldTimeStampedCache_init_(t_PythonFieldTimeStampedCache *self, PyObject *args, PyObject *kwds)
      {
        PythonFieldTimeStampedCache object((jobject) NULL);

        INT_CALL(object = PythonFieldTimeStampedCache());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonFieldTimeStampedCache_finalize(t_PythonFieldTimeStampedCache *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonFieldTimeStampedCache_pythonExtension(t_PythonFieldTimeStampedCache *self, PyObject *args)
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

      static jobject JNICALL t_PythonFieldTimeStampedCache_getEarliest0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEarliest", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeStamped::initializeClass, &value))
        {
          throwTypeError("getEarliest", result);
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

      static jobject JNICALL t_PythonFieldTimeStampedCache_getLatest1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getLatest", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::FieldTimeStamped::initializeClass, &value))
        {
          throwTypeError("getLatest", result);
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

      static jobject JNICALL t_PythonFieldTimeStampedCache_getNeighbors2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::stream::Stream value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "getNeighbors", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::stream::Stream::initializeClass, &value))
        {
          throwTypeError("getNeighbors", result);
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

      static jint JNICALL t_PythonFieldTimeStampedCache_getNeighborsSize3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jint value;
        PyObject *result = PyObject_CallMethod(obj, "getNeighborsSize", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "I", &value))
        {
          throwTypeError("getNeighborsSize", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jint) 0;
      }

      static void JNICALL t_PythonFieldTimeStampedCache_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_42c72b98e3c2e08a]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonFieldTimeStampedCache::mids$[PythonFieldTimeStampedCache::mid_pythonExtension_f5bbab7e97879358], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonFieldTimeStampedCache_get__self(t_PythonFieldTimeStampedCache *self, void *data)
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
      static PyObject *t_PythonFieldTimeStampedCache_get__parameters_(t_PythonFieldTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/SingularValueDecomposer.h"
#include "org/hipparchus/linear/MatrixDecomposer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *SingularValueDecomposer::class$ = NULL;
      jmethodID *SingularValueDecomposer::mids$ = NULL;
      bool SingularValueDecomposer::live$ = false;

      jclass SingularValueDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/SingularValueDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_decompose_b099faee6eb73725] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/DecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SingularValueDecomposer::SingularValueDecomposer() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

      ::org::hipparchus::linear::DecompositionSolver SingularValueDecomposer::decompose(const ::org::hipparchus::linear::RealMatrix & a0) const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_b099faee6eb73725], a0.this$));
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
      static PyObject *t_SingularValueDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SingularValueDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_SingularValueDecomposer_init_(t_SingularValueDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SingularValueDecomposer_decompose(t_SingularValueDecomposer *self, PyObject *arg);

      static PyMethodDef t_SingularValueDecomposer__methods_[] = {
        DECLARE_METHOD(t_SingularValueDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingularValueDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SingularValueDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SingularValueDecomposer)[] = {
        { Py_tp_methods, t_SingularValueDecomposer__methods_ },
        { Py_tp_init, (void *) t_SingularValueDecomposer_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SingularValueDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SingularValueDecomposer, t_SingularValueDecomposer, SingularValueDecomposer);

      void t_SingularValueDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(SingularValueDecomposer), &PY_TYPE_DEF(SingularValueDecomposer), module, "SingularValueDecomposer", 0);
      }

      void t_SingularValueDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposer), "class_", make_descriptor(SingularValueDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposer), "wrapfn_", make_descriptor(t_SingularValueDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SingularValueDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SingularValueDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SingularValueDecomposer::initializeClass, 1)))
          return NULL;
        return t_SingularValueDecomposer::wrap_Object(SingularValueDecomposer(((t_SingularValueDecomposer *) arg)->object.this$));
      }
      static PyObject *t_SingularValueDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SingularValueDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_SingularValueDecomposer_init_(t_SingularValueDecomposer *self, PyObject *args, PyObject *kwds)
      {
        SingularValueDecomposer object((jobject) NULL);

        INT_CALL(object = SingularValueDecomposer());
        self->object = object;

        return 0;
      }

      static PyObject *t_SingularValueDecomposer_decompose(t_SingularValueDecomposer *self, PyObject *arg)
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
#include "org/orekit/gnss/antenna/SatelliteType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/gnss/attitude/GNSSAttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/String.h"
#include "org/orekit/gnss/antenna/SatelliteType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *SatelliteType::class$ = NULL;
        jmethodID *SatelliteType::mids$ = NULL;
        bool SatelliteType::live$ = false;
        SatelliteType *SatelliteType::BEIDOU_2G = NULL;
        SatelliteType *SatelliteType::BEIDOU_2I = NULL;
        SatelliteType *SatelliteType::BEIDOU_2M = NULL;
        SatelliteType *SatelliteType::BEIDOU_3G_CAST = NULL;
        SatelliteType *SatelliteType::BEIDOU_3I = NULL;
        SatelliteType *SatelliteType::BEIDOU_3M_CAST = NULL;
        SatelliteType *SatelliteType::BEIDOU_3M_SECM = NULL;
        SatelliteType *SatelliteType::BEIDOU_3SI_CAST = NULL;
        SatelliteType *SatelliteType::BEIDOU_3SI_SECM = NULL;
        SatelliteType *SatelliteType::BEIDOU_3SM_CAST = NULL;
        SatelliteType *SatelliteType::BLOCK_I = NULL;
        SatelliteType *SatelliteType::BLOCK_II = NULL;
        SatelliteType *SatelliteType::BLOCK_IIA = NULL;
        SatelliteType *SatelliteType::BLOCK_IIF = NULL;
        SatelliteType *SatelliteType::BLOCK_IIIA = NULL;
        SatelliteType *SatelliteType::BLOCK_IIR_A = NULL;
        SatelliteType *SatelliteType::BLOCK_IIR_B = NULL;
        SatelliteType *SatelliteType::BLOCK_IIR_M = NULL;
        SatelliteType *SatelliteType::GALILEO_0A = NULL;
        SatelliteType *SatelliteType::GALILEO_0B = NULL;
        SatelliteType *SatelliteType::GALILEO_1 = NULL;
        SatelliteType *SatelliteType::GALILEO_2 = NULL;
        SatelliteType *SatelliteType::GLONASS = NULL;
        SatelliteType *SatelliteType::GLONASS_K1 = NULL;
        SatelliteType *SatelliteType::GLONASS_K2 = NULL;
        SatelliteType *SatelliteType::GLONASS_M = NULL;
        SatelliteType *SatelliteType::IRNSS_1GEO = NULL;
        SatelliteType *SatelliteType::IRNSS_1IGSO = NULL;
        SatelliteType *SatelliteType::QZSS = NULL;
        SatelliteType *SatelliteType::QZSS_2A = NULL;
        SatelliteType *SatelliteType::QZSS_2G = NULL;
        SatelliteType *SatelliteType::QZSS_2I = NULL;

        jclass SatelliteType::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/SatelliteType");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildAttitudeProvider_65b9722b84c73eea] = env->getMethodID(cls, "buildAttitudeProvider", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;I)Lorg/orekit/gnss/attitude/GNSSAttitudeProvider;");
            mids$[mid_getName_d2c8eb4129821f0e] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_parseSatelliteType_eaaec2c2edfa000b] = env->getStaticMethodID(cls, "parseSatelliteType", "(Ljava/lang/String;)Lorg/orekit/gnss/antenna/SatelliteType;");
            mids$[mid_valueOf_eaaec2c2edfa000b] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/gnss/antenna/SatelliteType;");
            mids$[mid_values_1d3fd3b2ef345df5] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/gnss/antenna/SatelliteType;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            BEIDOU_2G = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_2G", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_2I = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_2I", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_2M = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_2M", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3G_CAST = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3G_CAST", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3I = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3I", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3M_CAST = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3M_CAST", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3M_SECM = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3M_SECM", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3SI_CAST = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3SI_CAST", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3SI_SECM = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3SI_SECM", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BEIDOU_3SM_CAST = new SatelliteType(env->getStaticObjectField(cls, "BEIDOU_3SM_CAST", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_I = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_I", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_II = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_II", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIA = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIA", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIF = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIF", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIIA = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIIA", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIR_A = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIR_A", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIR_B = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIR_B", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            BLOCK_IIR_M = new SatelliteType(env->getStaticObjectField(cls, "BLOCK_IIR_M", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GALILEO_0A = new SatelliteType(env->getStaticObjectField(cls, "GALILEO_0A", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GALILEO_0B = new SatelliteType(env->getStaticObjectField(cls, "GALILEO_0B", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GALILEO_1 = new SatelliteType(env->getStaticObjectField(cls, "GALILEO_1", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GALILEO_2 = new SatelliteType(env->getStaticObjectField(cls, "GALILEO_2", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GLONASS = new SatelliteType(env->getStaticObjectField(cls, "GLONASS", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GLONASS_K1 = new SatelliteType(env->getStaticObjectField(cls, "GLONASS_K1", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GLONASS_K2 = new SatelliteType(env->getStaticObjectField(cls, "GLONASS_K2", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            GLONASS_M = new SatelliteType(env->getStaticObjectField(cls, "GLONASS_M", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            IRNSS_1GEO = new SatelliteType(env->getStaticObjectField(cls, "IRNSS_1GEO", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            IRNSS_1IGSO = new SatelliteType(env->getStaticObjectField(cls, "IRNSS_1IGSO", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            QZSS = new SatelliteType(env->getStaticObjectField(cls, "QZSS", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            QZSS_2A = new SatelliteType(env->getStaticObjectField(cls, "QZSS_2A", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            QZSS_2G = new SatelliteType(env->getStaticObjectField(cls, "QZSS_2G", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            QZSS_2I = new SatelliteType(env->getStaticObjectField(cls, "QZSS_2I", "Lorg/orekit/gnss/antenna/SatelliteType;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::gnss::attitude::GNSSAttitudeProvider SatelliteType::buildAttitudeProvider(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3, jint a4) const
        {
          return ::org::orekit::gnss::attitude::GNSSAttitudeProvider(env->callObjectMethod(this$, mids$[mid_buildAttitudeProvider_65b9722b84c73eea], a0.this$, a1.this$, a2.this$, a3.this$, a4));
        }

        ::java::lang::String SatelliteType::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_d2c8eb4129821f0e]));
        }

        SatelliteType SatelliteType::parseSatelliteType(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SatelliteType(env->callStaticObjectMethod(cls, mids$[mid_parseSatelliteType_eaaec2c2edfa000b], a0.this$));
        }

        SatelliteType SatelliteType::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return SatelliteType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_eaaec2c2edfa000b], a0.this$));
        }

        JArray< SatelliteType > SatelliteType::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< SatelliteType >(env->callStaticObjectMethod(cls, mids$[mid_values_1d3fd3b2ef345df5]));
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
      namespace antenna {
        static PyObject *t_SatelliteType_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SatelliteType_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SatelliteType_of_(t_SatelliteType *self, PyObject *args);
        static PyObject *t_SatelliteType_buildAttitudeProvider(t_SatelliteType *self, PyObject *args);
        static PyObject *t_SatelliteType_getName(t_SatelliteType *self);
        static PyObject *t_SatelliteType_parseSatelliteType(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SatelliteType_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_SatelliteType_values(PyTypeObject *type);
        static PyObject *t_SatelliteType_get__name(t_SatelliteType *self, void *data);
        static PyObject *t_SatelliteType_get__parameters_(t_SatelliteType *self, void *data);
        static PyGetSetDef t_SatelliteType__fields_[] = {
          DECLARE_GET_FIELD(t_SatelliteType, name),
          DECLARE_GET_FIELD(t_SatelliteType, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SatelliteType__methods_[] = {
          DECLARE_METHOD(t_SatelliteType, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteType, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteType, of_, METH_VARARGS),
          DECLARE_METHOD(t_SatelliteType, buildAttitudeProvider, METH_VARARGS),
          DECLARE_METHOD(t_SatelliteType, getName, METH_NOARGS),
          DECLARE_METHOD(t_SatelliteType, parseSatelliteType, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SatelliteType, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_SatelliteType, values, METH_NOARGS | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SatelliteType)[] = {
          { Py_tp_methods, t_SatelliteType__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_SatelliteType__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SatelliteType)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(SatelliteType, t_SatelliteType, SatelliteType);
        PyObject *t_SatelliteType::wrap_Object(const SatelliteType& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SatelliteType::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SatelliteType *self = (t_SatelliteType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SatelliteType::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SatelliteType::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SatelliteType *self = (t_SatelliteType *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SatelliteType::install(PyObject *module)
        {
          installType(&PY_TYPE(SatelliteType), &PY_TYPE_DEF(SatelliteType), module, "SatelliteType", 0);
        }

        void t_SatelliteType::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "class_", make_descriptor(SatelliteType::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "wrapfn_", make_descriptor(t_SatelliteType::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "boxfn_", make_descriptor(boxObject));
          env->getClass(SatelliteType::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_2G", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_2G)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_2I", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_2I)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_2M", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_2M)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3G_CAST", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3G_CAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3I", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3I)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3M_CAST", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3M_CAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3M_SECM", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3M_SECM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3SI_CAST", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3SI_CAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3SI_SECM", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3SI_SECM)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BEIDOU_3SM_CAST", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BEIDOU_3SM_CAST)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_I", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_I)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_II", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_II)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIA", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIF", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIF)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIIA", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIIA)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIR_A", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIR_A)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIR_B", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIR_B)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "BLOCK_IIR_M", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::BLOCK_IIR_M)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GALILEO_0A", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GALILEO_0A)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GALILEO_0B", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GALILEO_0B)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GALILEO_1", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GALILEO_1)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GALILEO_2", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GALILEO_2)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GLONASS", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GLONASS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GLONASS_K1", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GLONASS_K1)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GLONASS_K2", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GLONASS_K2)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "GLONASS_M", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::GLONASS_M)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "IRNSS_1GEO", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::IRNSS_1GEO)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "IRNSS_1IGSO", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::IRNSS_1IGSO)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "QZSS", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::QZSS)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "QZSS_2A", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::QZSS_2A)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "QZSS_2G", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::QZSS_2G)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SatelliteType), "QZSS_2I", make_descriptor(t_SatelliteType::wrap_Object(*SatelliteType::QZSS_2I)));
        }

        static PyObject *t_SatelliteType_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SatelliteType::initializeClass, 1)))
            return NULL;
          return t_SatelliteType::wrap_Object(SatelliteType(((t_SatelliteType *) arg)->object.this$));
        }
        static PyObject *t_SatelliteType_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SatelliteType::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SatelliteType_of_(t_SatelliteType *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_SatelliteType_buildAttitudeProvider(t_SatelliteType *self, PyObject *args)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          jint a4;
          ::org::orekit::gnss::attitude::GNSSAttitudeProvider result((jobject) NULL);

          if (!parseArgs(args, "kkkkI", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3, &a4))
          {
            OBJ_CALL(result = self->object.buildAttitudeProvider(a0, a1, a2, a3, a4));
            return ::org::orekit::gnss::attitude::t_GNSSAttitudeProvider::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "buildAttitudeProvider", args);
          return NULL;
        }

        static PyObject *t_SatelliteType_getName(t_SatelliteType *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_SatelliteType_parseSatelliteType(PyTypeObject *type, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);
          SatelliteType result((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::gnss::antenna::SatelliteType::parseSatelliteType(a0));
            return t_SatelliteType::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "parseSatelliteType", arg);
          return NULL;
        }

        static PyObject *t_SatelliteType_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          SatelliteType result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::gnss::antenna::SatelliteType::valueOf(a0));
            return t_SatelliteType::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_SatelliteType_values(PyTypeObject *type)
        {
          JArray< SatelliteType > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::gnss::antenna::SatelliteType::values());
          return JArray<jobject>(result.this$).wrap(t_SatelliteType::wrap_jobject);
        }
        static PyObject *t_SatelliteType_get__parameters_(t_SatelliteType *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_SatelliteType_get__name(t_SatelliteType *self, void *data)
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
            mids$[mid_init$_13edac039e8cc967] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_bf28ed64d6e8576b] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_9981f74b2d109da6] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_9981f74b2d109da6] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_9981f74b2d109da6] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_9981f74b2d109da6] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_eee3de00fe971136] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LaplaceDistribution::LaplaceDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_13edac039e8cc967, a0, a1)) {}

        jdouble LaplaceDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jdouble LaplaceDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_bf28ed64d6e8576b], a0);
        }

        jdouble LaplaceDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_9981f74b2d109da6]);
        }

        jdouble LaplaceDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_9981f74b2d109da6]);
        }

        jdouble LaplaceDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_9981f74b2d109da6]);
        }

        jdouble LaplaceDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_9981f74b2d109da6]);
        }

        jdouble LaplaceDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_9981f74b2d109da6]);
        }

        jdouble LaplaceDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_9981f74b2d109da6]);
        }

        jdouble LaplaceDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_bf28ed64d6e8576b], a0);
        }

        jboolean LaplaceDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_eee3de00fe971136]);
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmParser.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AttitudeDeterminationKey::class$ = NULL;
              jmethodID *AttitudeDeterminationKey::mids$ = NULL;
              bool AttitudeDeterminationKey::live$ = false;
              AttitudeDeterminationKey *AttitudeDeterminationKey::AD_ID = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::AD_METHOD = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::AD_PREV_ID = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::ATTITUDE_SOURCE = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::ATTITUDE_STATES = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::COMMENT = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::COV_TYPE = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::EULER_ROT_SEQ = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::NUMBER_STATES = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::RATE_PROCESS_NOISE_STDDEV = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::RATE_STATES = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::REF_FRAME_A = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::REF_FRAME_B = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::SENSOR = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::SIGMA_U = NULL;
              AttitudeDeterminationKey *AttitudeDeterminationKey::SIGMA_V = NULL;

              jclass AttitudeDeterminationKey::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_process_169106d3a83f16f1] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/ndm/adm/acm/AcmParser;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDetermination;)Z");
                  mids$[mid_valueOf_13c4a0620a33b7fe] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;");
                  mids$[mid_values_36a8c9f9c20681f0] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  AD_ID = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "AD_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  AD_METHOD = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "AD_METHOD", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  AD_PREV_ID = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "AD_PREV_ID", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  ATTITUDE_SOURCE = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "ATTITUDE_SOURCE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  ATTITUDE_STATES = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "ATTITUDE_STATES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  COMMENT = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "COMMENT", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  COV_TYPE = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "COV_TYPE", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  EULER_ROT_SEQ = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "EULER_ROT_SEQ", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  NUMBER_STATES = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "NUMBER_STATES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  RATE_PROCESS_NOISE_STDDEV = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "RATE_PROCESS_NOISE_STDDEV", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  RATE_STATES = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "RATE_STATES", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  REF_FRAME_A = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "REF_FRAME_A", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  REF_FRAME_B = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "REF_FRAME_B", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  SENSOR = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "SENSOR", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  SIGMA_U = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "SIGMA_U", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  SIGMA_V = new AttitudeDeterminationKey(env->getStaticObjectField(cls, "SIGMA_V", "Lorg/orekit/files/ccsds/ndm/adm/acm/AttitudeDeterminationKey;"));
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              jboolean AttitudeDeterminationKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser & a1, const ::org::orekit::files::ccsds::utils::ContextBinding & a2, const ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination & a3) const
              {
                return env->callBooleanMethod(this$, mids$[mid_process_169106d3a83f16f1], a0.this$, a1.this$, a2.this$, a3.this$);
              }

              AttitudeDeterminationKey AttitudeDeterminationKey::valueOf(const ::java::lang::String & a0)
              {
                jclass cls = env->getClass(initializeClass);
                return AttitudeDeterminationKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_13c4a0620a33b7fe], a0.this$));
              }

              JArray< AttitudeDeterminationKey > AttitudeDeterminationKey::values()
              {
                jclass cls = env->getClass(initializeClass);
                return JArray< AttitudeDeterminationKey >(env->callStaticObjectMethod(cls, mids$[mid_values_36a8c9f9c20681f0]));
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
              static PyObject *t_AttitudeDeterminationKey_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationKey_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AttitudeDeterminationKey_of_(t_AttitudeDeterminationKey *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationKey_process(t_AttitudeDeterminationKey *self, PyObject *args);
              static PyObject *t_AttitudeDeterminationKey_valueOf(PyTypeObject *type, PyObject *args);
              static PyObject *t_AttitudeDeterminationKey_values(PyTypeObject *type);
              static PyObject *t_AttitudeDeterminationKey_get__parameters_(t_AttitudeDeterminationKey *self, void *data);
              static PyGetSetDef t_AttitudeDeterminationKey__fields_[] = {
                DECLARE_GET_FIELD(t_AttitudeDeterminationKey, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AttitudeDeterminationKey__methods_[] = {
                DECLARE_METHOD(t_AttitudeDeterminationKey, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, of_, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, process, METH_VARARGS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, valueOf, METH_VARARGS | METH_CLASS),
                DECLARE_METHOD(t_AttitudeDeterminationKey, values, METH_NOARGS | METH_CLASS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AttitudeDeterminationKey)[] = {
                { Py_tp_methods, t_AttitudeDeterminationKey__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AttitudeDeterminationKey__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AttitudeDeterminationKey)[] = {
                &PY_TYPE_DEF(::java::lang::Enum),
                NULL
              };

              DEFINE_TYPE(AttitudeDeterminationKey, t_AttitudeDeterminationKey, AttitudeDeterminationKey);
              PyObject *t_AttitudeDeterminationKey::wrap_Object(const AttitudeDeterminationKey& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeDeterminationKey::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeDeterminationKey *self = (t_AttitudeDeterminationKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              PyObject *t_AttitudeDeterminationKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
              {
                PyObject *obj = t_AttitudeDeterminationKey::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AttitudeDeterminationKey *self = (t_AttitudeDeterminationKey *) obj;
                  self->parameters[0] = p0;
                }
                return obj;
              }

              void t_AttitudeDeterminationKey::install(PyObject *module)
              {
                installType(&PY_TYPE(AttitudeDeterminationKey), &PY_TYPE_DEF(AttitudeDeterminationKey), module, "AttitudeDeterminationKey", 0);
              }

              void t_AttitudeDeterminationKey::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "class_", make_descriptor(AttitudeDeterminationKey::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "wrapfn_", make_descriptor(t_AttitudeDeterminationKey::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "boxfn_", make_descriptor(boxObject));
                env->getClass(AttitudeDeterminationKey::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "AD_ID", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::AD_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "AD_METHOD", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::AD_METHOD)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "AD_PREV_ID", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::AD_PREV_ID)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "ATTITUDE_SOURCE", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::ATTITUDE_SOURCE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "ATTITUDE_STATES", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::ATTITUDE_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "COMMENT", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::COMMENT)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "COV_TYPE", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::COV_TYPE)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "EULER_ROT_SEQ", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::EULER_ROT_SEQ)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "NUMBER_STATES", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::NUMBER_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "RATE_PROCESS_NOISE_STDDEV", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::RATE_PROCESS_NOISE_STDDEV)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "RATE_STATES", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::RATE_STATES)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "REF_FRAME_A", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::REF_FRAME_A)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "REF_FRAME_B", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::REF_FRAME_B)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "SENSOR", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::SENSOR)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "SIGMA_U", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::SIGMA_U)));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeDeterminationKey), "SIGMA_V", make_descriptor(t_AttitudeDeterminationKey::wrap_Object(*AttitudeDeterminationKey::SIGMA_V)));
              }

              static PyObject *t_AttitudeDeterminationKey_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AttitudeDeterminationKey::initializeClass, 1)))
                  return NULL;
                return t_AttitudeDeterminationKey::wrap_Object(AttitudeDeterminationKey(((t_AttitudeDeterminationKey *) arg)->object.this$));
              }
              static PyObject *t_AttitudeDeterminationKey_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AttitudeDeterminationKey::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AttitudeDeterminationKey_of_(t_AttitudeDeterminationKey *self, PyObject *args)
              {
                if (!parseArg(args, "T", 1, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static PyObject *t_AttitudeDeterminationKey_process(t_AttitudeDeterminationKey *self, PyObject *args)
              {
                ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::orekit::files::ccsds::utils::ContextBinding a2((jobject) NULL);
                ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination a3((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "kKkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AcmParser::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDetermination::initializeClass, &a0, &a1, &p1, ::org::orekit::files::ccsds::ndm::adm::acm::t_AcmParser::parameters_, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.process(a0, a1, a2, a3));
                  Py_RETURN_BOOL(result);
                }

                PyErr_SetArgsError((PyObject *) self, "process", args);
                return NULL;
              }

              static PyObject *t_AttitudeDeterminationKey_valueOf(PyTypeObject *type, PyObject *args)
              {
                ::java::lang::String a0((jobject) NULL);
                AttitudeDeterminationKey result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationKey::valueOf(a0));
                  return t_AttitudeDeterminationKey::wrap_Object(result);
                }

                return callSuper(type, "valueOf", args, 2);
              }

              static PyObject *t_AttitudeDeterminationKey_values(PyTypeObject *type)
              {
                JArray< AttitudeDeterminationKey > result((jobject) NULL);
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::acm::AttitudeDeterminationKey::values());
                return JArray<jobject>(result.this$).wrap(t_AttitudeDeterminationKey::wrap_jobject);
              }
              static PyObject *t_AttitudeDeterminationKey_get__parameters_(t_AttitudeDeterminationKey *self, void *data)
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
#include "org/orekit/propagation/events/ExtremumApproachDetector.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/orekit/propagation/events/ExtremumApproachDetector.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *ExtremumApproachDetector::class$ = NULL;
        jmethodID *ExtremumApproachDetector::mids$ = NULL;
        bool ExtremumApproachDetector::live$ = false;

        jclass ExtremumApproachDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/ExtremumApproachDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_478a81392f58970d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/PVCoordinatesProvider;)V");
            mids$[mid_computeDeltaPV_5536a42dedb4dcff] = env->getMethodID(cls, "computeDeltaPV", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_g_b443ba1cc794b916] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getSecondaryPVProvider_781ab98286dad7d5] = env->getMethodID(cls, "getSecondaryPVProvider", "()Lorg/orekit/utils/PVCoordinatesProvider;");
            mids$[mid_create_e6f8244c640e1039] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/ExtremumApproachDetector;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ExtremumApproachDetector::ExtremumApproachDetector(const ::org::orekit::utils::PVCoordinatesProvider & a0) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_478a81392f58970d, a0.this$)) {}

        ::org::orekit::utils::PVCoordinates ExtremumApproachDetector::computeDeltaPV(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::utils::PVCoordinates(env->callObjectMethod(this$, mids$[mid_computeDeltaPV_5536a42dedb4dcff], a0.this$));
        }

        jdouble ExtremumApproachDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_b443ba1cc794b916], a0.this$);
        }

        ::org::orekit::utils::PVCoordinatesProvider ExtremumApproachDetector::getSecondaryPVProvider() const
        {
          return ::org::orekit::utils::PVCoordinatesProvider(env->callObjectMethod(this$, mids$[mid_getSecondaryPVProvider_781ab98286dad7d5]));
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
        static PyObject *t_ExtremumApproachDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ExtremumApproachDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ExtremumApproachDetector_of_(t_ExtremumApproachDetector *self, PyObject *args);
        static int t_ExtremumApproachDetector_init_(t_ExtremumApproachDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ExtremumApproachDetector_computeDeltaPV(t_ExtremumApproachDetector *self, PyObject *arg);
        static PyObject *t_ExtremumApproachDetector_g(t_ExtremumApproachDetector *self, PyObject *args);
        static PyObject *t_ExtremumApproachDetector_getSecondaryPVProvider(t_ExtremumApproachDetector *self);
        static PyObject *t_ExtremumApproachDetector_get__secondaryPVProvider(t_ExtremumApproachDetector *self, void *data);
        static PyObject *t_ExtremumApproachDetector_get__parameters_(t_ExtremumApproachDetector *self, void *data);
        static PyGetSetDef t_ExtremumApproachDetector__fields_[] = {
          DECLARE_GET_FIELD(t_ExtremumApproachDetector, secondaryPVProvider),
          DECLARE_GET_FIELD(t_ExtremumApproachDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ExtremumApproachDetector__methods_[] = {
          DECLARE_METHOD(t_ExtremumApproachDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExtremumApproachDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ExtremumApproachDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_ExtremumApproachDetector, computeDeltaPV, METH_O),
          DECLARE_METHOD(t_ExtremumApproachDetector, g, METH_VARARGS),
          DECLARE_METHOD(t_ExtremumApproachDetector, getSecondaryPVProvider, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ExtremumApproachDetector)[] = {
          { Py_tp_methods, t_ExtremumApproachDetector__methods_ },
          { Py_tp_init, (void *) t_ExtremumApproachDetector_init_ },
          { Py_tp_getset, t_ExtremumApproachDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ExtremumApproachDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(ExtremumApproachDetector, t_ExtremumApproachDetector, ExtremumApproachDetector);
        PyObject *t_ExtremumApproachDetector::wrap_Object(const ExtremumApproachDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ExtremumApproachDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ExtremumApproachDetector *self = (t_ExtremumApproachDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ExtremumApproachDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ExtremumApproachDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ExtremumApproachDetector *self = (t_ExtremumApproachDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ExtremumApproachDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(ExtremumApproachDetector), &PY_TYPE_DEF(ExtremumApproachDetector), module, "ExtremumApproachDetector", 0);
        }

        void t_ExtremumApproachDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtremumApproachDetector), "class_", make_descriptor(ExtremumApproachDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtremumApproachDetector), "wrapfn_", make_descriptor(t_ExtremumApproachDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ExtremumApproachDetector), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ExtremumApproachDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ExtremumApproachDetector::initializeClass, 1)))
            return NULL;
          return t_ExtremumApproachDetector::wrap_Object(ExtremumApproachDetector(((t_ExtremumApproachDetector *) arg)->object.this$));
        }
        static PyObject *t_ExtremumApproachDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ExtremumApproachDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ExtremumApproachDetector_of_(t_ExtremumApproachDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ExtremumApproachDetector_init_(t_ExtremumApproachDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
          ExtremumApproachDetector object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, &a0))
          {
            INT_CALL(object = ExtremumApproachDetector(a0));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(ExtremumApproachDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ExtremumApproachDetector_computeDeltaPV(t_ExtremumApproachDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinates result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.computeDeltaPV(a0));
            return ::org::orekit::utils::t_PVCoordinates::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "computeDeltaPV", arg);
          return NULL;
        }

        static PyObject *t_ExtremumApproachDetector_g(t_ExtremumApproachDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ExtremumApproachDetector), (PyObject *) self, "g", args, 2);
        }

        static PyObject *t_ExtremumApproachDetector_getSecondaryPVProvider(t_ExtremumApproachDetector *self)
        {
          ::org::orekit::utils::PVCoordinatesProvider result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondaryPVProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(result);
        }
        static PyObject *t_ExtremumApproachDetector_get__parameters_(t_ExtremumApproachDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ExtremumApproachDetector_get__secondaryPVProvider(t_ExtremumApproachDetector *self, void *data)
        {
          ::org::orekit::utils::PVCoordinatesProvider value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondaryPVProvider());
          return ::org::orekit::utils::t_PVCoordinatesProvider::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *OceanLoadDeformationCoefficients::class$ = NULL;
          jmethodID *OceanLoadDeformationCoefficients::mids$ = NULL;
          bool OceanLoadDeformationCoefficients::live$ = false;
          OceanLoadDeformationCoefficients *OceanLoadDeformationCoefficients::GEGOUT = NULL;
          OceanLoadDeformationCoefficients *OceanLoadDeformationCoefficients::IERS_1996 = NULL;
          OceanLoadDeformationCoefficients *OceanLoadDeformationCoefficients::IERS_2003 = NULL;
          OceanLoadDeformationCoefficients *OceanLoadDeformationCoefficients::IERS_2010 = NULL;

          jclass OceanLoadDeformationCoefficients::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCoefficients_be783177b060994b] = env->getMethodID(cls, "getCoefficients", "()[D");
              mids$[mid_valueOf_6aa299fb8ef27170] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;");
              mids$[mid_values_97c4af0801a238d8] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              GEGOUT = new OceanLoadDeformationCoefficients(env->getStaticObjectField(cls, "GEGOUT", "Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;"));
              IERS_1996 = new OceanLoadDeformationCoefficients(env->getStaticObjectField(cls, "IERS_1996", "Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;"));
              IERS_2003 = new OceanLoadDeformationCoefficients(env->getStaticObjectField(cls, "IERS_2003", "Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;"));
              IERS_2010 = new OceanLoadDeformationCoefficients(env->getStaticObjectField(cls, "IERS_2010", "Lorg/orekit/forces/gravity/potential/OceanLoadDeformationCoefficients;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          JArray< jdouble > OceanLoadDeformationCoefficients::getCoefficients() const
          {
            return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getCoefficients_be783177b060994b]));
          }

          OceanLoadDeformationCoefficients OceanLoadDeformationCoefficients::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return OceanLoadDeformationCoefficients(env->callStaticObjectMethod(cls, mids$[mid_valueOf_6aa299fb8ef27170], a0.this$));
          }

          JArray< OceanLoadDeformationCoefficients > OceanLoadDeformationCoefficients::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< OceanLoadDeformationCoefficients >(env->callStaticObjectMethod(cls, mids$[mid_values_97c4af0801a238d8]));
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
          static PyObject *t_OceanLoadDeformationCoefficients_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoadDeformationCoefficients_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OceanLoadDeformationCoefficients_of_(t_OceanLoadDeformationCoefficients *self, PyObject *args);
          static PyObject *t_OceanLoadDeformationCoefficients_getCoefficients(t_OceanLoadDeformationCoefficients *self);
          static PyObject *t_OceanLoadDeformationCoefficients_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_OceanLoadDeformationCoefficients_values(PyTypeObject *type);
          static PyObject *t_OceanLoadDeformationCoefficients_get__coefficients(t_OceanLoadDeformationCoefficients *self, void *data);
          static PyObject *t_OceanLoadDeformationCoefficients_get__parameters_(t_OceanLoadDeformationCoefficients *self, void *data);
          static PyGetSetDef t_OceanLoadDeformationCoefficients__fields_[] = {
            DECLARE_GET_FIELD(t_OceanLoadDeformationCoefficients, coefficients),
            DECLARE_GET_FIELD(t_OceanLoadDeformationCoefficients, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OceanLoadDeformationCoefficients__methods_[] = {
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, of_, METH_VARARGS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, getCoefficients, METH_NOARGS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_OceanLoadDeformationCoefficients, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OceanLoadDeformationCoefficients)[] = {
            { Py_tp_methods, t_OceanLoadDeformationCoefficients__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_OceanLoadDeformationCoefficients__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OceanLoadDeformationCoefficients)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(OceanLoadDeformationCoefficients, t_OceanLoadDeformationCoefficients, OceanLoadDeformationCoefficients);
          PyObject *t_OceanLoadDeformationCoefficients::wrap_Object(const OceanLoadDeformationCoefficients& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OceanLoadDeformationCoefficients::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OceanLoadDeformationCoefficients *self = (t_OceanLoadDeformationCoefficients *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_OceanLoadDeformationCoefficients::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_OceanLoadDeformationCoefficients::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_OceanLoadDeformationCoefficients *self = (t_OceanLoadDeformationCoefficients *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_OceanLoadDeformationCoefficients::install(PyObject *module)
          {
            installType(&PY_TYPE(OceanLoadDeformationCoefficients), &PY_TYPE_DEF(OceanLoadDeformationCoefficients), module, "OceanLoadDeformationCoefficients", 0);
          }

          void t_OceanLoadDeformationCoefficients::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "class_", make_descriptor(OceanLoadDeformationCoefficients::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "wrapfn_", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "boxfn_", make_descriptor(boxObject));
            env->getClass(OceanLoadDeformationCoefficients::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "GEGOUT", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_Object(*OceanLoadDeformationCoefficients::GEGOUT)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "IERS_1996", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_Object(*OceanLoadDeformationCoefficients::IERS_1996)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "IERS_2003", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_Object(*OceanLoadDeformationCoefficients::IERS_2003)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OceanLoadDeformationCoefficients), "IERS_2010", make_descriptor(t_OceanLoadDeformationCoefficients::wrap_Object(*OceanLoadDeformationCoefficients::IERS_2010)));
          }

          static PyObject *t_OceanLoadDeformationCoefficients_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OceanLoadDeformationCoefficients::initializeClass, 1)))
              return NULL;
            return t_OceanLoadDeformationCoefficients::wrap_Object(OceanLoadDeformationCoefficients(((t_OceanLoadDeformationCoefficients *) arg)->object.this$));
          }
          static PyObject *t_OceanLoadDeformationCoefficients_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OceanLoadDeformationCoefficients::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_OceanLoadDeformationCoefficients_of_(t_OceanLoadDeformationCoefficients *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_OceanLoadDeformationCoefficients_getCoefficients(t_OceanLoadDeformationCoefficients *self)
          {
            JArray< jdouble > result((jobject) NULL);
            OBJ_CALL(result = self->object.getCoefficients());
            return result.wrap();
          }

          static PyObject *t_OceanLoadDeformationCoefficients_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            OceanLoadDeformationCoefficients result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::valueOf(a0));
              return t_OceanLoadDeformationCoefficients::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_OceanLoadDeformationCoefficients_values(PyTypeObject *type)
          {
            JArray< OceanLoadDeformationCoefficients > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::forces::gravity::potential::OceanLoadDeformationCoefficients::values());
            return JArray<jobject>(result.this$).wrap(t_OceanLoadDeformationCoefficients::wrap_jobject);
          }
          static PyObject *t_OceanLoadDeformationCoefficients_get__parameters_(t_OceanLoadDeformationCoefficients *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_OceanLoadDeformationCoefficients_get__coefficients(t_OceanLoadDeformationCoefficients *self, void *data)
          {
            JArray< jdouble > value((jobject) NULL);
            OBJ_CALL(value = self->object.getCoefficients());
            return value.wrap();
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/clock/RinexClock.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataLine.h"
#include "org/orekit/files/rinex/AppliedDCBS.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/rinex/clock/RinexClock$Receiver.h"
#include "org/orekit/files/rinex/AppliedPCVS.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/files/rinex/clock/RinexClock$ReferenceClock.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "org/orekit/gnss/ObservationType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock::class$ = NULL;
          jmethodID *RinexClock::mids$ = NULL;
          bool RinexClock::live$ = false;

          jclass RinexClock::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock");

              mids$ = new jmethodID[max_mid];
              mids$[mid_addAppliedDCBS_cacb67a9e2822f90] = env->getMethodID(cls, "addAppliedDCBS", "(Lorg/orekit/files/rinex/AppliedDCBS;)V");
              mids$[mid_addAppliedPCVS_604ce729c44b1f15] = env->getMethodID(cls, "addAppliedPCVS", "(Lorg/orekit/files/rinex/AppliedPCVS;)V");
              mids$[mid_addClockData_5a478c5bc24dd562] = env->getMethodID(cls, "addClockData", "(Ljava/lang/String;Lorg/orekit/files/rinex/clock/RinexClock$ClockDataLine;)V");
              mids$[mid_addClockDataType_557d45aa8b705c60] = env->getMethodID(cls, "addClockDataType", "(Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;)V");
              mids$[mid_addComment_105e1eadb709d9ac] = env->getMethodID(cls, "addComment", "(Ljava/lang/String;)V");
              mids$[mid_addReceiver_2af1c219bbb11516] = env->getMethodID(cls, "addReceiver", "(Lorg/orekit/files/rinex/clock/RinexClock$Receiver;)V");
              mids$[mid_addReferenceClockList_0b0c18b32ea71a29] = env->getMethodID(cls, "addReferenceClockList", "(Ljava/util/List;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_addSatellite_105e1eadb709d9ac] = env->getMethodID(cls, "addSatellite", "(Ljava/lang/String;)V");
              mids$[mid_addSystemObservationType_741e751991beec0f] = env->getMethodID(cls, "addSystemObservationType", "(Lorg/orekit/gnss/SatelliteSystem;Lorg/orekit/gnss/ObservationType;)V");
              mids$[mid_getAgencyName_d2c8eb4129821f0e] = env->getMethodID(cls, "getAgencyName", "()Ljava/lang/String;");
              mids$[mid_getAnalysisCenterID_d2c8eb4129821f0e] = env->getMethodID(cls, "getAnalysisCenterID", "()Ljava/lang/String;");
              mids$[mid_getAnalysisCenterName_d2c8eb4129821f0e] = env->getMethodID(cls, "getAnalysisCenterName", "()Ljava/lang/String;");
              mids$[mid_getClockData_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getClockData", "()Ljava/util/Map;");
              mids$[mid_getClockDataTypes_d751c1a57012b438] = env->getMethodID(cls, "getClockDataTypes", "()Ljava/util/List;");
              mids$[mid_getComments_d2c8eb4129821f0e] = env->getMethodID(cls, "getComments", "()Ljava/lang/String;");
              mids$[mid_getCreationDate_80e11148db499dda] = env->getMethodID(cls, "getCreationDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getCreationDateString_d2c8eb4129821f0e] = env->getMethodID(cls, "getCreationDateString", "()Ljava/lang/String;");
              mids$[mid_getCreationTimeString_d2c8eb4129821f0e] = env->getMethodID(cls, "getCreationTimeString", "()Ljava/lang/String;");
              mids$[mid_getCreationTimeZoneString_d2c8eb4129821f0e] = env->getMethodID(cls, "getCreationTimeZoneString", "()Ljava/lang/String;");
              mids$[mid_getExternalClockReference_d2c8eb4129821f0e] = env->getMethodID(cls, "getExternalClockReference", "()Ljava/lang/String;");
              mids$[mid_getFormatVersion_9981f74b2d109da6] = env->getMethodID(cls, "getFormatVersion", "()D");
              mids$[mid_getFrame_cb151471db4570f0] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
              mids$[mid_getFrameName_d2c8eb4129821f0e] = env->getMethodID(cls, "getFrameName", "()Ljava/lang/String;");
              mids$[mid_getListAppliedDCBS_d751c1a57012b438] = env->getMethodID(cls, "getListAppliedDCBS", "()Ljava/util/List;");
              mids$[mid_getListAppliedPCVS_d751c1a57012b438] = env->getMethodID(cls, "getListAppliedPCVS", "()Ljava/util/List;");
              mids$[mid_getNumberOfClockDataTypes_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfClockDataTypes", "()I");
              mids$[mid_getNumberOfLeapSeconds_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfLeapSeconds", "()I");
              mids$[mid_getNumberOfLeapSecondsGNSS_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfLeapSecondsGNSS", "()I");
              mids$[mid_getNumberOfReceivers_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfReceivers", "()I");
              mids$[mid_getNumberOfSatellites_d6ab429752e7c267] = env->getMethodID(cls, "getNumberOfSatellites", "()I");
              mids$[mid_getProgramName_d2c8eb4129821f0e] = env->getMethodID(cls, "getProgramName", "()Ljava/lang/String;");
              mids$[mid_getReceivers_d751c1a57012b438] = env->getMethodID(cls, "getReceivers", "()Ljava/util/List;");
              mids$[mid_getReferenceClocks_d11c7ec0e313e33d] = env->getMethodID(cls, "getReferenceClocks", "()Lorg/orekit/utils/TimeSpanMap;");
              mids$[mid_getSatelliteSystem_fb0bd27fcc3ba9fc] = env->getMethodID(cls, "getSatelliteSystem", "()Lorg/orekit/gnss/SatelliteSystem;");
              mids$[mid_getSatellites_d751c1a57012b438] = env->getMethodID(cls, "getSatellites", "()Ljava/util/List;");
              mids$[mid_getStationIdentifier_d2c8eb4129821f0e] = env->getMethodID(cls, "getStationIdentifier", "()Ljava/lang/String;");
              mids$[mid_getStationName_d2c8eb4129821f0e] = env->getMethodID(cls, "getStationName", "()Ljava/lang/String;");
              mids$[mid_getSystemObservationTypes_dbcb8bbac6b35e0d] = env->getMethodID(cls, "getSystemObservationTypes", "()Ljava/util/Map;");
              mids$[mid_getTimeScale_5e2cac12ab8da943] = env->getMethodID(cls, "getTimeScale", "()Lorg/orekit/time/TimeScale;");
              mids$[mid_getTimeSystem_6110a08bedf3a63d] = env->getMethodID(cls, "getTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
              mids$[mid_getTotalNumberOfDataLines_d6ab429752e7c267] = env->getMethodID(cls, "getTotalNumberOfDataLines", "()I");
              mids$[mid_numberOfObsTypes_29b0cae2b18a86fb] = env->getMethodID(cls, "numberOfObsTypes", "(Lorg/orekit/gnss/SatelliteSystem;)I");
              mids$[mid_setAgencyName_105e1eadb709d9ac] = env->getMethodID(cls, "setAgencyName", "(Ljava/lang/String;)V");
              mids$[mid_setAnalysisCenterID_105e1eadb709d9ac] = env->getMethodID(cls, "setAnalysisCenterID", "(Ljava/lang/String;)V");
              mids$[mid_setAnalysisCenterName_105e1eadb709d9ac] = env->getMethodID(cls, "setAnalysisCenterName", "(Ljava/lang/String;)V");
              mids$[mid_setCreationDate_8497861b879c83f7] = env->getMethodID(cls, "setCreationDate", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setCreationDateString_105e1eadb709d9ac] = env->getMethodID(cls, "setCreationDateString", "(Ljava/lang/String;)V");
              mids$[mid_setCreationTimeString_105e1eadb709d9ac] = env->getMethodID(cls, "setCreationTimeString", "(Ljava/lang/String;)V");
              mids$[mid_setCreationTimeZoneString_105e1eadb709d9ac] = env->getMethodID(cls, "setCreationTimeZoneString", "(Ljava/lang/String;)V");
              mids$[mid_setExternalClockReference_105e1eadb709d9ac] = env->getMethodID(cls, "setExternalClockReference", "(Ljava/lang/String;)V");
              mids$[mid_setFormatVersion_1ad26e8c8c0cd65b] = env->getMethodID(cls, "setFormatVersion", "(D)V");
              mids$[mid_setFrameName_105e1eadb709d9ac] = env->getMethodID(cls, "setFrameName", "(Ljava/lang/String;)V");
              mids$[mid_setNumberOfLeapSeconds_8fd427ab23829bf5] = env->getMethodID(cls, "setNumberOfLeapSeconds", "(I)V");
              mids$[mid_setNumberOfLeapSecondsGNSS_8fd427ab23829bf5] = env->getMethodID(cls, "setNumberOfLeapSecondsGNSS", "(I)V");
              mids$[mid_setProgramName_105e1eadb709d9ac] = env->getMethodID(cls, "setProgramName", "(Ljava/lang/String;)V");
              mids$[mid_setSatelliteSystem_b8157be2fa2780f9] = env->getMethodID(cls, "setSatelliteSystem", "(Lorg/orekit/gnss/SatelliteSystem;)V");
              mids$[mid_setStationIdentifier_105e1eadb709d9ac] = env->getMethodID(cls, "setStationIdentifier", "(Ljava/lang/String;)V");
              mids$[mid_setStationName_105e1eadb709d9ac] = env->getMethodID(cls, "setStationName", "(Ljava/lang/String;)V");
              mids$[mid_setTimeScale_7cb2659f4799e4d2] = env->getMethodID(cls, "setTimeScale", "(Lorg/orekit/time/TimeScale;)V");
              mids$[mid_setTimeSystem_70481f478101edcd] = env->getMethodID(cls, "setTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void RinexClock::addAppliedDCBS(const ::org::orekit::files::rinex::AppliedDCBS & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addAppliedDCBS_cacb67a9e2822f90], a0.this$);
          }

          void RinexClock::addAppliedPCVS(const ::org::orekit::files::rinex::AppliedPCVS & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addAppliedPCVS_604ce729c44b1f15], a0.this$);
          }

          void RinexClock::addClockData(const ::java::lang::String & a0, const ::org::orekit::files::rinex::clock::RinexClock$ClockDataLine & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addClockData_5a478c5bc24dd562], a0.this$, a1.this$);
          }

          void RinexClock::addClockDataType(const ::org::orekit::files::rinex::clock::RinexClock$ClockDataType & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addClockDataType_557d45aa8b705c60], a0.this$);
          }

          void RinexClock::addComment(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addComment_105e1eadb709d9ac], a0.this$);
          }

          void RinexClock::addReceiver(const ::org::orekit::files::rinex::clock::RinexClock$Receiver & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addReceiver_2af1c219bbb11516], a0.this$);
          }

          void RinexClock::addReferenceClockList(const ::java::util::List & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addReferenceClockList_0b0c18b32ea71a29], a0.this$, a1.this$);
          }

          void RinexClock::addSatellite(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_addSatellite_105e1eadb709d9ac], a0.this$);
          }

          void RinexClock::addSystemObservationType(const ::org::orekit::gnss::SatelliteSystem & a0, const ::org::orekit::gnss::ObservationType & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_addSystemObservationType_741e751991beec0f], a0.this$, a1.this$);
          }

          ::java::lang::String RinexClock::getAgencyName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAgencyName_d2c8eb4129821f0e]));
          }

          ::java::lang::String RinexClock::getAnalysisCenterID() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAnalysisCenterID_d2c8eb4129821f0e]));
          }

          ::java::lang::String RinexClock::getAnalysisCenterName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getAnalysisCenterName_d2c8eb4129821f0e]));
          }

          ::java::util::Map RinexClock::getClockData() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getClockData_dbcb8bbac6b35e0d]));
          }

          ::java::util::List RinexClock::getClockDataTypes() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getClockDataTypes_d751c1a57012b438]));
          }

          ::java::lang::String RinexClock::getComments() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getComments_d2c8eb4129821f0e]));
          }

          ::org::orekit::time::AbsoluteDate RinexClock::getCreationDate() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getCreationDate_80e11148db499dda]));
          }

          ::java::lang::String RinexClock::getCreationDateString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCreationDateString_d2c8eb4129821f0e]));
          }

          ::java::lang::String RinexClock::getCreationTimeString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCreationTimeString_d2c8eb4129821f0e]));
          }

          ::java::lang::String RinexClock::getCreationTimeZoneString() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCreationTimeZoneString_d2c8eb4129821f0e]));
          }

          ::java::lang::String RinexClock::getExternalClockReference() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getExternalClockReference_d2c8eb4129821f0e]));
          }

          jdouble RinexClock::getFormatVersion() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFormatVersion_9981f74b2d109da6]);
          }

          ::org::orekit::frames::Frame RinexClock::getFrame() const
          {
            return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_cb151471db4570f0]));
          }

          ::java::lang::String RinexClock::getFrameName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getFrameName_d2c8eb4129821f0e]));
          }

          ::java::util::List RinexClock::getListAppliedDCBS() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getListAppliedDCBS_d751c1a57012b438]));
          }

          ::java::util::List RinexClock::getListAppliedPCVS() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getListAppliedPCVS_d751c1a57012b438]));
          }

          jint RinexClock::getNumberOfClockDataTypes() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfClockDataTypes_d6ab429752e7c267]);
          }

          jint RinexClock::getNumberOfLeapSeconds() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfLeapSeconds_d6ab429752e7c267]);
          }

          jint RinexClock::getNumberOfLeapSecondsGNSS() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfLeapSecondsGNSS_d6ab429752e7c267]);
          }

          jint RinexClock::getNumberOfReceivers() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfReceivers_d6ab429752e7c267]);
          }

          jint RinexClock::getNumberOfSatellites() const
          {
            return env->callIntMethod(this$, mids$[mid_getNumberOfSatellites_d6ab429752e7c267]);
          }

          ::java::lang::String RinexClock::getProgramName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getProgramName_d2c8eb4129821f0e]));
          }

          ::java::util::List RinexClock::getReceivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getReceivers_d751c1a57012b438]));
          }

          ::org::orekit::utils::TimeSpanMap RinexClock::getReferenceClocks() const
          {
            return ::org::orekit::utils::TimeSpanMap(env->callObjectMethod(this$, mids$[mid_getReferenceClocks_d11c7ec0e313e33d]));
          }

          ::org::orekit::gnss::SatelliteSystem RinexClock::getSatelliteSystem() const
          {
            return ::org::orekit::gnss::SatelliteSystem(env->callObjectMethod(this$, mids$[mid_getSatelliteSystem_fb0bd27fcc3ba9fc]));
          }

          ::java::util::List RinexClock::getSatellites() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSatellites_d751c1a57012b438]));
          }

          ::java::lang::String RinexClock::getStationIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationIdentifier_d2c8eb4129821f0e]));
          }

          ::java::lang::String RinexClock::getStationName() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getStationName_d2c8eb4129821f0e]));
          }

          ::java::util::Map RinexClock::getSystemObservationTypes() const
          {
            return ::java::util::Map(env->callObjectMethod(this$, mids$[mid_getSystemObservationTypes_dbcb8bbac6b35e0d]));
          }

          ::org::orekit::time::TimeScale RinexClock::getTimeScale() const
          {
            return ::org::orekit::time::TimeScale(env->callObjectMethod(this$, mids$[mid_getTimeScale_5e2cac12ab8da943]));
          }

          ::org::orekit::gnss::TimeSystem RinexClock::getTimeSystem() const
          {
            return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getTimeSystem_6110a08bedf3a63d]));
          }

          jint RinexClock::getTotalNumberOfDataLines() const
          {
            return env->callIntMethod(this$, mids$[mid_getTotalNumberOfDataLines_d6ab429752e7c267]);
          }

          jint RinexClock::numberOfObsTypes(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            return env->callIntMethod(this$, mids$[mid_numberOfObsTypes_29b0cae2b18a86fb], a0.this$);
          }

          void RinexClock::setAgencyName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAgencyName_105e1eadb709d9ac], a0.this$);
          }

          void RinexClock::setAnalysisCenterID(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAnalysisCenterID_105e1eadb709d9ac], a0.this$);
          }

          void RinexClock::setAnalysisCenterName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setAnalysisCenterName_105e1eadb709d9ac], a0.this$);
          }

          void RinexClock::setCreationDate(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDate_8497861b879c83f7], a0.this$);
          }

          void RinexClock::setCreationDateString(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationDateString_105e1eadb709d9ac], a0.this$);
          }

          void RinexClock::setCreationTimeString(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationTimeString_105e1eadb709d9ac], a0.this$);
          }

          void RinexClock::setCreationTimeZoneString(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setCreationTimeZoneString_105e1eadb709d9ac], a0.this$);
          }

          void RinexClock::setExternalClockReference(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setExternalClockReference_105e1eadb709d9ac], a0.this$);
          }

          void RinexClock::setFormatVersion(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFormatVersion_1ad26e8c8c0cd65b], a0);
          }

          void RinexClock::setFrameName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setFrameName_105e1eadb709d9ac], a0.this$);
          }

          void RinexClock::setNumberOfLeapSeconds(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNumberOfLeapSeconds_8fd427ab23829bf5], a0);
          }

          void RinexClock::setNumberOfLeapSecondsGNSS(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setNumberOfLeapSecondsGNSS_8fd427ab23829bf5], a0);
          }

          void RinexClock::setProgramName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setProgramName_105e1eadb709d9ac], a0.this$);
          }

          void RinexClock::setSatelliteSystem(const ::org::orekit::gnss::SatelliteSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSatelliteSystem_b8157be2fa2780f9], a0.this$);
          }

          void RinexClock::setStationIdentifier(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setStationIdentifier_105e1eadb709d9ac], a0.this$);
          }

          void RinexClock::setStationName(const ::java::lang::String & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setStationName_105e1eadb709d9ac], a0.this$);
          }

          void RinexClock::setTimeScale(const ::org::orekit::time::TimeScale & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTimeScale_7cb2659f4799e4d2], a0.this$);
          }

          void RinexClock::setTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTimeSystem_70481f478101edcd], a0.this$);
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
          static PyObject *t_RinexClock_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock_addAppliedDCBS(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addAppliedPCVS(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addClockData(t_RinexClock *self, PyObject *args);
          static PyObject *t_RinexClock_addClockDataType(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addComment(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addReceiver(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addReferenceClockList(t_RinexClock *self, PyObject *args);
          static PyObject *t_RinexClock_addSatellite(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_addSystemObservationType(t_RinexClock *self, PyObject *args);
          static PyObject *t_RinexClock_getAgencyName(t_RinexClock *self);
          static PyObject *t_RinexClock_getAnalysisCenterID(t_RinexClock *self);
          static PyObject *t_RinexClock_getAnalysisCenterName(t_RinexClock *self);
          static PyObject *t_RinexClock_getClockData(t_RinexClock *self);
          static PyObject *t_RinexClock_getClockDataTypes(t_RinexClock *self);
          static PyObject *t_RinexClock_getComments(t_RinexClock *self);
          static PyObject *t_RinexClock_getCreationDate(t_RinexClock *self);
          static PyObject *t_RinexClock_getCreationDateString(t_RinexClock *self);
          static PyObject *t_RinexClock_getCreationTimeString(t_RinexClock *self);
          static PyObject *t_RinexClock_getCreationTimeZoneString(t_RinexClock *self);
          static PyObject *t_RinexClock_getExternalClockReference(t_RinexClock *self);
          static PyObject *t_RinexClock_getFormatVersion(t_RinexClock *self);
          static PyObject *t_RinexClock_getFrame(t_RinexClock *self);
          static PyObject *t_RinexClock_getFrameName(t_RinexClock *self);
          static PyObject *t_RinexClock_getListAppliedDCBS(t_RinexClock *self);
          static PyObject *t_RinexClock_getListAppliedPCVS(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfClockDataTypes(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfLeapSeconds(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfLeapSecondsGNSS(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfReceivers(t_RinexClock *self);
          static PyObject *t_RinexClock_getNumberOfSatellites(t_RinexClock *self);
          static PyObject *t_RinexClock_getProgramName(t_RinexClock *self);
          static PyObject *t_RinexClock_getReceivers(t_RinexClock *self);
          static PyObject *t_RinexClock_getReferenceClocks(t_RinexClock *self);
          static PyObject *t_RinexClock_getSatelliteSystem(t_RinexClock *self);
          static PyObject *t_RinexClock_getSatellites(t_RinexClock *self);
          static PyObject *t_RinexClock_getStationIdentifier(t_RinexClock *self);
          static PyObject *t_RinexClock_getStationName(t_RinexClock *self);
          static PyObject *t_RinexClock_getSystemObservationTypes(t_RinexClock *self);
          static PyObject *t_RinexClock_getTimeScale(t_RinexClock *self);
          static PyObject *t_RinexClock_getTimeSystem(t_RinexClock *self);
          static PyObject *t_RinexClock_getTotalNumberOfDataLines(t_RinexClock *self);
          static PyObject *t_RinexClock_numberOfObsTypes(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setAgencyName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setAnalysisCenterID(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setAnalysisCenterName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setCreationDate(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setCreationDateString(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setCreationTimeString(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setCreationTimeZoneString(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setExternalClockReference(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setFormatVersion(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setFrameName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setNumberOfLeapSeconds(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setNumberOfLeapSecondsGNSS(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setProgramName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setSatelliteSystem(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setStationIdentifier(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setStationName(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setTimeScale(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_setTimeSystem(t_RinexClock *self, PyObject *arg);
          static PyObject *t_RinexClock_get__agencyName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__agencyName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__analysisCenterID(t_RinexClock *self, void *data);
          static int t_RinexClock_set__analysisCenterID(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__analysisCenterName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__analysisCenterName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__clockData(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__clockDataTypes(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__comments(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__creationDate(t_RinexClock *self, void *data);
          static int t_RinexClock_set__creationDate(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__creationDateString(t_RinexClock *self, void *data);
          static int t_RinexClock_set__creationDateString(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__creationTimeString(t_RinexClock *self, void *data);
          static int t_RinexClock_set__creationTimeString(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__creationTimeZoneString(t_RinexClock *self, void *data);
          static int t_RinexClock_set__creationTimeZoneString(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__externalClockReference(t_RinexClock *self, void *data);
          static int t_RinexClock_set__externalClockReference(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__formatVersion(t_RinexClock *self, void *data);
          static int t_RinexClock_set__formatVersion(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__frame(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__frameName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__frameName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__listAppliedDCBS(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__listAppliedPCVS(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__numberOfClockDataTypes(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__numberOfLeapSeconds(t_RinexClock *self, void *data);
          static int t_RinexClock_set__numberOfLeapSeconds(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__numberOfLeapSecondsGNSS(t_RinexClock *self, void *data);
          static int t_RinexClock_set__numberOfLeapSecondsGNSS(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__numberOfReceivers(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__numberOfSatellites(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__programName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__programName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__receivers(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__referenceClocks(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__satelliteSystem(t_RinexClock *self, void *data);
          static int t_RinexClock_set__satelliteSystem(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__satellites(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__stationIdentifier(t_RinexClock *self, void *data);
          static int t_RinexClock_set__stationIdentifier(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__stationName(t_RinexClock *self, void *data);
          static int t_RinexClock_set__stationName(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__systemObservationTypes(t_RinexClock *self, void *data);
          static PyObject *t_RinexClock_get__timeScale(t_RinexClock *self, void *data);
          static int t_RinexClock_set__timeScale(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__timeSystem(t_RinexClock *self, void *data);
          static int t_RinexClock_set__timeSystem(t_RinexClock *self, PyObject *arg, void *data);
          static PyObject *t_RinexClock_get__totalNumberOfDataLines(t_RinexClock *self, void *data);
          static PyGetSetDef t_RinexClock__fields_[] = {
            DECLARE_GETSET_FIELD(t_RinexClock, agencyName),
            DECLARE_GETSET_FIELD(t_RinexClock, analysisCenterID),
            DECLARE_GETSET_FIELD(t_RinexClock, analysisCenterName),
            DECLARE_GET_FIELD(t_RinexClock, clockData),
            DECLARE_GET_FIELD(t_RinexClock, clockDataTypes),
            DECLARE_GET_FIELD(t_RinexClock, comments),
            DECLARE_GETSET_FIELD(t_RinexClock, creationDate),
            DECLARE_GETSET_FIELD(t_RinexClock, creationDateString),
            DECLARE_GETSET_FIELD(t_RinexClock, creationTimeString),
            DECLARE_GETSET_FIELD(t_RinexClock, creationTimeZoneString),
            DECLARE_GETSET_FIELD(t_RinexClock, externalClockReference),
            DECLARE_GETSET_FIELD(t_RinexClock, formatVersion),
            DECLARE_GET_FIELD(t_RinexClock, frame),
            DECLARE_GETSET_FIELD(t_RinexClock, frameName),
            DECLARE_GET_FIELD(t_RinexClock, listAppliedDCBS),
            DECLARE_GET_FIELD(t_RinexClock, listAppliedPCVS),
            DECLARE_GET_FIELD(t_RinexClock, numberOfClockDataTypes),
            DECLARE_GETSET_FIELD(t_RinexClock, numberOfLeapSeconds),
            DECLARE_GETSET_FIELD(t_RinexClock, numberOfLeapSecondsGNSS),
            DECLARE_GET_FIELD(t_RinexClock, numberOfReceivers),
            DECLARE_GET_FIELD(t_RinexClock, numberOfSatellites),
            DECLARE_GETSET_FIELD(t_RinexClock, programName),
            DECLARE_GET_FIELD(t_RinexClock, receivers),
            DECLARE_GET_FIELD(t_RinexClock, referenceClocks),
            DECLARE_GETSET_FIELD(t_RinexClock, satelliteSystem),
            DECLARE_GET_FIELD(t_RinexClock, satellites),
            DECLARE_GETSET_FIELD(t_RinexClock, stationIdentifier),
            DECLARE_GETSET_FIELD(t_RinexClock, stationName),
            DECLARE_GET_FIELD(t_RinexClock, systemObservationTypes),
            DECLARE_GETSET_FIELD(t_RinexClock, timeScale),
            DECLARE_GETSET_FIELD(t_RinexClock, timeSystem),
            DECLARE_GET_FIELD(t_RinexClock, totalNumberOfDataLines),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock__methods_[] = {
            DECLARE_METHOD(t_RinexClock, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock, addAppliedDCBS, METH_O),
            DECLARE_METHOD(t_RinexClock, addAppliedPCVS, METH_O),
            DECLARE_METHOD(t_RinexClock, addClockData, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock, addClockDataType, METH_O),
            DECLARE_METHOD(t_RinexClock, addComment, METH_O),
            DECLARE_METHOD(t_RinexClock, addReceiver, METH_O),
            DECLARE_METHOD(t_RinexClock, addReferenceClockList, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock, addSatellite, METH_O),
            DECLARE_METHOD(t_RinexClock, addSystemObservationType, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock, getAgencyName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getAnalysisCenterID, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getAnalysisCenterName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getClockData, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getClockDataTypes, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getComments, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getCreationDate, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getCreationDateString, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getCreationTimeString, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getCreationTimeZoneString, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getExternalClockReference, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getFormatVersion, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getFrame, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getFrameName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getListAppliedDCBS, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getListAppliedPCVS, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfClockDataTypes, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfLeapSeconds, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfLeapSecondsGNSS, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfReceivers, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getNumberOfSatellites, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getProgramName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getReceivers, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getReferenceClocks, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getSatelliteSystem, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getSatellites, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getStationIdentifier, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getStationName, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getSystemObservationTypes, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getTimeScale, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, getTotalNumberOfDataLines, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock, numberOfObsTypes, METH_O),
            DECLARE_METHOD(t_RinexClock, setAgencyName, METH_O),
            DECLARE_METHOD(t_RinexClock, setAnalysisCenterID, METH_O),
            DECLARE_METHOD(t_RinexClock, setAnalysisCenterName, METH_O),
            DECLARE_METHOD(t_RinexClock, setCreationDate, METH_O),
            DECLARE_METHOD(t_RinexClock, setCreationDateString, METH_O),
            DECLARE_METHOD(t_RinexClock, setCreationTimeString, METH_O),
            DECLARE_METHOD(t_RinexClock, setCreationTimeZoneString, METH_O),
            DECLARE_METHOD(t_RinexClock, setExternalClockReference, METH_O),
            DECLARE_METHOD(t_RinexClock, setFormatVersion, METH_O),
            DECLARE_METHOD(t_RinexClock, setFrameName, METH_O),
            DECLARE_METHOD(t_RinexClock, setNumberOfLeapSeconds, METH_O),
            DECLARE_METHOD(t_RinexClock, setNumberOfLeapSecondsGNSS, METH_O),
            DECLARE_METHOD(t_RinexClock, setProgramName, METH_O),
            DECLARE_METHOD(t_RinexClock, setSatelliteSystem, METH_O),
            DECLARE_METHOD(t_RinexClock, setStationIdentifier, METH_O),
            DECLARE_METHOD(t_RinexClock, setStationName, METH_O),
            DECLARE_METHOD(t_RinexClock, setTimeScale, METH_O),
            DECLARE_METHOD(t_RinexClock, setTimeSystem, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock)[] = {
            { Py_tp_methods, t_RinexClock__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexClock__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClock, t_RinexClock, RinexClock);

          void t_RinexClock::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock), &PY_TYPE_DEF(RinexClock), module, "RinexClock", 0);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "ClockDataType", make_descriptor(&PY_TYPE_DEF(RinexClock$ClockDataType)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "Receiver", make_descriptor(&PY_TYPE_DEF(RinexClock$Receiver)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "ReferenceClock", make_descriptor(&PY_TYPE_DEF(RinexClock$ReferenceClock)));
          }

          void t_RinexClock::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "class_", make_descriptor(RinexClock::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "wrapfn_", make_descriptor(t_RinexClock::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClock_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock::initializeClass, 1)))
              return NULL;
            return t_RinexClock::wrap_Object(RinexClock(((t_RinexClock *) arg)->object.this$));
          }
          static PyObject *t_RinexClock_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexClock_addAppliedDCBS(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::AppliedDCBS a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::AppliedDCBS::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addAppliedDCBS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addAppliedDCBS", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addAppliedPCVS(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::AppliedPCVS a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::AppliedPCVS::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addAppliedPCVS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addAppliedPCVS", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addClockData(t_RinexClock *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataLine a1((jobject) NULL);

            if (!parseArgs(args, "sk", ::org::orekit::files::rinex::clock::RinexClock$ClockDataLine::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.addClockData(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addClockData", args);
            return NULL;
          }

          static PyObject *t_RinexClock_addClockDataType(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::clock::RinexClock$ClockDataType a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::initializeClass, &a0, &p0, ::org::orekit::files::rinex::clock::t_RinexClock$ClockDataType::parameters_))
            {
              OBJ_CALL(self->object.addClockDataType(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addClockDataType", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addComment(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.addComment(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addComment", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addReceiver(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::clock::RinexClock$Receiver a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::files::rinex::clock::RinexClock$Receiver::initializeClass, &a0))
            {
              OBJ_CALL(self->object.addReceiver(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addReceiver", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addReferenceClockList(t_RinexClock *self, PyObject *args)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Kk", ::java::util::List::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::java::util::t_List::parameters_, &a1))
            {
              OBJ_CALL(self->object.addReferenceClockList(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addReferenceClockList", args);
            return NULL;
          }

          static PyObject *t_RinexClock_addSatellite(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.addSatellite(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSatellite", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_addSystemObservationType(t_RinexClock *self, PyObject *args)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::gnss::ObservationType a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::orekit::gnss::SatelliteSystem::initializeClass, ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &p1, ::org::orekit::gnss::t_ObservationType::parameters_))
            {
              OBJ_CALL(self->object.addSystemObservationType(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addSystemObservationType", args);
            return NULL;
          }

          static PyObject *t_RinexClock_getAgencyName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAgencyName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getAnalysisCenterID(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAnalysisCenterID());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getAnalysisCenterName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getAnalysisCenterName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getClockData(t_RinexClock *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getClockData());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getClockDataTypes(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getClockDataTypes());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::clock::PY_TYPE(RinexClock$ClockDataType));
          }

          static PyObject *t_RinexClock_getComments(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getComments());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getCreationDate(t_RinexClock *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getCreationDateString(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationDateString());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getCreationTimeString(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationTimeString());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getCreationTimeZoneString(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getCreationTimeZoneString());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getExternalClockReference(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getExternalClockReference());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getFormatVersion(t_RinexClock *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock_getFrame(t_RinexClock *self)
          {
            ::org::orekit::frames::Frame result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getFrameName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getFrameName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getListAppliedDCBS(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getListAppliedDCBS());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::PY_TYPE(AppliedDCBS));
          }

          static PyObject *t_RinexClock_getListAppliedPCVS(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getListAppliedPCVS());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::PY_TYPE(AppliedPCVS));
          }

          static PyObject *t_RinexClock_getNumberOfClockDataTypes(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfClockDataTypes());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getNumberOfLeapSeconds(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfLeapSeconds());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getNumberOfLeapSecondsGNSS(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfLeapSecondsGNSS());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getNumberOfReceivers(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfReceivers());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getNumberOfSatellites(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getNumberOfSatellites());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_getProgramName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getProgramName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getReceivers(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::rinex::clock::PY_TYPE(RinexClock$Receiver));
          }

          static PyObject *t_RinexClock_getReferenceClocks(t_RinexClock *self)
          {
            ::org::orekit::utils::TimeSpanMap result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceClocks());
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getSatelliteSystem(t_RinexClock *self)
          {
            ::org::orekit::gnss::SatelliteSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getSatellites(t_RinexClock *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSatellites());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          static PyObject *t_RinexClock_getStationIdentifier(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getStationIdentifier());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getStationName(t_RinexClock *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getStationName());
            return j2p(result);
          }

          static PyObject *t_RinexClock_getSystemObservationTypes(t_RinexClock *self)
          {
            ::java::util::Map result((jobject) NULL);
            OBJ_CALL(result = self->object.getSystemObservationTypes());
            return ::java::util::t_Map::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getTimeScale(t_RinexClock *self)
          {
            ::org::orekit::time::TimeScale result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeScale());
            return ::org::orekit::time::t_TimeScale::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getTimeSystem(t_RinexClock *self)
          {
            ::org::orekit::gnss::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_RinexClock_getTotalNumberOfDataLines(t_RinexClock *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getTotalNumberOfDataLines());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_RinexClock_numberOfObsTypes(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint result;

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(result = self->object.numberOfObsTypes(a0));
              return PyLong_FromLong((long) result);
            }

            PyErr_SetArgsError((PyObject *) self, "numberOfObsTypes", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setAgencyName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAgencyName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAgencyName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setAnalysisCenterID(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAnalysisCenterID(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAnalysisCenterID", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setAnalysisCenterName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setAnalysisCenterName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setAnalysisCenterName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setCreationDate(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setCreationDate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationDate", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setCreationDateString(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setCreationDateString(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationDateString", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setCreationTimeString(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setCreationTimeString(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationTimeString", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setCreationTimeZoneString(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setCreationTimeZoneString(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setCreationTimeZoneString", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setExternalClockReference(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setExternalClockReference(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setExternalClockReference", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setFormatVersion(t_RinexClock *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setFormatVersion(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFormatVersion", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setFrameName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setFrameName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFrameName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setNumberOfLeapSeconds(t_RinexClock *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setNumberOfLeapSeconds(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNumberOfLeapSeconds", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setNumberOfLeapSecondsGNSS(t_RinexClock *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setNumberOfLeapSecondsGNSS(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setNumberOfLeapSecondsGNSS", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setProgramName(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setProgramName(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setProgramName", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setSatelliteSystem(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_))
            {
              OBJ_CALL(self->object.setSatelliteSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSatelliteSystem", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setStationIdentifier(t_RinexClock *self, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(self->object.setStationIdentifier(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setStationIdentifier", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setStationName(t_RinexClock *self, PyObject *arg)
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

          static PyObject *t_RinexClock_setTimeScale(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::time::TimeScale a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setTimeScale(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTimeScale", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_setTimeSystem(t_RinexClock *self, PyObject *arg)
          {
            ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
            {
              OBJ_CALL(self->object.setTimeSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTimeSystem", arg);
            return NULL;
          }

          static PyObject *t_RinexClock_get__agencyName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAgencyName());
            return j2p(value);
          }
          static int t_RinexClock_set__agencyName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAgencyName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "agencyName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__analysisCenterID(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAnalysisCenterID());
            return j2p(value);
          }
          static int t_RinexClock_set__analysisCenterID(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAnalysisCenterID(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "analysisCenterID", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__analysisCenterName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getAnalysisCenterName());
            return j2p(value);
          }
          static int t_RinexClock_set__analysisCenterName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setAnalysisCenterName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "analysisCenterName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__clockData(t_RinexClock *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getClockData());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__clockDataTypes(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getClockDataTypes());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__comments(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getComments());
            return j2p(value);
          }

          static PyObject *t_RinexClock_get__creationDate(t_RinexClock *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDate());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_RinexClock_set__creationDate(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setCreationDate(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationDate", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__creationDateString(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationDateString());
            return j2p(value);
          }
          static int t_RinexClock_set__creationDateString(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setCreationDateString(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationDateString", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__creationTimeString(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationTimeString());
            return j2p(value);
          }
          static int t_RinexClock_set__creationTimeString(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setCreationTimeString(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationTimeString", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__creationTimeZoneString(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getCreationTimeZoneString());
            return j2p(value);
          }
          static int t_RinexClock_set__creationTimeZoneString(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setCreationTimeZoneString(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "creationTimeZoneString", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__externalClockReference(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getExternalClockReference());
            return j2p(value);
          }
          static int t_RinexClock_set__externalClockReference(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setExternalClockReference(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "externalClockReference", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__formatVersion(t_RinexClock *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getFormatVersion());
            return PyFloat_FromDouble((double) value);
          }
          static int t_RinexClock_set__formatVersion(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setFormatVersion(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "formatVersion", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__frame(t_RinexClock *self, void *data)
          {
            ::org::orekit::frames::Frame value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrame());
            return ::org::orekit::frames::t_Frame::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__frameName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getFrameName());
            return j2p(value);
          }
          static int t_RinexClock_set__frameName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setFrameName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "frameName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__listAppliedDCBS(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getListAppliedDCBS());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__listAppliedPCVS(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getListAppliedPCVS());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__numberOfClockDataTypes(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfClockDataTypes());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_RinexClock_get__numberOfLeapSeconds(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfLeapSeconds());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexClock_set__numberOfLeapSeconds(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setNumberOfLeapSeconds(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "numberOfLeapSeconds", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__numberOfLeapSecondsGNSS(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfLeapSecondsGNSS());
            return PyLong_FromLong((long) value);
          }
          static int t_RinexClock_set__numberOfLeapSecondsGNSS(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setNumberOfLeapSecondsGNSS(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "numberOfLeapSecondsGNSS", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__numberOfReceivers(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfReceivers());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_RinexClock_get__numberOfSatellites(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getNumberOfSatellites());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_RinexClock_get__programName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getProgramName());
            return j2p(value);
          }
          static int t_RinexClock_set__programName(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setProgramName(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "programName", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__receivers(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceivers());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__referenceClocks(t_RinexClock *self, void *data)
          {
            ::org::orekit::utils::TimeSpanMap value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceClocks());
            return ::org::orekit::utils::t_TimeSpanMap::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__satelliteSystem(t_RinexClock *self, void *data)
          {
            ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatelliteSystem());
            return ::org::orekit::gnss::t_SatelliteSystem::wrap_Object(value);
          }
          static int t_RinexClock_set__satelliteSystem(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::SatelliteSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::SatelliteSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setSatelliteSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "satelliteSystem", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__satellites(t_RinexClock *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSatellites());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__stationIdentifier(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getStationIdentifier());
            return j2p(value);
          }
          static int t_RinexClock_set__stationIdentifier(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::java::lang::String value((jobject) NULL);
              if (!parseArg(arg, "s", &value))
              {
                INT_CALL(self->object.setStationIdentifier(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "stationIdentifier", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__stationName(t_RinexClock *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getStationName());
            return j2p(value);
          }
          static int t_RinexClock_set__stationName(t_RinexClock *self, PyObject *arg, void *data)
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

          static PyObject *t_RinexClock_get__systemObservationTypes(t_RinexClock *self, void *data)
          {
            ::java::util::Map value((jobject) NULL);
            OBJ_CALL(value = self->object.getSystemObservationTypes());
            return ::java::util::t_Map::wrap_Object(value);
          }

          static PyObject *t_RinexClock_get__timeScale(t_RinexClock *self, void *data)
          {
            ::org::orekit::time::TimeScale value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeScale());
            return ::org::orekit::time::t_TimeScale::wrap_Object(value);
          }
          static int t_RinexClock_set__timeScale(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::TimeScale value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::TimeScale::initializeClass, &value))
              {
                INT_CALL(self->object.setTimeScale(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "timeScale", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__timeSystem(t_RinexClock *self, void *data)
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
          }
          static int t_RinexClock_set__timeSystem(t_RinexClock *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::TimeSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setTimeSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "timeSystem", arg);
            return -1;
          }

          static PyObject *t_RinexClock_get__totalNumberOfDataLines(t_RinexClock *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getTotalNumberOfDataLines());
            return PyLong_FromLong((long) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/summary/Product.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/stat/descriptive/summary/Product.h"
#include "java/lang/Class.h"
#include "org/hipparchus/stat/descriptive/WeightedEvaluation.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {
        namespace summary {

          ::java::lang::Class *Product::class$ = NULL;
          jmethodID *Product::mids$ = NULL;
          bool Product::live$ = false;

          jclass Product::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/summary/Product");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_ff7cb6c242604316] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_aggregate_5c140d935a8b95b8] = env->getMethodID(cls, "aggregate", "(Lorg/hipparchus/stat/descriptive/summary/Product;)V");
              mids$[mid_clear_ff7cb6c242604316] = env->getMethodID(cls, "clear", "()V");
              mids$[mid_copy_a41f80898a65a28d] = env->getMethodID(cls, "copy", "()Lorg/hipparchus/stat/descriptive/summary/Product;");
              mids$[mid_evaluate_620ea098e5f0da00] = env->getMethodID(cls, "evaluate", "([DII)D");
              mids$[mid_evaluate_0b039b932db219bf] = env->getMethodID(cls, "evaluate", "([D[DII)D");
              mids$[mid_getN_42c72b98e3c2e08a] = env->getMethodID(cls, "getN", "()J");
              mids$[mid_getResult_9981f74b2d109da6] = env->getMethodID(cls, "getResult", "()D");
              mids$[mid_increment_1ad26e8c8c0cd65b] = env->getMethodID(cls, "increment", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Product::Product() : ::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic(env->newObject(initializeClass, &mids$, mid_init$_ff7cb6c242604316)) {}

          void Product::aggregate(const Product & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_aggregate_5c140d935a8b95b8], a0.this$);
          }

          void Product::clear() const
          {
            env->callVoidMethod(this$, mids$[mid_clear_ff7cb6c242604316]);
          }

          Product Product::copy() const
          {
            return Product(env->callObjectMethod(this$, mids$[mid_copy_a41f80898a65a28d]));
          }

          jdouble Product::evaluate(const JArray< jdouble > & a0, jint a1, jint a2) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_620ea098e5f0da00], a0.this$, a1, a2);
          }

          jdouble Product::evaluate(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jint a2, jint a3) const
          {
            return env->callDoubleMethod(this$, mids$[mid_evaluate_0b039b932db219bf], a0.this$, a1.this$, a2, a3);
          }

          jlong Product::getN() const
          {
            return env->callLongMethod(this$, mids$[mid_getN_42c72b98e3c2e08a]);
          }

          jdouble Product::getResult() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getResult_9981f74b2d109da6]);
          }

          void Product::increment(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_increment_1ad26e8c8c0cd65b], a0);
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
        namespace summary {
          static PyObject *t_Product_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Product_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Product_init_(t_Product *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Product_aggregate(t_Product *self, PyObject *arg);
          static PyObject *t_Product_clear(t_Product *self, PyObject *args);
          static PyObject *t_Product_copy(t_Product *self, PyObject *args);
          static PyObject *t_Product_evaluate(t_Product *self, PyObject *args);
          static PyObject *t_Product_getN(t_Product *self, PyObject *args);
          static PyObject *t_Product_getResult(t_Product *self, PyObject *args);
          static PyObject *t_Product_increment(t_Product *self, PyObject *args);
          static PyObject *t_Product_get__n(t_Product *self, void *data);
          static PyObject *t_Product_get__result(t_Product *self, void *data);
          static PyGetSetDef t_Product__fields_[] = {
            DECLARE_GET_FIELD(t_Product, n),
            DECLARE_GET_FIELD(t_Product, result),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Product__methods_[] = {
            DECLARE_METHOD(t_Product, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Product, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Product, aggregate, METH_O),
            DECLARE_METHOD(t_Product, clear, METH_VARARGS),
            DECLARE_METHOD(t_Product, copy, METH_VARARGS),
            DECLARE_METHOD(t_Product, evaluate, METH_VARARGS),
            DECLARE_METHOD(t_Product, getN, METH_VARARGS),
            DECLARE_METHOD(t_Product, getResult, METH_VARARGS),
            DECLARE_METHOD(t_Product, increment, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Product)[] = {
            { Py_tp_methods, t_Product__methods_ },
            { Py_tp_init, (void *) t_Product_init_ },
            { Py_tp_getset, t_Product__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Product)[] = {
            &PY_TYPE_DEF(::org::hipparchus::stat::descriptive::AbstractStorelessUnivariateStatistic),
            NULL
          };

          DEFINE_TYPE(Product, t_Product, Product);

          void t_Product::install(PyObject *module)
          {
            installType(&PY_TYPE(Product), &PY_TYPE_DEF(Product), module, "Product", 0);
          }

          void t_Product::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Product), "class_", make_descriptor(Product::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Product), "wrapfn_", make_descriptor(t_Product::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Product), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Product_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Product::initializeClass, 1)))
              return NULL;
            return t_Product::wrap_Object(Product(((t_Product *) arg)->object.this$));
          }
          static PyObject *t_Product_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Product::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Product_init_(t_Product *self, PyObject *args, PyObject *kwds)
          {
            Product object((jobject) NULL);

            INT_CALL(object = Product());
            self->object = object;

            return 0;
          }

          static PyObject *t_Product_aggregate(t_Product *self, PyObject *arg)
          {
            Product a0((jobject) NULL);

            if (!parseArg(arg, "k", Product::initializeClass, &a0))
            {
              OBJ_CALL(self->object.aggregate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "aggregate", arg);
            return NULL;
          }

          static PyObject *t_Product_clear(t_Product *self, PyObject *args)
          {

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(self->object.clear());
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "clear", args, 2);
          }

          static PyObject *t_Product_copy(t_Product *self, PyObject *args)
          {
            Product result((jobject) NULL);

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.copy());
              return t_Product::wrap_Object(result);
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "copy", args, 2);
          }

          static PyObject *t_Product_evaluate(t_Product *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
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
                JArray< jdouble > a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jint a2;
                jint a3;
                jdouble result;

                if (!parseArgs(args, "[D[DII", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = self->object.evaluate(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "evaluate", args, 2);
          }

          static PyObject *t_Product_getN(t_Product *self, PyObject *args)
          {
            jlong result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getN());
              return PyLong_FromLongLong((PY_LONG_LONG) result);
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "getN", args, 2);
          }

          static PyObject *t_Product_getResult(t_Product *self, PyObject *args)
          {
            jdouble result;

            if (!parseArgs(args, ""))
            {
              OBJ_CALL(result = self->object.getResult());
              return PyFloat_FromDouble((double) result);
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "getResult", args, 2);
          }

          static PyObject *t_Product_increment(t_Product *self, PyObject *args)
          {
            jdouble a0;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }

            return callSuper(PY_TYPE(Product), (PyObject *) self, "increment", args, 2);
          }

          static PyObject *t_Product_get__n(t_Product *self, void *data)
          {
            jlong value;
            OBJ_CALL(value = self->object.getN());
            return PyLong_FromLongLong((PY_LONG_LONG) value);
          }

          static PyObject *t_Product_get__result(t_Product *self, void *data)
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
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "org/orekit/errors/OrekitIllegalArgumentException.h"
#include "org/orekit/files/rinex/clock/RinexClock$ClockDataType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock$ClockDataType::class$ = NULL;
          jmethodID *RinexClock$ClockDataType::mids$ = NULL;
          bool RinexClock$ClockDataType::live$ = false;
          RinexClock$ClockDataType *RinexClock$ClockDataType::AR = NULL;
          RinexClock$ClockDataType *RinexClock$ClockDataType::AS = NULL;
          RinexClock$ClockDataType *RinexClock$ClockDataType::CR = NULL;
          RinexClock$ClockDataType *RinexClock$ClockDataType::DR = NULL;
          RinexClock$ClockDataType *RinexClock$ClockDataType::MS = NULL;

          jclass RinexClock$ClockDataType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock$ClockDataType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getKey_d2c8eb4129821f0e] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
              mids$[mid_parseClockDataType_9d95e2a9725042bc] = env->getStaticMethodID(cls, "parseClockDataType", "(Ljava/lang/String;)Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;");
              mids$[mid_valueOf_9d95e2a9725042bc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;");
              mids$[mid_values_14d5ed9e611550f0] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AR = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "AR", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              AS = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "AS", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              CR = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "CR", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              DR = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "DR", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              MS = new RinexClock$ClockDataType(env->getStaticObjectField(cls, "MS", "Lorg/orekit/files/rinex/clock/RinexClock$ClockDataType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::lang::String RinexClock$ClockDataType::getKey() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_d2c8eb4129821f0e]));
          }

          RinexClock$ClockDataType RinexClock$ClockDataType::parseClockDataType(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexClock$ClockDataType(env->callStaticObjectMethod(cls, mids$[mid_parseClockDataType_9d95e2a9725042bc], a0.this$));
          }

          RinexClock$ClockDataType RinexClock$ClockDataType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return RinexClock$ClockDataType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_9d95e2a9725042bc], a0.this$));
          }

          JArray< RinexClock$ClockDataType > RinexClock$ClockDataType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< RinexClock$ClockDataType >(env->callStaticObjectMethod(cls, mids$[mid_values_14d5ed9e611550f0]));
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
          static PyObject *t_RinexClock$ClockDataType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ClockDataType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ClockDataType_of_(t_RinexClock$ClockDataType *self, PyObject *args);
          static PyObject *t_RinexClock$ClockDataType_getKey(t_RinexClock$ClockDataType *self);
          static PyObject *t_RinexClock$ClockDataType_parseClockDataType(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$ClockDataType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_RinexClock$ClockDataType_values(PyTypeObject *type);
          static PyObject *t_RinexClock$ClockDataType_get__key(t_RinexClock$ClockDataType *self, void *data);
          static PyObject *t_RinexClock$ClockDataType_get__parameters_(t_RinexClock$ClockDataType *self, void *data);
          static PyGetSetDef t_RinexClock$ClockDataType__fields_[] = {
            DECLARE_GET_FIELD(t_RinexClock$ClockDataType, key),
            DECLARE_GET_FIELD(t_RinexClock$ClockDataType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock$ClockDataType__methods_[] = {
            DECLARE_METHOD(t_RinexClock$ClockDataType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, of_, METH_VARARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, getKey, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, parseClockDataType, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$ClockDataType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock$ClockDataType)[] = {
            { Py_tp_methods, t_RinexClock$ClockDataType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_RinexClock$ClockDataType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock$ClockDataType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(RinexClock$ClockDataType, t_RinexClock$ClockDataType, RinexClock$ClockDataType);
          PyObject *t_RinexClock$ClockDataType::wrap_Object(const RinexClock$ClockDataType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexClock$ClockDataType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexClock$ClockDataType *self = (t_RinexClock$ClockDataType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_RinexClock$ClockDataType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_RinexClock$ClockDataType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_RinexClock$ClockDataType *self = (t_RinexClock$ClockDataType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_RinexClock$ClockDataType::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock$ClockDataType), &PY_TYPE_DEF(RinexClock$ClockDataType), module, "RinexClock$ClockDataType", 0);
          }

          void t_RinexClock$ClockDataType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "class_", make_descriptor(RinexClock$ClockDataType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "wrapfn_", make_descriptor(t_RinexClock$ClockDataType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "boxfn_", make_descriptor(boxObject));
            env->getClass(RinexClock$ClockDataType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "AR", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::AR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "AS", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::AS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "CR", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::CR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "DR", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::DR)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$ClockDataType), "MS", make_descriptor(t_RinexClock$ClockDataType::wrap_Object(*RinexClock$ClockDataType::MS)));
          }

          static PyObject *t_RinexClock$ClockDataType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock$ClockDataType::initializeClass, 1)))
              return NULL;
            return t_RinexClock$ClockDataType::wrap_Object(RinexClock$ClockDataType(((t_RinexClock$ClockDataType *) arg)->object.this$));
          }
          static PyObject *t_RinexClock$ClockDataType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock$ClockDataType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_RinexClock$ClockDataType_of_(t_RinexClock$ClockDataType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_RinexClock$ClockDataType_getKey(t_RinexClock$ClockDataType *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getKey());
            return j2p(result);
          }

          static PyObject *t_RinexClock$ClockDataType_parseClockDataType(PyTypeObject *type, PyObject *arg)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexClock$ClockDataType result((jobject) NULL);

            if (!parseArg(arg, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::parseClockDataType(a0));
              return t_RinexClock$ClockDataType::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "parseClockDataType", arg);
            return NULL;
          }

          static PyObject *t_RinexClock$ClockDataType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            RinexClock$ClockDataType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::valueOf(a0));
              return t_RinexClock$ClockDataType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_RinexClock$ClockDataType_values(PyTypeObject *type)
          {
            JArray< RinexClock$ClockDataType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::clock::RinexClock$ClockDataType::values());
            return JArray<jobject>(result.this$).wrap(t_RinexClock$ClockDataType::wrap_jobject);
          }
          static PyObject *t_RinexClock$ClockDataType_get__parameters_(t_RinexClock$ClockDataType *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_RinexClock$ClockDataType_get__key(t_RinexClock$ClockDataType *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getKey());
            return j2p(value);
          }
        }
      }
    }
  }
}
